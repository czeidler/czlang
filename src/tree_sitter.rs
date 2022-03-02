use tree_sitter::{Language, Tree};

extern "C" {
    fn tree_sitter_czlang() -> Language;
}

/// Get the tree-sitter [Language][] for this grammar.
///
/// [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
pub fn language() -> Language {
    unsafe { tree_sitter_czlang() }
}

pub fn parse(source_code: &str) -> Tree {
    let mut parser = tree_sitter::Parser::new();
    parser
        .set_language(language())
        .expect("Error loading czlang language");
    let tree = parser.parse(&source_code, None).unwrap();
    tree
}

#[cfg(test)]
mod tests {
    use crate::{
        ast::{parse_file, print_err},
        tree_sitter::parse,
    };

    #[test]
    fn test_can_load_grammar() {
        let source_code = "fun test(test bool, dsf bool) bool { println(\"Hello world\") }";
        let tree = parse(source_code);
        let root_node = tree.root_node();
        println!("Tree sitter {}", root_node.to_sexp());

        let result = parse_file(root_node, source_code);
        println!("AST: {:?}", result);
        for error in &result.errors {
            print_err(&error, &source_code);
        }
    }
}
