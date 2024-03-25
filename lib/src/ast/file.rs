use crate::types::Ptr;

use super::{
    implement::{parse_struct_impl, StructImplement},
    parse_fun, parse_import, parse_interface, parse_method, parse_struct, FileContext, Function,
    Import, Interface, Struct,
};

pub enum RootSymbol {
    Function(Ptr<Function>),
    Struct(Ptr<Struct>),
    Import(Import),
    StructImpl(StructImplement),
    Interface(Ptr<Interface>),
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
                "import_declaration" => {
                    if let Some(import_declaration) = parse_import(&self.file, &child) {
                        return Some(RootSymbol::Import(import_declaration));
                    } else {
                        log::error!("Invalid import_declaration: {:?}", child);
                    }
                }
                "interface_declaration" => {
                    if let Some(interface) = parse_interface(&self.file, &child) {
                        return Some(RootSymbol::Interface(interface));
                    } else {
                        log::error!("Invalid interface_declaration: {:?}", child);
                    }
                }
                "struct_impl_interface" => {
                    if let Some(struct_impl) = parse_struct_impl(&self.file, &child) {
                        return Some(RootSymbol::StructImpl(struct_impl));
                    } else {
                        log::error!("Invalid struct_impl_interface: {:?}", child);
                    }
                }
                _ => {}
            };
        }
    }
}
