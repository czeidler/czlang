use tree_sitter::Node;

use crate::types::Ptr;

use super::{
    child, child_by_field, node_text, parse_block, parse_usize, Block, BlockParent, BlockType,
    FileContext, NodeData,
};

#[derive(Debug, Clone)]
pub enum StringTemplatePart {
    Expression(Expression),
    String(String),
}

pub type StringTemplate = Vec<StringTemplatePart>;

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
    StructInit(StructInitialization),
}

impl SelectorFieldType {
    pub fn name(&self) -> String {
        match self {
            SelectorFieldType::Identifier(id) => id.clone(),
            SelectorFieldType::Call(call) => call.name.clone(),
            SelectorFieldType::StructInit(st) => st.name.clone(),
        }
    }
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

impl ExpressionType {
    /// Try to extract a signed integer from a IntLiteral or a UnaryExpression(IntLiteral)
    pub fn as_integer_literal(&self) -> Option<i64> {
        if let ExpressionType::IntLiteral(i) = self {
            return Some(*i as i64);
        }
        if let ExpressionType::UnaryExpression(unary) = self {
            if let UnaryOperator::Minus = unary.operator {
                return unary.operand.r#type.as_integer_literal().map(|i| -i);
            }
        }

        None
    }
}

#[derive(Debug, Clone)]
pub enum UnaryOperator {
    /// -
    Minus,
    /// !
    Not,
    /// &
    Reference,
    MutReference,
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

fn parse_function_call(
    context: &Ptr<FileContext>,
    node: &Node,
    block: &Ptr<Block>,
) -> Option<FunctionCall> {
    let name = child(node, "function name", 0)?;
    let arguments_list = child(node, "arguments", 1)?;
    let arguments = parse_function_call_arguments(context, &arguments_list, block)?;

    Some(FunctionCall {
        node: context.node_data(node),
        name: node_text(&name, context)?,
        name_node: context.node_data(&name),
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
        node: context.node_data(&node),
        name: node_text(&name, context)?,
        name_node: context.node_data(&name),
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
        node: context.node_data(&node),
        name: node_text(&name, context)?,
        name_node: context.node_data(&name),
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
        "struct_initialization" => {
            SelectorFieldType::StructInit(parse_struct_initialization(context, &field, block)?)
        }
        _ => return None,
    };
    Some(SelectorField {
        node: context.node_data(node),
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
        "string_expression" => ExpressionType::String(parse_string(context, node, block)?),
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
            BlockType::Expression,
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
        node: context.node_data(&node),
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
        "&mut" => UnaryOperator::MutReference,
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
    let consequence = parse_block(
        context,
        &consequence,
        BlockType::If,
        BlockParent::Block(block.clone()),
    );

    let alternative = match alternative {
        Some(alternative) => {
            if alternative.kind() == "if_expression" {
                Some(IfAlternative::If(parse_if(context, &alternative, block)?))
            } else {
                Some(IfAlternative::Else(parse_block(
                    context,
                    &alternative,
                    BlockType::IfAlternative,
                    BlockParent::Block(block.clone()),
                )))
            }
        }
        None => None,
    };
    Some(Ptr::new(IfExpression {
        node: context.node_data(&node),
        condition,
        consequence,
        alternative,
    }))
}
