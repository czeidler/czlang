use crate::{
    ast::{Function, FunctionCall, Parameter, Struct, VarDeclaration},
    buildin::{Buildins, FunctionDeclaration},
    types::Ptr,
};

#[derive(Debug, Clone)]
pub enum LookupResult {
    VarDeclaration(Ptr<VarDeclaration>),
    Parameter(Parameter),
}

pub fn lookup_function(fun: &Function, fun_call: &FunctionCall) -> Option<Ptr<Function>> {
    let file = fun.file();
    let file = file.read().unwrap();
    file.functions.get(&fun_call.name).map(|f| f.clone())
}

pub fn lookup_function_declaration(fun: &Function, name: &str) -> Option<FunctionDeclaration> {
    let file = fun.file();
    let file = file.read().unwrap();

    if let Some(declaration) = file.functions.get(name).map(|f| f.as_declaration()) {
        return Some(declaration);
    }

    let buildins = Buildins::new();
    match buildins.functions.get(name) {
        Some(fun_declaration) => Some(fun_declaration.clone()),
        None => None,
    }
}

pub fn lookup_struct(fun: &Function, name: &str) -> Option<Ptr<Struct>> {
    let file = fun.file();
    let file = file.read().unwrap();
    file.struct_defs.get(name).map(|f| f.clone())
}
