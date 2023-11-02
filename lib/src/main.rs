use std::{path::PathBuf, str::FromStr};

use rust_transpiler::transpile_project;

pub mod ast;
mod buildin;
pub mod project;
mod rust_transpiler;
pub mod semantics;
mod tree_sitter;
mod types;

#[cfg(test)]
pub mod test_utils;

fn main() {
    transpile_project(&PathBuf::from_str("./test_project").unwrap()).unwrap();
}
