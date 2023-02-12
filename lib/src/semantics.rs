use std::collections::{HashMap, HashSet};

use crate::{
    ast::{
        Array, BinaryExpression, BinaryOperator, Block, BlockParent, BlockTrait, Expression,
        ExpressionType, Field, FileContext, FileTrait, Function, FunctionCall, FunctionSignature,
        FunctionTrait, IfAlternative, IfStatement, LangError, NodeData, Parameter, RefType,
        RootSymbol, SelectorExpression, SelectorField, SelectorFieldType, Slice, Statement, Struct,
        StructFieldInitialization, StructInitialization, Type, UnaryOperator, VarDeclaration,
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
struct BlockSemantics {
    pub vars: HashMap<String, Ptr<VarDeclaration>>,
}

#[derive(Debug, Clone)]
pub enum IdentifierBinding {
    VarDeclaration(Ptr<VarDeclaration>),
    Parameter(Parameter),
}

#[derive(Debug, Clone)]
pub struct IdentifierSemantics {
    pub binding: Option<IdentifierBinding>,
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

pub struct ExpressionSemantics {
    pub resolved_types: Option<SumType>,
}

pub struct VarDeclarationSemantics {
    /// Inferred variable types if var types where not declared
    pub inferred_types: Option<SumType>,
}

pub struct IfStatementSemantics {
    /// Type narrowing from the if contition
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

pub struct FileSemanticAnalyzer {
    pub file: Ptr<FileContext>,
    pub sum_types: HashMap<String, SumType>,
    pub errors: Vec<LangError>,

    file_semantics: Option<Ptr<FileSemantics>>,
    structs: HashSet<usize>,
    /// Just keep track of analyzed/checked functions
    fun_symbols: HashSet<usize>,
    type_identifiers: HashMap<usize, TypeIdentifierSemantics>,
    // TODO make private by adding a query method:
    pub if_statements: HashMap<usize, IfStatementSemantics>,
    pub expressions: HashMap<usize, ExpressionSemantics>,
    selector_fields: HashMap<usize, SelectorFieldSemantics>,
    variable_declarations: HashMap<usize, VarDeclarationSemantics>,
    function_calls: HashMap<usize, FunctionCallSemantics>,
    identifiers: HashMap<usize, IdentifierSemantics>,
    blocks: HashMap<usize, BlockSemantics>,
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
            if_statements: HashMap::new(),
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

    pub fn query_file(&mut self) -> Ptr<FileSemantics> {
        if let Some(file) = &self.file_semantics {
            return file.clone();
        }

        let file = Ptr::new(self.validate_file());
        self.file_semantics = Some(file.clone());

        file
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

    /// node_id is the node id of the identifier expression
    pub fn query_identifier(
        &mut self,
        block: &Block,
        node_id: usize,
    ) -> Option<IdentifierSemantics> {
        if let Some(s) = self.identifiers.get(&node_id) {
            return Some(s.clone());
        }
        let Some(fun) = block.fun() else {
            return None;
        };
        self.query_fun(&fun);

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
        let Some(fun) = block.fun() else {
            return None;
        };
        self.query_fun(&fun);

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
        let Some(fun) = block.fun() else {
            return None;
        };
        self.query_fun(&fun);

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
        let Some(fun) = block.fun() else {
            return None;
        };
        self.query_fun(&fun);

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

        let Some(fun) = block.fun() else {
            return None;
        };
        self.query_fun(&fun);

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
            self.validate_declaration_types(&field.types);
        }
    }

    fn validate_types(&mut self, types: &Vec<RefType>) -> SumType {
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
        SumType::new(result_types)
    }

    fn validate_declaration_types(&mut self, types: &Vec<RefType>) -> SumType {
        let result_types = self.validate_types(types);

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
            // Add sum type
            if par_ref.types.len() > 1 {
                let sum_type = self.validate_types(&par_ref.types);
                self.sum_types.insert(sum_type.sum_type_name(), sum_type);
            }
        }
        let block = fun.body();

        self.validate_block(fun, &block);
    }

    fn validate_block(&mut self, fun: &Function, block: &Ptr<Block>) {
        let mut last_statement: Option<Statement> = None;
        for statement in block.statements() {
            self.validate_statement(fun, block, &statement);
            if last_statement.map(|s| s.is_return()).unwrap_or(false) {
                self.errors.push(LangError::type_error(
                    statement.node(),
                    "Not statements allowed after return statement".to_string(),
                ));
            }

            last_statement = Some(statement);
        }
    }

    fn validate_statement(&mut self, fun: &Function, block: &Ptr<Block>, statement: &Statement) {
        match statement {
            Statement::Expression(expression) => {
                self.validate_expression(fun, block, expression);
            }
            Statement::VarDeclaration(var_declaration) => {
                self.validate_var_declaration(fun, block, var_declaration.clone());
            }
            Statement::Return(ret) => {
                let (ret_types, expression) = if let Some(expression) = &ret.expression {
                    let Some(ret_types) = self.validate_expression(fun, block, expression) else {
                        // error validating the return expression
                        return;
                    };
                    (ret_types, Some(expression))
                } else {
                    (SumType::new(vec![]), None)
                };

                if ret_types.is_empty() && !fun.signature.return_types.is_empty() {
                    self.errors.push(LangError::type_error(
                        &expression
                            .map(|e| e.node.clone())
                            .unwrap_or(fun.signature.node.clone()),
                        format!("Expected return type {:?}", fun.signature.return_types),
                    ));
                    return;
                }
                if ret_types.is_empty() && fun.signature.return_types.is_empty() {
                    return;
                }
                let fun_ret_type = fun.signature.return_types.clone();
                let overlap = intersection(&ret_types.types(), &fun_ret_type);
                if overlap.is_empty() {
                    self.errors.push(LangError::type_error(
                        &expression
                            .map(|e| e.node.clone())
                            .unwrap_or(fun.signature.node.clone()),
                        format!(
                            "Incompatible return type: fun == {:?}, expr == {:?}",
                            fun.signature.return_types, ret_types,
                        ),
                    ));
                    return;
                }
            }
            Statement::IfStatement(if_statement) => {
                self.validate_if_statement(fun, block, if_statement)
            }
        };
    }

    fn validate_var_declaration(
        &mut self,
        fun: &Function,
        block: &Ptr<Block>,
        var_declaration: Ptr<VarDeclaration>,
    ) {
        let mut var_types = if let Some(types) = &var_declaration.types {
            self.validate_declaration_types(types)
        } else {
            SumType::new(vec![])
        };

        let expr = self
            .validate_expression(fun, block, &var_declaration.value)
            .unwrap_or(SumType::new(vec![]));
        if var_types.types().is_empty() {
            var_types = expr
        } else {
            let overlap = SumType::new(intersection(&var_types.types(), &expr.types()));
            if overlap.len() == 0 {
                self.errors.push(LangError::type_error(
                    &var_declaration.node,
                    format!(
                        "Incompatible type in var assignement: var: {}, expr: {}",
                        types_to_string(&var_types.types()),
                        types_to_string(&expr.types()),
                    ),
                ));
                return;
            }
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

        if let Some(_) = self
            .blocks
            .entry(block.node.id)
            .or_insert(BlockSemantics {
                vars: HashMap::new(),
            })
            .vars
            .insert(var_declaration.name.clone(), var_declaration.clone())
        {
            self.errors.push(LangError::type_error(
                &var_declaration.node,
                format!("Variable already declared: {:?}", var_declaration.name),
            ));
            return;
        }
    }

    /// If the expression narrowed down the types of a variable, back propagated this up to previous usage.
    fn back_propagate_types(&mut self, block: &Block, expression: &Expression, types: &SumType) {
        match &expression.r#type {
            ExpressionType::Identifier(_) => {
                let Some(id) = self.identifiers.get(&expression.node.id).map(|s|s.binding.clone()).flatten()  else {return};
                match id {
                    IdentifierBinding::VarDeclaration(var_declaration) => {
                        let var_types = self.query_var_types(&var_declaration);
                        let types = var_types.into_iter().fold(vec![], |mut target, item| {
                            if let Type::Unresolved(unresolved) = &item.r#type {
                                if !intersection(&unresolved, types.types()).is_empty() {
                                    target.append(&mut types.types().clone());
                                    return target;
                                }
                            }
                            target.push(item);
                            target
                        });
                        let types = SumType::new(types);

                        // follow the back propergation further
                        self.back_propagate_types(block, &var_declaration.value, &types);
                        // update resolved types

                        let entry = self
                            .variable_declarations
                            .entry(var_declaration.node.id)
                            .or_insert(VarDeclarationSemantics {
                                inferred_types: None,
                            });
                        entry.inferred_types = Some(types);
                    }
                    IdentifierBinding::Parameter(_) => {}
                }
            }
            ExpressionType::UnaryExpression(expr) => {
                self.back_propagate_types(block, &expr.operand, types)
            }
            ExpressionType::BinaryExpression(expr) => {
                self.back_propagate_types(block, &expr.left, types);
                self.back_propagate_types(block, &expr.right, types);
            }
            ExpressionType::ParenthesizedExpression(expr) => {
                self.back_propagate_types(block, &expr.expression, types)
            }
            ExpressionType::IntLiteral(_) => {}
            ExpressionType::Null => {}
            ExpressionType::Bool(_) => {}
            ExpressionType::ArrayExpression(_) => {}
            ExpressionType::SliceExpression(_) => {}
            ExpressionType::FunctionCall(_) => {}
            ExpressionType::String(_) => {}
            ExpressionType::StructInitialization(_) => {}
            ExpressionType::SelectorExpression(_) => {}
        }
    }

    fn lookup_identifier_from_block(
        &mut self,
        block: &Block,
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

    fn validate_expression(
        &mut self,
        fun: &Function,
        block: &Ptr<Block>,
        expression: &Expression,
    ) -> Option<SumType> {
        let types = match &expression.r#type {
            ExpressionType::String(_) => {
                SumType::from_type(RefType::value(expression.node.clone(), Type::String))
            }

            ExpressionType::Identifier(identifier) => {
                let identifier =
                    match self.lookup_identifier_from_block(block, expression.node.id, &identifier)
                    {
                        Some(identifier) => identifier,
                        None => {
                            self.errors.push(LangError::type_error(
                                &expression.node,
                                format!("Identifier not found: {:?}", identifier),
                            ));
                            return None;
                        }
                    };
                match identifier {
                    IdentifierBinding::VarDeclaration(var) => self.query_var_types(&var),
                    IdentifierBinding::Parameter(param) => SumType::from_types(&param.types),
                }
            }
            ExpressionType::IntLiteral(_) => SumType::from_type(RefType::value(
                expression.node.clone(),
                Type::Unresolved(vec![
                    RefType::value(expression.node.clone(), Type::I32),
                    RefType::value(expression.node.clone(), Type::U32),
                ]),
            )),
            ExpressionType::Null => {
                SumType::from_type(RefType::value(expression.node.clone(), Type::Null))
            }
            ExpressionType::Bool(_) => {
                SumType::from_type(RefType::value(expression.node.clone(), Type::Bool))
            }

            ExpressionType::UnaryExpression(unary) => match unary.operator {
                UnaryOperator::Minus => match unary.operand.r#type {
                    ExpressionType::IntLiteral(_) => SumType::from_type(RefType::value(
                        unary.operand.node.clone(),
                        Type::Unresolved(vec![RefType::value(
                            unary.operand.node.clone(),
                            Type::I32,
                        )]),
                    )),
                    _ => {
                        self.errors.push(LangError::type_error(
                            &expression.node,
                            format!("Unexpected operand: {:?}", unary.operand.r#type),
                        ));
                        return None;
                    }
                },
                UnaryOperator::Not => self
                    .validate_expression(fun, block, &unary.operand)
                    .unwrap_or(SumType::new(vec![])),
                UnaryOperator::Reference => {
                    let types = self
                        .validate_expression(fun, block, &unary.operand)
                        .unwrap_or(SumType::new(vec![]));

                    types
                        .types()
                        .into_iter()
                        .map(|it| RefType::reference(it.node.clone(), it.r#type.clone()))
                        .collect()
                }
                UnaryOperator::TypeOf => todo!(),
            },
            // var u32 i, i + 3
            ExpressionType::BinaryExpression(binary) => {
                let left = self
                    .validate_expression(fun, block, &binary.left)
                    .unwrap_or(SumType::new(vec![]));
                let right = self
                    .validate_expression(fun, block, &binary.right)
                    .unwrap_or(SumType::new(vec![]));
                let overlap = intersection(&left.types(), &right.types());
                if overlap.is_empty() {
                    self.errors.push(LangError::type_error(
                        &expression.node,
                        format!(
                            "Incompatible type in expression: left == {:?}, right == {:?}",
                            left, right,
                        ),
                    ));
                    return None;
                }
                SumType::new(overlap)
            }
            ExpressionType::ParenthesizedExpression(_) => todo!(),
            ExpressionType::ArrayExpression(array) => SumType::from_type(RefType::value(
                expression.node.clone(),
                Type::Array(Array {
                    types: Ptr::new(self.validate_expression_list(fun, block, &array.expressions)),
                    length: array.expressions.len(),
                }),
            )),
            ExpressionType::SliceExpression(slice) => SumType::from_type(RefType::value(
                expression.node.clone(),
                Type::Slice(Slice {
                    types: Ptr::new(self.validate_expression_list(
                        fun,
                        block,
                        &vec![slice.operand.as_ref().clone()],
                    )),
                }),
            )),
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
                let fun_declaration = fun_declaration.as_function_signature();

                if fun_declaration.parameters.len() != fun_call.arguments.len() {
                    self.errors.push(LangError::type_error(
                        &expression.node,
                        format!(
                            "Expected {} arguments but found {}",
                            fun_declaration.parameters.len(),
                            fun_call.arguments.len()
                        ),
                    ));
                    return None;
                }

                for (i, parameter) in fun_declaration.parameters.iter().enumerate() {
                    let arg = fun_call.arguments.get(i).unwrap();
                    let arg_types = self.validate_expression(fun, block, arg)?;
                    let intersection = intersection(&arg_types.types(), &parameter.types);
                    if intersection.is_empty() {
                        self.errors.push(LangError::type_error(
                            &arg.node,
                            format!(
                                "{:?}: Argument has invalid type {:?}; but expected {:?}",
                                fun_call.name, arg_types, parameter.types
                            ),
                        ));
                        return None;
                    }
                    // overwrite previous results
                    self.expressions.insert(
                        arg.node.id,
                        ExpressionSemantics {
                            resolved_types: Some(SumType::new(intersection)),
                        },
                    );
                }

                SumType::from_types(&fun_declaration.return_types)
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
                    let Some(field_type) = self.validate_expression(fun, block, &field.value) else {
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

                    let overlap = intersection(&field_type.types(), &struct_field.types);
                    if overlap.is_empty() {
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

                SumType::from_type(RefType::value(
                    expression.node.clone(),
                    Type::Identifier(struct_init.name.clone()),
                ))
            }
            ExpressionType::SelectorExpression(select) => {
                self.validate_selector_expression(fun, block, select)?
            }
        };
        let existing = self.expressions.insert(
            expression.node.id,
            ExpressionSemantics {
                resolved_types: Some(types.clone()),
            },
        );
        assert!(existing.is_none());

        Some(types)
    }

    fn validate_expression_list(
        &mut self,
        fun: &Function,
        block: &Ptr<Block>,
        expressions: &Vec<Expression>,
    ) -> Vec<RefType> {
        let mut output = Vec::new();
        for expression in expressions {
            if let Some(types) = self.validate_expression(fun, block, &expression) {
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
        fun: &Function,
        block: &Ptr<Block>,
        select: &SelectorExpression,
    ) -> Option<SumType> {
        let root_types = self.validate_expression(fun, block, &select.root)?;
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

    fn validate_if_statement(
        &mut self,
        fun: &Function,
        block: &Ptr<Block>,
        if_statement: &Ptr<IfStatement>,
    ) {
        if let Some(binary) = match &if_statement.condition.r#type {
            ExpressionType::BinaryExpression(binary) => Some(binary),
            _ => None,
        } {
            if let Some(narrowing) = self.validate_typeof_expression(fun, block, &binary) {
                let existing = self.if_statements.insert(
                    if_statement.node.id,
                    IfStatementSemantics {
                        type_narrowing: Some(narrowing),
                    },
                );
                assert!(existing.is_none());
            }
        }

        self.validate_block(fun, &if_statement.consequence);

        if let Some(alternative) = &if_statement.alternative {
            match alternative {
                IfAlternative::Else(else_block) => self.validate_block(fun, else_block),
                IfAlternative::If(nested_if) => self.validate_if_statement(fun, block, nested_if),
            }
        }
    }

    fn validate_typeof_expression(
        &mut self,
        fun: &Function,
        block: &Ptr<Block>,
        expression: &BinaryExpression,
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
                self.validate_typeof_expression(fun, block, left),
                self.validate_typeof_expression(fun, block, right),
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
            left.types.append(right.types);
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
            .validate_expression(fun, block, &unary.operand)
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
                "bool" => result
                    .types
                    .push(RefType::value(expression.right.node.clone(), Type::Bool)),
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
