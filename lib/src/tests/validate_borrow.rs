#[cfg(test)]
mod rust_validate_borrow_tests {
    use crate::test_utils::{transpile_and_validate_project, validate_err_project};

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

    #[test]
    fn simple_borrow_checker_2() {
        let errors = validate_err_project(
            "test_projects/simple_borrow_checker_2",
            r#"
fun test() {
    var value mut i32 = 34
    var ref1 = &value
    var ref2 = &mut value
    var ref3 = ref1
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

    #[test]
    fn simple_borrow_checker_3() {
        transpile_and_validate_project(
            "test_projects/simple_borrow_checker_3",
            r#"
fun main() {
    var value mut i32 = 34
    if true {
        var ref1 = &mut value
    }
    var ref2 = &value
}
        "#,
        );
    }

    #[test]
    fn borrow_checker_move() {
        let errors = validate_err_project(
            "test_projects/borrow_checker_move",
            r#"
fun main() {
    var value i32 = 34
    var value2 = value
    var ref2 = &value
}
        "#,
        )
        .unwrap();
        assert_eq!(errors.len(), 1);
        assert!(errors
            .first()
            .unwrap()
            .msg
            .contains("Variable moved"))
    }
}
