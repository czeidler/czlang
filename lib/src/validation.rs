use std::{
    cell::{RefCell, RefMut},
    rc::Rc,
};

use crate::{
    ast::{
        Array, BinaryExpression, BinaryOperator, Block, Expression, ExpressionType, File, Function,
        IfAlternative, IfStatement, Parameter, RefType, Slice, Statement, Type, UnaryOperator,
        VarDeclaration, VarState,
    },
    types::{intersection, types_to_string},
};

enum LookupResult {
    VarDeclaration(Rc<VarDeclaration>),
    Parameter(Parameter),
}

fn lookup_identifier(fun: &Function, identifier: &String) -> Option<LookupResult> {
    if let Some(var) = fun.body.borrow().vars.borrow().get(identifier) {
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

fn validate_expression_list(
    fun: &Function,
    expressions: &Vec<Expression>,
) -> Result<Vec<RefType>, String> {
    let mut output = Vec::new();
    for expression in expressions {
        let types = expression_type(fun, &expression)?;
        for t in types {
            if !output.contains(&t) {
                output.push(t);
            }
        }
    }
    output.sort();
    Ok(output)
}

pub fn expression_type(fun: &Function, expression: &Expression) -> Result<Vec<RefType>, String> {
    let types = match &expression.r#type {
        ExpressionType::String(_) => vec![RefType::value(Type::String)],

        ExpressionType::Identifier(identifier) => {
            let identifier = match lookup_identifier(fun, &identifier) {
                Some(identifier) => identifier,
                None => return Err(format!("Identifier not found: {:?}", identifier)),
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
                _ => return Err(format!("Unexpected operand: {:?}", unary.operand.r#type)),
            },
            UnaryOperator::Not => expression_type(fun, &unary.operand)?,
            UnaryOperator::Reference => {
                let types = expression_type(fun, &unary.operand)?;

                types
                    .into_iter()
                    .map(|it| RefType::reference(it.r#type))
                    .collect()
            }
            UnaryOperator::TypeOf => todo!(),
        },
        // var u32 i, i + 3
        ExpressionType::BinaryExpression(binary) => {
            let left = validate_expression(fun, &binary.left)?;
            let right = validate_expression(fun, &binary.right)?;
            let overlap: Vec<RefType> = intersection(&left, &right);
            if overlap.is_empty() {
                return Err(format!(
                    "Incompatible type in expression: left == {:?}, right == {:?}",
                    left, right,
                ));
            }
            overlap
        }
        ExpressionType::ParenthesizedExpression(_) => todo!(),
        ExpressionType::ArrayExpression(array) => vec![RefType {
            is_reference: false,
            r#type: Type::Array(Array {
                types: Rc::new(validate_expression_list(fun, &array.expressions)?),
                length: array.expressions.len(),
            }),
        }],
        ExpressionType::SliceExpression(slice) => vec![RefType {
            is_reference: false,
            r#type: Type::Slice(Slice {
                types: Rc::new(validate_expression_list(
                    fun,
                    &vec![slice.operand.as_ref().clone()],
                )?),
            }),
        }],
        ExpressionType::FunctionCall(fun_call) => {
            let file = fun.file();
            let file = file.borrow();
            let fun_declaration = match file.lookup_function(&fun_call.name) {
                Some(fun) => fun,
                None => return Err(format!("No fun with name {} found", fun_call.name)),
            };

            if fun_declaration.parameters.len() != fun_call.arguments.len() {
                return Err(format!(
                    "Expected {} arguments but found {}",
                    fun_declaration.parameters.len(),
                    fun_call.arguments.len()
                ));
            }

            for (i, parameter) in fun_declaration.parameters.iter().enumerate() {
                let arg = fun_call.arguments.get(i).unwrap();
                let arg_types = validate_expression(&fun, arg)?;
                let intersection = intersection(&parameter.types, &arg_types);
                if intersection.is_empty() {
                    return Err(format!(
                        "{:?}: Argument has invalid type {:?}; but expected {:?}",
                        fun_call.name, arg_types, parameter.types
                    ));
                }
                let mut m = arg.resolved_types.borrow_mut();
                *m = Some(intersection);
            }

            fun_declaration.return_types
        }
    };
    Ok(types)
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
) -> Result<Option<TypeNarrowing>, String> {
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
            _ => return Ok(None),
        };
        let (mut left, mut right) = match (
            validate_typeof_expression(fun, left)?,
            validate_typeof_expression(fun, right)?,
        ) {
            (None, None) => return Ok(None),
            (Some(left), Some(right)) => (left, right),
            _ => return Err("Type narrowing can't be mixed with other expressions".to_string()),
        };
        if left.identifier != right.identifier {
            return Err("Type narrowing identifier missmatch".to_string());
        }
        if left.reduction != right.reduction {
            return Err("Invalid type narrowing".to_string());
        }
        left.types.append(&mut right.types);
        return Ok(Some(left));
    }

    let unary = match &expression.left.r#type {
        ExpressionType::UnaryExpression(unary) => unary,
        _ => return Ok(None),
    };
    match unary.operator {
        UnaryOperator::TypeOf => {}
        _ => return Ok(None),
    };

    let identifier = match &unary.operand.r#type {
        ExpressionType::Identifier(identifier) => identifier,
        _ => return Err(format!("Invalid typeof identifier")),
    };

    let equal = match expression.operator {
        BinaryOperator::Equal => true,
        BinaryOperator::NotEqual => false,
        _ => return Err(format!("Invalid typeof operator")),
    };

    let original_types = validate_expression(fun, &unary.operand)?;
    for t in &original_types {
        if let Type::Unresolved(_) = &t.r#type {
            return Err(format!("Can't narrow resolve unresolved type: {:?}", &t));
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
            _ => return Err(format!("Invalid typeof identifier: {}", identifier)),
        },
        ExpressionType::Null => result.types.push(RefType {
            is_reference: false,
            r#type: Type::Null,
        }),
        _ => return Err("Invalid typeof expression".to_string()),
    }
    Ok(Some(result))
}

pub fn validate_expression(
    fun: &Function,
    expression: &Expression,
) -> Result<Vec<RefType>, String> {
    let types = expression_type(fun, expression)?;
    Ok(types)
}

pub fn validate_var_declaration(
    fun: &Function,
    block: &Block,
    var_declaration: Rc<VarDeclaration>,
) -> Result<(), String> {
    let mut var_types = vec![];
    if let Some(types) = &var_declaration.types {
        for t in types {
            if var_types.iter().find(|v| *v == t).is_none() {
                var_types.push(t.clone());
            }
        }
        var_types.sort();

        // Add sum type
        if var_types.len() > 1 {
            fun.file()
                .borrow_mut()
                .sum_types
                .insert(sum_type_name(&var_types), var_types.clone());
        }
    }

    let expr = validate_expression(fun, &var_declaration.value)?;
    if var_types.is_empty() {
        for t in expr {
            var_types.push(t);
        }
        var_types.sort();
    } else {
        let overlap = intersection(&var_types, &expr);
        if overlap.is_empty() {
            return Err(format!(
                "Incompatible type in var assignement: var: {}, expr: {}",
                types_to_string(&var_types),
                types_to_string(&expr),
            ));
        }
        var_types = overlap;
    }

    *var_declaration.resolved_types.borrow_mut() = Some(var_types);

    if let Some(_) = block
        .vars
        .borrow_mut()
        .insert(var_declaration.name.clone(), var_declaration.clone())
    {
        return Err(format!(
            "Variable already declared: {:?}",
            var_declaration.name
        ));
    }

    Ok(())
}

pub fn validate_statement(
    fun: &Function,
    block: &Block,
    statement: &Statement,
) -> Result<(), String> {
    match statement {
        Statement::Expression(expression) => {
            validate_expression(fun, expression)?;
        }
        Statement::VarDeclaration(var_declaration) => {
            validate_var_declaration(fun, block, var_declaration.clone())?;
        }
        Statement::Return(ret) => {
            let ret_types = if let Some(expression) = ret {
                validate_expression(fun, expression)?
            } else {
                vec![]
            };
            if ret_types.is_empty() && fun.return_types.is_some() {
                return Err(format!("Unexpected return type: {:?}", fun.return_types));
            }
            if ret_types.is_empty() && fun.return_types.is_none() {
                return Ok(());
            }
            let fun_ret_type = if let Some(fun_ret_type) = &fun.return_types {
                fun_ret_type.clone()
            } else {
                vec![]
            };
            let overlap = intersection(&ret_types, &fun_ret_type);
            if overlap.is_empty() {
                return Err(format!(
                    "Incompatible return type: fun == {:?}, expr == {:?}",
                    fun.return_types, ret_types,
                ));
            }
        }
        Statement::IfStatement(if_statement) => validate_if_statement(fun, if_statement)?,
    };
    Ok(())
}

fn validate_if_statement(
    fun: &Function,
    if_statement: &Rc<RefCell<IfStatement>>,
) -> Result<(), String> {
    let mut statement = if_statement.borrow_mut();
    if let Some(binary) = match &statement.condition.r#type {
        ExpressionType::BinaryExpression(binary) => Some(binary),
        _ => None,
    } {
        if let Some(narrowing) = validate_typeof_expression(fun, &binary)? {
            statement.type_narrowing = Some(narrowing);
        }
    }

    validate_block(fun, &statement.consequence)?;

    if let Some(alternative) = &statement.alternative {
        match alternative {
            IfAlternative::Else(else_block) => validate_block(fun, else_block)?,
            IfAlternative::If(nested_if) => validate_if_statement(fun, nested_if)?,
        }
    }
    Ok(())
}

fn validate_block(fun: &Function, block: &Rc<RefCell<Block>>) -> Result<(), String> {
    let block = block.borrow();
    for statement in &block.statements {
        validate_statement(fun, &block, statement)?;
    }
    Ok(())
}

pub fn validate_fun(fun: &Function) -> Result<(), String> {
    for par_ref in &fun.parameters {
        //let parameter = par_ref.get(parser)
        // Add sum type
        if par_ref.types.len() > 1 {
            fun.file()
                .borrow_mut()
                .sum_types
                .insert(sum_type_name(&par_ref.types), par_ref.types.clone());
        }
    }
    let block = fun.body.clone();

    validate_block(fun, &block)?;

    Ok(())
}

pub fn validate(file: &Rc<RefCell<File>>) -> Result<(), String> {
    let functions = file.borrow().functions.clone();
    for (_, fun) in &functions {
        validate_fun(fun)?;
    }

    Ok(())
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
