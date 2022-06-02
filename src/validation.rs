use std::{
    cell::RefCell,
    collections::HashMap,
    rc::{Rc, Weak},
};

use crate::{
    ast::{
        Array, Expression, ExpressionType, File, Function, RefType, Slice, Statement, Type,
        VarDeclaration,
    },
    types::{intersection, types_to_string},
};

pub struct FileAnalysis {
    pub file_scope: Rc<RefCell<FileScope>>,
    pub functions: HashMap<String, FunScope>,
}

pub enum CodeAnalysisItem {
    VarState(VarState),
}

#[derive(Debug, Clone)]
pub struct ExpressionState {
    pub types: Vec<RefType>,
}

#[derive(Debug, Clone)]
pub struct VarState {
    types: Vec<RefType>,
}

pub struct FileScope {
    pub file: Weak<File>,
    pub sum_types: HashMap<String, Vec<RefType>>,
}

pub struct FunScope {
    pub fun: Weak<Function>,

    pub vars: HashMap<String, VarState>,

    pub expressions: HashMap<usize, ExpressionState>,

    pub file_scope: Weak<RefCell<FileScope>>,
}

impl FunScope {
    pub fn file(&self) -> Rc<File> {
        self.file_scope
            .upgrade()
            .unwrap()
            .borrow()
            .file
            .upgrade()
            .unwrap()
    }
}

fn lookup_identifier(scope: &FunScope, identifier: &String) -> Option<CodeAnalysisItem> {
    if let Some(var) = scope.vars.get(identifier) {
        return Some(CodeAnalysisItem::VarState(var.clone()));
    }
    None
}

fn validate_expression_list(
    scope: &mut FunScope,
    expressions: &Vec<Expression>,
) -> Result<Vec<RefType>, String> {
    let mut output = Vec::new();
    for expression in expressions {
        let types = expression_type(scope, &expression)?;
        for t in types {
            if !output.contains(&t) {
                output.push(t);
            }
        }
    }
    output.sort();
    Ok(output)
}

fn expression_type(scope: &mut FunScope, expression: &Expression) -> Result<Vec<RefType>, String> {
    let types = match &expression.r#type {
        ExpressionType::String(_) => vec![RefType {
            is_reference: false,
            r#type: Type::String,
        }],

        ExpressionType::Identifier(identifier) => {
            let identifier = match lookup_identifier(scope, &identifier) {
                Some(identifier) => identifier,
                None => return Err(format!("Identifier not found: {:?}", identifier)),
            };
            match identifier {
                CodeAnalysisItem::VarState(var) => var.types.clone(),
            }
        }
        ExpressionType::IntLiteral(_) => vec![
            RefType {
                is_reference: false,
                r#type: Type::U32,
            },
            RefType {
                is_reference: false,
                r#type: Type::I32,
            },
        ],
        ExpressionType::Null => vec![RefType {
            is_reference: false,
            r#type: Type::Null,
        }],
        ExpressionType::Bool(_) => vec![RefType {
            is_reference: false,
            r#type: Type::Bool,
        }],

        ExpressionType::UnaryExpression(unary) => match unary.operator {
            crate::ast::UnaryOperator::Minus => todo!(),
            crate::ast::UnaryOperator::Not => todo!(),
            crate::ast::UnaryOperator::Reference => expression_type(scope, &unary.operand)?
                .into_iter()
                .map(|it| RefType {
                    is_reference: true,
                    r#type: it.r#type,
                })
                .collect(),
        },
        ExpressionType::BinaryExpression(binary) => {
            let left = validate_expression(scope, &binary.left)?;
            let right = validate_expression(scope, &binary.right)?;
            let overlap: Vec<RefType> = intersection(&left.types, &right.types);
            if overlap.is_empty() {
                return Err(format!(
                    "Incompatible type in expression: left == {:?}, right == {:?}",
                    left.types, right.types,
                ));
            }
            overlap
        }
        ExpressionType::ParenthesizedExpression(_) => todo!(),
        ExpressionType::ArrayExpression(array) => vec![RefType {
            is_reference: false,
            r#type: Type::Array(Array {
                types: Rc::new(validate_expression_list(scope, &array.expressions)?),
                length: array.expressions.len(),
            }),
        }],
        ExpressionType::SliceExpression(slice) => vec![RefType {
            is_reference: false,
            r#type: Type::Slice(Slice {
                types: Rc::new(validate_expression_list(
                    scope,
                    &vec![slice.operand.as_ref().clone()],
                )?),
            }),
        }],
        ExpressionType::FunctionCall(fun_call) => {
            let file = scope.file();
            let fun = match file.functions.get(&fun_call.name) {
                Some(fun) => fun,
                None => return Err(format!("No fun with name {} found", fun_call.name)),
            };
            if fun.parameters.len() != fun_call.arguments.len() {
                return Err(format!(
                    "Expected {} arguments but found {}",
                    fun.parameters.len(),
                    fun_call.arguments.len()
                ));
            }
            for (i, parameter) in fun.parameters.iter().enumerate() {
                let arg = fun_call.arguments.get(i).unwrap();
                let arg = validate_expression(scope, arg)?;
                if arg
                    .types
                    .iter()
                    .find(|arg_type| parameter.types.contains(arg_type))
                    .is_none()
                {
                    return Err(format!(
                        "Argument as invalid type {:?}; but expected {:?}",
                        arg.types, parameter.types
                    ));
                }
            }

            fun.return_types.clone().unwrap_or(vec![])
        }
    };
    Ok(types)
}

pub fn validate_expression(
    scope: &mut FunScope,
    expression: &Expression,
) -> Result<ExpressionState, String> {
    let types = expression_type(scope, expression)?;
    let result = ExpressionState { types };
    scope.expressions.insert(expression.id, result.clone());
    Ok(result)
}

pub fn validate_var_declaration(
    scope: &mut FunScope,
    var_declaration: &VarDeclaration,
) -> Result<(), String> {
    let mut state = VarState { types: vec![] };
    if let Some(types) = &var_declaration.types {
        for t in types {
            if state.types.iter().find(|v| *v == t).is_none() {
                state.types.push(t.clone());
            }
        }
        state.types.sort();

        // Add sum type
        if state.types.len() > 1 {
            scope
                .file_scope
                .upgrade()
                .unwrap()
                .borrow_mut()
                .sum_types
                .insert(sum_type_name(&state.types), state.types.clone());
        }
    }

    let expr = validate_expression(scope, &var_declaration.value)?;
    if state.types.is_empty() {
        for t in expr.types {
            state.types.push(t);
        }
        state.types.sort();
    } else {
        let overlap = intersection(&state.types, &expr.types);
        if overlap.is_empty() {
            return Err(format!(
                "Incompatible type in var assignement: var: {}, expr: {}",
                types_to_string(&state.types),
                types_to_string(&expr.types),
            ));
        }
        state.types = overlap;
    }

    if let Some(_) = scope.vars.insert(var_declaration.name.clone(), state) {
        return Err(format!(
            "Variable already declared: {:?}",
            var_declaration.name
        ));
    }

    Ok(())
}

pub fn validate_statement(
    scope: &mut FunScope,
    fun: &Function,
    statement: &Statement,
) -> Result<(), String> {
    match statement {
        Statement::Expression(expression) => {
            validate_expression(scope, expression)?;
        }
        Statement::VarDeclaration(var_declaration) => {
            validate_var_declaration(scope, var_declaration)?;
        }
        Statement::Return(ret) => {
            let ret_types = if let Some(expression) = ret {
                let expression = validate_expression(scope, expression)?;
                expression.types
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
        _ => {}
    };
    Ok(())
}

pub fn validate_fun(
    file_scope: &Rc<RefCell<FileScope>>,
    fun: &Rc<Function>,
) -> Result<FunScope, String> {
    let mut scope = FunScope {
        fun: Rc::downgrade(fun),
        file_scope: Rc::downgrade(file_scope),
        vars: HashMap::new(),
        expressions: HashMap::new(),
    };
    for par_ref in &fun.parameters {
        //let parameter = par_ref.get(parser)
    }
    for statement in &fun.body.statements {
        validate_statement(&mut scope, fun, statement)?;
    }

    Ok(scope)
}

pub fn validate(file: &Rc<File>) -> Result<FileAnalysis, String> {
    let file_scope = Rc::new(RefCell::new(FileScope {
        file: Rc::downgrade(file),
        sum_types: HashMap::new(),
    }));
    let mut file_analysis = FileAnalysis {
        file_scope,
        functions: HashMap::new(),
    };

    for (_, fun) in &file.functions {
        let scope = validate_fun(&file_analysis.file_scope, fun)?;
        file_analysis.functions.insert(fun.name.clone(), scope);
    }

    Ok(file_analysis)
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
            Type::Number(_) => "N",
        };
        name += part;
    }
    name
}

#[cfg(test)]
mod rust_validation_tests {
    use crate::test_utils::{transpile_and_validate_project, validate_project};

    #[test]
    fn expression_validation_1() {
        validate_project(
            "test_projects/expression_validation",
            r#"
fun main() {
    var test = 46 + "string"
}
        "#,
        )
        .unwrap_err();
    }

    #[test]
    fn expression_validation_2() {
        transpile_and_validate_project(
            "test_projects/expression_validation_2",
            r#"
fun main() {
    var test = 46 + 55
}
        "#,
        );
    }

    #[test]
    fn var_expression_validation_1() {
        transpile_and_validate_project(
            "test_projects/var_expression_validation_1",
            r#"
fun test() u32 {
    var test1 = 46 + 55
    var test2 u32 = test1
    return test2
}

fun main() { test() }
        "#,
        );

        validate_project(
            "test_projects/var_expression_validation_2",
            r#"
            fun test() u8 {
                var test1 = 46 + 55
                var test2 u32 = test1
                return test2
            }
        "#,
        )
        .unwrap_err();

        validate_project(
            "test_projects/var_expression_validation_3",
            r#"
            fun test() u8 {
                var test1 u32 = 46 + 55
                var test2 u8 = test1
                return test2
            }
        "#,
        )
        .unwrap_err();

        validate_project(
            "test_projects/var_expression_validation_4",
            r#"
            fun test_call() bool {
                return true
            }

            fun test() {
                var variable i32 = test_call()
            }
        "#,
        )
        .unwrap_err();

        validate_project(
            "test_projects/var_expression_validation_5",
            r#"
            fun test_call(arg0 string) bool {
                return true
            }

            fun test() {
                test_call(34, "test")
            }
        "#,
        )
        .unwrap_err();

        validate_project(
            "test_projects/var_expression_validation_6",
            r#"
            fun test_call(arg0 string, arg1 bool) bool {
                return true
            }

            fun test() {
                test_call(34, "test")
            }
        "#,
        )
        .unwrap_err();

        transpile_and_validate_project(
            "test_projects/var_expression_validation_7",
            r#"
            fun test_call(arg0 u32, arg1 bool) bool {
                return true
            }

            fun main() {
                test_call(34, true)
            }
        "#,
        );
    }
}
