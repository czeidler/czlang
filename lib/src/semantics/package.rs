use std::collections::HashMap;

use crate::ast::{FileTrait, Import, LangError, RootSymbol};

use super::{PackageContentSemantics, PackageSemanticAnalyzer};

impl PackageSemanticAnalyzer {
    pub(crate) fn validate_package_content(&mut self) -> PackageContentSemantics {
        let mut imports = Vec::new();
        let mut functions = HashMap::new();
        let mut structs = HashMap::new();
        let mut methods = Vec::new();
        for (_, file) in &self.files {
            for child in file.children() {
                match child {
                    RootSymbol::Function(fun) => {
                        if fun.signature.receiver.is_none() {
                            let existed = functions.insert(fun.signature.name.clone(), fun.clone());
                            if existed.is_some() {
                                self.errors.push(LangError::type_error(
                                    &fun.signature.name_node,
                                    format!(
                                        "Duplicated function definition: {:?}",
                                        fun.signature.name
                                    ),
                                ))
                            }
                        } else {
                            methods.push(fun);
                        }
                    }
                    RootSymbol::Struct(struct_def) => {
                        let existed = structs.insert(struct_def.name.clone(), struct_def.clone());
                        if existed.is_some() {
                            self.errors.push(LangError::type_error(
                                &struct_def.name_node,
                                format!("Duplicated struct definition: {:?}", struct_def.name),
                            ))
                        }
                    }
                    RootSymbol::Import(import) => {
                        if imports
                            .iter()
                            .any(|existing: &Import| existing.path == import.path)
                        {
                            self.errors.push(LangError::type_error(
                                &import.node,
                                format!("Package already imported {:?}", import.path.join("/")),
                            ))
                        } else {
                            imports.push(import);
                        }
                    }
                }
            }
        }

        PackageContentSemantics {
            functions,
            structs,
            methods,
            imports,
        }
    }
}
