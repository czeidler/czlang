use std::collections::HashMap;

use crate::{
    ast::{LangError, NodeId, VarDeclaration},
    types::Ptr,
};

use super::{
    flow_container::AnalysisState, ExpressionSemantics, IdentifierBinding, PackageSemanticAnalyzer,
    Type,
};

pub struct BorrowStack {
    stack: Vec<BorrowScope>,
}

impl BorrowStack {
    pub fn new() -> Self {
        BorrowStack {
            stack: vec![BorrowScope::new()],
        }
    }

    pub fn scope(&mut self) -> &mut BorrowScope {
        let last = self.stack.len() - 1;
        self.stack.get_mut(last).unwrap()
    }

    pub fn new_scope(&mut self) -> &mut BorrowScope {
        self.stack.push(BorrowScope::new());
        self.scope()
    }

    /// Discard top scope, e.g. because all paths in the current scope returned from the function.
    pub fn discard(&mut self) {
        if self.stack.len() <= 1 {
            panic!("Should not happen!");
        }
        self.stack.pop();
    }

    /// Accept the top of the scope and merge it into the previous scope
    pub fn merge_top(&mut self) {
        if self.stack.len() <= 1 {
            panic!("Should not happen!");
        }
        let removed = self.stack.pop().unwrap();
        let last = self.stack.len() - 1;
        let top = self.stack.get_mut(last).unwrap();
        for (key, value) in removed {
            let entry = top.entry(key).or_default();
            for v in value {
                match &v.r#type {
                    BorrowType::Borrow => {}
                    BorrowType::Moved => entry.push(v),
                };
            }
        }
    }
}

pub type BorrowScope = HashMap<String, Vec<Borrow>>;

#[derive(Debug, Clone)]
pub struct Borrow {
    pub borrower: NodeId,
    pub is_mut: bool,
    pub r#type: BorrowType,
}

#[derive(Debug, Clone)]
pub enum BorrowType {
    Borrow,
    /// Field path relative to the root struct, e.g. `&struct.my.field` is is `my.field`
    //Partial(String),
    Moved,
    //PartialMoved(String),
}

impl PackageSemanticAnalyzer {
    pub(crate) fn borrow_var_assignment(
        &mut self,
        flow: &mut AnalysisState,
        var_declaration: &Ptr<VarDeclaration>,
        expr_semantics: &ExpressionSemantics,
    ) {
        let Some(binding) = &expr_semantics.binding else {
            return;
        };
        let borrow_name = match binding {
            IdentifierBinding::VarDeclaration(target) => target.name.clone(),
            IdentifierBinding::Parameter(param) => param.name.clone(),
            IdentifierBinding::PipeArg(_) => "$".to_string(),
            IdentifierBinding::Package(_) => return,
        };
        let borrow = flow.borrow.scope();
        let entries = borrow.entry(borrow_name).or_default();

        let Some(expr_type) = expr_semantics.types() else {
            return;
        };

        for t in expr_type.types() {
            // TODO impl selector fields for partial borrows
            if let Type::RefType(reference) = t {
                for entry in entries.iter() {
                    match entry.r#type {
                        BorrowType::Borrow => {}
                        BorrowType::Moved => {
                            self.errors.push(LangError::type_error(
                                &var_declaration.value.node,
                                format!("Variable moved",),
                            ));
                            continue;
                        }
                    };
                    if entry.is_mut {
                        self.errors.push(LangError::type_error(
                            &var_declaration.value.node,
                            format!("Can't take reference of mutually borrowed variable",),
                        ));
                    } else if reference.is_mut {
                        self.errors.push(LangError::type_error(
                            &var_declaration.value.node,
                            format!("Can't take mutual reference of of already borrowed variable",),
                        ));
                    }
                }
                entries.push(Borrow {
                    borrower: var_declaration.node.id(),
                    is_mut: reference.is_mut,
                    r#type: BorrowType::Borrow,
                });
            } else {
                entries.push(Borrow {
                    borrower: var_declaration.node.id(),
                    is_mut: false,
                    r#type: BorrowType::Moved,
                });
            }
        }
    }

    pub(crate) fn borrow_enter_block(&mut self, flow: &mut AnalysisState) {
        flow.borrow.new_scope();
    }

    pub(crate) fn borrow_leave_block(&mut self, flow: &mut AnalysisState) {
        flow.borrow.merge_top()
    }
}
