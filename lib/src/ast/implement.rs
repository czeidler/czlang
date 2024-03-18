use tree_sitter::Node;

use crate::types::Ptr;

use super::{child_by_field, parse_identifier_type, FileContext, IdentifierType};

#[derive(Debug, Clone, Hash, PartialEq, Eq)]
pub enum ImportName {
    Package,
    Dot,
    Alias(String),
}

/// Relative path as imported
pub type PackagePath = Vec<String>;

pub fn root_package_path() -> PackagePath {
    vec![]
}

#[derive(Debug, Clone, Hash, PartialEq, Eq)]
pub struct StructImplement {
    pub st: IdentifierType,
    pub interface: IdentifierType,
}

pub fn parse_struct_impl<'a>(
    context: &Ptr<FileContext>,
    node: &Node<'a>,
) -> Option<StructImplement> {
    let st = child_by_field(&node, "struct")?;
    let interface = child_by_field(&node, "interface")?;

    let st = parse_identifier_type(context, &st)?;
    let interface = parse_identifier_type(context, &interface)?;
    Some(StructImplement { st, interface })
}
