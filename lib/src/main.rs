use std::path::Path;

use rust_transpiler::transpile_project;

mod ast;
mod buildin;
mod rust_transpiler;
mod tree_sitter;
mod types;
mod validation;

#[cfg(test)]
pub mod test_utils;

fn main() {
    transpile_project(&Path::new("./test_project")).unwrap();
}
