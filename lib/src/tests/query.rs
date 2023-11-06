#[cfg(test)]
mod tests {
    use std::{collections::HashMap, ffi::OsString, path::PathBuf};

    use crate::{
        ast::{FileContext, SourcePosition},
        query::{find_in_file, QueryResult},
        semantics::PackageSemanticAnalyzer,
    };

    #[test]
    fn expression_validation_1() {
        let source_code = r#"
struct TestStruct {
    field1 u32
    field2 i32
}

struct TestStruct2 {
    field1 TestStruct ? null
}

fun main() {
    var struct2 = TestStruct2 {
        field1 = TestStruct {
            field1 = 1,
            field2 = -2,
        }
    }
    var t = struct2.field1.
}
"#
        .to_string();
        let file = FileContext::parse(0, "test.cz".to_string(), source_code);
        let mut files = HashMap::new();
        files.insert(OsString::from("test.cz"), file.clone());
        let mut analyzer = PackageSemanticAnalyzer::new(PathBuf::new(), files);
        let result = find_in_file(&mut analyzer, &file, SourcePosition::new(17, 24)).unwrap();
        match result {
            QueryResult::SelectorField((_, semantics)) => {
                assert!(semantics.binding.is_some());
            }
            _ => assert!(false, "selector field expected"),
        }
    }
}
