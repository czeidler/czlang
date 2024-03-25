use tree_sitter::Node;

use crate::types::Ptr;

use super::{child_by_field, node_text, parse_type_params, FileContext, NodeData, TypeParam};

#[derive(Debug, Clone, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub struct Interface {
    pub node: NodeData,
    pub name: String,
    pub name_node: NodeData,
    pub type_params: Option<Vec<TypeParam>>,
    pub methods: Vec<MethodDeclaration>,
}

#[derive(Debug, Clone, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub struct MethodDeclaration {
    pub node: NodeData,
    pub name: String,
    pub name_node: NodeData,
    // TODO get rest of it
}

fn parse_method_declaration<'a>(
    context: &Ptr<FileContext>,
    node: &Node<'a>,
) -> Option<MethodDeclaration> {
    let name_node = child_by_field(&node, "name")?;
    let name = node_text(&name_node, context)?;
    Some(MethodDeclaration {
        node: context.node_data(node),
        name,
        name_node: context.node_data(&name_node),
    })
}

fn parse_method_declarations<'a>(
    context: &Ptr<FileContext>,
    node: &Node<'a>,
) -> Vec<MethodDeclaration> {
    let mut output = vec![];
    let mut cursor = node.walk();
    for method_node in node.children_by_field_name("method_declaration", &mut cursor) {
        if let Some(t) = parse_method_declaration(context, &method_node) {
            output.push(t);
        }
    }
    output
}

pub fn parse_interface(context: &Ptr<FileContext>, node: &Node) -> Option<Ptr<Interface>> {
    let name_node = child_by_field(&node, "name")?;
    let name = node_text(&name_node, context)?;

    let type_params = child_by_field(&node, "type_params");
    let type_params = type_params.map(|a| parse_type_params(context, &a));
    let methods = parse_method_declarations(context, node);
    Some(Ptr::new(Interface {
        node: context.node_data(node),
        name,
        name_node: context.node_data(&name_node),
        type_params,
        methods,
    }))
}
