use tree_sitter::{Language, Node, Point, Tree};

extern "C" {
    fn tree_sitter_czlang() -> Language;
}

/// Get the tree-sitter [Language][] for this grammar.
///
/// [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
pub fn language() -> Language {
    unsafe { tree_sitter_czlang() }
}

pub fn parse(source_code: &str, old_tree: Option<&Tree>) -> Tree {
    let mut parser = tree_sitter::Parser::new();
    parser
        .set_language(language())
        .expect("Error loading czlang language");
    let tree = parser.parse(&source_code, old_tree).unwrap();
    tree
}

pub fn find_node(tree: &Tree, id: usize, row: usize, column: usize) -> Option<Node> {
    let mut cursor = tree.walk();
    let node_position = Point { row, column };
    loop {
        let child_index = cursor.goto_first_child_for_point(node_position.clone());
        if child_index.is_none() {
            return None;
        };
        let node = cursor.node();
        if node.id() == id {
            return Some(node);
        }
    }
}

#[cfg(test)]
mod tests {
    use crate::tree_sitter::{find_node, parse};

    #[test]
    fn test_can_load_grammar() {
        let source_code =
            "fun test(test bool, dsf bool) bool { println(\"Hello world\") }".to_string();
        let tree = parse(&source_code, None);
        let root_node = tree.root_node();
        println!("Tree sitter {}", root_node.to_sexp());
    }

    #[test]
    fn test_find_node() {
        let source_code = "
            fun test(test bool) bool {
                if test {

                }
            }
            "
        .to_string();
        let tree = parse(&source_code, None);
        let root = tree.root_node();
        let fun = root.child(0).unwrap();
        assert_eq!(fun.kind(), "function_definition");
        let body_node = fun.child_by_field_name("body").unwrap();
        let expression_statement = body_node.child(1).unwrap();
        let if_expression = expression_statement
            .child_by_field_name("expression")
            .unwrap();
        assert_eq!(if_expression.kind(), "if_expression");
        let if_block = if_expression.child_by_field_name("consequence").unwrap();

        let found = find_node(
            &tree,
            if_block.id(),
            if_block.start_position().row,
            if_block.start_position().column,
        )
        .unwrap();
        assert_eq!(found.id(), if_block.id());

        let found = find_node(
            &tree,
            fun.id(),
            fun.start_position().row,
            fun.start_position().column,
        )
        .unwrap();
        assert_eq!(found.id(), fun.id());
    }
}
