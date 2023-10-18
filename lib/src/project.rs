use std::collections::HashMap;

use tree_sitter::{InputEdit, Point};

use crate::{
    ast::{FileContext, LangError, SourceSpan},
    semantics::FileSemanticAnalyzer,
    tree_sitter::parse,
    types::Ptr,
};

pub struct ProjectFile {
    pub parse_errors: Vec<LangError>,
    pub file: Ptr<FileContext>,
    pub file_analyzer: FileSemanticAnalyzer,
}

#[derive(Debug)]
pub struct FileChange {
    pub range: Option<SourceSpan>,
    pub text: String,
}

impl ProjectFile {
    fn new(file_id: usize, path: String, source: String) -> Self {
        let mut parse_errors = Vec::new();
        let file = FileContext::parse(file_id, path, source, &mut parse_errors);

        let project_file = ProjectFile {
            file: file.clone(),
            parse_errors,
            file_analyzer: FileSemanticAnalyzer::new(vec![file]),
        };

        project_file
    }

    pub fn edit_file(&mut self, url: String, changes: Vec<FileChange>) {
        let mut tree = self.file.tree.clone();
        // Note: avoid cloning the whole file?
        let mut source = self.file.source.clone();
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

        self.parse_errors.clear();
        self.file = FileContext::parse_from_existing_tree(
            self.file.file_id,
            url,
            source,
            &tree,
            &mut self.parse_errors,
        );

        self.file_analyzer = FileSemanticAnalyzer::new(vec![self.file.clone()])
    }
}

pub struct Project {
    pub file_id_counter: usize,
    pub open_files: HashMap<String, ProjectFile>,
}

impl Project {
    pub fn open_file(&mut self, url: String, source: String) {
        self.file_id_counter = self.file_id_counter + 1;
        self.open_files.insert(
            url.clone(),
            ProjectFile::new(self.file_id_counter, url, source),
        );
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
        file.file_analyzer.query_all();
    }
}
