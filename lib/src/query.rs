use std::{cell::RefCell, io::Read, path::PathBuf, rc::Rc};

use anyhow::Ok;

use crate::{
    ast::{
        print_err, Expression, ExpressionType, File, FileContext, Function, FunctionCall,
        Parameter, SourcePosition, Statement, VarDeclaration,
    },
    tree_sitter::parse,
    validation::{lookup_identifier, validate, LookupResult},
};

#[derive(Debug, Clone)]
pub enum QueryResult {
    Function(Rc<Function>),
    FunctionCall(FunctionCall),
    Parameter(Parameter),
    Identifier(LookupResult),
    VarDeclaration(Rc<VarDeclaration>),
}

pub fn query(
    path: &PathBuf,
    position: SourcePosition,
) -> Result<Option<QueryResult>, anyhow::Error> {
    let mut file = std::fs::File::open(path)?;
    let mut buffer = Vec::new();
    file.read_to_end(&mut buffer)?;

    let source_code = String::from_utf8(buffer)?;
    let tree = parse(&source_code);
    let root_node = tree.root_node();

    let mut file_context = FileContext::new(
        root_node.clone(),
        path.to_string_lossy().to_string(),
        source_code,
    );
    let file = file_context.parse_file();
    for error in &file_context.errors {
        print_err(&error, &file_context.source);
    }
    if !file_context.errors.is_empty() {
        return Err(anyhow::Error::msg(format!(
            "{} compile error(s)",
            file_context.errors.len()
        )));
    }

    let val_result = validate(&file);

    Ok(find_in_file(file, position))
}

fn find_in_file(file: Rc<RefCell<File>>, position: SourcePosition) -> Option<QueryResult> {
    let file = file.as_ref().borrow();
    for (_, fun) in &file.functions {
        if !fun.node.contains(position) {
            continue;
        }
        if let Some(symbole) = find_in_function(fun, position) {
            return Some(symbole);
        }
    }
    None
}

fn find_in_function(fun: &Rc<Function>, position: SourcePosition) -> Option<QueryResult> {
    if fun.name_node.contains(position) {
        return Some(QueryResult::Function(fun.clone()));
    }
    for param in &fun.parameters {
        if !param.node.contains(position) {
            continue;
        }
        //return Some(types_to_string(&param.types));
        return Some(QueryResult::Parameter(param.clone()));
    }

    let body = fun.body.borrow();
    for statement in &body.statements {
        match statement {
            Statement::VarDeclaration(var) => {
                if !var.node.contains(position) {
                    continue;
                }
                return Some(QueryResult::VarDeclaration(var.clone()));
            }
            Statement::IfStatement(if_statement) => {
                let if_statement = if_statement.borrow();
                if !if_statement.node.contains(position) {
                    continue;
                }
                if if_statement.condition.node.contains(position) {
                    return find_in_expression(fun, &if_statement.condition, position);
                }
                // TODO find in block
            }
            Statement::Return(ret) => {
                if let Some(ret) = ret {
                    if ret.node.contains(position) {
                        return find_in_expression(fun, ret, position);
                    }
                }
            }
            Statement::Expression(expr) => {
                if expr.node.contains(position) {
                    return find_in_expression(fun, expr, position);
                }
            }
        }
    }
    //Some(format!("{}: span: {:?}", fun.name, fun.node.span))
    //Some(fun.name.clone())
    None
}

fn find_in_expression(
    fun: &Rc<Function>,
    expression: &Expression,
    position: SourcePosition,
) -> Option<QueryResult> {
    match &expression.r#type {
        ExpressionType::Identifier(identifier) => {
            let Some(identifier) = lookup_identifier(fun, identifier) else {return None;};
            Some(QueryResult::Identifier(identifier))
        }
        ExpressionType::BinaryExpression(binary) => {
            if binary.left.node.contains(position) {
                return find_in_expression(fun, &binary.left, position);
            }
            if binary.right.node.contains(position) {
                return find_in_expression(fun, &binary.right, position);
            }
            None
        }
        ExpressionType::UnaryExpression(unary) => {
            if unary.operand.node.contains(position) {
                return find_in_expression(fun, &unary.operand, position);
            }
            None
        }
        ExpressionType::FunctionCall(call) => Some(QueryResult::FunctionCall(call.clone())),
        _ => None,
    }
}
