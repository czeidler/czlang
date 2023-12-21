use std::{
    collections::{HashMap, HashSet},
    ffi::OsString,
};

use super::{
    types::{intersection, SArray, SRefType, SSlice, SumType, Type},
    ClosureContext, ClosureType,
};
use crate::{
    ast::{
        self, Block, BlockParent, Expression, ExpressionType, Field, FileContext, Function,
        FunctionCall, FunctionSignature, IfAlternative, IfExpression, Import, ImportName,
        LangError, NodeData, NodeId, PackagePath, Parameter, RefType, SelectorExpression,
        SelectorField, Struct, StructFieldInitialization, StructInitialization, TypeParam,
        TypeParamType, VarDeclaration,
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
pub struct PackageContentSemantics {
    pub imports: Vec<Import>,
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
    Package(PackagePath),
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

    pub is_mutable: bool,

    /// Binding if the expression is an identifier
    pub binding: Option<IdentifierBinding>,
}

impl ExpressionSemantics {
    pub fn empty() -> Self {
        ExpressionSemantics {
            resolved_types: None,
            narrowed_types: None,
            binding: None,
            is_mutable: false,
        }
    }

    pub fn resolved_types(resolved_types: Option<SumType>) -> Self {
        ExpressionSemantics {
            resolved_types,
            narrowed_types: None,
            is_mutable: false,
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
    Package(Ptr<PackageContentSemantics>),
}

#[derive(Debug, Clone)]
pub struct SelectorFieldSemantics {
    pub field_types: SumType,
    /// The type of the field, e.g. the field type or the return type of a method call.
    /// This type contains potential accumulated errors types from previous selector fields.
    pub r#type: SumType,
    /// Parent struct of the field, e.g. `parent.field`
    pub parent: Option<SelectorFieldBinding>,
    pub binding: Option<SelectorFieldBinding>,
}

#[derive(Debug, Clone)]
pub struct PipeSemantics {
    pub pipe_argument: Option<SumType>,
}

#[derive(Debug)]
pub struct PackageSemanticAnalyzer {
    pub path: PackagePath,
    pub files: HashMap<OsString, Ptr<FileContext>>,

    // All direct and indirect dependencies
    pub(crate) dependencies: HashMap<PackagePath, Ptr<PackageContentSemantics>>,

    /// List of all sum_types in the package
    pub sum_types: HashMap<String, SumType>,
    pub errors: Vec<LangError>,

    /// Package content
    package_semantics: Option<Ptr<PackageContentSemantics>>,
    /// struct declarations
    pub structs: HashMap<NodeId, StructSemantics>,

    /// Just keeps track of validated imports
    imports: HashSet<NodeId>,
    /// Just keeps track of analyzed/checked functions
    fun_symbols: HashSet<NodeId>,
    /// Bindings for an type identifier, e.g. a struct name
    pub(crate) type_identifiers: HashMap<NodeId, TypeIdentifierSemantics>,
    /// Validated SumType for type nodes
    types: HashMap<NodeId, SumType>,
    pub(crate) if_expressions: HashMap<NodeId, IfExpressionSemantics>,
    pub(crate) expressions: HashMap<NodeId, ExpressionSemantics>,
    pub(crate) pipe_expressions: HashMap<NodeId, PipeSemantics>,
    /// Various details about the selector field, e.g. if nullable or which the parent struct is
    pub(crate) selector_fields: HashMap<NodeId, SelectorFieldSemantics>,
    pub(crate) variable_declarations: HashMap<NodeId, VarDeclarationSemantics>,
    function_calls: HashMap<NodeId, FunctionCallSemantics>,
    method_calls: HashMap<NodeId, MethodCallSemantics>,
    pub(crate) blocks: HashMap<NodeId, BlockSemantics>,

    /// Binding for a struct field initialization to the matching Field in of the target struct
    pub(crate) struct_field_inits: HashMap<NodeId, Field>,

    /// Map of node usages
    pub(crate) usages: HashMap<NodeId, Vec<NodeData>>,
}

impl PackageSemanticAnalyzer {
    pub fn new(path: PackagePath, files: HashMap<OsString, Ptr<FileContext>>) -> Self {
        PackageSemanticAnalyzer {
            path,
            files,
            dependencies: HashMap::new(),
            package_semantics: None,
            sum_types: HashMap::new(),
            errors: Vec::new(),

            structs: HashMap::new(),
            imports: HashSet::new(),
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

    pub fn current_errors(&self, out: &mut Vec<LangError>) {
        for (_, file) in &self.files {
            out.append(&mut file.parse_errors.clone());
        }
        out.append(&mut self.errors.clone());
    }

    pub fn add_dependencies(
        &mut self,
        dependencies: HashMap<PackagePath, Ptr<PackageContentSemantics>>,
    ) {
        self.dependencies = dependencies;
    }

    /// Query all symbols in the files and thus doing a full validation
    pub fn query_all(&mut self) {
        let file_semantics = self.query_package_content();

        for import in &file_semantics.imports {
            self.query_import(import);
        }

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

    pub fn query_import(&mut self, import: &Import) {
        if let Some(_) = self.imports.get(&import.node.id()) {
            return;
        }

        self.validate_import(&import);

        let new_entry = self.imports.insert(import.node.id());
        assert!(new_entry);
    }

    /// Query/validate a single struct
    pub fn query_struct(&mut self, struct_def: &Ptr<Struct>) -> Option<StructSemantics> {
        if let Some(st) = self.structs.get(&struct_def.node.id()) {
            return Some(st.clone());
        }

        self.validate_struct_def(&struct_def);

        self.structs.get(&struct_def.node.id()).map(|s| s.clone())
    }

    /// Query/validate a single function
    pub fn query_fun(&mut self, fun: &Ptr<Function>) {
        if self.fun_symbols.contains(&fun.signature.node.id()) {
            return;
        }
        self.validate_fun(&fun);
        let new_entry = self.fun_symbols.insert(fun.signature.node.id());
        assert!(new_entry);
    }

    pub fn query_block(&mut self, block: &Ptr<Block>) -> Option<BlockSemantics> {
        if let Some(s) = self.blocks.get(&block.node.id()) {
            return Some(s.clone());
        }

        self.query_fun(&block.fun());

        self.blocks.get(&block.node.id()).map(|s| s.clone())
    }

    pub fn query_package_content(&mut self) -> Ptr<PackageContentSemantics> {
        if let Some(file) = &self.package_semantics {
            return file.clone();
        }

        let file = Ptr::new(self.validate_package_content());
        self.package_semantics = Some(file.clone());

        file
    }

    pub fn query_expression(
        &mut self,
        block: &Block,
        expression: &Expression,
    ) -> Option<ExpressionSemantics> {
        if let Some(s) = self.expressions.get(&expression.node.id()) {
            return Some(s.clone());
        }
        self.query_fun(&block.fun());

        self.expressions
            .get(&expression.node.id())
            .map(|s| s.clone())
    }

    pub fn query_if_expression(
        &mut self,
        block: &Block,
        statement: &IfExpression,
    ) -> Option<IfExpressionSemantics> {
        if let Some(s) = self.if_expressions.get(&statement.node.id()) {
            return Some(s.clone());
        }
        self.query_fun(&block.fun());

        self.if_expressions
            .get(&statement.node.id())
            .map(|s| s.clone())
    }

    pub fn query_struct_initialization(
        &mut self,
        context: TypeQueryContext,
        struct_init: &StructInitialization,
        identifier: &String,
    ) -> Option<TypeIdentifierSemantics> {
        if let Some(s) = self.type_identifiers.get(&struct_init.node.id()) {
            return Some(s.clone());
        }

        self.bind_type_identifier(&context, &struct_init.node, identifier);

        self.type_identifiers
            .get(&struct_init.node.id())
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
                if let Some(s) = self.type_identifiers.get(&node.id()) {
                    return s.binding.as_ref().map(|b| match b {
                        TypeBinding::Struct(st) => Type::Struct(st.clone()),
                        TypeBinding::StructTypeArgument(arg) => {
                            Type::StructTypeArgument(arg.clone())
                        }
                    });
                }

                self.bind_type_identifier(context, &node, ident);

                return self.type_identifiers.get(&node.id()).and_then(|s| {
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
        if let Some(s) = self.types.get(&param.node.id()) {
            return Some(s.clone());
        }

        Some(self.bind_types(
            TypeQueryContext::Function(signature.clone()),
            param.node.id(),
            &param.types,
        ))
    }

    pub fn query_return_type(&mut self, signature: &FunctionSignature) -> Option<SumType> {
        let Some(return_type) = &signature.return_type else {
            return None;
        };
        if let Some(s) = self.types.get(&return_type.node.id()) {
            return Some(s.clone());
        }

        Some(self.bind_types(
            TypeQueryContext::Function(signature.clone()),
            return_type.node.id(),
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
        if let Some(s) = self.types.get(&var.node.id()) {
            return Some(s.clone());
        }

        Some(self.bind_types(
            TypeQueryContext::Function(fun.signature.clone()),
            var.node.id(),
            var_types,
        ))
    }

    pub fn query_field_type(&mut self, st: &Ptr<Struct>, field: &Field) -> Option<SumType> {
        if let Some(s) = self.types.get(&field.node.id()) {
            return Some(s.clone());
        }

        Some(self.bind_types(
            TypeQueryContext::Struct(st.clone()),
            field.node.id(),
            &field.types,
        ))
    }

    /// node_id is the node id of the identifier expression
    pub fn query_identifier(
        &mut self,
        block: &Block,
        node_id: NodeId,
    ) -> Option<ExpressionSemantics> {
        if let Some(s) = self.expressions.get(&node_id) {
            return Some(s.clone());
        }

        self.query_fun(&block.fun());

        self.expressions.get(&node_id).map(|s| s.clone())
    }

    pub fn query_function_call(
        &mut self,
        block: &Block,
        call: &FunctionCall,
    ) -> Option<FunctionCallSemantics> {
        if let Some(s) = self.function_calls.get(&call.node.id()) {
            return Some(s.clone());
        }

        self.query_fun(&block.fun());

        self.function_calls.get(&call.node.id()).map(|s| s.clone())
    }

    pub fn query_method_call(
        &mut self,
        block: &Block,
        call: &FunctionCall,
    ) -> Option<MethodCallSemantics> {
        if let Some(s) = self.method_calls.get(&call.node.id()) {
            return Some(s.clone());
        }

        self.query_fun(&block.fun());

        self.method_calls.get(&call.node.id()).map(|s| s.clone())
    }

    /// Query the root selector expression
    pub fn query_selector(
        &mut self,
        block: &Block,
        select: &SelectorExpression,
    ) -> Option<SelectorFieldSemantics> {
        if let Some(s) = self.selector_fields.get(&select.root.node.id()) {
            return Some(s.clone());
        }

        self.query_fun(&block.fun());

        self.selector_fields
            .get(&select.root.node.id())
            .map(|s| s.clone())
    }

    pub fn query_selector_field(
        &mut self,
        block: &Block,
        field: &SelectorField,
    ) -> Option<SelectorFieldSemantics> {
        if let Some(s) = self.selector_fields.get(&field.node.id()) {
            return Some(s.clone());
        }

        self.query_fun(&block.fun());

        self.selector_fields
            .get(&field.node.id())
            .map(|s| s.clone())
    }

    pub fn query_struct_field_initializer(
        &mut self,
        block: &Block,
        field: &StructFieldInitialization,
    ) -> Option<Field> {
        if let Some(f) = self.struct_field_inits.get(&field.node.id()) {
            return Some(f.clone());
        }

        self.query_fun(&block.fun());

        self.struct_field_inits
            .get(&field.node.id())
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
            .get(&var_declaration.node.id())
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
        if let Some(f) = self.pipe_expressions.get(&node.id()) {
            return Some(f.clone());
        }

        self.query_fun(&block.fun());

        self.pipe_expressions.get(&node.id()).map(|s| s.clone())
    }

    pub fn query_usage(&mut self, node_id: NodeId) -> Vec<NodeData> {
        // validate whole package
        // TODO this can be optimized, e.g. when in a block it might be enough to just validate the block
        self.query_all();

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
                                node.id(),
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
        let file = self.query_package_content();
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
            node.id(),
            TypeIdentifierSemantics {
                binding: binding.clone(),
            },
        );
        assert!(existing.is_none());
        binding
    }

    fn bind_types(
        &mut self,
        context: TypeQueryContext,
        node_id: NodeId,
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

    /// If a variable type narrowed down the type of an expression, back propagated this up to previous usage.
    pub(crate) fn back_propagate_types(
        &mut self,
        block: &Block,
        expression: &Expression,
        types: &SumType,
    ) {
        match &expression.r#type {
            ExpressionType::Identifier(_) => {
                let Some(id) = self.expressions.get(&expression.node.id()).map(|s|s.binding.clone()).flatten()  else {return};
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
                                .entry(var_declaration.node.id())
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
                    IdentifierBinding::Package(_) => {}
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
                    .entry(expression.node.id())
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
            .entry(expression.node.id())
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

    /// Looks up an identifier from with in a function
    pub(crate) fn lookup_identifier(
        &mut self,
        context: &ExpContext,
        identifier: &String,
    ) -> Option<IdentifierBinding> {
        // pipe argument
        if identifier == "$" {
            if let Some(pipe_arg) = &context.pipe_arg {
                return Some(IdentifierBinding::PipeArg(pipe_arg.clone()));
            } else {
                return None;
            }
        }

        // block variable
        let mut current: Option<Ptr<Block>> = None;
        loop {
            let b = match &current {
                Some(current) => &current,
                None => &context.block,
            };
            let var = self
                .blocks
                .get(&b.node.id())
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
                        break;
                    }
                }
                BlockParent::Block(block) => {
                    current = Some(block.clone());
                }
            }
        }

        // package
        let content = self.query_package_content();
        for import in &content.imports {
            match &import.name {
                ast::ImportName::Package => {
                    let path = &import.path;
                    let Some(package_name) = path.last() else {
                        return None;
                    };
                    if &package_name == &identifier {
                        return Some(IdentifierBinding::Package(path.clone()));
                    }
                }
                ast::ImportName::Dot => continue,
                ast::ImportName::Alias(name) => {
                    if identifier == name {
                        return Some(IdentifierBinding::Package(import.path.clone()));
                    }
                }
            }
        }

        return None;
    }

    pub(crate) fn validate_fun_call(&mut self, call: &FunctionCall) -> FunctionCallSemantics {
        let binding = self.lookup_function_declaration(call);

        let semantics = FunctionCallSemantics { binding };
        let existing = self
            .function_calls
            .insert(call.node.id(), semantics.clone());
        assert!(existing.is_none());

        semantics
    }

    fn lookup_function_declaration(&mut self, call: &FunctionCall) -> Option<FunctionCallBinding> {
        let package = self.query_package_content();
        if let Some(fun) = package.functions.get(&call.name) {
            return Some(FunctionCallBinding::Function(fun.clone()));
        }

        let content = self.query_package_content();
        for import in &content.imports {
            // only look in dot imports
            let ImportName::Dot = import.name else {
                continue;
            };

            let Some(dependency) = self.dependencies.get(&import.path) else {
                continue;
            };
            if let Some(fun) = dependency.functions.get(&call.name) {
                return Some(FunctionCallBinding::Function(fun.clone()));
            }
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

    pub(crate) fn validate_method_call(
        &mut self,
        receiver: &Ptr<Struct>,
        call: &FunctionCall,
    ) -> MethodCallSemantics {
        let binding = self.lookup_struct_method(receiver, call);
        let semantics = MethodCallSemantics { binding };
        let existing = self.method_calls.insert(call.node.id(), semantics.clone());
        assert!(existing.is_none());
        semantics
    }

    fn lookup_struct_method(
        &mut self,
        receiver: &Ptr<Struct>,
        call: &FunctionCall,
    ) -> Option<Ptr<Function>> {
        let Some(methods) = self.package_semantics.as_ref().map(|s|s.methods.clone()) else {
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
}
