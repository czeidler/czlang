use std::ops::Add;

use tree_sitter::Node;

#[derive(Debug)]
pub struct SourcePosition {
    pub row: usize,
    pub column: usize,
}

#[derive(Debug)]
pub struct SourceSpan {
    pub start: SourcePosition,
    pub end: SourcePosition,
}

impl SourceSpan {
    fn from_node(node: &Node) -> Self {
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
}

#[derive(Debug)]
pub struct ASTError {
    msg: String,
    /// file path
    file_path: String,
    span: SourceSpan,
}

impl ASTError {
    fn from_node(node: &Node, file_path: &str, msg: &str) -> Self {
        ASTError {
            msg: msg.to_string(),
            file_path: file_path.to_string(),
            span: SourceSpan::from_node(node),
        }
    }
}

#[derive(Debug)]
pub struct Parameter {
    pub name: String,
    pub _type: Type,
}

#[derive(Debug)]
pub enum Type {
    String,
    Bool,
    I32,
    U32,
    Identifier(String),
}

#[derive(Debug)]
pub enum Statement {
    FunctionCall(FunctionCall),
    VarDeclaration(VarDeclaration),
}

#[derive(Debug)]
pub struct VarDeclaration {
    pub name: String,
    pub mutable: bool,
    pub var_type: Option<String>,
    pub value: Expression,
}

#[derive(Debug)]
pub struct Block {
    pub statements: Vec<Statement>,
}

#[derive(Debug)]
pub struct Function {
    pub name: String,
    pub parameters: Vec<Parameter>,
    pub return_type: String,
    pub body: Block,
}

#[derive(Debug)]
pub struct FunctionCall {
    pub name: String,
    pub arguments: Vec<Expression>,
}

#[derive(Debug)]
pub struct Package {
    pub functions: Vec<Function>,
    pub errors: Vec<ASTError>,
}

#[derive(Debug)]
pub enum Expression {
    String(String),
    Identifier(String),
    Null,
    Bool(bool),
}

pub struct ASTParser<'a> {
    pub file_path: &'a str,
    pub source: &'a str,
    pub errors: Vec<ASTError>,
}

impl<'a> ASTParser<'a> {
    pub fn new(file_path: &'a str, source: &'a str) -> Self {
        ASTParser {
            file_path,
            source,
            errors: Vec::new(),
        }
    }

    pub fn parse_file(mut self, node: Node) -> Package {
        collect_errors(node.clone(), self.file_path, &mut self.errors);

        let mut functions = Vec::<Function>::new();
        let mut cursor = node.walk();
        for child in node.children(&mut cursor) {
            match child.kind() {
                "function_definition" => {
                    if let Some(fun) = self.parse_function(&child) {
                        functions.push(fun);
                    }
                }
                _ => {}
            };
        }
        Package {
            functions,
            errors: self.errors,
        }
    }

    fn parse_function(&mut self, node: &Node) -> Option<Function> {
        let name = child(node, "function name", 1, self)?;
        let parameter_list = child(node, "parameters", 2, self)?;
        let return_type = child(node, "return type", 3, self)?;
        let body_node = child(node, "function body", 4, self)?;
        let body = self.parse_block(&body_node)?;

        Some(Function {
            name: node_text(&name, self)?,
            parameters: self.parse_parameters(&parameter_list)?,
            return_type: node_text(&return_type, self)?,
            body,
        })
    }

    fn parse_block(&mut self, node: &Node) -> Option<Block> {
        let mut statements: Vec<Statement> = Vec::new();
        for index in 1..node.child_count() - 1 {
            let statement_node = child(node, "statement", index, self)?;
            match statement_node.kind() {
                "function_call" => {
                    let statement = self.parse_function_call(&statement_node)?;
                    statements.push(Statement::FunctionCall(statement));
                }

                "var_declaration" => {
                    let statement = self.parse_var_declaration(&statement_node)?;
                    statements.push(Statement::VarDeclaration(statement));
                }
                _ => {}
            }
        }
        Some(Block { statements })
    }

    fn parse_parameter(&mut self, node: &Node) -> Option<Parameter> {
        let name = child(node, "parameter name", 0, self)?;
        let _type = child(node, "parameter type", 1, self)?;

        Some(Parameter {
            name: node_text(&name, self)?,
            _type: self.parse_type(&_type)?,
        })
    }

    fn parse_parameters(&mut self, node: &Node) -> Option<Vec<Parameter>> {
        let mut parameters = Vec::new();
        let mut cursor = node.walk();
        for child in node.children(&mut cursor) {
            if child.kind() != "parameter" {
                continue;
            }
            match self.parse_parameter(&child) {
                Some(parameter) => parameters.push(parameter),
                None => return None,
            }
        }
        Some(parameters)
    }

    fn parse_function_call(&mut self, node: &Node) -> Option<FunctionCall> {
        let name = child(node, "function name", 0, self)?;
        let arguments_list = child(node, "arguments", 1, self)?;
        let arguments = self.parse_function_call_arguments(&arguments_list)?;

        Some(FunctionCall {
            name: node_text(&name, self)?,
            arguments,
        })
    }

    fn parse_function_call_arguments(&mut self, node: &Node) -> Option<Vec<Expression>> {
        let mut arguments = Vec::new();
        let mut cursor = node.walk();
        for argument_node in node.children_by_field_name("argument", &mut cursor) {
            arguments.push(self.parse_expression(&argument_node)?);
        }

        Some(arguments)
    }

    fn parse_expression(&mut self, node: &Node) -> Option<Expression> {
        let expression = match node.kind() {
            "identifier" => Expression::Identifier(node_text(&node, self)?),
            "interpreted_string_literal" => {
                let string = node_text(&node, self)?;
                Expression::String(string.as_str()[1..string.len() - 1].to_string())
            }
            "null" => Expression::Null,
            "true" => Expression::Bool(true),
            "false" => Expression::Bool(false),
            _ => {
                self.errors.push(ASTError::from_node(
                    node,
                    self.file_path,
                    &format!("Unknown expression kind: {}", node.kind()),
                ));
                return None;
            }
        };
        Some(expression)
    }

    fn parse_var_declaration(&mut self, node: &Node) -> Option<VarDeclaration> {
        let var = child_by_field(node, "variable", self)?;
        let name = child_by_field(node, "name", self)?;
        let var_type = match node.child_by_field_name("type") {
            Some(var_type) => Some(node_text(&var_type, self)?),
            None => None,
        };
        let value_node = child_by_field(node, "value", self)?;
        let value = self.parse_expression(&value_node)?;
        Some(VarDeclaration {
            name: node_text(&name, self)?,
            mutable: node_text(&var, self)? == "mut",
            var_type,
            value,
        })
    }

    fn parse_type(&mut self, node: &Node) -> Option<Type> {
        let type_text = node_text(&node, self)?;
        let t = match type_text.as_str() {
            "string" => Type::String,
            "bool" => Type::Bool,
            "i32" => Type::I32,
            "u32" => Type::U32,
            _ => Type::Identifier(type_text),
        };
        Some(t)
    }
}

fn error_to_string(err: &Node) -> String {
    let mut cursor = err.walk();
    let mut out = "".to_string();
    for child in err.children(&mut cursor) {
        out = out.add(&child.to_sexp());
    }

    out
}

fn node_text(node: &Node, parser: &mut ASTParser) -> Option<String> {
    let text = node
        .utf8_text(parser.source.as_bytes())
        .map_err(|err| {
            parser.errors.push(ASTError::from_node(
                node,
                parser.file_path,
                &format!("{}", err),
            ));
            err
        })
        .ok()?
        .trim()
        .to_string();
    Some(text)
}

fn child<'a>(node: &'a Node, name: &str, index: usize, parser: &mut ASTParser) -> Option<Node<'a>> {
    let child = match node.child(index) {
        Some(node) => node,
        None => {
            parser.errors.push(ASTError::from_node(
                &node,
                parser.file_path,
                &format!("{} expected", name),
            ));
            return None;
        }
    };

    Some(child)
}

fn child_by_field<'a>(node: &'a Node, field: &str, parser: &mut ASTParser) -> Option<Node<'a>> {
    let child = node.child_by_field_name(field.as_bytes());
    if child.is_none() {
        parser.errors.push(ASTError::from_node(
            &node,
            parser.file_path,
            &format!("{} field expected in parser tree", field),
        ));
    }
    child
}

fn collect_errors(node: Node, file_path: &str, errors: &mut Vec<ASTError>) {
    if !node.has_error() {
        return;
    }

    let mut queue: Vec<Node> = Vec::new();
    queue.push(node);
    while let Some(current) = queue.pop() {
        let mut cursor = node.walk();
        for child in current.children(&mut cursor) {
            if child.is_error() {
                errors.push(ASTError::from_node(
                    &child,
                    file_path,
                    &error_to_string(&child),
                ));
                continue;
            }
            queue.push(child);
        }
    }
}

pub fn print_err(err: &ASTError, file_path: &str, source: &str) {
    let start = &err.span.start;
    let end = &err.span.end;

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
        "Error in {} line {}, column {}: {}",
        file_path, start.row, start.column, err.msg
    );
}
