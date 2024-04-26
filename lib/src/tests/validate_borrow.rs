#[cfg(test)]
mod rust_validate_borrow_tests {
    use crate::test_utils::{
        transpile_and_validate_project, validate_err_project, validate_project,
    };

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
struct T {}

fun main() {
    var value T = T {}
    var value2 = value
    var ref2 = &value
}
        "#,
        )
        .unwrap();
        assert_eq!(errors.len(), 1);
        assert!(errors.first().unwrap().msg.contains("Variable moved"))
    }

    #[test]
    fn borrow_checker_partial_move() {
        let errors = validate_err_project(
            "test_projects/borrow_checker_partial_move",
            r#"
struct T {}
struct T2 {
    t T
}

fun main() {
    var value = T2 {
        t = T {}
    }
    var value1 = value.t
    var value2 = value
}
        "#,
        )
        .unwrap();
        assert_eq!(errors.len(), 1);
        assert!(errors
            .first()
            .unwrap()
            .msg
            .contains("Variable partially moved"))
    }

    #[test]
    fn borrow_checker_partial_move_and_reassign() {
        validate_project(
            "test_projects/borrow_checker_partial_move_and_reassign",
            r#"
struct T {}
struct T2 {
    t T
}

fun main() {
    var value mut = T2 {
        t = T {}
    }
    var value1 = value.t
    value.t = T {}
    var value2 = value
}
        "#,
        )
        .unwrap();
    }

    #[test]
    fn borrow_checker_partial_borrow_ok() {
        validate_project(
            "test_projects/borrow_checker_partial_borrow",
            r#"
struct T {}
struct T2 {
    t1 T
    t2 T
}

fun main() {
    var value mut = T2 {
        t1 = T {},
        t2 = T {}
    }
    var value1 = &mut value.t1
    var value2 = &value.t2
}
        "#,
        )
        .unwrap();
    }

    #[test]
    fn simple_borrow_partial_borrow_error() {
        let errors = validate_err_project(
            "test_projects/simple_borrow_partial_borrow_error",
            r#"
struct T {}
struct T2 {
    t1 T
    t2 T
}

fun main() {
    var value mut = T2 {
        t1 = T {},
        t2 = T {}
    }
    var value1 = &mut value.t1
    var value2 = &value.t2
    var value3 = &value.t1
}
        "#,
        )
        .unwrap();
        assert_eq!(errors.len(), 1);
        assert!(errors
            .first()
            .unwrap()
            .msg
            .contains("Can't take reference of mutually borrowed variable"))
    }
}
