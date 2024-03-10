use std::collections::HashMap;

use crate::{
    ast::{Block, BlockTrait, Expression, LangError, Statement},
    types::Ptr,
};

use super::{
    flow_container::AnalysisState, BlockSemantics, ExpressionSemantics, PackageSemanticAnalyzer,
};

impl PackageSemanticAnalyzer {
    /// Returns the ExpressionSemantics of the last statement (if it was an expression)
    pub(crate) fn validate_block(
        &mut self,
        flow: &mut AnalysisState,
        block: &Ptr<Block>,
        is_assignment: bool,
    ) -> Option<ExpressionSemantics> {
        self.borrow_enter_block(flow, block);
        let mut last_statement: Option<Statement> = None;
        let mut last_statement_type: Option<ExpressionSemantics> = None;
        let mut returned = false;
        let mut iter = block.statements().peekable();
        while let Some(statement) = iter.next() {
            let is_last = iter.peek().is_none();
            let statement_type =
                self.validate_statement(flow, block, &statement, is_last && is_assignment);
            if flow.flow.returned.is_some() && returned {
                self.errors.push(LangError::type_error(
                    statement.node(),
                    "No statements allowed after return statement".to_string(),
                ));
            }
            returned = if !returned {
                flow.flow.returned.is_some()
            } else {
                false
            };

            if is_last {
                last_statement_type = statement_type;
                last_statement = Some(statement);
            }
        }
        if is_assignment {
            if let Some(last_statement) = &last_statement {
                match last_statement {
                    Statement::Expression(statement) => {
                        self.bind_block_return(block, &statement.expression)
                    }
                    _ => {}
                }
            } else {
                self.errors.push(LangError::type_error(
                    last_statement
                        .as_ref()
                        .map(|s| s.node())
                        .unwrap_or(&block.node),
                    "Block return expected".to_string(),
                ));
            }
        }
        self.borrow_leave_block(flow, block);
        last_statement_type
    }

    fn bind_block_return(&mut self, block: &Ptr<Block>, last_expression: &Expression) {
        let mut entry = self
            .blocks
            .entry(block.node.id())
            .or_insert(BlockSemantics {
                vars: HashMap::new(),
                block_return: None,
            });
        entry.block_return = Some(last_expression.clone());
    }
}
