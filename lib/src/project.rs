use std::{collections::HashMap, ffi::OsString, fs, path::PathBuf, str::FromStr, sync::RwLock};

use tree_sitter::{InputEdit, Point};

use crate::{
    ast::{FileContext, SourceSpan},
    semantics::PackageSemanticAnalyzer,
    tree_sitter::parse,
    types::Ptr,
};

#[derive(Debug)]
pub struct FileChange {
    pub range: Option<SourceSpan>,
    pub text: String,
}

pub fn package_and_file_name(path: &PathBuf) -> (PathBuf, OsString) {
    let package_path = path.parent().unwrap();
    let file_name = path.file_name().unwrap().to_os_string();
    (package_path.to_path_buf(), file_name)
}

pub struct Project {
    pub file_id_counter: usize,
    /// package path -> PackageSemanticAnalyzer
    pub packages: HashMap<PathBuf, Ptr<RwLock<PackageSemanticAnalyzer>>>,

    /// For loaded packages this keeps track which package is used by which packages.
    /// package path -> list of packages that uses the package
    pub usages: HashMap<PathBuf, Vec<PathBuf>>,
}

impl Project {
    pub fn new() -> Self {
        let project_file = Project {
            file_id_counter: 0,
            packages: HashMap::new(),
            usages: HashMap::new(),
        };

        project_file
    }

    pub fn query_package(
        &mut self,
        path: &PathBuf,
    ) -> Option<Ptr<RwLock<PackageSemanticAnalyzer>>> {
        if let Some(package) = self.packages.get(path) {
            return Some(package.clone());
        }
        let dir = fs::read_dir(path).ok()?;
        let mut files = HashMap::new();
        for entry in dir {
            let entry = entry.ok()?;
            let file_name = entry.file_name();
            if !file_name.to_string_lossy().ends_with(".cz") {
                continue;
            }
            let source = fs::read_to_string(entry.path()).ok()?;
            self.file_id_counter = self.file_id_counter + 1;
            let file_context = FileContext::parse(
                self.file_id_counter,
                entry.path().to_string_lossy().to_string(),
                source,
            );
            files.insert(file_name.to_os_string(), file_context);
        }
        let package = self.init_package(path, files);
        Some(package)
    }

    fn init_package(
        &mut self,
        path: &PathBuf,
        files: HashMap<OsString, Ptr<FileContext>>,
    ) -> Ptr<RwLock<PackageSemanticAnalyzer>> {
        let mut package = PackageSemanticAnalyzer::new(files);
        let package_semantics = package.query_package_content();
        for import in &package_semantics.imports {
            let path_buf = import.path_buf();
            self.query_package(&path_buf);
            let entry = self.usages.entry(path_buf).or_insert(vec![]);
            if !entry.contains(path) {
                entry.push(path.clone());
            }
        }

        let package = Ptr::new(RwLock::new(package));
        self.packages.insert(path.clone(), package.clone());
        package
    }

    pub fn edit_file(&mut self, url: String, changes: Vec<FileChange>) {
        let path = PathBuf::from_str(&url).unwrap();
        let (package_path, file_name) = package_and_file_name(&path);
        let package = self.query_package(&path).unwrap();
        let package = package.write().unwrap();
        let mut package_files = package.files.clone();
        drop(package);
        let Some(file) =package_files.get(&file_name) else {
            panic!("Unknown file");
        };
        let file = update_file(file, changes);
        package_files.insert(file_name, file);

        self.invalidate_package(&package_path);
        self.init_package(&package_path, package_files);
    }

    /// Invalidate a package recursively all packages that depend on it
    fn invalidate_package(&mut self, package: &PathBuf) {
        self.packages.remove(package);
        let Some(usages) = self.usages.get(package) else {
            return;
        };
        for usage in usages {
            self.packages.remove(usage);
        }
    }
}

fn update_file(file: &Ptr<FileContext>, changes: Vec<FileChange>) -> Ptr<FileContext> {
    let mut tree = file.tree.clone();
    // Note: avoid cloning the whole file?
    let mut source = file.source.clone();
    for change in changes {
        let Some(range) = change.range else {
            tree = parse(&change.text, None);
            source = change.text;
            continue;
        };
        let mut change_lines: i32 = 0;
        let mut change_end_column = change.text.len();
        for line in change.text.lines() {
            change_lines += 1;
            change_end_column = line.len();
        }

        let (start, end) = range.to_byte_range(&source);
        tree.edit(&InputEdit {
            start_byte: start,
            old_end_byte: end,
            new_end_byte: start + change.text.bytes().len(),
            start_position: Point {
                row: range.start.row,
                column: range.start.column,
            },
            old_end_position: Point {
                row: range.end.row,
                column: range.end.column,
            },
            new_end_position: Point {
                row: range.start.row + change_lines as usize,
                column: if change_lines == 0 {
                    range.start.column + change_end_column
                } else {
                    change_end_column
                },
            },
        });
        let char_range = range.to_char_range(&source);
        source.replace_range(char_range.0..char_range.1, &change.text);
    }

    FileContext::parse_from_existing_tree(file.file_id, file.file_path.clone(), source, &tree)
}
