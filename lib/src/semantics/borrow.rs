use std::collections::HashMap;

use crate::{
    ast::{LangError, NodeId, VarDeclaration},
    types::Ptr,
};

use super::{
    flow_container::AnalysisState, ExpressionSemantics, OriginType, PackageSemanticAnalyzer, Type,
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
                    BorrowType::PartialMoved(_) => entry.push(v),
                };
            }
        }
    }
}

pub type BorrowScope = HashMap<OriginType, Vec<Borrow>>;

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
    PartialMoved(Vec<String>),
}

impl PackageSemanticAnalyzer {
    pub(crate) fn borrow_var_assignment(
        &mut self,
        flow: &mut AnalysisState,
        var_declaration: &Ptr<VarDeclaration>,
        expr_semantics: &ExpressionSemantics,
    ) {
        let Some(expr_type) = expr_semantics.types() else {
            return;
        };

        let is_only_refs = expr_type.types().iter().all(|it| match it {
            Type::RefType(_) => true,
            _ => false,
        });
        let is_copied = if is_only_refs {
            false
        } else {
            expr_type.types().iter().all(|it| match it {
                Type::RefType(_) => true,
                _ => {
                    let interfaces = self.query_type_interfaces(it);
                    let is_copy = interfaces.iter().find(|it| it.name == "Copy");
                    is_copy.is_some()
                }
            })
        };

        let is_mut = expr_type.types().iter().any(|it| match it {
            Type::RefType(reference) => reference.is_mut,
            _ => false,
        });
        let borrow = flow.borrow.scope();
        for origin in &expr_semantics.value_origin {
            match &origin.origin {
                OriginType::Expression(expr) => {
                    if expr.id() == var_declaration.value.node.id() {
                        continue;
                    }
                }
                _ => {}
            };
            let entries = borrow.entry(origin.origin.clone()).or_default();

            let err_count = self.errors.len();
            if is_only_refs {
                // TODO impl selector fields for partial borrows
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
                        BorrowType::PartialMoved(_) => {
                            self.errors.push(LangError::type_error(
                                &var_declaration.value.node,
                                format!("Variable partially moved",),
                            ));
                            continue;
                        }
                    };
                    if entry.is_mut {
                        self.errors.push(LangError::type_error(
                            &var_declaration.value.node,
                            format!("Can't take reference of mutually borrowed variable",),
                        ));
                    } else if is_mut {
                        self.errors.push(LangError::type_error(
                            &var_declaration.value.node,
                            format!("Can't take mutual reference of of already borrowed variable",),
                        ));
                    }
                }
                if self.errors.len() > err_count {
                    // Don't add a new entry with the aim to keep error messages simple
                    continue;
                }
                entries.push(Borrow {
                    borrower: var_declaration.node.id(),
                    is_mut,
                    r#type: BorrowType::Borrow,
                });
            } else if !is_copied {
                // TODO impl selector fields for partial borrows
                for entry in entries.iter() {
                    match &entry.r#type {
                        BorrowType::Borrow => {
                            self.errors.push(LangError::type_error(
                                &var_declaration.value.node,
                                format!("Variable borrowed",),
                            ));
                            continue;
                        }
                        BorrowType::Moved => {
                            self.errors.push(LangError::type_error(
                                &var_declaration.value.node,
                                format!("Variable moved",),
                            ));
                            continue;
                        }
                        BorrowType::PartialMoved(path) => {
                            // left fully in right
                            let is_sub_part = |left: &Vec<String>, right: &Vec<String>| -> bool {
                                if right.len() < left.len() {
                                    return false;
                                }
                                for (i, left) in left.iter().enumerate() {
                                    if left != &right[i] {
                                        return false;
                                    }
                                }
                                true
                            };
                            if is_sub_part(&origin.path, &path) {
                                self.errors.push(LangError::type_error(
                                    &var_declaration.value.node,
                                    format!("Variable partially moved",),
                                ));
                                continue;
                            }
                        }
                    };
                    if entry.is_mut {
                        self.errors.push(LangError::type_error(
                            &var_declaration.value.node,
                            format!("Can't take reference of mutually borrowed variable",),
                        ));
                    } else if is_mut {
                        self.errors.push(LangError::type_error(
                            &var_declaration.value.node,
                            format!("Can't take mutual reference of of already borrowed variable",),
                        ));
                    }
                }
                if self.errors.len() > err_count {
                    // Don't add a new entry with the aim to keep error messages simple
                    continue;
                }
                if origin.path.is_empty() {
                    entries.push(Borrow {
                        borrower: var_declaration.node.id(),
                        is_mut: false,
                        r#type: BorrowType::Moved,
                    });
                } else {
                    entries.push(Borrow {
                        borrower: var_declaration.node.id(),
                        is_mut: false,
                        r#type: BorrowType::PartialMoved(origin.path.clone()),
                    });
                }
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
