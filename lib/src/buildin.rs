use std::collections::HashMap;

use crate::ast::{NodeData, Parameter, RefType, SourcePosition, SourceSpan, Type};

#[derive(Debug, Clone)]
pub struct FunctionDeclaration {
    pub node: NodeData,

    pub name: String,
    pub parameters: Vec<Parameter>,
    pub return_types: Vec<RefType>,
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
                node: NodeData {
                    id: 1,
                    parent: 0,
                    span: SourceSpan {
                        start: SourcePosition::new(0, 0),
                        end: SourcePosition::new(0, 0),
                    },
                },
                name: "println".to_string(),
                parameters: vec![Parameter {
                    node: NodeData {
                        id: 1,
                        parent: 0,
                        span: SourceSpan {
                            start: SourcePosition::new(0, 0),
                            end: SourcePosition::new(0, 0),
                        },
                    },
                    name: "value".to_string(),
                    types: [RefType {
                        is_reference: false,
                        r#type: Type::String,
                    }]
                    .into_iter()
                    .collect(),
                    is_mutable: false,
                    is_reference: false,

                    origin: None,
                }],
                return_types: vec![],
            },
        );
        Buildins { functions }
    }
}
