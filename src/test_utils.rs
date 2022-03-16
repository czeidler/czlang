use std::{
    fs::{create_dir_all, remove_dir_all, File},
    io::Write,
    path::Path,
};

use crate::rust_transpiler::transpile_project;

pub fn create_project(test_dir: &str, file_content: &str) {
    if test_dir == "." || test_dir == "" {
        panic!("Invalid test dir: {}", test_dir);
    }
    remove_dir_all(test_dir).unwrap();
    create_dir_all(test_dir).unwrap();

    let project_path = Path::new(test_dir);
    let main_file_path = project_path.join("main.cz");
    let mut main_file = File::create(&main_file_path).unwrap();
    main_file.write_all(file_content.as_bytes()).unwrap();

    transpile_project(&project_path).unwrap();
}

pub fn check_project(test_dir: &str) {
    let output = std::process::Command::new("cargo")
        .current_dir(Path::new(test_dir).join(".build"))
        .args(["check"])
        .output()
        .unwrap();
    if !output.stderr.is_empty() {
        println!(
            "Cargo check errors for project \"{}\":\n{}",
            test_dir,
            String::from_utf8_lossy(output.stderr.as_slice())
        );
    }
    assert!(output.status.success());
}

pub fn validate_project(test_dir: &str, file_content: &str) {
    create_project(test_dir, file_content);
    check_project(test_dir);
}
