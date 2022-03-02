use std::path::Path;

use rust_transpiler::transpile_project;

mod ast;
mod rust_transpiler;
mod tree_sitter;
mod validation;

fn main() {
    transpile_project(&Path::new("./test_project")).unwrap();
}
