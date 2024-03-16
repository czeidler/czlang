use crate::{
    ast::{PackagePath, Struct, TypeParam},
    types::Ptr,
};
use std::{fmt, slice::Iter, vec::IntoIter};

#[derive(Debug, Clone, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub struct SArray {
    pub types: Ptr<Vec<Type>>,
    pub length: usize,
}

#[derive(Debug, Clone, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub struct SSlice {
    pub types: Ptr<Vec<Type>>,
}

#[derive(Debug, Clone, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub struct SRefType {
    pub is_mut: bool,
    pub r#type: Ptr<Type>,
}

#[derive(Debug, Clone, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub enum Type {
    Null,
    Str,
    String,
    Bool,
    U8,
    I8,
    U32,
    I32,
    Array(SArray),
    Slice(SSlice),
    Unresolved(Vec<Type>),
    RefType(SRefType),
    /// For example, for nullable or error types
    Either(SumType, SumType),

    /// For example, an identifier resolved to a struct definition
    Struct(Ptr<Struct>),
    /// For example, an identifier pointing to a struct type parameter
    StructTypeArgument(TypeParam),

    Closure(Ptr<ClosureType>),
    Package(PackagePath),
}

impl Type {
    pub fn reference(r#type: Type) -> Type {
        match r#type {
            Type::RefType(_) => r#type,
            _ => Type::RefType(SRefType {
                is_mut: false,
                r#type: Ptr::new(r#type),
            }),
        }
    }

    pub fn mut_reference(r#type: Type) -> Type {
        match r#type {
            Type::RefType(r) => Type::RefType(SRefType {
                is_mut: true,
                r#type: r.r#type,
            }),
            _ => Type::RefType(SRefType {
                is_mut: true,
                r#type: Ptr::new(r#type),
            }),
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub enum ClosureContext {
    Owned,
    MutRef,
    Ref,
    Type(Type),
}

#[derive(Debug, Clone, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub struct ClosureType {
    /// If not set its just a function pointer
    pub context: Option<ClosureContext>,
    pub parameters: Vec<(String, SumType)>,
    pub return_type: Option<SumType>,
}

#[derive(Debug, Clone, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub struct SumType {
    types: Vec<Type>,
}

impl SumType {
    pub fn new(types: Vec<Type>) -> Self {
        let mut result: SumType = SumType { types: vec![] };
        for t in types {
            result.push(t);
        }

        result
    }

    pub fn empty() -> Self {
        SumType::new(vec![])
    }

    pub fn from_type(t: Type) -> Self {
        SumType { types: vec![t] }
    }

    pub fn from_types(types: &Vec<Type>) -> Self {
        SumType::new(types.clone())
    }

    pub fn types(&self) -> &Vec<Type> {
        &self.types
    }

    pub fn len(&self) -> usize {
        self.types.len()
    }

    pub fn is_empty(&self) -> bool {
        self.types.is_empty()
    }

    pub fn contains(&self, t: &Type) -> bool {
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

    pub fn apply_reference(&self) -> SumType {
        self.types
            .iter()
            .map(|it| Type::reference(it.clone()))
            .collect()
    }

    pub fn apply_mut_reference(&self) -> SumType {
        self.types
            .iter()
            .map(|it| Type::mut_reference(it.clone()))
            .collect()
    }

    pub fn push(&mut self, t: Type) {
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

    pub fn iter(&self) -> Iter<Type> {
        self.types.iter()
    }

    pub fn to_string(&self) -> String {
        types_to_string(&self.types)
    }

    pub fn as_either(&self) -> Option<(SumType, SumType)> {
        if self.len() != 1 {
            return None;
        }
        match &self.types[0] {
            Type::Either(value, err) => Some((value.clone(), err.clone())),
            _ => None,
        }
    }

    /// If the SumType is an Either, this method returns the error part.
    pub fn err(&self) -> Option<SumType> {
        if self.len() != 1 {
            return None;
        }
        match &self.types[0] {
            Type::Either(_, err) => Some(err.clone()),
            _ => None,
        }
    }

    pub fn sum_type_name(&self) -> String {
        let mut name = "".to_string();
        for t in &self.types {
            let part = match &t {
                Type::Null => "N",
                Type::Str => "S",
                Type::String => "St",
                Type::Bool => "B",
                Type::U8 => "U8",
                Type::I8 => "I8",
                Type::U32 => "U32",
                Type::I32 => "I32",
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
                    name += &format!("Ei{}Or{}", data.sum_type_name(), error.sum_type_name());
                    continue;
                }
                Type::Unresolved(_) => panic!("Internal error {:?}", t),
                Type::RefType(ref_type) => {
                    // TODO have a Type::sum_type() method and use it here:
                    name += &format!(
                        "R{}",
                        SumType::from_type(ref_type.r#type.as_ref().clone()).sum_type_name()
                    );
                    continue;
                }
                Type::Struct(st) => {
                    name += &st.name;
                    continue;
                }
                Type::StructTypeArgument(_) => todo!(),
                Type::Closure(closure) => {
                    name += "C";
                    if let Some(ctx) = &closure.context {
                        match ctx {
                            ClosureContext::Owned => name += "o",
                            ClosureContext::MutRef => name += "m",
                            ClosureContext::Ref => name += "r",
                            ClosureContext::Type(t) => {
                                name += "t";
                                name += &SumType::from_type(t.clone()).sum_type_name();
                            }
                        }
                    };
                    name += "p";
                    for (_, t) in &closure.parameters {
                        name += &t.sum_type_name();
                    }
                    name += "p";
                    if let Some(ret) = &closure.return_type {
                        name += &ret.sum_type_name();
                    };
                    continue;
                }
                Type::Package(_) => todo!(),
            };
            name += part;
        }
        name
    }

    pub fn as_type(&self) -> Option<&Type> {
        if self.types.len() != 1 {
            return None;
        }
        self.types.get(0)
    }

    fn extract_first(&self) -> Option<&Type> {
        if self.types.len() != 1 {
            return None;
        }
        let t = &self.types[0];
        match t {
            Type::Either(value, err) => {
                if err.is_empty() {
                    value.extract_first()
                } else {
                    return None;
                }
            }
            _ => Some(t),
        }
    }

    pub fn is_number(&self) -> bool {
        if let Some(first) = self.extract_first() {
            is_number(first)
        } else {
            false
        }
    }

    pub fn is_integer(&self) -> bool {
        if let Some(first) = self.extract_first() {
            is_integer(first)
        } else {
            false
        }
    }

    pub fn is_bool(&self) -> bool {
        if let Some(first) = self.extract_first() {
            first == &Type::Bool
        } else {
            false
        }
    }

    pub fn has_reference(&self) -> bool {
        self.types.iter().any(|it| match it {
            Type::RefType(_) => true,
            _ => false,
        })
    }
}

fn is_number(types: &Type) -> bool {
    match &types {
        Type::Null => false,
        Type::Str => false,
        Type::String => false,
        Type::Bool => false,
        Type::U8 => true,
        Type::I8 => true,
        Type::U32 => true,
        Type::I32 => true,
        Type::Array(_) => false,
        Type::Slice(_) => false,
        Type::Unresolved(unresolved) => unresolved.iter().all(|t| is_number(t)),
        Type::Either(_, _) => false,
        Type::RefType(_) => false,
        Type::Struct(_) => false,
        Type::StructTypeArgument(_) => false,
        Type::Closure(_) => false,
        Type::Package(_) => false,
    }
}

fn is_integer(types: &Type) -> bool {
    match &types {
        Type::Null => false,
        Type::Str => false,
        Type::String => false,
        Type::Bool => false,
        Type::U8 => true,
        Type::I8 => true,
        Type::U32 => true,
        Type::I32 => true,
        Type::Array(_) => false,
        Type::Slice(_) => false,
        Type::Unresolved(unresolved) => unresolved.iter().all(|t| is_number(t)),
        Type::Either(_, _) => false,
        Type::RefType(_) => false,
        Type::Struct(_) => false,
        Type::StructTypeArgument(_) => false,
        Type::Closure(_) => false,
        Type::Package(_) => false,
    }
}

impl IntoIterator for SumType {
    type Item = Type;
    type IntoIter = IntoIter<Type>;

    fn into_iter(self) -> Self::IntoIter {
        self.types.into_iter()
    }
}

impl FromIterator<Type> for SumType {
    fn from_iter<T: IntoIterator<Item = Type>>(iter: T) -> Self {
        SumType::new(iter.into_iter().collect())
    }
}

pub fn types_to_string(types: &Vec<Type>) -> String {
    let parts: Vec<String> = types
        .into_iter()
        .map(|it| {
            if matches!(it, Type::Either(_, _)) && types.len() > 1 {
                format!("({:#})", it)
            } else {
                format!("{:#}", it)
            }
        })
        .collect();
    parts.join(" | ")
}

impl fmt::Display for TypeParam {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(f, "{}", self.identifier)?;
        if !self.type_params.is_empty() {
            write!(f, "<")?;
            for (i, arg) in self.type_params.iter().enumerate() {
                if i != 0 {
                    write!(f, ", ")?;
                }
                arg.fmt(f)?;
            }
            write!(f, ">")?;
        }
        Ok(())
    }
}

impl fmt::Display for Type {
    fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {
        match self {
            Type::Null => write!(f, "null"),
            Type::Str => write!(f, "str"),
            Type::String => write!(f, "string"),
            Type::Bool => write!(f, "bool"),
            Type::U8 => write!(f, "u8"),
            Type::I8 => write!(f, "i8"),
            Type::U32 => write!(f, "u32"),
            Type::I32 => write!(f, "i32"),
            Type::Array(array) => {
                write!(f, "[{}]", array.length)?;
                if array.types.len() > 1 {
                    write!(f, "(")?;
                }
                write!(f, "{}", types_to_string(&array.types))?;
                if array.types.len() > 1 {
                    write!(f, ")")?;
                }
                Ok(())
            }
            Type::Slice(slice) => {
                write!(f, "[]")?;
                if slice.types.len() > 1 {
                    write!(f, "(")?;
                }
                write!(f, "{}", types_to_string(&slice.types))?;
                if slice.types.len() > 1 {
                    write!(f, ")")?;
                }
                Ok(())
            }
            Type::Either(data, error) => {
                let val_str = if data.is_empty() {
                    "_".to_string()
                } else {
                    types_to_string(data.types())
                };
                let err_str = if error.is_empty() {
                    "_".to_string()
                } else {
                    types_to_string(error.types())
                };
                write!(f, "{} ? {}", val_str, err_str)?;
                Ok(())
            }
            Type::Unresolved(types) => {
                write!(f, "unresolved<")?;
                write!(f, "{}", types_to_string(&types))?;
                write!(f, ">")
            }
            Type::RefType(ref_type) => {
                write!(f, "&")?;
                if ref_type.is_mut {
                    write!(f, "mut")?;
                }
                return ref_type.r#type.fmt(f);
            }
            Type::Struct(s) => write!(f, "{}", s.name),
            Type::StructTypeArgument(type_param) => type_param.fmt(f),
            Type::Closure(closure) => {
                write!(f, "fun ")?;
                if let Some(ctx) = &closure.context {
                    match ctx {
                        ClosureContext::Owned => write!(f, "().")?,
                        ClosureContext::MutRef => write!(f, "(&mut).")?,
                        ClosureContext::Ref => write!(f, "(&).")?,
                        ClosureContext::Type(t) => {
                            write!(f, "(")?;
                            t.fmt(f)?;
                            write!(f, ").")?;
                        }
                    }
                };
                write!(f, "(")?;
                for (i, (name, t)) in closure.parameters.iter().enumerate() {
                    if i != 0 {
                        write!(f, ", ")?;
                    }
                    write!(f, "{} {}", name, t.to_string())?;
                }
                write!(f, ")")?;
                if let Some(ret) = &closure.return_type {
                    write!(f, " {}", ret.to_string())?;
                };
                Ok(())
            }
            Type::Package(path) => {
                write!(f, "package<{:?}>", path)?;
                return Ok(());
            }
        }
    }
}

fn type_overlap(left: &Type, right: &Type) -> Option<Type> {
    match (&left, &right) {
        (Type::Array(l), Type::Array(r)) => {
            if l.length != r.length {
                return None;
            } else {
                let inter = overlap(&l.types, &r.types);
                if inter.is_empty() {
                    return None;
                };
                Some(Type::Array(SArray {
                    types: Ptr::new(inter.clone()),
                    length: l.length,
                }))
            }
        }
        (Type::Slice(l), Type::Slice(r)) => {
            let inter = overlap(&l.types, &r.types);
            if inter.is_empty() {
                return None;
            };
            Some(Type::Slice(SSlice {
                types: Ptr::new(inter.clone()),
            }))
        }
        (Type::RefType(l), Type::RefType(r)) => {
            if r.is_mut != l.is_mut {
                return None;
            }
            type_overlap(&l.r#type, &r.r#type).map(|o| {
                Type::RefType(SRefType {
                    is_mut: l.is_mut,
                    r#type: Ptr::new(o),
                })
            })
        }
        _ => {
            if left == right {
                Some(left.clone())
            } else {
                None
            }
        }
    }
}

/// For example:
/// left: i8 | i32,   right: i8 |   => i8
/// i8 | i32 | u32,   right: unresolved<i8 | i32> | u32   =>
fn overlap(left_types: &Vec<Type>, right_types: &Vec<Type>) -> Vec<Type> {
    let mut output = vec![];
    for left in left_types {
        for right in right_types {
            let overlap = match (left, right) {
                (Type::Unresolved(l), Type::Unresolved(r)) => {
                    let mut over = overlap(l, r);
                    if over.len() == 0 {
                        None
                    } else if over.len() == 1 {
                        Some(over.pop().unwrap())
                    } else {
                        Some(Type::Unresolved(over))
                    }
                }
                (Type::Unresolved(l), _) => {
                    let mut over = overlap(l, right_types);
                    if over.len() == 0 {
                        None
                    } else if over.len() == 1 {
                        Some(over.pop().unwrap())
                    } else {
                        Some(Type::Unresolved(over))
                    }
                }
                (_, Type::Unresolved(r)) => {
                    let mut over = overlap(left_types, r);
                    if over.len() == 0 {
                        None
                    } else if over.len() == 1 {
                        Some(over.pop().unwrap())
                    } else {
                        Some(Type::Unresolved(over))
                    }
                }
                _ => type_overlap(left, right),
            };
            if let Some(overlap) = overlap {
                output.push(overlap);
            }
        }
    }
    output
}

fn type_intersection(left: &Type, right: &Type) -> Option<Type> {
    match (&left, &right) {
        (Type::RefType(l), Type::RefType(r)) => {
            if !l.is_mut && r.is_mut {
                return None;
            }
            type_intersection(&l.r#type, &r.r#type).map(|o| {
                Type::RefType(SRefType {
                    is_mut: l.is_mut,
                    r#type: Ptr::new(o),
                })
            })
        }
        (Type::Array(l), Type::Array(r)) => {
            if l.length != r.length {
                return None;
            } else {
                let inter = intersection(
                    &SumType::from_types(&l.types),
                    &SumType::from_types(&r.types),
                );
                let Some(inter) = inter else {
                    return None;
                };
                Some(Type::Array(SArray {
                    types: Ptr::new(inter.types().clone()),
                    length: l.length,
                }))
            }
        }
        (Type::Slice(l), Type::Slice(r)) => {
            let inter = intersection(
                &SumType::from_types(&l.types),
                &SumType::from_types(&r.types),
            );
            let Some(inter) = inter else {
                return None;
            };
            Some(Type::Slice(SSlice {
                types: Ptr::new(inter.types().clone()),
            }))
        }
        _ => {
            if left == right {
                return Some(left.clone());
            }
            None
        }
    }
}

/// Test if left is fully in right
/// Usages:
/// - return expr matches return type
/// - var declaration matches var type
/// - back_propagate_types: unresolved contains right side
/// - binary expression: left intersects right
/// - function parameter: input intersects with param types
/// - struct init: expression intersects with field types
///
/// For example:
/// left: bool | i32,                                right: bool | i32 | u32            => bool | i32
/// left: bool | unresolved<i8 | i32>,               right: bool | u32 | i32            => bool | i32
/// left: bool | i32,                                right: bool | unresolved<i8 | i32> => bool | i32
/// left: bool | unresolved<i8 | i32 | u32>,         right: bool | unresolved<i8 | i32> => bool | unresolved<i8 | i32>
/// left: bool | unresolved<i32 | u32>[],            right: bool | i32[]                => bool | i32[]
/// left: bool | (string | unresolved<i32 | u32>)[], right: bool | (string | i32)[]     => bool | (string | i32)[]
pub fn intersection(left_types: &SumType, right_types: &SumType) -> Option<SumType> {
    let mut output = Vec::new();
    for left in left_types.types() {
        let found = right_types
            .types()
            .iter()
            .filter_map(|right| match (&left, &right) {
                (Type::Either(left_value, left_err), Type::Either(right_value, right_err)) => {
                    let value_intersection = intersection(left_value, right_value);
                    let err_intersection = intersection(left_err, right_err);
                    match (&value_intersection, &err_intersection) {
                        (None, None) => return None,
                        (None, _) => {
                            if left_value.len() > 0 {
                                return None;
                            }
                        }
                        (_, None) => {
                            if right_value.len() > 0 {
                                return None;
                            }
                        }
                        _ => {}
                    };
                    Some(Type::Either(
                        value_intersection.unwrap_or(SumType::empty()),
                        err_intersection.unwrap_or(SumType::empty()),
                    ))
                }
                (Type::Either(left_value, left_err), _) => {
                    if left_value.is_empty() {
                        let Some(inter)=  intersection(left_err, right_types) else {
                            return None;
                        };
                        return Some(Type::Either(SumType::empty(), inter));
                    }
                    if left_err.is_empty() {
                        let Some(inter) =  intersection(left_value, right_types) else {
                            return None;
                        };
                        return Some(Type::Either(inter, SumType::empty()));
                    }
                    return None;
                }
                (_, Type::Either(right_value, _)) => {
                    let Some(value_intersection) = intersection(&SumType::from_type(left.clone()), right_value) else {
                        return None;
                    };

                    return Some(Type::Either(value_intersection, SumType::empty()));
                }
                (Type::Unresolved(l), Type::Unresolved(r)) => {
                    let mut over = overlap(l, r);
                    if over.len() == 0 {
                        return None;
                    } else if over.len() == 1 {
                        over.pop()
                    } else {
                        Some(Type::Unresolved(over))
                    }
                }
                (Type::Unresolved(l), _) => {
                    let mut over = overlap(l, right_types.types());
                    if over.len() == 0 {
                        return None;
                    } else if over.len() == 1 {
                        over.pop()
                    } else {
                        Some(Type::Unresolved(over))
                    }
                }
                (_, Type::Unresolved(r)) => {
                    let mut over = overlap(left_types.types(), r);
                    if over.len() == 0 {
                        return None;
                    } else if over.len() == 1 {
                        over.pop()
                    } else {
                        Some(Type::Unresolved(over))
                    }
                }
                _ => type_intersection(left, right),
            })
            .next();
        let Some(found) = found else {
            return None;
        };
        output.push(found);
    }
    if output.len() == 0 {
        return None;
    }
    Some(SumType::new(output))
}

#[cfg(test)]
mod tests {
    use std::vec;

    use crate::{
        semantics::types::{intersection, types_to_string, SArray, SumType},
        types::Ptr,
    };

    use super::Type;

    fn is_equal(left_types: &Vec<Type>, right_types: &Vec<Type>) -> bool {
        if left_types.len() != right_types.len() {
            return false;
        }
        for left in left_types {
            let found = right_types.iter().any(|right| match (&left, &right) {
                (Type::Array(l), Type::Array(r)) => {
                    if l.length != r.length {
                        false
                    } else {
                        is_equal(&l.types, &r.types)
                    }
                }
                (Type::Slice(l), Type::Slice(r)) => is_equal(&l.types, &r.types),
                _ => left == right,
            });
            if !found {
                return false;
            }
        }
        return true;
    }

    #[test]
    fn test_intersection_1() {
        // var value: []i32 = [1, 2, 3]
        let left = vec![Type::Array(SArray {
            length: 3,
            types: Ptr::new(vec![Type::I32]),
        })];
        let right = vec![Type::Array(SArray {
            length: 3,
            types: Ptr::new(vec![Type::I32, Type::U32]),
        })];
        let inter =
            intersection(&SumType::from_types(&left), &SumType::from_types(&right)).unwrap();
        assert!(is_equal(inter.types(), &left));
    }

    // var value[2]([2]i32 | u32) = [[1, 2], 3] ; right side: [2]([2](i32 | u32) | i32 | u32))
    #[test]
    fn test_intersection_2() {
        // var value: []i32 = [2]([2]i32 | u32)
        let left = vec![Type::Array(SArray {
            length: 2,
            types: Ptr::new(vec![
                Type::Array(SArray {
                    length: 3,
                    types: Ptr::new(vec![Type::I32]),
                }),
                Type::U32,
            ]),
        })];
        // right side: [[1, 2], 3] = [2]([2](i32 | u32) | i32 | u32))
        let right = vec![Type::Array(SArray {
            length: 2,
            types: Ptr::new(vec![
                Type::Array(SArray {
                    length: 3,
                    types: Ptr::new(vec![Type::I32, Type::U32]),
                }),
                Type::I32,
                Type::U32,
            ]),
        })];
        let inter =
            intersection(&SumType::from_types(&left), &SumType::from_types(&right)).unwrap();
        assert!(is_equal(inter.types(), &left));
    }

    //  i32 | []bool intersection u32 | i32 | [](bool | string) => i32 | []bool
    #[test]
    fn test_intersection_3() {
        // i32 | [2]bool
        let left = vec![
            Type::I32,
            Type::Array(SArray {
                length: 2,
                types: Ptr::new(vec![Type::Bool]),
            }),
        ];
        // u32 | i32 | [2](bool | string)
        let right = vec![
            Type::U32,
            Type::I32,
            Type::Array(SArray {
                length: 2,
                types: Ptr::new(vec![Type::Bool, Type::String]),
            }),
        ];

        let inter =
            intersection(&SumType::from_types(&left), &SumType::from_types(&right)).unwrap();
        assert!(is_equal(
            inter.types(),
            // i32 | []bool
            &vec![
                Type::I32,
                Type::Array(SArray {
                    length: 2,
                    types: Ptr::new(vec![Type::Bool]),
                }),
            ]
        ));
    }

    // [](i32 | u32) intersection []unresolved(i32 | u32 | u8)] => []unresolved(i32 | u32)
    // e.g.[](i32|u32) intersects typeof [1, 2, 3, 4]
    #[test]
    fn test_intersection_4() {
        // [](i32 | u32)
        let left = &vec![Type::Array(SArray {
            length: 2,
            types: Ptr::new(vec![Type::I32, Type::U32]),
        })];
        // []unresolved(i32 | u32 | u8)]
        let right = vec![Type::Array(SArray {
            length: 2,
            types: Ptr::new(vec![Type::Unresolved(vec![Type::I32, Type::U32, Type::U8])]),
        })];
        let inter =
            intersection(&SumType::from_types(&left), &SumType::from_types(&right)).unwrap();
        assert!(is_equal(
            inter.types(),
            &vec![Type::Array(SArray {
                length: 2,
                types: Ptr::new(vec![Type::Unresolved(vec![Type::U32, Type::I32,])]),
            })]
        ));
    }

    #[test]
    fn test_intersection_5() {
        // var value: i32 = unresolved<i32> | unresolved<i32 | u32>
        let left = vec![Type::I32];
        // []unresolved
        let right = vec![
            Type::Unresolved(vec![Type::I32]),
            Type::Unresolved(vec![Type::I32, Type::U32]),
        ];
        let inter =
            intersection(&SumType::from_types(&left), &SumType::from_types(&right)).unwrap();
        assert!(is_equal(inter.types(), &vec![Type::I32]));
    }

    #[test]
    fn test_intersection_6() {
        // fun test() i32 ? bool { return _ ? bool }
        let left = vec![Type::Either(
            SumType::empty(),
            SumType::from_type(Type::Bool),
        )];
        let right = vec![Type::Either(
            SumType::from_type(Type::I32),
            SumType::from_type(Type::Bool),
        )];
        let inter =
            intersection(&SumType::from_types(&left), &SumType::from_types(&right)).unwrap();
        assert!(
            is_equal(
                inter.types(),
                &vec![Type::Either(
                    SumType::empty(),
                    SumType::from_type(Type::Bool),
                ),]
            ),
            "Intersection: {:?}, Expected: {:?}",
            types_to_string(inter.types()),
            types_to_string(&right)
        );
    }
}
