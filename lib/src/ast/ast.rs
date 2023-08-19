use std::{cmp::Ordering, hash::Hash};

use tree_sitter::Node;

use crate::types::Ptr;

use super::{
    child, child_by_field, node_text, parse_block, parse_usize, Block, BlockParent, FileContext,
    NodeData,
};

#[derive(Debug, Clone)]
pub enum StringTemplatePart {
    Expression(Expression),
    String(String),
}

pub type StringTemplate = Vec<StringTemplatePart>;

/*
#[derive(Debug, Clone, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub enum ClosureContext {
    Owned,
    MutRef,
    Ref,
    Type(Vec<RefType>),
}

#[derive(Debug, Clone, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub struct ClosureType {
    pub node: NodeData,
    /// If not set its just a function pointer
    pub context: Option<ClosureContext>,
    pub parameters: Vec<Parameter>,
    pub return_type: Option<ReturnType>,
}
*/

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

#[derive(Debug, Clone, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub enum TypeParamType {
    /// Simple type parameter
    Identifier(String),
    /// identifier + type params, e.g. IdentType<string, bool>
    GenericTypeParam(String, Vec<TypeParam>),
}

#[derive(Debug, Clone, PartialEq, Eq, Hash, PartialOrd, Ord)]
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

pub(crate) fn parse_type_param<'a>(
    context: &Ptr<FileContext>,
    node: &Node<'a>,
) -> Option<TypeParamType> {
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

pub(crate) fn parse_type_params<'a>(context: &Ptr<FileContext>, node: &Node<'a>) -> Vec<TypeParam> {
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

pub(crate) fn parse_expression(
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

pub(crate) fn parse_types<'a>(context: &Ptr<FileContext>, node: &Node<'a>) -> Option<Vec<RefType>> {
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
            let reference_node = child_by_field(&node, "reference")?;
            let reference_str = node_text(&reference_node, context)?;
            vec![RefType {
                node: NodeData::from_node(&type_node),
                is_reference: true,
                is_mut: reference_str == "&mut",
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
