use std::{
    collections::HashMap,
    path::PathBuf,
    sync::{Arc, Mutex},
};

use anyhow::Result;
use czlanglib::{
    ast::{SelectorFieldType, SourcePosition, SourceSpan},
    format::{format_fun_signature, format_param, format_var_declaration},
    init,
    project::{FileChange, Project},
    query::{find_in_file, QueryResult},
    semantics::IdentifierBinding,
    types::types_to_string,
};
use lsp_server::{Connection, Message, Notification, RequestId};
use lsp_types::{notification::*, request::*, *};
use serde::Serialize;
use threadpool::ThreadPool;

use crate::{
    completion::{dot_completion, scope_symbols_completion},
    dispatch::{NotificationDispatcher, RequestDispatcher},
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

impl Server {
    pub fn new(connection: Connection, _current_dir: PathBuf) -> Self {
        Self {
            connection: Arc::new(connection),
            pool: threadpool::Builder::new().build(),
            project: Arc::new(Mutex::new(Project {
                open_files: HashMap::new(),
            })),
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
            folding_range_provider: Some(FoldingRangeProviderCapability::Simple(true)),
            definition_provider: Some(OneOf::Left(true)),
            references_provider: Some(OneOf::Left(true)),
            hover_provider: Some(HoverProviderCapability::Simple(true)),
            completion_provider: Some(CompletionOptions {
                trigger_characters: Some(vec![".".into()]),
                ..CompletionOptions::default()
            }),
            document_symbol_provider: Some(OneOf::Left(true)),
            workspace_symbol_provider: Some(OneOf::Left(true)),
            rename_provider: Some(OneOf::Right(RenameOptions {
                prepare_provider: Some(true),
                work_done_progress_options: WorkDoneProgressOptions::default(),
            })),
            document_highlight_provider: Some(OneOf::Left(true)),
            document_formatting_provider: Some(OneOf::Left(true)),
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

    fn publish_errors(&self, project: &Project, uri: &Url) {
        let url: String = uri.clone().into();
        if let Some(file) = project.open_files.get(&url) {
            let mut all_errors = file
                .parse_errors
                .iter()
                .chain(file.file_analyzer.errors.iter())
                .peekable();
            if all_errors.peek().is_none() {
                self.connection
                    .sender
                    .send(
                        Notification::new(
                            "textDocument/publishDiagnostics".to_string(),
                            PublishDiagnosticsParams {
                                uri: uri.clone(),
                                diagnostics: vec![],
                                version: None,
                            },
                        )
                        .into(),
                    )
                    .unwrap();
            }
            for error in all_errors {
                let start = error.node.span.start;
                let end = error.node.span.end;
                self.connection
                    .sender
                    .send(
                        Notification::new(
                            "textDocument/publishDiagnostics".to_string(),
                            PublishDiagnosticsParams {
                                uri: uri.clone(),
                                diagnostics: vec![Diagnostic::new_simple(
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
                                )],
                                version: None,
                            },
                        )
                        .into(),
                    )
                    .unwrap();
            }
        }
    }

    fn did_open(&mut self, mut params: DidOpenTextDocumentParams) -> Result<()> {
        normalize_uri(&mut params.text_document.uri);
        let url: String = params.text_document.uri.clone().into();

        let mut project = self.project.lock().unwrap();
        project.open_file(url.clone(), params.text_document.text);
        project.validate_file(&url);
        self.publish_errors(&project, &params.text_document.uri);
        Ok(())
    }

    fn did_change(&mut self, mut params: DidChangeTextDocumentParams) -> Result<()> {
        normalize_uri(&mut params.text_document.uri);
        let url: String = params.text_document.uri.clone().into();

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
        project.validate_file(&url);
        self.publish_errors(&project, &params.text_document.uri);

        Ok(())
    }

    fn did_save(&mut self, params: DidSaveTextDocumentParams) -> Result<()> {
        let mut uri = params.text_document.uri;
        normalize_uri(&mut uri);

        Ok(())
    }

    fn did_close(&mut self, mut params: DidCloseTextDocumentParams) -> Result<()> {
        normalize_uri(&mut params.text_document.uri);

        let mut project = self.project.lock().unwrap();
        project.close_file(&params.text_document.uri.into());

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
            let uri: String = uri.as_ref().clone().into();
            let mut project = project.lock().unwrap();
            let file = project.open_files.get_mut(&uri);
            let Some(file) = file else {return None};

            let position = SourcePosition::new(position.line as usize, position.character as usize);

            if let Some(dot_completions) = dot_completion(file, &position) {
                return Some(dot_completions);
            }

            let list = scope_symbols_completion(file, position);
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
            let mut project = project.lock().unwrap();
            let uri: String = uri.as_ref().clone().into();
            let file = project.open_files.get_mut(&uri);
            let Some(file) = file else {return None};

            let position = SourcePosition::new(position.line as usize, position.character as usize);
            let Some(result) = find_in_file(&mut file.file_analyzer, position) else { return None };

            let result = match result {
                QueryResult::Function(fun) => format_fun_signature(&fun.signature),
                QueryResult::Parameter(parameter) => {
                    format!("(parameter) {}", format_param(&parameter))
                }
                QueryResult::Identifier(expression_semantics) => {
                    let Some(binding) = expression_semantics.binding.as_ref() else {
                        return None;
                    };
                    match binding {
                        IdentifierBinding::VarDeclaration(var) => {
                            if expression_semantics.narrowed_types.is_some() {
                                format!(
                                    "(narrowed variable): {}",
                                    format_var_declaration(
                                        &var,
                                        &file.file_analyzer.query_var_types(&var)
                                    )
                                )
                            } else {
                                format_var_declaration(
                                    &var,
                                    &file.file_analyzer.query_var_types(&var),
                                )
                            }
                        }
                        IdentifierBinding::Parameter(param) => {
                            if expression_semantics.narrowed_types.is_some() {
                                format!("(narrowed parameter) {}", format_param(&param))
                            } else {
                                format!("(parameter) {}", format_param(&param))
                            }
                        }
                    }
                }
                QueryResult::VarDeclaration(var) => {
                    format_var_declaration(&var, &file.file_analyzer.query_var_types(&var))
                }
                QueryResult::FunctionCall(fun) => {
                    if let Some(fun) = fun.binding {
                        format_fun_signature(fun.as_function_signature())
                    } else {
                        return None;
                    }
                }
                QueryResult::StructDeclaration(struct_dec) => {
                    format!("struct {}", struct_dec.name)
                }
                QueryResult::StructFieldDeclaration(field) => {
                    format!("{} {}", field.name, types_to_string(&field.types))
                }
                QueryResult::SelectorField(result) => {
                    format!("field {}", types_to_string(result.1.r#type.types()))
                }
                QueryResult::StructIdentifier(struct_dec) => {
                    format!("struct {}", struct_dec.name)
                }
                QueryResult::StructFieldInitialization(field) => {
                    format!("field {}", types_to_string(&field.types))
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
        let url = Arc::new(
            params
                .text_document_position_params
                .text_document
                .uri
                .clone(),
        );
        let position = params.text_document_position_params.position;
        let project = self.project.clone();
        self.handle_feature_request(id, params, url.clone(), move |_request| {
            let mut project = project.lock().unwrap();
            let uri: String = url.as_ref().clone().into();
            let file = project.open_files.get_mut(&uri);
            let Some(file) = file else {return None};

            let position = SourcePosition::new(position.line as usize, position.character as usize);
            let Some(result) = find_in_file(&mut file.file_analyzer, position) else { return None };

            let target = match result {
                QueryResult::Identifier(identifier_semantics) => {
                    let Some(binding) = identifier_semantics.binding else {
                        return None;
                    };
                    match binding {
                        IdentifierBinding::VarDeclaration(var) => var.name_node.span.clone(),
                        IdentifierBinding::Parameter(param) => param.node.span,
                    }
                }
                QueryResult::StructIdentifier(struct_dec) => struct_dec.name_node.span.clone(),
                QueryResult::FunctionCall(fun) => {
                    if let Some(binding) = fun.binding {
                        binding.as_function_signature().name_node.span.clone()
                    } else {
                        return None;
                    }
                }
                QueryResult::SelectorField(result) => {
                    match result.0.field {
                        SelectorFieldType::Identifier(identifier) => {
                            let parent = match result.1.parent {
                                Some(parent) => parent,
                                None => return None,
                            };

                            if let Some(field) = parent.fields.iter().find(|f| f.name == identifier)
                            {
                                field.name_node.span.clone()
                            } else {
                                return None;
                            }
                        }
                        SelectorFieldType::Call => return None, // TODO
                    }
                }
                QueryResult::StructFieldInitialization(field) => field.name_node.span,
                _ => return None,
            };
            let target = Range::new(
                Position::new(target.start.row as u32, target.start.column as u32),
                Position::new(target.end.row as u32, target.end.column as u32),
            );
            Some(GotoDefinitionResponse::Scalar(Location {
                uri: url.as_ref().clone(),
                range: target,
            }))
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

    fn inlay_hints(&self, _id: RequestId, mut params: InlayHintParams) -> Result<()> {
        normalize_uri(&mut params.text_document.uri);
        let _uri = Arc::new(params.text_document.uri.clone());
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
                                .on::<PrepareRenameRequest, _>(|id, params| {
                                    self.prepare_rename(id, params)
                                })?
                                .on::<Rename, _>(|id, params| self.rename(id, params))?
                                .on::<DocumentHighlightRequest, _>(|id, params| {
                                    self.document_highlight(id, params)
                                })?
                                .on::<Formatting, _>(|id, params| self.formatting(id, params))?
                                .on::<ExecuteCommand,_>(|id, params| self.execute_command(id, params))?
                                .on::<SemanticTokensRangeRequest, _>(|id, params| {
                                    self.semantic_tokens_range(id, params)
                                })?
                                .on::<InlayHintRequest, _>(|id,params| {
                                    self.inlay_hints(id, params)
                                })?
                                .on::<InlayHintResolveRequest,_>(|id, params| {
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
