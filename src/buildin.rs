use std::collections::HashMap;

use crate::ast::{Block, Function, Parameter, Type};

pub struct Buildins {
    pub functions: HashMap<String, Function>,
}

impl Buildins {
    pub fn new() -> Self {
        let mut functions = HashMap::new();
        functions.insert(
            "println".to_string(),
            Function {
                name: "println".to_string(),
                parameters: vec![Parameter {
                    name: "arg".to_string(),
                    _type: Type::String,
                }],
                return_type: "".to_string(),
                body: Block { statements: vec![] },
            },
        );
        Buildins { functions }
    }
}
