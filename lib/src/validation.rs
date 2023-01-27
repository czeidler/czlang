use crate::{
    ast::{Function, Struct},
    types::Ptr,
};

pub fn lookup_struct(fun: &Function, name: &str) -> Option<Ptr<Struct>> {
    let file = fun.file();
    let file = file.read().unwrap();
    file.struct_defs.get(name).map(|f| f.clone())
}
