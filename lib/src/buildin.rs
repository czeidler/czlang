use std::collections::HashMap;

use crate::ast::{
    FunctionSignature, NodeData, Parameter, RefType, SourcePosition, SourceSpan, Type,
};

pub struct Buildins {
    pub functions: HashMap<String, FunctionSignature>,
}

impl Buildins {
    pub fn new() -> Self {
        let mut functions = HashMap::new();
        functions.insert(
            "println".to_string(),
            FunctionSignature {
                node: NodeData {
                    id: 1,
                    parent: 0,
                    span: SourceSpan {
                        start: SourcePosition::new(0, 0),
                        end: SourcePosition::new(0, 0),
                    },
                },
                name: "println".to_string(),
                name_node: NodeData {
                    id: 2,
                    parent: 0,
                    span: SourceSpan {
                        start: SourcePosition::new(0, 0),
                        end: SourcePosition::new(0, 0),
                    },
                },
                parameters: vec![Parameter {
                    node: NodeData {
                        id: 3,
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
