use std::collections::HashMap;

use crate::ast::{Expression, Function, Statement, Type};

pub enum InferedType {
    String,
    UnknownNullable,
    Identifier(String),
    Bool,
}

fn infer_expresison_type(expression: &Expression) -> InferedType {
    match expression {
        Expression::String(_) => InferedType::String,
        Expression::Identifier(value) => InferedType::Identifier(value.clone()),
        Expression::Null => InferedType::UnknownNullable,
        Expression::Bool(_) => InferedType::Bool,
    }
}

pub struct VarInfo {
    pub is_nullable: bool,
    pub is_mutable: bool,
    pub is_reference: bool,
    pub var_type: Option<Type>,
}

pub struct InferedTypes {
    vars: HashMap<String, VarInfo>,
}

fn infer_types_function(function: &Function, infered_types: &mut InferedTypes) {
    for statement in &function.body.statements {
        match statement {
            Statement::VarDeclaration(var) => {
                if infered_types.vars.contains_key(&var.name) {
                    // something is wrong, leave it for later type check to report an error
                    continue;
                }
                if var.var_type.is_some() {
                    continue;
                }
                let mut info = VarInfo {
                    is_nullable: false,
                    is_mutable: var.is_mutable,
                    is_reference: false,
                    var_type: None,
                };
                let value_type = infer_expresison_type(&var.value);
                match value_type {
                    InferedType::String => info.var_type = Some(Type::String),
                    InferedType::Identifier(value) => info.var_type = Some(Type::Identifier(value)),
                    InferedType::Bool => info.var_type = Some(Type::Bool),
                    InferedType::UnknownNullable => info.is_nullable = true,
                };
                infered_types.vars.insert(var.name.clone(), info);
            }
            Statement::FunctionCall(_) => {}
            Statement::Return(_) => {}
        }
    }
}
