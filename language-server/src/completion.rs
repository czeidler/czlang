use czlanglib::{
    ast::SourcePosition,
    project::ProjectFile,
    query::{find_completions, find_in_file, QueryResult},
    semantics::{IdentifierBinding, SelectorFieldBinding, TypeBinding},
    types::types_to_string,
};
use lsp_types::{CompletionItem, CompletionItemKind};

/// Returns None if not a dot completion
pub fn dot_completion(
    file: &mut ProjectFile,
    position: &SourcePosition,
) -> Option<Vec<CompletionItem>> {
    if position.column == 0 {
        return None;
    }
    let pos = position.to_byte_position(&file.file.source);
    let slice = file.file.source.get(pos - 2..pos);
    let Some(dot) = slice.and_then(|s| s.get(1..)) else {
        return None;
    };
    if dot != "." {
        return None;
    }
    let Some(result) = find_in_file(
        &mut file.file_analyzer,
        SourcePosition::new(position.row, position.column - 2),
    ) else {
        return Some(vec![]);
    };
    match result {
        QueryResult::Identifier(identifier_semantics) => {
            let Some(binding) = identifier_semantics.binding else {
                return Some(vec![]);
            };
            match binding {
                IdentifierBinding::VarDeclaration(var) => {
                    let var_type = file.file_analyzer.query_var_types(&var);
                    if var_type.len() != 1 {
                        return Some(vec![]);
                    }
                    let t = &var_type.types()[0];
                    let type_semantics = file.file_analyzer.query_type(t);
                    let Some(bindings) = type_semantics.and_then(|s| s.binding) else {
                    return Some(vec![]);
                };
                    match bindings {
                        TypeBinding::Struct(struct_dec) => {
                            return Some(
                                struct_dec
                                    .fields
                                    .iter()
                                    .map(|f| {
                                        CompletionItem::new_simple(
                                            f.name.clone(),
                                            types_to_string(&f.types),
                                        )
                                    })
                                    .collect(),
                            )
                        }
                    }
                }
                IdentifierBinding::Parameter(_) => {}
            }
        }
        QueryResult::SelectorField((_, field_semantics)) => {
            if let Some(binding) = field_semantics.binding {
                match binding {
                    SelectorFieldBinding::Struct(struct_dec) => {
                        return Some(
                            struct_dec
                                .fields
                                .iter()
                                .map(|f| {
                                    CompletionItem::new_simple(
                                        f.name.clone(),
                                        types_to_string(&f.types),
                                    )
                                })
                                .collect(),
                        )
                    }
                }
            }
        }
        _ => {}
    }
    Some(vec![])
}

// Returns a completion list for all available symbols at the the current position
pub fn scope_symbols_completion(
    file: &mut ProjectFile,
    position: SourcePosition,
) -> Vec<CompletionItem> {
    let (file_semantics, vars) = find_completions(&mut file.file_analyzer, position);
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
