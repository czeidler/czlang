use std::collections::{HashMap, HashSet};

use crate::{
    ast::{
        Array, BinaryExpression, BinaryOperator, Block, BlockParent, BlockTrait,
        EitherCheckExpression, Expression, ExpressionType, Field, FileContext, FileTrait, Function,
        FunctionCall, FunctionSignature, FunctionTrait, IfAlternative, IfExpression, LangError,
        NodeData, Parameter, PipeExpression, RefType, ReturnStatement, RootSymbol,
        SelectorExpression, SelectorField, SelectorFieldType, Slice, Statement, Struct,
        StructFieldInitialization, StructInitialization, Type, TypeParam, TypeParamType,
        UnaryOperator, VarDeclaration,
    },
    buildin::Buildins,
    sum_type::SumType,
    types::{intersection, types_to_string, Ptr},
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

#[derive(Debug, Clone)]
pub struct FlowContainer {
    pub parent: Option<Ptr<FlowContainer>>,
    /// Var path to the SumType in the current container
    /// For example: var1.field1.field2 -> i32 | string
    /// Only contains set of updates for this flow container.
    /// If a variable is not found in the map the parent FlowContainer has to be searched.
    pub vars: HashMap<String, SumType>,
    /// If not None a return statement has been encountered
    pub returned: Option<SumType>,
}

impl FlowContainer {
    pub fn lookup(&self, identifier: &str) -> Option<SumType> {
        let mut current = Some(self);
        while let Some(flow) = current {
            if let Some(types) = flow.vars.get(identifier) {
                return Some(types.clone());
            }
            let Some(parent) = &flow.parent else {
                return None;
            };
            current = Some(&parent);
        }
        None
    }
}

/// Wrapper to mutate the current flow container
pub struct CurrentFlowContainer {
    pub flow: Ptr<FlowContainer>,
}

impl FlowContainer {
    pub fn start_flow() -> Ptr<Self> {
        Ptr::new(FlowContainer {
            parent: None,
            vars: HashMap::new(),
            returned: None,
        })
    }
}

fn apply_narrowing(flow: &Ptr<FlowContainer>, narrowing: &TypeNarrowing) -> Ptr<FlowContainer> {
    let mut new_flow = FlowContainer {
        parent: Some(flow.clone()),
        vars: HashMap::new(),
        returned: None,
    };
    if let Some((value, err)) = narrowing.original_types.as_either() {
        let original_either = narrowing.original_types.types().get(0).unwrap();
        let narrowed_type = SumType::from_type(RefType {
            node: original_either.node.clone(),
            is_reference: original_either.is_reference,
            is_mut: original_either.is_mut,
            r#type: if narrowing.reduction {
                // != ?
                Type::Either(value.types().clone(), vec![])
            } else {
                // == ?
                Type::Either(vec![], err.types().clone())
            },
        });
        new_flow
            .vars
            .insert(narrowing.identifier.clone(), narrowed_type);

        return Ptr::new(new_flow);
    }

    // true if in the form (typeof X != bool && typeof X != i32)
    // false if in the form (typeof X == bool || typeof X == i32)
    if narrowing.reduction {
        new_flow.vars.insert(
            narrowing.identifier.clone(),
            narrowing.original_types.subtract(&narrowing.types),
        );
    } else {
        new_flow
            .vars
            .insert(narrowing.identifier.clone(), narrowing.types.clone());
    };

    Ptr::new(new_flow)
}

/// Combine two flows from a type narrowing, e.g. consequence and alternative from an if/else clause.
fn merge_narrowed_flows(
    parent: &Ptr<FlowContainer>,
    flow1: &Ptr<FlowContainer>,
    flow2: &Ptr<FlowContainer>,
    narrowing: &TypeNarrowing,
) -> Ptr<FlowContainer> {
    let mut new_flow = FlowContainer {
        parent: Some(parent.clone()),
        vars: HashMap::new(),
        returned: None,
    };

    if let Some((_, _)) = narrowing.original_types.as_either() {
        // For either types, currently, only a simple case is supported where the original type continues.
        new_flow.vars.insert(
            narrowing.identifier.clone(),
            narrowing.original_types.clone(),
        );
        return Ptr::new(new_flow);
    }

    let mut union = flow1
        .vars
        .get(&narrowing.identifier)
        .cloned()
        .unwrap_or(SumType::empty());
    union.union(
        flow2
            .vars
            .get(&narrowing.identifier)
            .cloned()
            .unwrap_or(SumType::empty()),
    );
    new_flow.vars.insert(narrowing.identifier.clone(), union);
    Ptr::new(new_flow)
}

fn apply_inverse_narrowing(
    flow: &Ptr<FlowContainer>,
    narrowing: &TypeNarrowing,
) -> Ptr<FlowContainer> {
    let mut new_flow = FlowContainer {
        parent: Some(flow.clone()),
        vars: HashMap::new(),
        returned: None,
    };
    if let Some((value, err)) = narrowing.original_types.as_either() {
        let original_either = narrowing.original_types.types().get(0).unwrap();
        let narrowed_type = SumType::from_type(RefType {
            node: original_either.node.clone(),
            is_reference: original_either.is_reference,
            is_mut: original_either.is_mut,
            r#type: if narrowing.reduction {
                // != ?
                Type::Either(vec![], err.types().clone())
            } else {
                // == ?
                Type::Either(value.types().clone(), vec![])
            },
        });
        new_flow
            .vars
            .insert(narrowing.identifier.clone(), narrowed_type);

        return Ptr::new(new_flow);
    }

    // true if in the form (typeof X != bool && typeof X != i32)
    // false if in the form (typeof X == bool || typeof X == i32)
    if narrowing.reduction {
        new_flow
            .vars
            .insert(narrowing.identifier.clone(), narrowing.types.clone());
    } else {
        new_flow.vars.insert(
            narrowing.identifier.clone(),
            narrowing.original_types.subtract(&narrowing.types),
        );
    };

    Ptr::new(new_flow)
}

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
    type_identifiers: HashMap<usize, TypeIdentifierSemantics>,
    /// Validated SumType for type nodes
    types: HashMap<usize, SumType>,
    if_expressions: HashMap<usize, IfExpressionSemantics>,
    expressions: HashMap<usize, ExpressionSemantics>,
    pipe_expressions: HashMap<usize, PipeSemantics>,
    /// Various details about the selector field, e.g. if nullable or which the parent struct is
    selector_fields: HashMap<usize, SelectorFieldSemantics>,
    variable_declarations: HashMap<usize, VarDeclarationSemantics>,
    function_calls: HashMap<usize, FunctionCallSemantics>,
    method_calls: HashMap<usize, MethodCallSemantics>,
    blocks: HashMap<usize, BlockSemantics>,

    /// Binding for a struct field initialization to the matching Field in of the target struct
    struct_field_inits: HashMap<usize, Field>,

    /// Map of node usages
    usages: HashMap<usize, Vec<NodeData>>,
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

        self.bind_type_identifier(context, &struct_init.node, identifier);

        self.type_identifiers
            .get(&struct_init.node.id)
            .map(|s| s.clone())
    }

    /// Query type information for a specific type, e.g. for the resolved identifier
    pub fn query_type(
        &mut self,
        context: TypeQueryContext,
        r#type: &RefType,
    ) -> Option<TypeIdentifierSemantics> {
        if let Some(s) = self.type_identifiers.get(&r#type.node.id) {
            return Some(s.clone());
        }

        let type_identifier = match &r#type.r#type {
            Type::Identifier(identifier) => identifier,
            _ => return None,
        };

        self.bind_type_identifier(context, &r#type.node, type_identifier);

        self.type_identifiers
            .get(&r#type.node.id)
            .map(|s| s.clone())
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
    pub fn query_var_types(&self, var_declaration: &Ptr<VarDeclaration>) -> SumType {
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
                .map(|t| SumType::from_types(&t))
                .unwrap_or(SumType::from_types(&vec![])),
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
        for t in types {
            if result_types.iter().find(|v| *v == t).is_none() {
                result_types.push(t.clone());
                // query type to bind the type
                self.query_type(context.clone(), t);
            } else {
                self.errors.push(LangError::type_error(
                    &t.node,
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

    fn bind_type_identifier(
        &mut self,
        context: TypeQueryContext,
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

    fn bind_struct_field_initialization(
        &mut self,
        field: &StructFieldInitialization,
        struct_field: &Field,
    ) {
        if self.struct_field_inits.contains_key(&field.node.id) {
            return;
        }
        let existing = self
            .struct_field_inits
            .insert(field.node.id, struct_field.clone());
        assert!(existing.is_none());
    }

    fn validate_struct_receiver(&mut self, param: &Parameter) -> Option<Ptr<Struct>> {
        if param.types.len() != 1 {
            self.errors.push(LangError::type_error(
                &param.node,
                "Receiver type must point to a struct".to_string(),
            ));
            return None;
        }
        let t = param.types.get(0).unwrap();

        let Some(binding) = self.query_type(TypeQueryContext::StructMethodReceiver, t).and_then(|b| b.binding) else {
            self.errors.push(LangError::type_error(
                &param.node,
                format!("Invalid receiver type: {:?}", t.r#type),
            ));
            return None;
        };
        let st = match binding {
            TypeBinding::Struct(st) => st,
            TypeBinding::StructTypeArgument(_) => {
                self.errors.push(LangError::type_error(
                    &param.node,
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

        if let Some(param) = &fun.signature.receiver {
            if param.types.len() != 1 {
                self.errors.push(LangError::type_error(
                    &param.node,
                    "Receiver type must point to a struct".to_string(),
                ));
            } else if let Some(st) = self.validate_struct_receiver(&param) {
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
    fn validate_block(
        &mut self,
        flow: &mut CurrentFlowContainer,
        block: &Ptr<Block>,
        is_assignment: bool,
    ) -> Option<ExpressionSemantics> {
        let mut last_statement: Option<Statement> = None;
        let mut last_statement_type: Option<ExpressionSemantics> = None;
        let mut returned = false;
        for statement in block.statements() {
            last_statement_type = self.validate_statement(flow, block, &statement, is_assignment);
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

            last_statement = Some(statement);
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

    fn validate_return_statement(
        &mut self,
        flow: &mut CurrentFlowContainer,
        block: &Ptr<Block>,
        ret: &ReturnStatement,
    ) -> ExpressionSemantics {
        let fun = block.fun();
        let (ret_types, expression) = if let Some(expression) = &ret.expression {
            let was_already_returned = flow.flow.returned.is_some();
            let ret_semantics =
                self.validate_expression(flow, &ExpContext::new(block, None), expression, false);
            if flow.flow.returned.is_some() && !was_already_returned {
                self.errors.push(LangError::type_error(
                    &expression.node,
                    format!("Return in return expression is not allowed"),
                ));
            }

            let Some(ret_types) = ret_semantics.into_types() else {
                // error validating the return expression
                return ExpressionSemantics::empty();
            };
            (ret_types, Some(expression))
        } else {
            (SumType::new(vec![]), None)
        };

        let fun_ret_type = self.query_return_type(&fun.signature);
        let fun_ret_type = match fun_ret_type {
            Some(fun_ret_type) => {
                if ret_types.is_empty() {
                    self.errors.push(LangError::type_error(
                        &expression
                            .map(|e| e.node.clone())
                            .unwrap_or(fun.signature.node.clone()),
                        format!("Expected return type {:?}", fun.signature.return_type),
                    ));
                    return ExpressionSemantics::empty();
                }
                fun_ret_type
            }
            None => {
                if ret_types.is_empty() {
                    return ExpressionSemantics::empty();
                }
                self.errors.push(LangError::type_error(
                    &expression
                        .map(|e| e.node.clone())
                        .unwrap_or(fun.signature.node.clone()),
                    format!(
                        "Return type expected: fun == {:?}, expr == {:?}",
                        fun.signature.return_type, ret_types,
                    ),
                ));
                return ExpressionSemantics::empty();
            }
        };

        let overlap = intersection(&ret_types, &fun_ret_type);
        let Some(overlap) = overlap else {
            self.errors.push(LangError::type_error(
                &expression
                    .map(|e| e.node.clone())
                    .unwrap_or(fun.signature.node.clone()),
                format!(
                    "Incompatible return type: fun == {:?}, expr == {:?}",
                    fun.signature
                        .return_type
                        .as_ref()
                        .map(|types| types_to_string(&types.types))
                        .unwrap_or("void".to_string()),
                    types_to_string(ret_types.types()),
                ),
            ));
            return ExpressionSemantics::empty();
        };
        if let Some(ret_value_expression) = &ret.expression {
            self.back_propagate_types(block, ret_value_expression, &overlap);
        }
        ExpressionSemantics::resolved_types(Some(overlap))
    }

    /// If statement is an expression this method returns the ExpressionSemantics None.
    fn validate_statement(
        &mut self,
        flow: &mut CurrentFlowContainer,
        block: &Ptr<Block>,
        statement: &Statement,
        is_assignment: bool,
    ) -> Option<ExpressionSemantics> {
        match statement {
            Statement::Expression(statement) => {
                let semantics = self.validate_expression(
                    flow,
                    &ExpContext::new(block, None),
                    &statement.expression,
                    is_assignment,
                );
                if statement.err_return {
                    let Some(expr_types) = semantics.types() else {
                        self.errors.push(LangError::type_error(
                            &statement.expression.node,
                            format!(
                                "Invalid expression type in error return"
                            ),
                        ));
                        return None;
                    };
                    let return_types = block
                        .fun()
                        .signature
                        .return_type
                        .as_ref()
                        .map(|t| SumType::from_types(&t.types))
                        .unwrap_or(SumType::empty());
                    match intersection(&expr_types, &return_types) {
                        Some(_) => {}
                        None => {
                            self.errors.push(LangError::type_error(
                                &statement.expression.node,
                                format!("No overlap between expression error ({}) and function return type ({})",  types_to_string(expr_types.types()), types_to_string(return_types.types())),
                            ));
                            return None;
                        }
                    }
                }
                return Some(semantics);
            }
            Statement::VarDeclaration(var_declaration) => {
                self.validate_var_declaration(flow, block, var_declaration.clone());
            }
            Statement::Return(ret) => {
                let return_type = self.validate_return_statement(flow, block, ret);
                flow.flow = Ptr::new(FlowContainer {
                    parent: Some(flow.flow.clone()),
                    vars: HashMap::new(),
                    returned: Some(return_type.into_types().unwrap_or(SumType::empty())),
                });
            }
        };
        None
    }

    fn validate_var_declaration(
        &mut self,
        flow: &mut CurrentFlowContainer,
        block: &Ptr<Block>,
        var_declaration: Ptr<VarDeclaration>,
    ) {
        let mut var_types = self
            .query_variable_type(&block.fun(), &var_declaration)
            .unwrap_or(SumType::empty());

        let expr = self
            .validate_expression(
                flow,
                &ExpContext::new(block, None),
                &var_declaration.value,
                true,
            )
            .into_types()
            .unwrap_or(SumType::new(vec![]));
        if var_types.types().is_empty() {
            var_types = expr
        } else {
            let Some(overlap) = intersection(&expr, &var_types ) else {
                self.errors.push(LangError::type_error(
                    &var_declaration.node,
                    format!(
                        "Incompatible type in var assignment: var: {}, expr: {}",
                        types_to_string(&var_types.types()),
                        types_to_string(&expr.types()),
                    ),
                ));
                return;
            };
            self.back_propagate_types(block, &var_declaration.value, &overlap);
            if var_types.types().is_empty() {
                var_types = overlap;
            }
        }

        let existing = self.variable_declarations.insert(
            var_declaration.node.id,
            VarDeclarationSemantics {
                inferred_types: Some(var_types),
            },
        );
        assert!(existing.is_none());

        if !self.bind_block_var(block, &var_declaration) {
            self.errors.push(LangError::type_error(
                &var_declaration.node,
                format!("Variable already declared: {:?}", var_declaration.name),
            ));
            return;
        }
    }

    /// Return false if var was already bound
    fn bind_block_var(&mut self, block: &Block, var_declaration: &Ptr<VarDeclaration>) -> bool {
        self.blocks
            .entry(block.node.id)
            .or_insert(BlockSemantics {
                vars: HashMap::new(),
                block_return: None,
            })
            .vars
            .insert(var_declaration.name.clone(), var_declaration.clone())
            .is_none()
    }

    /// If a variable type narrowed down the type of an expression, back propagated this up to previous usage.
    fn back_propagate_types(&mut self, block: &Block, expression: &Expression, types: &SumType) {
        match &expression.r#type {
            ExpressionType::Identifier(_) => {
                let Some(id) = self.expressions.get(&expression.node.id).map(|s|s.binding.clone()).flatten()  else {return};
                match id {
                    IdentifierBinding::VarDeclaration(var_declaration) => {
                        // narrow the expression down
                        self.narrow_expression_type(block, expression, types);

                        // find identifier and continue there
                        let var_types = self.query_var_types(&var_declaration);
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

    fn lookup_identifier(
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
            let Some(method_receiver) = &method.signature.receiver else {
                // should not happen!
                continue;
            };
            let Some(receiver_type) = self.query_type(TypeQueryContext::StructMethodReceiver, &method_receiver.types[0]) else {
                continue;
            };
            let Some(binding) = receiver_type.binding else {
                continue;
            };
            match binding {
                TypeBinding::Struct(current) => {
                    if current.name == receiver.name && method.signature.name == call.name {
                        return Some(method.clone());
                    }
                }
                TypeBinding::StructTypeArgument(_) => continue,
            }
        }
        return None;
    }

    /// Helper method: validates the expression without binding it
    fn check_expression_semantics(
        &mut self,
        flow: &mut CurrentFlowContainer,
        context: &ExpContext,
        expression: &Expression,
        is_assignment: bool,
    ) -> Result<Option<ExpressionSemantics>, LangError> {
        let expression_semantics = match &expression.r#type {
            ExpressionType::String(_) => ExpressionSemantics::resolved_types(Some(
                SumType::from_type(RefType::value(expression.node.clone(), Type::String)),
            )),

            ExpressionType::Identifier(identifier) => {
                let binding = match self.lookup_identifier(context, identifier) {
                    Some(identifier) => identifier,
                    None => {
                        return Err(LangError::type_error(
                            &expression.node,
                            format!("Identifier not found: {:?}", identifier),
                        ));
                    }
                };

                let resolved_types = match &binding {
                    IdentifierBinding::VarDeclaration(var) => Some(self.query_var_types(&var)),
                    IdentifierBinding::Parameter(param) => Some(SumType::from_types(&param.types)),
                    IdentifierBinding::PipeArg(arg) => Some(arg.clone()),
                };
                ExpressionSemantics {
                    resolved_types,
                    narrowed_types: flow.flow.lookup(identifier),
                    binding: Some(binding),
                }
            }
            ExpressionType::IntLiteral(_) => {
                ExpressionSemantics::resolved_types(Some(SumType::from_type(RefType::value(
                    expression.node.clone(),
                    Type::Unresolved(vec![
                        RefType::value(expression.node.clone(), Type::I32),
                        RefType::value(expression.node.clone(), Type::U32),
                    ]),
                ))))
            }
            ExpressionType::Null => ExpressionSemantics::resolved_types(Some(SumType::from_type(
                RefType::value(expression.node.clone(), Type::Null),
            ))),
            ExpressionType::Bool(_) => ExpressionSemantics::resolved_types(Some(
                SumType::from_type(RefType::value(expression.node.clone(), Type::Bool)),
            )),

            ExpressionType::UnaryExpression(unary) => match unary.operator {
                UnaryOperator::Minus => match unary.operand.r#type {
                    ExpressionType::IntLiteral(_) => ExpressionSemantics::resolved_types(Some(
                        SumType::from_type(RefType::value(
                            unary.operand.node.clone(),
                            Type::Unresolved(vec![RefType::value(
                                unary.operand.node.clone(),
                                Type::I32,
                            )]),
                        )),
                    )),
                    _ => {
                        return Err(LangError::type_error(
                            &expression.node,
                            format!("Unexpected operand: {:?}", unary.operand.r#type),
                        ));
                    }
                },
                UnaryOperator::Not => {
                    match self.check_expression_semantics(
                        flow,
                        context,
                        &unary.operand,
                        is_assignment,
                    )? {
                        Some(semantics) => semantics,
                        None => return Ok(None),
                    }
                }
                UnaryOperator::Reference => {
                    let mut semantics =
                        self.validate_expression(flow, context, &unary.operand, is_assignment);

                    semantics.resolved_types = semantics
                        .resolved_types
                        .map(|types| types.apply_reference());
                    semantics.narrowed_types = semantics
                        .narrowed_types
                        .map(|types| types.apply_reference());
                    semantics
                }

                UnaryOperator::TypeOf => return Ok(None),
            },
            ExpressionType::BinaryExpression(binary) => {
                let left = self
                    .validate_expression(flow, context, &binary.left, is_assignment)
                    .into_types()
                    .unwrap_or(SumType::new(vec![]));
                let right = self
                    .validate_expression(flow, context, &binary.right, is_assignment)
                    .into_types()
                    .unwrap_or(SumType::new(vec![]));
                let Some(overlap) = intersection(&left, &right) else {
                    return Err(LangError::type_error(
                        &expression.node,
                        format!(
                            "Incompatible type in expression: left == {:?}, right == {:?}",
                            left, right,
                        ),
                    ));
                };
                let number_required = match binary.operator {
                    BinaryOperator::Add => true,
                    BinaryOperator::Substract => true,
                    BinaryOperator::Multiply => true,
                    BinaryOperator::Divide => true,
                    BinaryOperator::Equal => true,
                    BinaryOperator::NotEqual => true,
                    BinaryOperator::Smaller => true,
                    BinaryOperator::SmallerEqual => true,
                    BinaryOperator::Bigger => true,
                    BinaryOperator::BiggerEqual => true,
                    BinaryOperator::And => false,
                    BinaryOperator::Or => false,
                };
                if number_required && !left.is_number() {
                    return Err(LangError::type_error(
                        &expression.node,
                        "Operator requires a number".to_string(),
                    ));
                }
                ExpressionSemantics::resolved_types(Some(overlap))
            }
            ExpressionType::ParenthesizedExpression(_) => todo!(),
            ExpressionType::ArrayExpression(array) => {
                ExpressionSemantics::resolved_types(Some(SumType::from_type(RefType::value(
                    expression.node.clone(),
                    Type::Array(Array {
                        types: Ptr::new(self.validate_expression_list(
                            flow,
                            context,
                            &array.expressions,
                            is_assignment,
                        )),
                        length: array.expressions.len(),
                    }),
                ))))
            }
            ExpressionType::SliceExpression(slice) => {
                ExpressionSemantics::resolved_types(Some(SumType::from_type(RefType::value(
                    expression.node.clone(),
                    Type::Slice(Slice {
                        types: Ptr::new(self.validate_expression_list(
                            flow,
                            context,
                            &vec![slice.operand.as_ref().clone()],
                            is_assignment,
                        )),
                    }),
                ))))
            }
            ExpressionType::FunctionCall(fun_call) => {
                let fun_declaration =
                    match self.query_function_call(&fun_call).and_then(|s| s.binding) {
                        Some(fun) => fun,
                        None => {
                            return Err(LangError::type_error(
                                &expression.node,
                                format!("No fun with name {} found", fun_call.name),
                            ));
                        }
                    };
                let fun_signature = fun_declaration.as_function_signature();

                if fun_signature.parameters.len() != fun_call.arguments.len() {
                    return Err(LangError::type_error(
                        &expression.node,
                        format!(
                            "Expected {} arguments but found {}",
                            fun_signature.parameters.len(),
                            fun_call.arguments.len()
                        ),
                    ));
                }

                for (i, parameter) in fun_signature.parameters.iter().enumerate() {
                    let arg = fun_call.arguments.get(i).unwrap();
                    let arg_types = self
                        .validate_expression(flow, context, arg, is_assignment)
                        .into_types()
                        .unwrap_or(SumType::empty());
                    let parameter_type = self
                        .query_parameter_type(&context.block.fun().signature, parameter)
                        .unwrap_or(SumType::empty());
                    let Some(intersection) = intersection(&arg_types, &parameter_type) else {
                        return Err(LangError::type_error(
                            &arg.node,
                            format!(
                                "{:?}: Argument has invalid type {:?}; but expected {:?}",
                                fun_call.name, arg_types, parameter.types
                            ),
                        ));
                    };

                    self.back_propagate_types(&context.block, arg, &intersection);
                }

                ExpressionSemantics::resolved_types(self.query_return_type(&fun_signature))
            }
            ExpressionType::StructInitialization(struct_init) => {
                let Some(binding) = self.bind_type_identifier(TypeQueryContext::Function(context.block.fun().signature.clone()), &struct_init.name_node, &struct_init.name) else {
                    // Error belongs to the type identifier, just return None here
                    return Ok(None);
                };
                let struct_dec = match binding {
                    TypeBinding::Struct(struct_dec) => struct_dec,
                    TypeBinding::StructTypeArgument(_) => {
                        return Err(LangError::type_error(
                            &struct_init.node,
                            "Unsupported...".to_string(),
                        ))
                    }
                };
                let mut expected_fields =
                    struct_dec.fields.iter().fold(HashMap::new(), |mut set, f| {
                        set.insert(f.name.clone(), f.clone());
                        set
                    });
                for field in &struct_init.fields {
                    let Some(field_type) = self.validate_expression( flow, context, &field.value, is_assignment).into_types() else {
                        continue;
                    };

                    let Some(struct_field) = expected_fields.remove(&field.name) else {
                        self.errors.push(LangError::type_error(
                            &field.node,
                            "Field not in struct".to_string(),
                        ));
                        continue;
                    };

                    self.bind_struct_field_initialization(field, &struct_field);

                    let struct_field_type = self
                        .query_field_type(&struct_dec, &struct_field)
                        .unwrap_or(SumType::empty());
                    let overlap = intersection(&field_type, &struct_field_type);
                    if overlap.is_none() {
                        self.errors.push(LangError::type_error(
                            &field.node,
                            format!(
                                "Incompatible field types: field == {:?}, expr == {:?}",
                                types_to_string(&struct_field.types),
                                types_to_string(field_type.types()),
                            ),
                        ));
                        continue;
                    }
                }
                if !expected_fields.is_empty() {
                    self.errors.push(LangError::type_error(
                        &struct_init.node,
                        format!("Missing fields: {:?}", expected_fields),
                    ));
                };

                ExpressionSemantics::resolved_types(Some(SumType::from_type(RefType::value(
                    expression.node.clone(),
                    Type::Identifier(struct_init.name.clone()),
                ))))
            }
            ExpressionType::SelectorExpression(select) => ExpressionSemantics::resolved_types(
                self.validate_selector_expression(flow, context, select, is_assignment),
            ),
            ExpressionType::Block(block) => match self.validate_block(flow, block, is_assignment) {
                Some(s) => s,
                None => return Ok(None),
            },
            ExpressionType::If(if_expression) => ExpressionSemantics::resolved_types(
                self.validate_if_expression(flow, context, if_expression, is_assignment),
            ),
            ExpressionType::Pipe(pipe) => ExpressionSemantics::resolved_types(self.validate_pipe(
                flow,
                context,
                is_assignment,
                expression,
                pipe,
            )),
            ExpressionType::ErrorExpression(error) => {
                let err_types = self.validate_expression(flow, context, &error, is_assignment);
                ExpressionSemantics::resolved_types(Some(SumType::from_type(RefType::value(
                    expression.node.clone(),
                    Type::Either(
                        vec![],
                        err_types
                            .types()
                            .map(|s| s.types().clone())
                            .unwrap_or(vec![]),
                    ),
                ))))
            }
            ExpressionType::EitherCheck(check) => {
                return Err(LangError::type_error(
                    &check.left.node,
                    "Either check expression can only be used within if expression".to_string(),
                ));
            }
        };
        Ok(Some(expression_semantics))
    }

    /// Returns the resolved type of the expression.
    ///
    /// # Arguments
    /// * is_assignment: If the expression is expected to return a value, e.g. from a block
    fn validate_expression(
        &mut self,
        flow: &mut CurrentFlowContainer,
        context: &ExpContext,
        expression: &Expression,
        is_assignment: bool,
    ) -> ExpressionSemantics {
        let expression_semantics =
            match self.check_expression_semantics(flow, context, expression, is_assignment) {
                Ok(expression_semantics) => match expression_semantics {
                    Some(expression_semantics) => expression_semantics,
                    None => return ExpressionSemantics::empty(),
                },
                Err(err) => {
                    self.errors.push(err);
                    return ExpressionSemantics::empty();
                }
            };

        self.bind_expression_type(expression, expression_semantics.clone());

        if let Some(binding) = &expression_semantics.binding {
            self.bind_identifier_usage(&expression.node, binding);
        }

        expression_semantics
    }

    fn bind_identifier_usage(&mut self, reference: &NodeData, binding: &IdentifierBinding) {
        let id = match binding {
            IdentifierBinding::VarDeclaration(var) => var.name_node.id,
            IdentifierBinding::Parameter(param) => param.name_node.id,
            IdentifierBinding::PipeArg(_) => return,
        };
        let references = self.usages.entry(id).or_default();
        assert!(!references.contains(reference));
        references.push(reference.clone());
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

    fn bind_pipe(&mut self, node: &NodeData, pipe_arg: &Option<SumType>) {
        let existing = self.pipe_expressions.insert(
            node.id,
            PipeSemantics {
                pipe_argument: pipe_arg.clone(),
            },
        );
        assert!(existing.is_none());
    }

    fn validate_pipe(
        &mut self,
        flow: &mut CurrentFlowContainer,
        context: &ExpContext,
        is_assignment: bool,
        expression: &Expression,
        pipe: &PipeExpression,
    ) -> Option<SumType> {
        self.bind_pipe(&expression.node, &context.pipe_arg);

        let left = self.validate_expression(flow, context, &pipe.left, false);
        let Some(left_exp_types) = left.types() else {
            self.errors.push(LangError::type_error(
                &pipe.left.node,
                    "Left side of the pipe must produce a type".to_string(),
            ));
            return None;
        };
        if flow.flow.returned.is_some() {
            self.errors.push(LangError::type_error(
                &pipe.left.node,
                "Invalid return from left side of the pipe".to_string(),
            ));
            return None;
        }
        let left_types = if pipe.is_err_pipe {
            if let Some(left_err) = left_exp_types.err() {
                left_err
            } else {
                self.errors.push(LangError::type_error(
                    &pipe.left.node,
                    "Left side doesn't produces an error type".to_string(),
                ));
                return None;
            }
        } else {
            if let Some((value, _)) = left_exp_types.as_either() {
                value
            } else {
                left_exp_types.clone()
            }
        };
        let right = self.validate_expression(
            flow,
            &ExpContext {
                block: context.block.clone(),
                pipe_arg: Some(left_types),
            },
            &pipe.right,
            is_assignment,
        );

        if flow.flow.returned.is_some() {
            if let Some((value, err)) = left_exp_types.as_either() {
                if pipe.is_err_pipe {
                    return Some(value);
                } else {
                    return Some(err);
                }
            }
        }
        right.types()
    }

    fn bind_expression_type(&mut self, expression: &Expression, semantics: ExpressionSemantics) {
        let existing = self.expressions.insert(expression.node.id, semantics);
        assert!(existing.is_none());
    }

    fn validate_expression_list(
        &mut self,
        flow: &mut CurrentFlowContainer,
        context: &ExpContext,
        expressions: &Vec<Expression>,
        is_assignment: bool,
    ) -> Vec<RefType> {
        let mut output = Vec::new();
        for expression in expressions {
            if let Some(types) = self
                .validate_expression(flow, context, &expression, is_assignment)
                .into_types()
            {
                for t in types {
                    if !output.contains(&t) {
                        output.push(t);
                    }
                }
            }
        }
        output.sort();
        output
    }

    /// Returns the type of the expression
    fn validate_selector_expression(
        &mut self,
        flow: &mut CurrentFlowContainer,
        context: &ExpContext,
        select: &SelectorExpression,
        is_assignment: bool,
    ) -> Option<SumType> {
        // validate root expression
        let root_types = self
            .validate_expression(flow, context, &select.root, is_assignment)
            .into_types()?;
        let semantics = self.bind_selector_field_to_struct(
            TypeQueryContext::Function(context.block.fun().signature.clone()),
            &select.root.node,
            &root_types.types(),
            None,
            None,
        );
        let Some(root_struct) = semantics.binding.map(|b| match &b {
            SelectorFieldBinding::Struct(s) => s.clone(),
            SelectorFieldBinding::Method(_) => {todo!()},
        }) else {
            self.errors.push(LangError::type_error(
                &select.root.node,
                format!(
                    "Struct expected but got {}",
                    types_to_string(root_types.types())
                ),
            ));
            return None
        };
        let mut current_struct: Ptr<Struct> = root_struct;
        let mut current_struct_type = semantics.r#type;
        for (i, field) in select.fields.iter().enumerate() {
            let current_struct_error = current_struct_type.err();
            if current_struct_error.is_some() && !field.optional_chaining {
                self.errors.push(LangError::type_error(
                    &field.node,
                    format!(
                        "{} is error/nullable; use optional chaining '?.'",
                        current_struct.name
                    ),
                ));
                return None;
            }
            if current_struct_error.is_none() && field.optional_chaining {
                self.errors.push(LangError::type_error(
                    &field.node,
                    format!(
                        "Optional chaining operator '?.' not allowed on none error/nullable struct {}",
                        current_struct.name
                    ),
                ));
                return None;
            }

            let field_types = match &field.field {
                SelectorFieldType::Identifier(field_identifier) => {
                    let Some(found_field) = current_struct.fields.iter().find(|f|&f.name == field_identifier) else {
                            self.errors.push(LangError::type_error(
                                &field.node,
                                format!("{} is not field of {}", field_identifier, current_struct.name),
                            ));
                            return None;
                        };

                    found_field.types.clone()
                }
                SelectorFieldType::Call(call) => {
                    // TODO: support generic struct instances
                    let Some(method) = self.query_method_call(&current_struct, call).and_then(|s|s.binding) else {
                        self.errors.push(LangError::type_error(
                            &field.node,
                            format!("Not a struct method: {}", call.name),
                        ));
                        return None;
                    };
                    method
                        .signature
                        .return_type
                        .as_ref()
                        .map(|r| r.types.clone())
                        .unwrap_or(vec![])
                }
            };

            let semantics = self.bind_selector_field_to_struct(
                TypeQueryContext::Struct(current_struct.clone()),
                &field.node,
                &field_types,
                Some(current_struct.clone()),
                current_struct_error.clone(),
            );
            if let Some(found_struct) = semantics.binding.map(|b| match &b {
                SelectorFieldBinding::Struct(s) => s.clone(),
                SelectorFieldBinding::Method(_) => todo!(),
            }) {
                current_struct = found_struct;
                current_struct_type = semantics.r#type;
            } else if i == select.fields.len() - 1 {
                // last selector field
                let current_error = semantics.r#type.err();
                if let Some(err) = current_error {
                    // Add sum type
                    if err.len() > 1 {
                        self.sum_types.insert(err.sum_type_name(), err.clone());
                    }

                    if let Some((value, _)) = SumType::from_types(&field_types).as_either() {
                        // only take value part from the either, the error part is already included in err
                        return Some(SumType::from_type(RefType {
                            node: field.node.clone(),
                            is_reference: false,
                            is_mut: false,
                            r#type: Type::Either(value.types().clone(), err.types().clone()),
                        }));
                    } else {
                        return Some(SumType::from_type(RefType {
                            node: field.node.clone(),
                            is_reference: false,
                            is_mut: false,
                            r#type: Type::Either(field_types, err.types().clone()),
                        }));
                    }
                } else {
                    return Some(SumType::from_types(&field_types));
                }
            } else {
                // all but the last field must be structs
                self.errors.push(LangError::type_error(
                    &field.node,
                    format!("Field doesn't point to a struct"),
                ));
                return None;
            }
        }
        return None;
    }

    /// Takes:
    /// 1) the field_node either from the root expression or from the fields
    /// 2) the field type either the root expression type or the type of the fields
    /// 3) the parent struct, None for the root expression
    /// 4) the current error, if any
    fn bind_selector_field_to_struct(
        &mut self,
        context: TypeQueryContext,
        field_node: &NodeData,
        field_types: &Vec<RefType>,
        parent: Option<Ptr<Struct>>,
        parent_error: Option<SumType>,
    ) -> SelectorFieldSemantics {
        let single_type = if field_types.len() == 1 {
            let first = field_types.get(0).unwrap();
            Some(first.clone())
        } else {
            None
        };
        let either_type = single_type.as_ref().and_then(|t| match &t.r#type {
            Type::Either(value, err) => {
                Some((SumType::from_types(value), SumType::from_types(err)))
            }
            _ => None,
        });
        let field_type = SumType::from_types(field_types);
        let (value, value_error) = match (parent_error, either_type) {
            (None, None) => (field_type, None),
            (None, Some(either_type)) => (either_type.0, Some(either_type.1)),
            (Some(parent_error), None) => (field_type, Some(parent_error)),
            (Some(parent_error), Some(either_type)) => {
                let mut error = parent_error.clone();
                error.union(either_type.1);
                (either_type.0, Some(error))
            }
        };
        let full_type = match value_error {
            Some(value_error) => SumType::from_type(RefType {
                node: field_node.clone(),
                is_reference: false,
                is_mut: false,
                r#type: Type::Either(value.types().clone(), value_error.types().clone()),
            }),
            None => value,
        };
        let single_identifier = single_type.and_then(|t| match t.r#type {
            Type::Identifier(_) => Some(t.clone()),
            Type::Either(value, _) => {
                if value.len() != 1 {
                    None
                } else {
                    let first = value.get(0).unwrap();
                    match first.r#type {
                        Type::Identifier(_) => Some(first.clone()),
                        _ => None,
                    }
                }
            }
            _ => None,
        });

        let found_struct = if let Some(identifier) = single_identifier {
            let found_struct = self
                .query_type(context, &identifier)
                .and_then(|s| s.binding)
                .and_then(|b| match b {
                    TypeBinding::Struct(struct_def) => Some(struct_def),
                    TypeBinding::StructTypeArgument(_) => None,
                });
            if found_struct.is_none() {
                self.errors.push(LangError::type_error(
                    field_node,
                    format!("{} not found or not a struct", identifier),
                ));
            };
            found_struct
        } else {
            None
        };

        let semantics = SelectorFieldSemantics {
            field_types: SumType::from_types(field_types),
            r#type: full_type,
            binding: found_struct.map(|s| (SelectorFieldBinding::Struct(s))),
            parent,
        };
        let existing = self
            .selector_fields
            .insert(field_node.id, semantics.clone());
        assert!(existing.is_none());
        semantics
    }

    fn bind_if_type_narrowing(
        &mut self,
        if_expression: &Ptr<IfExpression>,
        narrowing: TypeNarrowing,
    ) {
        let existing = self.if_expressions.insert(
            if_expression.node.id,
            IfExpressionSemantics {
                type_narrowing: Some(narrowing),
            },
        );
        assert!(existing.is_none());
    }

    /// Returns the overall expression type if all branches have a block return
    fn validate_if_expression(
        &mut self,
        flow: &mut CurrentFlowContainer,
        context: &ExpContext,
        if_expression: &Ptr<IfExpression>,
        is_assignment: bool,
    ) -> Option<SumType> {
        let original_flow = flow.flow.clone();

        let narrowing =
            if let ExpressionType::BinaryExpression(binary) = &if_expression.condition.r#type {
                self.validate_typeof_expression(flow, context, &binary, is_assignment)
                    .map(|narrowing| {
                        self.bind_if_type_narrowing(if_expression, narrowing.clone());
                        narrowing
                    })
            } else if let ExpressionType::EitherCheck(check) = &if_expression.condition.r#type {
                self.validate_either_check_expression(flow, context, check, is_assignment)
                    .map(|narrowing| {
                        self.bind_if_type_narrowing(if_expression, narrowing.clone());
                        narrowing
                    })
            } else {
                let types = self
                    .validate_expression(flow, context, &if_expression.condition, is_assignment)
                    .into_types()?;
                if !types.is_bool() {
                    self.errors.push(LangError::type_error(
                        &if_expression.condition.node,
                        "If expression must evaluate to a boolean value".to_string(),
                    ))
                }
                None
            };
        if let Some(narrowing) = &narrowing {
            flow.flow = apply_narrowing(&original_flow, narrowing);
        };

        let if_block_result = self
            .validate_block(flow, &if_expression.consequence, is_assignment)
            .and_then(|s| s.into_types());
        let consequence_flow = flow.flow.clone();
        let Some(alternative) = &if_expression.alternative else {
            if is_assignment {
                self.errors.push(LangError::type_error(
                    &if_expression.node,
                    "Else alternative required for if assignment".to_string(),
                ));
            }
            if let Some(narrowing) = &narrowing {
                if flow.flow.returned.is_some() {
                    flow.flow = apply_inverse_narrowing(&original_flow, narrowing);
                } else {
                    flow.flow = original_flow;
                }
            }
            return None;
        };

        // else or if/else case:
        if let Some(narrowing) = &narrowing {
            flow.flow = apply_inverse_narrowing(&original_flow, narrowing);
        }

        let alternative_type = match alternative {
            IfAlternative::Else(else_block) => self
                .validate_block(flow, else_block, is_assignment)
                .and_then(|s| s.into_types()),
            IfAlternative::If(nested_if) => {
                self.validate_if_expression(flow, context, nested_if, is_assignment)
            }
        };

        if let Some(narrowing) = &narrowing {
            match (&consequence_flow.returned, &flow.flow.returned) {
                (None, Some(_)) => {
                    flow.flow = consequence_flow;
                }
                (None, None) => {
                    flow.flow = merge_narrowed_flows(
                        &original_flow,
                        &consequence_flow,
                        &flow.flow,
                        narrowing,
                    );
                }
                (Some(_), None) => {
                    // keep current, alternative flow
                }
                (Some(left), Some(right)) => {
                    // both path returned
                    let mut return_type = SumType::from_types(left.types());
                    return_type.union(SumType::from_types(right.types()));
                    flow.flow = Ptr::new(FlowContainer {
                        parent: Some(original_flow.clone()),
                        vars: HashMap::new(),
                        returned: Some(return_type),
                    });
                }
            };
        };

        if let Some(alternative_type) = alternative_type {
            let mut temp = if_block_result.unwrap_or(SumType::new(vec![]));
            temp.union(alternative_type);
            return Some(temp);
        }

        if_block_result
    }

    fn validate_either_check_expression(
        &mut self,
        flow: &mut CurrentFlowContainer,
        context: &ExpContext,
        check: &EitherCheckExpression,
        is_assignment: bool,
    ) -> Option<TypeNarrowing> {
        let identifier = match &check.left.r#type {
            ExpressionType::Identifier(identifier) => identifier,
            _ => {
                self.errors.push(LangError::type_error(
                    &check.left.node,
                    format!("Invalid typeof identifier"),
                ));
                return None;
            }
        };

        let left = self.validate_expression(flow, context, &check.left, is_assignment);
        let left_types = left.types();
        if let Some((value, err)) = left_types.clone().and_then(|types| types.as_either()) {
            let original_types = left_types.unwrap();
            let original_either = original_types.types().get(0).unwrap();
            let narrowed_type = SumType::from_type(RefType {
                node: original_either.node.clone(),
                is_reference: original_either.is_reference,
                is_mut: original_either.is_mut,
                r#type: if check.is_equal {
                    Type::Either(vec![], err.types().clone())
                } else {
                    Type::Either(value.types().clone(), vec![])
                },
            });
            let result = TypeNarrowing {
                original_types,
                identifier: identifier.clone(),
                identifier_node: check.left.node.clone(),
                reduction: !check.is_equal,
                types: narrowed_type,
            };
            Some(result)
        } else {
            self.errors.push(LangError::type_error(
                &check.left.node,
                "Must be an either type".to_string(),
            ));
            None
        }
    }

    fn validate_typeof_expression(
        &mut self,
        flow: &mut CurrentFlowContainer,
        context: &ExpContext,
        expression: &BinaryExpression,
        is_assignment: bool,
    ) -> Option<TypeNarrowing> {
        let is_and_or = match expression.operator {
            BinaryOperator::And => true,
            BinaryOperator::Or => true,
            _ => false,
        };
        if is_and_or {
            let (left, right) = match (&expression.left.r#type, &expression.right.r#type) {
                (
                    ExpressionType::BinaryExpression(left),
                    ExpressionType::BinaryExpression(right),
                ) => (left, right),
                _ => return None,
            };
            let (mut left, right) = match (
                self.validate_typeof_expression(flow, context, left, is_assignment),
                self.validate_typeof_expression(flow, context, right, is_assignment),
            ) {
                (None, None) => return None,
                (Some(left), Some(right)) => (left, right),
                _ => {
                    self.errors.push(LangError::type_error(
                        // TODO: parent node?
                        &expression.right.node,
                        "Type narrowing can't be mixed with other expressions".to_string(),
                    ));
                    return None;
                }
            };
            if left.identifier != right.identifier {
                self.errors.push(LangError::type_error(
                    // TODO: parent node?
                    &expression.left.node,
                    "Type narrowing identifier mismatch".to_string(),
                ));
                return None;
            }
            if left.reduction != right.reduction {
                self.errors.push(LangError::type_error(
                    // TODO: parent node?
                    &expression.left.node,
                    "Invalid type narrowing".to_string(),
                ));
                return None;
            }
            left.types.union(right.types);
            return Some(left);
        }

        let unary = match &expression.left.r#type {
            ExpressionType::UnaryExpression(unary) => unary,
            _ => return None,
        };
        match unary.operator {
            UnaryOperator::TypeOf => {}
            _ => return None,
        };

        let identifier = match &unary.operand.r#type {
            ExpressionType::Identifier(identifier) => identifier,
            _ => {
                self.errors.push(LangError::type_error(
                    // TODO: operator node?
                    &unary.operand.node,
                    format!("Invalid typeof identifier"),
                ));
                return None;
            }
        };

        let equal = match expression.operator {
            BinaryOperator::Equal => true,
            BinaryOperator::NotEqual => false,
            _ => {
                self.errors.push(LangError::type_error(
                    &expression.left.node,
                    format!("Invalid typeof operator"),
                ));
                return None;
            }
        };

        let original_types = self
            .validate_expression(flow, context, &unary.operand, is_assignment)
            .into_types()
            .unwrap_or(SumType::new(vec![]));
        for t in original_types.types() {
            if let Type::Unresolved(_) = &t.r#type {
                self.errors.push(LangError::type_error(
                    &unary.operand.node,
                    format!("Can't narrow unresolved type: {:?}", &t),
                ));
                return None;
            }
        }
        let mut result = TypeNarrowing {
            original_types,
            identifier: identifier.clone(),
            identifier_node: unary.operand.node.clone(),
            reduction: !equal,
            types: SumType::new(vec![]),
        };
        match &expression.right.r#type {
            // TODO handle unary & case
            ExpressionType::Identifier(identifier) => match identifier.as_str() {
                "string" => result
                    .types
                    .push(RefType::value(expression.right.node.clone(), Type::String)),
                "bool" => result
                    .types
                    .push(RefType::value(expression.right.node.clone(), Type::Bool)),
                "u8" => result
                    .types
                    .push(RefType::value(expression.right.node.clone(), Type::U8)),
                "i8" => result
                    .types
                    .push(RefType::value(expression.right.node.clone(), Type::I8)),
                "u32" => result
                    .types
                    .push(RefType::value(expression.right.node.clone(), Type::U32)),
                "i32" => result
                    .types
                    .push(RefType::value(expression.right.node.clone(), Type::I32)),
                _ => {
                    self.errors.push(LangError::type_error(
                        &expression.right.node,
                        format!("Invalid typeof identifier: {}", identifier),
                    ));
                    return None;
                }
            },
            ExpressionType::Null => result
                .types
                .push(RefType::value(expression.right.node.clone(), Type::Null)),
            _ => {
                self.errors.push(LangError::type_error(
                    &expression.right.node,
                    "Invalid typeof expression".to_string(),
                ));
                return None;
            }
        }
        Some(result)
    }
}
