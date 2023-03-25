#[cfg(test)]
mod rust_validate_generics_tests {
    use crate::test_utils::validate_project;

    #[test]
    fn generic_struct() {
        validate_project(
            "test_projects/generic_struct",
            r#"
struct Test<T, S> {
    a T
    b &S
}
        "#,
        )
        .unwrap();
    }
}
