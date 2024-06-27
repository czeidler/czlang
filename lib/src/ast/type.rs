use std::cmp::Ordering;

use tree_sitter::Node;

use crate::{ast::child_by_field, types::Ptr};

use super::{
    node_text, parse_parameters, parse_return_type, parse_usize, FileContext, NodeData, Parameter,
    ReturnType,
};

#[derive(Debug, Clone, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub struct IdentifierType {
    pub identifier: String,
    pub package: Option<String>,
    pub type_arguments: Vec<Vec<RefType>>,
}

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
    Identifier(IdentifierType),
    Array(Array),
    Slice(Slice),
    PointerType(Box<PointerType>),
    /// For example, for nullable or error types
    Either(Vec<RefType>, Vec<RefType>),
    Closure(ClosureType),
}

#[derive(Debug, Clone, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub struct PointerType {
    pub node: NodeData,
    pub is_mut: bool,
    pub is_locked: bool,
    pub r#type: Type,
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
                if self.is_reference == other.is_reference && self.is_mut == other.is_mut {
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
    pub identifier_node: NodeData,
    pub identifier: String,
    pub type_params: Vec<TypeParam>,
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

#[derive(Debug, Clone, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub enum ClosureContext {
    Owned,
    MutRef,
    Ref,
    Type(Vec<RefType>),
}

#[derive(Debug, Clone, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub struct ClosureType {
    pub node: NodeData,
    /// If not set its just a function pointer
    pub context: Option<ClosureContext>,
    pub parameters: Vec<Parameter>,
    pub return_type: Option<ReturnType>,
}

fn parse_type_arguments(context: &Ptr<FileContext>, type_arguments: &Node) -> Vec<Vec<RefType>> {
    let mut output = vec![];
    let mut cursor = type_arguments.walk();
    for type_node in type_arguments.children_by_field_name("type", &mut cursor) {
        if let Some(t) = parse_types(context, &type_node) {
            output.push(t);
        }
    }
    output
}

pub(crate) fn parse_identifier_type(
    context: &Ptr<FileContext>,
    node: &Node,
) -> Option<IdentifierType> {
    let t = match node.kind() {
        "identifier" => {
            let identifier = node_text(&node, context)?;
            IdentifierType {
                identifier,
                package: None,
                type_arguments: vec![],
            }
        }
        "qualified_type" => {
            let package = child_by_field(&node, "package")?;
            let package = node_text(&package, context)?;
            let identifier = child_by_field(&node, "identifier")?;
            let identifier = node_text(&identifier, context)?;
            IdentifierType {
                identifier,
                package: Some(package),
                type_arguments: vec![],
            }
        }
        "generic_identifier" => {
            let package = if let Some(package) = child_by_field(&node, "package") {
                Some(node_text(&package, context)?)
            } else {
                None
            };
            let identifier = child_by_field(&node, "identifier")?;
            let identifier = node_text(&identifier, context)?;
            let type_arguments = child_by_field(&node, "type_arguments")?;
            let type_arguments = parse_type_arguments(context, &type_arguments);
            IdentifierType {
                identifier,
                package,
                type_arguments,
            }
        }
        _ => return None,
    };
    Some(t)
}

fn parse_type<'a>(context: &Ptr<FileContext>, node: &Node<'a>) -> Option<Type> {
    if let Some(identifier_type) = parse_identifier_type(context, node) {
        return Some(Type::Identifier(identifier_type));
    };
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
        "array_type" => Type::Array(parse_array(context, &node)?),
        "slice_type" => Type::Slice(parse_slice(context, &node)?),
        "pointer_type" => {
            let type_node = child_by_field(&node, "type")?;
            let pointer_node = child_by_field(&node, "pointer")?;
            let pointer_str = node_text(&pointer_node, context)?;
            Type::PointerType(Box::new(PointerType {
                node: context.node_data(&type_node),
                is_mut: pointer_str == "*mut",
                is_locked: pointer_str == "*lock",
                r#type: parse_type(context, &type_node)?,
            }))
        }
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
                node: context.node_data(&type_node),
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
                node: context.node_data(&type_node),
                is_reference: false,
                is_mut: false,
                r#type: Type::Either(data, error),
            }]
        }
        "closure_type" => {
            vec![RefType {
                node: context.node_data(&node),
                is_reference: false,
                is_mut: false,
                r#type: Type::Closure(parse_closure_type(context, &node)?),
            }]
        }
        _ => vec![RefType {
            node: context.node_data(&node),
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
) -> Option<TypeParam> {
    let identifier_node = child_by_field(&node, "identifier")?;
    let identifier = node_text(&identifier_node, context)?;

    let type_params = if let Some(type_arguments) = child_by_field(&node, "type_params") {
        parse_type_params(context, &type_arguments)
    } else {
        vec![]
    };

    Some(TypeParam {
        node: context.node_data(node),
        identifier,
        identifier_node: context.node_data(&identifier_node),
        type_params,
    })
}

pub(crate) fn parse_type_params<'a>(context: &Ptr<FileContext>, node: &Node<'a>) -> Vec<TypeParam> {
    let mut output = vec![];
    let mut cursor = node.walk();
    for type_node in node.children_by_field_name("type", &mut cursor) {
        if let Some(t) = parse_type_param(context, &type_node) {
            output.push(t);
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

fn parse_closure_context<'a>(
    context: &Ptr<FileContext>,
    node: &Node<'a>,
) -> Option<ClosureContext> {
    if let Some(anonymous_node) = child_by_field(&node, "anonymous") {
        return Some(match node_text(&anonymous_node, context)?.as_str() {
            "&" => ClosureContext::Ref,
            "&mut" => ClosureContext::MutRef,
            _ => ClosureContext::Owned,
        });
    }
    if let Some(type_node) = child_by_field(&node, "type") {
        return Some(ClosureContext::Type(parse_types(context, &type_node)?));
    }
    None
}

pub(crate) fn parse_closure_type<'a>(
    context: &Ptr<FileContext>,
    node: &Node<'a>,
) -> Option<ClosureType> {
    let context_node = child_by_field(&node, "context");
    let closure_context =
        context_node.and_then(|context_node| parse_closure_context(context, &context_node));

    let parameters_node = child_by_field(&node, "parameters")?;
    let parameters = parse_parameters(context, parameters_node)?;
    let result_node = child_by_field(&node, "result");
    let return_type = result_node.map(|n| parse_return_type(context, &n));

    Some(ClosureType {
        node: context.node_data(node),
        context: closure_context,
        parameters,
        return_type,
    })
}
