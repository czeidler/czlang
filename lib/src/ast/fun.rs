use tree_sitter::Node;

use crate::{tree_sitter::find_node, types::Ptr};

use super::{
    child_by_field, node_text, parse_block, parse_type_param, parse_types, Block, BlockParent,
    BlockType, FileContext, NodeData, RefType, SourceSpan, TypeParamType,
};

#[derive(Debug, Clone, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub struct ReturnType {
    pub node: NodeData,
    pub types: Vec<RefType>,
}

#[derive(Debug, Clone)]
pub struct Receiver {
    pub node: NodeData,
    pub types: Vec<RefType>,
    pub interface: Option<TypeParamType>,
}

#[derive(Debug, Clone, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub struct Parameter {
    pub node: NodeData,
    pub name_node: NodeData,
    pub name: String,
    pub is_mutable: bool,
    pub types: Vec<RefType>,

    pub origin: Option<SourceSpan>,
}

#[derive(Debug, Clone)]
pub struct FunctionSignature {
    pub node: NodeData,

    /// If a method, the named receiver struct, e.g. (m &MyStruct)
    pub receiver: Option<Receiver>,

    pub name: String,
    pub name_node: NodeData,
    pub parameters: Vec<Parameter>,
    pub return_type: Option<ReturnType>,
}

/// Either a function or a method
#[derive(Debug, Clone)]
pub struct Function {
    pub file: Ptr<FileContext>,

    pub signature: FunctionSignature,
    pub body_node: NodeData,
}

impl Function {
    pub fn file(&self) -> Ptr<FileContext> {
        self.file.clone()
    }
}

pub trait FunctionTrait {
    fn body(&self) -> Ptr<Block>;
}

impl FunctionTrait for Ptr<Function> {
    fn body(&self) -> Ptr<Block> {
        let position = &self.body_node.span.start;
        let body_node = find_node(
            &self.file.tree,
            self.body_node.id,
            position.row,
            position.column,
        )
        .unwrap();
        parse_block(
            &self.file,
            &body_node,
            BlockType::Function,
            BlockParent::Function(self.clone()),
        )
    }
}

fn parse_receiver<'a>(file: &Ptr<FileContext>, node: &Node<'a>) -> Option<Receiver> {
    let type_node = child_by_field(&node, "type")?;
    let types = parse_types(file, &type_node)?;
    let interface_node = child_by_field(&node, "interface");
    let interface = if let Some(interface_node) = interface_node {
        parse_type_param(file, &interface_node)
    } else {
        None
    };
    Some(Receiver {
        node: NodeData::from_node(node),
        types,
        interface,
    })
}

pub(crate) fn parse_return_type<'a>(file: &Ptr<FileContext>, node: &Node<'a>) -> ReturnType {
    ReturnType {
        node: NodeData::from_node(node),
        types: parse_types(file, node).unwrap_or(vec![]),
    }
}

pub(crate) fn parse_method<'a>(file: &Ptr<FileContext>, node: &Node<'a>) -> Option<Ptr<Function>> {
    let name = child_by_field(&node, "name")?;
    let receiver_node = child_by_field(&node, "receiver")?;
    // parse the receiver as a parameter
    let receiver = parse_receiver(file, &receiver_node)?;
    let parameter_list = child_by_field(&node, "parameters")?;
    let return_type = match node.child_by_field_name("result".as_bytes()) {
        Some(return_node) => Some(parse_return_type(file, &return_node)),
        None => None,
    };
    let body_node: Node = child_by_field(&node, "body")?;

    let method = Ptr::new(Function {
        file: file.clone(),
        signature: FunctionSignature {
            node: NodeData::from_node(&node),
            receiver: Some(receiver),
            name: node_text(&name, file)?,
            name_node: NodeData::from_node(&name),
            parameters: parse_parameters(file, parameter_list)?,
            return_type,
        },
        body_node: NodeData::from_node(&body_node),
    });
    Some(method)
}

pub(crate) fn parse_fun<'a>(file: &Ptr<FileContext>, node: &Node<'a>) -> Option<Ptr<Function>> {
    let name = child_by_field(&node, "name")?;
    let parameter_list = child_by_field(&node, "parameters")?;
    let return_type = match node.child_by_field_name("result".as_bytes()) {
        Some(return_node) => Some(ReturnType {
            node: NodeData::from_node(&return_node),
            types: parse_types(file, &return_node).unwrap_or(vec![]),
        }),
        None => None,
    };
    let body_node: Node = child_by_field(&node, "body")?;

    let fun = Ptr::new(Function {
        file: file.clone(),
        signature: FunctionSignature {
            node: NodeData::from_node(&node),
            receiver: None,
            name: node_text(&name, file)?,
            name_node: NodeData::from_node(&name),
            parameters: parse_parameters(file, parameter_list)?,
            return_type,
        },
        body_node: NodeData::from_node(&body_node),
    });
    Some(fun)
}

pub(crate) fn parse_parameters<'a>(
    context: &Ptr<FileContext>,
    node: Node<'a>,
) -> Option<Vec<Parameter>> {
    let mut parameters = Vec::new();
    let mut cursor = node.walk();
    for child in node.children(&mut cursor) {
        if child.kind() != "parameter" {
            continue;
        }
        parameters.push(parse_parameter(context, child)?);
    }
    Some(parameters)
}

fn parse_parameter<'a>(context: &Ptr<FileContext>, node: Node<'a>) -> Option<Parameter> {
    let is_mutable = node.child_by_field_name("mutable".as_bytes()).is_some();
    let name = node.child_by_field_name("name".as_bytes())?;
    let _type = node.child_by_field_name("type".as_bytes())?;

    Some(Parameter {
        node: NodeData::from_node(&node),
        name_node: NodeData::from_node(&name),
        name: node_text(&name, context)?,
        is_mutable,
        types: parse_types(context, &_type)?,

        origin: Some(SourceSpan::from_node(&node)),
    })
}
