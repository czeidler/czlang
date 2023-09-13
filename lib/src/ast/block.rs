use tree_sitter::Node;

use crate::{tree_sitter::find_node, types::Ptr};

use super::{
    child, child_by_field, node_text, parse_expression, parse_loop, parse_types, Expression,
    FileContext, Function, Loop, NodeData, RefType,
};

#[derive(Debug, Clone)]
pub enum BlockParent {
    Function(Ptr<Function>),
    Block(Ptr<Block>),
}

#[derive(Debug, Clone)]
pub enum BlockType {
    Function,
    Expression,
    If,
    /// if or if/else block
    IfAlternative,
    Loop,
}

#[derive(Debug)]
pub struct Block {
    pub context: Ptr<FileContext>,
    pub parent: BlockParent,
    pub r#type: BlockType,

    pub node: NodeData,
}

impl Block {
    pub fn fun(&self) -> Ptr<Function> {
        match &self.parent {
            BlockParent::Function(fun) => fun.clone(),
            BlockParent::Block(block) => block.fun(),
        }
    }

    pub fn in_loop(&self) -> bool {
        if let BlockType::Loop = &self.r#type {
            return true;
        }
        match &self.parent {
            BlockParent::Function(_) => false,
            BlockParent::Block(block) => block.in_loop(),
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
pub struct ReturnStatement {
    pub node: NodeData,
    pub expression: Option<Expression>,
}

#[derive(Debug, Clone)]
pub struct ExpressionStatement {
    pub expression: Expression,
}

#[derive(Debug, Clone)]
pub struct AssignmentStatement {
    pub node: NodeData,
    pub left: Expression,
    pub right: Expression,
}

#[derive(Debug, Clone)]
pub enum Statement {
    Expression(ExpressionStatement),
    VarDeclaration(Ptr<VarDeclaration>),
    Assignment(AssignmentStatement),
    Return(ReturnStatement),
    Loop(Loop),
    Break(NodeData),
    Continue(NodeData),
}

impl Statement {
    pub fn node(&self) -> &NodeData {
        match self {
            Statement::Expression(expr) => &expr.expression.node,
            Statement::VarDeclaration(var) => &var.node,
            Statement::Assignment(assignment) => &assignment.node,
            Statement::Return(ret) => &ret.node,
            Statement::Loop(l) => &l.node,
            Statement::Break(node) => &node,
            Statement::Continue(node) => &node,
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
                "assignment_statement" => parse_assignment(&self.file, statement_node, &self.block)
                    .map(|statement| Statement::Assignment(statement)),
                "return_statement" => {
                    parse_return_statement(&self.file, &statement_node, &self.block)
                        .map(|statement| Statement::Return(statement))
                }
                "for_statement" => parse_loop(&self.file, &statement_node, &self.block)
                    .map(|statement| Statement::Loop(statement)),
                "break_statement" => Some(Statement::Break(NodeData::from_node(&statement_node))),
                "continue_statement" => {
                    Some(Statement::Continue(NodeData::from_node(&statement_node)))
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

pub(crate) fn parse_block<'a>(
    file: &Ptr<FileContext>,
    node: &Node<'a>,
    r#type: BlockType,
    parent: BlockParent,
) -> Ptr<Block> {
    Ptr::new(Block {
        context: file.clone(),
        parent,
        r#type,
        node: NodeData::from_node(node),
    })
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

fn parse_assignment<'a>(
    context: &Ptr<FileContext>,
    node: Node<'a>,
    block: &Ptr<Block>,
) -> Option<AssignmentStatement> {
    let left = child_by_field(&node, "left")?;
    let right = child_by_field(&node, "right")?;
    Some(AssignmentStatement {
        node: NodeData::from_node(&node),
        left: parse_expression(context, &left, block)?,
        right: parse_expression(context, &right, block)?,
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
