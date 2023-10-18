use crate::{
    ast::{FunctionSignature, Parameter, Receiver, TypeParamType, VarDeclaration},
    semantics::{
        types::{types_to_string, SumType},
        PackageSemanticAnalyzer, TypeQueryContext,
    },
};

pub fn format_var_declaration(var: &VarDeclaration, types: &SumType) -> String {
    format!("var {} {}", var.name, types_to_string(types.types()))
}

pub fn format_param(
    analyzer: &mut PackageSemanticAnalyzer,
    fun: FunctionSignature,
    param: &Parameter,
) -> String {
    let types = analyzer.query_types(&TypeQueryContext::Function(fun), &param.types);
    format!(
        "{} {}{}",
        param.name,
        if param.is_mutable { "mut " } else { "" },
        types_to_string(types.types())
    )
}

pub fn format_type_param_type(type_param: &TypeParamType) -> String {
    match type_param {
        TypeParamType::Identifier(ident) => ident.clone(),
        TypeParamType::GenericTypeParam(ident, type_params) => {
            let type_params = type_params
                .iter()
                .map(|it| format_type_param_type(&it.r#type))
                .collect::<Vec<_>>()
                .join(", ");
            format!("{}<{}>", ident, type_params)
        }
    }
}

pub fn format_receiver(analyzer: &mut PackageSemanticAnalyzer, receiver: &Receiver) -> String {
    let interface_part = if let Some(interface) = &receiver.interface {
        format!(" impl {}", format_type_param_type(interface))
    } else {
        "".to_string()
    };
    let types = analyzer.query_types(&TypeQueryContext::StructMethodReceiver, &receiver.types);
    format!("{}{}", types_to_string(types.types()), interface_part)
}

pub fn format_fun_signature(
    analyzer: &mut PackageSemanticAnalyzer,
    signature: FunctionSignature,
) -> String {
    let params = signature
        .parameters
        .iter()
        .map(|p| format_param(analyzer, signature.clone(), p))
        .collect::<Vec<_>>()
        .join(", ");
    let return_type = match signature.return_type.as_ref() {
        Some(types) => {
            let types =
                analyzer.query_types(&TypeQueryContext::Function(signature.clone()), &types.types);
            format!(" {}", types_to_string(types.types()))
        }
        None => "".to_string(),
    };
    let receiver = match &signature.receiver {
        Some(receiver) => format!("({})", format_receiver(analyzer, receiver)),
        None => "".to_string(),
    };
    format!(
        "fun {}{}({}){}",
        receiver, signature.name, params, return_type
    )
}
