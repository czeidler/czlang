use std::collections::{HashMap, HashSet};

use super::{
    flow_container::{CurrentFlowContainer, FlowContainer},
    types::{intersection, SArray, SRefType, SSlice, SumType, Type},
    ClosureContext, ClosureType,
};
use crate::{
    ast::{
        self, Block, BlockParent, BlockTrait, Expression, ExpressionType, Field, FileContext,
        FileTrait, Function, FunctionCall, FunctionSignature, FunctionTrait, IfAlternative,
        IfExpression, LangError, NodeData, Parameter, Receiver, RefType, RootSymbol,
        SelectorExpression, SelectorField, Statement, Struct, StructFieldInitialization,
        StructInitialization, TypeParam, TypeParamType, VarDeclaration,
    },
    buildin::Buildins,
    types::Ptr,
};

pub struct ExpContext {
    // For example, used to get the parent Function or to lookup local identifiers
    pub block: Ptr<Block>,
    pub pipe_arg: Option<SumType>,
}

impl ExpContext {
    pub fn new(block: &Ptr<Block>, pipe_arg: Option<SumType>) -> Self {
        ExpContext {
            block: block.clone(),
            pipe_arg,
        }
    }
}

#[derive(Debug, Clone)]
pub struct FileSemantics {
    /// Top level functions
    pub functions: HashMap<String, Ptr<Function>>,
    /// Struct methods declarations
    pub methods: Vec<Ptr<Function>>,
    pub structs: HashMap<String, Ptr<Struct>>,
}

/// Context in which a type is used, e.g. needed to resolve generic types
#[derive(Debug, Clone)]
pub enum TypeQueryContext {
    Struct(Ptr<Struct>),
    Function(FunctionSignature),
    /// Context of the receiver of a struct method definition, e.g. (self &MyStruct)method()
    StructMethodReceiver,
}

impl TypeQueryContext {
    pub fn from_fun(fun: &Function) -> Self {
        TypeQueryContext::Function(fun.signature.clone())
    }

    pub fn from_block(block: &Block) -> Self {
        TypeQueryContext::Function(block.fun().signature.clone())
    }
}

#[derive(Debug, Clone)]
pub struct BlockSemantics {
    pub vars: HashMap<String, Ptr<VarDeclaration>>,
    /// block return expression from the last statement
    pub block_return: Option<Expression>,
}

#[derive(Debug, Clone)]
pub enum IdentifierBinding {
    VarDeclaration(Ptr<VarDeclaration>),
    Parameter(Parameter),
    PipeArg(SumType),
}

#[derive(Debug, Clone)]
pub enum FunctionCallBinding {
    Function(Ptr<Function>),
    Buildin(FunctionSignature),
}

impl FunctionCallBinding {
    pub fn as_function_signature(&self) -> &FunctionSignature {
        match self {
            FunctionCallBinding::Function(fun) => &fun.signature,
            FunctionCallBinding::Buildin(sig) => sig,
        }
    }
}

#[derive(Debug, Clone)]
pub struct FunctionCallSemantics {
    pub binding: Option<FunctionCallBinding>,
}

#[derive(Debug, Clone)]
pub struct MethodCallSemantics {
    pub binding: Option<Ptr<Function>>,
}

#[derive(Debug, Clone)]
pub struct ExpressionSemantics {
    /// Either the direct type from the expression or the more refined type if the expression type was unresolved.
    /// For example, an int literal expression for an argument of a function call can have multiple possible types:
    /// `2` in the function_call(2); could be of type u8, i8, u16, i16...
    /// The resolved type is the type intersection of the matching function parameter.
    pub resolved_types: Option<SumType>,
    /// The narrowed type, e.g. through an `if typeof` expression.
    pub narrowed_types: Option<SumType>,

    /// Binding if the expression is an identifier
    pub binding: Option<IdentifierBinding>,
}

impl ExpressionSemantics {
    pub fn empty() -> Self {
        ExpressionSemantics {
            resolved_types: None,
            narrowed_types: None,
            binding: None,
        }
    }

    pub fn resolved_types(resolved_types: Option<SumType>) -> Self {
        ExpressionSemantics {
            resolved_types,
            narrowed_types: None,
            binding: None,
        }
    }

    /// Either the narrowed or the resolved types
    pub fn types(&self) -> Option<SumType> {
        self.narrowed_types.clone().or(self.resolved_types.clone())
    }

    pub fn into_types(self) -> Option<SumType> {
        self.narrowed_types.or(self.resolved_types)
    }
}

#[derive(Debug, Clone)]
pub struct VarDeclarationSemantics {
    /// Inferred variable types if var types where not declared
    pub inferred_types: Option<SumType>,
}

#[derive(Debug, Clone)]
pub struct IfExpressionSemantics {
    /// Type narrowing from the if condition
    pub type_narrowing: Option<TypeNarrowing>,
}

#[derive(Debug, Clone)]
pub struct TypeNarrowing {
    /// Type before the narrowing; might already be narrowed down before
    pub original_types: SumType,
    pub identifier_node: NodeData,
    pub identifier: String,
    /// true if in the form (typeof X != bool && typeof X != i32)
    /// false if in the form (typeof X == bool || typeof X == i32)
    pub reduction: bool,
    /// Narrowed types
    pub types: SumType,
}

#[derive(Debug, Clone)]
pub struct StructImplementation {
    pub methods: Vec<Ptr<Function>>,
}

#[derive(Debug, Clone)]
pub struct StructSemantics {
    /// method definitions for a struct grouped by struct type arguments
    pub specializations: HashMap<String, StructImplementation>,
}

#[derive(Debug, Clone)]
pub enum TypeBinding {
    Struct(Ptr<Struct>),
    StructTypeArgument(TypeParam),
}

#[derive(Debug, Clone)]
pub struct TypeIdentifierSemantics {
    pub binding: Option<TypeBinding>,
}

#[derive(Debug, Clone)]
pub enum SelectorFieldBinding {
    Struct(Ptr<Struct>),
    Method(Ptr<Function>),
}

#[derive(Debug, Clone)]
pub struct SelectorFieldSemantics {
    pub field_types: SumType,
    /// The type of the field, e.g. the field type or the return type of a method call.
    /// This type contains potential accumulated errors types from previous selector fields.
    pub r#type: SumType,
    /// Parent struct of the field, e.g. `parent.field`
    pub parent: Option<Ptr<Struct>>,
    pub binding: Option<SelectorFieldBinding>,
}

#[derive(Debug, Clone)]
pub struct PipeSemantics {
    pub pipe_argument: Option<SumType>,
}

#[derive(Debug)]
pub struct FileSemanticAnalyzer {
    pub file: Ptr<FileContext>,
    /// List of all sum_types in the file
    pub sum_types: HashMap<String, SumType>,
    pub errors: Vec<LangError>,

    file_semantics: Option<Ptr<FileSemantics>>,
    /// struct declarations
    pub structs: HashMap<usize, StructSemantics>,

    /// Just keep track of analyzed/checked functions
    fun_symbols: HashSet<usize>,
    /// Bindings for an type identifier, e.g. a struct name
    pub(crate) type_identifiers: HashMap<usize, TypeIdentifierSemantics>,
    /// Validated SumType for type nodes
    types: HashMap<usize, SumType>,
    pub(crate) if_expressions: HashMap<usize, IfExpressionSemantics>,
    pub(crate) expressions: HashMap<usize, ExpressionSemantics>,
    pub(crate) pipe_expressions: HashMap<usize, PipeSemantics>,
    /// Various details about the selector field, e.g. if nullable or which the parent struct is
    pub(crate) selector_fields: HashMap<usize, SelectorFieldSemantics>,
    pub(crate) variable_declarations: HashMap<usize, VarDeclarationSemantics>,
    function_calls: HashMap<usize, FunctionCallSemantics>,
    method_calls: HashMap<usize, MethodCallSemantics>,
    pub(crate) blocks: HashMap<usize, BlockSemantics>,

    /// Binding for a struct field initialization to the matching Field in of the target struct
    pub(crate) struct_field_inits: HashMap<usize, Field>,

    /// Map of node usages
    pub(crate) usages: HashMap<usize, Vec<NodeData>>,
}

impl FileSemanticAnalyzer {
    pub fn new(file: Ptr<FileContext>) -> Self {
        FileSemanticAnalyzer {
            file,
            file_semantics: None,
            sum_types: HashMap::new(),
            errors: Vec::new(),

            structs: HashMap::new(),
            fun_symbols: HashSet::new(),
            type_identifiers: HashMap::new(),
            types: HashMap::new(),
            if_expressions: HashMap::new(),
            expressions: HashMap::new(),
            pipe_expressions: HashMap::new(),
            selector_fields: HashMap::new(),
            variable_declarations: HashMap::new(),
            function_calls: HashMap::new(),
            method_calls: HashMap::new(),
            blocks: HashMap::new(),
            struct_field_inits: HashMap::new(),

            usages: HashMap::new(),
        }
    }

    /// Query all symbols in the files and thus doing a full validation
    pub fn query_all(&mut self) {
        let file_semantics = self.query_file();

        for (_, struct_def) in &file_semantics.structs {
            self.query_struct(struct_def);
        }

        for (_, fun) in &file_semantics.functions {
            self.query_fun(fun);
        }

        for method in &file_semantics.methods {
            self.query_fun(method);
        }
    }

    /// Query/validate a single struct
    pub fn query_struct(&mut self, struct_def: &Ptr<Struct>) -> Option<StructSemantics> {
        if let Some(st) = self.structs.get(&struct_def.node.id) {
            return Some(st.clone());
        }

        self.validate_struct_def(&struct_def);

        self.structs.get(&struct_def.node.id).map(|s| s.clone())
    }

    /// Query/validate a single function
    pub fn query_fun(&mut self, fun: &Ptr<Function>) {
        if self.fun_symbols.contains(&fun.signature.node.id) {
            return;
        }
        self.validate_fun(&fun);
        let new_entry = self.fun_symbols.insert(fun.signature.node.id);
        assert!(new_entry);
    }

    pub fn query_block(&mut self, block: &Ptr<Block>) -> Option<BlockSemantics> {
        if let Some(s) = self.blocks.get(&block.node.id) {
            return Some(s.clone());
        }

        self.query_fun(&block.fun());

        self.blocks.get(&block.node.id).map(|s| s.clone())
    }

    pub fn query_file(&mut self) -> Ptr<FileSemantics> {
        if let Some(file) = &self.file_semantics {
            return file.clone();
        }

        let file = Ptr::new(self.validate_file());
        self.file_semantics = Some(file.clone());

        file
    }

    pub fn query_expression(
        &mut self,
        block: &Block,
        expression: &Expression,
    ) -> Option<ExpressionSemantics> {
        if let Some(s) = self.expressions.get(&expression.node.id) {
            return Some(s.clone());
        }
        self.query_fun(&block.fun());

        self.expressions.get(&expression.node.id).map(|s| s.clone())
    }

    pub fn query_if_expression(
        &mut self,
        block: &Block,
        statement: &IfExpression,
    ) -> Option<IfExpressionSemantics> {
        if let Some(s) = self.if_expressions.get(&statement.node.id) {
            return Some(s.clone());
        }
        self.query_fun(&block.fun());

        self.if_expressions
            .get(&statement.node.id)
            .map(|s| s.clone())
    }

    pub fn query_struct_initialization(
        &mut self,
        context: TypeQueryContext,
        struct_init: &StructInitialization,
        identifier: &String,
    ) -> Option<TypeIdentifierSemantics> {
        if let Some(s) = self.type_identifiers.get(&struct_init.node.id) {
            return Some(s.clone());
        }

        self.bind_type_identifier(&context, &struct_init.node, identifier);

        self.type_identifiers
            .get(&struct_init.node.id)
            .map(|s| s.clone())
    }

    fn query_type(
        &mut self,
        context: &TypeQueryContext,
        node: &NodeData,
        r#type: &ast::Type,
    ) -> Option<Type> {
        let t = match r#type {
            ast::Type::Null => Type::Null,
            ast::Type::Str => Type::Str,
            ast::Type::String => Type::String,
            ast::Type::Bool => Type::Bool,
            ast::Type::U8 => Type::U8,
            ast::Type::I8 => Type::I8,
            ast::Type::U32 => Type::U32,
            ast::Type::I32 => Type::I32,
            ast::Type::Array(array) => Type::Array(SArray {
                types: Ptr::new(
                    array
                        .types
                        .iter()
                        .map(|it| self.query_ref_type(context, it))
                        .filter_map(|it| it)
                        .collect(),
                ),
                length: array.length,
            }),
            ast::Type::Slice(slice) => Type::Slice(SSlice {
                types: Ptr::new(
                    slice
                        .types
                        .iter()
                        .map(|it| self.query_ref_type(context, it))
                        .filter_map(|it| it)
                        .collect(),
                ),
            }),
            ast::Type::Either(value, err) => Type::Either(
                SumType::from_types(
                    &value
                        .iter()
                        .map(|it| self.query_ref_type(context, it))
                        .filter_map(|it| it)
                        .collect(),
                ),
                SumType::from_types(
                    &err.iter()
                        .map(|it| self.query_ref_type(context, it))
                        .filter_map(|it| it)
                        .collect(),
                ),
            ),
            ast::Type::Identifier(ident) => {
                if let Some(s) = self.type_identifiers.get(&node.id) {
                    return s.binding.as_ref().map(|b| match b {
                        TypeBinding::Struct(st) => Type::Struct(st.clone()),
                        TypeBinding::StructTypeArgument(arg) => {
                            Type::StructTypeArgument(arg.clone())
                        }
                    });
                }

                self.bind_type_identifier(context, &node, ident);

                return self.type_identifiers.get(&node.id).and_then(|s| {
                    s.binding.as_ref().map(|b| match b {
                        TypeBinding::Struct(st) => Type::Struct(st.clone()),
                        TypeBinding::StructTypeArgument(arg) => {
                            Type::StructTypeArgument(arg.clone())
                        }
                    })
                });
            }
            ast::Type::Closure(closure) => Type::Closure(Ptr::new(ClosureType {
                context: closure.context.as_ref().and_then(|c| {
                    Some(match c {
                        ast::ClosureContext::Owned => ClosureContext::Owned,
                        ast::ClosureContext::MutRef => ClosureContext::MutRef,
                        ast::ClosureContext::Ref => ClosureContext::Ref,
                        ast::ClosureContext::Type(types) => {
                            if types.len() > 1 {
                                self.errors.push(LangError::type_error(
                                    &node,
                                    format!("Sum types in closure context is not supported"),
                                ));
                            }
                            let t = &types[0];
                            ClosureContext::Type(self.query_type(context, &t.node, &t.r#type)?)
                        }
                    })
                }),
                parameters: closure
                    .parameters
                    .iter()
                    .map(|p| (p.name.clone(), self.query_types(context, &p.types)))
                    .collect(),
                return_type: closure
                    .return_type
                    .as_ref()
                    .map(|t| self.query_types(context, &t.types)),
            })),
        };
        Some(t)
    }

    /// Query the matching Type.
    /// Binds and caches identifier if needed.
    pub fn query_ref_type(&mut self, context: &TypeQueryContext, r#type: &RefType) -> Option<Type> {
        if r#type.is_reference {
            let main_type = self.query_type(context, &r#type.node, &r#type.r#type)?;
            Some(Type::RefType(SRefType {
                is_mut: r#type.is_mut,
                r#type: Ptr::new(main_type),
            }))
        } else {
            self.query_type(context, &r#type.node, &r#type.r#type)
        }
    }

    pub fn query_types(&mut self, context: &TypeQueryContext, types: &Vec<RefType>) -> SumType {
        SumType::from_types(
            &types
                .iter()
                .map(|it| self.query_ref_type(context, it))
                .filter_map(|it| it)
                .collect(),
        )
    }

    pub fn query_parameter_type(
        &mut self,
        signature: &FunctionSignature,
        param: &Parameter,
    ) -> Option<SumType> {
        if let Some(s) = self.types.get(&param.node.id) {
            return Some(s.clone());
        }

        Some(self.bind_types(
            TypeQueryContext::Function(signature.clone()),
            param.node.id,
            &param.types,
        ))
    }

    pub fn query_return_type(&mut self, signature: &FunctionSignature) -> Option<SumType> {
        let Some(return_type) = &signature.return_type else {
            return None;
        };
        if let Some(s) = self.types.get(&return_type.node.id) {
            return Some(s.clone());
        }

        Some(self.bind_types(
            TypeQueryContext::Function(signature.clone()),
            return_type.node.id,
            &return_type.types,
        ))
    }

    /// Queries the validated, declared variable type
    pub fn query_variable_type(
        &mut self,
        fun: &Ptr<Function>,
        var: &VarDeclaration,
    ) -> Option<SumType> {
        let Some(var_types) = &var.types else {
            return None;
        };
        if let Some(s) = self.types.get(&var.node.id) {
            return Some(s.clone());
        }

        Some(self.bind_types(
            TypeQueryContext::Function(fun.signature.clone()),
            var.node.id,
            var_types,
        ))
    }

    pub fn query_field_type(&mut self, st: &Ptr<Struct>, field: &Field) -> Option<SumType> {
        if let Some(s) = self.types.get(&field.node.id) {
            return Some(s.clone());
        }

        Some(self.bind_types(
            TypeQueryContext::Struct(st.clone()),
            field.node.id,
            &field.types,
        ))
    }

    /// node_id is the node id of the identifier expression
    pub fn query_identifier(
        &mut self,
        block: &Block,
        node_id: usize,
    ) -> Option<ExpressionSemantics> {
        if let Some(s) = self.expressions.get(&node_id) {
            return Some(s.clone());
        }

        self.query_fun(&block.fun());

        self.expressions.get(&node_id).map(|s| s.clone())
    }

    pub fn query_function_call(&mut self, call: &FunctionCall) -> Option<FunctionCallSemantics> {
        if let Some(s) = self.function_calls.get(&call.node.id) {
            return Some(s.clone());
        }

        let binding = self.lookup_function_declaration(call);
        if let Some(binding) = &binding {
            self.bind_fun_call_usage(&call.name_node, binding);
        }

        let existing = self
            .function_calls
            .insert(call.node.id, FunctionCallSemantics { binding });
        assert!(existing.is_none());

        self.function_calls.get(&call.node.id).map(|s| s.clone())
    }

    pub fn query_method_call(
        &mut self,
        receiver: &Ptr<Struct>,
        call: &FunctionCall,
    ) -> Option<MethodCallSemantics> {
        if let Some(s) = self.method_calls.get(&call.node.id) {
            return Some(s.clone());
        }

        let binding = self.lookup_struct_method(receiver, call);
        let existing = self
            .method_calls
            .insert(call.node.id, MethodCallSemantics { binding });
        assert!(existing.is_none());

        self.method_calls.get(&call.node.id).map(|s| s.clone())
    }

    /// Query the root selector expression
    pub fn query_selector(
        &mut self,
        block: &Block,
        select: &SelectorExpression,
    ) -> Option<SelectorFieldSemantics> {
        if let Some(s) = self.selector_fields.get(&select.root.node.id) {
            return Some(s.clone());
        }

        self.query_fun(&block.fun());

        self.selector_fields
            .get(&select.root.node.id)
            .map(|s| s.clone())
    }

    pub fn query_selector_field(
        &mut self,
        block: &Block,
        field: &SelectorField,
    ) -> Option<SelectorFieldSemantics> {
        if let Some(s) = self.selector_fields.get(&field.node.id) {
            return Some(s.clone());
        }

        self.query_fun(&block.fun());

        self.selector_fields.get(&field.node.id).map(|s| s.clone())
    }

    pub fn query_struct_field_initializer(
        &mut self,
        block: &Block,
        field: &StructFieldInitialization,
    ) -> Option<Field> {
        if let Some(f) = self.struct_field_inits.get(&field.node.id) {
            return Some(f.clone());
        }

        self.query_fun(&block.fun());

        self.struct_field_inits
            .get(&field.node.id)
            .map(|f| f.clone())
    }

    /// Either the resolved types or the declared type
    pub fn query_var_types(
        &mut self,
        context: &TypeQueryContext,
        var_declaration: &Ptr<VarDeclaration>,
    ) -> SumType {
        match self
            .variable_declarations
            .get(&var_declaration.node.id)
            .map(|s| s.inferred_types.as_ref())
            .flatten()
        {
            Some(inferred_types) => inferred_types.clone(),
            None => var_declaration
                .types
                .as_ref()
                .map(|types| self.query_types(context, types))
                .unwrap_or(SumType::empty()),
        }
    }

    pub fn query_pipe_expression(
        &mut self,
        block: &Block,
        node: &NodeData,
    ) -> Option<PipeSemantics> {
        if let Some(f) = self.pipe_expressions.get(&node.id) {
            return Some(f.clone());
        }

        self.query_fun(&block.fun());

        self.pipe_expressions.get(&node.id).map(|s| s.clone())
    }

    pub fn query_usage(&mut self, node_id: usize) -> Vec<NodeData> {
        // validate whole file
        // TODO this can be optimized, e.g. when in a block it might be enough to just validate the block
        self.query_file();

        self.usages
            .get(&node_id)
            .map(|it| it.clone())
            .unwrap_or_default()
    }

    pub(crate) fn bind_type_identifier(
        &mut self,
        context: &TypeQueryContext,
        node: &NodeData,
        identifier: &String,
    ) -> Option<TypeBinding> {
        match context {
            TypeQueryContext::Struct(struct_def) => {
                if let Some(type_params) = struct_def.type_params.as_ref() {
                    for arg in type_params {
                        if match &arg.r#type {
                            TypeParamType::Identifier(id) => id == identifier,
                            TypeParamType::GenericTypeParam(id, _) => id == identifier,
                        } {
                            let binding = Some(TypeBinding::StructTypeArgument(arg.clone()));
                            let existing = self.type_identifiers.insert(
                                node.id,
                                TypeIdentifierSemantics {
                                    binding: binding.clone(),
                                },
                            );
                            assert!(existing.is_none());
                            return binding;
                        }
                    }
                }
            }
            TypeQueryContext::Function(_) => {}
            TypeQueryContext::StructMethodReceiver => {}
        }
        let file = self.query_file();
        let Some(struct_def) = file.structs.get(identifier).map(|s| s.clone()) else {
            self.errors.push(LangError::type_error(
                node,
                format!("Can't resolve type identifier: {:?}", identifier),
            ));
            return None;
        };
        // Just make struct is in the system
        self.query_struct(&struct_def);

        let binding = Some(TypeBinding::Struct(struct_def));
        let existing = self.type_identifiers.insert(
            node.id,
            TypeIdentifierSemantics {
                binding: binding.clone(),
            },
        );
        assert!(existing.is_none());
        binding
    }

    fn validate_file(&mut self) -> FileSemantics {
        let mut functions = HashMap::new();
        let mut structs = HashMap::new();
        let mut methods = Vec::new();
        for child in self.file.children() {
            match child {
                RootSymbol::Function(fun) => {
                    if fun.signature.receiver.is_none() {
                        let existed = functions.insert(fun.signature.name.clone(), fun.clone());
                        if existed.is_some() {
                            self.errors.push(LangError::type_error(
                                &fun.signature.name_node,
                                format!("Duplicated function definition: {:?}", fun.signature.name),
                            ))
                        }
                    } else {
                        methods.push(fun);
                    }
                }
                RootSymbol::Struct(struct_def) => {
                    let existed = structs.insert(struct_def.name.clone(), struct_def.clone());
                    if existed.is_some() {
                        self.errors.push(LangError::type_error(
                            &struct_def.name_node,
                            format!("Duplicated struct definition: {:?}", struct_def.name),
                        ))
                    }
                }
            }
        }

        FileSemantics {
            functions,
            structs,
            methods,
        }
    }

    fn validate_struct_def(&mut self, struct_def: &Ptr<Struct>) {
        // TODO: struct name clash with other declarations?

        let new_entry = self.structs.insert(
            struct_def.node.id,
            StructSemantics {
                specializations: HashMap::new(),
            },
        );
        assert!(new_entry.is_none());

        for field in &struct_def.fields {
            self.query_field_type(struct_def, &field);
        }
    }

    fn bind_types(
        &mut self,
        context: TypeQueryContext,
        node_id: usize,
        types: &Vec<RefType>,
    ) -> SumType {
        let mut result_types = vec![];
        for ast_type in types {
            let Some(t) = self.query_ref_type(&context, ast_type) else {
                continue;
            };
            if result_types.iter().find(|v| *v == &t).is_none() {
                result_types.push(t.clone());
            } else {
                self.errors.push(LangError::type_error(
                    &ast_type.node,
                    format!("Duplicated type: {:?}", t),
                ))
            }
        }

        let result_types = SumType::new(result_types);

        let existing = self.types.insert(node_id, result_types.clone());
        assert!(existing.is_none());

        // Add sum type
        if result_types.len() > 1 {
            self.sum_types
                .insert(result_types.sum_type_name(), result_types.clone());
        }
        // Add sum type if type is an Either type
        if let Some((value, err)) = result_types.as_either() {
            if value.len() > 1 {
                self.sum_types.insert(value.sum_type_name(), value);
            }
            if err.len() > 1 {
                self.sum_types.insert(err.sum_type_name(), err);
            }
        }

        result_types
    }

    fn validate_struct_receiver(&mut self, receiver: &Receiver) -> Option<Ptr<Struct>> {
        if receiver.types.len() != 1 {
            self.errors.push(LangError::type_error(
                &receiver.node,
                "Receiver type must point to a struct".to_string(),
            ));
            return None;
        }
        let t = receiver.types.get(0).unwrap();

        let Some(receiver_type) = self.query_ref_type(&TypeQueryContext::StructMethodReceiver, t) else {
            self.errors.push(LangError::type_error(
                &receiver.node,
                format!("Invalid receiver type: {:?}", t.r#type),
            ));
            return None;
        };
        let base_receiver_type = match receiver_type {
            Type::RefType(ref_type) => ref_type.r#type.as_ref().clone(),
            _ => receiver_type,
        };
        let st = match base_receiver_type {
            Type::Struct(st) => st,
            _ => {
                self.errors.push(LangError::type_error(
                    &receiver.node,
                    "Receiver type must point to a struct".to_string(),
                ));
                return None;
            }
        };
        return Some(st);
    }

    fn bind_method_to_struct(&mut self, fun: &Ptr<Function>, st: Ptr<Struct>) {
        // struct most have in validated before hand, i.e. it must exist:
        let entry = self.structs.get_mut(&st.node.id).unwrap();
        let implementation = entry
            .specializations
            .entry("".to_string())
            .or_insert(StructImplementation { methods: vec![] });
        if implementation
            .methods
            .iter()
            .find(|m| m.signature.name == fun.signature.name)
            .is_some()
        {
            self.errors.push(LangError::type_error(
                &fun.signature.name_node,
                format!("Duplicated method: {}", fun.signature.name),
            ));
            return;
        }
        implementation.methods.push(fun.clone());
    }

    fn validate_fun(&mut self, fun: &Ptr<Function>) {
        // TODO: fun name clash with other definitions?

        for par_ref in &fun.signature.parameters {
            self.query_parameter_type(&fun.signature, &par_ref);
        }
        self.query_return_type(&fun.signature);

        if let Some(receiver) = &fun.signature.receiver {
            if receiver.types.len() != 1 {
                self.errors.push(LangError::type_error(
                    &receiver.node,
                    "Receiver type must point to a struct".to_string(),
                ));
            } else if let Some(st) = self.validate_struct_receiver(&receiver) {
                self.bind_method_to_struct(fun, st);
            }
        }

        let mut flow_container = CurrentFlowContainer {
            flow: FlowContainer::start_flow(),
        };
        self.validate_block(&mut flow_container, &fun.body(), false);

        if let Some(ret) = &fun.signature.return_type {
            if flow_container.flow.returned.is_none() {
                self.errors.push(LangError::type_error(
                    &ret.node,
                    "Block must return a value".to_string(),
                ));
            }
        }
    }

    fn bind_block_return(&mut self, block: &Ptr<Block>, last_expression: &Expression) {
        let mut entry = self.blocks.entry(block.node.id).or_insert(BlockSemantics {
            vars: HashMap::new(),
            block_return: None,
        });
        entry.block_return = Some(last_expression.clone());
    }

    /// Returns the ExpressionSemantics of the last statement (if it was an expression)
    pub(crate) fn validate_block(
        &mut self,
        flow: &mut CurrentFlowContainer,
        block: &Ptr<Block>,
        is_assignment: bool,
    ) -> Option<ExpressionSemantics> {
        let mut last_statement: Option<Statement> = None;
        let mut last_statement_type: Option<ExpressionSemantics> = None;
        let mut returned = false;
        let mut iter = block.statements().peekable();
        while let Some(statement) = iter.next() {
            let is_last = iter.peek().is_none();
            let statement_type =
                self.validate_statement(flow, block, &statement, is_last && is_assignment);
            if flow.flow.returned.is_some() && returned {
                self.errors.push(LangError::type_error(
                    statement.node(),
                    "No statements allowed after return statement".to_string(),
                ));
            }
            returned = if !returned {
                flow.flow.returned.is_some()
            } else {
                false
            };

            if is_last {
                last_statement_type = statement_type;
                last_statement = Some(statement);
            }
        }
        if is_assignment {
            if let Some(last_statement) = &last_statement {
                match last_statement {
                    Statement::Expression(statement) => {
                        self.bind_block_return(block, &statement.expression)
                    }
                    _ => {}
                }
            } else {
                self.errors.push(LangError::type_error(
                    last_statement
                        .as_ref()
                        .map(|s| s.node())
                        .unwrap_or(&block.node),
                    "Block return expected".to_string(),
                ));
            }
        }
        last_statement_type
    }

    /// If a variable type narrowed down the type of an expression, back propagated this up to previous usage.
    pub(crate) fn back_propagate_types(
        &mut self,
        block: &Block,
        expression: &Expression,
        types: &SumType,
    ) {
        match &expression.r#type {
            ExpressionType::Identifier(_) => {
                let Some(id) = self.expressions.get(&expression.node.id).map(|s|s.binding.clone()).flatten()  else {return};
                match id {
                    IdentifierBinding::VarDeclaration(var_declaration) => {
                        // narrow the expression down
                        self.narrow_expression_type(block, expression, types);

                        // find identifier and continue there
                        let var_types = self.query_var_types(
                            &TypeQueryContext::from_block(block),
                            &var_declaration,
                        );
                        let Some(inter) = intersection(types, &var_types) else {
                            return;
                        };
                        // update inferred_types types (if var didn't had any types declared)
                        if var_declaration.types.is_none() {
                            let entry = self
                                .variable_declarations
                                .entry(var_declaration.node.id)
                                .or_insert(VarDeclarationSemantics {
                                    inferred_types: None,
                                });
                            entry.inferred_types = Some(inter);
                        }

                        // follow the back propagation further
                        self.back_propagate_types(block, &var_declaration.value, types);
                    }
                    IdentifierBinding::Parameter(_) => {}
                    IdentifierBinding::PipeArg(_) => {}
                }
            }
            ExpressionType::UnaryExpression(expr) => match expr.operand.r#type {
                ExpressionType::IntLiteral(_) => {
                    // narrow the unary expression and not the "base" expression (see validate_expression)
                    self.narrow_expression_type(block, expression, types);
                }
                _ => self.back_propagate_types(block, &expr.operand, types),
            },
            ExpressionType::BinaryExpression(expr) => {
                self.back_propagate_types(block, &expr.left, types);
                self.back_propagate_types(block, &expr.right, types);
            }
            ExpressionType::ParenthesizedExpression(expr) => {
                self.back_propagate_types(block, &expr.expression, types)
            }
            ExpressionType::IntLiteral(_) => {
                self.narrow_expression_type(block, expression, types);
            }
            ExpressionType::Null => {}
            ExpressionType::Bool(_) => {}
            ExpressionType::ArrayExpression(_) => {}
            ExpressionType::SliceExpression(_) => {}
            ExpressionType::FunctionCall(_) => {}
            ExpressionType::String(_) => {}
            ExpressionType::StructInitialization(_) => {}
            ExpressionType::SelectorExpression(_) => {}
            ExpressionType::Block(expr_block) => {
                self.narrow_expression_type(block, expression, types);

                if let Some(block_return) =
                    self.query_block(expr_block).and_then(|s| s.block_return)
                {
                    self.back_propagate_types(block, &block_return, types)
                }
            }
            ExpressionType::If(if_expression) => {
                let resolved_types = match self
                    .query_expression(block, expression)
                    .and_then(|s| s.resolved_types)
                    .and_then(|resolved_types| intersection(types, &resolved_types))
                {
                    Some(resolved_types) => resolved_types,
                    None => types.clone(),
                };
                let entry = self
                    .expressions
                    .entry(expression.node.id)
                    .or_insert(ExpressionSemantics::empty());
                entry.resolved_types = Some(resolved_types);

                self.back_propagate_types_in_if_expr_blocks(if_expression, types);
            }
            ExpressionType::ErrorExpression(_) => {
                self.narrow_expression_type(block, &expression, types);
            }
            ExpressionType::Pipe(_) => {}
            ExpressionType::ReturnErrorPipe(_) => {}
            ExpressionType::EitherCheck(_) => {}
        }
    }

    /// Gets the expression type and narrows it down
    fn narrow_expression_type(&mut self, block: &Block, expression: &Expression, types: &SumType) {
        let resolved_types = match self
            .query_expression(block, expression)
            .and_then(|s| s.resolved_types)
            .and_then(|resolved_types| {
                if resolved_types.as_either().is_some() {
                    return intersection(types, &resolved_types);
                }
                if let Some((value, _)) = types.as_either() {
                    // e.g. resolved = 8 && types = i32 | string ? bool
                    return intersection(&value, &resolved_types);
                }
                intersection(types, &resolved_types)
            }) {
            Some(resolved_types) => resolved_types,
            None => return,
        };
        let entry = self
            .expressions
            .entry(expression.node.id)
            .or_insert(ExpressionSemantics::empty());
        entry.resolved_types = Some(resolved_types);
    }

    fn back_propagate_types_in_if_expr_blocks(
        &mut self,
        if_expression: &Ptr<IfExpression>,
        types: &SumType,
    ) {
        if let Some(block_return) = self
            .query_block(&if_expression.consequence)
            .and_then(|s| s.block_return)
        {
            self.back_propagate_types(&if_expression.consequence, &block_return, types)
        }
        if let Some(alternative) = &if_expression.alternative {
            match alternative {
                IfAlternative::Else(block) => {
                    if let Some(block_return) = self.query_block(block).and_then(|s| s.block_return)
                    {
                        self.back_propagate_types(block, &block_return, types)
                    }
                }
                IfAlternative::If(if_expression) => {
                    self.back_propagate_types_in_if_expr_blocks(if_expression, types)
                }
            }
        }
    }

    pub(crate) fn lookup_identifier(
        &mut self,
        context: &ExpContext,
        identifier: &String,
    ) -> Option<IdentifierBinding> {
        if identifier == "$" {
            if let Some(pipe_arg) = &context.pipe_arg {
                return Some(IdentifierBinding::PipeArg(pipe_arg.clone()));
            } else {
                return None;
            }
        }
        let mut current: Option<Ptr<Block>> = None;
        loop {
            let b = match &current {
                Some(current) => &current,
                None => &context.block,
            };
            let var = self
                .blocks
                .get(&b.node.id)
                .map(|s| s.vars.get(identifier))
                .flatten();
            if let Some(var) = var {
                return Some(IdentifierBinding::VarDeclaration(var.clone()));
            }

            match &b.parent {
                BlockParent::Function(fun) => {
                    if let Some(param) = (&fun.signature.parameters)
                        .into_iter()
                        .find(|it| &it.name == identifier)
                    {
                        return Some(IdentifierBinding::Parameter(param.clone()));
                    } else {
                        return None;
                    }
                }
                BlockParent::Block(block) => {
                    current = Some(block.clone());
                }
            }
        }
    }

    fn lookup_function_declaration(&mut self, call: &FunctionCall) -> Option<FunctionCallBinding> {
        let file = self.query_file();
        if let Some(declaration) = file.functions.get(&call.name) {
            let binding = FunctionCallBinding::Function(declaration.clone());
            return Some(binding);
        }

        let buildins = Buildins::new();
        match buildins.functions.get(&call.name) {
            Some(fun_declaration) => {
                let binding = FunctionCallBinding::Buildin(fun_declaration.clone());
                Some(binding)
            }

            None => None,
        }
    }

    fn lookup_struct_method(
        &mut self,
        receiver: &Ptr<Struct>,
        call: &FunctionCall,
    ) -> Option<Ptr<Function>> {
        let Some(methods) = self.file_semantics.as_ref().map(|s|s.methods.clone()) else {
            return None;
        };
        for method in &methods {
            if method.signature.name != call.name {
                continue;
            }
            let Some(method_receiver) = &method.signature.receiver else {
                // should not happen!
                continue;
            };
            let Some(receiver_type) = self.query_ref_type(&TypeQueryContext::StructMethodReceiver, &method_receiver.types[0]) else {
                continue;
            };

            let base_receiver_type = match receiver_type {
                Type::RefType(ref_type) => ref_type.r#type.as_ref().clone(),
                _ => receiver_type,
            };

            match base_receiver_type {
                Type::Struct(current) => {
                    if current.name == receiver.name {
                        return Some(method.clone());
                    }
                }
                _ => continue,
            }
        }
        return None;
    }

    fn bind_fun_call_usage(&mut self, reference: &NodeData, binding: &FunctionCallBinding) {
        let id = match binding {
            FunctionCallBinding::Function(fun) => fun.signature.name_node.id,
            FunctionCallBinding::Buildin(_) => return,
        };
        let references = self.usages.entry(id).or_default();
        assert!(!references.contains(reference));
        references.push(reference.clone());
    }
}
