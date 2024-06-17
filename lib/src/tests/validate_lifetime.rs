#[cfg(test)]
mod rust_validate_lifetime_tests {
    use crate::test_utils::validate_err_project;

    #[test]
    fn simple_lifetime_checker() {
        let errors = validate_err_project(
            "test_projects/simple_lifetime_checker",
            r#"
fun test() {
    var value i32 = 34
    var ref mut &i32 = &value
    if true {
        var temp i32 = 4
        ref = &temp
    }
}
        "#,
        )
        .unwrap();
        assert_eq!(errors.len(), 1);
        assert!(errors
            .first()
            .unwrap()
            .msg
            .contains("Value borrowed while value goes out of scope"))
    }
}
