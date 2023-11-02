use czlanglib::{
    ast::{FileContext, SourcePosition, Struct},
    format::format_fun_signature,
    query::{find_completions, find_in_file, QueryResult},
    semantics::{
        types::{types_to_string, Type},
        IdentifierBinding, PackageSemanticAnalyzer, SelectorFieldBinding, TypeQueryContext,
    },
    types::Ptr,
};
use lsp_types::{CompletionItem, CompletionItemKind};

/// Returns None if not a dot completion
pub fn dot_completion(
    package: &mut PackageSemanticAnalyzer,
    file: &Ptr<FileContext>,
    position: &SourcePosition,
) -> Option<Vec<CompletionItem>> {
    if position.column == 0 {
        return None;
    }
    let pos = position.to_byte_position(&file.source);
    let slice = file.source.get(pos - 2..pos);
    let Some(dot) = slice.and_then(|s| s.get(1..)) else {
        return None;
    };
    if dot != "." {
        return None;
    }
    let Some(result) = find_in_file(
        package,
        file,
        SourcePosition::new(position.row, position.column - 2),
    ) else {
        return Some(vec![]);
    };
    match result {
        QueryResult::Identifier(_, block, identifier_semantics) => {
            let Some(binding) = identifier_semantics.binding else {
                return Some(vec![]);
            };
            match binding {
                IdentifierBinding::VarDeclaration(var) => {
                    let query_context = TypeQueryContext::from_block(&block);
                    let var_type = package.query_var_types(&query_context, &var);
                    if var_type.len() != 1 {
                        return Some(vec![]);
                    }
                    let t = &var_type.types()[0];
                    match t {
                        Type::Struct(struct_dec) => {
                            return Some(struct_doc_completions(package, &struct_dec))
                        }
                        _ => return None,
                    }
                }
                IdentifierBinding::Parameter(_) => {}
                IdentifierBinding::PipeArg(_) => {}
            }
        }
        QueryResult::SelectorField((_, field_semantics)) => {
            if let Some(binding) = field_semantics.binding {
                match binding {
                    SelectorFieldBinding::Struct(struct_dec) => {
                        return Some(struct_doc_completions(package, &struct_dec))
                    }
                    SelectorFieldBinding::Method(_) => {}
                }
            }
        }
        _ => {}
    }
    Some(vec![])
}

fn struct_doc_completions(
    package: &mut PackageSemanticAnalyzer,
    struct_dec: &Ptr<Struct>,
) -> Vec<CompletionItem> {
    let mut output = package
        .query_struct(&struct_dec)
        .as_ref()
        .and_then(|s| {
            s.specializations.get("").map(|s| {
                s.methods
                    .iter()
                    .map(|f| {
                        let mut item = CompletionItem::new_simple(
                            f.signature.name.clone(),
                            format_fun_signature(package, f.signature.clone()),
                        );
                        item.kind = Some(CompletionItemKind::METHOD);
                        item
                    })
                    .collect::<Vec<_>>()
            })
        })
        .unwrap_or(vec![]);
    let mut structs = struct_dec
        .fields
        .iter()
        .map(|f| {
            let types =
                package.query_types(&TypeQueryContext::Struct(struct_dec.clone()), &f.types);
            let mut item =
                CompletionItem::new_simple(f.name.clone(), types_to_string(types.types()));
            item.kind = Some(CompletionItemKind::FIELD);
            item
        })
        .collect();
    output.append(&mut structs);
    output
}

// Returns a completion list for all available symbols at the the current position
pub fn scope_symbols_completion(
    package: &mut PackageSemanticAnalyzer,
    position: SourcePosition,
) -> Vec<CompletionItem> {
    let (file_semantics, vars) = find_completions(package, position);
    let mut list = vec![];
    for (name, _) in &file_semantics.structs {
        let mut item = CompletionItem::new_simple(name.clone(), "".to_string());
        item.kind = Some(CompletionItemKind::CLASS);
        list.push(item);
    }
    for (name, _) in &file_semantics.functions {
        let mut item = CompletionItem::new_simple(name.clone(), "".to_string());
        item.kind = Some(CompletionItemKind::FUNCTION);
        list.push(item);
    }
    if let Some(vars) = vars {
        for var in vars {
            let mut item = CompletionItem::new_simple(var.name.clone(), "".to_string());
            item.kind = Some(CompletionItemKind::VARIABLE);
            list.push(item);
        }
    }
    list
}
