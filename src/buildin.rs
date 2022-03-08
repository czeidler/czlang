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
                    name: "value".to_string(),
                    _type: Type::Str,
                    is_mutable: false,
                    is_reference: false,
                    is_nullable: false,

                    origin: None,
                }],
                return_type: "".to_string(),
                body: Block { statements: vec![] },
            },
        );
        Buildins { functions }
    }
}
