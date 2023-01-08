use crate::{
    ast::{
        Array, BinaryExpression, BinaryOperator, Block, Expression, ExpressionType, File, Function,
        FunctionCall, IfAlternative, IfStatement, LangError, NodeData, Parameter, RefType,
        SelectorExpression, SelectorFieldType, Slice, Statement, Struct, Type, UnaryOperator,
        VarDeclaration,
    },
    buildin::{Buildins, FunctionDeclaration},
    types::{intersection, types_to_string, Ptr, PtrMut},
};

#[derive(Debug, Clone)]
pub enum LookupResult {
    VarDeclaration(Ptr<VarDeclaration>),
    Parameter(Parameter),
}

pub fn lookup_identifier(fun: &Function, identifier: &String) -> Option<LookupResult> {
    if let Some(var) = fun
        .body
        .read()
        .unwrap()
        .vars
        .read()
        .unwrap()
        .get(identifier)
    {
        return Some(LookupResult::VarDeclaration(var.clone()));
    }
    if let Some(param) = (&fun.parameters)
        .into_iter()
        .find(|it| &it.name == identifier)
    {
        return Some(LookupResult::Parameter(param.clone()));
    }

    None
}

pub fn lookup_function(fun: &Function, fun_call: &FunctionCall) -> Option<Ptr<Function>> {
    let file = fun.file();
    let file = file.read().unwrap();
    file.functions.get(&fun_call.name).map(|f| f.clone())
}

pub fn lookup_function_declaration(fun: &Function, name: &str) -> Option<FunctionDeclaration> {
    let file = fun.file();
    let file = file.read().unwrap();

    if let Some(declaration) = file.functions.get(name).map(|f| f.as_declaration()) {
        return Some(declaration);
    }

    let buildins = Buildins::new();
    match buildins.functions.get(name) {
        Some(fun_declaration) => Some(fun_declaration.clone()),
        None => None,
    }
}

pub fn lookup_struct(fun: &Function, name: &str) -> Option<Ptr<Struct>> {
    let file = fun.file();
    let file = file.read().unwrap();
    file.struct_defs.get(name).map(|f| f.clone())
}

fn validate_expression_list(
    fun: &Function,
    expressions: &Vec<Expression>,
    errors: &mut Vec<LangError>,
) -> Vec<RefType> {
    let mut output = Vec::new();
    for expression in expressions {
        if let Some(types) = validate_expression(fun, &expression, errors) {
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

/// Validate types contains an identifier and an optional null type
/// Returns the identifier and if nullable
fn validate_nullable_identifier(
    node: &NodeData,
    types: &Vec<RefType>,
    errors: &mut Vec<LangError>,
) -> Option<(String, bool)> {
    if types.len() > 2 || types.len() > 1 && !types.iter().any(|t| matches!(t.r#type, Type::Null)) {
        errors.push(LangError::type_error(
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
        errors.push(LangError::type_error(
            node,
            format!("Type is not an identifier: {:?}", types),
        ));
        return None;
    };

    Some((identifier.clone(), types.len() == 2))
}

/// Returns the type of the expression
fn selector_expression_type(
    fun: &Function,
    select: &SelectorExpression,
    errors: &mut Vec<LangError>,
) -> Option<Vec<RefType>> {
    let root_types = validate_expression(fun, &select.root, errors)?;
    let (identifier, nullable) =
        validate_nullable_identifier(&select.root.node, &root_types, errors)?;
    let Some(current_struct) = lookup_struct(fun, &identifier) else {
        errors.push(LangError::type_error(
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
            errors.push(LangError::type_error(
                &field.node,
                format!(
                    "{} is potentially null; use optional chaining '?.'",
                    current_struct.name
                ),
            ));
            return None;
        }
        if !current_struct_nullable && field.optional_chaining {
            errors.push(LangError::type_error(
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
                        errors.push(LangError::type_error(
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
                    return Some(types);
                }
                SelectorFieldType::Call => todo!(),
            }
        } else {
            match &field.field {
                SelectorFieldType::Identifier(field_identifier) => {
                    let Some(found_field) = current_struct.fields.iter().find(|f|&f.name == field_identifier) else {
                        errors.push(LangError::type_error(
                            &field.node,
                            format!("{} is not field of {}", field_identifier, current_struct.name),
                        ));
                        return None;
                    };
                    let (identifier, nullable) =
                        validate_nullable_identifier(&field.node, &found_field.types, errors)?;
                    let Some(found_struct) = lookup_struct(fun, &identifier) else {
                        errors.push(LangError::type_error(
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

fn validate_expression(
    fun: &Function,
    expression: &Expression,
    errors: &mut Vec<LangError>,
) -> Option<Vec<RefType>> {
    let types = match &expression.r#type {
        ExpressionType::String(_) => vec![RefType::value(Type::String)],

        ExpressionType::Identifier(identifier) => {
            let identifier = match lookup_identifier(fun, &identifier) {
                Some(identifier) => identifier,
                None => {
                    errors.push(LangError::type_error(
                        &expression.node,
                        format!("Identifier not found: {:?}", identifier),
                    ));
                    return None;
                }
            };
            match identifier {
                LookupResult::VarDeclaration(var) => var.types(),
                LookupResult::Parameter(param) => param.types.clone(),
            }
        }
        ExpressionType::IntLiteral(_) => vec![RefType::value(Type::Unresolved(vec![
            RefType::value(Type::I32),
            RefType::value(Type::U32),
        ]))],
        ExpressionType::Null => vec![RefType::value(Type::Null)],
        ExpressionType::Bool(_) => vec![RefType::value(Type::Bool)],

        ExpressionType::UnaryExpression(unary) => match unary.operator {
            UnaryOperator::Minus => match unary.operand.r#type {
                ExpressionType::IntLiteral(_) => {
                    vec![RefType::value(Type::Unresolved(vec![RefType::value(
                        Type::I32,
                    )]))]
                }
                _ => {
                    errors.push(LangError::type_error(
                        &expression.node,
                        format!("Unexpected operand: {:?}", unary.operand.r#type),
                    ));
                    return None;
                }
            },
            UnaryOperator::Not => {
                validate_expression(fun, &unary.operand, errors).unwrap_or(vec![])
            }
            UnaryOperator::Reference => {
                let types = validate_expression(fun, &unary.operand, errors).unwrap_or(vec![]);

                types
                    .into_iter()
                    .map(|it| RefType::reference(it.r#type))
                    .collect()
            }
            UnaryOperator::TypeOf => todo!(),
        },
        // var u32 i, i + 3
        ExpressionType::BinaryExpression(binary) => {
            let left = validate_expression(fun, &binary.left, errors).unwrap_or(vec![]);
            let right = validate_expression(fun, &binary.right, errors).unwrap_or(vec![]);
            let overlap: Vec<RefType> = intersection(&left, &right);
            if overlap.is_empty() {
                errors.push(LangError::type_error(
                    &expression.node,
                    format!(
                        "Incompatible type in expression: left == {:?}, right == {:?}",
                        left, right,
                    ),
                ));
                return None;
            }
            overlap
        }
        ExpressionType::ParenthesizedExpression(_) => todo!(),
        ExpressionType::ArrayExpression(array) => vec![RefType {
            is_reference: false,
            r#type: Type::Array(Array {
                types: Ptr::new(validate_expression_list(fun, &array.expressions, errors)),
                length: array.expressions.len(),
            }),
        }],
        ExpressionType::SliceExpression(slice) => vec![RefType {
            is_reference: false,
            r#type: Type::Slice(Slice {
                types: Ptr::new(validate_expression_list(
                    fun,
                    &vec![slice.operand.as_ref().clone()],
                    errors,
                )),
            }),
        }],
        ExpressionType::FunctionCall(fun_call) => {
            let fun_declaration = match lookup_function_declaration(fun, &fun_call.name) {
                Some(fun) => fun,
                None => {
                    errors.push(LangError::type_error(
                        &expression.node,
                        format!("No fun with name {} found", fun_call.name),
                    ));
                    return None;
                }
            };

            if fun_declaration.parameters.len() != fun_call.arguments.len() {
                errors.push(LangError::type_error(
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
                let arg_types = validate_expression(&fun, arg, errors)?;
                let intersection = intersection(&parameter.types, &arg_types);
                if intersection.is_empty() {
                    errors.push(LangError::type_error(
                        &arg.node,
                        format!(
                            "{:?}: Argument has invalid type {:?}; but expected {:?}",
                            fun_call.name, arg_types, parameter.types
                        ),
                    ));
                    return None;
                }
                let mut m = arg.resolved_types.write().unwrap();
                *m = Some(intersection);
            }

            fun_declaration.return_types
        }
        ExpressionType::StructInitialization(struct_init) => {
            for field in &struct_init.fields {
                validate_expression(fun, &field.value, errors);
            }
            vec![RefType::value(Type::Identifier(struct_init.name.clone()))]
        }
        ExpressionType::SelectorExpression(select) => {
            validate_expression(fun, &select.root, errors);
            selector_expression_type(fun, select, errors)?
        }
    };
    let mut resolved_types = expression.resolved_types.write().unwrap();
    *resolved_types = Some(types.clone());
    Some(types)
}

#[derive(Debug, Clone)]
pub struct TypeNarrowing {
    pub original_types: Vec<RefType>,
    pub identifier: String,
    /// true if in the form (typeof X != bool && typeof X != i32)
    /// false if in the form (typeof X == bool || typeof X == i32)
    pub reduction: bool,
    /// Narrowed types
    pub types: Vec<RefType>,
}

fn validate_typeof_expression(
    fun: &Function,
    expression: &BinaryExpression,
    errors: &mut Vec<LangError>,
) -> Option<TypeNarrowing> {
    let is_and_or = match expression.operator {
        BinaryOperator::And => true,
        BinaryOperator::Or => true,
        _ => false,
    };
    if is_and_or {
        let (left, right) = match (&expression.left.r#type, &expression.right.r#type) {
            (ExpressionType::BinaryExpression(left), ExpressionType::BinaryExpression(right)) => {
                (left, right)
            }
            _ => return None,
        };
        let (mut left, mut right) = match (
            validate_typeof_expression(fun, left, errors),
            validate_typeof_expression(fun, right, errors),
        ) {
            (None, None) => return None,
            (Some(left), Some(right)) => (left, right),
            _ => {
                errors.push(LangError::type_error(
                    // TODO: parent node?
                    &expression.right.node,
                    "Type narrowing can't be mixed with other expressions".to_string(),
                ));
                return None;
            }
        };
        if left.identifier != right.identifier {
            errors.push(LangError::type_error(
                // TODO: parent node?
                &expression.left.node,
                "Type narrowing identifier missmatch".to_string(),
            ));
            return None;
        }
        if left.reduction != right.reduction {
            errors.push(LangError::type_error(
                // TODO: parent node?
                &expression.left.node,
                "Invalid type narrowing".to_string(),
            ));
            return None;
        }
        left.types.append(&mut right.types);
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
            errors.push(LangError::type_error(
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
            errors.push(LangError::type_error(
                &expression.left.node,
                format!("Invalid typeof operator"),
            ));
            return None;
        }
    };

    let original_types = validate_expression(fun, &unary.operand, errors).unwrap_or(vec![]);
    for t in &original_types {
        if let Type::Unresolved(_) = &t.r#type {
            errors.push(LangError::type_error(
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
        types: vec![],
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
                errors.push(LangError::type_error(
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
            errors.push(LangError::type_error(
                &expression.right.node,
                "Invalid typeof expression".to_string(),
            ));
            return None;
        }
    }
    Some(result)
}

/// If the expression narrowed down the types of a variable, back propergated this up to previous useage.
fn back_propergate_types(fun: &Function, expression: &Expression, types: &Vec<RefType>) {
    match &expression.r#type {
        ExpressionType::Identifier(id) => {
            let Some(id) = lookup_identifier(fun,id) else {return};
            match id {
                LookupResult::VarDeclaration(var_declaration) => {
                    let var_types = var_declaration.types();
                    let types = var_types.into_iter().fold(vec![], |mut target, item| {
                        if let Type::Unresolved(unresolved) = &item.r#type {
                            if !intersection(&unresolved, types).is_empty() {
                                target.append(&mut types.clone());
                                return target;
                            }
                        }
                        target.push(item);
                        target
                    });

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

fn validate_declaration_types(
    file: &PtrMut<File>,
    node: &NodeData,
    types: &Vec<RefType>,
    errors: &mut Vec<LangError>,
) -> Vec<RefType> {
    let mut result_types = vec![];
    for t in types {
        if result_types.iter().find(|v| *v == t).is_none() {
            result_types.push(t.clone());
        } else {
            errors.push(LangError::type_error(
                node,
                format!("Duplicated type: {:?}", t),
            ))
        }
    }
    result_types.sort();

    // Add sum type
    if result_types.len() > 1 {
        file.write()
            .unwrap()
            .sum_types
            .insert(sum_type_name(&result_types), result_types.clone());
    }
    result_types
}
pub fn validate_var_declaration(
    fun: &Function,
    block: &Block,
    var_declaration: Ptr<VarDeclaration>,
    errors: &mut Vec<LangError>,
) {
    let mut var_types = if let Some(types) = &var_declaration.types {
        validate_declaration_types(&fun.file(), &var_declaration.node, types, errors)
    } else {
        vec![]
    };

    let expr = validate_expression(fun, &var_declaration.value, errors).unwrap_or(vec![]);
    if var_types.is_empty() {
        for t in expr {
            var_types.push(t);
        }
        var_types.sort();
    } else {
        let overlap = intersection(&var_types, &expr);
        if overlap.is_empty() {
            errors.push(LangError::type_error(
                &var_declaration.node,
                format!(
                    "Incompatible type in var assignement: var: {}, expr: {}",
                    types_to_string(&var_types),
                    types_to_string(&expr),
                ),
            ));
            return;
        }
        back_propergate_types(fun, &var_declaration.value, &overlap);

        if var_types.is_empty() {
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
        errors.push(LangError::type_error(
            &var_declaration.node,
            format!("Variable already declared: {:?}", var_declaration.name),
        ));
        return;
    }
}

pub fn validate_statement(
    fun: &Function,
    block: &Block,
    statement: &Statement,
    errors: &mut Vec<LangError>,
) {
    match statement {
        Statement::Expression(expression) => {
            validate_expression(fun, expression, errors);
        }
        Statement::VarDeclaration(var_declaration) => {
            validate_var_declaration(fun, block, var_declaration.clone(), errors);
        }
        Statement::Return(ret) => {
            let (ret_types, expression) = if let Some(expression) = ret {
                let Some(ret_types) = validate_expression(fun, expression, errors) else {
                    // error validating the return expression
                    return;
                };
                (ret_types, Some(expression))
            } else {
                (vec![], None)
            };

            if ret_types.is_empty() && fun.return_types.is_some() {
                errors.push(LangError::type_error(
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
            let overlap = intersection(&ret_types, &fun_ret_type);
            if overlap.is_empty() {
                errors.push(LangError::type_error(
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
        Statement::IfStatement(if_statement) => validate_if_statement(fun, if_statement, errors),
    };
}

fn validate_if_statement(
    fun: &Function,
    if_statement: &PtrMut<IfStatement>,
    errors: &mut Vec<LangError>,
) {
    let mut statement = if_statement.write().unwrap();
    if let Some(binary) = match &statement.condition.r#type {
        ExpressionType::BinaryExpression(binary) => Some(binary),
        _ => None,
    } {
        if let Some(narrowing) = validate_typeof_expression(fun, &binary, errors) {
            statement.type_narrowing = Some(narrowing);
        }
    }

    validate_block(fun, &statement.consequence, errors);

    if let Some(alternative) = &statement.alternative {
        match alternative {
            IfAlternative::Else(else_block) => validate_block(fun, else_block, errors),
            IfAlternative::If(nested_if) => validate_if_statement(fun, nested_if, errors),
        }
    }
}

fn validate_block(fun: &Function, block: &PtrMut<Block>, errors: &mut Vec<LangError>) {
    let block = block.read().unwrap();
    for statement in &block.statements {
        validate_statement(fun, &block, statement, errors);
    }
}

fn validate_fun(fun: &Function, errors: &mut Vec<LangError>) {
    // TODO: fun name clash with other definitions?

    for par_ref in &fun.parameters {
        //let parameter = par_ref.get(parser)
        // Add sum type
        if par_ref.types.len() > 1 {
            fun.file()
                .write()
                .unwrap()
                .sum_types
                .insert(sum_type_name(&par_ref.types), par_ref.types.clone());
        }
    }
    let block = fun.body.clone();

    validate_block(fun, &block, errors);
}

fn validate_struct_def(file: &PtrMut<File>, struct_def: &Ptr<Struct>, errors: &mut Vec<LangError>) {
    // TODO: struct name clash with other definitions?

    for field in &struct_def.fields {
        validate_declaration_types(file, &field.node, &field.types, errors);
    }
}

pub fn validate(file: &PtrMut<File>, errors: &mut Vec<LangError>) {
    // clone structs in order to release the read lock (write lock is acquired during validation)
    let struct_defs = file.read().unwrap().struct_defs.clone();
    for (_, struct_def) in &struct_defs {
        validate_struct_def(file, struct_def, errors);
    }

    let functions = file.read().unwrap().functions.clone();
    for (_, fun) in &functions {
        validate_fun(fun, errors);
    }
}

/// types must be sorted
pub fn sum_type_name(types: &Vec<RefType>) -> String {
    let mut name = "".to_string();
    for t in types {
        if t.is_reference {
            name += "R";
        }
        let part = match &t.r#type {
            Type::Null => "N",
            Type::Str => "S",
            Type::String => "St",
            Type::Bool => "B",
            Type::U8 => "U8",
            Type::I8 => "I8",
            Type::U32 => "U32",
            Type::I32 => "I32",
            Type::Identifier(id) => id,
            Type::Array(array) => {
                let types = array.types.as_ref().clone();
                name += "A";
                let part = sum_type_name(&types);
                name += &part;
                name += "E";
                continue;
            }
            Type::Slice(slice) => {
                let types = slice.types.as_ref().clone();
                name += "As";
                let part = sum_type_name(&types);
                name += &part;
                name += "E";
                continue;
            }
            Type::Unresolved(_) => panic!("Internal error"),
        };
        name += part;
    }
    name
}
