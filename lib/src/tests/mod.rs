use crate::{
    ast::{BlockTrait, Function, FunctionTrait, Statement, VarDeclaration},
    semantics::{types::SumType, PackageSemanticAnalyzer, TypeQueryContext},
    types::Ptr,
};

mod query;
mod rust_transpiler;
mod validate_borrow;
mod validate_generics;
mod validate_lifetime;
mod validation;

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
    analysis: &mut PackageSemanticAnalyzer,
    fun: &str,
    var: &str,
) -> Option<SumType> {
    let package = analysis.validate_package_content();
    let fun = package.functions.get(fun)?;
    let var = find_var(fun, var)?;
    Some(analysis.query_var_types(&TypeQueryContext::from_fun(fun), &var))
}
