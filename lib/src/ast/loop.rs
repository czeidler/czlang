use tree_sitter::Node;

use crate::types::Ptr;

use super::{
    child_by_field, node_text, parse_block, parse_expression, Block, BlockParent, BlockType,
    Expression, FileContext, NodeData,
};

#[derive(Debug, Clone)]
pub struct LoopRange {
    pub node: NodeData,
    pub variable: String,
    pub variable_node: NodeData,
    pub from: Expression,
    pub to_inclusive: bool,
    pub to: Expression,
}

#[derive(Debug, Clone)]
pub struct Loop {
    pub node: NodeData,
    pub range: Option<LoopRange>,
    pub body: Ptr<Block>,
}

pub(crate) fn parse_loop<'a>(
    context: &Ptr<FileContext>,
    node: &Node<'a>,
    block: &Ptr<Block>,
) -> Option<Loop> {
    let range_node = child_by_field(&node, "range");
    let block_node = child_by_field(&node, "block")?;
    let range = if range_node.is_some() {
        Some(parse_loop_range(context, &node, block)?)
    } else {
        None
    };

    Some(Loop {
        node: NodeData::from_node(&node),
        range,
        body: parse_block(
            context,
            &block_node,
            BlockType::Loop,
            BlockParent::Block(block.clone()),
        ),
    })
}

fn parse_loop_range<'a>(
    context: &Ptr<FileContext>,
    node: &Node<'a>,
    block: &Ptr<Block>,
) -> Option<LoopRange> {
    let var_node = child_by_field(&node, "var")?;
    let variable = node_text(&var_node, context)?;
    let from_node = child_by_field(&node, "from")?;
    let from = parse_expression(context, &from_node, block)?;
    let op_node = child_by_field(&node, "op")?;
    let op = node_text(&op_node, context)?;
    let to_node = child_by_field(&node, "to")?;
    let to: Expression = parse_expression(context, &to_node, block)?;

    Some(LoopRange {
        node: NodeData::from_node(node),
        variable,
        variable_node: NodeData::from_node(&var_node),
        from,
        to_inclusive: op == "..=",
        to,
    })
}
