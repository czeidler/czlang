use czlanglib::{
    ast::{
        Block, BlockTrait, Expression, ExpressionType, FileTrait, FunctionTrait, IfAlternative,
        IfExpression, RootSymbol, SourceSpan, Statement,
    },
    project::ProjectFile,
    semantics::{types::types_to_string, TypeQueryContext},
    types::Ptr,
};
use lsp_types::{InlayHint, InlayHintKind, InlayHintLabel, Position};

fn has_row_overlap(left: &SourceSpan, right: &SourceSpan) -> bool {
    if left.start.row > right.end.row {
        return false;
    }
    if left.end.row < right.start.row {
        return false;
    }

    true
}

fn inlay_hint_from_block(
    file: &mut ProjectFile,
    block: &Ptr<Block>,
    range: &SourceSpan,
    hints: &mut Vec<InlayHint>,
) {
    if !has_row_overlap(&block.node.span, range) {
        return;
    }
    for statement in block.statements() {
        match statement {
            Statement::Expression(exp) => {
                inlay_hints_from_expr(file, &block, range, &exp.expression, hints);
            }
            Statement::VarDeclaration(var) => {
                if var.types.is_none() {
                    let var_type = file
                        .file_analyzer
                        .query_var_types(&TypeQueryContext::from_block(block), &var);
                    hints.push(InlayHint {
                        position: Position {
                            line: var.name_node.span.end.row as u32,
                            character: var.name_node.span.end.column as u32,
                        },
                        label: InlayHintLabel::String(format!(
                            " {}",
                            types_to_string(var_type.types())
                        )),
                        kind: Some(InlayHintKind::TYPE),
                        text_edits: None,
                        tooltip: None,
                        padding_left: None,
                        padding_right: None,
                        data: None,
                    });
                }
                inlay_hints_from_expr(file, &block, range, &var.value, hints);
            }
            Statement::Return(ret) => {
                if let Some(expr) = &ret.expression {
                    inlay_hints_from_expr(file, &block, range, expr, hints);
                }
            }
        }
    }
}

fn inlay_hint_from_if_expr(
    file: &mut ProjectFile,
    block: &Block,
    range: &SourceSpan,
    if_expr: &IfExpression,
    hints: &mut Vec<InlayHint>,
) {
    inlay_hints_from_expr(file, &block, range, &if_expr.condition, hints);
    inlay_hint_from_block(file, &if_expr.consequence, range, hints);
    if let Some(alternative) = &if_expr.alternative {
        match alternative {
            IfAlternative::Else(else_alt) => {
                inlay_hint_from_block(file, else_alt, range, hints);
            }
            IfAlternative::If(if_alt) => {
                inlay_hint_from_if_expr(file, block, range, &if_alt, hints)
            }
        }
    }
}
fn inlay_hints_from_expr(
    file: &mut ProjectFile,
    block: &Block,
    range: &SourceSpan,
    expr: &Expression,
    hints: &mut Vec<InlayHint>,
) {
    if !has_row_overlap(&expr.node.span, range) {
        return;
    }
    match &expr.r#type {
        ExpressionType::If(if_expr) => inlay_hint_from_if_expr(file, block, range, &if_expr, hints),
        ExpressionType::EitherCheck(either_check) => {
            inlay_hints_from_expr(file, &block, range, &either_check.left, hints);
        }
        ExpressionType::Block(block) => {
            inlay_hint_from_block(file, block, range, hints);
        }
        ExpressionType::UnaryExpression(unary) => {
            inlay_hints_from_expr(file, &block, range, &unary.operand, hints);
        }
        ExpressionType::BinaryExpression(binary) => {
            inlay_hints_from_expr(file, &block, range, &binary.left, hints);
            inlay_hints_from_expr(file, &block, range, &binary.right, hints);
        }
        _ => {}
    }
}

pub fn inlay_hints(file: &mut ProjectFile, range: &SourceSpan) -> Vec<InlayHint> {
    let mut hints = vec![];
    for entry in file.file.children() {
        match entry {
            RootSymbol::Function(fun) => {
                if !has_row_overlap(&fun.body_node.span, range) {
                    continue;
                }
                let body = fun.body();
                inlay_hint_from_block(file, &body, range, &mut hints);
            }
            RootSymbol::Struct(_) => continue,
        }
    }
    hints
}
