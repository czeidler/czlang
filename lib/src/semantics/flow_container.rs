use std::collections::HashMap;

use crate::types::Ptr;

use super::{borrow::BorrowChecker, SumType, Type, TypeNarrowing};

/// Contains the state of fun analysis
pub struct AnalysisState {
    pub flow: Ptr<FlowContainer>,
    pub borrow: BorrowChecker,
}

#[derive(Debug, Clone)]
pub struct FlowContainer {
    pub parent: Option<Ptr<FlowContainer>>,
    /// Var path to the SumType in the current container
    /// For example: var1.field1.field2 -> i32 | string
    /// Only contains set of updates for this flow container.
    /// If a variable is not found in the map the parent FlowContainer has to be searched.
    pub vars: HashMap<String, SumType>,
    /// If not None a return statement has been encountered
    pub returned: Option<SumType>,
}

impl FlowContainer {
    pub fn lookup(&self, identifier: &str) -> Option<SumType> {
        let mut current = Some(self);
        while let Some(flow) = current {
            if let Some(types) = flow.vars.get(identifier) {
                return Some(types.clone());
            }
            let Some(parent) = &flow.parent else {
                return None;
            };
            current = Some(&parent);
        }
        None
    }
}

impl FlowContainer {
    pub fn start_flow() -> Ptr<Self> {
        Ptr::new(FlowContainer {
            parent: None,
            vars: HashMap::new(),
            returned: None,
        })
    }
}

pub(crate) fn apply_narrowing(
    flow: &Ptr<FlowContainer>,
    narrowing: &TypeNarrowing,
) -> Ptr<FlowContainer> {
    let mut new_flow = FlowContainer {
        parent: Some(flow.clone()),
        vars: HashMap::new(),
        returned: None,
    };
    if let Some((value, err)) = narrowing.original_types.as_either() {
        let narrowed_type = SumType::from_type(if narrowing.reduction {
            // != ?
            Type::Either(value, SumType::empty())
        } else {
            // == ?
            Type::Either(SumType::empty(), err)
        });
        new_flow
            .vars
            .insert(narrowing.identifier.clone(), narrowed_type);

        return Ptr::new(new_flow);
    }

    // true if in the form (typeof X != bool && typeof X != i32)
    // false if in the form (typeof X == bool || typeof X == i32)
    if narrowing.reduction {
        new_flow.vars.insert(
            narrowing.identifier.clone(),
            narrowing.original_types.subtract(&narrowing.types),
        );
    } else {
        new_flow
            .vars
            .insert(narrowing.identifier.clone(), narrowing.types.clone());
    };

    Ptr::new(new_flow)
}

pub(crate) fn apply_inverse_narrowing(
    flow: &Ptr<FlowContainer>,
    narrowing: &TypeNarrowing,
) -> Ptr<FlowContainer> {
    let mut new_flow = FlowContainer {
        parent: Some(flow.clone()),
        vars: HashMap::new(),
        returned: None,
    };
    if let Some((value, err)) = narrowing.original_types.as_either() {
        let narrowed_type = SumType::from_type(if narrowing.reduction {
            // != ?
            Type::Either(SumType::empty(), err)
        } else {
            // == ?
            Type::Either(value, SumType::empty())
        });
        new_flow
            .vars
            .insert(narrowing.identifier.clone(), narrowed_type);

        return Ptr::new(new_flow);
    }

    // true if in the form (typeof X != bool && typeof X != i32)
    // false if in the form (typeof X == bool || typeof X == i32)
    if narrowing.reduction {
        new_flow
            .vars
            .insert(narrowing.identifier.clone(), narrowing.types.clone());
    } else {
        new_flow.vars.insert(
            narrowing.identifier.clone(),
            narrowing.original_types.subtract(&narrowing.types),
        );
    };

    Ptr::new(new_flow)
}

/// Combine two flows from a type narrowing, e.g. consequence and alternative from an if/else clause.
pub(crate) fn merge_narrowed_flows(
    parent: &Ptr<FlowContainer>,
    flow1: &Ptr<FlowContainer>,
    flow2: &Ptr<FlowContainer>,
    narrowing: &TypeNarrowing,
) -> Ptr<FlowContainer> {
    let mut new_flow = FlowContainer {
        parent: Some(parent.clone()),
        vars: HashMap::new(),
        returned: None,
    };

    if let Some((_, _)) = narrowing.original_types.as_either() {
        // For either types, currently, only a simple case is supported where the original type continues.
        new_flow.vars.insert(
            narrowing.identifier.clone(),
            narrowing.original_types.clone(),
        );
        return Ptr::new(new_flow);
    }

    let mut union = flow1
        .vars
        .get(&narrowing.identifier)
        .cloned()
        .unwrap_or(SumType::empty());
    union.union(
        flow2
            .vars
            .get(&narrowing.identifier)
            .cloned()
            .unwrap_or(SumType::empty()),
    );
    new_flow.vars.insert(narrowing.identifier.clone(), union);
    Ptr::new(new_flow)
}
