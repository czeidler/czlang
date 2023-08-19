use crate::types::Ptr;

use super::{parse_fun, parse_method, parse_struct, FileContext, Function, Struct};

pub enum RootSymbol {
    Function(Ptr<Function>),
    Struct(Ptr<Struct>),
}

pub trait FileTrait {
    fn children(&self) -> FileSymbolIterator;
}

impl FileTrait for Ptr<FileContext> {
    fn children(&self) -> FileSymbolIterator {
        FileSymbolIterator::new(self.clone())
    }
}

pub struct FileSymbolIterator {
    file: Ptr<FileContext>,
    index: usize,
}

impl FileSymbolIterator {
    fn new(file: Ptr<FileContext>) -> Self {
        FileSymbolIterator { file, index: 0 }
    }
}

impl Iterator for FileSymbolIterator {
    type Item = RootSymbol;
    fn next(&mut self) -> Option<Self::Item> {
        let root = self.file.tree.root_node();
        loop {
            let Some(child) = root.child(self.index) else {
                return None;
            };
            self.index = self.index + 1;
            match child.kind() {
                "function_definition" => {
                    if let Some(fun) = parse_fun(&self.file, &child) {
                        return Some(RootSymbol::Function(fun));
                    } else {
                        log::error!("Invalid function_definition: {:?}", child);
                    }
                }
                "struct_declaration" => {
                    if let Some(struct_def) = parse_struct(&self.file, &child) {
                        return Some(RootSymbol::Struct(struct_def));
                    } else {
                        log::error!("Invalid struct_declaration: {:?}", child);
                    }
                }
                "method_definition" => {
                    if let Some(method) = parse_method(&self.file, &child) {
                        return Some(RootSymbol::Function(method));
                    } else {
                        log::error!("Invalid method_definition: {:?}", child);
                    }
                }
                _ => {}
            };
        }
    }
}
