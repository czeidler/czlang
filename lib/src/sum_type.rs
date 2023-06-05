use crate::{
    ast::{RefType, Type},
    types::types_to_string,
};
use std::{slice::Iter, vec::IntoIter};

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SumType {
    types: Vec<RefType>,
}

impl SumType {
    pub fn new(types: Vec<RefType>) -> Self {
        let mut result = SumType { types: vec![] };
        for t in types {
            result.push(t);
        }

        result
    }

    pub fn empty() -> Self {
        SumType::new(vec![])
    }

    pub fn from_type(t: RefType) -> Self {
        SumType { types: vec![t] }
    }

    pub fn from_types(types: &Vec<RefType>) -> Self {
        SumType::new(types.clone())
    }

    pub fn types(&self) -> &Vec<RefType> {
        &self.types
    }

    pub fn len(&self) -> usize {
        self.types.len()
    }

    pub fn is_empty(&self) -> bool {
        self.types.is_empty()
    }

    pub fn contains(&self, t: &RefType) -> bool {
        self.types.iter().any(|our| our == t)
    }

    pub fn subtract(&self, other: &SumType) -> SumType {
        let mut output = SumType::empty();
        for t in self.types() {
            if other.contains(t) {
                continue;
            }
            output.push(t.clone());
        }
        output
    }

    pub fn push(&mut self, t: RefType) {
        if !self.types.contains(&t) {
            self.types.push(t);
            self.types.sort();
        }
    }

    pub fn union(&mut self, t: SumType) {
        for t in t.types {
            if !self.types.contains(&t) {
                self.types.push(t);
            }
        }
        self.types.sort();
    }

    pub fn iter(&self) -> Iter<RefType> {
        self.types.iter()
    }

    pub fn to_string(&self) -> String {
        types_to_string(&self.types)
    }

    pub fn as_either(&self) -> Option<(SumType, SumType)> {
        if self.len() != 1 {
            return None;
        }
        match &self.types[0].r#type {
            Type::Either(value, err) => {
                Some((SumType::from_types(value), SumType::from_types(err)))
            }
            _ => None,
        }
    }

    /// If the SumType is an Either, this method returns the error part.
    pub fn err(&self) -> Option<SumType> {
        if self.len() != 1 {
            return None;
        }
        match &self.types[0].r#type {
            Type::Either(_, err) => Some(SumType::from_types(err)),
            _ => None,
        }
    }

    pub fn sum_type_name(&self) -> String {
        let mut name = "".to_string();
        for t in &self.types {
            if t.is_reference {
                name += "R";
            }
            let part = match &t.r#type {
                Type::Null => "N",
                Type::Str => "S",
                Type::String => "St",
                Type::Bool => "B",
                Type::U8 => "U8",
                Type::I8 => "I8",
                Type::U32 => "U32",
                Type::I32 => "I32",
                Type::Identifier(id) => id,
                Type::Array(array) => {
                    let types = SumType::from_types(array.types.as_ref());
                    name += "A";
                    let part = types.sum_type_name();
                    name += &part;
                    name += "E";
                    continue;
                }
                Type::Slice(slice) => {
                    let types = SumType::from_types(slice.types.as_ref());
                    name += "As";
                    let part = types.sum_type_name();
                    name += &part;
                    name += "E";
                    continue;
                }
                Type::Either(data, error) => {
                    let data = SumType::from_types(data);
                    let error = SumType::from_types(error);
                    name += &format!("Ei{}Or{}", data.sum_type_name(), error.sum_type_name());
                    continue;
                }
                Type::Unresolved(_) => panic!("Internal error {}", t),
            };
            name += part;
        }
        name
    }

    pub fn is_number(&self) -> bool {
        if self.types.len() != 1 {
            false
        } else {
            is_number(&self.types[0])
        }
    }

    pub fn is_bool(&self) -> bool {
        if self.types.len() != 1 {
            false
        } else {
            self.types[0].r#type == Type::Bool
        }
    }
}

fn is_number(types: &RefType) -> bool {
    match &types.r#type {
        Type::Null => false,
        Type::Str => false,
        Type::String => false,
        Type::Bool => false,
        Type::U8 => true,
        Type::I8 => true,
        Type::U32 => true,
        Type::I32 => true,
        Type::Identifier(_) => false,
        Type::Array(_) => false,
        Type::Slice(_) => false,
        Type::Unresolved(unresolved) => unresolved.iter().all(|t| is_number(t)),
        Type::Either(_, _) => false,
    }
}

impl IntoIterator for SumType {
    type Item = RefType;
    type IntoIter = IntoIter<RefType>;

    fn into_iter(self) -> Self::IntoIter {
        self.types.into_iter()
    }
}

impl FromIterator<RefType> for SumType {
    fn from_iter<T: IntoIterator<Item = RefType>>(iter: T) -> Self {
        SumType::new(iter.into_iter().collect())
    }
}
