use std::{
    collections::HashMap,
    hash::Hash,
    sync::{RwLock, Weak},
};

use tree_sitter::Node;

use crate::{
    buildin::FunctionDeclaration,
    types::{Ptr, PtrMut, SumType},
    validation::TypeNarrowing,
};

// code analysis:

#[derive(Debug, Clone)]
pub struct VarState {
    pub types: Vec<RefType>,
}

// ast:

#[derive(Debug, Clone, Copy)]
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
            if self.end.row > index {
                end_char += line.len() + 1;
                continue;
            }
            if !found_start && self.start.row == index {
                start_char += self.start.column;
                found_start = true;
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
    fn syntax_err(node: &Node, msg: &str) -> Self {
        LangError {
            kind: LangErrorKind::SyntaxError,
            node: NodeData::from_node(node),
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

#[derive(Debug, Clone)]
pub struct NodeData {
    pub id: usize,
    pub parent: usize,
    pub span: SourceSpan,
}

impl NodeData {
    pub fn from_node(&node: &Node) -> Self {
        NodeData {
            id: node.id(),
            parent: node.parent().map(|n| n.id()).unwrap_or(0),
            span: SourceSpan::from_node(&node),
        }
    }

    pub fn contains(&self, position: SourcePosition) -> bool {
        return self.span.contains(position);
    }
}

#[derive(Debug, Clone)]
pub struct File {
    pub functions: HashMap<String, Ptr<Function>>,
    pub struct_defs: HashMap<String, Ptr<Struct>>,

    /// From validation:
    pub sum_types: HashMap<String, SumType>,
}

#[derive(Debug, Clone)]
pub struct Struct {
    pub node: NodeData,

    pub name: String,
    pub name_node: NodeData,
    pub fields: Vec<Field>,
}

impl Struct {
    pub fn has_reference(&self) -> bool {
        self.fields.iter().any(|it| it.has_reference())
    }
}

#[derive(Debug, Clone)]
pub struct Field {
    pub node: NodeData,

    pub name: String,
    pub types: Vec<RefType>,
}

impl Field {
    pub fn has_reference(&self) -> bool {
        self.types.iter().any(|it| it.is_reference)
    }
}

#[derive(Debug, Clone)]
pub struct Function {
    pub parent: Weak<RwLock<File>>,

    pub node: NodeData,

    pub name: String,
    pub name_node: NodeData,

    pub parameters: Vec<Parameter>,
    pub return_types: Option<Vec<RefType>>,
    pub body: PtrMut<Block>,
}

impl Function {
    pub fn file(&self) -> PtrMut<File> {
        self.parent.upgrade().unwrap()
    }

    pub fn as_declaration(&self) -> FunctionDeclaration {
        FunctionDeclaration {
            node: self.node.clone(),
            name: self.name.clone(),
            parameters: self.parameters.clone(),
            return_types: self.return_types.clone().unwrap_or(vec![]),
        }
    }
}

#[derive(Debug)]
pub struct Block {
    pub parent: Option<BlockParent>,

    pub node: NodeData,

    pub statements: Vec<Statement>,

    pub vars: RwLock<HashMap<String, Ptr<VarDeclaration>>>,
}

#[derive(Debug, Clone)]
pub enum StringTemplatePart {
    Expression(Expression),
    String(String),
}

pub type StringTemplate = Vec<StringTemplatePart>;

#[derive(Debug, Clone)]
pub struct Parameter {
    pub node: NodeData,
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
    Identifier(String),
    Array(Array),
    Slice(Slice),
    Unresolved(Vec<RefType>),
}

#[derive(Debug, Clone, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub struct RefType {
    pub is_reference: bool,
    pub r#type: Type,
}

impl RefType {
    pub fn value(r#type: Type) -> RefType {
        RefType {
            is_reference: false,
            r#type,
        }
    }

    pub fn reference(r#type: Type) -> RefType {
        RefType {
            is_reference: true,
            r#type,
        }
    }
}
#[derive(Debug, Clone, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub struct Array {
    pub types: Ptr<Vec<RefType>>,
    pub length: usize,
}

#[derive(Debug, Clone, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub struct Slice {
    pub types: Ptr<Vec<RefType>>,
}

#[derive(Debug, Clone)]
pub struct ArrayExpression {
    pub expressions: Vec<Expression>,
}

#[derive(Debug, Clone)]
pub struct SliceExpression {
    pub operand: Ptr<Expression>,
    pub start: Option<usize>,
    pub end: Option<usize>,
}

#[derive(Debug, Clone)]
pub enum Statement {
    Expression(Expression),
    VarDeclaration(Ptr<VarDeclaration>),
    Return(Option<Expression>),
    IfStatement(PtrMut<IfStatement>),
}

#[derive(Debug, Clone)]
pub struct VarDeclaration {
    pub node: NodeData,
    pub name: String,
    pub name_node: NodeData,
    pub is_mutable: bool,
    pub types: Option<Vec<RefType>>,
    pub value: Expression,

    pub resolved_types: PtrMut<Option<SumType>>,
}

impl VarDeclaration {
    /// Either the resolved types or the declared type
    pub fn types(&self) -> SumType {
        match self.resolved_types.read().unwrap().as_ref() {
            Some(resolved_types) => resolved_types.clone(),
            None => self
                .types
                .as_ref()
                .map(|t| SumType::from_types(&t))
                .unwrap_or(SumType::from_types(&vec![])),
        }
    }
}

#[derive(Debug, Clone)]
pub struct FunctionCall {
    pub node: NodeData,
    pub name: String,
    pub name_node: NodeData,
    pub arguments: Vec<Expression>,
}

#[derive(Debug, Clone)]
pub struct StructFieldInitialization {
    pub node: NodeData,
    pub name: String,
    pub value: Expression,
}

#[derive(Debug, Clone)]
pub struct StructInitialization {
    pub node: NodeData,
    pub name: String,
    pub name_node: NodeData,
    pub fields: Vec<StructFieldInitialization>,
}

#[derive(Debug, Clone)]
pub enum SelectorFieldType {
    Identifier(String),
    // TODO:
    Call,
}

#[derive(Debug, Clone)]
pub struct SelectorField {
    pub node: NodeData,
    pub optional_chaining: bool,
    pub field: SelectorFieldType,
}

#[derive(Debug, Clone)]
pub struct SelectorExpression {
    pub root: Box<Expression>,
    pub fields: Vec<SelectorField>,
}

#[derive(Debug, Clone)]
pub struct Expression {
    pub node: NodeData,
    pub r#type: ExpressionType,

    pub resolved_types: PtrMut<Option<SumType>>,
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
    StructInitialization(StructInitialization),
    SelectorExpression(SelectorExpression),
}

#[derive(Debug, Clone)]
pub enum UnaryOperator {
    /// -
    Minus,
    /// !
    Not,
    /// &
    Reference,
    TypeOf,
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
    Else(PtrMut<Block>),
    If(PtrMut<IfStatement>),
}

#[derive(Debug, Clone)]
pub struct IfStatement {
    pub node: NodeData,
    pub condition: Expression,
    pub consequence: PtrMut<Block>,
    pub alternative: Option<IfAlternative>,

    /// Type narrowing from the if contition
    pub type_narrowing: Option<TypeNarrowing>,
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
    pub source: &'a String,
    pub errors: Vec<LangError>,
}

impl<'a> FileContext<'a> {
    pub fn new(root: Node<'a>, file_path: String, source: &'a String) -> Self {
        FileContext {
            root,
            file_path,
            source,
            errors: Vec::new(),
        }
    }

    pub fn parse_file(&mut self) -> PtrMut<File> {
        collect_errors(self.root, self.source, &mut self.errors);
        parse_file(self.root, self)
    }
}

pub fn parse_file<'a>(node: Node<'a>, context: &mut FileContext<'a>) -> PtrMut<File> {
    let file = Ptr::new(RwLock::new(File {
        functions: HashMap::new(),
        struct_defs: HashMap::new(),

        sum_types: HashMap::new(),
    }));

    let mut cursor = node.walk();
    for child in node.children(&mut cursor) {
        match child.kind() {
            "function_definition" => {
                if let Some(fun) = parse_fun(context, &file, &child) {
                    file.write()
                        .unwrap()
                        .functions
                        .insert(fun.name.clone(), fun.clone());
                };
            }
            "struct_definition" => {
                if let Some(struct_def) = parse_struct(context, &child) {
                    file.write()
                        .unwrap()
                        .struct_defs
                        .insert(struct_def.name.clone(), struct_def);
                }
            }
            _ => {}
        };
    }

    // package only has one file right now
    file
}

fn parse_fun<'a>(
    context: &mut FileContext<'a>,
    file: &PtrMut<File>,
    node: &Node<'a>,
) -> Option<Ptr<Function>> {
    let name = child_by_field(&node, "name", context)?;
    let parameter_list = child_by_field(&node, "parameters", context)?;
    let return_types = match node.child_by_field_name("result".as_bytes()) {
        Some(return_node) => parse_types(context, &return_node),
        None => None,
    };
    let body_node: Node = child_by_field(&node, "body", context)?;
    let body = parse_block(context, body_node, node.clone());

    let fun = Ptr::new(Function {
        parent: Ptr::downgrade(file),
        node: NodeData::from_node(&node),
        name: node_text(&name, context)?,
        name_node: NodeData::from_node(&name),
        parameters: parse_parameters(context, parameter_list)?,
        return_types,
        body: body.clone(),
    });
    body.write().unwrap().parent = Some(BlockParent::Function(Ptr::downgrade(&fun)));
    Some(fun)
}

fn parse_struct<'a>(context: &mut FileContext<'a>, node: &Node<'a>) -> Option<Ptr<Struct>> {
    let name = child_by_field(&node, "name", context)?;
    let fields = child_by_field(&node, "fields", context)?;
    let fields = parse_struct_fields(context, &fields, node)?;
    Some(Ptr::new(Struct {
        node: NodeData::from_node(&node),
        name: node_text(&name, context)?,
        name_node: NodeData::from_node(&name),
        fields,
    }))
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
    let field_type = child_by_field(&node, "type", context)?;

    Some(Field {
        node: NodeData {
            id: node.id(),
            parent: parent.id(),
            span: SourceSpan::from_node(&node),
        },

        name: node_text(&name, context)?,
        types: parse_types(context, &field_type)?,
    })
}

fn parse_block<'a>(
    context: &mut FileContext<'a>,
    node: Node<'a>,
    parent_node: Node<'a>,
) -> PtrMut<Block> {
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
                    Some(statement) => {
                        statements.push(Statement::VarDeclaration(Ptr::new(statement)))
                    }
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
                match parse_if(context, statement_node, parent_node) {
                    Some(statement) => statements.push(Statement::IfStatement(statement)),
                    None => continue,
                };
            }

            _ => {}
        }
    }
    Ptr::new(RwLock::new(Block {
        parent: None,
        statements,
        node: NodeData {
            id: node.id(),
            parent: parent_node.id(),
            span: SourceSpan::from_node(&node),
        },
        vars: RwLock::new(HashMap::new()),
    }))
}

fn parse_function_call(context: &mut FileContext, node: &Node) -> Option<FunctionCall> {
    let name = child(node, "function name", 0, context)?;
    let arguments_list = child(node, "arguments", 1, context)?;
    let arguments = parse_function_call_arguments(context, &arguments_list)?;

    Some(FunctionCall {
        node: NodeData::from_node(node),
        name: node_text(&name, context)?,
        name_node: NodeData::from_node(&name),
        arguments,
    })
}

fn parse_function_call_arguments(
    context: &mut FileContext,
    node: &Node,
) -> Option<Vec<Expression>> {
    let mut arguments = Vec::new();
    let mut cursor = node.walk();
    for argument_node in node.children_by_field_name("argument", &mut cursor) {
        arguments.push(parse_expression(context, &argument_node)?);
    }

    Some(arguments)
}

fn parse_struct_field_initialization(
    context: &mut FileContext,
    node: &Node,
) -> Option<StructFieldInitialization> {
    let name = child(node, "name", 0, context)?;
    let value_node = child(node, "value", 2, context)?;

    Some(StructFieldInitialization {
        node: NodeData::from_node(&node),
        name: node_text(&name, context)?,
        value: parse_expression(context, &value_node)?,
    })
}

fn parse_struct_initialization(
    context: &mut FileContext,
    node: &Node,
) -> Option<StructInitialization> {
    let name = child(node, "name", 0, context)?;

    let mut fields: Vec<StructFieldInitialization> = Vec::new();
    let mut cursor = node.walk();
    for field_init in node.children_by_field_name("field_init", &mut cursor) {
        match field_init.kind() {
            "keyed_element" => {
                let Some(field) = parse_struct_field_initialization(context, &field_init) else {
                    continue;
                };
                fields.push(field);
            }
            "identifier" => todo!(),
            _ => {}
        }
    }
    Some(StructInitialization {
        node: NodeData::from_node(&node),
        name: node_text(&name, context)?,
        name_node: NodeData::from_node(&name),
        fields,
    })
}

fn parse_selector_field(context: &mut FileContext, node: &Node) -> Option<SelectorField> {
    let chaining = child(node, "chaining", 0, context)?;
    let chaining_text = node_text(&chaining, context)?;
    let field = child(node, "field", 1, context)?;
    let field = match field.kind() {
        "identifier" => SelectorFieldType::Identifier(node_text(&field, context)?),
        "function_call" => SelectorFieldType::Call,
        _ => return None,
    };
    Some(SelectorField {
        node: NodeData::from_node(node),
        optional_chaining: chaining_text == "?.",
        field,
    })
}

fn parse_selector_expression(context: &mut FileContext, node: &Node) -> Option<SelectorExpression> {
    let operand = child(node, "operand", 0, context)?;
    let root = Box::new(parse_expression(context, &operand)?);
    let mut fields: Vec<SelectorField> = Vec::new();
    let mut cursor = node.walk();
    for selector_field in node.children_by_field_name("selector_field", &mut cursor) {
        let Some(field) = parse_selector_field(context, &selector_field) else {
            continue;
        };
        fields.push(field);
    }
    Some(SelectorExpression { root, fields })
}

fn parse_expression(context: &mut FileContext, node: &Node) -> Option<Expression> {
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
        "struct_initialization" => {
            ExpressionType::StructInitialization(parse_struct_initialization(context, &node)?)
        }
        "selector_expression" => {
            ExpressionType::SelectorExpression(parse_selector_expression(context, &node)?)
        }
        _ => {
            context.errors.push(LangError::syntax_err(
                node,
                &format!("Unknown expression kind: {}", node.kind()),
            ));
            return None;
        }
    };
    Some(Expression {
        node: NodeData::from_node(&node),
        r#type: expression_type,
        resolved_types: Ptr::new(RwLock::new(None)),
    })
}

fn parse_unary_expression(context: &mut FileContext, node: &Node) -> Option<UnaryExpression> {
    let operator = child_by_field(&node, "operator", context)?;
    let string = node_text(&operator, context)?;
    let operator = match string.as_str() {
        "-" => UnaryOperator::Minus,
        "!" => UnaryOperator::Not,
        "&" => UnaryOperator::Reference,
        "typeof" => UnaryOperator::TypeOf,
        unknown => {
            context.errors.push(LangError::syntax_err(
                node,
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

fn parse_binary_expression(context: &mut FileContext, node: &Node) -> Option<BinaryExpression> {
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
            context.errors.push(LangError::syntax_err(
                node,
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

fn parse_parenthesized_expression(
    context: &mut FileContext,
    node: &Node,
) -> Option<ParenthesizedExpression> {
    let expression = child_by_field(&node, "expression", context)?;
    Some(ParenthesizedExpression {
        expression: Box::new(parse_expression(context, &expression)?),
    })
}

fn parse_array_expression(context: &mut FileContext, node: &Node) -> Option<ArrayExpression> {
    let mut expressions = Vec::new();
    let mut cursor = node.walk();
    for child in node.children_by_field_name("expression", &mut cursor) {
        expressions.push(parse_expression(context, &child)?);
    }

    Some(ArrayExpression { expressions })
}

fn parse_slice_expression(context: &mut FileContext, node: &Node) -> Option<SliceExpression> {
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
        operand: Ptr::new(parse_expression(context, &operand)?),
        start,
        end,
    })
}

fn parse_string(context: &mut FileContext, node: &Node) -> Option<StringTemplate> {
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

    let name = child_by_field(&node, "name", context)?;
    let var_type = match node.child_by_field_name("type") {
        Some(var_type) => Some(parse_types(context, &var_type)?),
        None => None,
    };
    let value_node = child_by_field(&node, "value", context)?;
    let value = parse_expression(context, &value_node)?;
    Some(VarDeclaration {
        node: NodeData::from_node(&node),
        name: node_text(&name, context)?,
        name_node: NodeData::from_node(&name),
        is_mutable,
        types: var_type,
        value,

        resolved_types: Ptr::new(RwLock::new(None)),
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

fn parse_if<'a>(
    context: &mut FileContext<'a>,
    node: Node<'a>,
    parent: Node<'a>,
) -> Option<PtrMut<IfStatement>> {
    let condition = child_by_field(&node, "condition", context)?;
    let consequence = child_by_field(&node, "consequence", context)?;
    let alternative = node.child_by_field_name("alternative".as_bytes());

    let condition = parse_expression(context, &condition)?;
    let consequence = parse_block(context, consequence, parent);

    let alternative = match alternative {
        Some(alternative) => {
            if alternative.kind() == "if_statement" {
                Some(IfAlternative::If(parse_if(
                    context,
                    alternative.clone(),
                    node.clone(),
                )?))
            } else {
                Some(IfAlternative::Else(parse_block(
                    context,
                    alternative,
                    node.clone(),
                )))
            }
        }
        None => None,
    };
    Some(Ptr::new(RwLock::new(IfStatement {
        node: NodeData::from_node(&node),
        condition,
        consequence,
        alternative,
        type_narrowing: None,
    })))
}

#[derive(Debug, Clone)]
pub enum BlockParent {
    Function(Weak<Function>),
    Block(Weak<Block>),
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
        node: NodeData {
            id: node.id(),
            parent: node.parent().unwrap().id(),
            span: SourceSpan::from_node(&node),
        },
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
                    context.errors.push(LangError::syntax_err(
                        node,
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
            context.errors.push(LangError::syntax_err(
                node,
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
            for t in parse_types(context, &right)? {
                if types.contains(&t) {
                    context.errors.push(LangError::syntax_err(
                        node,
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
        types: Ptr::new(types.into_iter().collect()),
        length,
    })
}

fn parse_slice<'a>(context: &mut FileContext<'a>, node: &Node<'a>) -> Option<Slice> {
    let element = child_by_field(&node, "element", context)?;
    let types = parse_types(context, &element)?;
    Some(Slice {
        types: Ptr::new(types.into_iter().collect()),
    })
}

fn error_to_string(err: &Node, source: &str) -> String {
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

    format!("{}: {},,{}{}", error_type, text, &err.to_sexp(), children)
}

fn node_text<'a>(node: &Node, context: &mut FileContext<'a>) -> Option<String> {
    let text = node
        .utf8_text(context.source.as_bytes())
        .map_err(|err| {
            context
                .errors
                .push(LangError::syntax_err(node, &format!("{}", err)))
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
    context: &mut FileContext,
) -> Option<Node<'a>> {
    match node.child(index) {
        Some(node) => Some(node),
        None => {
            context
                .errors
                .push(LangError::syntax_err(&node, &format!("{} expected", name)));
            return None;
        }
    }
}

fn child_by_field<'a>(node: &Node<'a>, field: &str, context: &mut FileContext) -> Option<Node<'a>> {
    match node.child_by_field_name(field.as_bytes()) {
        Some(node) => Some(node),
        None => {
            context.errors.push(LangError::syntax_err(
                &node,
                &format!("{} field expected in parser tree", field),
            ));
            None
        }
    }
}

fn parse_usize(context: &mut FileContext, node: &Node) -> Option<usize> {
    let string = node_text(&node, context)?;
    string
        .parse::<usize>()
        .map_err(|err| {
            context.errors.push(LangError::syntax_err(
                node,
                &format!("Failed to parse integer: {}", err),
            ));
            err
        })
        .ok()
}

fn collect_errors(node: Node, source: &str, errors: &mut Vec<LangError>) {
    if !node.has_error() && !node.is_missing() {
        return;
    }

    let mut queue: Vec<Node> = Vec::new();
    queue.push(node);
    while let Some(current) = queue.pop() {
        if current.is_error() || current.is_missing() {
            errors.push(LangError::syntax_err(
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
