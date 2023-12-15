use rayon::prelude::*;
use std::{
    collections::{hash_map::Entry, HashMap},
    ffi::OsString,
    path::PathBuf,
    str::FromStr,
    sync::RwLock,
};

use tree_sitter::{InputEdit, Point};

use crate::{
    ast::{FileContext, LangError, NodeData, NodeId, PackagePath, SourceSpan},
    semantics::{PackageContentSemantics, PackageSemanticAnalyzer},
    topological_sort::TopologicalSort,
    tree_sitter::parse,
    types::Ptr,
    vfs::VirtualFileSystem,
};

#[derive(Debug)]
pub struct FileChange {
    pub range: Option<SourceSpan>,
    pub text: String,
}

pub struct Project {
    vfs: Box<dyn VirtualFileSystem>,
    base_path: PathBuf,
    pub file_id_counter: usize,
    /// package path -> PackageSemanticAnalyzer
    pub packages: HashMap<
        PackagePath,
        (
            Ptr<RwLock<PackageSemanticAnalyzer>>,
            Ptr<PackageContentSemantics>,
        ),
    >,

    /// For loaded packages this keeps track which package is used by which packages.
    /// package path -> list of packages that uses the package
    pub usages: HashMap<PackagePath, Vec<PackagePath>>,
}

impl Project {
    pub fn new(vfs: Box<dyn VirtualFileSystem>, base_path: PathBuf) -> Self {
        let mut project = Project {
            vfs,
            base_path,
            file_id_counter: 0,
            packages: HashMap::new(),
            usages: HashMap::new(),
        };

        // load full package tree
        project.query_package(&vec![]);
        project
    }

    pub fn package_and_file_name(&self, path: &PathBuf) -> Option<(PackagePath, OsString)> {
        let Ok(path) = path.strip_prefix(&self.base_path) else {
            return None;
        };

        let Some(package_path) = path.parent() else {
            return None;
        };
        let file_name = path.file_name().unwrap().to_os_string();
        Some((
            package_path
                .iter()
                .map(|it| it.to_string_lossy().to_string())
                .collect(),
            file_name,
        ))
    }

    pub fn current_errors(&self) -> Vec<LangError> {
        let mut out = vec![];
        for (_, (package, _)) in &self.packages {
            let package = package.write().unwrap();
            package.current_errors(&mut out);
        }
        out
    }

    /// Validates package and all its dependencies
    pub fn validate_package(
        &mut self,
        path: &PackagePath,
    ) -> Option<Ptr<RwLock<PackageSemanticAnalyzer>>> {
        let Some(root) = self.query_package(path) else {
           return None;
        };
        let mut imports = HashMap::new();
        // collect all deps
        let mut ongoing = vec![root.clone()];
        while let Some((current, _)) = ongoing.pop() {
            let mut current = current.write().unwrap();
            let content = current.query_package_content();
            let entry = imports.entry(current.path.clone());
            drop(current);
            if let &Entry::Occupied(_) = &entry {
                continue;
            }
            let entry = entry.or_insert(vec![]);
            for import in &content.imports {
                let dependency_path = &import.path;
                if let Some(dep) = self.query_package(dependency_path) {
                    ongoing.push(dep);
                };

                entry.push(dependency_path.clone())
            }
        }

        // validating packages with already validated dependencies in parallel
        let mut sort = TopologicalSort::new(imports);
        loop {
            let current = sort.remove_without_dependencies();
            let current: Vec<_> = current
                .iter()
                .filter_map(|path| self.query_package(path))
                .collect();
            current.par_iter().for_each(|(package, _)| {
                let mut package = package.write().unwrap();
                package.query_all();
            });

            if !current.is_empty() {
                continue;
            }
            if !sort.remaining_elements().is_empty() {
                // circular dependency: just validate all packages as good as possible, i.e. circular error should pop
                // up
                let current: Vec<_> = sort
                    .remaining_elements()
                    .iter()
                    .filter_map(|(current_path, _)| self.query_package(current_path))
                    .collect();
                current.iter().for_each(|(package, _)| {
                    let mut package = package.write().unwrap();
                    package.query_all();
                });
                break;
            }
            break;
        }
        return Some(root.0);
    }

    fn package_file_path(&self, package_path: &PackagePath) -> PathBuf {
        package_path
            .iter()
            .fold(self.base_path.clone(), |prev, item| prev.join(item))
    }

    pub fn query_package(
        &mut self,
        package_path: &PackagePath,
    ) -> Option<(
        Ptr<RwLock<PackageSemanticAnalyzer>>,
        Ptr<PackageContentSemantics>,
    )> {
        if let Some(package) = self.packages.get(package_path) {
            return Some(package.clone());
        }
        let path = self.package_file_path(package_path);
        let dir_content = self.vfs.read_dir(&path).ok()?;
        let mut files = HashMap::new();
        for file_name in dir_content {
            if !file_name.to_string_lossy().ends_with(".cz") {
                continue;
            }
            let file_path = path.join(&file_name);
            let source = self.vfs.read_file(&file_path).ok()?;
            self.file_id_counter = self.file_id_counter + 1;
            let file_context = FileContext::parse(
                self.file_id_counter,
                Ptr::new(file_path.to_string_lossy().to_string()),
                source,
            );
            files.insert(file_name, file_context);
        }
        if files.is_empty() {
            return None;
        }
        let package = self.init_package(package_path.clone(), files);
        Some(package)
    }

    fn init_package(
        &mut self,
        path: PackagePath,
        files: HashMap<OsString, Ptr<FileContext>>,
    ) -> (
        Ptr<RwLock<PackageSemanticAnalyzer>>,
        Ptr<PackageContentSemantics>,
    ) {
        let mut package = PackageSemanticAnalyzer::new(path.clone(), files);
        let package_semantics = package.query_package_content();
        let package = Ptr::new(RwLock::new(package));
        // package needs to be inserted here otherwise we run into problems if there are circular dependencies...
        self.packages
            .insert(path.clone(), (package.clone(), package_semantics.clone()));

        for import in &package_semantics.imports {
            let import_path = &import.path;

            // Make sure package is loaded
            self.packages
                .get(import_path)
                .map(|d| d.clone())
                .or_else(|| self.query_package(&import.path).to_owned());

            // add current package to usages of the dependency
            let entry = self.usages.entry(import_path.clone()).or_insert(vec![]);
            if !entry.contains(&path) {
                entry.push(path.clone());
            }
        }

        let dependencies = self.collect_all_deps(path);
        let mut pkg = package.write().unwrap();
        pkg.add_dependencies(dependencies);
        drop(pkg);

        (package, package_semantics)
    }

    fn collect_all_deps(
        &self,
        path: PackagePath,
    ) -> HashMap<PackagePath, Ptr<PackageContentSemantics>> {
        let mut out = HashMap::new();
        let mut ongoing = vec![path.clone()];

        while let Some(current) = ongoing.pop() {
            let Some(dependencies) = self.packages.get(&current) else {
                continue;
            };

            out.insert(current.clone(), dependencies.1.clone());
            for dependency in &dependencies.1.imports {
                if !out.contains_key(&dependency.path) {
                    ongoing.push(dependency.path.clone());
                }
            }
        }
        out
    }

    pub fn edit_file(&mut self, url: String, changes: Vec<FileChange>) {
        let path = PathBuf::from_str(&url).unwrap();

        let Some((package_path, file_name)) = self.package_and_file_name(&path) else {
            log::info!("File not in workspace: {:?}", path);
            return;
        };
        let Some((package, _)) = self.query_package(&package_path) else {
            log::info!("Not a package: {:?}", path);
            return;
        };

        let package = package.write().unwrap();
        let mut package_files = package.files.clone();
        drop(package);
        let Some(file) = package_files.get(&file_name) else {
            log::info!("File {:?} not part of the package: {:?}", file_name, path);
            return;
        };
        let file = update_file(file, changes);
        package_files.insert(file_name, file);

        // Remove and invalidate the current package before clearing the usages otherwise we might indirectly init the
        // current package twice
        self.packages.remove(&package_path);
        self.init_package(package_path.clone(), package_files);

        self.invalidate_usages(&package_path);
    }

    /// Invalidate a package recursively and all packages that depend on it
    fn invalidate_usages(&mut self, package: &PackagePath) {
        let Some(usages) = self.usages.remove(package) else {
            return;
        };
        for usage in usages.clone() {
            let Some((pkg, _)) = self.packages.remove(&usage) else {
                continue;
            };
            let pkg = pkg.write().unwrap();
            let pkg_files = pkg.files.clone();
            let pkg_path = pkg.path.clone();
            self.init_package(pkg_path, pkg_files);
        }
    }

    pub fn query_usage(
        &self,
        package: &mut PackageSemanticAnalyzer,
        node_id: NodeId,
    ) -> Vec<NodeData> {
        let mut results = package.query_usage(node_id);

        if let Some(usages) = self.usages.get(&package.path) {
            for usage in usages {
                let Some((package, _)) = self.packages.get(usage) else {
                    continue;
                };
                let mut package = package.write().unwrap();
                let mut package_usages = package.query_usage(node_id);
                results.append(&mut package_usages);
            }
        }

        results
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
