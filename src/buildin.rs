use std::{collections::HashMap, rc::Rc};

use crate::ast::{Block, Function, NodeData, Parameter, Type};

pub struct Buildins {
    pub functions: HashMap<String, Function>,
}

impl Buildins {
    pub fn new() -> Self {
        let mut functions = HashMap::new();
        functions.insert(
            "println".to_string(),
            Function {
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
                body: Rc::new(Block {
                    node: NodeData { id: 2, parent: 1 },
                    statements: vec![],
                }),
            },
        );
        Buildins { functions }
    }
}
