use std::{
    ffi::OsString,
    path::PathBuf,
    str::FromStr,
    sync::{Arc, Mutex, RwLock},
};

use anyhow::Result;
use czlanglib::{
    ast::{SelectorFieldType, SourcePosition, SourceSpan},
    format::{format_fun_signature, format_param, format_var_declaration},
    init,
    project::{FileChange, Project},
    query::{find_in_file, QueryResult},
    semantics::{
        types::types_to_string, FunctionCallBinding, IdentifierBinding, PackageSemanticAnalyzer,
        SelectorFieldBinding, TypeQueryContext,
    },
    types::Ptr,
    vfs::DiskFS,
};
use lsp_server::{Connection, Message, Notification, RequestId};
use lsp_types::{notification::*, request::*, *};
use serde::Serialize;
use threadpool::ThreadPool;

use crate::{
    completion::{dot_completion, scope_symbols_completion},
    dispatch::{NotificationDispatcher, RequestDispatcher},
    inlay_hint::inlay_hints,
    normalize_uri,
};

#[derive(Clone)]
pub struct FeatureRequest<P> {
    pub params: P,
    pub uri: Arc<Url>,
}

#[derive(Clone)]
struct ServerFork {
    connection: Arc<Connection>,
}

impl ServerFork {
    pub fn feature_request<P>(&self, uri: Arc<Url>, params: P) -> FeatureRequest<P> {
        FeatureRequest { params, uri }
    }
}

pub struct Server {
    connection: Arc<Connection>,
    pool: ThreadPool,
    project: Arc<Mutex<Project>>,
}

fn lang_string(value: String) -> LanguageString {
    LanguageString {
        language: "czlang".to_string(),
        value,
    }
}

fn file_path_to_url(file_path: &str) -> Url {
    Url::parse(&format!("file://{}", file_path)).unwrap()
}

impl Server {
    pub fn new(connection: Connection, current_dir: PathBuf) -> Self {
        Self {
            connection: Arc::new(connection),
            pool: threadpool::Builder::new().build(),
            project: Arc::new(Mutex::new(Project::new(Box::new(DiskFS {}), current_dir))),
        }
    }

    fn spawn(&self, job: impl FnOnce(ServerFork) + Send + 'static) {
        let fork = self.fork();
        self.pool.execute(move || job(fork));
    }

    fn fork(&self) -> ServerFork {
        ServerFork {
            connection: self.connection.clone(),
        }
    }

    fn capabilities(&self) -> ServerCapabilities {
        ServerCapabilities {
            text_document_sync: Some(TextDocumentSyncCapability::Options(
                TextDocumentSyncOptions {
                    open_close: Some(true),
                    change: Some(TextDocumentSyncKind::INCREMENTAL),
                    will_save: None,
                    will_save_wait_until: None,
                    save: Some(TextDocumentSyncSaveOptions::SaveOptions(SaveOptions {
                        include_text: Some(false),
                    })),
                },
            )),
            document_link_provider: None,
            folding_range_provider: None,
            definition_provider: Some(OneOf::Left(true)),
            references_provider: Some(OneOf::Left(true)),
            hover_provider: Some(HoverProviderCapability::Simple(true)),
            completion_provider: Some(CompletionOptions {
                trigger_characters: Some(vec![".".into()]),
                ..CompletionOptions::default()
            }),
            document_symbol_provider: None,
            workspace_symbol_provider: None,
            rename_provider: Some(OneOf::Right(RenameOptions {
                prepare_provider: Some(true),
                work_done_progress_options: WorkDoneProgressOptions::default(),
            })),
            document_highlight_provider: None,
            document_formatting_provider: None,
            inlay_hint_provider: Some(OneOf::Left(true)),
            ..ServerCapabilities::default()
        }
    }

    fn initialize(&mut self) -> Result<()> {
        init();

        let (id, params) = self.connection.initialize_start()?;
        let _params: InitializeParams = serde_json::from_value(params)?;

        let result = InitializeResult {
            capabilities: self.capabilities(),
            server_info: Some(ServerInfo {
                name: "czlang".to_owned(),
                version: Some(env!("CARGO_PKG_VERSION").to_owned()),
            }),
            offset_encoding: None,
        };
        self.connection
            .initialize_finish(id, serde_json::to_value(result)?)?;

        Ok(())
    }

    fn cancel(&self, _params: CancelParams) -> Result<()> {
        Ok(())
    }

    fn did_change_watched_files(&mut self, _params: DidChangeWatchedFilesParams) -> Result<()> {
        Ok(())
    }

    fn did_change_configuration(&mut self, _params: DidChangeConfigurationParams) -> Result<()> {
        Ok(())
    }

    fn publish_errors(&self, package: &PackageSemanticAnalyzer, uri: &Url, file_name: &OsString) {
        if let Some(file) = package.files.get(file_name) {
            let all_errors = file.parse_errors.iter().chain(
                package
                    .errors
                    .iter()
                    .filter(|e| e.node.file_id == file.file_id),
            );

            let diagnostics = all_errors
                .map(|error| {
                    let start = error.node.span.start;
                    let end = error.node.span.end;
                    Diagnostic::new_simple(
                        Range {
                            start: Position {
                                line: start.row as u32,
                                character: start.column as u32,
                            },
                            end: Position {
                                line: end.row as u32,
                                character: end.column as u32,
                            },
                        },
                        format!("{:?}: {}", error.kind, error.msg.clone()),
                    )
                })
                .collect();
            self.connection
                .sender
                .send(
                    Notification::new(
                        "textDocument/publishDiagnostics".to_string(),
                        PublishDiagnosticsParams {
                            uri: uri.clone(),
                            diagnostics,
                            version: None,
                        },
                    )
                    .into(),
                )
                .unwrap();
        }
    }

    fn did_open(&mut self, mut params: DidOpenTextDocumentParams) -> Result<()> {
        normalize_uri(&mut params.text_document.uri);
        let Some((package, file_name)) =
            find_package_file(&self.project, &params.text_document.uri) else {
            return Ok(());
        };
        let mut package = package.write().unwrap();

        package.query_all();
        self.publish_errors(&package, &params.text_document.uri, &file_name);

        Ok(())
    }

    fn did_change(&mut self, mut params: DidChangeTextDocumentParams) -> Result<()> {
        normalize_uri(&mut params.text_document.uri);
        let url = params.text_document.uri.path().to_string();

        let changes = params
            .content_changes
            .into_iter()
            .map(|c| FileChange {
                range: c.range.map(|r| SourceSpan {
                    start: SourcePosition {
                        row: r.start.line as usize,
                        column: r.start.character as usize,
                    },
                    end: SourcePosition {
                        row: r.end.line as usize,
                        column: r.end.character as usize,
                    },
                }),
                text: c.text,
            })
            .collect::<Vec<_>>();
        let mut project = self.project.lock().unwrap();
        project.edit_file(url.clone(), changes);
        let Some((package, file_name)) = project.package_and_file_name(&PathBuf::from_str(&url).unwrap()) else {
            log::info!("File not in workspace: {:?}", url);
            return Ok(());
        };
        let Some((package, _)) = project
            .query_package(&package) else {
                return Ok(())
            };
        drop(project);
        let mut package = package.write().unwrap();
        package.query_all();
        self.publish_errors(&package, &params.text_document.uri, &file_name);

        Ok(())
    }

    fn did_save(&mut self, params: DidSaveTextDocumentParams) -> Result<()> {
        let mut uri = params.text_document.uri;
        normalize_uri(&mut uri);

        Ok(())
    }

    fn did_close(&mut self, _params: DidCloseTextDocumentParams) -> Result<()> {
        Ok(())
    }

    fn handle_feature_request<P, R, H>(
        &self,
        id: RequestId,
        params: P,
        uri: Arc<Url>,
        handler: H,
    ) -> Result<()>
    where
        P: Send + 'static,
        R: Serialize,
        H: FnOnce(FeatureRequest<P>) -> R + Send + 'static,
    {
        self.spawn(move |server| {
            let request = server.feature_request(uri, params);
            let result = handler(request);
            server
                .connection
                .sender
                .send(lsp_server::Response::new_ok(id, result).into())
                .unwrap();
        });
        Ok(())
    }

    fn workspace_symbols(&self, _id: RequestId, _params: WorkspaceSymbolParams) -> Result<()> {
        Ok(())
    }

    fn completion(&self, id: RequestId, mut params: CompletionParams) -> Result<()> {
        normalize_uri(&mut params.text_document_position.text_document.uri);
        let uri = Arc::new(params.text_document_position.text_document.uri.clone());

        let position = params.text_document_position.position;
        let project = self.project.clone();
        self.handle_feature_request(id, params, uri.clone(), move |_request| {
            let (package, file_name) = find_package_file(&project, &uri)?;
            let mut package = package.write().unwrap();
            let file = package.files.get(&file_name)?.clone();

            let position = SourcePosition::new(position.line as usize, position.character as usize);
            if let Some(dot_completions) = dot_completion(&mut package, &file, &position) {
                return Some(dot_completions);
            }

            let list = scope_symbols_completion(&mut package, position);
            Some(list)
        })?;

        Ok(())
    }

    fn completion_resolve(&self, _id: RequestId, mut _item: CompletionItem) -> Result<()> {
        Ok(())
    }

    fn hover(&self, id: RequestId, mut params: HoverParams) -> Result<()> {
        normalize_uri(&mut params.text_document_position_params.text_document.uri);
        let uri = Arc::new(
            params
                .text_document_position_params
                .text_document
                .uri
                .clone(),
        );

        let position = params.text_document_position_params.position;

        let project = self.project.clone();
        self.handle_feature_request(id, params, uri.clone(), move |_request| {
            let (package, file_name) = find_package_file(&project, &uri)?;
            let mut package = package.write().unwrap();
            let file = package.files.get(&file_name)?.clone();

            let position = SourcePosition::new(position.line as usize, position.character as usize);
            let Some(result) = find_in_file(&mut package, &file, position) else { return None };

            let result = match result {
                QueryResult::Function(fun) => {
                    format_fun_signature(&mut package, fun.signature.clone())
                }
                QueryResult::Parameter(fun, parameter) => {
                    format!(
                        "(parameter) {}",
                        format_param(&mut package, fun.signature.clone(), &parameter)
                    )
                }
                QueryResult::Identifier(_, block, expression_semantics) => {
                    let Some(binding) = expression_semantics.binding.as_ref() else {
                        return None;
                    };
                    match binding {
                        IdentifierBinding::VarDeclaration(var) => {
                            if let Some(narrowed_types) = expression_semantics.narrowed_types {
                                format!(
                                    "{}\n(narrowed variable): {}",
                                    format_var_declaration(
                                        &var,
                                        &package.query_var_types(
                                            &TypeQueryContext::from_block(&block),
                                            &var
                                        ),
                                    ),
                                    format_var_declaration(&var, &narrowed_types)
                                )
                            } else {
                                format_var_declaration(
                                    &var,
                                    &package.query_var_types(
                                        &TypeQueryContext::from_block(&block),
                                        &var,
                                    ),
                                )
                            }
                        }
                        IdentifierBinding::Parameter(param) => {
                            if let Some(narrowed_types) = expression_semantics.narrowed_types {
                                format!(
                                    "{}\n(narrowed parameter) {}",
                                    format_param(
                                        &mut package,
                                        block.fun().signature.clone(),
                                        &param
                                    ),
                                    narrowed_types.to_string()
                                )
                            } else {
                                format!(
                                    "(parameter) {}",
                                    format_param(
                                        &mut package,
                                        block.fun().signature.clone(),
                                        &param
                                    )
                                )
                            }
                        }
                        IdentifierBinding::PipeArg(arg) => {
                            format!("(pipe arg) {}", types_to_string(arg.types()))
                        }
                        IdentifierBinding::Package(package) => {
                            format!("(package) {:?}", package)
                        }
                    }
                }
                QueryResult::VarDeclaration(block, var) => format_var_declaration(
                    &var,
                    &package.query_var_types(&TypeQueryContext::from_block(&block), &var),
                ),
                QueryResult::FunctionCall(fun) => {
                    if let Some(fun) = fun.binding {
                        format_fun_signature(&mut package, fun.as_function_signature().clone())
                    } else {
                        return None;
                    }
                }
                QueryResult::StructDeclaration(struct_dec) => {
                    format!("struct {}", struct_dec.name)
                }
                QueryResult::StructFieldDeclaration(str, field) => {
                    let types = package.query_types(&TypeQueryContext::Struct(str), &field.types);
                    format!("{} {}", field.name, types_to_string(types.types()))
                }
                QueryResult::SelectorField((block, field, sem)) => {
                    if let Some(parent) = sem.parent {
                        match parent {
                            SelectorFieldBinding::Struct(_) => {
                                match field.field {
                                    SelectorFieldType::Identifier(_) => return None,
                                    SelectorFieldType::Call(call) => {
                                        let Some(fun) = package.query_function_call(&block, &call).and_then(|f| f.binding) else {
                                            return None;
                                        };
                                        format_fun_signature(&mut package, fun.as_function_signature().clone())
                                    },
                                    SelectorFieldType::StructInit(struct_init) => {
                                        let Some(struct_dec) = package.query_struct_initialization(&block, &struct_init) else {
                                            return None;
                                        };
                                        format!("struct {}", struct_dec.name)
                                    }
                                }
                            },
                            SelectorFieldBinding::Package(_) => match field.field {
                                SelectorFieldType::Identifier(_) => return None,
                                SelectorFieldType::Call(call) => {
                                    let Some(fun) = package.query_function_call(&block, &call).and_then(|f| f.binding) else {
                                        return None;
                                    };
                                    format_fun_signature(&mut package, fun.as_function_signature().clone())
                                }
                                SelectorFieldType::StructInit(struct_init) => {
                                    let Some(struct_dec) = package.query_struct_initialization(&block, &struct_init) else {
                                        return None;
                                    };
                                    format!("struct {}", struct_dec.name)
                                }
                            },
                        }
                    } else {
                        format!("field {}", types_to_string(sem.r#type.types()))
                    }
                }
                QueryResult::StructIdentifier(struct_dec) => {
                    format!("struct {}", struct_dec.name)
                }
                QueryResult::StructFieldInitialization(str, field) => {
                    let types = package.query_types(&TypeQueryContext::Struct(str), &field.types);
                    format!("struct {}", types_to_string(types.types()))
                }
                QueryResult::Literal(types) => {
                    format!("literal {}", types_to_string(&types.types()))
                }
            };
            Some(Hover {
                contents: HoverContents::Scalar(MarkedString::LanguageString(lang_string(result))),
                range: None,
            })
        })?;
        Ok(())
    }

    fn goto_definition(&self, id: RequestId, mut params: GotoDefinitionParams) -> Result<()> {
        normalize_uri(&mut params.text_document_position_params.text_document.uri);
        let uri = Arc::new(
            params
                .text_document_position_params
                .text_document
                .uri
                .clone(),
        );
        let position = params.text_document_position_params.position;
        let project = self.project.clone();
        self.handle_feature_request(id, params, uri.clone(), move |_request| {
            let (package, file_name) = find_package_file(&project, &uri)?;
            let mut package = package.write().unwrap();
            let file = package.files.get(&file_name)?.clone();

            let position = SourcePosition::new(position.line as usize, position.character as usize);
            let Some(result) = find_in_file(&mut package, &file,position) else { return None };
            let target = match result {
                QueryResult::Identifier(_, _, identifier_semantics) => {
                    let Some(binding) = identifier_semantics.binding else {
                        return None;
                    };
                    match binding {
                        IdentifierBinding::VarDeclaration(var) => var.name_node.clone(),
                        IdentifierBinding::Parameter(param) => param.node,
                        IdentifierBinding::PipeArg(_) => return None,
                        IdentifierBinding::Package(_) => {
                            // TODO collect files and goto these files
                            return None;
                        }
                    }
                }
                QueryResult::StructIdentifier(struct_dec) => struct_dec.name_node.clone(),
                QueryResult::Function(fun) => fun.signature.name_node.clone(),
                QueryResult::FunctionCall(fun) => {
                    if let Some(binding) = fun.binding {
                        binding.as_function_signature().name_node.clone()
                    } else {
                        return None;
                    }
                }
                QueryResult::SelectorField((block, field, field_semantics)) => {
                    let parent = match field_semantics.parent {
                        Some(parent) => parent,
                        None => return None,
                    };
                    match field.field {
                        SelectorFieldType::Identifier(identifier) => {


                            match parent {
                                SelectorFieldBinding::Struct(st) => {
                                    if let Some(field) =
                                        st.fields.iter().find(|f| f.name == identifier)
                                    {
                                        field.name_node.clone()
                                    } else {
                                        return None;
                                    }
                                }
                                SelectorFieldBinding::Package(_) => return None,
                            }
                        }
                        SelectorFieldType::Call(call) => {
                            match parent {
                                SelectorFieldBinding::Struct(_) => {
                                    let Some(fun) = package.query_method_call(&block, &call).and_then(|f| f.binding) else {
                                        return None;
                                    };
                                    fun.signature.name_node.clone()
                                },
                                SelectorFieldBinding::Package(_) => {
                                    let Some(binding) = package.query_function_call(&block, &call).and_then(|f| f.binding) else {
                                        return None;
                                    };
                                    match binding {
                                        FunctionCallBinding::Function(fun) => fun.signature.name_node.clone(),
                                        FunctionCallBinding::Buildin(_) => return None,
                                    }
                                },
                            }

                        },
                        SelectorFieldType::StructInit(struct_init) => {
                            let Some(st) = package.query_struct_initialization(&block, &struct_init) else {
                                return None;
                            };
                            st.name_node.clone()
                        }
                    }
                }
                QueryResult::StructFieldInitialization(_, field) => field.name_node,
                QueryResult::VarDeclaration(_, var) => var.name_node.clone(),
                QueryResult::Parameter(_, param) => param.name_node,
                QueryResult::StructDeclaration(st) => st.name_node.clone(),
                _ => return None,
            };
            let target_range = Range::new(
                Position::new(
                    target.span.start.row as u32,
                    target.span.start.column as u32,
                ),
                Position::new(target.span.end.row as u32, target.span.end.column as u32),
            );
            Some(GotoDefinitionResponse::Scalar(Location {
                uri: file_path_to_url(&target.file_path),
                range: target_range,
            }))
        })?;
        Ok(())
    }

    fn references(&self, id: RequestId, mut params: ReferenceParams) -> Result<()> {
        normalize_uri(&mut params.text_document_position.text_document.uri);
        let uri = Arc::new(params.text_document_position.text_document.uri.clone());
        let position = params.text_document_position.position;
        let project = self.project.clone();
        self.handle_feature_request(id, params, uri.clone(), move |_request| {
            let (package, file_name) = find_package_file(&project, &uri)?;
            let mut package = package.write().unwrap();
            let file = package.files.get(&file_name)?.clone();

            let position = SourcePosition::new(position.line as usize, position.character as usize);
            let Some(result) = find_in_file(&mut package, &file, position) else { return None };
            let project = project.lock().unwrap();
            let usages = match result {
                QueryResult::Function(fun) => {
                    project.query_usage(&mut package, fun.signature.name_node.id())
                }
                QueryResult::VarDeclaration(_, var) => {
                    project.query_usage(&mut package, var.name_node.id())
                }
                QueryResult::Parameter(_, par) => {
                    project.query_usage(&mut package, par.name_node.id())
                }
                QueryResult::StructDeclaration(st) => {
                    project.query_usage(&mut package, st.name_node.id())
                }

                _ => return None,
            };
            drop(project);
            let usage_location: Vec<Location> = usages
                .into_iter()
                .map(|usage| {
                    let span = usage.span;
                    let range = Range::new(
                        Position::new(span.start.row as u32, span.start.column as u32),
                        Position::new(span.end.row as u32, span.end.column as u32),
                    );
                    Location {
                        uri: file_path_to_url(&usage.file_path),
                        range,
                    }
                })
                .collect();
            Some(usage_location)
        })?;
        Ok(())
    }

    fn prepare_rename(&self, _id: RequestId, mut params: TextDocumentPositionParams) -> Result<()> {
        normalize_uri(&mut params.text_document.uri);
        let _uri = Arc::new(params.text_document.uri.clone());
        Ok(())
    }

    fn rename(&self, _id: RequestId, mut params: RenameParams) -> Result<()> {
        normalize_uri(&mut params.text_document_position.text_document.uri);
        let _uri = Arc::new(params.text_document_position.text_document.uri.clone());
        Ok(())
    }

    fn document_highlight(
        &self,
        _id: RequestId,
        mut params: DocumentHighlightParams,
    ) -> Result<()> {
        normalize_uri(&mut params.text_document_position_params.text_document.uri);
        let _uri = Arc::new(
            params
                .text_document_position_params
                .text_document
                .uri
                .clone(),
        );
        Ok(())
    }

    fn formatting(&self, _id: RequestId, mut params: DocumentFormattingParams) -> Result<()> {
        normalize_uri(&mut params.text_document.uri);
        let _uri = Arc::new(params.text_document.uri.clone());
        Ok(())
    }

    fn execute_command(&self, _id: RequestId, _params: ExecuteCommandParams) -> Result<()> {
        Ok(())
    }

    fn inlay_hints(&self, id: RequestId, mut params: InlayHintParams) -> Result<()> {
        normalize_uri(&mut params.text_document.uri);
        let uri = Arc::new(params.text_document.uri.clone());
        let project = self.project.clone();
        self.handle_feature_request(id, params, uri.clone(), move |request| {
            let url = uri.path().to_string();
            let mut project = project.lock().unwrap();
            let Some((package, file_name)) = project.package_and_file_name(&PathBuf::from_str(&url).unwrap()) else {
                return None;
            };
            let (package,_) = project.query_package(&package)?;
            drop(project);
            let mut package = package.write().unwrap();
            let Some(file) = package.files.get(&file_name).map(|f|f.clone()) else {
                return None;
            };

            let range = &request.params.range;
            let hints = inlay_hints(
                &mut package,
                &file,
                &SourceSpan {
                    start: SourcePosition {
                        row: range.start.line as usize,
                        column: range.start.character as usize,
                    },
                    end: SourcePosition {
                        row: range.end.line as usize,
                        column: range.end.character as usize,
                    },
                },
            );
            Some(hints)
        })?;
        Ok(())
    }

    fn inlay_hint_resolve(&self, id: RequestId, hint: InlayHint) -> Result<()> {
        let response = lsp_server::Response::new_ok(id, hint);
        self.connection.sender.send(response.into()).unwrap();
        Ok(())
    }

    fn semantic_tokens_range(
        &self,
        _id: RequestId,
        _params: SemanticTokensRangeParams,
    ) -> Result<()> {
        Ok(())
    }

    fn process_messages(&mut self) -> Result<()> {
        loop {
            crossbeam_channel::select! {
                recv(&self.connection.receiver) -> msg => {
                    match msg? {
                        Message::Request(request) => {
                            if self.connection.handle_shutdown(&request)? {
                                return Ok(());
                            }

                            if let Some(response) = RequestDispatcher::new(request)
                                .on::<HoverRequest, _>(|id, params| self.hover(id, params))?
                                .on::<WorkspaceSymbol, _>(|id, params| self.workspace_symbols(id, params))?
                                .on::<Completion, _>(|id, params| {
                                    self.completion(id, params)?;
                                    Ok(())
                                })?
                                .on::<ResolveCompletionItem, _>(|id, params| {
                                    self.completion_resolve(id, params)?;
                                    Ok(())
                                })?
                                .on::<GotoDefinition, _>(|id, params| self.goto_definition(id, params))?
                                .on::<References, _>(|id, params| self.references(id, params))?
                                .on::<PrepareRenameRequest, _>(|id, params| {
                                    self.prepare_rename(id, params)
                                })?
                                .on::<Rename, _>(|id, params| self.rename(id, params))?
                                .on::<DocumentHighlightRequest, _>(|id, params| {
                                    self.document_highlight(id, params)
                                })?
                                .on::<Formatting, _>(|id, params| self.formatting(id, params))?
                                .on::<ExecuteCommand, _>(|id, params| self.execute_command(id, params))?
                                .on::<SemanticTokensRangeRequest, _>(|id, params| {
                                    self.semantic_tokens_range(id, params)
                                })?
                                .on::<InlayHintRequest, _>(|id,params| {
                                    self.inlay_hints(id, params)
                                })?
                                .on::<InlayHintResolveRequest, _>(|id, params| {
                                    self.inlay_hint_resolve(id, params)
                                })?
                                .default()
                            {
                                self.connection.sender.send(response.into())?;
                            }
                        }
                        Message::Notification(notification) => {
                            NotificationDispatcher::new(notification)
                                .on::<Cancel, _>(|params| self.cancel(params))?
                                .on::<DidChangeConfiguration, _>(|params| {
                                    self.did_change_configuration(params)
                                })?
                                .on::<DidChangeWatchedFiles, _>(|params| {
                                    self.did_change_watched_files(params)
                                })?
                                .on::<DidOpenTextDocument, _>(|params| self.did_open(params))?
                                .on::<DidChangeTextDocument, _>(|params| self.did_change(params))?
                                .on::<DidSaveTextDocument, _>(|params| self.did_save(params))?
                                .on::<DidCloseTextDocument, _>(|params| self.did_close(params))?
                                .default();
                        }
                        Message::Response(_) => {
                        }
                    };
                },
            };
        }
    }

    pub fn run(mut self) -> Result<()> {
        self.initialize()?;
        self.process_messages()?;
        self.pool.join();
        Ok(())
    }
}

fn find_package_file(
    project: &Ptr<Mutex<Project>>,
    uri: &Url,
) -> Option<(Ptr<RwLock<PackageSemanticAnalyzer>>, OsString)> {
    let url = uri.path().to_string();
    let mut project = project.lock().unwrap();
    let (package, file_name) = project.package_and_file_name(&PathBuf::from_str(&url).unwrap())?;
    let (package, _) = project.query_package(&package)?;
    Some((package, file_name))
}
