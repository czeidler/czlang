use std::path::Path;

use rust_transpiler::transpile_project;

mod ast;
mod buildin;
mod rust_transpiler;
mod tree_sitter;
mod validation;

#[cfg(test)]
mod test_utils;

fn main() {
    transpile_project(&Path::new("./test_project")).unwrap();
}
