use czlanglib::{
    ast::{
        Block, BlockTrait, Expression, ExpressionType, FileContext, FileTrait, FunctionTrait,
        IfAlternative, IfExpression, RootSymbol, SourceSpan, Statement,
    },
    semantics::{types::types_to_string, PackageSemanticAnalyzer, TypeQueryContext},
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
    package: &mut PackageSemanticAnalyzer,
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
                inlay_hints_from_expr(package, &block, range, &exp.expression, hints);
            }
            Statement::VarDeclaration(var) => {
                if var.types.is_none() {
                    let var_type =
                        package.query_var_types(&TypeQueryContext::from_block(block), &var);
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
                inlay_hints_from_expr(package, &block, range, &var.value, hints);
            }
            Statement::Return(ret) => {
                if let Some(expr) = &ret.expression {
                    inlay_hints_from_expr(package, &block, range, expr, hints);
                }
            }
            Statement::Loop(loop_statement) => {
                inlay_hint_from_block(package, &loop_statement.body, range, hints);
            }
            Statement::Break(_) => {}
            Statement::Continue(_) => {}
            Statement::Assignment(assignment) => {
                inlay_hints_from_expr(package, &block, range, &assignment.left, hints);
                inlay_hints_from_expr(package, &block, range, &assignment.right, hints);
            }
        }
    }
}

fn inlay_hint_from_if_expr(
    package: &mut PackageSemanticAnalyzer,
    block: &Block,
    range: &SourceSpan,
    if_expr: &IfExpression,
    hints: &mut Vec<InlayHint>,
) {
    inlay_hints_from_expr(package, &block, range, &if_expr.condition, hints);
    inlay_hint_from_block(package, &if_expr.consequence, range, hints);
    if let Some(alternative) = &if_expr.alternative {
        match alternative {
            IfAlternative::Else(else_alt) => {
                inlay_hint_from_block(package, else_alt, range, hints);
            }
            IfAlternative::If(if_alt) => {
                inlay_hint_from_if_expr(package, block, range, &if_alt, hints)
            }
        }
    }
}
fn inlay_hints_from_expr(
    package: &mut PackageSemanticAnalyzer,
    block: &Block,
    range: &SourceSpan,
    expr: &Expression,
    hints: &mut Vec<InlayHint>,
) {
    if !has_row_overlap(&expr.node.span, range) {
        return;
    }
    match &expr.r#type {
        ExpressionType::If(if_expr) => {
            inlay_hint_from_if_expr(package, block, range, &if_expr, hints)
        }
        ExpressionType::EitherCheck(either_check) => {
            inlay_hints_from_expr(package, &block, range, &either_check.left, hints);
        }
        ExpressionType::Block(block) => {
            inlay_hint_from_block(package, block, range, hints);
        }
        ExpressionType::UnaryExpression(unary) => {
            inlay_hints_from_expr(package, &block, range, &unary.operand, hints);
        }
        ExpressionType::BinaryExpression(binary) => {
            inlay_hints_from_expr(package, &block, range, &binary.left, hints);
            inlay_hints_from_expr(package, &block, range, &binary.right, hints);
        }
        _ => {}
    }
}

pub fn inlay_hints(
    package: &mut PackageSemanticAnalyzer,
    file: &Ptr<FileContext>,
    range: &SourceSpan,
) -> Vec<InlayHint> {
    let mut hints = vec![];
    for entry in file.children() {
        match entry {
            RootSymbol::Function(fun) => {
                if !has_row_overlap(&fun.body_node.span, range) {
                    continue;
                }
                let body = fun.body();
                inlay_hint_from_block(package, &body, range, &mut hints);
            }
            RootSymbol::Struct(_) => continue,
            RootSymbol::Import(_) => continue,
            RootSymbol::StructImpl(_) => continue,
        }
    }
    hints
}
