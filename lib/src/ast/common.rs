use tree_sitter::{Node, Tree};

use crate::{tree_sitter::parse, types::Ptr};

#[derive(Debug, Clone, Copy, Eq, PartialEq, PartialOrd, Ord, Hash)]
pub struct SourcePosition {
    pub row: usize,
    pub column: usize,
}

impl SourcePosition {
    pub fn new(row: usize, column: usize) -> Self {
        SourcePosition { row, column }
    }

    pub fn to_byte_position(&self, source: &str) -> usize {
        source
            .split_terminator('\n')
            .take(self.row + 1)
            .enumerate()
            .fold(0, |acc, (row, line)| {
                if row < self.row {
                    acc + line.as_bytes().len() + 1
                } else {
                    acc + line
                        .char_indices()
                        .nth(self.column)
                        .map(|(byte_index, _)| byte_index)
                        .unwrap_or(line.len())
                }
            })
    }
}

#[derive(Debug, Clone, Eq, PartialEq, Hash, PartialOrd, Ord)]
pub struct SourceSpan {
    pub start: SourcePosition,
    pub end: SourcePosition,
}

impl SourceSpan {
    pub fn from_node(node: &Node) -> Self {
        let start = node.start_position();
        let end = node.end_position();
        SourceSpan {
            start: SourcePosition {
                row: start.row,
                column: start.column,
            },
            end: SourcePosition {
                row: end.row,
                column: end.column,
            },
        }
    }

    pub fn contains(&self, position: SourcePosition) -> bool {
        if self.start.row > position.row || self.end.row < position.row {
            return false;
        }
        if self.start.row == position.row && self.start.column > position.column {
            return false;
        }
        if self.end.row == position.row && self.end.column < position.column {
            return false;
        }
        return true;
    }

    pub fn to_byte_range(&self, source: &str) -> (usize, usize) {
        (
            self.start.to_byte_position(source),
            self.end.to_byte_position(source),
        )
    }

    pub fn to_char_range(&self, source: &str) -> (usize, usize) {
        let mut start_char = 0;
        let mut end_char = 0;
        let mut found_start = false;
        let mut found_end = false;
        for (index, line) in source.split_terminator('\n').enumerate() {
            if self.start.row > index {
                start_char += line.len() + 1;
                end_char += line.len() + 1;
                continue;
            }
            if !found_start && self.start.row == index {
                start_char += self.start.column;
                found_start = true;
            }

            if self.end.row > index {
                end_char += line.len() + 1;
                continue;
            }
            if !found_end && self.end.row == index {
                end_char += self.end.column;
                found_end = true;
            }
            if found_start && found_end {
                break;
            }
        }
        (start_char, end_char)
    }
}

#[derive(Debug, Clone)]
pub enum LangErrorKind {
    SyntaxError,
    TypeError,
}

#[derive(Debug, Clone)]
pub struct LangError {
    pub kind: LangErrorKind,
    pub node: NodeData,
    pub msg: String,
}

impl LangError {
    pub fn syntax_err(file_id: usize, node: &Node, msg: &str) -> Self {
        LangError {
            kind: LangErrorKind::SyntaxError,
            node: NodeData::from_node(node, file_id),
            msg: msg.to_string(),
        }
    }

    pub fn type_error(node: &NodeData, msg: String) -> Self {
        LangError {
            kind: LangErrorKind::TypeError,
            node: node.clone(),
            msg,
        }
    }
}

pub type NodeId = (usize, usize);

#[derive(Debug, Clone, Eq, PartialEq, Hash, PartialOrd, Ord)]
pub struct NodeData {
    pub id: usize,
    pub file_id: usize,
    pub parent: usize,
    pub span: SourceSpan,
}

impl NodeData {
    pub fn from_node(&node: &Node, file_id: usize) -> Self {
        NodeData {
            id: node.id(),
            file_id,
            parent: node.parent().map(|n| n.id()).unwrap_or(0),
            span: SourceSpan::from_node(&node),
        }
    }

    pub fn id(&self) -> NodeId {
        (self.id, self.file_id)
    }

    pub fn contains(&self, position: SourcePosition) -> bool {
        return self.span.contains(position);
    }
}

#[derive(Debug, Clone)]
pub struct FileContext {
    pub file_id: usize,
    pub tree: Tree,
    pub file_path: String,
    pub source: String,
    pub parse_errors: Vec<LangError>,
}

impl FileContext {
    pub fn node_data(&self, node: &Node) -> NodeData {
        NodeData::from_node(node, self.file_id)
    }

    pub fn parse(file_id: usize, file_path: String, source: String) -> Ptr<Self> {
        let tree = parse(&source, None);
        let mut parse_errors = Vec::new();
        collect_errors(file_id, tree.root_node(), &source, &mut parse_errors);
        Ptr::new(FileContext {
            file_id,
            tree,
            file_path,
            source,
            parse_errors,
        })
    }

    pub fn parse_from_existing_tree(
        file_id: usize,
        file_path: String,
        source: String,
        old_tree: &Tree,
    ) -> Ptr<Self> {
        let tree = parse(&source, Some(old_tree));
        let mut parse_errors = Vec::new();
        collect_errors(file_id, tree.root_node(), &source, &mut parse_errors);
        Ptr::new(FileContext {
            file_id,
            tree,
            file_path,
            source,
            parse_errors,
        })
    }
}

pub(crate) fn error_to_string(err: &Node, source: &str) -> String {
    let mut cursor = err.walk();
    let mut children = "".to_string();
    for child in err.children(&mut cursor) {
        children = format!("{}\nchild: {}", children, &child.to_sexp());
    }

    let error_type = if err.is_missing() { "Missing" } else { "Error" };

    let text = err
        .utf8_text(source.as_bytes())
        .unwrap_or("")
        .trim()
        .to_string();

    format!(
        "{}: text: {}, err: {}, children: {}",
        error_type,
        text,
        &err.to_sexp(),
        children
    )
}

pub(crate) fn node_text<'a>(node: &Node, context: &Ptr<FileContext>) -> Option<String> {
    let text = node
        .utf8_text(context.source.as_bytes())
        .map_err(|err| {
            log::error!("{}", err);
        })
        .ok()?
        .trim()
        .to_string();
    Some(text)
}

pub(crate) fn child<'a>(node: &Node<'a>, name: &str, index: usize) -> Option<Node<'a>> {
    match node.child(index) {
        Some(node) => Some(node),
        None => {
            log::error!("{} expected", name);
            return None;
        }
    }
}

pub(crate) fn child_by_field<'a>(node: &Node<'a>, field: &str) -> Option<Node<'a>> {
    match node.child_by_field_name(field.as_bytes()) {
        Some(node) => Some(node),
        None => {
            log::error!("{} field expected in parser tree", field);
            None
        }
    }
}

pub(crate) fn parse_usize(context: &Ptr<FileContext>, node: &Node) -> Option<usize> {
    let string = node_text(&node, context)?;
    string
        .parse::<usize>()
        .map_err(|err| {
            log::error!("Failed to parse integer: {}", err);
            err
        })
        .ok()
}

pub fn collect_errors(file_id: usize, node: Node, source: &str, errors: &mut Vec<LangError>) {
    if !node.has_error() && !node.is_missing() {
        return;
    }

    let mut queue: Vec<Node> = Vec::new();
    queue.push(node);
    while let Some(current) = queue.pop() {
        if current.is_error() || current.is_missing() {
            errors.push(LangError::syntax_err(
                file_id,
                &current,
                &error_to_string(&current, source),
            ));
            continue;
        }

        let mut cursor = node.walk();
        for child in current.children(&mut cursor) {
            queue.push(child);
        }
    }
}

pub fn print_err(err: &LangError, source: &str) {
    let start = &err.node.span.start;
    let end = &err.node.span.end;

    println!("");
    let lines: Vec<&str> = source.lines().take(start.row + 1).collect();
    for line in lines.iter().rev().take(2).rev() {
        println!("{}", line);
    }
    for _ in 0..start.column {
        print!(" ");
    }
    // only show first line of error
    let error_end = if start.row == end.row {
        end.column
    } else {
        lines.last().map(|it| it.len()).unwrap_or(start.column + 1)
    };
    for _ in 0..error_end - start.column {
        print!("^");
    }
    println!("");
    println!(
        "Error at line {}, column {}: {}",
        start.row, start.column, err.msg
    );
}
