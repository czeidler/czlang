use std::collections::HashMap;

use crate::ast::{Function, Statement, Type};

pub struct VarInfo {
    pub name: String,
    pub is_nullable: bool,
    pub is_mutable: bool,
    pub is_reference: bool,
    pub var_type: Option<Type>,
    // implicite_type: Option<...>
}

struct Context {
    variables: HashMap<String, VarInfo>,
}

impl Context {
    fn new() -> Self {
        Context {
            variables: HashMap::new(),
        }
    }
}

pub fn validate_function(function: &Function) {
    let mut context = Context::new();

    // add parameters to
    for param in &function.parameters {
        let var_info = VarInfo {
            name: param.name.clone(),
            is_nullable: param.is_nullable,
            is_mutable: param.is_mutable,
            is_reference: param.is_reference,
            var_type: Some(param._type.clone()),
        };
        context.variables.insert(var_info.name.clone(), var_info);
    }

    for statement in &function.body.statements {
        match statement {
            Statement::FunctionCall(call) => {
                // type inference

                // type check: variables exist?

                // type check: correct type? and mutability?

                // null check: variables not null?

                // borrow checking: not using mutable borrowed var?
            }
            Statement::VarDeclaration(var) => {
                // type inference

                // type check: already defined?

                // type check: variable assignement of compatible types? e.g. val test = test2

                // null check: compatible variable assignenemt

                // borrow checking: track new borrows

                // borrow checking: not accessing mutable borrowed var?
            }
            Statement::Return(_) => todo!(),
            Statement::IfStatement(_) => todo!(),
        }
    }
}
