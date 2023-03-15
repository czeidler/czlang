use std::path::Path;

use rust_transpiler::transpile_project;

pub mod ast;
mod buildin;
mod rust_transpiler;
pub mod semantics;
mod sum_type;
mod tree_sitter;
mod types;

#[cfg(test)]
pub mod test_utils;

fn main() {
    transpile_project(&Path::new("./test_project")).unwrap();
}
