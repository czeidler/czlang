use std::{fmt, sync::Arc};

use crate::{
    ast::{Array, RefType, Slice, Type},
    sum_type::SumType,
};

pub type Ptr<T> = Arc<T>;

pub fn types_to_string(types: &Vec<RefType>) -> String {
    let parts: Vec<String> = types.into_iter().map(|it| format!("{:#}", it)).collect();
    parts.join(" | ")
}

impl fmt::Display for RefType {
    fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {
        if self.is_reference {
            write!(f, "&")?;
            if self.is_mut {
                write!(f, "mut")?;
            }
        }
        match &self.r#type {
            Type::Null => write!(f, "null"),
            Type::Str => write!(f, "str"),
            Type::String => write!(f, "string"),
            Type::Bool => write!(f, "bool"),
            Type::U8 => write!(f, "u8"),
            Type::I8 => write!(f, "i8"),
            Type::U32 => write!(f, "u32"),
            Type::I32 => write!(f, "i32"),
            Type::Identifier(id) => write!(f, "{}", id),
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
                write!(f, "{} ? {}", types_to_string(data), types_to_string(error))?;
                Ok(())
            }
            Type::Unresolved(types) => {
                write!(f, "unresolved<")?;
                write!(f, "{}", types_to_string(&types))?;
                write!(f, ">")
            }
        }
    }
}

/// For example:
/// left: i8 | i32,   right: i8 |   => i8
/// i8 | i32 | u32,   right: unresolved<i8 | i32> | u32   =>
fn overlap(left_types: &Vec<RefType>, right_types: &Vec<RefType>) -> Vec<RefType> {
    let mut output = vec![];
    for left in left_types {
        for right in right_types {
            if left.is_reference != right.is_reference {
                continue;
            }
            match (&left.r#type, &right.r#type) {
                (Type::Array(l), Type::Array(r)) => {
                    if l.length != r.length {
                        continue;
                    } else {
                        let inter = overlap(&l.types, &r.types);
                        if inter.is_empty() {
                            continue;
                        };
                        output.push(RefType {
                            node: left.node.clone(),
                            is_reference: left.is_reference,
                            is_mut: false,
                            r#type: Type::Array(Array {
                                types: Ptr::new(inter.clone()),
                                length: l.length,
                            }),
                        });
                    }
                }
                (Type::Slice(l), Type::Slice(r)) => {
                    let inter = overlap(&l.types, &r.types);
                    if inter.is_empty() {
                        continue;
                    };
                    output.push(RefType {
                        node: left.node.clone(),
                        is_reference: left.is_reference,
                        is_mut: false,
                        r#type: Type::Slice(Slice {
                            types: Ptr::new(inter.clone()),
                        }),
                    });
                }
                (Type::Unresolved(l), Type::Unresolved(r)) => {
                    let mut over = overlap(l, r);
                    if over.len() == 0 {
                        continue;
                    } else if over.len() == 1 {
                        output.push(over.pop().unwrap())
                    } else {
                        output.push(RefType {
                            node: left.node.clone(),
                            is_reference: left.is_reference,
                            is_mut: false,
                            r#type: Type::Unresolved(over),
                        });
                    }
                }
                (Type::Unresolved(l), _) => {
                    let mut over = overlap(l, right_types);
                    if over.len() == 0 {
                        continue;
                    } else if over.len() == 1 {
                        output.push(over.pop().unwrap())
                    } else {
                        output.push(RefType {
                            node: left.node.clone(),
                            is_reference: left.is_reference,
                            is_mut: false,
                            r#type: Type::Unresolved(over),
                        });
                    }
                }
                (_, Type::Unresolved(r)) => {
                    let mut over = overlap(left_types, r);
                    if over.len() == 0 {
                        continue;
                    } else if over.len() == 1 {
                        output.push(over.pop().unwrap())
                    } else {
                        output.push(RefType {
                            node: left.node.clone(),
                            is_reference: left.is_reference,
                            is_mut: false,
                            r#type: Type::Unresolved(over),
                        });
                    }
                }
                _ => {
                    if left.r#type == right.r#type {
                        output.push(left.clone());
                    }
                }
            }
        }
    }
    output
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
            .filter_map(|right| {
                if left.is_reference != right.is_reference {
                    return None;
                }
                match (&left.r#type, &right.r#type) {
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
                            return Some(RefType {
                                node: left.node.clone(),
                                is_reference: left.is_reference,
                                is_mut: false,
                                r#type: Type::Array(Array {
                                    types: Ptr::new(inter.types().clone()),
                                    length: l.length,
                                }),
                            });
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
                        return Some(RefType {
                            node: left.node.clone(),
                            is_reference: left.is_reference,
                            is_mut: false,
                            r#type: Type::Slice(Slice {
                                types: Ptr::new(inter.types().clone()),
                            }),
                        });
                    }
                    (Type::Either(left_value, left_err), Type::Either(right_value, right_err)) =>{
                        let Some(value_intersection) = intersection(&SumType::from_types(left_value),
                        &SumType::from_types(right_value)) else {
                            return None;
                        };
                        let Some(err_intersection) = intersection(&SumType::from_types(left_err),
                        &SumType::from_types(right_err)) else {
                            return None;
                        };
                        return Some(RefType {
                            node: left.node.clone(),
                            is_reference: left.is_reference,
                            is_mut: left.is_mut,
                            r#type: Type::Either(value_intersection.types().clone(), err_intersection.types().clone()),
                        })
                    }
                    (Type::Either(left_value, left_err), _) =>{
                        let Some(value_intersection) = intersection(&SumType::from_types(left_value),
                        &SumType::from_type(right.clone())) else {
                            return None;
                        };

                        return Some(RefType {
                            node: left.node.clone(),
                            is_reference: left.is_reference,
                            is_mut: left.is_mut,
                            r#type: Type::Either(value_intersection.types().clone(), left_err.clone()),
                        })
                    }
                    (_, Type::Either(right_value, right_err)) =>{
                        let Some(value_intersection) = intersection(&SumType::from_type(left.clone()), &SumType::from_types(right_value),
                        ) else {
                            return None;
                        };

                        return Some(RefType {
                            node: left.node.clone(),
                            is_reference: left.is_reference,
                            is_mut: left.is_mut,
                            r#type: Type::Either(value_intersection.types().clone(), right_err.clone()),
                        })
                    }
                    (Type::Unresolved(l), Type::Unresolved(r)) => {
                        let mut over = overlap(l, r);
                        if over.len() == 0 {
                            return None;
                        } else if over.len() == 1 {
                            over.pop()
                        } else {
                            Some(RefType {
                                node: left.node.clone(),
                                is_reference: left.is_reference,
                                is_mut: false,
                                r#type: Type::Unresolved(over),
                            })
                        }
                    }
                    (Type::Unresolved(l), _) => {
                        let mut over = overlap(l, right_types.types());
                        if over.len() == 0 {
                            return None;
                        } else if over.len() == 1 {
                            over.pop()
                        } else {
                            Some(RefType {
                                node: left.node.clone(),
                                is_reference: left.is_reference,
                                is_mut: false,
                                r#type: Type::Unresolved(over),
                            })
                        }
                    }
                    (_, Type::Unresolved(r)) => {
                        let mut over = overlap(left_types.types(), r);
                        if over.len() == 0 {
                            return None;
                        } else if over.len() == 1 {
                            over.pop()
                        } else {
                            Some(RefType {
                                node: left.node.clone(),
                                is_reference: left.is_reference,
                                is_mut: false,
                                r#type: Type::Unresolved(over),
                            })
                        }
                    }
                    _ => {
                        if left.r#type == right.r#type {
                            return Some(left.clone());
                        }
                        None
                    }
                }
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
        ast::{Array, NodeData, RefType, SourcePosition, SourceSpan, Type},
        sum_type::SumType,
        types::{intersection, Ptr},
    };

    fn is_equal(left_types: &Vec<RefType>, right_types: &Vec<RefType>) -> bool {
        if left_types.len() != right_types.len() {
            return false;
        }
        for left in left_types {
            let found = right_types.iter().any(|right| {
                if left.is_reference != right.is_reference {
                    return false;
                }
                match (&left.r#type, &right.r#type) {
                    (Type::Array(l), Type::Array(r)) => {
                        if l.length != r.length {
                            false
                        } else {
                            is_equal(&l.types, &r.types)
                        }
                    }
                    (Type::Slice(l), Type::Slice(r)) => is_equal(&l.types, &r.types),
                    _ => left.r#type == right.r#type,
                }
            });
            if !found {
                return false;
            }
        }
        return true;
    }

    fn node(id: usize) -> NodeData {
        NodeData {
            id,
            parent: 0,
            span: SourceSpan {
                start: SourcePosition { row: 0, column: 0 },
                end: SourcePosition { row: 0, column: 0 },
            },
        }
    }

    #[test]
    fn test_intersection_1() {
        // var value: []i32 = [1, 2, 3]
        let left = vec![RefType::value(
            node(1),
            Type::Array(Array {
                length: 3,
                types: Ptr::new(vec![RefType::value(node(2), Type::I32)]),
            }),
        )];
        let right = vec![RefType::value(
            node(3),
            Type::Array(Array {
                length: 3,
                types: Ptr::new(vec![
                    RefType::value(node(4), Type::I32),
                    RefType::value(node(5), Type::U32),
                ]),
            }),
        )];
        let inter =
            intersection(&SumType::from_types(&left), &SumType::from_types(&right)).unwrap();
        assert!(is_equal(inter.types(), &left));
    }

    // var value[2]([2]i32 | u32) = [[1, 2], 3] ; right side: [2]([2](i32 | u32) | i32 | u32))
    #[test]
    fn test_intersection_2() {
        // var value: []i32 = [2]([2]i32 | u32)
        let left = vec![RefType::value(
            node(1),
            Type::Array(Array {
                length: 2,
                types: Ptr::new(vec![
                    RefType::value(
                        node(2),
                        Type::Array(Array {
                            length: 3,
                            types: Ptr::new(vec![RefType::value(node(3), Type::I32)]),
                        }),
                    ),
                    RefType::value(node(4), Type::U32),
                ]),
            }),
        )];
        // right side: [[1, 2], 3] = [2]([2](i32 | u32) | i32 | u32))
        let right = vec![RefType::value(
            node(4),
            Type::Array(Array {
                length: 2,
                types: Ptr::new(vec![
                    RefType::value(
                        node(0),
                        Type::Array(Array {
                            length: 3,
                            types: Ptr::new(vec![
                                RefType::value(node(5), Type::I32),
                                RefType::value(node(6), Type::U32),
                            ]),
                        }),
                    ),
                    RefType::value(node(5), Type::I32),
                    RefType::value(node(6), Type::U32),
                ]),
            }),
        )];
        let inter =
            intersection(&SumType::from_types(&left), &SumType::from_types(&right)).unwrap();
        assert!(is_equal(inter.types(), &left));
    }

    //  i32 | []bool intersection u32 | i32 | [](bool | string) => i32 | []bool
    #[test]
    fn test_intersection_3() {
        // i32 | [2]bool
        let left = vec![
            RefType::value(node(5), Type::I32),
            RefType::value(
                node(5),
                Type::Array(Array {
                    length: 2,
                    types: Ptr::new(vec![RefType::value(node(5), Type::Bool)]),
                }),
            ),
        ];
        // u32 | i32 | [2](bool | string)
        let right = vec![
            RefType::value(node(6), Type::U32),
            RefType::value(node(5), Type::I32),
            RefType::value(
                node(5),
                Type::Array(Array {
                    length: 2,
                    types: Ptr::new(vec![
                        RefType::value(node(5), Type::Bool),
                        RefType::value(node(5), Type::String),
                    ]),
                }),
            ),
        ];

        let inter =
            intersection(&SumType::from_types(&left), &SumType::from_types(&right)).unwrap();
        assert!(is_equal(
            inter.types(),
            // i32 | []bool
            &vec![
                RefType::value(node(5), Type::I32),
                RefType::value(
                    node(5),
                    Type::Array(Array {
                        length: 2,
                        types: Ptr::new(vec![RefType::value(node(5), Type::Bool)]),
                    }),
                ),
            ]
        ));
    }

    // [](i32 | u32) intersection []unresolved(i32 | u32 | u8)] => []unresolved(i32 | u32)
    // e.g.[](i32|u32) intersects typeof [1, 2, 3, 4]
    #[test]
    fn test_intersection_4() {
        // [](i32 | u32)
        let left = &vec![RefType::value(
            node(5),
            Type::Array(Array {
                length: 2,
                types: Ptr::new(vec![
                    RefType::value(node(5), Type::I32),
                    RefType::value(node(5), Type::U32),
                ]),
            }),
        )];
        // []unresolved(i32 | u32 | u8)]
        let right = vec![RefType::value(
            node(5),
            Type::Array(Array {
                length: 2,
                types: Ptr::new(vec![RefType::value(
                    node(5),
                    Type::Unresolved(vec![
                        RefType::value(node(0), Type::I32),
                        RefType::value(node(0), Type::U32),
                        RefType::value(node(0), Type::U8),
                    ]),
                )]),
            }),
        )];
        let inter =
            intersection(&SumType::from_types(&left), &SumType::from_types(&right)).unwrap();
        assert!(is_equal(
            inter.types(),
            &vec![RefType::value(
                node(0),
                Type::Array(Array {
                    length: 2,
                    types: Ptr::new(vec![RefType::value(
                        node(0),
                        Type::Unresolved(vec![
                            RefType::value(node(0), Type::U32),
                            RefType::value(node(0), Type::I32),
                        ])
                    )]),
                })
            )]
        ));
    }

    #[test]
    fn test_intersection_5() {
        // var value: i32 = unresolved<i32> | unresolved<i32 | u32>
        let left = vec![RefType::value(node(5), Type::I32)];
        // []unresolved
        let right = vec![
            RefType::value(
                node(6),
                Type::Unresolved(vec![RefType::value(node(0), Type::I32)]),
            ),
            RefType::value(
                node(7),
                Type::Unresolved(vec![
                    RefType::value(node(0), Type::I32),
                    RefType::value(node(0), Type::U32),
                ]),
            ),
        ];
        let inter =
            intersection(&SumType::from_types(&left), &SumType::from_types(&right)).unwrap();
        assert!(is_equal(
            inter.types(),
            &vec![RefType::value(node(5), Type::I32)]
        ));
    }
}
