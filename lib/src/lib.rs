use flexi_logger::{FileSpec, Logger, WriteMode};

pub mod ast;
mod buildin;
pub mod rust_transpiler;
mod tree_sitter;
pub mod types;

pub mod project;
pub mod query;
pub mod semantics;

#[cfg(test)]
mod test_utils;

#[cfg(test)]
mod tests;

pub fn init() {
    let _logger = Logger::try_with_str("info, my::critical::module=trace")
        .unwrap()
        .log_to_file(FileSpec::default().suppress_timestamp())
        .write_mode(WriteMode::Direct)
        .start()
        .unwrap();
    log_panics::init()
}
