use crate::{
    ast::{
        BlockTrait, FileContext, FileTrait, Function, FunctionTrait, RootSymbol, Statement,
        VarDeclaration,
    },
    semantics::{FileSemanticAnalyzer, TypeQueryContext},
    semantics_types::SumType,
    types::Ptr,
};

mod query;
mod rust_transpiler;
mod validate_generics;
mod validation;

fn find_function(file: &Ptr<FileContext>, name: &str) -> Option<Ptr<Function>> {
    file.children()
        .into_iter()
        .filter_map(|it| match it {
            RootSymbol::Function(fun) => Some(fun),
            _ => None,
        })
        .find(|fun| &fun.signature.name == name)
}

fn find_var(fun: &Ptr<Function>, name: &str) -> Option<Ptr<VarDeclaration>> {
    fun.body()
        .statements()
        .into_iter()
        .filter_map(|it| match it {
            Statement::VarDeclaration(var) => Some(var),
            _ => None,
        })
        .find(|var| &var.name == name)
}

pub(crate) fn find_var_in_fun(
    analysis: &mut FileSemanticAnalyzer,
    fun: &str,
    var: &str,
) -> Option<SumType> {
    let fun = find_function(&analysis.file, fun)?;
    let var = find_var(&fun, var)?;
    Some(analysis.query_var_types(&TypeQueryContext::from_fun(&fun), &var))
}
