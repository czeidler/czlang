use std::{
    collections::HashMap,
    fs::{create_dir_all, remove_dir_all, File},
    io::Write,
    path::{Path, PathBuf},
    str::FromStr,
    sync::RwLock,
};

use crate::{
    ast::{root_package_path, LangError},
    project::Project,
    rust_transpiler::transpile_project,
    semantics::PackageSemanticAnalyzer,
    types::Ptr,
    vfs::MemoryFS,
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

pub fn validate_project_files(files: HashMap<PathBuf, String>, project_path: PathBuf) -> Project {
    let mut vfs = MemoryFS::new();
    for (path, content) in files {
        vfs.add_file(path, content);
    }
    let mut project = Project::new(Box::new(vfs), project_path);
    project.validate_package(&root_package_path()).unwrap();
    project
}

/// Validate a project with expected error
pub fn validate_err_project(
    test_dir: &str,
    file_content: &str,
) -> Result<Vec<LangError>, anyhow::Error> {
    let project_dir = PathBuf::from_str(test_dir).unwrap();
    let main_file_path = project_dir.join("main.cz");
    let mut files = HashMap::new();
    files.insert(main_file_path.clone(), file_content.to_string());
    let project = validate_project_files(files, project_dir);
    let errors = project.current_errors();
    Ok(errors)
}

pub fn validate_project(
    test_dir: &str,
    file_content: &str,
) -> Result<Ptr<RwLock<PackageSemanticAnalyzer>>, anyhow::Error> {
    let project_dir = PathBuf::from_str(test_dir).unwrap();
    let main_file_path = project_dir.join("main.cz");
    let mut files = HashMap::new();
    files.insert(main_file_path.clone(), file_content.to_string());
    let mut project = validate_project_files(files, project_dir);
    let errors = project.current_errors();

    if !errors.is_empty() {
        return Err(anyhow::Error::msg(errors[0].msg.clone()));
    }

    Ok(project.query_package(&root_package_path()).unwrap().0)
}

pub fn transpile_and_validate_project(test_dir: &str, file_content: &str) {
    create_project(test_dir, file_content);
    let project_path = PathBuf::from_str(test_dir).unwrap();
    transpile_project(&project_path).unwrap();
    check_project(test_dir);
}
