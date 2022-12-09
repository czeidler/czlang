#[cfg(test)]
mod rust_validation_tests {
    use crate::test_utils::{transpile_and_validate_project, validate_project};

    #[test]
    fn expression_validation_1() {
        validate_project(
            "test_projects/expression_validation",
            r#"
fun main() {
    var test = 46 + "string"
}
        "#,
        )
        .unwrap_err();
    }

    #[test]
    fn expression_validation_2() {
        transpile_and_validate_project(
            "test_projects/expression_validation_2",
            r#"
fun main() {
    var test = 46 + 55
}
        "#,
        );
    }

    #[test]
    fn var_expression_validation_1() {
        transpile_and_validate_project(
            "test_projects/var_expression_validation_1",
            r#"
fun test() u32 {
    var test1 = 46 + 55
    var test2 u32 = test1
    return test2
}

fun main() { test() }
        "#,
        );

        validate_project(
            "test_projects/var_expression_validation_2",
            r#"
            fun test() u8 {
                var test1 = 46 + 55
                var test2 u32 = test1
                return test2
            }
        "#,
        )
        .unwrap_err();

        validate_project(
            "test_projects/var_expression_validation_3",
            r#"
            fun test() u8 {
                var test1 u32 = 46 + 55
                var test2 u8 = test1
                return test2
            }
        "#,
        )
        .unwrap_err();

        validate_project(
            "test_projects/var_expression_validation_4",
            r#"
            fun test_call() bool {
                return true
            }

            fun test() {
                var variable i32 = test_call()
            }
        "#,
        )
        .unwrap_err();

        validate_project(
            "test_projects/var_expression_validation_5",
            r#"
            fun test_call(arg0 string) bool {
                return true
            }

            fun test() {
                test_call(34, "test")
            }
        "#,
        )
        .unwrap_err();

        validate_project(
            "test_projects/var_expression_validation_6",
            r#"
            fun test_call(arg0 string, arg1 bool) bool {
                return true
            }

            fun test() {
                test_call(34, "test")
            }
        "#,
        )
        .unwrap_err();

        transpile_and_validate_project(
            "test_projects/var_expression_validation_7",
            r#"
            fun test_call(arg0 u32, arg1 bool) bool {
                return true
            }

            fun main() {
                test_call(34, true)
            }
        "#,
        );
    }

    #[test]
    fn type_of_validation() {
        // invalid type check
        transpile_and_validate_project(
            "test_projects/type_of_validation",
            r#"
            fun main() {
                var test = true
                if typeof test == bool {

                }
            }
        "#,
        );

        transpile_and_validate_project(
            "test_projects/type_of_validation_2",
            r#"
            fun test_call(arg0 bool | i32) bool {
                if typeof arg0 == bool {
                    //println("{arg0}")
                    return false
                } else {
                    //println("{arg0}")
                    return true
                }
            }

            fun main() {
                test_call(32)
            }
        "#,
        );
    }
}