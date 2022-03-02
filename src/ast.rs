use std::ops::Add;

use tree_sitter::Node;

#[derive(Debug)]
pub struct SourcePosition {
    pub row: usize,
    pub column: usize,
}

#[derive(Debug)]
pub struct ASTError {
    msg: String,
    start: SourcePosition,
    end: SourcePosition,
}

impl ASTError {
    fn from_node(node: &Node, msg: &str) -> Self {
        let start = node.start_position();
        let end = node.end_position();
        ASTError {
            msg: msg.to_string(),
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

pub fn parse_file(node: Node, source: &str) -> Package {
    let mut errors: Vec<ASTError> = Vec::new();
    collect_errors(node.clone(), &mut errors);

    let mut functions = Vec::<Function>::new();
    let mut cursor = node.walk();
    for child in node.children(&mut cursor) {
        match child.kind() {
            "function_definition" => {
                if let Some(fun) = parse_function(&child, source, &mut errors) {
                    functions.push(fun);
                }
            }
            _ => {}
        };
    }
    Package { functions, errors }
}

fn parse_var_declaration(
    node: &Node,
    source: &str,
    errors: &mut Vec<ASTError>,
) -> Option<VarDeclaration> {
    let var = child_by_field(node, "variable", errors)?;
    let name = child_by_field(node, "name", errors)?;
    let var_type = match node.child_by_field_name("type") {
        Some(var_type) => Some(node_text(&var_type, source, errors)?),
        None => None,
    };
    let value_node = child_by_field(node, "value", errors)?;
    let value = parse_expression(&value_node, source, errors)?;
    Some(VarDeclaration {
        name: node_text(&name, source, errors)?,
        mutable: node_text(&var, source, errors)? == "mut",
        var_type,
        value,
    })
}

fn parse_type(node: &Node, source: &str, errors: &mut Vec<ASTError>) -> Option<Type> {
    let type_text = node_text(&node, source, errors)?;
    let t = match type_text.as_str() {
        "string" => Type::String,
        "bool" => Type::Bool,
        "i32" => Type::I32,
        "u32" => Type::U32,
        _ => Type::Identifier(type_text),
    };
    Some(t)
}

fn parse_parameter(node: &Node, source: &str, errors: &mut Vec<ASTError>) -> Option<Parameter> {
    let name = child(node, "parameter name", 0, errors)?;
    let _type = child(node, "parameter type", 1, errors)?;

    Some(Parameter {
        name: node_text(&name, source, errors)?,
        _type: parse_type(&_type, source, errors)?,
    })
}

fn parse_parameters(
    node: &Node,
    source: &str,
    errors: &mut Vec<ASTError>,
) -> Option<Vec<Parameter>> {
    let mut parameters = Vec::new();
    let mut cursor = node.walk();
    for child in node.children(&mut cursor) {
        if child.kind() != "parameter" {
            continue;
        }
        match parse_parameter(&child, source, errors) {
            Some(parameter) => parameters.push(parameter),
            None => return None,
        }
    }
    Some(parameters)
}

fn parse_block(node: &Node, source: &str, errors: &mut Vec<ASTError>) -> Option<Block> {
    let mut statements: Vec<Statement> = Vec::new();
    for index in 1..node.child_count() - 1 {
        let statement_node = child(node, "statement", index, errors)?;
        match statement_node.kind() {
            "function_call" => {
                let statement = parse_function_call(&statement_node, source, errors)?;
                statements.push(Statement::FunctionCall(statement));
            }

            "var_declaration" => {
                let statement = parse_var_declaration(&statement_node, source, errors)?;
                statements.push(Statement::VarDeclaration(statement));
            }
            _ => {}
        }
    }
    Some(Block { statements })
}

fn parse_expression(node: &Node, source: &str, errors: &mut Vec<ASTError>) -> Option<Expression> {
    let expression = match node.kind() {
        "identifier" => Expression::Identifier(node_text(&node, source, errors)?),
        "interpreted_string_literal" => {
            let string = node_text(&node, source, errors)?;
            Expression::String(string.as_str()[1..string.len() - 1].to_string())
        }
        "null" => Expression::Null,
        "true" => Expression::Bool(true),
        "false" => Expression::Bool(false),
        _ => {
            errors.push(ASTError::from_node(
                node,
                &format!("Unknown expression kind: {}", node.kind()),
            ));
            return None;
        }
    };
    Some(expression)
}

fn parse_function_call_arguments(
    node: &Node,
    source: &str,
    errors: &mut Vec<ASTError>,
) -> Option<Vec<Expression>> {
    let mut arguments = Vec::new();
    let mut cursor = node.walk();
    for argument_node in node.children_by_field_name("argument", &mut cursor) {
        arguments.push(parse_expression(&argument_node, source, errors)?);
    }

    Some(arguments)
}

fn parse_function_call(
    node: &Node,
    source: &str,
    errors: &mut Vec<ASTError>,
) -> Option<FunctionCall> {
    let name = child(node, "function name", 0, errors)?;
    let arguments_list = child(node, "arguments", 1, errors)?;
    let arguments = parse_function_call_arguments(&arguments_list, source, errors)?;

    Some(FunctionCall {
        name: node_text(&name, source, errors)?,
        arguments,
    })
}

fn parse_function(node: &Node, source: &str, errors: &mut Vec<ASTError>) -> Option<Function> {
    let name = child(node, "function name", 1, errors)?;
    let parameter_list = child(node, "parameters", 2, errors)?;
    let return_type = child(node, "return type", 3, errors)?;

    let body = parse_block(&child(node, "function body", 4, errors)?, source, errors)?;

    Some(Function {
        name: node_text(&name, source, errors)?,
        parameters: parse_parameters(&parameter_list, source, errors)?,
        return_type: node_text(&return_type, source, errors)?,
        body,
    })
}

fn error_to_string(err: &Node) -> String {
    let mut cursor = err.walk();
    let mut out = "".to_string();
    for child in err.children(&mut cursor) {
        out = out.add(&child.to_sexp());
    }

    out
}

fn node_text(node: &Node, source: &str, errors: &mut Vec<ASTError>) -> Option<String> {
    let text = node
        .utf8_text(source.as_bytes())
        .map_err(|err| {
            errors.push(ASTError::from_node(node, &format!("{}", err)));
            err
        })
        .ok()?
        .trim()
        .to_string();
    Some(text)
}

fn child<'a>(
    node: &'a Node,
    name: &str,
    index: usize,
    errors: &mut Vec<ASTError>,
) -> Option<Node<'a>> {
    let child = match node.child(index) {
        Some(node) => node,
        None => {
            errors.push(ASTError::from_node(&node, &format!("{} expected", name)));
            return None;
        }
    };

    Some(child)
}

fn child_by_field<'a>(node: &'a Node, field: &str, errors: &mut Vec<ASTError>) -> Option<Node<'a>> {
    let child = node.child_by_field_name(field.as_bytes());
    if child.is_none() {
        errors.push(ASTError::from_node(
            &node,
            &format!("{} field expected in parser tree", field),
        ));
    }
    child
}

fn collect_errors(node: Node, errors: &mut Vec<ASTError>) {
    if !node.has_error() {
        return;
    }

    let mut queue: Vec<Node> = Vec::new();
    queue.push(node);
    while let Some(current) = queue.pop() {
        let mut cursor = node.walk();
        for child in current.children(&mut cursor) {
            if child.is_error() {
                errors.push(ASTError::from_node(&child, &error_to_string(&child)));
                continue;
            }
            queue.push(child);
        }
    }
}

pub fn print_err(err: &ASTError, source: &str) {
    println!("");
    let lines: Vec<&str> = source.lines().take(err.start.row + 1).collect();
    for line in lines.iter().rev().take(2).rev() {
        println!("{}", line);
    }
    for _ in 0..err.start.column {
        print!(" ");
    }
    // only show first line of error
    let error_end = if err.start.row == err.end.row {
        err.end.column
    } else {
        lines
            .last()
            .map(|it| it.len())
            .unwrap_or(err.start.column + 1)
    };
    for _ in 0..error_end - err.start.column {
        print!("^");
    }
    println!("");
    println!(
        "Error at line {}, column {}: {}",
        err.start.row, err.start.column, err.msg
    );
}
