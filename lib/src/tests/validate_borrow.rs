#[cfg(test)]
mod rust_validate_borrow_tests {
    use crate::test_utils::validate_project;

    #[test]
    fn simple_borrow_checker() {
        validate_project(
            "test_projects/simple_borrow_checker",
            r#"
fun test() {
    var value mut i32 = 34
    var ref1 = &value
    var ref2 = &mut value
}
        "#,
        )
        .unwrap_err();
    }
}
