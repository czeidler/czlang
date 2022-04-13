use std::collections::HashMap;

use crate::ast::{NodeData, Parameter, Type};

#[derive(Debug, Clone)]
pub struct FunctionDeclaration {
    pub node: NodeData,

    pub name: String,
    pub parameters: Vec<Parameter>,
    pub return_type: String,
}

pub struct Buildins {
    pub functions: HashMap<String, FunctionDeclaration>,
}

impl Buildins {
    pub fn new() -> Self {
        let mut functions = HashMap::new();
        functions.insert(
            "println".to_string(),
            FunctionDeclaration {
                node: NodeData { id: 1, parent: 0 },
                name: "println".to_string(),
                parameters: vec![Parameter {
                    id: 0,
                    name: "value".to_string(),
                    _type: Type::Str,
                    is_mutable: false,
                    is_reference: false,
                    is_nullable: false,

                    origin: None,
                }],
                return_type: "".to_string(),
            },
        );
        Buildins { functions }
    }
}
