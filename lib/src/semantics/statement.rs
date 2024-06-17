use std::collections::HashMap;

use crate::{
    ast::{
        AssignmentStatement, Block, LangError, Loop, ReturnStatement, Statement, VarDeclaration,
    },
    semantics::{types_to_string, ExpContext, TypeQueryContext, VarDeclarationSemantics},
    types::Ptr,
};

use super::{
    flow_container::{AnalysisState, FlowContainer},
    intersection, BlockSemantics, ExpressionSemantics, PackageSemanticAnalyzer, SumType,
};

impl PackageSemanticAnalyzer {
    /// If statement is an expression this method returns the ExpressionSemantics None.
    pub(crate) fn validate_statement(
        &mut self,
        flow: &mut AnalysisState,
        block: &Ptr<Block>,
        statement: &Statement,
        is_assignment: bool,
    ) -> Option<ExpressionSemantics> {
        match statement {
            Statement::Expression(statement) => {
                let semantics = self.validate_expression(
                    flow,
                    &ExpContext::new(block, None),
                    &statement.expression,
                    is_assignment,
                );
                return Some(semantics);
            }
            Statement::VarDeclaration(var_declaration) => {
                self.validate_var_declaration(flow, block, var_declaration.clone());
            }
            Statement::Assignment(assignment) => {
                self.validate_assignment(flow, block, assignment);
            }
            Statement::Return(ret) => {
                let return_type = self.validate_return_statement(flow, block, ret);
                flow.flow = Ptr::new(FlowContainer {
                    parent: Some(flow.flow.clone()),
                    vars: HashMap::new(),
                    returned: Some(return_type),
                });
            }
            Statement::Loop(loop_statement) => self.validate_loop(flow, block, loop_statement),
            Statement::Break(_) => {
                if !block.in_loop() {
                    self.errors.push(LangError::type_error(
                        statement.node(),
                        format!("Break statement must be in loop block"),
                    ));
                }
            }
            Statement::Continue(_) => {
                if !block.in_loop() {
                    self.errors.push(LangError::type_error(
                        statement.node(),
                        format!("Continue statement must be in loop block"),
                    ));
                }
            }
        };
        None
    }

    fn validate_loop(
        &mut self,
        flow: &mut AnalysisState,
        block: &Ptr<Block>,
        loop_statement: &Loop,
    ) {
        if let Some(range) = &loop_statement.range {
            if flow.flow.lookup(&range.variable).is_some() {
                self.errors.push(LangError::type_error(
                    &range.variable_node,
                    format!("Duplicate identifier {}", &range.variable),
                ));
            }
            let from =
                self.validate_expression(flow, &ExpContext::new(block, None), &range.from, false);
            let to =
                self.validate_expression(flow, &ExpContext::new(block, None), &range.to, false);
            let Some(from) = from.types() else {
                self.errors.push(LangError::type_error(
                    &range.from.node,
                    format!("Invalid range expr"),
                ));
                return;
            };
            let Some(to) = to.types() else {
                self.errors.push(LangError::type_error(
                    &range.to.node,
                    format!("Invalid range expr"),
                ));
                return;
            };
            if !from.is_integer() {
                self.errors.push(LangError::type_error(
                    &range.from.node,
                    format!("Start of range must be an integer"),
                ));
            }
            if !to.is_integer() {
                self.errors.push(LangError::type_error(
                    &range.to.node,
                    format!("End of range must be an integer"),
                ));
            }

            if let (Some(from), Some(to)) = (
                &range.from.r#type.as_integer_literal(),
                &range.to.r#type.as_integer_literal(),
            ) {
                if range.to_inclusive {
                    if from > to {
                        self.errors.push(LangError::type_error(
                            &range.node,
                            format!("Start must be smaller or equal to the end of the range"),
                        ));
                    }
                } else {
                    if from >= to {
                        self.errors.push(LangError::type_error(
                            &range.node,
                            format!("Start must be smaller than the end of the range"),
                        ));
                    }
                }
            }
        }
        self.validate_block(flow, &loop_statement.body, false);
    }

    fn validate_var_declaration(
        &mut self,
        flow: &mut AnalysisState,
        block: &Ptr<Block>,
        var_declaration: Ptr<VarDeclaration>,
    ) {
        let mut var_types = var_declaration
            .types
            .as_ref()
            .map(|types| {
                self.query_types(
                    &TypeQueryContext::Function(block.fun().signature.clone()),
                    types,
                )
            })
            .unwrap_or(SumType::empty());

        let expr_semantics = self.validate_expression(
            flow,
            &ExpContext::new(block, None),
            &var_declaration.value,
            true,
        );
        let expr = expr_semantics
            .types()
            .clone()
            .unwrap_or(SumType::new(vec![]));
        if var_types.types().is_empty() {
            var_types = expr
        } else {
            let Some(overlap) = intersection(&expr, &var_types ) else {
                self.errors.push(LangError::type_error(
                    &var_declaration.node,
                    format!(
                        "Incompatible type in var assignment: var: {}, expr: {}",
                        types_to_string(&var_types.types()),
                        types_to_string(&expr.types()),
                    ),
                ));
                return;
            };
            self.back_propagate_types(block, &var_declaration.value, &overlap);
            if var_types.types().is_empty() {
                var_types = overlap;
            }
        }

        let existing = self.variable_declarations.insert(
            var_declaration.node.id(),
            VarDeclarationSemantics {
                inferred_types: Some(var_types),
                value_origin: expr_semantics.value_origin.clone(),
            },
        );
        assert!(existing.is_none());

        if !self.bind_block_var(block, &var_declaration) {
            self.errors.push(LangError::type_error(
                &var_declaration.node,
                format!("Variable already declared: {:?}", var_declaration.name),
            ));
            return;
        }

        self.borrow_var_assignment(flow, &var_declaration, &expr_semantics);
    }

    /// Return false if var was already bound
    fn bind_block_var(&mut self, block: &Block, var_declaration: &Ptr<VarDeclaration>) -> bool {
        self.blocks
            .entry(block.node.id())
            .or_insert(BlockSemantics {
                vars: HashMap::new(),
                block_return: None,
            })
            .vars
            .insert(var_declaration.name.clone(), var_declaration.clone())
            .is_none()
    }

    fn validate_assignment(
        &mut self,
        flow: &mut AnalysisState,
        block: &Ptr<Block>,
        assignment: &AssignmentStatement,
    ) {
        let left_sem =
            self.validate_expression(flow, &ExpContext::new(block, None), &assignment.left, false);
        let right_sem =
            self.validate_expression(flow, &ExpContext::new(block, None), &assignment.right, true);
        let (Some(left), Some(right)) = (left_sem.types(), right_sem.types()) else {
            self.errors.push(LangError::type_error(
                &assignment.node,
                format!("Can't assign types"),
            ));
            return;
        };
        if !left_sem.is_mutable {
            self.errors.push(LangError::type_error(
                &assignment.left.node,
                "Left side is not mutable".to_string(),
            ));
            return;
        }

        let inter = intersection(&right, &left);
        if inter.is_none() {
            self.errors.push(LangError::type_error(
                &assignment.node,
                format!(
                    "Incompatible type in assignment: left: {}, right: {}",
                    types_to_string(left.types()),
                    types_to_string(right.types()),
                ),
            ));
        }
        self.borrow_assignment(flow, &assignment.left, &left_sem, &right_sem)
        // TODO: back propagation
    }

    /// Returns the returned SumType
    fn validate_return_statement(
        &mut self,
        flow: &mut AnalysisState,
        block: &Ptr<Block>,
        ret: &ReturnStatement,
    ) -> SumType {
        let fun = block.fun();
        let (ret_types, expression) = if let Some(expression) = &ret.expression {
            let was_already_returned = flow.flow.returned.is_some();
            let ret_semantics =
                self.validate_expression(flow, &ExpContext::new(block, None), expression, false);
            if flow.flow.returned.is_some() && !was_already_returned {
                self.errors.push(LangError::type_error(
                    &expression.node,
                    format!("Return in return expression is not allowed"),
                ));
            }

            let Some(ret_types) = ret_semantics.into_types() else {
                // error validating the return expression
                return SumType::empty();
            };
            (ret_types, Some(expression))
        } else {
            (SumType::new(vec![]), None)
        };

        let fun_ret_type = self.query_return_type(&fun.signature);
        let fun_ret_type = match fun_ret_type {
            Some(fun_ret_type) => {
                if ret_types.is_empty() {
                    self.errors.push(LangError::type_error(
                        &expression
                            .map(|e| e.node.clone())
                            .unwrap_or(fun.signature.node.clone()),
                        format!("Expected return type {:?}", fun.signature.return_type),
                    ));
                    return SumType::empty();
                }
                fun_ret_type
            }
            None => {
                if ret_types.is_empty() {
                    return SumType::empty();
                }
                self.errors.push(LangError::type_error(
                    &expression
                        .map(|e| e.node.clone())
                        .unwrap_or(fun.signature.node.clone()),
                    format!(
                        "Return type expected: fun == {:?}, expr == {:?}",
                        fun.signature.return_type, ret_types,
                    ),
                ));
                return SumType::empty();
            }
        };

        let overlap = intersection(&ret_types, &fun_ret_type);
        let Some(overlap) = overlap else {
            self.errors.push(LangError::type_error(
                &expression
                    .map(|e| e.node.clone())
                    .unwrap_or(fun.signature.node.clone()),
                format!(
                    "Incompatible return type: fun == {:?}, expr == {:?}",
                    types_to_string(fun_ret_type.types()),
                    types_to_string(ret_types.types()),
                ),
            ));
            return SumType::empty();
        };
        if let Some(ret_value_expression) = &ret.expression {
            self.back_propagate_types(block, ret_value_expression, &overlap);
        }
        overlap
    }
}
