use std::cmp::Ordering;

use tree_sitter::Node;

use crate::{ast::child_by_field, types::Ptr};

use super::{node_text, parse_usize, FileContext, NodeData};

#[derive(Debug, Clone, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub enum Type {
    Null,
    Str,
    String,
    Bool,
    U8,
    I8,
    U32,
    I32,
    Identifier(String),
    Array(Array),
    Slice(Slice),
    /// For example, for nullable or error types
    Either(Vec<RefType>, Vec<RefType>),
}

#[derive(Debug, Clone, Eq, Hash)]
pub struct RefType {
    pub node: NodeData,
    pub is_reference: bool,
    pub is_mut: bool,
    pub r#type: Type,
}

impl PartialOrd for RefType {
    fn partial_cmp(&self, other: &Self) -> Option<Ordering> {
        Some(Ord::cmp(self, other))
    }
}

impl Ord for RefType {
    fn cmp(&self, other: &Self) -> Ordering {
        match self.r#type.cmp(&other.r#type) {
            Ordering::Less => Ordering::Less,
            Ordering::Greater => Ordering::Greater,
            Ordering::Equal => {
                if self.is_reference == other.is_reference {
                    Ordering::Equal
                } else if self.node.id < other.node.id {
                    Ordering::Less
                } else {
                    Ordering::Greater
                }
            }
        }
    }
}

impl PartialEq for RefType {
    fn eq(&self, other: &RefType) -> bool {
        self.is_reference == other.is_reference
            && self.r#type == other.r#type
            && self.is_mut == other.is_mut
    }
}

impl RefType {
    pub fn value(node: NodeData, r#type: Type) -> RefType {
        RefType {
            node,
            is_reference: false,
            is_mut: false,
            r#type,
        }
    }

    pub fn reference(node: NodeData, r#type: Type) -> RefType {
        RefType {
            node,
            is_reference: true,
            is_mut: false,
            r#type,
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub struct TypeParam {
    pub node: NodeData,
    pub r#type: TypeParamType,
}

#[derive(Debug, Clone, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub enum TypeParamType {
    /// Simple type parameter
    Identifier(String),
    /// identifier + type params, e.g. IdentType<string, bool>
    GenericTypeParam(String, Vec<TypeParam>),
}

#[derive(Debug, Clone, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub struct Array {
    pub types: Ptr<Vec<RefType>>,
    pub length: usize,
}

#[derive(Debug, Clone, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub struct Slice {
    pub types: Ptr<Vec<RefType>>,
}

fn parse_type<'a>(context: &Ptr<FileContext>, node: &Node<'a>) -> Option<Type> {
    let t = match node.kind() {
        "primitive_type" => {
            let type_text = node_text(&node, context)?;
            match type_text.as_str() {
                "string" => Type::String,
                "bool" => Type::Bool,
                "i8" => Type::I8,
                "u8" => Type::U8,
                "i32" => Type::I32,
                "u32" => Type::U32,
                "null" => Type::Null,
                _ => {
                    log::error!("Unsupported primitve type: {}", type_text);
                    return None;
                }
            }
        }
        "identifier" => {
            let type_text = node_text(&node, context)?;
            Type::Identifier(type_text)
        }
        "array_type" => Type::Array(parse_array(context, &node)?),
        "slice_type" => Type::Slice(parse_slice(context, &node)?),
        _ => {
            log::error!("Unsupported type: {}", node.kind());
            return None;
        }
    };
    Some(t)
}

pub(crate) fn parse_types<'a>(context: &Ptr<FileContext>, node: &Node<'a>) -> Option<Vec<RefType>> {
    let types = match node.kind() {
        "parenthesized_type" => {
            let parenthesized_type = child_by_field(&node, "type")?;
            return parse_types(context, &parenthesized_type);
        }
        "sum_type" => {
            let left = child_by_field(&node, "left")?;
            let right = child_by_field(&node, "right")?;
            let mut types = parse_types(context, &left)?;
            for t in parse_types(context, &right)? {
                if types.contains(&t) {
                    log::error!("Duplicated sum type: {:?}", t);
                }
                types.push(t);
            }
            types
        }
        "reference_type" => {
            let type_node = child_by_field(&node, "type")?;
            let reference_node = child_by_field(&node, "reference")?;
            let reference_str = node_text(&reference_node, context)?;
            vec![RefType {
                node: NodeData::from_node(&type_node),
                is_reference: true,
                is_mut: reference_str == "&mut",
                r#type: parse_type(context, &type_node)?,
            }]
        }
        "error_type" => {
            let type_node = child_by_field(&node, "type")?;
            let error_node = child_by_field(&node, "error")?;
            let data = parse_types(context, &type_node)?;
            let error = parse_types(context, &error_node)?;
            vec![RefType {
                node: NodeData::from_node(&type_node),
                is_reference: false,
                is_mut: false,
                r#type: Type::Either(data, error),
            }]
        }
        _ => vec![RefType {
            node: NodeData::from_node(&node),
            is_reference: false,
            is_mut: false,
            r#type: parse_type(context, node)?,
        }],
    };

    Some(types)
}

pub(crate) fn parse_type_param<'a>(
    context: &Ptr<FileContext>,
    node: &Node<'a>,
) -> Option<TypeParamType> {
    let t = match node.kind() {
        "identifier" => {
            let type_text = node_text(&node, context)?;
            TypeParamType::Identifier(type_text)
        }
        "generic_type_param" => {
            let identifier_node = child_by_field(&node, "type")?;
            let identifier = node_text(&identifier_node, context)?;
            let type_arguments = child_by_field(&node, "type_arguments")?;
            let parameters = parse_type_params(context, &type_arguments);
            TypeParamType::GenericTypeParam(identifier, parameters)
        }
        _ => {
            log::error!("Unsupported type param type: {}", node.kind());
            return None;
        }
    };
    Some(t)
}

pub(crate) fn parse_type_params<'a>(context: &Ptr<FileContext>, node: &Node<'a>) -> Vec<TypeParam> {
    let mut output = vec![];
    let mut cursor = node.walk();
    for type_node in node.children_by_field_name("type", &mut cursor) {
        if let Some(t) = parse_type_param(context, &type_node) {
            output.push(TypeParam {
                node: NodeData::from_node(&type_node),
                r#type: t,
            });
        }
    }
    output
}

fn parse_array<'a>(context: &Ptr<FileContext>, node: &Node<'a>) -> Option<Array> {
    let element = child_by_field(&node, "element")?;
    let length = child_by_field(&node, "length")?;
    let length = parse_usize(context, &length)?;
    let types = parse_types(context, &element)?;
    Some(Array {
        types: Ptr::new(types),
        length,
    })
}

fn parse_slice<'a>(context: &Ptr<FileContext>, node: &Node<'a>) -> Option<Slice> {
    let element = child_by_field(&node, "element")?;
    let types = parse_types(context, &element)?;
    Some(Slice {
        types: Ptr::new(types),
    })
}
