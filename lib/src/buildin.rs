use std::collections::HashMap;

use crate::{
    ast::{FunctionSignature, NodeData, Parameter, RefType, SourcePosition, SourceSpan, Type},
    types::Ptr,
};

pub struct Buildins {
    pub functions: HashMap<String, FunctionSignature>,
}

fn dummy_node(id: usize) -> NodeData {
    NodeData {
        file_id: 0,
        file_path: Ptr::new("dummy.cz".to_string()),
        id: id,
        parent: 0,
        span: SourceSpan {
            start: SourcePosition::new(0, 0),
            end: SourcePosition::new(0, 0),
        },
    }
}

impl Buildins {
    pub fn new() -> Self {
        let mut functions = HashMap::new();
        functions.insert(
            "println".to_string(),
            FunctionSignature {
                node: dummy_node(1),
                name: "println".to_string(),
                name_node: dummy_node(2),
                parameters: vec![Parameter {
                    node: dummy_node(3),
                    name: "value".to_string(),
                    types: [RefType {
                        node: dummy_node(4),
                        is_reference: false,
                        is_mut: false,
                        r#type: Type::String,
                    }]
                    .into_iter()
                    .collect(),
                    is_mutable: false,
                    origin: None,
                    name_node: dummy_node(5),
                }],
                return_type: None,
                receiver: None,
            },
        );
        Buildins { functions }
    }
}
