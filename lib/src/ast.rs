use std::{cmp::Ordering, hash::Hash, sync::Arc};

use tree_sitter::{Node, Tree};

use crate::{
    tree_sitter::{find_node, parse},
    types::Ptr,
};

// ast:

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

#[derive(Debug, Clone, Eq, PartialEq, Hash, PartialOrd, Ord)]
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

pub enum RootSymbol {
    Function(Ptr<Function>),
    Struct(Ptr<Struct>),
}

pub trait FileTrait {
    fn children(&self) -> FileSymbolIterator;
}

impl FileTrait for Ptr<FileContext> {
    fn children(&self) -> FileSymbolIterator {
        FileSymbolIterator::new(self.clone())
    }
}

pub struct FileSymbolIterator {
    file: Ptr<FileContext>,
    index: usize,
}

impl FileSymbolIterator {
    fn new(file: Ptr<FileContext>) -> Self {
        FileSymbolIterator { file, index: 0 }
    }
}

impl Iterator for FileSymbolIterator {
    type Item = RootSymbol;
    fn next(&mut self) -> Option<Self::Item> {
        let root = self.file.tree.root_node();
        loop {
            let Some(child) = root.child(self.index) else {
                return None;
            };
            self.index = self.index + 1;
            match child.kind() {
                "function_definition" => {
                    if let Some(fun) = parse_fun(&self.file, &child) {
                        return Some(RootSymbol::Function(fun));
                    } else {
                        log::error!("Invalid function_definition: {:?}", child);
                    }
                }
                "struct_declaration" => {
                    if let Some(struct_def) = parse_struct(&self.file, &child) {
                        return Some(RootSymbol::Struct(struct_def));
                    } else {
                        log::error!("Invalid struct_declaration: {:?}", child);
                    }
                }
                "method_definition" => {
                    if let Some(method) = parse_method(&self.file, &child) {
                        return Some(RootSymbol::Function(method));
                    } else {
                        log::error!("Invalid method_definition: {:?}", child);
                    }
                }
                _ => {}
            };
        }
    }
}

#[derive(Debug, Clone)]
pub struct Struct {
    pub node: NodeData,

    pub name: String,
    pub name_node: NodeData,
    pub type_params: Option<Vec<TypeParam>>,
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
    pub name_node: NodeData,
    pub types: Vec<RefType>,
}

impl Field {
    pub fn has_reference(&self) -> bool {
        self.types.iter().any(|it| it.is_reference)
    }
}

#[derive(Debug, Clone)]
pub struct ReturnType {
    pub node: NodeData,
    pub types: Vec<RefType>,
}

#[derive(Debug, Clone)]
pub struct FunctionSignature {
    pub node: NodeData,

    /// If a method, the named receiver struct, e.g. (m &MyStruct)
    pub receiver: Option<Parameter>,

    pub name: String,
    pub name_node: NodeData,
    pub parameters: Vec<Parameter>,
    pub return_type: Option<ReturnType>,
}

/// Either a function or a method
#[derive(Debug, Clone)]
pub struct Function {
    pub file: Ptr<FileContext>,

    pub signature: FunctionSignature,
    pub body_node: NodeData,
}

impl Function {
    pub fn file(&self) -> Ptr<FileContext> {
        self.file.clone()
    }
}

pub trait FunctionTrait {
    fn body(&self) -> Ptr<Block>;
}

impl FunctionTrait for Ptr<Function> {
    fn body(&self) -> Ptr<Block> {
        let position = &self.body_node.span.start;
        let body_node = find_node(
            &self.file.tree,
            self.body_node.id,
            position.row,
            position.column,
        )
        .unwrap();
        parse_block(&self.file, &body_node, BlockParent::Function(self.clone()))
    }
}

#[derive(Debug)]
pub struct Block {
    pub context: Ptr<FileContext>,
    pub parent: BlockParent,

    pub node: NodeData,
}

impl Block {
    pub fn fun(&self) -> Ptr<Function> {
        match &self.parent {
            BlockParent::Function(fun) => fun.clone(),
            BlockParent::Block(block) => block.fun(),
        }
    }
}

pub trait BlockTrait {
    fn statements(&self) -> StatementIterator;
}

impl BlockTrait for Ptr<Block> {
    fn statements(&self) -> StatementIterator {
        let position = &self.node.span.start;
        let node = find_node(
            &self.context.tree,
            self.node.id,
            position.row,
            position.column,
        )
        .unwrap();
        StatementIterator {
            file: self.context.clone(),
            block: self.clone(),
            node,
            index: 1,
        }
    }
}

pub struct StatementIterator<'a> {
    file: Ptr<FileContext>,
    block: Ptr<Block>,
    node: Node<'a>,
    index: usize,
}

impl<'a> Iterator for StatementIterator<'a> {
    type Item = Statement;
    fn next(&mut self) -> Option<Self::Item> {
        while self.index < self.node.child_count() {
            let statement_node = child(&self.node, "statement", self.index);
            self.index = self.index + 1;

            let statement_node = match statement_node {
                Some(statement_node) => statement_node,
                None => {
                    continue;
                }
            };
            let next = match statement_node.kind() {
                "expression_statement" => {
                    let expression_node = match child_by_field(&statement_node, "expression") {
                        Some(expression_node) => expression_node,
                        None => continue,
                    };
                    let Some(expression) = parse_expression(&self.file, &expression_node, &self.block) else {
                        continue;
                    };

                    Some(Statement::Expression(ExpressionStatement { expression }))
                }
                "var_declaration" => parse_var_declaration(&self.file, statement_node, &self.block)
                    .map(|statement| Statement::VarDeclaration(Ptr::new(statement))),
                "return_statement" => {
                    parse_return_statement(&self.file, &statement_node, &self.block)
                        .map(|statement| Statement::Return(statement))
                }
                _ => None,
            };

            if next.is_some() {
                return next;
            }
        }
        None
    }
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
    pub name_node: NodeData,
    pub name: String,
    pub is_mutable: bool,
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
    /// For example, for nullable or error types
    Either(Vec<RefType>, Vec<RefType>),
}

#[derive(Debug, Clone, Eq, Hash)]
pub struct RefType {
    pub node: NodeData,
    pub is_reference: bool,
    pub is_mut: bool,
    pub r#type: Type,
}

impl PartialOrd for RefType {
    fn partial_cmp(&self, other: &Self) -> Option<Ordering> {
        Some(Ord::cmp(self, other))
    }
}

impl Ord for RefType {
    fn cmp(&self, other: &Self) -> Ordering {
        match self.r#type.cmp(&other.r#type) {
            Ordering::Less => Ordering::Less,
            Ordering::Greater => Ordering::Greater,
            Ordering::Equal => {
                if self.is_reference == other.is_reference {
                    Ordering::Equal
                } else if self.node.id < other.node.id {
                    Ordering::Less
                } else {
                    Ordering::Greater
                }
            }
        }
    }
}

impl PartialEq for RefType {
    fn eq(&self, other: &RefType) -> bool {
        self.is_reference == other.is_reference
            && self.r#type == other.r#type
            && self.is_mut == other.is_mut
    }
}

impl RefType {
    pub fn value(node: NodeData, r#type: Type) -> RefType {
        RefType {
            node,
            is_reference: false,
            is_mut: false,
            r#type,
        }
    }

    pub fn reference(node: NodeData, r#type: Type) -> RefType {
        RefType {
            node,
            is_reference: true,
            is_mut: false,
            r#type,
        }
    }
}

#[derive(Debug, Clone)]
pub enum TypeParamType {
    Identifier(String),
    GenericTypeParam(String, Vec<TypeParam>),
}

#[derive(Debug, Clone)]
pub struct TypeParam {
    pub node: NodeData,
    pub r#type: TypeParamType,
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
pub struct ReturnStatement {
    pub node: NodeData,
    pub expression: Option<Expression>,
}

#[derive(Debug, Clone)]
pub struct ExpressionStatement {
    pub expression: Expression,
}

#[derive(Debug, Clone)]
pub enum Statement {
    Expression(ExpressionStatement),
    VarDeclaration(Ptr<VarDeclaration>),
    Return(ReturnStatement),
}

impl Statement {
    pub fn node(&self) -> &NodeData {
        match self {
            Statement::Expression(expr) => &expr.expression.node,
            Statement::VarDeclaration(var) => &var.node,
            Statement::Return(ret) => &ret.node,
        }
    }
}

#[derive(Debug, Clone)]
pub struct VarDeclaration {
    pub node: NodeData,
    pub name: String,
    pub name_node: NodeData,
    pub is_mutable: bool,
    pub types: Option<Vec<RefType>>,
    pub value: Expression,
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
    pub name_node: NodeData,
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
    Call(FunctionCall),
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
pub struct PipeExpression {
    pub left: Box<Expression>,
    pub right: Box<Expression>,
    pub is_err_pipe: bool,
}

#[derive(Debug, Clone)]
pub struct ReturnErrorPipeExpression {
    pub left: Box<Expression>,
}

#[derive(Debug, Clone)]
pub struct EitherCheckExpression {
    pub left: Box<Expression>,
    pub is_equal: bool,
}

#[derive(Debug, Clone)]
pub struct Expression {
    pub node: NodeData,
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
    StructInitialization(StructInitialization),
    SelectorExpression(SelectorExpression),
    Block(Ptr<Block>),
    If(Ptr<IfExpression>),
    ErrorExpression(Box<Expression>),
    Pipe(PipeExpression),
    ReturnErrorPipe(ReturnErrorPipeExpression),
    EitherCheck(EitherCheckExpression),
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
    Else(Ptr<Block>),
    If(Ptr<IfExpression>),
}

#[derive(Debug, Clone)]
pub struct IfExpression {
    pub node: NodeData,
    pub condition: Expression,
    pub consequence: Ptr<Block>,
    pub alternative: Option<IfAlternative>,
}

#[derive(Debug, Clone)]
pub struct FileData<'a> {
    pub file_path: &'a str,
    pub source: &'a str,
}

#[derive(Debug, Clone)]
pub struct FileContext {
    pub tree: Tree,
    pub file_path: String,
    pub source: String,
}

impl FileContext {
    pub fn parse(file_path: String, source: String, errors: &mut Vec<LangError>) -> Ptr<Self> {
        let tree = parse(&source, None);
        collect_errors(tree.root_node(), &source, errors);
        Arc::new(FileContext {
            tree,
            file_path,
            source,
        })
    }

    pub fn parse_from_existing_tree(
        file_path: String,
        source: String,
        old_tree: &Tree,
        errors: &mut Vec<LangError>,
    ) -> Ptr<Self> {
        let tree = parse(&source, Some(old_tree));
        collect_errors(tree.root_node(), &source, errors);
        Arc::new(FileContext {
            tree,
            file_path,
            source,
        })
    }
}

fn parse_method<'a>(file: &Ptr<FileContext>, node: &Node<'a>) -> Option<Ptr<Function>> {
    let name = child_by_field(&node, "name")?;
    let receiver_node = child_by_field(&node, "receiver")?;
    // parse the receiver as a parameter
    let receiver = parse_parameter(file, receiver_node)?;
    let parameter_list = child_by_field(&node, "parameters")?;
    let return_type = match node.child_by_field_name("result".as_bytes()) {
        Some(return_node) => Some(ReturnType {
            node: NodeData::from_node(&return_node),
            types: parse_types(file, &return_node).unwrap_or(vec![]),
        }),
        None => None,
    };
    let body_node: Node = child_by_field(&node, "body")?;

    let method = Ptr::new(Function {
        file: file.clone(),
        signature: FunctionSignature {
            node: NodeData::from_node(&node),
            receiver: Some(receiver),
            name: node_text(&name, file)?,
            name_node: NodeData::from_node(&name),
            parameters: parse_parameters(file, parameter_list)?,
            return_type,
        },
        body_node: NodeData::from_node(&body_node),
    });
    Some(method)
}

fn parse_fun<'a>(file: &Ptr<FileContext>, node: &Node<'a>) -> Option<Ptr<Function>> {
    let name = child_by_field(&node, "name")?;
    let parameter_list = child_by_field(&node, "parameters")?;
    let return_type = match node.child_by_field_name("result".as_bytes()) {
        Some(return_node) => Some(ReturnType {
            node: NodeData::from_node(&return_node),
            types: parse_types(file, &return_node).unwrap_or(vec![]),
        }),
        None => None,
    };
    let body_node: Node = child_by_field(&node, "body")?;

    let fun = Ptr::new(Function {
        file: file.clone(),
        signature: FunctionSignature {
            node: NodeData::from_node(&node),
            receiver: None,
            name: node_text(&name, file)?,
            name_node: NodeData::from_node(&name),
            parameters: parse_parameters(file, parameter_list)?,
            return_type,
        },
        body_node: NodeData::from_node(&body_node),
    });
    Some(fun)
}

fn parse_type_param<'a>(context: &Ptr<FileContext>, node: &Node<'a>) -> Option<TypeParamType> {
    let t = match node.kind() {
        "identifier" => {
            let type_text = node_text(&node, context)?;
            TypeParamType::Identifier(type_text)
        }
        "generic_type_param" => {
            let identifier_node = child_by_field(&node, "type")?;
            let identifier = node_text(&identifier_node, context)?;
            let type_arguments = child_by_field(&node, "type_arguments")?;
            let parameters = parse_type_params(context, &type_arguments);
            TypeParamType::GenericTypeParam(identifier, parameters)
        }
        _ => {
            log::error!("Unsupported type param type: {}", node.kind());
            return None;
        }
    };
    Some(t)
}

fn parse_type_params<'a>(context: &Ptr<FileContext>, node: &Node<'a>) -> Vec<TypeParam> {
    let mut output = vec![];
    let mut cursor = node.walk();
    for type_node in node.children_by_field_name("type", &mut cursor) {
        if let Some(t) = parse_type_param(context, &type_node) {
            output.push(TypeParam {
                node: NodeData::from_node(&type_node),
                r#type: t,
            });
        }
    }
    output
}

fn parse_struct<'a>(context: &Ptr<FileContext>, node: &Node<'a>) -> Option<Ptr<Struct>> {
    let name = child_by_field(&node, "name")?;
    let type_params = child_by_field(&node, "type_params");
    let type_params = type_params.map(|a| parse_type_params(context, &a));
    let fields = child_by_field(&node, "fields")?;
    let fields = parse_struct_fields(context, &fields, node);
    Some(Ptr::new(Struct {
        node: NodeData::from_node(&node),
        name: node_text(&name, context)?,
        name_node: NodeData::from_node(&name),
        type_params,
        fields,
    }))
}

fn parse_struct_fields<'a>(
    context: &Ptr<FileContext>,
    node: &Node<'a>,
    parent: &Node<'a>,
) -> Vec<Field> {
    let mut fields = Vec::new();
    let mut cursor = node.walk();
    for field_node in node.children_by_field_name("field", &mut cursor) {
        if let Some(field) = parse_struct_field(context, &field_node, parent) {
            fields.push(field);
        } else {
            break;
        }
    }
    fields
}

fn parse_struct_field<'a>(
    context: &Ptr<FileContext>,
    node: &Node<'a>,
    parent: &Node<'a>,
) -> Option<Field> {
    let name = child_by_field(&node, "name")?;
    let field_type = child_by_field(&node, "type")?;

    Some(Field {
        node: NodeData {
            id: node.id(),
            parent: parent.id(),
            span: SourceSpan::from_node(&node),
        },

        name: node_text(&name, context)?,
        name_node: NodeData::from_node(&name),
        types: parse_types(context, &field_type)?,
    })
}

fn parse_block<'a>(file: &Ptr<FileContext>, node: &Node<'a>, parent: BlockParent) -> Ptr<Block> {
    Ptr::new(Block {
        context: file.clone(),
        parent,
        node: NodeData::from_node(node),
    })
}

fn parse_function_call(
    context: &Ptr<FileContext>,
    node: &Node,
    block: &Ptr<Block>,
) -> Option<FunctionCall> {
    let name = child(node, "function name", 0)?;
    let arguments_list = child(node, "arguments", 1)?;
    let arguments = parse_function_call_arguments(context, &arguments_list, block)?;

    Some(FunctionCall {
        node: NodeData::from_node(node),
        name: node_text(&name, context)?,
        name_node: NodeData::from_node(&name),
        arguments,
    })
}

fn parse_function_call_arguments(
    context: &Ptr<FileContext>,
    node: &Node,
    block: &Ptr<Block>,
) -> Option<Vec<Expression>> {
    let mut arguments = Vec::new();
    let mut cursor = node.walk();
    for argument_node in node.children_by_field_name("argument", &mut cursor) {
        arguments.push(parse_expression(context, &argument_node, block)?);
    }

    Some(arguments)
}

fn parse_struct_field_initialization(
    context: &Ptr<FileContext>,
    node: &Node,
    block: &Ptr<Block>,
) -> Option<StructFieldInitialization> {
    let name = child(node, "name", 0)?;
    let value_node = child(node, "value", 2)?;

    Some(StructFieldInitialization {
        node: NodeData::from_node(&node),
        name: node_text(&name, context)?,
        name_node: NodeData::from_node(&name),
        value: parse_expression(context, &value_node, block)?,
    })
}

fn parse_struct_initialization(
    context: &Ptr<FileContext>,
    node: &Node,
    block: &Ptr<Block>,
) -> Option<StructInitialization> {
    let name = child(node, "name", 0)?;

    let mut fields: Vec<StructFieldInitialization> = Vec::new();
    let mut cursor = node.walk();
    for field_init in node.children_by_field_name("field_init", &mut cursor) {
        match field_init.kind() {
            "keyed_element" => {
                let Some(field) = parse_struct_field_initialization(context, &field_init, block) else {
                    continue;
                };
                fields.push(field);
            }
            _ => {
                log::error!("Unsupported field kind: {}", field_init.kind());
            }
        }
    }
    Some(StructInitialization {
        node: NodeData::from_node(&node),
        name: node_text(&name, context)?,
        name_node: NodeData::from_node(&name),
        fields,
    })
}

fn parse_selector_field(
    context: &Ptr<FileContext>,
    node: &Node,
    block: &Ptr<Block>,
) -> Option<SelectorField> {
    let chaining = child(node, "chaining", 0)?;
    let chaining_text = node_text(&chaining, context)?;
    let field = child(node, "field", 1)?;
    let field = match field.kind() {
        "identifier" => SelectorFieldType::Identifier(node_text(&field, context)?),
        "function_call" => SelectorFieldType::Call(parse_function_call(context, &field, block)?),
        _ => return None,
    };
    Some(SelectorField {
        node: NodeData::from_node(node),
        optional_chaining: chaining_text == "?.",
        field,
    })
}

fn parse_selector_expression(
    context: &Ptr<FileContext>,
    node: &Node,
    block: &Ptr<Block>,
) -> Option<SelectorExpression> {
    let operand = child(node, "operand", 0)?;
    let root = Box::new(parse_expression(context, &operand, block)?);
    let mut fields: Vec<SelectorField> = Vec::new();
    let mut cursor = node.walk();
    for selector_field in node.children_by_field_name("selector_field", &mut cursor) {
        let Some(field) = parse_selector_field(context, &selector_field, block) else {
            continue;
        };
        fields.push(field);
    }
    Some(SelectorExpression { root, fields })
}

fn parse_expression(
    context: &Ptr<FileContext>,
    node: &Node,
    block: &Ptr<Block>,
) -> Option<Expression> {
    let expression_type = match node.kind() {
        "identifier" => ExpressionType::Identifier(node_text(&node, context)?),
        "int_literal" => ExpressionType::IntLiteral(parse_usize(context, node)?),
        "interpreted_string_literal" => ExpressionType::String(parse_string(context, node, block)?),
        "null" => ExpressionType::Null,
        "true" => ExpressionType::Bool(true),
        "false" => ExpressionType::Bool(false),
        "unary_expression" => {
            ExpressionType::UnaryExpression(parse_unary_expression(context, node, block)?)
        }
        "binary_expression" => {
            ExpressionType::BinaryExpression(parse_binary_expression(context, node, block)?)
        }
        "parenthesized_expression" => ExpressionType::ParenthesizedExpression(
            parse_parenthesized_expression(context, node, block)?,
        ),
        "array_expression" => {
            ExpressionType::ArrayExpression(parse_array_expression(context, node, block)?)
        }
        "slice_expression" => {
            ExpressionType::SliceExpression(parse_slice_expression(context, node, block)?)
        }
        "function_call" => {
            ExpressionType::FunctionCall(parse_function_call(context, &node, block)?)
        }
        "struct_initialization" => ExpressionType::StructInitialization(
            parse_struct_initialization(context, &node, block)?,
        ),
        "selector_expression" => {
            ExpressionType::SelectorExpression(parse_selector_expression(context, &node, block)?)
        }
        "block" => ExpressionType::Block(parse_block(
            context,
            &node,
            BlockParent::Block(block.clone()),
        )),
        "if_expression" => ExpressionType::If(parse_if(context, &node, block)?),
        "error_expression" => {
            let error_expr = child_by_field(&node, "error")?;
            ExpressionType::ErrorExpression(Box::new(parse_expression(
                context,
                &error_expr,
                block,
            )?))
        }
        "pipe_expression" => {
            ExpressionType::Pipe(parse_pipe_expression(context, node, block, false)?)
        }
        "err_pipe_expression" => {
            ExpressionType::Pipe(parse_pipe_expression(context, node, block, true)?)
        }
        "return_err_pipe_expression" => {
            ExpressionType::ReturnErrorPipe(parse_return_err_pipe_expression(context, node, block)?)
        }
        "either_check_expression" => {
            ExpressionType::EitherCheck(parse_either_check_expression(context, node, block)?)
        }
        _ => {
            log::error!("Unknown expression kind: {}", node.kind());
            return None;
        }
    };
    Some(Expression {
        node: NodeData::from_node(&node),
        r#type: expression_type,
    })
}

fn parse_either_check_expression(
    context: &Ptr<FileContext>,
    node: &Node,
    block: &Ptr<Block>,
) -> Option<EitherCheckExpression> {
    let left = child_by_field(&node, "left")?;
    let operator = child_by_field(&node, "op")?;
    let operator = node_text(&operator, context)?;
    Some(EitherCheckExpression {
        left: Box::new(parse_expression(context, &left, block)?),
        is_equal: operator == "==",
    })
}

fn parse_pipe_expression(
    context: &Ptr<FileContext>,
    node: &Node,
    block: &Ptr<Block>,
    is_err_pipe: bool,
) -> Option<PipeExpression> {
    let left = child_by_field(&node, "left")?;
    let right = child_by_field(&node, "right")?;
    Some(PipeExpression {
        left: Box::new(parse_expression(context, &left, block)?),
        right: Box::new(parse_expression(context, &right, block)?),
        is_err_pipe,
    })
}

fn parse_return_err_pipe_expression(
    context: &Ptr<FileContext>,
    node: &Node,
    block: &Ptr<Block>,
) -> Option<ReturnErrorPipeExpression> {
    let left = child_by_field(&node, "left")?;
    Some(ReturnErrorPipeExpression {
        left: Box::new(parse_expression(context, &left, block)?),
    })
}

fn parse_unary_expression(
    context: &Ptr<FileContext>,
    node: &Node,
    block: &Ptr<Block>,
) -> Option<UnaryExpression> {
    let operator = child_by_field(&node, "operator")?;
    let string = node_text(&operator, context)?;
    let operator = match string.as_str() {
        "-" => UnaryOperator::Minus,
        "!" => UnaryOperator::Not,
        "&" => UnaryOperator::Reference,
        "typeof" => UnaryOperator::TypeOf,
        unknown => {
            log::error!("Unknown unary operator: {}", unknown);
            return None;
        }
    };
    let operand = child_by_field(&node, "operand")?;
    Some(UnaryExpression {
        operator,
        operand: Box::new(parse_expression(context, &operand, block)?),
    })
}

fn parse_binary_expression(
    context: &Ptr<FileContext>,
    node: &Node,
    block: &Ptr<Block>,
) -> Option<BinaryExpression> {
    let operator = child_by_field(&node, "operator")?;
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
            log::error!("Unknown binary operator: {}", unknown);
            return None;
        }
    };
    let left = child_by_field(&node, "left")?;
    let right = child_by_field(&node, "right")?;
    Some(BinaryExpression {
        operator,
        left: Box::new(parse_expression(context, &left, block)?),
        right: Box::new(parse_expression(context, &right, block)?),
    })
}

fn parse_parenthesized_expression(
    context: &Ptr<FileContext>,
    node: &Node,
    block: &Ptr<Block>,
) -> Option<ParenthesizedExpression> {
    let expression = child_by_field(&node, "expression")?;
    Some(ParenthesizedExpression {
        expression: Box::new(parse_expression(context, &expression, block)?),
    })
}

fn parse_array_expression(
    context: &Ptr<FileContext>,
    node: &Node,
    block: &Ptr<Block>,
) -> Option<ArrayExpression> {
    let mut expressions = Vec::new();
    let mut cursor = node.walk();
    for child in node.children_by_field_name("expression", &mut cursor) {
        expressions.push(parse_expression(context, &child, block)?);
    }

    Some(ArrayExpression { expressions })
}

fn parse_slice_expression(
    context: &Ptr<FileContext>,
    node: &Node,
    block: &Ptr<Block>,
) -> Option<SliceExpression> {
    let operand = child_by_field(&node, "operand")?;
    let start = match node.child_by_field_name("start".as_bytes()) {
        Some(n) => Some(parse_usize(context, &n)?),
        None => None,
    };
    let end = match node.child_by_field_name("end".as_bytes()) {
        Some(n) => Some(parse_usize(context, &n)?),
        None => None,
    };

    Some(SliceExpression {
        operand: Ptr::new(parse_expression(context, &operand, block)?),
        start,
        end,
    })
}

fn parse_string(
    context: &Ptr<FileContext>,
    node: &Node,
    block: &Ptr<Block>,
) -> Option<StringTemplate> {
    let start_column = node.start_position().column;
    let string = node_text(&node, context)?;
    let string = string.as_str()[1..string.len() - 1].to_string();
    let mut position = 0;
    let mut template = StringTemplate::new();
    let mut cursor = node.walk();
    for embedded_expr in node.children_by_field_name("embedded_expr", &mut cursor) {
        let expression_node = child_by_field(&embedded_expr, "expression")?;
        let expression = parse_expression(context, &expression_node, block)?;
        template.push(StringTemplatePart::String(
            string.as_str()[position..embedded_expr.start_position().column - start_column - 1]
                .to_string(),
        ));
        position = embedded_expr.end_position().column - start_column - 1;
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
    context: &Ptr<FileContext>,
    node: Node<'a>,
    block: &Ptr<Block>,
) -> Option<VarDeclaration> {
    let is_mutable = node.child_by_field_name("mutable".as_bytes()).is_some();

    let name = child_by_field(&node, "name")?;
    let var_type = match node.child_by_field_name("type") {
        Some(var_type) => Some(parse_types(context, &var_type)?),
        None => None,
    };
    let value_node = child_by_field(&node, "value")?;
    let value = parse_expression(context, &value_node, block)?;
    Some(VarDeclaration {
        node: NodeData::from_node(&node),
        name: node_text(&name, context)?,
        name_node: NodeData::from_node(&name),
        is_mutable,
        types: var_type,
        value,
    })
}

fn parse_return_statement<'a>(
    context: &Ptr<FileContext>,
    node: &Node<'a>,
    block: &Ptr<Block>,
) -> Option<ReturnStatement> {
    let expression = match node.child_by_field_name("expression".as_bytes()) {
        Some(expression) => Some(parse_expression(context, &expression, block)?),
        None => None,
    };
    Some(ReturnStatement {
        node: NodeData::from_node(node),
        expression,
    })
}

fn parse_if<'a>(
    context: &Ptr<FileContext>,
    node: &Node<'a>,
    block: &Ptr<Block>,
) -> Option<Ptr<IfExpression>> {
    let condition = child_by_field(&node, "condition")?;
    let consequence = child_by_field(&node, "consequence")?;
    let alternative = node.child_by_field_name("alternative".as_bytes());

    let condition = parse_expression(context, &condition, &block)?;
    let consequence = parse_block(context, &consequence, BlockParent::Block(block.clone()));

    let alternative = match alternative {
        Some(alternative) => {
            if alternative.kind() == "if_expression" {
                Some(IfAlternative::If(parse_if(context, &alternative, block)?))
            } else {
                Some(IfAlternative::Else(parse_block(
                    context,
                    &alternative,
                    BlockParent::Block(block.clone()),
                )))
            }
        }
        None => None,
    };
    Some(Ptr::new(IfExpression {
        node: NodeData::from_node(&node),
        condition,
        consequence,
        alternative,
    }))
}

#[derive(Debug, Clone)]
pub enum BlockParent {
    Function(Ptr<Function>),
    Block(Ptr<Block>),
}

fn parse_parameters<'a>(context: &Ptr<FileContext>, node: Node<'a>) -> Option<Vec<Parameter>> {
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

fn parse_parameter<'a>(context: &Ptr<FileContext>, node: Node<'a>) -> Option<Parameter> {
    let is_mutable = node.child_by_field_name("mutable".as_bytes()).is_some();
    let name = node.child_by_field_name("name".as_bytes())?;
    let _type = node.child_by_field_name("type".as_bytes())?;

    Some(Parameter {
        node: NodeData::from_node(&node),
        name_node: NodeData::from_node(&name),
        name: node_text(&name, context)?,
        is_mutable,
        types: parse_types(context, &_type)?,

        origin: Some(SourceSpan::from_node(&node)),
    })
}

fn parse_type<'a>(context: &Ptr<FileContext>, node: &Node<'a>) -> Option<Type> {
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
                    log::error!("Unsupported primitve type: {}", type_text);
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
            log::error!("Unsupported type: {}", node.kind());
            return None;
        }
    };
    Some(t)
}

fn parse_types<'a>(context: &Ptr<FileContext>, node: &Node<'a>) -> Option<Vec<RefType>> {
    let types = match node.kind() {
        "parenthesized_type" => {
            let parenthesized_type = child_by_field(&node, "type")?;
            return parse_types(context, &parenthesized_type);
        }
        "sum_type" => {
            let left = child_by_field(&node, "left")?;
            let right = child_by_field(&node, "right")?;
            let mut types = parse_types(context, &left)?;
            for t in parse_types(context, &right)? {
                if types.contains(&t) {
                    log::error!("Duplicated sum type: {:?}", t);
                }
                types.push(t);
            }
            types
        }
        "reference_type" => {
            let type_node = child_by_field(&node, "type")?;
            vec![RefType {
                node: NodeData::from_node(&type_node),
                is_reference: true,
                is_mut: false,
                r#type: parse_type(context, &type_node)?,
            }]
        }
        "error_type" => {
            let type_node = child_by_field(&node, "type")?;
            let error_node = child_by_field(&node, "error")?;
            let data = parse_types(context, &type_node)?;
            let error = parse_types(context, &error_node)?;
            vec![RefType {
                node: NodeData::from_node(&type_node),
                is_reference: false,
                is_mut: false,
                r#type: Type::Either(data, error),
            }]
        }
        _ => vec![RefType {
            node: NodeData::from_node(&node),
            is_reference: false,
            is_mut: false,
            r#type: parse_type(context, node)?,
        }],
    };

    Some(types)
}

fn parse_array<'a>(context: &Ptr<FileContext>, node: &Node<'a>) -> Option<Array> {
    let element = child_by_field(&node, "element")?;
    let length = child_by_field(&node, "length")?;
    let length = parse_usize(context, &length)?;
    let types = parse_types(context, &element)?;
    Some(Array {
        types: Ptr::new(types),
        length,
    })
}

fn parse_slice<'a>(context: &Ptr<FileContext>, node: &Node<'a>) -> Option<Slice> {
    let element = child_by_field(&node, "element")?;
    let types = parse_types(context, &element)?;
    Some(Slice {
        types: Ptr::new(types),
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

    format!(
        "{}: text: {}, err: {}, children: {}",
        error_type,
        text,
        &err.to_sexp(),
        children
    )
}

fn node_text<'a>(node: &Node, context: &Ptr<FileContext>) -> Option<String> {
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

fn child<'a>(node: &Node<'a>, name: &str, index: usize) -> Option<Node<'a>> {
    match node.child(index) {
        Some(node) => Some(node),
        None => {
            log::error!("{} expected", name);
            return None;
        }
    }
}

fn child_by_field<'a>(node: &Node<'a>, field: &str) -> Option<Node<'a>> {
    match node.child_by_field_name(field.as_bytes()) {
        Some(node) => Some(node),
        None => {
            log::error!("{} field expected in parser tree", field);
            None
        }
    }
}

fn parse_usize(context: &Ptr<FileContext>, node: &Node) -> Option<usize> {
    let string = node_text(&node, context)?;
    string
        .parse::<usize>()
        .map_err(|err| {
            log::error!("Failed to parse integer: {}", err);
            err
        })
        .ok()
}

pub fn collect_errors(node: Node, source: &str, errors: &mut Vec<LangError>) {
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
