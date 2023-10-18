use std::collections::HashMap;

use crate::{ast::Struct, semantics::StructSemantics, types::Ptr};

use super::PackageSemanticAnalyzer;

impl PackageSemanticAnalyzer {
    pub(crate) fn validate_struct_def(&mut self, struct_def: &Ptr<Struct>) {
        // TODO: struct name clash with other declarations?

        let new_entry = self.structs.insert(
            struct_def.node.id(),
            StructSemantics {
                specializations: HashMap::new(),
            },
        );
        assert!(new_entry.is_none());

        for field in &struct_def.fields {
            self.query_field_type(struct_def, &field);
        }
    }
}
