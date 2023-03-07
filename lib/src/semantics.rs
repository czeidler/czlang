use std::collections::{HashMap, HashSet};

use crate::{
    ast::{
        Array, BinaryExpression, BinaryOperator, Block, BlockParent, BlockTrait, Expression,
        ExpressionType, Field, FileContext, FileTrait, Function, FunctionCall, FunctionSignature,
        FunctionTrait, IfAlternative, IfExpression, LangError, NodeData, Parameter, RefType,
        ReturnStatement, RootSymbol, SelectorExpression, SelectorField, SelectorFieldType, Slice,
        Statement, Struct, StructFieldInitialization, StructInitialization, Type, UnaryOperator,
        VarDeclaration,
    },
    buildin::Buildins,
    types::{intersection, types_to_string, Ptr, SumType},
};

#[derive(Debug, Clone)]
pub struct FileSemantics {
    pub functions: HashMap<String, Ptr<Function>>,
    pub structs: HashMap<String, Ptr<Struct>>,
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
}

#[derive(Debug, Clone)]
pub struct IdentifierSemantics {
    pub flow: Ptr<FlowContainer>,
    pub binding: Option<IdentifierBinding>,
}

impl IdentifierSemantics {
    /// Either:
    /// 1) the narrowed type
    /// 2) the inferred type
    /// 3) the declared type
    pub fn types(&self, file_analyzer: &FileSemanticAnalyzer) -> Option<SumType> {
        let Some(binding) = &self.binding else {
            return None;
        };
        Some(match binding {
            IdentifierBinding::VarDeclaration(var) => {
                if let Some(types) = self.flow.lookup(&var.name) {
                    types.clone()
                } else {
                    file_analyzer.query_var_types(var)
                }
            }
            IdentifierBinding::Parameter(param) => {
                if let Some(types) = self.flow.lookup(&param.name) {
                    types.clone()
                } else {
                    SumType::from_types(&param.types)
                }
            }
        })
    }
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
pub struct ExpressionSemantics {
    pub resolved_types: Option<SumType>,
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
    pub original_types: SumType,
    pub identifier: String,
    /// true if in the form (typeof X != bool && typeof X != i32)
    /// false if in the form (typeof X == bool || typeof X == i32)
    pub reduction: bool,
    /// Narrowed types
    pub types: SumType,
}

#[derive(Debug, Clone)]
pub enum TypeBinding {
    Struct(Ptr<Struct>),
}

#[derive(Debug, Clone)]
pub struct TypeIdentifierSemantics {
    pub binding: Option<TypeBinding>,
}

#[derive(Debug, Clone)]
pub enum SelectorFieldBinding {
    Struct(Ptr<Struct>),
}

#[derive(Debug, Clone)]
pub struct SelectorFieldSemantics {
    pub r#type: SumType,
    pub parent: Option<Ptr<Struct>>,
    /// Field is nullable
    pub nullable: bool,
    pub binding: Option<SelectorFieldBinding>,
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

fn apply_inverse_narrowing(
    flow: &Ptr<FlowContainer>,
    narrowing: &TypeNarrowing,
) -> Ptr<FlowContainer> {
    let mut new_flow = FlowContainer {
        parent: Some(flow.clone()),
        vars: HashMap::new(),
        returned: None,
    };
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
    structs: HashSet<usize>,
    /// Just keep track of analyzed/checked functions
    fun_symbols: HashSet<usize>,
    /// Bindings for an type identifier, e.g. a struct name
    type_identifiers: HashMap<usize, TypeIdentifierSemantics>,
    /// Validated SumType for type nodes
    types: HashMap<usize, SumType>,
    if_expressions: HashMap<usize, IfExpressionSemantics>,
    expressions: HashMap<usize, ExpressionSemantics>,
    /// Various details about the selector field, e.g. if nullable or which the parent struct is
    selector_fields: HashMap<usize, SelectorFieldSemantics>,
    variable_declarations: HashMap<usize, VarDeclarationSemantics>,
    function_calls: HashMap<usize, FunctionCallSemantics>,
    /// Contains details about an identifier pointing to a variable or parameter
    identifiers: HashMap<usize, IdentifierSemantics>,
    blocks: HashMap<usize, BlockSemantics>,
    /// Binding for a struct field initialization to the matching Field in of the target struct
    struct_field_inits: HashMap<usize, Field>,
}

impl FileSemanticAnalyzer {
    pub fn new(file: Ptr<FileContext>) -> Self {
        FileSemanticAnalyzer {
            file,
            file_semantics: None,
            sum_types: HashMap::new(),
            errors: Vec::new(),

            identifiers: HashMap::new(),
            structs: HashSet::new(),
            fun_symbols: HashSet::new(),
            type_identifiers: HashMap::new(),
            types: HashMap::new(),
            if_expressions: HashMap::new(),
            expressions: HashMap::new(),
            selector_fields: HashMap::new(),
            variable_declarations: HashMap::new(),
            function_calls: HashMap::new(),
            blocks: HashMap::new(),
            struct_field_inits: HashMap::new(),
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
    }

    /// Query/validate a single struct
    pub fn query_struct(&mut self, struct_def: &Ptr<Struct>) {
        if self.structs.contains(&struct_def.node.id) {
            return;
        }

        self.validate_struct_def(&struct_def);

        let new_entry = self.structs.insert(struct_def.node.id);
        assert!(new_entry);
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
        struct_init: &StructInitialization,
        identifier: &String,
    ) -> Option<TypeIdentifierSemantics> {
        if let Some(s) = self.type_identifiers.get(&struct_init.node.id) {
            return Some(s.clone());
        }

        self.bind_type_identifier(&struct_init.node, identifier);

        self.type_identifiers
            .get(&struct_init.node.id)
            .map(|s| s.clone())
    }

    /// Query type information for a specific type, e.g. for the resolved identifier
    pub fn query_type(&mut self, r#type: &RefType) -> Option<TypeIdentifierSemantics> {
        if let Some(s) = self.type_identifiers.get(&r#type.node.id) {
            return Some(s.clone());
        }

        let type_identifier = match &r#type.r#type {
            Type::Identifier(identifier) => identifier,
            _ => return None,
        };

        self.bind_type_identifier(&r#type.node, type_identifier);

        self.type_identifiers
            .get(&r#type.node.id)
            .map(|s| s.clone())
    }

    pub fn query_parameter_type(&mut self, param: &Parameter) -> Option<SumType> {
        if let Some(s) = self.types.get(&param.node.id) {
            return Some(s.clone());
        }

        Some(self.bind_types(param.node.id, &param.types))
    }

    pub fn query_return_type(&mut self, signature: &FunctionSignature) -> Option<SumType> {
        let Some(return_type) = &signature.return_type else {
            return None;
        };
        if let Some(s) = self.types.get(&return_type.node.id) {
            return Some(s.clone());
        }

        Some(self.bind_types(return_type.node.id, &return_type.types))
    }

    pub fn query_variable_type(&mut self, var: &VarDeclaration) -> Option<SumType> {
        let Some(var_types) = &var.types else {
            return None;
        };
        if let Some(s) = self.types.get(&var.node.id) {
            return Some(s.clone());
        }

        Some(self.bind_types(var.node.id, var_types))
    }

    pub fn query_field_type(&mut self, field: &Field) -> Option<SumType> {
        if let Some(s) = self.types.get(&field.node.id) {
            return Some(s.clone());
        }

        Some(self.bind_types(field.node.id, &field.types))
    }

    /// node_id is the node id of the identifier expression
    pub fn query_identifier(
        &mut self,
        block: &Block,
        node_id: usize,
    ) -> Option<IdentifierSemantics> {
        if let Some(s) = self.identifiers.get(&node_id) {
            return Some(s.clone());
        }

        self.query_fun(&block.fun());

        self.identifiers.get(&node_id).map(|s| s.clone())
    }

    pub fn query_function_call(
        &mut self,
        block: &Block,
        call: &FunctionCall,
    ) -> Option<FunctionCallSemantics> {
        if let Some(s) = self.function_calls.get(&call.node.id) {
            return Some(s.clone());
        }

        self.query_fun(&block.fun());

        self.function_calls.get(&call.node.id).map(|s| s.clone())
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
            Some(resolved_types) => resolved_types.clone(),
            None => var_declaration
                .types
                .as_ref()
                .map(|t| SumType::from_types(&t))
                .unwrap_or(SumType::from_types(&vec![])),
        }
    }

    fn validate_file(&mut self) -> FileSemantics {
        let mut functions = HashMap::new();
        let mut structs = HashMap::new();
        for child in self.file.children() {
            match child {
                RootSymbol::Function(fun) => {
                    let existed = functions.insert(fun.signature.name.clone(), fun.clone());
                    if existed.is_some() {
                        self.errors.push(LangError::type_error(
                            &fun.signature.name_node,
                            format!("Duplicated function definition: {:?}", fun.signature.name),
                        ))
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

        FileSemantics { functions, structs }
    }

    fn validate_struct_def(&mut self, struct_def: &Ptr<Struct>) {
        // TODO: struct name clash with other definitions?

        for field in &struct_def.fields {
            self.query_field_type(&field);
        }
    }

    fn bind_types(&mut self, node_id: usize, types: &Vec<RefType>) -> SumType {
        let mut result_types = vec![];
        for t in types {
            if result_types.iter().find(|v| *v == t).is_none() {
                result_types.push(t.clone());
                // query type to bind the type
                self.query_type(t);
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
        result_types
    }

    fn bind_type_identifier(
        &mut self,
        node: &NodeData,
        identifier: &String,
    ) -> Option<TypeBinding> {
        let file = self.query_file();
        let Some(struct_def) = file.structs.get(identifier).map(|s| s.clone()) else {
            self.errors.push(LangError::type_error(
                node,
                format!("Can't resolve type identifier: {:?}", identifier),
            ));
            return None;
        };
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

    fn validate_fun(&mut self, fun: &Ptr<Function>) {
        // TODO: fun name clash with other definitions?

        for par_ref in &fun.signature.parameters {
            self.query_parameter_type(&par_ref);
        }
        self.query_return_type(&fun.signature);

        let mut flow_container = CurrentFlowContainer {
            flow: FlowContainer::start_flow(),
        };
        self.validate_block(&mut flow_container, &fun.body(), false);
    }

    fn bind_block_return(&mut self, block: &Ptr<Block>, last_expression: &Expression) {
        let mut entry = self.blocks.entry(block.node.id).or_insert(BlockSemantics {
            vars: HashMap::new(),
            block_return: None,
        });
        entry.block_return = Some(last_expression.clone());
    }

    fn validate_block(
        &mut self,
        flow: &mut CurrentFlowContainer,
        block: &Ptr<Block>,
        is_assignment: bool,
    ) -> Option<SumType> {
        let mut last_statement: Option<Statement> = None;
        let mut last_statement_type: Option<SumType> = None;
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
                    Statement::Expression(expression) => self.bind_block_return(block, expression),
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
    ) -> Option<SumType> {
        let fun = block.fun();
        let (ret_types, expression) = if let Some(expression) = &ret.expression {
            let was_already_returned = flow.flow.returned.is_some();
            let ret_types = self.validate_expression(flow, block, expression, false);
            if flow.flow.returned.is_some() && !was_already_returned {
                self.errors.push(LangError::type_error(
                    &expression.node,
                    format!("Return in return expression is not allowed"),
                ));
            }

            let Some(ret_types) = ret_types else {
                // error validating the return expression
                return None;
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
                    return None;
                }
                fun_ret_type
            }
            None => {
                if ret_types.is_empty() {
                    return None;
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
                return None;
            }
        };

        let overlap = intersection(&ret_types, &fun_ret_type);
        if overlap.is_none() {
            self.errors.push(LangError::type_error(
                &expression
                    .map(|e| e.node.clone())
                    .unwrap_or(fun.signature.node.clone()),
                format!(
                    "Incompatible return type: fun == {:?}, expr == {:?}",
                    fun.signature.return_type, ret_types,
                ),
            ));
            return None;
        }
        overlap
    }

    /// If statement is an expression this method returns the expression block return value otherwise None.
    fn validate_statement(
        &mut self,
        flow: &mut CurrentFlowContainer,
        block: &Ptr<Block>,
        statement: &Statement,
        is_assignment: bool,
    ) -> Option<SumType> {
        match statement {
            Statement::Expression(expression) => {
                return self.validate_expression(flow, block, expression, is_assignment);
            }
            Statement::VarDeclaration(var_declaration) => {
                self.validate_var_declaration(flow, block, var_declaration.clone());
            }
            Statement::Return(ret) => {
                let return_type = self.validate_return_statement(flow, block, ret);
                flow.flow = Ptr::new(FlowContainer {
                    parent: Some(flow.flow.clone()),
                    vars: HashMap::new(),
                    returned: Some(return_type.unwrap_or(SumType::empty())),
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
            .query_variable_type(&var_declaration)
            .unwrap_or(SumType::empty());

        let expr = self
            .validate_expression(flow, block, &var_declaration.value, true)
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

    /// If the expression narrowed down the types of a variable, back propagated this up to previous usage.
    fn back_propagate_types(&mut self, block: &Block, expression: &Expression, types: &SumType) {
        match &expression.r#type {
            ExpressionType::Identifier(_) => {
                let Some(id) = self.identifiers.get(&expression.node.id).map(|s|s.binding.clone()).flatten()  else {return};
                match id {
                    IdentifierBinding::VarDeclaration(var_declaration) => {
                        // narrow the expression down
                        self.narrow_expression_type(block, expression, types);

                        // find identifier and continue there
                        let var_types = self.query_var_types(&var_declaration);
                        let Some(inter) = intersection(types, &var_types) else {
                            return;
                        };
                        // update resolved types
                        let entry = self
                            .variable_declarations
                            .entry(var_declaration.node.id)
                            .or_insert(VarDeclarationSemantics {
                                inferred_types: None,
                            });
                        entry.inferred_types = Some(inter);

                        // follow the back propagation further
                        self.back_propagate_types(block, &var_declaration.value, types);
                    }
                    IdentifierBinding::Parameter(_) => {}
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
                let entry =
                    self.expressions
                        .entry(expression.node.id)
                        .or_insert(ExpressionSemantics {
                            resolved_types: None,
                        });
                entry.resolved_types = Some(resolved_types);

                self.back_propagate_types_in_if_expr_blocks(if_expression, types);
            }
        }
    }

    /// Gets the expression type and narrows it down
    fn narrow_expression_type(&mut self, block: &Block, expression: &Expression, types: &SumType) {
        let resolved_types = match self
            .query_expression(block, expression)
            .and_then(|s| s.resolved_types)
            .and_then(|resolved_types| intersection(types, &resolved_types))
        {
            Some(resolved_types) => resolved_types,
            None => return,
        };
        let entry = self
            .expressions
            .entry(expression.node.id)
            .or_insert(ExpressionSemantics {
                resolved_types: None,
            });
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

    fn bind_identifier(
        &mut self,
        block: &Block,
        flow: &Ptr<FlowContainer>,
        id: usize,
        identifier: &String,
    ) -> Option<IdentifierBinding> {
        let mut current: Option<Ptr<Block>> = None;
        loop {
            let b = match &current {
                Some(current) => &current,
                None => block,
            };
            let var = self
                .blocks
                .get(&b.node.id)
                .map(|s| s.vars.get(identifier))
                .flatten();
            if let Some(var) = var {
                let binding = IdentifierBinding::VarDeclaration(var.clone());
                let existing = self.identifiers.insert(
                    id,
                    IdentifierSemantics {
                        flow: flow.clone(),
                        binding: Some(binding.clone()),
                    },
                );
                assert!(existing.is_none());
                return Some(binding);
            }

            match &b.parent {
                BlockParent::Function(fun) => {
                    if let Some(param) = (&fun.signature.parameters)
                        .into_iter()
                        .find(|it| &it.name == identifier)
                    {
                        let binding = IdentifierBinding::Parameter(param.clone());
                        let existing = self.identifiers.insert(
                            id,
                            IdentifierSemantics {
                                flow: flow.clone(),
                                binding: Some(binding.clone()),
                            },
                        );
                        assert!(existing.is_none());
                        return Some(binding);
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

    pub fn lookup_function_declaration(
        &mut self,
        _block: &Block,
        call: &FunctionCall,
    ) -> Option<FunctionCallBinding> {
        let file = self.query_file();
        if let Some(declaration) = file.functions.get(&call.name) {
            let binding = FunctionCallBinding::Function(declaration.clone());
            let existing = self.function_calls.insert(
                call.node.id,
                FunctionCallSemantics {
                    binding: Some(binding.clone()),
                },
            );
            assert!(existing.is_none());
            return Some(binding);
        }

        let buildins = Buildins::new();
        match buildins.functions.get(&call.name) {
            Some(fun_declaration) => {
                let binding = FunctionCallBinding::Buildin(fun_declaration.clone());
                let existing = self.function_calls.insert(
                    call.node.id,
                    FunctionCallSemantics {
                        binding: Some(binding.clone()),
                    },
                );
                assert!(existing.is_none());
                Some(binding)
            }

            None => None,
        }
    }

    /// Returns the resolved type of the expression.
    /// If None is returned the type couldn't be resolved.
    /// If an empty SumType is returned this means the expression didn't return, e.g. a block containing a return
    /// statement.
    ///
    /// # Arguments
    /// * is_assignment: If the expression is expected to return a value, e.g. from a block
    fn validate_expression(
        &mut self,
        flow: &mut CurrentFlowContainer,
        block: &Ptr<Block>,
        expression: &Expression,
        is_assignment: bool,
    ) -> Option<SumType> {
        let types = match &expression.r#type {
            ExpressionType::String(_) => Some(SumType::from_type(RefType::value(
                expression.node.clone(),
                Type::String,
            ))),

            ExpressionType::Identifier(identifier) => {
                let binding =
                    match self.bind_identifier(block, &flow.flow, expression.node.id, identifier) {
                        Some(identifier) => identifier,
                        None => {
                            self.errors.push(LangError::type_error(
                                &expression.node,
                                format!("Identifier not found: {:?}", identifier),
                            ));
                            return None;
                        }
                    };
                if let Some(narrowed_type) = flow.flow.lookup(&identifier) {
                    Some(narrowed_type)
                } else {
                    match binding {
                        IdentifierBinding::VarDeclaration(var) => Some(self.query_var_types(&var)),
                        IdentifierBinding::Parameter(param) => {
                            Some(SumType::from_types(&param.types))
                        }
                    }
                }
            }
            ExpressionType::IntLiteral(_) => Some(SumType::from_type(RefType::value(
                expression.node.clone(),
                Type::Unresolved(vec![
                    RefType::value(expression.node.clone(), Type::I32),
                    RefType::value(expression.node.clone(), Type::U32),
                ]),
            ))),
            ExpressionType::Null => Some(SumType::from_type(RefType::value(
                expression.node.clone(),
                Type::Null,
            ))),
            ExpressionType::Bool(_) => Some(SumType::from_type(RefType::value(
                expression.node.clone(),
                Type::Bool,
            ))),

            ExpressionType::UnaryExpression(unary) => match unary.operator {
                UnaryOperator::Minus => match unary.operand.r#type {
                    ExpressionType::IntLiteral(_) => Some(SumType::from_type(RefType::value(
                        unary.operand.node.clone(),
                        Type::Unresolved(vec![RefType::value(
                            unary.operand.node.clone(),
                            Type::I32,
                        )]),
                    ))),
                    _ => {
                        self.errors.push(LangError::type_error(
                            &expression.node,
                            format!("Unexpected operand: {:?}", unary.operand.r#type),
                        ));
                        return None;
                    }
                },
                UnaryOperator::Not => {
                    self.validate_expression(flow, block, &unary.operand, is_assignment)
                }
                UnaryOperator::Reference => {
                    let types =
                        self.validate_expression(flow, block, &unary.operand, is_assignment);

                    types.map(|s| {
                        s.types()
                            .into_iter()
                            .map(|it| RefType::reference(it.node.clone(), it.r#type.clone()))
                            .collect()
                    })
                }
                UnaryOperator::TypeOf => None,
            },
            // var u32 i, i + 3
            ExpressionType::BinaryExpression(binary) => {
                let left = self
                    .validate_expression(flow, block, &binary.left, is_assignment)
                    .unwrap_or(SumType::new(vec![]));
                let right = self
                    .validate_expression(flow, block, &binary.right, is_assignment)
                    .unwrap_or(SumType::new(vec![]));
                let Some(overlap) = intersection(&left, &right) else {
                    self.errors.push(LangError::type_error(
                        &expression.node,
                        format!(
                            "Incompatible type in expression: left == {:?}, right == {:?}",
                            left, right,
                        ),
                    ));
                    return None;
                };
                Some(overlap)
            }
            ExpressionType::ParenthesizedExpression(_) => todo!(),
            ExpressionType::ArrayExpression(array) => Some(SumType::from_type(RefType::value(
                expression.node.clone(),
                Type::Array(Array {
                    types: Ptr::new(self.validate_expression_list(
                        flow,
                        block,
                        &array.expressions,
                        is_assignment,
                    )),
                    length: array.expressions.len(),
                }),
            ))),
            ExpressionType::SliceExpression(slice) => Some(SumType::from_type(RefType::value(
                expression.node.clone(),
                Type::Slice(Slice {
                    types: Ptr::new(self.validate_expression_list(
                        flow,
                        block,
                        &vec![slice.operand.as_ref().clone()],
                        is_assignment,
                    )),
                }),
            ))),
            ExpressionType::FunctionCall(fun_call) => {
                let fun_declaration = match self.lookup_function_declaration(block, &fun_call) {
                    Some(fun) => fun,
                    None => {
                        self.errors.push(LangError::type_error(
                            &expression.node,
                            format!("No fun with name {} found", fun_call.name),
                        ));
                        return None;
                    }
                };
                let fun_signature = fun_declaration.as_function_signature();

                if fun_signature.parameters.len() != fun_call.arguments.len() {
                    self.errors.push(LangError::type_error(
                        &expression.node,
                        format!(
                            "Expected {} arguments but found {}",
                            fun_signature.parameters.len(),
                            fun_call.arguments.len()
                        ),
                    ));
                    return None;
                }

                for (i, parameter) in fun_signature.parameters.iter().enumerate() {
                    let arg = fun_call.arguments.get(i).unwrap();
                    let arg_types = self.validate_expression(flow, block, arg, is_assignment)?;
                    let parameter_type = self
                        .query_parameter_type(parameter)
                        .unwrap_or(SumType::empty());
                    let Some(intersection) = intersection(&arg_types, &parameter_type) else {
                        self.errors.push(LangError::type_error(
                            &arg.node,
                            format!(
                                "{:?}: Argument has invalid type {:?}; but expected {:?}",
                                fun_call.name, arg_types, parameter.types
                            ),
                        ));
                        return None;
                    };
                    // overwrite previous results
                    self.expressions.insert(
                        arg.node.id,
                        ExpressionSemantics {
                            resolved_types: Some(intersection),
                        },
                    );
                }

                self.query_return_type(&fun_signature)
            }
            ExpressionType::StructInitialization(struct_init) => {
                let Some(binding) = self.bind_type_identifier(&struct_init.name_node, &struct_init.name) else {
                    return None;
                };
                let struct_dec = match binding {
                    TypeBinding::Struct(struct_dec) => struct_dec,
                };
                let mut expected_fields =
                    struct_dec.fields.iter().fold(HashMap::new(), |mut set, f| {
                        set.insert(f.name.clone(), f.clone());
                        set
                    });
                for field in &struct_init.fields {
                    let Some(field_type) = self.validate_expression( flow, block, &field.value, is_assignment) else {
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
                        .query_field_type(&struct_field)
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

                Some(SumType::from_type(RefType::value(
                    expression.node.clone(),
                    Type::Identifier(struct_init.name.clone()),
                )))
            }
            ExpressionType::SelectorExpression(select) => {
                Some(self.validate_selector_expression(flow, block, select, is_assignment)?)
            }
            ExpressionType::Block(block) => self.validate_block(flow, block, is_assignment),
            ExpressionType::If(if_expression) => {
                self.validate_if_expression(flow, block, if_expression, is_assignment)
            }
        };

        self.bind_expression_type(expression, &types);

        types
    }

    fn bind_expression_type(&mut self, expression: &Expression, types: &Option<SumType>) {
        let existing = self.expressions.insert(
            expression.node.id,
            ExpressionSemantics {
                resolved_types: types.clone(),
            },
        );
        assert!(existing.is_none());
    }

    fn validate_expression_list(
        &mut self,
        flow: &mut CurrentFlowContainer,
        block: &Ptr<Block>,
        expressions: &Vec<Expression>,
        is_assignment: bool,
    ) -> Vec<RefType> {
        let mut output = Vec::new();
        for expression in expressions {
            if let Some(types) = self.validate_expression(flow, block, &expression, is_assignment) {
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
        block: &Ptr<Block>,
        select: &SelectorExpression,
        is_assignment: bool,
    ) -> Option<SumType> {
        let root_types = self.validate_expression(flow, block, &select.root, is_assignment)?;
        let semantics =
            self.bind_selector_field_to_struct(&select.root.node, &root_types.types(), None);
        let Some(root_struct) = semantics.binding.map(|b| match &b {
            SelectorFieldBinding::Struct(s) => s.clone(),
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
        let mut current_struct_nullable = semantics.nullable;
        let mut nullable_chain = semantics.nullable;
        for (i, field) in select.fields.iter().enumerate() {
            if field.optional_chaining {
                nullable_chain = true;
            }
            if current_struct_nullable && !field.optional_chaining {
                self.errors.push(LangError::type_error(
                    &field.node,
                    format!(
                        "{} is potentially null; use optional chaining '?.'",
                        current_struct.name
                    ),
                ));
                return None;
            }
            if !current_struct_nullable && field.optional_chaining {
                self.errors.push(LangError::type_error(
                    &field.node,
                    format!(
                        "Optional chaining operator '?.' not allowed on none nullable struct {}",
                        current_struct.name
                    ),
                ));
                return None;
            }

            match &field.field {
                SelectorFieldType::Identifier(field_identifier) => {
                    let Some(found_field) = current_struct.fields.iter().find(|f|&f.name == field_identifier) else {
                            self.errors.push(LangError::type_error(
                                &field.node,
                                format!("{} is not field of {}", field_identifier, current_struct.name),
                            ));
                            return None;
                        };

                    let mut types = found_field.types.clone();
                    if nullable_chain && !types.iter().any(|t| matches!(t.r#type, Type::Null)) {
                        types.push(RefType::value(field.node.clone(), Type::Null));
                        types.sort();
                    }

                    let semantics = self.bind_selector_field_to_struct(
                        &field.node,
                        &types,
                        Some(current_struct.clone()),
                    );
                    if let Some(found_struct) = semantics.binding.map(|b| match &b {
                        SelectorFieldBinding::Struct(s) => s.clone(),
                    }) {
                        current_struct = found_struct;
                        current_struct_nullable = semantics.nullable;
                    } else if i == select.fields.len() - 1 {
                        return Some(SumType::from_types(&types));
                    } else {
                        // all but the last field must be structs
                        self.errors.push(LangError::type_error(
                            &field.node,
                            format!("{} is not a struct", field_identifier),
                        ));
                        return None;
                    }
                }
                SelectorFieldType::Call => todo!(),
            }
        }
        return None;
    }

    /// Takes:
    /// 1) the field_node either from the root expression or from the fields
    /// 2) the field type either the root expression type or the type of the fields
    /// 3) the parent struct, None for the root expression
    fn bind_selector_field_to_struct(
        &mut self,
        field_node: &NodeData,
        field_type: &Vec<RefType>,
        parent: Option<Ptr<Struct>>,
    ) -> SelectorFieldSemantics {
        let nullable = field_type.iter().any(|t| matches!(t.r#type, Type::Null));
        let single_identifier = if field_type.len() == 1 || field_type.len() == 2 && nullable {
            field_type
                .iter()
                .filter_map(|t| match &t.r#type {
                    Type::Identifier(_) => Some(t.clone()),
                    _ => None,
                })
                .next()
        } else {
            None
        };

        let found_struct = if let Some(identifier) = single_identifier {
            let found_struct = self
                .query_type(&identifier)
                .map(|s| s.binding)
                .flatten()
                .map(|b| match b {
                    TypeBinding::Struct(struct_def) => struct_def,
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
            r#type: SumType::from_types(&field_type),
            nullable,
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

    fn validate_if_expression(
        &mut self,
        flow: &mut CurrentFlowContainer,
        block: &Ptr<Block>,
        if_expression: &Ptr<IfExpression>,
        is_assignment: bool,
    ) -> Option<SumType> {
        let original_flow = flow.flow.clone();

        let narrowing =
            if let ExpressionType::BinaryExpression(binary) = &if_expression.condition.r#type {
                self.validate_typeof_expression(flow, block, &binary, is_assignment)
                    .map(|narrowing| {
                        self.bind_if_type_narrowing(if_expression, narrowing.clone());
                        narrowing
                    })
            } else {
                self.validate_expression(flow, block, &if_expression.condition, is_assignment)?;
                None
            };
        if let Some(narrowing) = &narrowing {
            flow.flow = apply_narrowing(&original_flow, narrowing);
        };

        let if_block_result = self.validate_block(flow, &if_expression.consequence, is_assignment);
        let consequence_flow = flow.flow.clone();
        let Some(alternative) = &if_expression.alternative else {
            if is_assignment {
                self.errors.push(LangError::type_error(
                    &if_expression.node,
                    "Else alternative required for if assignment".to_string(),
                ));
            }
            if let Some(narrowing) = &narrowing {
                if consequence_flow.returned.is_some() {
                    flow.flow = apply_inverse_narrowing(&original_flow, narrowing);
                } else {
                    flow.flow = original_flow;
                }
            }
            return None;
        };

        // if or if/else case:
        if let Some(narrowing) = &narrowing {
            flow.flow = apply_inverse_narrowing(&original_flow, narrowing);
        }

        let alternative_type = match alternative {
            IfAlternative::Else(else_block) => self.validate_block(flow, else_block, is_assignment),
            IfAlternative::If(nested_if) => {
                self.validate_if_expression(flow, block, nested_if, is_assignment)
            }
        };

        if let Some(narrowing) = &narrowing {
            match (&consequence_flow.returned, &flow.flow.returned) {
                (None, Some(_)) => {
                    flow.flow = apply_inverse_narrowing(&consequence_flow, narrowing)
                }
                (None, None) => {}
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

    fn validate_typeof_expression(
        &mut self,
        flow: &mut CurrentFlowContainer,
        block: &Ptr<Block>,
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
                self.validate_typeof_expression(flow, block, left, is_assignment),
                self.validate_typeof_expression(flow, block, right, is_assignment),
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
                    "Type narrowing identifier missmatch".to_string(),
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
            .validate_expression(flow, block, &unary.operand, is_assignment)
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
