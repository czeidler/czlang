use std::collections::HashMap;

use tree_sitter::{InputEdit, Point, Tree};

use crate::{
    ast::{File, FileContext, LangError, SourceSpan},
    tree_sitter::parse,
    types::PtrMut,
    validation::validate,
};

pub struct ProjectFile {
    pub source: String,
    pub tree: Tree,
    pub file: PtrMut<File>,
    pub errors: Vec<LangError>,
}

pub struct FileChange {
    pub range: Option<SourceSpan>,
    pub text: String,
}

impl ProjectFile {
    fn new(path: String, source: String) -> Self {
        let tree = parse(&source, None);
        let mut file_context = FileContext::new(tree.root_node(), path, &source);
        let file = file_context.parse_file();
        let errors = file_context.errors;

        let project_file = ProjectFile {
            source,
            tree,
            file,
            errors,
        };

        project_file
    }

    pub fn edit_file(&mut self, url: String, changes: Vec<FileChange>) {
        for change in changes {
            let Some(range) = change.range else {
                self.tree = parse(&change.text, None);
                continue;
            };
            let mut change_lines: i32 = 0;
            let mut change_end_column = 0;
            for line in change.text.lines() {
                change_lines += 1;
                change_end_column = line.len();
            }

            let (start, end) = range.to_byte_range(&self.source);
            self.tree.edit(&InputEdit {
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
                    column: change_end_column,
                },
            });
            let char_range = range.to_char_range(&self.source);
            self.source
                .replace_range(char_range.0..char_range.1, &change.text);
        }

        self.tree = parse(&self.source, Some(&self.tree));

        let mut file_context = FileContext::new(self.tree.root_node(), url, &self.source);
        self.file = file_context.parse_file();
        self.errors = file_context.errors;
    }
}

pub struct Project {
    pub open_files: HashMap<String, ProjectFile>,
}

impl Project {
    pub fn open_file(&mut self, url: String, source: String) {
        self.open_files
            .insert(url.clone(), ProjectFile::new(url, source));
    }

    pub fn close_file(&mut self, url: &String) {
        self.open_files.remove(url);
    }

    pub fn edit_all(&mut self, url: String, source: String) {
        self.open_file(url, source)
    }

    pub fn edit_file(&mut self, url: String, changes: Vec<FileChange>) {
        let Some(entry) = self.open_files.get_mut(&url) else {return;};
        entry.edit_file(url, changes);
    }

    pub fn validate_file(&mut self, url: &String) {
        let Some(file) = self.open_files.get_mut(url) else {return;};
        validate(&file.file, &mut file.errors);
    }
}
