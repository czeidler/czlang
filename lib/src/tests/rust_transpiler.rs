#[cfg(test)]
mod rust_transpiler_tests {
    use crate::test_utils::{transpile_and_validate_project, validate_project};

    #[test]
    fn function_call() {
        transpile_and_validate_project(
            "test_projects/function_call",
            r#"
fun test() i32 {
    return 10
}

fun main() {
    var result = test()
    println("Result: {result}")
}
        "#,
        )
    }

    #[test]
    fn if_else_statement() {
        transpile_and_validate_project(
            "test_projects/transpile_if_else_statement",
            r#"
fun main() {
    if true {
        println("if")
    }

    if true {
        println("if")
    } else {
        println("else")
    }

    if true {
        println("if")
    } else if true {
        println("if else")
    } else {
        println("else")
    }
}
        "#,
        )
    }

    #[test]
    fn array_slice() {
        transpile_and_validate_project(
            "test_projects/transpile_array_slice",
            r#"
fun main() {
    var array i32[5] = [1, 2, 3, 4, 5]
    var array2 = [1, 2, 3]
    var slice = &array[:]
    var slice2 = &array2[1:1]
}
        "#,
        )
    }

    #[test]
    fn var_declaration() {
        transpile_and_validate_project(
            "test_projects/transpile_var_declaration",
            r#"
fun main() {
    var value1 i32 = 12
    var value2 mut i32 = 12
    var value3 &i32 = &value1
    var value4 mut &i32 = &value1
    var value5 i32 | null = null
    var value6 i32 = 12
}
        "#,
        )
    }

    #[test]
    fn structs() {
        transpile_and_validate_project(
            "test_projects/transpile_structs",
            r#"
struct TestStruct {
    field1 u32
    field2 i32
}

struct TestStruct2 {
    field3 bool
    field4 TestStruct
}

fun main() {
    var struct1 = TestStruct {
        field1 = 1,
        field2 = -2
    }

    var struct2 = TestStruct2 {
        field3 = true,
        field4 = TestStruct {
            field1 = 4,
            field2 = -5,
        }
    }

    var field2 i32 = struct2.field4.field2
}
        "#,
        )
    }

    #[test]
    fn structs_optional_chaining() {
        transpile_and_validate_project(
            "test_projects/transpile_structs_optional_chaining",
            r#"
struct TestStruct {
    field1 u32
    field2 i32
}

fun main() {
    var struct1 TestStruct ? null = TestStruct {
        field1 = 1,
        field2 = -2
    }

    var field2 u32 ? null = struct1?.field1
}
        "#,
        )
    }

    #[test]
    fn structs_optional_chaining2() {
        transpile_and_validate_project(
            "test_projects/transpile_structs_optional_chaining2",
            r#"
struct TestStruct {
    field1 u32
    field2 i32
}

struct TestStruct2 {
    field1 TestStruct
}

fun main() {
    var struct2 TestStruct2 ? null = TestStruct2 {
        field1 = TestStruct {
            field1 = 1,
            field2 = -2,
        }
    }

    var field2 i32 ? null = struct2?.field1?.field2
}
        "#,
        )
    }

    #[test]
    fn structs_optional_chaining3() {
        transpile_and_validate_project(
            "test_projects/transpile_structs_optional_chaining3",
            r#"
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

    var field2 i32 ? null = struct2.field1?.field2
}
        "#,
        )
    }

    #[test]
    fn structs_optional_chaining_err() {
        transpile_and_validate_project(
            "test_projects/transpile_structs_optional_chaining_err",
            r#"
struct TestStruct {
    field1 u32 ? string
}

struct TestStruct2 {
    field2 TestStruct ? bool
}

fun main() {
    var struct2 = TestStruct2 {
        field2 = TestStruct {
            field1 = 1,
        }
    }

    var field2 u32 ? string | bool = struct2.field2?.field1
}
        "#,
        )
    }

    #[test]
    fn fun_blocks() {
        transpile_and_validate_project(
            "test_projects/transpile_fun_blocks",
            r#"
fun main() {
    var v1 = {
        var v2 = true
        {
            var v3 = false
            v3
        }
    }
    var v3 bool = v1
}
        "#,
        )
    }

    #[test]
    fn fun_block_sum_type() {
        transpile_and_validate_project(
            "test_projects/transpile_fun_block_sum_type",
            r#"
fun main() {
    var v1 = {
        var temp bool | i32 = 5
        temp
    }
    var v2 i32 | bool | string = v1
}
        "#,
        )
    }

    #[test]
    fn fun_if_blocks_err() {
        validate_project(
            "test_projects/transpile_fun_if_blocks_err",
            r#"
fun main() {
    var v1 = if true {
        1
    } else if false {
        5
    }
    var v2 i32 = v1
}
        "#,
        )
        .unwrap_err();
    }

    #[test]
    fn fun_if_blocks() {
        transpile_and_validate_project(
            "test_projects/transpile_fun_if_blocks",
            r#"
fun main() {
    var v1 = if true {
        1
    } else if false {
        2
    } else {
        6
    }
    var v2 i32 = v1
}
        "#,
        )
    }

    #[test]
    fn fun_if_blocks_2() {
        transpile_and_validate_project(
            "test_projects/transpile_fun_if_blocks_2",
            r#"
fun main() {
    var v1 = if true {
        1
    } else if false {
        -2
    } else {
        6
    }
    var v2 i32 = v1
}
        "#,
        )
    }

    #[test]
    fn fun_if_blocks_sum_types() {
        transpile_and_validate_project(
            "test_projects/transpile_fun_if_blocks_sum_types",
            r#"
fun main() {
    var v1 = if true {
        1
    } else if false {
        true
    } else {
        6
    }
    var v2 i32 | bool = v1
}
        "#,
        )
    }

    #[test]
    fn fun_if_blocks_sum_types_2() {
        transpile_and_validate_project(
            "test_projects/transpile_fun_if_blocks_sum_types_2",
            r#"
fun main() {
    var v1 = if true {
        if true {
            1
        } else {
            5
        }
    } else if false {
        true
    } else {
        var v3 = 45
        {
            v3
        }
    }
    var v2 i32 | bool = v1
}
        "#,
        )
    }

    #[test]
    fn generic_struct() {
        transpile_and_validate_project(
            "test_projects/transpile_generic_struct",
            r#"
struct Test<T, S> {
    a T
    b S
}

fun main() {}
        "#,
        )
    }

    #[test]
    fn struct_methods() {
        transpile_and_validate_project(
            "test_projects/struct_methods",
            r#"
struct Test {
    a bool
}

fun (&Test).test1() {

}

fun (&Test).test2() {

}

fun main() {
    var st = Test {
        a = true
    }
    st.test1()
    st.test2()
}
        "#,
        )
    }

    #[test]
    fn error_return_operator_trans() {
        transpile_and_validate_project(
            "test_projects/error_return_operator_trans",
            r#"
            fun test_call() bool ? i32 {
                var test bool ? i32 = true
                test?
                return false
            }

            fun test_call2() bool ? i32 | string {
                var test bool ? string  = true
                var test2 bool = test?
                return false
            }

            fun main() {
                test_call()
            }
        "#,
        )
    }

    #[test]
    fn pipe_operator() {
        transpile_and_validate_project(
            "test_projects/pipe_operator",
            r#"
            fun test() i32 {
                return 8
            }

            fun main() {
                var result i32 = test() |> $ + 2 |> $ + 3
            }
        "#,
        )
    }

    #[test]
    fn pipe_operator2() {
        transpile_and_validate_project(
            "test_projects/pipe_operator2",
            r#"
            fun test() i32 ? bool {
                return 8
            }

            fun test2(arg i32) bool ? i32 {
                return _ ? arg
            }

            fun main() {
                var result i32 | bool ? i32 | bool = test() |> test2($)
            }
        "#,
        )
    }

    #[test]
    fn pipe_operator_error_handling() {
        transpile_and_validate_project(
            "test_projects/pipe_operator_error_handling",
            r#"
            fun test() i32 ? null {
                return 8
            }


            fun main() {
                var result i32 = test() |?> { return }
            }
        "#,
        )
    }

    #[test]
    fn either_check() {
        transpile_and_validate_project(
            "test_projects/either_check",
            r#"
            fun main() {
                var result i32 ? bool = 8
                if result != ? {
                    var value i32 = result
                } else {
                    var err bool = result
                }

                if result == ? {
                    var err2 bool = result
                }
            }
        "#,
        )
    }

    #[test]
    fn either_check_2() {
        transpile_and_validate_project(
            "test_projects/either_check_2",
            r#"
            fun main() {
                var result i32 | string ? bool = 8
                if result != ? {
                    var value i32 | string | bool = result
                }
            }
        "#,
        )
    }
}
