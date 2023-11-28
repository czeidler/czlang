use std::path::PathBuf;

use tree_sitter::Node;

use crate::types::Ptr;

use super::{child_by_field, node_text, FileContext, NodeData};

#[derive(Debug, Clone, Hash, PartialEq, Eq)]
pub enum ImportName {
    Package,
    Dot,
    Alias(String),
}

#[derive(Debug, Clone, Hash, PartialEq, Eq)]
pub struct Import {
    pub node: NodeData,
    pub name: ImportName,

    pub path: Vec<String>,
}

impl Import {
    pub fn path_buf(&self) -> PathBuf {
        PathBuf::from_iter(self.path.iter())
    }
}

pub fn parse_import<'a>(file: &Ptr<FileContext>, node: &Node<'a>) -> Option<Import> {
    let name_node = child_by_field(&node, "name");
    let name = match name_node {
        Some(name_node) => {
            let name = node_text(&name_node, file)?;
            if name == "." {
                ImportName::Dot
            } else {
                ImportName::Alias(name)
            }
        }
        None => ImportName::Package,
    };

    let path_node = child_by_field(&node, "path")?;
    let mut full_path = node_text(&path_node, file)?;
    full_path.remove(0);
    full_path.pop();
    let path = full_path.split("/").map(|p| p.to_string()).collect();
    Some(Import {
        node: file.node_data(node),
        name,
        path,
    })
}
