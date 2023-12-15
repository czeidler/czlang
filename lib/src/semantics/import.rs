use std::collections::HashMap;

use crate::{
    ast::{Import, LangError, PackagePath},
    topological_sort::has_cycle,
};

use super::PackageSemanticAnalyzer;

impl PackageSemanticAnalyzer {
    pub fn validate_import(&mut self, import: &Import) {
        if import.path == self.path {
            self.errors.push(LangError::type_error(
                &import.node,
                "Package can't import itself".to_string(),
            ));
            return;
        }

        if !self.dependencies.contains_key(&import.path) {
            self.errors.push(LangError::type_error(
                &import.node,
                "Package not found".to_string(),
            ));
            return;
        }
        let mut imports = HashMap::<PackagePath, Vec<PackagePath>>::new();
        imports.insert(
            self.path.clone(),
            self.dependencies.iter().map(|it| it.0.clone()).collect(),
        );
        for (dep_path, dep) in &self.dependencies {
            let dep_imports = dep.imports.iter().map(|it| it.path.clone()).collect();
            imports.insert(dep_path.clone(), dep_imports);
        }

        if has_cycle(imports) {
            self.errors.push(LangError::type_error(
                &import.node,
                "Import contains circular dependency".to_string(),
            ));
        }
    }
}
