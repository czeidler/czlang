use std::collections::{HashMap, HashSet};

use crate::{
    ast::{
        Array, BinaryExpression, BinaryOperator, Block, Expression, ExpressionType, File, Function,
        IfAlternative, IfStatement, LangError, NodeData, RefType, SelectorExpression,
        SelectorFieldType, Slice, Statement, Struct, Type, UnaryOperator, VarDeclaration,
    },
    types::{intersection, types_to_string, Ptr, PtrMut, SumType},
    validation::{lookup_function_declaration, lookup_identifier, lookup_struct, LookupResult},
};

/*
struct VarDeclarationSemantics {
    pub resolved_types: PtrMut<Option<SumType>>,
}

struct BlockSemantics {
    pub vars: RwLock<HashMap<String, Ptr<VarDeclaration>>>,
}


struct IdentifierSemantics {}
*/

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

pub struct FileSemanticAnalyzer {
    pub file: PtrMut<File>,
    pub sum_types: HashMap<String, SumType>,
    structs: HashSet<usize>,
    /// Just keep track of analyzed/checked functions
    fun_symbols: HashSet<usize>,
    pub if_statements: HashMap<usize, IfStatementSemantics>,
    // identifiers: HashMap<usize, IdentifierSemantics>,
    // variable_declarations: HashMap<usize, VarDeclarationSemantics>,
    // blocks: HashMap<usize, BlockSemantics>,
    pub errors: Vec<LangError>,
}

impl FileSemanticAnalyzer {
    pub fn new(file: PtrMut<File>) -> Self {
        FileSemanticAnalyzer {
            file,
            sum_types: HashMap::new(),
            //identifier_symbols: HashMap::new(),
            structs: HashSet::new(),
            fun_symbols: HashSet::new(),
            if_statements: HashMap::new(),
            //var_symbols: HashMap::new(),
            //block_symbols: HashMap::new(),
            errors: Vec::new(),
        }
    }

    pub fn analyze(&mut self) {
        // clone structs in order to release the read lock (write lock is acquired during validation)
        let struct_defs = self.file.read().unwrap().struct_defs.clone();
        for (_, struct_def) in struct_defs {
            self.analyze_struct(struct_def);
        }

        let functions = self.file.read().unwrap().functions.clone();
        for (_, fun) in functions {
            self.analyze_fun(fun);
        }
    }

    pub fn analyze_struct(&mut self, struct_def: Ptr<Struct>) {
        if self.structs.contains(&struct_def.node.id) {
            return;
        }

        self.validate_struct_def(&struct_def);

        self.fun_symbols.insert(struct_def.node.id);
    }

    pub fn analyze_fun(&mut self, fun: Ptr<Function>) {
        if self.fun_symbols.contains(&fun.node.id) {
            return;
        }

        self.validate_fun(&fun);

        self.fun_symbols.insert(fun.node.id);
    }

    fn validate_struct_def(&mut self, struct_def: &Ptr<Struct>) {
        // TODO: struct name clash with other definitions?

        for field in &struct_def.fields {
            self.validate_declaration_types(&field.node, &field.types);
        }
    }

    fn validate_declaration_types(&mut self, node: &NodeData, types: &Vec<RefType>) -> SumType {
        let mut result_types = vec![];
        for t in types {
            if result_types.iter().find(|v| *v == t).is_none() {
                result_types.push(t.clone());
            } else {
                self.errors.push(LangError::type_error(
                    node,
                    format!("Duplicated type: {:?}", t),
                ))
            }
        }
        let result_types = SumType::new(result_types);

        // Add sum type
        if result_types.len() > 1 {
            self.sum_types
                .insert(result_types.sum_type_name(), result_types.clone());
        }
        result_types
    }

    fn validate_fun(&mut self, fun: &Function) {
        // TODO: fun name clash with other definitions?

        for par_ref in &fun.parameters {
            // Add sum type
            if par_ref.types.len() > 1 {
                let sum_type = SumType::from_types(&par_ref.types);
                self.sum_types.insert(sum_type.sum_type_name(), sum_type);
            }
        }
        let block = fun.body.clone();

        self.validate_block(fun, &block);
    }

    fn validate_block(&mut self, fun: &Function, block: &PtrMut<Block>) {
        let block = block.read().unwrap();
        for statement in &block.statements {
            self.validate_statement(fun, &block, statement);
        }
    }

    fn validate_statement(&mut self, fun: &Function, block: &Block, statement: &Statement) {
        match statement {
            Statement::Expression(expression) => {
                self.validate_expression(fun, expression);
            }
            Statement::VarDeclaration(var_declaration) => {
                self.validate_var_declaration(fun, block, var_declaration.clone());
            }
            Statement::Return(ret) => {
                let (ret_types, expression) = if let Some(expression) = ret {
                    let Some(ret_types) = self.validate_expression(fun, expression) else {
                        // error validating the return expression
                        return;
                    };
                    (ret_types, Some(expression))
                } else {
                    (SumType::new(vec![]), None)
                };

                if ret_types.is_empty() && fun.return_types.is_some() {
                    self.errors.push(LangError::type_error(
                        &expression
                            .map(|e| e.node.clone())
                            .unwrap_or(fun.node.clone()),
                        format!("Expected return type {:?}", fun.return_types),
                    ));
                    return;
                }
                if ret_types.is_empty() && fun.return_types.is_none() {
                    return;
                }
                let fun_ret_type = if let Some(fun_ret_type) = &fun.return_types {
                    fun_ret_type.clone()
                } else {
                    vec![]
                };
                let overlap = intersection(&ret_types.types(), &fun_ret_type);
                if overlap.is_empty() {
                    self.errors.push(LangError::type_error(
                        &expression
                            .map(|e| e.node.clone())
                            .unwrap_or(fun.node.clone()),
                        format!(
                            "Incompatible return type: fun == {:?}, expr == {:?}",
                            fun.return_types, ret_types,
                        ),
                    ));
                    return;
                }
            }
            Statement::IfStatement(if_statement) => self.validate_if_statement(fun, if_statement),
        };
    }

    fn validate_var_declaration(
        &mut self,
        fun: &Function,
        block: &Block,
        var_declaration: Ptr<VarDeclaration>,
    ) {
        let mut var_types = if let Some(types) = &var_declaration.types {
            self.validate_declaration_types(&var_declaration.node, types)
        } else {
            SumType::new(vec![])
        };

        let expr = self
            .validate_expression(fun, &var_declaration.value)
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
            back_propergate_types(fun, &var_declaration.value, &overlap);

            if var_types.types().is_empty() {
                var_types = overlap;
            }
        }

        *var_declaration.resolved_types.write().unwrap() = Some(var_types);
        if let Some(_) = block
            .vars
            .write()
            .unwrap()
            .insert(var_declaration.name.clone(), var_declaration.clone())
        {
            self.errors.push(LangError::type_error(
                &var_declaration.node,
                format!("Variable already declared: {:?}", var_declaration.name),
            ));
            return;
        }
    }

    fn validate_expression(&mut self, fun: &Function, expression: &Expression) -> Option<SumType> {
        let types = match &expression.r#type {
            ExpressionType::String(_) => SumType::from_type(RefType::value(Type::String)),

            ExpressionType::Identifier(identifier) => {
                let identifier = match lookup_identifier(fun, &identifier) {
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
                    LookupResult::VarDeclaration(var) => var.types(),
                    LookupResult::Parameter(param) => SumType::from_types(&param.types),
                }
            }
            ExpressionType::IntLiteral(_) => {
                SumType::from_type(RefType::value(Type::Unresolved(vec![
                    RefType::value(Type::I32),
                    RefType::value(Type::U32),
                ])))
            }
            ExpressionType::Null => SumType::from_type(RefType::value(Type::Null)),
            ExpressionType::Bool(_) => SumType::from_type(RefType::value(Type::Bool)),

            ExpressionType::UnaryExpression(unary) => match unary.operator {
                UnaryOperator::Minus => match unary.operand.r#type {
                    ExpressionType::IntLiteral(_) => SumType::from_type(RefType::value(
                        Type::Unresolved(vec![RefType::value(Type::I32)]),
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
                    .validate_expression(fun, &unary.operand)
                    .unwrap_or(SumType::new(vec![])),
                UnaryOperator::Reference => {
                    let types = self
                        .validate_expression(fun, &unary.operand)
                        .unwrap_or(SumType::new(vec![]));

                    types
                        .types()
                        .into_iter()
                        .map(|it| RefType::reference(it.r#type.clone()))
                        .collect()
                }
                UnaryOperator::TypeOf => todo!(),
            },
            // var u32 i, i + 3
            ExpressionType::BinaryExpression(binary) => {
                let left = self
                    .validate_expression(fun, &binary.left)
                    .unwrap_or(SumType::new(vec![]));
                let right = self
                    .validate_expression(fun, &binary.right)
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
            ExpressionType::ArrayExpression(array) => SumType::from_type(RefType {
                is_reference: false,
                r#type: Type::Array(Array {
                    types: Ptr::new(self.validate_expression_list(fun, &array.expressions)),
                    length: array.expressions.len(),
                }),
            }),
            ExpressionType::SliceExpression(slice) => SumType::from_type(RefType {
                is_reference: false,
                r#type: Type::Slice(Slice {
                    types: Ptr::new(
                        self.validate_expression_list(fun, &vec![slice.operand.as_ref().clone()]),
                    ),
                }),
            }),
            ExpressionType::FunctionCall(fun_call) => {
                let fun_declaration = match lookup_function_declaration(fun, &fun_call.name) {
                    Some(fun) => fun,
                    None => {
                        self.errors.push(LangError::type_error(
                            &expression.node,
                            format!("No fun with name {} found", fun_call.name),
                        ));
                        return None;
                    }
                };

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
                    let arg_types = self.validate_expression(&fun, arg)?;
                    let intersection = intersection(&parameter.types, &arg_types.types());
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
                    let mut m = arg.resolved_types.write().unwrap();
                    *m = Some(SumType::new(intersection));
                }

                SumType::from_types(&fun_declaration.return_types)
            }
            ExpressionType::StructInitialization(struct_init) => {
                for field in &struct_init.fields {
                    self.validate_expression(fun, &field.value);
                }
                SumType::from_type(RefType::value(Type::Identifier(struct_init.name.clone())))
            }
            ExpressionType::SelectorExpression(select) => {
                self.validate_expression(fun, &select.root);
                self.selector_expression_type(fun, select)?
            }
        };
        let mut resolved_types = expression.resolved_types.write().unwrap();
        *resolved_types = Some(types.clone());
        Some(types)
    }

    fn validate_expression_list(
        &mut self,
        fun: &Function,
        expressions: &Vec<Expression>,
    ) -> Vec<RefType> {
        let mut output = Vec::new();
        for expression in expressions {
            if let Some(types) = self.validate_expression(fun, &expression) {
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
    fn selector_expression_type(
        &mut self,
        fun: &Function,
        select: &SelectorExpression,
    ) -> Option<SumType> {
        let root_types = self.validate_expression(fun, &select.root)?;
        let (identifier, nullable) =
            self.validate_nullable_identifier(&select.root.node, &root_types)?;
        let Some(current_struct) = lookup_struct(fun, &identifier) else {
        self.errors.push(LangError::type_error(
            &select.root.node,
            format!("{} is not a struct", identifier),
        ));
        return None;
    };
        let mut current_struct = current_struct;
        let mut current_struct_nullable = nullable;
        let mut nullable_chain = nullable;
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
            if i == select.fields.len() - 1 {
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
                            types.push(RefType::value(Type::Null));
                            types.sort();
                        }
                        return Some(SumType::new(types));
                    }
                    SelectorFieldType::Call => todo!(),
                }
            } else {
                match &field.field {
                    SelectorFieldType::Identifier(field_identifier) => {
                        let Some(found_field) = current_struct.fields.iter().find(|f|&f.name == field_identifier) else {
                            self.errors.push(LangError::type_error(
                            &field.node,
                            format!("{} is not field of {}", field_identifier, current_struct.name),
                        ));
                        return None;
                    };
                        let (identifier, nullable) = self.validate_nullable_identifier(
                            &field.node,
                            &SumType::from_types(&found_field.types),
                        )?;
                        let Some(found_struct) = lookup_struct(fun, &identifier) else {
                            self.errors.push(LangError::type_error(
                            &field.node,
                            format!("{} is not a struct", identifier),
                        ));
                        return None;
                    };
                        current_struct = found_struct;
                        current_struct_nullable = nullable;
                    }
                    SelectorFieldType::Call => todo!(),
                }
            }
        }
        return None;
    }

    /// Validate types contains an identifier and an optional null type
    /// Returns the identifier and if nullable
    fn validate_nullable_identifier(
        &mut self,
        node: &NodeData,
        types: &SumType,
    ) -> Option<(String, bool)> {
        if types.len() > 2
            || types.len() > 1 && !types.iter().any(|t| matches!(t.r#type, Type::Null))
        {
            self.errors.push(LangError::type_error(
                node,
                format!("Sum type not allowed: {:?}", types),
            ));
            return None;
        }
        let identifier = types
            .iter()
            .filter_map(|t| match &t.r#type {
                Type::Identifier(identifier) => Some(identifier),
                _ => None,
            })
            .next();
        let Some(identifier) = identifier else {
        self.errors.push(LangError::type_error(
            node,
            format!("Type is not an identifier: {:?}", types),
        ));
        return None;
    };

        Some((identifier.clone(), types.len() == 2))
    }

    fn validate_if_statement(&mut self, fun: &Function, if_statement: &Ptr<IfStatement>) {
        if let Some(binary) = match &if_statement.condition.r#type {
            ExpressionType::BinaryExpression(binary) => Some(binary),
            _ => None,
        } {
            if let Some(narrowing) = self.validate_typeof_expression(fun, &binary) {
                self.if_statements.insert(
                    if_statement.node.id,
                    IfStatementSemantics {
                        type_narrowing: Some(narrowing),
                    },
                );
            }
        }

        self.validate_block(fun, &if_statement.consequence);

        if let Some(alternative) = &if_statement.alternative {
            match alternative {
                IfAlternative::Else(else_block) => self.validate_block(fun, else_block),
                IfAlternative::If(nested_if) => self.validate_if_statement(fun, nested_if),
            }
        }
    }

    fn validate_typeof_expression(
        &mut self,
        fun: &Function,
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
                self.validate_typeof_expression(fun, left),
                self.validate_typeof_expression(fun, right),
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
            .validate_expression(fun, &unary.operand)
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
                "bool" => result.types.push(RefType {
                    is_reference: false,
                    r#type: Type::Bool,
                }),
                "i32" => result.types.push(RefType {
                    is_reference: false,
                    r#type: Type::I32,
                }),
                _ => {
                    self.errors.push(LangError::type_error(
                        &expression.right.node,
                        format!("Invalid typeof identifier: {}", identifier),
                    ));
                    return None;
                }
            },
            ExpressionType::Null => result.types.push(RefType {
                is_reference: false,
                r#type: Type::Null,
            }),
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

/// If the expression narrowed down the types of a variable, back propergated this up to previous useage.
fn back_propergate_types(fun: &Function, expression: &Expression, types: &SumType) {
    match &expression.r#type {
        ExpressionType::Identifier(id) => {
            let Some(id) = lookup_identifier(fun,id) else {return};
            match id {
                LookupResult::VarDeclaration(var_declaration) => {
                    let var_types = var_declaration.types();
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
                    back_propergate_types(fun, &var_declaration.value, &types);
                    // update resolved types
                    *(var_declaration.resolved_types.write().unwrap()) = Some(types);
                }
                LookupResult::Parameter(_) => {}
            }
        }
        ExpressionType::UnaryExpression(expr) => back_propergate_types(fun, &expr.operand, types),
        ExpressionType::BinaryExpression(expr) => {
            back_propergate_types(fun, &expr.left, types);
            back_propergate_types(fun, &expr.right, types);
        }
        ExpressionType::ParenthesizedExpression(expr) => {
            back_propergate_types(fun, &expr.expression, types)
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
