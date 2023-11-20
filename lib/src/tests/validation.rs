#[cfg(test)]
mod rust_validation_tests {
    use std::{collections::HashMap, path::PathBuf, str::FromStr};

    use crate::{
        test_utils::{transpile_and_validate_project, validate_project, validate_project_files},
        tests::find_var_in_fun,
    };

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
            "test_projects/type_of_validation_b",
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

    #[test]
    fn type_of_validation_2() {
        transpile_and_validate_project(
            "test_projects/type_of_validation_2",
            r#"
            fun test_call(arg bool | i32 | string) {
                if typeof arg == bool {
                    var b bool = arg
                    return
                }

                var test i32 | string = arg
            }

            fun main() {
                test_call(32)
            }
        "#,
        );
    }

    #[test]
    fn type_of_validation_3() {
        transpile_and_validate_project(
            "test_projects/type_of_validation_3",
            r#"
            fun test_call(arg bool | i32 | string) {
                if typeof arg == bool {
                    var b bool = arg
                } else if typeof arg == i32 {
                    var s i32 = arg
                } else {
                    var s string = arg
                    return
                }

                var test bool | i32 = arg
            }

            fun main() {
                test_call(32)
            }
        "#,
        );
    }

    #[test]
    fn type_of_validation_4() {
        transpile_and_validate_project(
            "test_projects/type_of_validation_4",
            r#"
            fun test_call(arg bool | i32 | &string) {
                if typeof arg == bool {
                    var b bool = arg
                } else if typeof arg == i32 {
                    var s i32 = arg
                    return
                } else {
                    var s &string = arg
                }

                var test bool | &string = arg
            }

            fun main() {
                test_call(32)
            }
        "#,
        );
    }

    #[test]
    fn type_of_validation_5() {
        transpile_and_validate_project(
            "test_projects/type_of_validation_5",
            r#"
            fun test_call(arg bool | i32 | string) {
                if typeof arg == bool {
                    var b bool = arg
                    return
                } else if typeof arg == i32 {
                    var s i32 = arg
                } else {
                    var s &string = &arg
                }

                var test string | i32 = arg
            }

            fun main() {
                test_call(32)
            }
        "#,
        );
    }

    #[test]
    fn error_return() {
        validate_project(
            "test_projects/error_return",
            r#"
            fun test_call() bool ? i32 {
                return _ ? 43
            }

            fun main() {
                test_call()
            }
        "#,
        )
        .unwrap();
    }

    #[test]
    fn error_return_operator() {
        validate_project(
            "test_projects/error_return_operator",
            r#"
            fun test_call() bool ? i32 {
                var test bool ? i32 = true
                test?
                return false
            }

            fun test_call2() bool ? i32 | string {
                var test bool ? string  = true
                test?
                return false
            }

            fun main() {
                test_call()
            }
        "#,
        )
        .unwrap();
    }

    #[test]
    fn error_return_operator_failure() {
        validate_project(
            "test_projects/error_return_operator_failure",
            r#"

            fun test_call() bool ? i32 | string {
                var test bool ? i8  = true
                test?
                return false
            }

            fun main() {
                test_call()
            }
        "#,
        )
        .unwrap_err();
    }

    #[test]
    fn pipe_types() {
        let analysis = validate_project(
            "test_projects/pipe_types",
            r#"
            fun value() i32 {
                return 8
            }

            fun either() i32 ? null {
                return 8
            }

            fun either2() bool ? i32 {
                return true
            }

            fun main() {
                var value0 = value() |> true
                var value1= value() |> _ ? false
                var value2 = either() |> false
                var value3 = either2() |?> true
                var value3_1 = either() |?> true
                var value4 = either() |?> either2()
                var value5 = either() |> either2()
            }
        "#,
        )
        .unwrap();
        let mut analysis = analysis.write().unwrap();

        let value = find_var_in_fun(&mut analysis, "main", "value0").unwrap();
        assert_eq!(value.to_string(), "bool");
        let value = find_var_in_fun(&mut analysis, "main", "value1").unwrap();
        assert_eq!(value.to_string(), "_ ? bool");
        let value = find_var_in_fun(&mut analysis, "main", "value2").unwrap();
        assert_eq!(value.to_string(), "bool ? null");
        let value = find_var_in_fun(&mut analysis, "main", "value3").unwrap();
        assert_eq!(value.to_string(), "bool");
        let value = find_var_in_fun(&mut analysis, "main", "value3_1").unwrap();
        assert_eq!(value.to_string(), "bool | i32");
        let value = find_var_in_fun(&mut analysis, "main", "value4").unwrap();
        assert_eq!(value.to_string(), "bool | i32 ? i32");
        let value = find_var_in_fun(&mut analysis, "main", "value5").unwrap();
        assert_eq!(value.to_string(), "bool ? null | i32");
    }

    #[test]
    fn var_assignment_error() {
        let err = validate_project(
            "test_projects/var_assignment_error",
            r#"
            fun main() {
                var test bool = false
                test = true
            }
        "#,
        );
        assert_eq!(&format!("{}", err.unwrap_err()), "Left side is not mutable");
    }

    #[test]
    fn error_import_cycle() {
        let main = PathBuf::new();
        let mut files = HashMap::new();
        files.insert(
            main.join("main.cz"),
            r#"
                    import "package1"
            "#
            .to_string(),
        );
        files.insert(
            main.join("package1/package1.cz"),
            r#"
                    import "package2"
            "#
            .to_string(),
        );
        files.insert(
            main.join("package2/package2.cz"),
            r#"
                    import "package1"
            "#
            .to_string(),
        );
        let project = validate_project_files(files, &main);
        let errors = project.current_errors();
        assert_eq!(errors.len(), 3);
        assert!(errors[0].msg.contains("circular dependency"));
    }

    #[test]
    fn error_import_self_import() {
        let main = PathBuf::from_str("package1").unwrap();
        let mut files = HashMap::new();
        files.insert(
            main.join("main.cz"),
            r#"
                    import "package1"
            "#
            .to_string(),
        );
        let project = validate_project_files(files, &main);
        let errors = project.current_errors();
        assert_eq!(errors.len(), 1);
        assert!(errors[0].msg.contains("itself"));
    }

    #[test]
    fn error_import_package_not_found() {
        let main = PathBuf::from_str("package1").unwrap();
        let mut files = HashMap::new();
        files.insert(
            main.join("main.cz"),
            r#"
                    import "package2"
            "#
            .to_string(),
        );
        let project = validate_project_files(files, &main);
        let errors = project.current_errors();
        assert_eq!(errors.len(), 1);
        assert!(errors[0].msg.contains("not found"));
    }
}
