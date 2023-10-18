#[cfg(test)]
mod tests {
    use crate::{
        ast::{FileContext, SourcePosition},
        query::{find_in_file, QueryResult},
        semantics::FileSemanticAnalyzer,
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
        let mut parse_errors = Vec::new();
        let file = FileContext::parse(0, "test.cz".to_string(), source_code, &mut parse_errors);

        let mut analyzer = FileSemanticAnalyzer::new(vec![file]);
        let result = find_in_file(&mut analyzer, SourcePosition::new(17, 24)).unwrap();
        match result {
            QueryResult::SelectorField((_, semantics)) => {
                assert!(semantics.binding.is_some());
            }
            _ => assert!(false, "selector field expected"),
        }
    }
}
