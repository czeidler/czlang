use crate::{
    ast::{FunctionSignature, Parameter, VarDeclaration},
    types::{types_to_string, SumType},
};

pub fn format_var_declaration(var: &VarDeclaration, types: &SumType) -> String {
    format!("var {} {}", var.name, types_to_string(types.types()))
}

pub fn format_param(param: &Parameter) -> String {
    format!(
        "{} {}{}",
        param.name,
        if param.is_reference { "&" } else { "" },
        types_to_string(&param.types)
    )
}

pub fn format_fun_signature(signature: &FunctionSignature) -> String {
    let params = signature
        .parameters
        .iter()
        .map(|p| format_param(p))
        .collect::<Vec<_>>()
        .join(", ");
    let return_type = match signature.return_type.as_ref() {
        Some(types) => format!(" {}", types_to_string(&types.types)),
        None => "".to_string(),
    };
    format!("fun {}({}){}", signature.name, params, return_type)
}
