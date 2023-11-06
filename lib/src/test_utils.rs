use std::{
    collections::HashMap,
    fs::{create_dir_all, remove_dir_all, File},
    io::{Read, Write},
    path::{Path, PathBuf},
    str::FromStr,
};

use crate::{
    ast::{print_err, FileContext},
    rust_transpiler::transpile_project,
    semantics::PackageSemanticAnalyzer,
};

pub fn create_project(test_dir: &str, file_content: &str) {
    if test_dir == "." || test_dir == "" {
        panic!("Invalid test dir: {}", test_dir);
    }
    let project_path = Path::new(test_dir);
    if project_path.exists() {
        remove_dir_all(test_dir).unwrap();
    }
    create_dir_all(test_dir).unwrap();

    let main_file_path = project_path.join("main.cz");
    let mut main_file = File::create(&main_file_path).unwrap();
    main_file.write_all(file_content.as_bytes()).unwrap();
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

pub fn validate_project<'a>(
    test_dir: &str,
    file_content: &str,
) -> Result<PackageSemanticAnalyzer, anyhow::Error> {
    create_project(test_dir, file_content);
    let project_dir = Path::new(test_dir);

    let main_file_path = project_dir.join("main.cz");
    let mut main_file = std::fs::File::open(&main_file_path)?;
    let mut buffer = Vec::new();
    main_file.read_to_end(&mut buffer)?;

    let source_code = String::from_utf8(buffer)?;
    let file_path = main_file_path.to_string_lossy();
    let file = FileContext::parse(0, file_path.to_string(), source_code);
    for error in &file.parse_errors {
        print_err(&error, &file.source);
    }
    if !file.parse_errors.is_empty() {
        return Err(anyhow::Error::msg(format!(
            "{} compile error(s)",
            file.parse_errors.len()
        )));
    }

    let mut files = HashMap::new();
    files.insert(main_file_path.file_name().unwrap().to_os_string(), file);
    let mut analyzer = PackageSemanticAnalyzer::new(PathBuf::new(), files);
    analyzer.query_all();
    if !analyzer.errors.is_empty() {
        return Err(anyhow::Error::msg(analyzer.errors[0].msg.clone()));
    }

    Ok(analyzer)
}

pub fn transpile_and_validate_project(test_dir: &str, file_content: &str) {
    create_project(test_dir, file_content);
    let project_path = PathBuf::from_str(test_dir).unwrap();
    transpile_project(&project_path).unwrap();
    check_project(test_dir);
}
