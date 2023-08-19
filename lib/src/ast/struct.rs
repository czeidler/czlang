use tree_sitter::Node;

use crate::types::Ptr;

use super::{
    child_by_field, node_text, parse_type_params, parse_types, FileContext, NodeData, RefType,
    SourceSpan, TypeParam,
};

#[derive(Debug, Clone, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub struct Struct {
    pub node: NodeData,

    pub name: String,
    pub name_node: NodeData,
    pub type_params: Option<Vec<TypeParam>>,
    pub fields: Vec<Field>,
}

impl Struct {
    pub fn has_reference(&self) -> bool {
        self.fields.iter().any(|it| it.has_reference())
    }
}

#[derive(Debug, Clone, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub struct Field {
    pub node: NodeData,

    pub name: String,
    pub name_node: NodeData,
    pub types: Vec<RefType>,
}

impl Field {
    pub fn has_reference(&self) -> bool {
        self.types.iter().any(|it| it.is_reference)
    }
}

pub(crate) fn parse_struct<'a>(context: &Ptr<FileContext>, node: &Node<'a>) -> Option<Ptr<Struct>> {
    let name = child_by_field(&node, "name")?;
    let type_params = child_by_field(&node, "type_params");
    let type_params = type_params.map(|a| parse_type_params(context, &a));
    let fields = child_by_field(&node, "fields")?;
    let fields = parse_struct_fields(context, &fields, node);
    Some(Ptr::new(Struct {
        node: NodeData::from_node(&node),
        name: node_text(&name, context)?,
        name_node: NodeData::from_node(&name),
        type_params,
        fields,
    }))
}

fn parse_struct_fields<'a>(
    context: &Ptr<FileContext>,
    node: &Node<'a>,
    parent: &Node<'a>,
) -> Vec<Field> {
    let mut fields = Vec::new();
    let mut cursor = node.walk();
    for field_node in node.children_by_field_name("field", &mut cursor) {
        if let Some(field) = parse_struct_field(context, &field_node, parent) {
            fields.push(field);
        } else {
            break;
        }
    }
    fields
}

fn parse_struct_field<'a>(
    context: &Ptr<FileContext>,
    node: &Node<'a>,
    parent: &Node<'a>,
) -> Option<Field> {
    let name = child_by_field(&node, "name")?;
    let field_type = child_by_field(&node, "type")?;

    Some(Field {
        node: NodeData {
            id: node.id(),
            parent: parent.id(),
            span: SourceSpan::from_node(&node),
        },

        name: node_text(&name, context)?,
        name_node: NodeData::from_node(&name),
        types: parse_types(context, &field_type)?,
    })
}
