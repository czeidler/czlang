use std::{
    collections::HashMap,
    rc::{self, Rc},
};

use tree_sitter::Node;

#[derive(Debug, Clone)]
pub struct SourcePosition {
    pub row: usize,
    pub column: usize,
}

#[derive(Debug, Clone)]
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

#[derive(Debug, Clone)]
pub struct ASTError {
    id: usize,
    msg: String,
    /// file path
    file_path: String,
    span: SourceSpan,
}

impl ASTError {
    fn from_node(node: &Node, file_path: &str, msg: &str) -> Self {
        ASTError {
            id: node.id(),
            msg: msg.to_string(),
            file_path: file_path.to_string(),
            span: SourceSpan::from_node(node),
        }
    }
}

#[derive(Debug, Clone)]
pub struct NodeData {
    pub id: usize,
    pub parent: usize,
}

#[derive(Debug, Clone)]
pub struct File {
    pub functions: HashMap<String, rc::Rc<Function>>,
    pub struct_defs: HashMap<String, rc::Rc<Struct>>,
}

#[derive(Debug, Clone)]
pub struct Struct {
    pub node: NodeData,

    pub name: String,
    pub fields: Vec<Field>,
}

#[derive(Debug, Clone)]
pub struct Field {
    pub node: NodeData,

    pub name: String,
    pub is_reference: bool,
    pub types: Vec<RefType>,
}

#[derive(Debug, Clone)]
pub struct Function {
    pub node: NodeData,

    pub name: String,
    pub parameters: Vec<Parameter>,
    pub return_types: Option<Vec<RefType>>,
    pub body: Rc<Block>,
}

#[derive(Debug, Clone)]
pub struct Block {
    pub node: NodeData,

    pub statements: Vec<Statement>,
}

#[derive(Debug, Clone)]
pub enum StringTemplatePart {
    Expression(Expression),
    String(String),
}

pub type StringTemplate = Vec<StringTemplatePart>;

#[derive(Debug, Clone)]
pub struct Parameter {
    pub id: usize,
    pub name: String,
    pub is_mutable: bool,
    pub is_reference: bool,
    pub types: Vec<RefType>,

    pub origin: Option<SourceSpan>,
}

#[derive(Debug, Clone, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub enum Type {
    Null,
    Str,
    String,
    Bool,
    U8,
    I8,
    U32,
    I32,
    Number(Number),
    Identifier(String),
    Array(Array),
    Slice(Slice),
}

/// Not yet specified number type
#[derive(Debug, Clone, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub struct Number {
    /// Narrowed down to:
    pub types: Vec<Type>,
}

#[derive(Debug, Clone, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub struct RefType {
    pub is_reference: bool,
    pub r#type: Type,
}

#[derive(Debug, Clone, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub struct Array {
    pub types: Rc<Vec<RefType>>,
    pub length: usize,
}

#[derive(Debug, Clone, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub struct Slice {
    pub types: Rc<Vec<RefType>>,
}

#[derive(Debug, Clone)]
pub struct ArrayExpression {
    pub expressions: Vec<Expression>,
}

#[derive(Debug, Clone)]
pub struct SliceExpression {
    pub operand: Rc<Expression>,
    pub start: Option<usize>,
    pub end: Option<usize>,
}

#[derive(Debug, Clone)]
pub enum Statement {
    Expression(Expression),
    VarDeclaration(VarDeclaration),
    Return(Option<Expression>),
    IfStatement(Rc<IfStatement>),
}

#[derive(Debug, Clone)]
pub struct VarDeclaration {
    pub id: usize,
    pub name: String,
    pub is_mutable: bool,
    pub is_reference: bool,
    pub types: Option<Vec<RefType>>,
    pub value: Expression,

    pub origin: SourceSpan,
}

#[derive(Debug, Clone)]
pub struct FunctionCall {
    pub id: usize,
    pub name: String,
    pub arguments: Vec<Expression>,
}

#[derive(Debug, Clone)]
pub struct Expression {
    pub id: usize,
    pub r#type: ExpressionType,
}

#[derive(Debug, Clone)]
pub enum ExpressionType {
    String(StringTemplate),
    Identifier(String),
    IntLiteral(usize),
    Null,
    Bool(bool),
    UnaryExpression(UnaryExpression),
    BinaryExpression(BinaryExpression),
    ParenthesizedExpression(ParenthesizedExpression),
    ArrayExpression(ArrayExpression),
    SliceExpression(SliceExpression),
    FunctionCall(FunctionCall),
}

#[derive(Debug, Clone)]
pub enum UnaryOperator {
    /// -
    Minus,
    /// !
    Not,
    /// &
    Reference,
}

#[derive(Debug, Clone)]
pub struct UnaryExpression {
    pub operator: UnaryOperator,
    pub operand: Box<Expression>,
}

#[derive(Debug, Clone)]
pub enum BinaryOperator {
    Add,
    Substract,
    Multiply,
    Divide,
    Equal,
    NotEqual,
    Smaller,
    SmallerEqual,
    Bigger,
    BiggerEqual,
    And,
    Or,
}

#[derive(Debug, Clone)]
pub struct BinaryExpression {
    pub operator: BinaryOperator,
    pub left: Box<Expression>,
    pub right: Box<Expression>,
}

#[derive(Debug, Clone)]
pub struct ParenthesizedExpression {
    pub expression: Box<Expression>,
}

#[derive(Debug, Clone)]
pub enum IfAlternative {
    Else(rc::Rc<Block>),
    If(rc::Rc<IfStatement>),
}

#[derive(Debug, Clone)]
pub struct IfStatement {
    pub condition: Expression,
    pub consequence: rc::Rc<Block>,
    pub alternative: Option<IfAlternative>,
}

#[derive(Debug, Clone)]
pub struct FileData<'a> {
    pub file_path: &'a str,
    pub source: &'a str,
}

#[derive(Debug, Clone)]
pub struct FileContext<'a> {
    pub root: Node<'a>,
    pub file_path: String,
    pub source: String,
    pub nodes: HashMap<usize, CachedNode>,
    pub errors: Vec<ASTError>,
}

impl<'a> FileContext<'a> {
    pub fn new(root: Node<'a>, file_path: String, source: String) -> Self {
        FileContext {
            root,
            file_path,
            source,
            nodes: HashMap::new(),
            errors: Vec::new(),
        }
    }

    pub fn parse_file(&mut self) -> File {
        collect_errors(self.root, &self.file_path, &mut self.errors);
        parse_file(self.root, self)
    }
}

pub fn parse_file<'a>(node: Node<'a>, context: &mut FileContext<'a>) -> File {
    let mut functions = HashMap::new();
    let mut struct_defs = HashMap::new();
    let mut cursor = node.walk();
    for child in node.children(&mut cursor) {
        match child.kind() {
            "function_definition" => {
                if let Some(fun) = parse_fun_and_cache(context, &child, &node) {
                    functions.insert(fun.name.clone(), fun);
                };
            }
            "struct_definition" => {
                if let Some(struct_def) = parse_struct_and_cache(context, &child, &node) {
                    struct_defs.insert(struct_def.name.clone(), struct_def);
                }
            }
            _ => {}
        };
    }

    // package only has one file right now
    File {
        functions,
        struct_defs,
    }
}

pub fn parse_fun_and_cache<'a>(
    context: &mut FileContext<'a>,
    node: &Node<'a>,
    parent: &Node<'a>,
) -> Option<rc::Rc<Function>> {
    parse_fun(context, node, parent).map(|value| {
        let fun = rc::Rc::new(value);
        context
            .nodes
            .insert(node.id(), CachedNode::AstFun(fun.clone()));
        fun
    })
}

fn parse_fun<'a>(
    context: &mut FileContext<'a>,
    node: &Node<'a>,
    parent: &Node<'a>,
) -> Option<Function> {
    let name = child_by_field(&node, "name", context)?;
    let parameter_list = child_by_field(&node, "parameters", context)?;
    let return_type = match node.child_by_field_name("result".as_bytes()) {
        Some(return_type) => parse_types(context, &return_type),
        None => None,
    };
    let body_node: Node = child_by_field(&node, "body", context)?;

    let fun = Function {
        node: NodeData {
            id: node.id(),
            parent: parent.id(),
        },
        name: node_text(&name, context)?,
        parameters: parse_parameters(context, parameter_list)?,
        return_types: return_type,
        body: parse_block_and_cache(context, body_node, node.clone()),
    };
    Some(fun)
}

pub fn parse_struct_and_cache<'a>(
    context: &mut FileContext<'a>,
    node: &Node<'a>,
    parent: &Node<'a>,
) -> Option<rc::Rc<Struct>> {
    parse_struct(context, node, parent).map(|value| {
        let symbol = rc::Rc::new(value);
        context
            .nodes
            .insert(node.id(), CachedNode::AstStruct(symbol.clone()));
        symbol
    })
}

fn parse_struct<'a>(
    context: &mut FileContext<'a>,
    node: &Node<'a>,
    parent: &Node<'a>,
) -> Option<Struct> {
    let name = child_by_field(&node, "name", context)?;
    let fields = child_by_field(&node, "fields", context)?;
    let fields = parse_struct_fields(context, &fields, node)?;
    Some(Struct {
        node: NodeData {
            id: node.id(),
            parent: parent.id(),
        },
        name: node_text(&name, context)?,
        fields,
    })
}

fn parse_struct_fields<'a>(
    context: &mut FileContext<'a>,
    node: &Node<'a>,
    parent: &Node<'a>,
) -> Option<Vec<Field>> {
    let mut fields = Vec::new();
    let mut cursor = node.walk();
    for field_node in node.children_by_field_name("field", &mut cursor) {
        fields.push(parse_struct_field(context, &field_node, parent)?);
    }
    Some(fields)
}

fn parse_struct_field<'a>(
    context: &mut FileContext<'a>,
    node: &Node<'a>,
    parent: &Node<'a>,
) -> Option<Field> {
    let name = child_by_field(&node, "name", context)?;
    let is_reference = node.child_by_field_name("reference".as_bytes()).is_some();
    let field_type = child_by_field(&node, "type", context)?;

    Some(Field {
        node: NodeData {
            id: node.id(),
            parent: parent.id(),
        },

        name: node_text(&name, context)?,
        is_reference,
        types: parse_types(context, &field_type)?,
    })
}

pub fn parse_block_and_cache<'a>(
    context: &mut FileContext<'a>,
    node: Node<'a>,
    parent: Node<'a>,
) -> rc::Rc<Block> {
    let block = parse_block(context, node, parent);
    let block = rc::Rc::new(block);
    context
        .nodes
        .insert(node.id(), CachedNode::AstBlock(block.clone()));
    block
}

fn parse_block<'a>(context: &mut FileContext<'a>, node: Node<'a>, parent: Node<'a>) -> Block {
    let mut statements: Vec<Statement> = Vec::new();
    for index in 1..node.child_count() - 1 {
        let statement_node = match child(&node, "statement", index, context) {
            Some(statement_node) => statement_node,
            None => continue,
        };
        match statement_node.kind() {
            "expression_statement" => {
                let expression_node = match child_by_field(&statement_node, "expression", context) {
                    Some(expression_node) => expression_node,
                    None => continue,
                };
                match parse_expression(context, &expression_node) {
                    Some(expression) => statements.push(Statement::Expression(expression)),
                    None => continue,
                };
            }
            "var_declaration" => {
                match parse_var_declaration(context, statement_node) {
                    Some(statement) => statements.push(Statement::VarDeclaration(statement)),
                    None => continue,
                };
            }

            "return_statement" => {
                match parse_return_statement(context, &statement_node) {
                    Some(statement) => statements.push(Statement::Return(statement)),
                    None => continue,
                };
            }
            "if_statement" => {
                match parse_if_and_cache(context, statement_node, parent) {
                    Some(statement) => statements.push(Statement::IfStatement(statement)),
                    None => continue,
                };
            }

            _ => {}
        }
    }
    Block {
        statements,
        node: NodeData {
            id: node.id(),
            parent: parent.id(),
        },
    }
}

fn parse_function_call<'a>(context: &mut FileContext<'a>, node: &Node<'a>) -> Option<FunctionCall> {
    let name = child(node, "function name", 0, context)?;
    let arguments_list = child(node, "arguments", 1, context)?;
    let arguments = parse_function_call_arguments(context, &arguments_list)?;

    Some(FunctionCall {
        id: node.id(),
        name: node_text(&name, context)?,
        arguments,
    })
}

fn parse_function_call_arguments<'a>(
    context: &mut FileContext<'a>,
    node: &Node<'a>,
) -> Option<Vec<Expression>> {
    let mut arguments = Vec::new();
    let mut cursor = node.walk();
    for argument_node in node.children_by_field_name("argument", &mut cursor) {
        arguments.push(parse_expression(context, &argument_node)?);
    }

    Some(arguments)
}

fn parse_expression<'a>(context: &mut FileContext<'a>, node: &Node<'a>) -> Option<Expression> {
    let expression_type = match node.kind() {
        "identifier" => ExpressionType::Identifier(node_text(&node, context)?),
        "int_literal" => ExpressionType::IntLiteral(parse_usize(context, node)?),
        "interpreted_string_literal" => ExpressionType::String(parse_string(context, node)?),
        "null" => ExpressionType::Null,
        "true" => ExpressionType::Bool(true),
        "false" => ExpressionType::Bool(false),
        "unary_expression" => {
            ExpressionType::UnaryExpression(parse_unary_expression(context, node)?)
        }
        "binary_expression" => {
            ExpressionType::BinaryExpression(parse_binary_expression(context, node)?)
        }
        "parenthesized_expression" => {
            ExpressionType::ParenthesizedExpression(parse_parenthesized_expression(context, node)?)
        }
        "array_expression" => {
            ExpressionType::ArrayExpression(parse_array_expression(context, node)?)
        }
        "slice_expression" => {
            ExpressionType::SliceExpression(parse_slice_expression(context, node)?)
        }
        "function_call" => ExpressionType::FunctionCall(parse_function_call(context, &node)?),
        _ => {
            context.errors.push(ASTError::from_node(
                node,
                &context.file_path,
                &format!("Unknown expression kind: {}", node.kind()),
            ));
            return None;
        }
    };
    Some(Expression {
        id: node.id(),
        r#type: expression_type,
    })
}

fn parse_unary_expression<'a>(
    context: &mut FileContext<'a>,
    node: &Node<'a>,
) -> Option<UnaryExpression> {
    let operator = child_by_field(&node, "operator", context)?;
    let string = node_text(&operator, context)?;
    let operator = match string.as_str() {
        "-" => UnaryOperator::Minus,
        "!" => UnaryOperator::Not,
        "&" => UnaryOperator::Reference,
        unknown => {
            context.errors.push(ASTError::from_node(
                node,
                &context.file_path,
                &format!("Unknown unary operator: {}", unknown),
            ));
            return None;
        }
    };
    let operand = child_by_field(&node, "operand", context)?;
    Some(UnaryExpression {
        operator,
        operand: Box::new(parse_expression(context, &operand)?),
    })
}

fn parse_binary_expression<'a>(
    context: &mut FileContext<'a>,
    node: &Node<'a>,
) -> Option<BinaryExpression> {
    let operator = child_by_field(&node, "operator", context)?;
    let string = node_text(&operator, context)?;
    let operator = match string.as_str() {
        "+" => BinaryOperator::Add,
        "-" => BinaryOperator::Substract,
        "*" => BinaryOperator::Multiply,
        "/" => BinaryOperator::Divide,
        "==" => BinaryOperator::Equal,
        "!=" => BinaryOperator::NotEqual,
        "<" => BinaryOperator::Smaller,
        "<=" => BinaryOperator::SmallerEqual,
        ">" => BinaryOperator::Bigger,
        ">=" => BinaryOperator::BiggerEqual,
        "&&" => BinaryOperator::And,
        "||" => BinaryOperator::Or,
        unknown => {
            context.errors.push(ASTError::from_node(
                node,
                &context.file_path,
                &format!("Unknown binary operator: {}", unknown),
            ));
            return None;
        }
    };
    let left = child_by_field(&node, "left", context)?;
    let right = child_by_field(&node, "right", context)?;
    Some(BinaryExpression {
        operator,
        left: Box::new(parse_expression(context, &left)?),
        right: Box::new(parse_expression(context, &right)?),
    })
}

fn parse_parenthesized_expression<'a>(
    context: &mut FileContext<'a>,
    node: &Node<'a>,
) -> Option<ParenthesizedExpression> {
    let expression = child_by_field(&node, "expression", context)?;
    Some(ParenthesizedExpression {
        expression: Box::new(parse_expression(context, &expression)?),
    })
}

fn parse_array_expression<'a>(
    context: &mut FileContext<'a>,
    node: &Node<'a>,
) -> Option<ArrayExpression> {
    let mut expressions = Vec::new();
    let mut cursor = node.walk();
    for child in node.children_by_field_name("expression", &mut cursor) {
        expressions.push(parse_expression(context, &child)?);
    }

    Some(ArrayExpression { expressions })
}

fn parse_slice_expression<'a>(
    context: &mut FileContext<'a>,
    node: &Node<'a>,
) -> Option<SliceExpression> {
    let operand = child_by_field(&node, "operand", context)?;
    let start = match node.child_by_field_name("start".as_bytes()) {
        Some(n) => Some(parse_usize(context, &n)?),
        None => None,
    };
    let end = match node.child_by_field_name("end".as_bytes()) {
        Some(n) => Some(parse_usize(context, &n)?),
        None => None,
    };

    Some(SliceExpression {
        operand: Rc::new(parse_expression(context, &operand)?),
        start,
        end,
    })
}

fn parse_string<'a>(context: &mut FileContext<'a>, node: &Node<'a>) -> Option<StringTemplate> {
    let start_column = node.start_position().column;
    let string = node_text(&node, context)?;
    let string = string.as_str()[1..string.len() - 1].to_string();
    let mut position = 0;
    let mut template = StringTemplate::new();
    let mut cursor = node.walk();
    for embetted_expr in node.children_by_field_name("embetted_expr", &mut cursor) {
        let expression_node = child_by_field(&embetted_expr, "expression", context)?;
        let expression = parse_expression(context, &expression_node)?;
        template.push(StringTemplatePart::String(
            string.as_str()[position..embetted_expr.start_position().column - start_column - 1]
                .to_string(),
        ));
        position = embetted_expr.end_position().column - start_column - 1;
        template.push(StringTemplatePart::Expression(expression));
    }
    if position == 0 {
        // no expressions just take the whole string
        template.push(StringTemplatePart::String(string));
    } else if position < string.len() {
        template.push(StringTemplatePart::String(
            string.as_str()[position..].to_string(),
        ));
    }
    Some(template)
}

fn parse_var_declaration<'a>(
    context: &mut FileContext<'a>,
    node: Node<'a>,
) -> Option<VarDeclaration> {
    let is_mutable = node.child_by_field_name("mutable".as_bytes()).is_some();
    let is_reference = node.child_by_field_name("reference".as_bytes()).is_some();

    let name = child_by_field(&node, "name", context)?;
    let var_type = match node.child_by_field_name("type") {
        Some(var_type) => Some(parse_types(context, &var_type)?),
        None => None,
    };
    let value_node = child_by_field(&node, "value", context)?;
    let value = parse_expression(context, &value_node)?;
    Some(VarDeclaration {
        id: node.id(),
        name: node_text(&name, context)?,
        is_mutable,
        is_reference,
        types: var_type,
        value,

        origin: SourceSpan::from_node(&node),
    })
}

fn parse_return_statement<'a>(
    context: &mut FileContext<'a>,
    node: &Node<'a>,
) -> Option<Option<Expression>> {
    let expression = match node.child_by_field_name("expression".as_bytes()) {
        Some(expression) => Some(parse_expression(context, &expression)?),
        None => None,
    };
    Some(expression)
}

pub fn parse_if_and_cache<'a>(
    context: &mut FileContext<'a>,
    node: Node<'a>,
    parent: Node<'a>,
) -> Option<rc::Rc<IfStatement>> {
    let statement = parse_if(context, node, parent)?;
    let statement = rc::Rc::new(statement);
    context
        .nodes
        .insert(node.id(), CachedNode::AstIf(statement.clone()));
    Some(statement)
}

fn parse_if<'a>(
    context: &mut FileContext<'a>,
    node: Node<'a>,
    parent: Node<'a>,
) -> Option<IfStatement> {
    let condition = child_by_field(&node, "condition", context)?;
    let consequence = child_by_field(&node, "consequence", context)?;
    let alternative = node.child_by_field_name("alternative".as_bytes());

    let condition = parse_expression(context, &condition)?;
    let consequence = parse_block_and_cache(context, consequence, parent);

    let alternative = match alternative {
        Some(alternative) => {
            if alternative.kind() == "if_statement" {
                Some(IfAlternative::If(parse_if_and_cache(
                    context,
                    alternative.clone(),
                    node.clone(),
                )?))
            } else {
                Some(IfAlternative::Else(parse_block_and_cache(
                    context,
                    alternative,
                    node.clone(),
                )))
            }
        }
        None => None,
    };
    Some(IfStatement {
        condition,
        consequence,
        alternative,
    })
}

#[derive(Debug, Clone)]
pub enum CachedNode {
    AstFun(rc::Rc<Function>),
    AstStruct(rc::Rc<Struct>),
    AstBlock(rc::Rc<Block>),
    AstIf(rc::Rc<IfStatement>),
}

fn parse_parameters<'a>(context: &mut FileContext<'a>, node: Node<'a>) -> Option<Vec<Parameter>> {
    let mut parameters = Vec::new();
    let mut cursor = node.walk();
    for child in node.children(&mut cursor) {
        if child.kind() != "parameter" {
            continue;
        }
        parameters.push(parse_parameter(context, child)?);
    }
    Some(parameters)
}

fn parse_parameter<'a>(context: &mut FileContext<'a>, node: Node<'a>) -> Option<Parameter> {
    let is_mutable = node.child_by_field_name("mutable".as_bytes()).is_some();
    let is_reference = node.child_by_field_name("reference".as_bytes()).is_some();
    let name = child(&node, "parameter name", 0, context)?;
    let _type = child(&node, "parameter type", 1, context)?;

    Some(Parameter {
        id: node.id(),
        name: node_text(&name, context)?,
        is_mutable,
        is_reference,
        types: parse_types(context, &_type)?,

        origin: Some(SourceSpan::from_node(&node)),
    })
}

fn parse_type<'a>(context: &mut FileContext<'a>, node: &Node<'a>) -> Option<Type> {
    let t = match node.kind() {
        "primitive_type" => {
            let type_text = node_text(&node, context)?;
            match type_text.as_str() {
                "string" => Type::String,
                "bool" => Type::Bool,
                "i8" => Type::I8,
                "u8" => Type::U8,
                "i32" => Type::I32,
                "u32" => Type::U32,
                "null" => Type::Null,
                _ => {
                    context.errors.push(ASTError::from_node(
                        node,
                        &context.file_path,
                        &format!("Unsupported primitve type: {}", type_text),
                    ));
                    return None;
                }
            }
        }
        "identifier" => {
            let type_text = node_text(&node, context)?;
            Type::Identifier(type_text)
        }
        "array_type" => Type::Array(parse_array(context, &node)?),
        "slice_type" => Type::Slice(parse_slice(context, &node)?),
        _ => {
            context.errors.push(ASTError::from_node(
                node,
                &context.file_path,
                &format!("Unsupported type: {}", node.kind()),
            ));
            return None;
        }
    };
    Some(t)
}

fn parse_types<'a>(context: &mut FileContext<'a>, node: &Node<'a>) -> Option<Vec<RefType>> {
    let types = match node.kind() {
        "parenthesized_type" => {
            let parenthesized_type = child_by_field(&node, "type", context)?;
            return parse_types(context, &parenthesized_type);
        }
        "sum_type" => {
            let left = child_by_field(&node, "left", context)?;
            let right = child_by_field(&node, "right", context)?;
            let mut types = parse_types(context, &left)?;
            for mut t in parse_types(context, &right)? {
                if types.contains(&t) {
                    context.errors.push(ASTError::from_node(
                        node,
                        &context.file_path,
                        &format!("Duplicated sum type: {:?}", t),
                    ));
                    return None;
                }
                types.push(t);
            }
            types
        }
        "reference_type" => {
            let type_node = child_by_field(&node, "type", context)?;
            vec![RefType {
                is_reference: true,
                r#type: parse_type(context, &type_node)?,
            }]
        }
        _ => {
            vec![RefType {
                is_reference: false,
                r#type: parse_type(context, node)?,
            }]
        }
    };

    Some(types)
}

fn parse_array<'a>(context: &mut FileContext<'a>, node: &Node<'a>) -> Option<Array> {
    let element = child_by_field(&node, "element", context)?;
    let length = child_by_field(&node, "length", context)?;
    let length = parse_usize(context, &length)?;
    let types = parse_types(context, &element)?;
    Some(Array {
        types: Rc::new(types.into_iter().collect()),
        length,
    })
}

fn parse_slice<'a>(context: &mut FileContext<'a>, node: &Node<'a>) -> Option<Slice> {
    let element = child_by_field(&node, "element", context)?;
    let types = parse_types(context, &element)?;
    Some(Slice {
        types: Rc::new(types.into_iter().collect()),
    })
}

fn error_to_string(err: &Node) -> String {
    let mut cursor = err.walk();
    let mut out = "".to_string();
    for child in err.children(&mut cursor) {
        out = format!("{}{}", out, &child.to_sexp());
    }
    out
}

fn node_text<'a>(node: &Node, context: &mut FileContext<'a>) -> Option<String> {
    let text = node
        .utf8_text(context.source.as_bytes())
        .map_err(|err| {
            context.errors.push(ASTError::from_node(
                node,
                &context.file_path,
                &format!("{}", err),
            ))
        })
        .ok()?
        .trim()
        .to_string();
    Some(text)
}

fn child<'a>(
    node: &Node<'a>,
    name: &str,
    index: usize,
    context: &mut FileContext<'a>,
) -> Option<Node<'a>> {
    match node.child(index) {
        Some(node) => Some(node),
        None => {
            context.errors.push(ASTError::from_node(
                &node,
                &context.file_path,
                &format!("{} expected", name),
            ));
            return None;
        }
    }
}

fn child_by_field<'a>(
    node: &Node<'a>,
    field: &str,
    context: &mut FileContext<'a>,
) -> Option<Node<'a>> {
    match node.child_by_field_name(field.as_bytes()) {
        Some(node) => Some(node),
        None => {
            context.errors.push(ASTError::from_node(
                &node,
                &context.file_path,
                &format!("{} field expected in parser tree", field),
            ));
            None
        }
    }
}

fn parse_usize<'a>(context: &mut FileContext<'a>, node: &Node<'a>) -> Option<usize> {
    let string = node_text(&node, context)?;
    string
        .parse::<usize>()
        .map_err(|err| {
            context.errors.push(ASTError::from_node(
                node,
                &context.file_path,
                &format!("Failed to parse integer: {}", err),
            ));
            err
        })
        .ok()
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

pub fn print_err(err: &ASTError, source: &str) {
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
        err.file_path, start.row, start.column, err.msg
    );
}
