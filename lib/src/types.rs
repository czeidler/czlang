use std::{
    fmt,
    sync::{Arc, RwLock},
    vec,
};

use crate::ast::{Array, RefType, Slice, Type};

pub type PtrMut<T> = Arc<RwLock<T>>;
pub type Ptr<T> = Arc<T>;

pub fn types_to_string(types: &Vec<RefType>) -> String {
    let parts: Vec<String> = types.into_iter().map(|it| format!("{:#}", it)).collect();
    parts.join(" | ")
}

impl fmt::Display for RefType {
    fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {
        if self.is_reference {
            write!(f, "&")?;
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
            Type::Unresolved(types) => {
                write!(f, "unresolved<")?;
                write!(f, "{}", types_to_string(&types))?;
                write!(f, ">")
            }
        }
    }
}

pub fn intersection(left_types: &Vec<RefType>, right_types: &Vec<RefType>) -> Vec<RefType> {
    if left_types.len() == 1 {
        if let Some(l) = left_types.get(0) {
            if let Type::Unresolved(types) = &l.r#type {
                let inter = intersection(types, right_types);
                if inter.len() <= 1 {
                    return inter;
                }
                // still unresolved
                return vec![RefType {
                    is_reference: false,
                    r#type: Type::Unresolved(inter),
                }];
            }
        }
    }
    if right_types.len() == 1 {
        if let Some(r) = right_types.get(0) {
            if let Type::Unresolved(types) = &r.r#type {
                let inter = intersection(left_types, types);
                if inter.len() <= 1 {
                    return inter;
                }
                // still unresolved
                return vec![RefType {
                    is_reference: false,
                    r#type: Type::Unresolved(inter),
                }];
            }
        }
    }

    let mut output = Vec::new();
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
                        let inter = intersection(&l.types, &r.types);
                        if inter.len() == 0 {
                            continue;
                        }
                        output.push(RefType {
                            is_reference: left.is_reference,
                            r#type: Type::Array(Array {
                                types: Ptr::new(inter),
                                length: l.length,
                            }),
                        });
                    }
                }
                (Type::Slice(l), Type::Slice(r)) => {
                    let inter = intersection(&l.types, &r.types);
                    if inter.len() == 0 {
                        continue;
                    }
                    output.push(RefType {
                        is_reference: left.is_reference,
                        r#type: Type::Slice(Slice {
                            types: Ptr::new(inter),
                        }),
                    });
                }
                _ => {
                    if left.r#type == right.r#type {
                        output.push(left.clone());
                        break;
                    }
                }
            }
        }
    }
    output
}

#[cfg(test)]
mod tests {
    use std::vec;

    use crate::{
        ast::{Array, RefType, Type},
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

    #[test]
    fn test_intersection_1() {
        // var value: []i32 = [1, 2, 3]
        let left = vec![RefType {
            is_reference: false,
            r#type: Type::Array(Array {
                length: 3,
                types: Ptr::new(vec![RefType {
                    is_reference: false,
                    r#type: Type::I32,
                }]),
            }),
        }];
        let right = vec![RefType {
            is_reference: false,
            r#type: Type::Array(Array {
                length: 3,
                types: Ptr::new(vec![
                    RefType {
                        is_reference: false,
                        r#type: Type::I32,
                    },
                    RefType {
                        is_reference: false,
                        r#type: Type::U32,
                    },
                ]),
            }),
        }];
        let inter = intersection(&left, &right);
        assert!(is_equal(&inter, &left));
    }

    // var value[2]([2]i32 | u32) = [[1, 2], 3] ; right side: [2]([2](i32 | u32) | i32 | u32))
    #[test]
    fn test_intersection_2() {
        // var value: []i32 = [2]([2]i32 | u32)
        let left = vec![RefType {
            is_reference: false,
            r#type: Type::Array(Array {
                length: 2,
                types: Ptr::new(vec![
                    RefType {
                        is_reference: false,
                        r#type: Type::Array(Array {
                            length: 3,
                            types: Ptr::new(vec![RefType {
                                is_reference: false,
                                r#type: Type::I32,
                            }]),
                        }),
                    },
                    RefType {
                        is_reference: false,
                        r#type: Type::U32,
                    },
                ]),
            }),
        }];
        // right side: [[1, 2], 3] = [2]([2](i32 | u32) | i32 | u32))
        let right = vec![RefType {
            is_reference: false,
            r#type: Type::Array(Array {
                length: 2,
                types: Ptr::new(vec![
                    RefType {
                        is_reference: false,
                        r#type: Type::Array(Array {
                            length: 3,
                            types: Ptr::new(vec![
                                RefType {
                                    is_reference: false,
                                    r#type: Type::I32,
                                },
                                RefType {
                                    is_reference: false,
                                    r#type: Type::U32,
                                },
                            ]),
                        }),
                    },
                    RefType {
                        is_reference: false,
                        r#type: Type::I32,
                    },
                    RefType {
                        is_reference: false,
                        r#type: Type::U32,
                    },
                ]),
            }),
        }];
        let inter = intersection(&left, &right);
        assert!(is_equal(&inter, &left));
    }

    // u32 | i32 | [](bool | string) intersection i32 | []bool | string => i32 | []bool
    #[test]
    fn test_intersection_3() {
        // u32 | i32 | [2](bool | string)
        let left = vec![
            RefType {
                is_reference: false,
                r#type: Type::U32,
            },
            RefType {
                is_reference: false,
                r#type: Type::I32,
            },
            RefType {
                is_reference: false,
                r#type: Type::Array(Array {
                    length: 2,
                    types: Ptr::new(vec![
                        RefType {
                            is_reference: false,
                            r#type: Type::Bool,
                        },
                        RefType {
                            is_reference: false,
                            r#type: Type::String,
                        },
                    ]),
                }),
            },
        ];
        // i32 | [2]bool | string
        let right = vec![
            RefType {
                is_reference: false,
                r#type: Type::I32,
            },
            RefType {
                is_reference: false,
                r#type: Type::Array(Array {
                    length: 2,
                    types: Ptr::new(vec![RefType {
                        is_reference: false,
                        r#type: Type::Bool,
                    }]),
                }),
            },
            RefType {
                is_reference: false,
                r#type: Type::String,
            },
        ];
        let inter = intersection(&left, &right);
        assert!(is_equal(
            &inter,
            // i32 | []bool
            &vec![
                RefType {
                    is_reference: false,
                    r#type: Type::I32,
                },
                RefType {
                    is_reference: false,
                    r#type: Type::Array(Array {
                        length: 2,
                        types: Ptr::new(vec![RefType {
                            is_reference: false,
                            r#type: Type::Bool,
                        }]),
                    }),
                },
            ]
        ));
    }

    // [](i32 | u32) intersection []unresolved(i32 | u32 | u8)] => []unresolved(i32 | u32)
    // e.g.[](i32|u32) intersects typeof [1, 2, 3, 4]
    #[test]
    fn test_intersection_4() {
        // u32 | i32 | [2](bool | string)
        let left = vec![RefType {
            is_reference: false,
            r#type: Type::Array(Array {
                length: 2,
                types: Ptr::new(vec![
                    RefType {
                        is_reference: false,
                        r#type: Type::I32,
                    },
                    RefType {
                        is_reference: false,
                        r#type: Type::U32,
                    },
                ]),
            }),
        }];
        // []unresolved
        let right = vec![RefType {
            is_reference: false,
            r#type: Type::Array(Array {
                length: 2,
                types: Ptr::new(vec![RefType {
                    is_reference: false,
                    r#type: Type::Unresolved(vec![
                        RefType::value(Type::I32),
                        RefType::value(Type::U32),
                        RefType::value(Type::U8),
                    ]),
                }]),
            }),
        }];
        let inter = intersection(&left, &right);
        assert!(is_equal(
            &inter,
            &vec![RefType {
                is_reference: false,
                r#type: Type::Array(Array {
                    length: 2,
                    types: Ptr::new(vec![RefType {
                        is_reference: false,
                        r#type: Type::Unresolved(vec![
                            RefType::value(Type::I32),
                            RefType::value(Type::U32)
                        ],),
                    }]),
                }),
            }]
        ));
    }
}
