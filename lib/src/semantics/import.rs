use std::{collections::HashMap, path::PathBuf};

use crate::{
    ast::{Import, LangError},
    topological_sort::has_cycle,
};

use super::PackageSemanticAnalyzer;

impl PackageSemanticAnalyzer {
    pub fn validate_import(&mut self, import: &Import) {
        let path_buf = import.path_buf();
        if path_buf == self.path {
            self.errors.push(LangError::type_error(
                &import.node,
                "Package can't import itself".to_string(),
            ));
            return;
        }

        if !self.dependencies.contains_key(&path_buf) {
            self.errors.push(LangError::type_error(
                &import.node,
                "Package not found".to_string(),
            ));
            return;
        }
        let mut imports = HashMap::<PathBuf, Vec<PathBuf>>::new();
        let mut ongoing = vec![import];
        while let Some(current) = ongoing.pop() {
            let path_buf = current.path_buf();
            let Some(dep) = self.dependencies.get(&path_buf) else {
                continue;
            };
            let mut package = dep.write().unwrap();
            let content = package.query_package_content();
            let deps = imports.entry(path_buf).or_insert(vec![]);
            for import in &content.imports {
                let import_path = import.path_buf();
                if !deps.contains(&import_path) {
                    deps.push(import_path)
                }
            }
        }

        if has_cycle(imports) {
            self.errors.push(LangError::type_error(
                &import.node,
                "Import contains circular dependency".to_string(),
            ));
        }
    }
}
