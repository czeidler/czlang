use std::collections::HashMap;

use crate::{
    ast::{Expression, LangError, NodeData, NodeId, VarDeclaration},
    types::Ptr,
};

use super::{
    flow_container::AnalysisState, ExpressionSemantics, IdentifierBinding, OriginType,
    PackageSemanticAnalyzer, Type,
};

/// values in the scope and which origins they borrow (list might be empty)
pub struct ScopeValue {
    var_node: NodeData,
    /// Just for debugging:
    var_name: String,
    origins: Vec<OriginType>,
}

pub type BorrowScope = Vec<ScopeValue>;

#[derive(Debug, Clone)]
pub struct Borrower {
    pub borrower: NodeId,
    pub borrower_name: String,
    pub is_mut: bool,
    pub r#type: BorrowType,
}

#[derive(Debug, Clone)]
pub enum BorrowType {
    Borrow,
    /// Field path relative to the root struct, e.g. `&struct.my.field` is is `my.field`
    PartialBorrow(Vec<String>),
    Moved,
    PartialMoved(Vec<String>),
}

pub struct BorrowChecker {
    /// key: origin that is being borrowed/moved
    /// value: list of borrowers/ BorrowType
    borrows: HashMap<OriginType, Vec<Borrower>>,

    /// Stack of scopes, current scope is on the top
    value_scopes: Vec<BorrowScope>,
}

impl BorrowChecker {
    pub fn new() -> Self {
        BorrowChecker {
            borrows: HashMap::new(),
            value_scopes: Vec::new(),
        }
    }

    pub fn new_scope(&mut self) {
        self.value_scopes.push(BorrowScope::new());
    }

    pub fn add_value_to_scope(&mut self, value: ScopeValue) {
        let Some(scope) = self.value_scopes.last_mut() else {
            panic!("Should not happen!");
        };
        scope.push(value);
    }

    pub fn leave_scope(&mut self, errors: &mut Vec<LangError>) {
        let Some(values) = self.value_scopes.pop() else {
            panic!("Should not happen!");
        };
        for value in values.iter().rev() {
            for origin in &value.origins {
                let Some(borrows) = self.borrows.get_mut(origin) else {
                    continue;
                };
                borrows.retain(|b| {
                    if b.borrower != value.var_node.id() {
                        return true;
                    }
                    match b.r#type {
                        BorrowType::Borrow => false,
                        BorrowType::PartialBorrow(_) => false,
                        BorrowType::Moved => true,
                        BorrowType::PartialMoved(_) => true,
                    }
                });
                self.borrows.retain(|_, b| !b.is_empty());
            }
        }
        // check if value is still borrowed after all borrows have been removed
        for value in values.iter().rev() {
            for origin in &value.origins {
                if let Some(borrow) = self.borrows.get(origin) {
                    for b in borrow {
                        match b.r#type {
                            BorrowType::Borrow | BorrowType::PartialBorrow(_) => {
                                errors.push(LangError::type_error(
                                    &origin.id(),
                                    "Value borrowed while value goes out of scope".to_string(),
                                ))
                            }
                            BorrowType::Moved | BorrowType::PartialMoved(_) => continue,
                        }
                    }
                }
            }
        }
    }
}

/// Left fully in right
fn is_sub_path(left: &Vec<String>, right: &Vec<String>) -> bool {
    if right.len() < left.len() {
        return false;
    }
    for (i, left) in left.iter().enumerate() {
        if left != &right[i] {
            return false;
        }
    }
    true
}

impl PackageSemanticAnalyzer {
    /// E.g variable = expr
    pub(crate) fn borrow_assignment(
        &mut self,
        flow: &mut AnalysisState,
        left: &Expression,
        left_sem: &ExpressionSemantics,
        right_sem: &ExpressionSemantics,
    ) {
        let borrow = &mut flow.borrow.borrows;
        for origin in &left_sem.value_origin {
            let entries = borrow.entry(origin.origin.clone()).or_default();
            entries.retain(|entry| {
                match &entry.r#type {
                    BorrowType::Borrow => {}
                    BorrowType::PartialBorrow(_) => {}
                    BorrowType::Moved => {}
                    BorrowType::PartialMoved(path) => {
                        if is_sub_path(&origin.path, path) {
                            return false;
                        }
                    }
                }
                true
            });
        }

        let Some(IdentifierBinding::VarDeclaration(var_declaration)) = &left_sem.binding else {
            self.errors.push(LangError
                ::type_error(
                    &left.node,
                    format!("Left side must be a variable",),
                )
            );
            return;
        };

        self.add_borrowers(flow, var_declaration, right_sem);
    }

    fn add_borrowers(
        &mut self,
        flow: &mut AnalysisState,
        var_declaration: &Ptr<VarDeclaration>,
        expr_semantics: &ExpressionSemantics,
    ) {
        let Some(expr_type) = expr_semantics.types() else {
            return;
        };

        let is_only_refs = expr_semantics.value_origin.iter().all(|it| it.reference);
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

        let borrow = &mut flow.borrow.borrows;
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
                    match &entry.r#type {
                        BorrowType::Borrow => {}
                        BorrowType::PartialBorrow(path) => {
                            if !is_sub_path(&origin.path, &path) {
                                continue;
                            }
                        }
                        BorrowType::Moved => {
                            self.errors.push(LangError::type_error(
                                &var_declaration.value.node,
                                format!("Variable moved",),
                            ));
                            continue;
                        }
                        BorrowType::PartialMoved(path) => {
                            if is_sub_path(&origin.path, &path) {
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
                    entries.push(Borrower {
                        borrower: var_declaration.node.id(),
                        borrower_name: var_declaration.name.clone(),
                        is_mut,
                        r#type: BorrowType::Borrow,
                    });
                } else {
                    entries.push(Borrower {
                        borrower: var_declaration.node.id(),
                        borrower_name: var_declaration.name.clone(),
                        is_mut,
                        r#type: BorrowType::PartialBorrow(origin.path.clone()),
                    });
                }
            } else if !is_copied {
                for entry in entries.iter() {
                    match &entry.r#type {
                        BorrowType::Borrow => {
                            self.errors.push(LangError::type_error(
                                &var_declaration.value.node,
                                format!("Variable borrowed",),
                            ));
                            continue;
                        }
                        BorrowType::PartialBorrow(path) => {
                            if is_sub_path(&origin.path, &path) {
                                self.errors.push(LangError::type_error(
                                    &var_declaration.value.node,
                                    format!("Variable partially borrowed",),
                                ));
                                continue;
                            }
                        }
                        BorrowType::Moved => {
                            self.errors.push(LangError::type_error(
                                &var_declaration.value.node,
                                format!("Variable moved",),
                            ));
                            continue;
                        }
                        BorrowType::PartialMoved(path) => {
                            if is_sub_path(&origin.path, &path) {
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
                    entries.push(Borrower {
                        borrower: var_declaration.node.id(),
                        borrower_name: var_declaration.name.clone(),
                        is_mut: false,
                        r#type: BorrowType::Moved,
                    });
                } else {
                    entries.push(Borrower {
                        borrower: var_declaration.node.id(),
                        borrower_name: var_declaration.name.clone(),
                        is_mut: false,
                        r#type: BorrowType::PartialMoved(origin.path.clone()),
                    });
                }
            }
        }
    }

    /// E.g. var test = expr
    pub(crate) fn borrow_var_assignment(
        &mut self,
        flow: &mut AnalysisState,
        var_declaration: &Ptr<VarDeclaration>,
        expr_semantics: &ExpressionSemantics,
    ) {
        flow.borrow.add_value_to_scope(ScopeValue {
            var_node: var_declaration.node.clone(),
            var_name: var_declaration.name.clone(),
            origins: expr_semantics
                .value_origin
                .iter()
                .map(|v| v.origin.clone())
                .collect(),
        });

        // add borrowers
        self.add_borrowers(flow, var_declaration, expr_semantics);
    }

    pub(crate) fn borrow_enter_block(&mut self, flow: &mut AnalysisState) {
        flow.borrow.new_scope();
    }

    pub(crate) fn borrow_leave_block(&mut self, flow: &mut AnalysisState) {
        flow.borrow.leave_scope(&mut self.errors)
    }
}
