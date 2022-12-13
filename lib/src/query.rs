use std::{io::Read, path::PathBuf};

use anyhow::Ok;

use crate::{
    ast::{
        print_err, Expression, ExpressionType, File, FileContext, Function, FunctionCall,
        Parameter, SourcePosition, Statement, VarDeclaration,
    },
    tree_sitter::parse,
    types::{Ptr, PtrMut},
    validation::{lookup_identifier, validate, LookupResult},
};

#[derive(Debug, Clone)]
pub enum QueryResult {
    Function(Ptr<Function>),
    FunctionCall(FunctionCall),
    Parameter(Parameter),
    Identifier(LookupResult),
    VarDeclaration(Ptr<VarDeclaration>),
}

pub fn find_in_file(file: PtrMut<File>, position: SourcePosition) -> Option<QueryResult> {
    let file = file.read().unwrap();
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

fn find_in_function(fun: &Ptr<Function>, position: SourcePosition) -> Option<QueryResult> {
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

    let body = fun.body.read().unwrap();
    for statement in &body.statements {
        match statement {
            Statement::VarDeclaration(var) => {
                if var.name_node.contains(position) {
                    return Some(QueryResult::VarDeclaration(var.clone()));
                }
                if var.value.node.contains(position) {
                    return find_in_expression(fun, &var.value, position);
                }
                continue;
            }
            Statement::IfStatement(if_statement) => {
                let if_statement = if_statement.read().unwrap();
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
    fun: &Ptr<Function>,
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
