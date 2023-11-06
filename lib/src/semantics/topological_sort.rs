use std::{collections::HashMap, hash::Hash};

pub fn topological_sort<T: Clone + Eq + Hash>(
    mut elements: HashMap<T, Vec<T>>,
) -> Result<Vec<T>, String> {
    // inverse
    let mut dep_to_parent = HashMap::new();
    for (key, dependencies) in &elements {
        for dep in dependencies {
            let entry = dep_to_parent.entry(dep.clone()).or_insert(vec![]);
            entry.push(key.clone())
        }
    }

    let mut out = vec![];
    loop {
        let mut leaves = vec![];
        elements.retain(|key, dependencies| {
            if dependencies.is_empty() {
                leaves.push(key.clone());
                return false;
            }
            true
        });
        if leaves.is_empty() {
            return Err("Circular dependencies".to_string());
        }
        for leave in leaves {
            elements.remove(&leave);
            if let Some(parents) = dep_to_parent.get(&leave) {
                for parent in parents {
                    if let Some(dep) = elements.get_mut(parent) {
                        dep.retain(|dep| dep != &leave);
                    }
                }
            }

            out.push(leave);
        }

        if elements.is_empty() {
            break;
        }
    }

    Ok(out)
}
