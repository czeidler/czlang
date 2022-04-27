use std::{
    collections::HashMap,
    rc::{Rc, Weak},
};

use crate::ast::{Expression, File, Function, Statement, Type, VarDeclaration};

pub struct CodeAnalysis {
    files: HashMap<String, CodeAnalysisFile>,
}

pub struct CodeAnalysisFile {
    items: HashMap<usize, CodeAnalysisItem>,
}

pub enum CodeAnalysisItem {
    VarState(VarState),
}

pub struct ExpressionState {
    types: Vec<Type>,
}

#[derive(Debug, Clone)]
pub struct VarState {
    types: Vec<Type>,
}

pub struct FunScope {
    file: Weak<File>,

    vars: HashMap<String, VarState>,
}

impl FunScope {
    fn file(&self) -> Rc<File> {
        self.file.upgrade().unwrap()
    }
}

fn lookup_identifier(scope: &FunScope, identifier: &String) -> Option<CodeAnalysisItem> {
    if let Some(var) = scope.vars.get(identifier) {
        return Some(CodeAnalysisItem::VarState(var.clone()));
    }
    None
}

fn type_overlap(left: &Vec<Type>, right: &Vec<Type>) -> Vec<Type> {
    left.iter()
        .filter(|left| right.contains(left))
        .map(|left| left.clone())
        .collect()
}

pub fn validate_expression(
    scope: &FunScope,
    expression: &Expression,
) -> Result<ExpressionState, String> {
    let result = match expression {
        Expression::String(_) => ExpressionState {
            types: vec![Type::String],
        },
        Expression::Identifier(identifier) => {
            let identifier = match lookup_identifier(scope, identifier) {
                Some(identifier) => identifier,
                None => return Err(format!("Identifier not found: {:?}", identifier)),
            };
            match identifier {
                CodeAnalysisItem::VarState(var) => ExpressionState {
                    types: var.types.clone(),
                },
            }
        }
        Expression::IntLiteral(_) => ExpressionState {
            types: vec![Type::U32, Type::I32],
        },
        Expression::Null => ExpressionState {
            types: vec![Type::Null],
        },
        Expression::Bool(_) => ExpressionState {
            types: vec![Type::Bool],
        },
        Expression::UnaryExpression(_) => todo!(),
        Expression::BinaryExpression(binary) => {
            let left = validate_expression(scope, &binary.left)?;
            let right = validate_expression(scope, &binary.right)?;
            let overlap: Vec<Type> = type_overlap(&left.types, &right.types);
            if overlap.is_empty() {
                return Err(format!(
                    "Incompatible type in expression: left == {:?}, right == {:?}",
                    left.types, right.types,
                ));
            }
            ExpressionState { types: overlap }
        }
        Expression::ParenthesizedExpression(_) => todo!(),
        Expression::ArrayExpression(_) => todo!(),
        Expression::SliceExpression(_) => todo!(),
        Expression::FunctionCall(fun_call) => {
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
                    .find(|arg_type| *arg_type == &parameter._type)
                    .is_none()
                {
                    return Err(format!(
                        "Argument as invalid type {:?}; but expected {:?}",
                        arg.types, parameter._type
                    ));
                }
            }

            ExpressionState {
                types: fun
                    .return_type
                    .as_ref()
                    .map(|t| vec![t.clone()])
                    .unwrap_or(vec![]),
            }
        }
    };
    Ok(result)
}

pub fn validate_var_declaration(
    scope: &mut FunScope,
    var_declaration: &VarDeclaration,
) -> Result<(), String> {
    let mut state = VarState { types: vec![] };
    if var_declaration.is_nullable {
        state.types.push(Type::Null);
    }
    if let Some(t) = &var_declaration.var_type {
        if state.types.iter().find(|v| *v == t).is_none() {
            state.types.push(t.clone());
        }
    }

    let expr = validate_expression(scope, &var_declaration.value)?;
    if state.types.is_empty() {
        for t in expr.types {
            state.types.push(t);
        }
    } else {
        let overlap = type_overlap(&state.types, &expr.types);
        if overlap.is_empty() {
            return Err(format!(
                "Incompatible type in var assignement: var == {:?}, expr == {:?}",
                state.types, expr.types,
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
            if ret_types.is_empty() && fun.return_type.is_some() {
                return Err(format!("Unexpected return type: {:?}", fun.return_type));
            }
            if ret_types.is_empty() && fun.return_type.is_none() {
                return Ok(());
            }
            let fun_ret_type = if let Some(fun_ret_type) = &fun.return_type {
                vec![fun_ret_type.clone()]
            } else {
                vec![]
            };
            let overlap = type_overlap(&ret_types, &fun_ret_type);
            if overlap.is_empty() {
                return Err(format!(
                    "Incompatible return type: fun == {:?}, expr == {:?}",
                    fun.return_type, ret_types,
                ));
            }
        }
        _ => {}
    };
    Ok(())
}

pub fn validate_fun(fun: &Rc<Function>, file: &Rc<File>) -> Result<(), String> {
    let mut scope = FunScope {
        file: Rc::downgrade(file),
        vars: HashMap::new(),
    };
    for par_ref in &fun.parameters {
        //let parameter = par_ref.get(parser)
    }
    for statement in &fun.body.statements {
        validate_statement(&mut scope, fun, statement)?;
    }

    Ok(())
}

pub fn validate(file: &Rc<File>) -> Result<(), String> {
    for (_, fun) in &file.functions {
        validate_fun(fun, file)?;
    }

    Ok(())
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
