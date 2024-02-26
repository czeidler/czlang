#[cfg(test)]
mod rust_validate_borrow_tests {
    use crate::test_utils::validate_err_project;

    #[test]
    fn simple_borrow_checker() {
        let errors = validate_err_project(
            "test_projects/simple_borrow_checker",
            r#"
fun test() {
    var value mut i32 = 34
    var ref1 = &value
    var ref2 = &mut value
}
        "#,
        )
        .unwrap();
        assert_eq!(errors.len(), 1);
        assert!(errors
            .first()
            .unwrap()
            .msg
            .contains("Can't take mutual reference of of already borrowed variable"))
    }
}
