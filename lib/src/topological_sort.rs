use std::{collections::HashMap, hash::Hash};

pub struct TopologicalSort<T: Clone + Eq + Hash> {
    elements: HashMap<T, Vec<T>>,
    dep_to_parent: HashMap<T, Vec<T>>,
}

impl<T: Clone + Eq + Hash> TopologicalSort<T> {
    pub fn new(mut elements: HashMap<T, Vec<T>>) -> Self {
        let mut dep_to_parent = HashMap::new();
        for (key, dependencies) in &elements {
            for dep in dependencies {
                let entry = dep_to_parent.entry(dep.clone()).or_insert(vec![]);
                entry.push(key.clone())
            }
        }
        // make sure all dependencies are in elements
        for (dep, _) in &dep_to_parent {
            elements.entry(dep.clone()).or_insert(vec![]);
        }
        TopologicalSort {
            elements,
            dep_to_parent,
        }
    }

    pub fn remaining_elements(&self) -> &HashMap<T, Vec<T>> {
        &self.elements
    }

    pub fn remove_without_dependencies(&mut self) -> Vec<T> {
        let mut leaves = vec![];
        self.elements.retain(|key, dependencies| {
            if dependencies.is_empty() {
                leaves.push(key.clone());
                return false;
            }
            true
        });
        if leaves.is_empty() {
            return vec![];
        }
        for leave in &leaves {
            self.elements.remove(leave);
            if let Some(parents) = self.dep_to_parent.get(&leave) {
                for parent in parents {
                    if let Some(dep) = self.elements.get_mut(parent) {
                        dep.retain(|dep| dep != leave);
                    }
                }
            }
        }
        return leaves;
    }
}

pub fn has_cycle<T: Clone + Eq + Hash>(elements: HashMap<T, Vec<T>>) -> bool {
    let mut sort = TopologicalSort::new(elements);
    loop {
        let removed = sort.remove_without_dependencies();
        if !removed.is_empty() {
            continue;
        }
        if sort.remaining_elements().is_empty() {
            return false;
        }
        return true;
    }
}
