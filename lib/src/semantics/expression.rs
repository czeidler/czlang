use std::collections::HashMap;

use crate::{
    ast::{
        BinaryExpression, BinaryOperator, EitherCheckExpression, Expression, ExpressionType, Field,
        IfAlternative, IfExpression, LangError, NodeData, PipeExpression, SelectorExpression,
        SelectorFieldType, StringTemplatePart, Struct, StructFieldInitialization,
        StructInitialization, UnaryOperator,
    },
    semantics::{
        IdentifierBinding, IfExpressionSemantics, PipeSemantics, SelectorFieldBinding,
        SelectorFieldSemantics, Type,
    },
    types::Ptr,
};

use super::{
    flow_container::{
        apply_inverse_narrowing, apply_narrowing, merge_narrowed_flows, AnalysisState,
        FlowContainer,
    },
    intersection, types_to_string, ExpContext, ExpressionSemantics, PackageContentSemantics,
    PackageSemanticAnalyzer, PipeArg, SArray, SSlice, SumType, TypeNarrowing, TypeQueryContext,
    ValueOrigin,
};

impl PackageSemanticAnalyzer {
    /// Returns the resolved type of the expression.
    ///
    /// # Arguments
    /// * is_assignment: If the expression is expected to return a value, e.g. from a block
    pub(crate) fn validate_expression(
        &mut self,
        flow: &mut AnalysisState,
        context: &ExpContext,
        expression: &Expression,
        is_assignment: bool,
    ) -> ExpressionSemantics {
        let expression_semantics =
            match self.check_expression_semantics(flow, context, expression, is_assignment) {
                Ok(expression_semantics) => match expression_semantics {
                    Some(expression_semantics) => expression_semantics,
                    None => return ExpressionSemantics::empty(),
                },
                Err(err) => {
                    self.errors.push(err);
                    return ExpressionSemantics::empty();
                }
            };

        self.bind_expression_type(expression, expression_semantics.clone());

        if let Some(binding) = &expression_semantics.binding {
            self.bind_identifier_usage(&expression.node, binding);
        }

        expression_semantics
    }

    fn expression_value_origin(&self, expression: &Expression) -> Vec<ValueOrigin> {
        self.expressions
            .get(&expression.node.id())
            .map(|it| it.value_origin.clone())
            .unwrap_or_default()
    }

    /// Helper method: validates the expression without binding it
    fn check_expression_semantics(
        &mut self,
        flow: &mut AnalysisState,
        context: &ExpContext,
        expression: &Expression,
        is_assignment: bool,
    ) -> Result<Option<ExpressionSemantics>, LangError> {
        let expression_semantics = match &expression.r#type {
            ExpressionType::String(parts) => {
                for part in parts {
                    match part {
                        StringTemplatePart::Expression(expr) => {
                            self.validate_expression(flow, context, expr, false);
                        }
                        StringTemplatePart::String(_) => continue,
                    }
                }
                ExpressionSemantics::resolved_types(
                    Some(SumType::from_type(Type::String)),
                    vec![ValueOrigin::from_node(&expression.node)],
                )
            }

            ExpressionType::Identifier(identifier) => {
                let binding = match self.lookup_identifier(context, identifier) {
                    Some(identifier) => identifier,
                    None => {
                        return Err(LangError::type_error(
                            &expression.node,
                            format!("Identifier not found: {:?}", identifier),
                        ));
                    }
                };

                let query_context = TypeQueryContext::from_block(&context.block);
                let (resolved_types, is_mutable, value_origin) = match &binding {
                    IdentifierBinding::VarDeclaration(var) => {
                        let var_sem = self
                            .variable_declarations
                            .get(&var.node.id())
                            .unwrap()
                            .clone();
                        (
                            Some(self.query_var_types(&query_context, &var)),
                            var.is_mutable,
                            var_sem.value_origin,
                        )
                    }
                    IdentifierBinding::Parameter(param) => (
                        Some(self.query_types(&query_context, &param.types)),
                        param.is_mutable,
                        vec![ValueOrigin {
                            origin: param.node.clone(),
                            path: vec![],
                        }],
                    ),
                    IdentifierBinding::PipeArg(arg) => {
                        (Some(arg.types.clone()), false, arg.value_origin.clone())
                    }
                    IdentifierBinding::Package(package) => (
                        Some(SumType::from_type(Type::Package(package.clone()))),
                        false,
                        vec![],
                    ),
                };
                ExpressionSemantics {
                    resolved_types,
                    narrowed_types: flow.flow.lookup(identifier),
                    is_mutable,
                    binding: Some(binding),
                    value_origin,
                }
            }
            ExpressionType::IntLiteral(_) => ExpressionSemantics::resolved_types(
                Some(SumType::from_type(Type::Unresolved(vec![
                    Type::I32,
                    Type::U32,
                ]))),
                vec![ValueOrigin::from_node(&expression.node)],
            ),
            ExpressionType::Null => ExpressionSemantics::resolved_types(
                Some(SumType::from_type(Type::Null)),
                vec![ValueOrigin::from_node(&expression.node)],
            ),
            ExpressionType::Bool(_) => ExpressionSemantics::resolved_types(
                Some(SumType::from_type(Type::Bool)),
                vec![ValueOrigin::from_node(&expression.node)],
            ),

            ExpressionType::UnaryExpression(unary) => match unary.operator {
                UnaryOperator::Minus => match unary.operand.r#type {
                    ExpressionType::IntLiteral(_) => ExpressionSemantics::resolved_types(
                        Some(SumType::from_type(Type::Unresolved(vec![Type::I32]))),
                        vec![ValueOrigin::from_node(&unary.operand.node)],
                    ),
                    _ => {
                        return Err(LangError::type_error(
                            &expression.node,
                            format!("Unexpected operand: {:?}", unary.operand.r#type),
                        ));
                    }
                },
                UnaryOperator::Not => {
                    match self.check_expression_semantics(
                        flow,
                        context,
                        &unary.operand,
                        is_assignment,
                    )? {
                        Some(semantics) => semantics,
                        None => return Ok(None),
                    }
                }
                UnaryOperator::Reference => {
                    let mut semantics =
                        self.validate_expression(flow, context, &unary.operand, is_assignment);

                    if let Some(IdentifierBinding::Package(_)) = semantics.binding {
                        return Err(LangError::type_error(
                            &expression.node,
                            "Can't take a reference from a package".to_string(),
                        ));
                    }
                    semantics.resolved_types = semantics
                        .resolved_types
                        .map(|types| types.apply_reference());
                    semantics.narrowed_types = semantics
                        .narrowed_types
                        .map(|types| types.apply_reference());

                    semantics
                }
                UnaryOperator::MutReference => {
                    let mut semantics =
                        self.validate_expression(flow, context, &unary.operand, is_assignment);

                    if let Some(IdentifierBinding::Package(_)) = semantics.binding {
                        return Err(LangError::type_error(
                            &expression.node,
                            "Can't take a reference from a package".to_string(),
                        ));
                    }
                    semantics.resolved_types = semantics
                        .resolved_types
                        .map(|types| types.apply_mut_reference());
                    semantics.narrowed_types = semantics
                        .narrowed_types
                        .map(|types| types.apply_mut_reference());
                    semantics
                }

                UnaryOperator::TypeOf => return Ok(None),
            },
            ExpressionType::BinaryExpression(binary) => {
                let left = self
                    .validate_expression(flow, context, &binary.left, false)
                    .into_types()
                    .unwrap_or(SumType::new(vec![]));
                let right = self
                    .validate_expression(flow, context, &binary.right, false)
                    .into_types()
                    .unwrap_or(SumType::new(vec![]));
                let Some(overlap) = intersection(&left, &right) else {
                    return Err(LangError::type_error(
                        &expression.node,
                        format!(
                            "Incompatible type in expression: left == {:?}, right == {:?}",
                            left, right,
                        ),
                    ));
                };
                let number_required = match binary.operator {
                    BinaryOperator::Add => true,
                    BinaryOperator::Substract => true,
                    BinaryOperator::Multiply => true,
                    BinaryOperator::Divide => true,
                    BinaryOperator::Equal => true,
                    BinaryOperator::NotEqual => true,
                    BinaryOperator::Smaller => true,
                    BinaryOperator::SmallerEqual => true,
                    BinaryOperator::Bigger => true,
                    BinaryOperator::BiggerEqual => true,
                    BinaryOperator::And => false,
                    BinaryOperator::Or => false,
                };
                if number_required && !left.is_number() {
                    return Err(LangError::type_error(
                        &expression.node,
                        "Operator requires a number".to_string(),
                    ));
                }
                ExpressionSemantics::resolved_types(
                    Some(overlap),
                    vec![ValueOrigin::from_node(&expression.node)],
                )
            }
            ExpressionType::ParenthesizedExpression(_) => todo!(),
            ExpressionType::ArrayExpression(array) => ExpressionSemantics::resolved_types(
                Some(SumType::from_type(Type::Array(SArray {
                    types: Ptr::new(self.validate_expression_list(
                        flow,
                        context,
                        &array.expressions,
                    )),
                    length: array.expressions.len(),
                }))),
                vec![ValueOrigin::from_node(&expression.node)],
            ),
            ExpressionType::SliceExpression(slice) => ExpressionSemantics::resolved_types(
                Some(SumType::from_type(Type::Slice(SSlice {
                    types: Ptr::new(self.validate_expression_list(
                        flow,
                        context,
                        &vec![slice.operand.as_ref().clone()],
                    )),
                }))),
                // TODO: is this origin correct?
                vec![ValueOrigin::from_node(&expression.node)],
            ),
            ExpressionType::FunctionCall(fun_call) => {
                let fun_declaration = match self.validate_fun_call(&fun_call, flow, context).binding
                {
                    Some(fun) => fun,
                    None => {
                        return Err(LangError::type_error(
                            &expression.node,
                            format!("No fun with name {} found", fun_call.name),
                        ));
                    }
                };
                let fun_signature = fun_declaration.as_function_signature();
                ExpressionSemantics::resolved_types(
                    self.query_return_type(&fun_signature),
                    vec![ValueOrigin::from_node(&expression.node)],
                )
            }
            ExpressionType::StructInitialization(struct_init) => {
                let Some(sem) = self.validate_struct_initialization( context, flow, is_assignment, struct_init)? else {
                    return Ok(None)
                };
                sem
            }
            ExpressionType::SelectorExpression(select) => {
                self.validate_selector_expression(flow, context, select, is_assignment)
            }
            ExpressionType::Block(block) => match self.validate_block(flow, block, is_assignment) {
                Some(s) => s,
                None => return Ok(None),
            },
            ExpressionType::If(if_expression) => ExpressionSemantics::resolved_types(
                // TODO calculate value origin
                self.validate_if_expression(flow, context, if_expression, is_assignment),
                vec![],
            ),
            ExpressionType::Pipe(pipe) => ExpressionSemantics::resolved_types(
                self.validate_pipe(flow, context, is_assignment, expression, pipe),
                self.expression_value_origin(&pipe.right),
            ),
            ExpressionType::ErrorExpression(error) => {
                let err_types = self.validate_expression(flow, context, &error, is_assignment);
                ExpressionSemantics::resolved_types(
                    Some(SumType::from_type(Type::Either(
                        SumType::empty(),
                        err_types.types().unwrap_or(SumType::empty()),
                    ))),
                    vec![ValueOrigin::from_node(&expression.node)],
                )
            }
            ExpressionType::EitherCheck(check) => {
                return Err(LangError::type_error(
                    &check.left.node,
                    "Either check expression can only be used within if expression".to_string(),
                ));
            }
            ExpressionType::ReturnErrorPipe(pipe) => {
                let semantics: ExpressionSemantics =
                    self.validate_expression(flow, context, &pipe.left, is_assignment);
                let Some(expr_types) = semantics.types() else {
                    return Err(LangError::type_error(
                        &pipe.left.node,
                        format!(
                            "Invalid expression type in error return"
                        ),
                    ));
                };
                let Some((expr_value, expr_err)) = expr_types.as_either() else {
                    return Err(LangError::type_error(
                        &pipe.left.node,
                        format!(
                            "Expression is not an error error type"
                        ),
                    ));
                };
                let fun_signature = context.block.fun().signature.clone();
                let return_types = &fun_signature
                    .return_type
                    .as_ref()
                    .map(|t| {
                        self.query_types(
                            &TypeQueryContext::Function(fun_signature.clone()),
                            &t.types,
                        )
                    })
                    .unwrap_or(SumType::empty());
                let Some((_, ret_err)) = return_types.as_either() else {
                    return Err(LangError::type_error(
                        &pipe.left.node,
                        format!(
                            "Function must return an error either type"
                        ),
                    ));
                };
                match intersection(&expr_err, &ret_err) {
                    Some(_) => {}
                    None => {
                        return Err(LangError::type_error(
                            &pipe.left.node,
                            format!("No overlap between expression error ({}) and function return type ({})",  types_to_string(expr_types.types()), types_to_string(return_types.types())),
                        ));
                    }
                }
                ExpressionSemantics::resolved_types(
                    Some(expr_value),
                    self.expression_value_origin(expression),
                )
            }
        };
        Ok(Some(expression_semantics))
    }

    fn bind_expression_type(&mut self, expression: &Expression, semantics: ExpressionSemantics) {
        let existing = self.expressions.insert(expression.node.id(), semantics);
        assert!(existing.is_none());
    }

    fn bind_identifier_usage(&mut self, reference: &NodeData, binding: &IdentifierBinding) {
        let id = match binding {
            IdentifierBinding::VarDeclaration(var) => var.name_node.id(),
            IdentifierBinding::Parameter(param) => param.name_node.id(),
            IdentifierBinding::PipeArg(_) => return,
            IdentifierBinding::Package(_) => return,
        };
        let references = self.usages.entry(id).or_default();
        assert!(!references.contains(reference));
        references.push(reference.clone());
    }

    fn bind_struct_initialization(
        &mut self,
        struct_init: &StructInitialization,
    ) -> Option<Ptr<Struct>> {
        let Some(struct_dec) = self.lookup_struct(  &struct_init.name) else {
            return None;
        };

        let existing = self
            .struct_inits
            .insert(struct_init.node.id(), Some(struct_dec.clone()));
        assert!(existing.is_none());
        let references = self.usages.entry(struct_dec.name_node.id()).or_default();
        assert!(!references.contains(&struct_init.name_node));
        references.push(struct_init.name_node.clone());

        Some(struct_dec)
    }

    /// For example, `pkg.MyStruct {}`
    fn bind_pkg_struct_initialization(
        &mut self,
        pkg: &PackageContentSemantics,
        struct_init: &StructInitialization,
    ) -> Option<Ptr<Struct>> {
        let Some(struct_dec) = pkg.structs.get(&struct_init.name) else {
            return None;
        };

        let existing = self
            .struct_inits
            .insert(struct_init.node.id(), Some(struct_dec.clone()));
        assert!(existing.is_none());
        let references = self.usages.entry(struct_dec.name_node.id()).or_default();
        assert!(!references.contains(&struct_init.name_node));
        references.push(struct_init.name_node.clone());

        Some(struct_dec.clone())
    }

    fn validate_struct_initialization(
        &mut self,
        context: &ExpContext,
        flow: &mut AnalysisState,
        is_assignment: bool,
        struct_init: &StructInitialization,
    ) -> Result<Option<ExpressionSemantics>, LangError> {
        let Some(struct_dec) = self.bind_struct_initialization(&struct_init) else {
            return Err(LangError::type_error(
                &struct_init.name_node,
                format!("Can't resolve struct identifier: {:?}", &struct_init.name),
            ));
        };

        let mut expected_fields = struct_dec.fields.iter().fold(HashMap::new(), |mut set, f| {
            set.insert(f.name.clone(), f.clone());
            set
        });
        for field in &struct_init.fields {
            let Some(field_type) = self.validate_expression( flow, context, &field.value, is_assignment).into_types() else {
                continue;
            };

            let Some(struct_field) = expected_fields.remove(&field.name) else {
                self.errors.push(LangError::type_error(
                    &field.node,
                    "Field not in struct".to_string(),
                ));
                continue;
            };

            self.bind_struct_field_initialization(field, &struct_field);

            let struct_field_type = self
                .query_field_type(&struct_dec, &struct_field)
                .unwrap_or(SumType::empty());
            let overlap = intersection(&field_type, &struct_field_type);
            if overlap.is_none() {
                self.errors.push(LangError::type_error(
                    &field.node,
                    format!(
                        "Incompatible field types: field == {:?}, expr == {:?}",
                        types_to_string(struct_field_type.types()),
                        types_to_string(field_type.types()),
                    ),
                ));
                continue;
            }
        }
        if !expected_fields.is_empty() {
            self.errors.push(LangError::type_error(
                &struct_init.node,
                format!("Missing fields: {:?}", expected_fields),
            ));
        };
        Ok(Some(ExpressionSemantics::resolved_types(
            Some(SumType::from_type(Type::Struct(struct_dec))),
            vec![ValueOrigin::from_node(&struct_init.node)],
        )))
    }

    fn bind_struct_field_initialization(
        &mut self,
        field: &StructFieldInitialization,
        struct_field: &Field,
    ) {
        if self.struct_field_inits.contains_key(&field.node.id()) {
            return;
        }
        let existing = self
            .struct_field_inits
            .insert(field.node.id(), struct_field.clone());
        assert!(existing.is_none());
    }

    fn validate_expression_list(
        &mut self,
        flow: &mut AnalysisState,
        context: &ExpContext,
        expressions: &Vec<Expression>,
    ) -> Vec<Type> {
        let mut output = Vec::new();
        for expression in expressions {
            if let Some(types) = self
                .validate_expression(flow, context, &expression, true)
                .into_types()
            {
                for t in types {
                    if !output.contains(&t) {
                        output.push(t);
                    }
                }
            }
        }
        output.sort();
        output
    }

    /// Returns the type of the expression
    fn validate_selector_expression(
        &mut self,
        flow: &mut AnalysisState,
        context: &ExpContext,
        select: &SelectorExpression,
        is_assignment: bool,
    ) -> ExpressionSemantics {
        // validate root expression
        let root_semantics = self.validate_expression(flow, context, &select.root, is_assignment);
        let root_origin = root_semantics.value_origin.clone();
        let Some(root_types) = root_semantics
            .into_types() else {
                return ExpressionSemantics::empty();
            };
        let semantics = self.bind_selector_field(&select.root.node, &root_types, None, None);
        let Some(binding) = semantics.binding else {
            self.errors.push(LangError::type_error(
                &select.root.node,
                format!(
                    "Struct or package expected but got {}",
                    types_to_string(root_types.types())
                ),
            ));
            return ExpressionSemantics::empty();
        };
        let mut current_binding = binding;
        let mut current_type = semantics.r#type;
        for (i, field) in select.fields.iter().enumerate() {
            let current_struct_error = current_type.err();
            if current_struct_error.is_some() && !field.optional_chaining {
                self.errors.push(LangError::type_error(
                    &field.node,
                    format!(
                        "{} is error/nullable; use optional chaining '?.'",
                        field.field.name()
                    ),
                ));
                return ExpressionSemantics::empty();
            }
            if current_struct_error.is_none() && field.optional_chaining {
                self.errors.push(LangError::type_error(
                    &field.node,
                    format!(
                        "Optional chaining operator '?.' not allowed on none error/nullable struct {}",
                        field.field.name()
                    ),
                ));
                return ExpressionSemantics::empty();
            }

            let field_types = match &field.field {
                SelectorFieldType::Identifier(field_identifier) => match &current_binding {
                    SelectorFieldBinding::Struct(st) => {
                        let Some(found_field) = st.fields.iter().find(|f|&f.name == field_identifier) else {
                                self.errors.push(LangError::type_error(
                                    &field.node,
                                    format!("{} is not field of {}", field_identifier, field.field.name()),
                                ));
                                return ExpressionSemantics::empty();
                            };

                        self.query_types(
                            &TypeQueryContext::from_block(&context.block),
                            &found_field.types,
                        )
                    }
                    SelectorFieldBinding::Package(_) => {
                        self.errors.push(LangError::type_error(
                            &field.node,
                            format!("Unexpected identifier"),
                        ));
                        return ExpressionSemantics::empty();
                    }
                },
                SelectorFieldType::Call(call) => {
                    // TODO what happens to the value origin here?
                    match &current_binding {
                        SelectorFieldBinding::Struct(st) => {
                            // TODO: support generic struct instances
                            let Some(method) = self.validate_method_call(&st, call, flow, context).binding else {
                                self.errors.push(LangError::type_error(
                                    &field.node,
                                    format!("Not a struct method: {}", call.name),
                                ));
                                return ExpressionSemantics::empty();
                            };
                            if let Some(return_types) = &method.signature.return_type {
                                self.query_types(
                                    &TypeQueryContext::from_block(&context.block),
                                    &return_types.types,
                                )
                            } else {
                                SumType::empty()
                            }
                        }
                        SelectorFieldBinding::Package(pkg) => {
                            let Some(fun) = self.validate_pkg_fun_call(call, pkg, flow, context) else {
                                return ExpressionSemantics::empty();
                            };

                            if let Some(return_type) = &fun.signature.return_type {
                                self.query_types(
                                    &TypeQueryContext::from_block(&context.block),
                                    &return_type.types,
                                )
                            } else {
                                SumType::empty()
                            }
                        }
                    }
                }
                SelectorFieldType::StructInit(struct_init) => match &current_binding {
                    SelectorFieldBinding::Struct(_) => {
                        self.errors.push(LangError::type_error(
                            &field.node,
                            format!("Unexpected struct initialization"),
                        ));
                        return ExpressionSemantics::empty();
                    }
                    SelectorFieldBinding::Package(package) => {
                        let Some(st) = self.bind_pkg_struct_initialization(package, struct_init) else {
                            self.errors.push(LangError::type_error(
                                &struct_init.name_node,
                                format!("Struct not found"),
                            ));
                            return ExpressionSemantics::empty();
                        };
                        SumType::from_type(Type::Struct(st))
                    }
                },
            };

            let semantics = self.bind_selector_field(
                &field.node,
                &field_types,
                Some(current_binding.clone()),
                current_struct_error.clone(),
            );
            if let Some(binding) = semantics.binding {
                current_binding = binding;
                current_type = semantics.r#type;
            } else if i == select.fields.len() - 1 {
                let value_origin_path = select.value_path().unwrap_or_default();
                let origins = root_origin
                    .into_iter()
                    .map(|mut origin| {
                        origin.path.append(&mut value_origin_path.clone());
                        origin
                    })
                    .collect::<Vec<_>>();

                // last selector field
                let current_error = semantics.r#type.err();
                if let Some(err) = current_error {
                    // Add sum type
                    if err.len() > 1 {
                        self.sum_types.insert(err.sum_type_name(), err.clone());
                    }

                    if let Some((value, _)) = field_types.as_either() {
                        // only take value part from the either, the error part is already included in err
                        return ExpressionSemantics::resolved_types(
                            Some(SumType::from_type(Type::Either(value, err))),
                            origins,
                        );
                    } else {
                        return ExpressionSemantics::resolved_types(
                            Some(SumType::from_type(Type::Either(field_types, err))),
                            origins,
                        );
                    }
                } else {
                    return ExpressionSemantics::resolved_types(Some(field_types), origins);
                }
            } else {
                // all but the last field must be structs
                self.errors.push(LangError::type_error(
                    &field.node,
                    format!("Field doesn't point to a struct or package"),
                ));
                return ExpressionSemantics::empty();
            }
        }
        return ExpressionSemantics::empty();
    }

    /// Takes:
    /// 1) the field_node either from the root expression or from the fields
    /// 2) the field type either the root expression type or the type of the fields
    /// 3) the parent struct, None for the root expression
    /// 4) the current error, if any
    fn bind_selector_field(
        &mut self,
        field_node: &NodeData,
        field_types: &SumType,
        parent: Option<SelectorFieldBinding>,
        parent_error: Option<SumType>,
    ) -> SelectorFieldSemantics {
        let field_type = field_types.as_type();
        let field_type_value = field_type.and_then(|t| match t {
            Type::Either(value, _) => value.as_type(),
            _ => Some(t),
        });
        let binding = field_type_value.and_then(|identifier| match &identifier {
            Type::Struct(struct_def) => Some(SelectorFieldBinding::Struct(struct_def.clone())),
            Type::Package(path) => {
                if let Some(pkg) = self.dependencies.get(path) {
                    Some(SelectorFieldBinding::Package(pkg.clone()))
                } else {
                    None
                }
            }
            _ => None,
        });

        // combine errors
        let either_type = field_type.and_then(|t| match t {
            Type::Either(value, err) => Some((value.clone(), err.clone())),
            _ => None,
        });
        let (value, value_error) = match (parent_error, either_type) {
            (None, None) => (field_types.clone(), None),
            (None, Some(either_type)) => (either_type.0, Some(either_type.1)),
            (Some(parent_error), None) => (field_types.clone(), Some(parent_error)),
            (Some(parent_error), Some(either_type)) => {
                let mut error = parent_error.clone();
                error.union(either_type.1);
                (either_type.0, Some(error))
            }
        };
        let full_type = match value_error {
            Some(value_error) => SumType::from_type(Type::Either(value, value_error)),
            None => value,
        };

        let semantics = SelectorFieldSemantics {
            field_types: field_types.clone(),
            r#type: full_type,
            binding,
            parent,
        };
        let existing = self
            .selector_fields
            .insert(field_node.id(), semantics.clone());
        assert!(existing.is_none());
        semantics
    }

    fn bind_if_type_narrowing(
        &mut self,
        if_expression: &Ptr<IfExpression>,
        narrowing: TypeNarrowing,
    ) {
        let existing = self.if_expressions.insert(
            if_expression.node.id(),
            IfExpressionSemantics {
                type_narrowing: Some(narrowing),
            },
        );
        assert!(existing.is_none());
    }

    /// Returns the overall expression type if all branches have a block return
    fn validate_if_expression(
        &mut self,
        flow: &mut AnalysisState,
        context: &ExpContext,
        if_expression: &Ptr<IfExpression>,
        is_assignment: bool,
    ) -> Option<SumType> {
        let original_flow = flow.flow.clone();

        let narrowing =
            if let ExpressionType::BinaryExpression(binary) = &if_expression.condition.r#type {
                self.validate_typeof_expression(flow, context, &binary)
                    .map(|narrowing| {
                        self.bind_if_type_narrowing(if_expression, narrowing.clone());
                        narrowing
                    })
            } else if let ExpressionType::EitherCheck(check) = &if_expression.condition.r#type {
                self.validate_either_check_expression(flow, context, check)
                    .map(|narrowing| {
                        self.bind_if_type_narrowing(if_expression, narrowing.clone());
                        narrowing
                    })
            } else {
                let types = self
                    .validate_expression(flow, context, &if_expression.condition, is_assignment)
                    .into_types()?;
                if !types.is_bool() {
                    self.errors.push(LangError::type_error(
                        &if_expression.condition.node,
                        "If expression must evaluate to a boolean value".to_string(),
                    ))
                }
                None
            };
        if let Some(narrowing) = &narrowing {
            flow.flow = apply_narrowing(&original_flow, narrowing);
        };

        let if_block_result = self
            .validate_block(flow, &if_expression.consequence, is_assignment)
            .and_then(|s| s.into_types());
        let consequence_flow = flow.flow.clone();
        let Some(alternative) = &if_expression.alternative else {
            if is_assignment {
                self.errors.push(LangError::type_error(
                    &if_expression.node,
                    "Else alternative required for if assignment".to_string(),
                ));
            }
            if let Some(narrowing) = &narrowing {
                if flow.flow.returned.is_some() {
                    flow.flow = apply_inverse_narrowing(&original_flow, narrowing);
                } else {
                    flow.flow = original_flow;
                }
            }
            return None;
        };

        // else or if/else case:
        if let Some(narrowing) = &narrowing {
            flow.flow = apply_inverse_narrowing(&original_flow, narrowing);
        }

        let alternative_type = match alternative {
            IfAlternative::Else(else_block) => self
                .validate_block(flow, else_block, is_assignment)
                .and_then(|s| s.into_types()),
            IfAlternative::If(nested_if) => {
                self.validate_if_expression(flow, context, nested_if, is_assignment)
            }
        };

        if let Some(narrowing) = &narrowing {
            match (&consequence_flow.returned, &flow.flow.returned) {
                (None, Some(_)) => {
                    flow.flow = consequence_flow;
                }
                (None, None) => {
                    flow.flow = merge_narrowed_flows(
                        &original_flow,
                        &consequence_flow,
                        &flow.flow,
                        narrowing,
                    );
                }
                (Some(_), None) => {
                    // keep current, alternative flow
                }
                (Some(left), Some(right)) => {
                    // both path returned
                    let mut return_type = SumType::from_types(left.types());
                    return_type.union(SumType::from_types(right.types()));
                    flow.flow = Ptr::new(FlowContainer {
                        parent: Some(original_flow.clone()),
                        vars: HashMap::new(),
                        returned: Some(return_type),
                    });
                }
            };
        };

        if let Some(alternative_type) = alternative_type {
            let mut temp = if_block_result.unwrap_or(SumType::new(vec![]));
            temp.union(alternative_type);
            return Some(temp);
        }

        if_block_result
    }

    fn validate_either_check_expression(
        &mut self,
        flow: &mut AnalysisState,
        context: &ExpContext,
        check: &EitherCheckExpression,
    ) -> Option<TypeNarrowing> {
        let identifier = match &check.left.r#type {
            ExpressionType::Identifier(identifier) => identifier,
            _ => {
                self.errors.push(LangError::type_error(
                    &check.left.node,
                    format!("Invalid typeof identifier"),
                ));
                return None;
            }
        };

        let left = self.validate_expression(flow, context, &check.left, false);
        let left_types = left.types();
        if let Some((value, err)) = left_types.clone().and_then(|types| types.as_either()) {
            let original_types = left_types.unwrap();
            let narrowed_type = SumType::from_type(if check.is_equal {
                Type::Either(SumType::empty(), err)
            } else {
                Type::Either(value, SumType::empty())
            });
            let result = TypeNarrowing {
                original_types,
                identifier: identifier.clone(),
                identifier_node: check.left.node.clone(),
                reduction: !check.is_equal,
                types: narrowed_type,
            };
            Some(result)
        } else {
            self.errors.push(LangError::type_error(
                &check.left.node,
                "Must be an either type".to_string(),
            ));
            None
        }
    }

    fn validate_typeof_expression(
        &mut self,
        flow: &mut AnalysisState,
        context: &ExpContext,
        expression: &BinaryExpression,
    ) -> Option<TypeNarrowing> {
        let is_and_or = match expression.operator {
            BinaryOperator::And => true,
            BinaryOperator::Or => true,
            _ => false,
        };
        if is_and_or {
            let (left, right) = match (&expression.left.r#type, &expression.right.r#type) {
                (
                    ExpressionType::BinaryExpression(left),
                    ExpressionType::BinaryExpression(right),
                ) => (left, right),
                _ => return None,
            };
            let (mut left, right) = match (
                self.validate_typeof_expression(flow, context, left),
                self.validate_typeof_expression(flow, context, right),
            ) {
                (None, None) => return None,
                (Some(left), Some(right)) => (left, right),
                _ => {
                    self.errors.push(LangError::type_error(
                        // TODO: parent node?
                        &expression.right.node,
                        "Type narrowing can't be mixed with other expressions".to_string(),
                    ));
                    return None;
                }
            };
            if left.identifier != right.identifier {
                self.errors.push(LangError::type_error(
                    // TODO: parent node?
                    &expression.left.node,
                    "Type narrowing identifier mismatch".to_string(),
                ));
                return None;
            }
            if left.reduction != right.reduction {
                self.errors.push(LangError::type_error(
                    // TODO: parent node?
                    &expression.left.node,
                    "Invalid type narrowing".to_string(),
                ));
                return None;
            }
            left.types.union(right.types);
            return Some(left);
        }

        let unary = match &expression.left.r#type {
            ExpressionType::UnaryExpression(unary) => unary,
            _ => return None,
        };
        match unary.operator {
            UnaryOperator::TypeOf => {}
            _ => return None,
        };

        let identifier = match &unary.operand.r#type {
            ExpressionType::Identifier(identifier) => identifier,
            _ => {
                self.errors.push(LangError::type_error(
                    // TODO: operator node?
                    &unary.operand.node,
                    format!("Invalid typeof identifier"),
                ));
                return None;
            }
        };

        let equal = match expression.operator {
            BinaryOperator::Equal => true,
            BinaryOperator::NotEqual => false,
            _ => {
                self.errors.push(LangError::type_error(
                    &expression.left.node,
                    format!("Invalid typeof operator"),
                ));
                return None;
            }
        };

        let original_types = self
            .validate_expression(flow, context, &unary.operand, false)
            .into_types()
            .unwrap_or(SumType::new(vec![]));
        for t in original_types.types() {
            if let Type::Unresolved(_) = &t {
                self.errors.push(LangError::type_error(
                    &unary.operand.node,
                    format!("Can't narrow unresolved type: {:?}", &t),
                ));
                return None;
            }
        }
        let mut result = TypeNarrowing {
            original_types,
            identifier: identifier.clone(),
            identifier_node: unary.operand.node.clone(),
            reduction: !equal,
            types: SumType::new(vec![]),
        };
        match &expression.right.r#type {
            // TODO handle unary & case
            ExpressionType::Identifier(identifier) => match identifier.as_str() {
                "string" => result.types.push(Type::String),
                "bool" => result.types.push(Type::Bool),
                "u8" => result.types.push(Type::U8),
                "i8" => result.types.push(Type::I8),
                "u32" => result.types.push(Type::U32),
                "i32" => result.types.push(Type::I32),
                _ => {
                    self.errors.push(LangError::type_error(
                        &expression.right.node,
                        format!("Invalid typeof identifier: {}", identifier),
                    ));
                    return None;
                }
            },
            ExpressionType::Null => result.types.push(Type::Null),
            _ => {
                self.errors.push(LangError::type_error(
                    &expression.right.node,
                    "Invalid typeof expression".to_string(),
                ));
                return None;
            }
        }
        Some(result)
    }

    fn bind_pipe(&mut self, node: &NodeData, pipe_arg: &Option<PipeArg>) {
        let existing = self.pipe_expressions.insert(
            node.id(),
            PipeSemantics {
                pipe_argument: pipe_arg.as_ref().map(|it| it.types.clone()),
            },
        );
        assert!(existing.is_none());
    }

    fn validate_pipe(
        &mut self,
        flow: &mut AnalysisState,
        context: &ExpContext,
        is_assignment: bool,
        expression: &Expression,
        pipe: &PipeExpression,
    ) -> Option<SumType> {
        self.bind_pipe(&expression.node, &context.pipe_arg);

        let org_flow = flow.flow.clone();
        let left = self.validate_expression(flow, context, &pipe.left, false);
        flow.flow = org_flow;
        let Some(left_exp_types) = left.types() else {
            self.errors.push(LangError::type_error(
                &pipe.left.node,
                    "Left side of the pipe must produce a type".to_string(),
            ));
            return None;
        };
        if left_exp_types.is_empty() {
            self.errors.push(LangError::type_error(
                &pipe.left.node,
                "Left side of the pipe must produce a type".to_string(),
            ));
            return None;
        }
        if let Some((left_value, left_error)) = left_exp_types.as_either() {
            if left_value.is_empty() && left_error.is_empty() {
                self.errors.push(LangError::type_error(
                    &pipe.left.node,
                    "Invalid return from left side of the pipe".to_string(),
                ));
                return None;
            }
        };

        // either the left value or error depending on the pipe type
        let left_types = if pipe.is_err_pipe {
            if let Some(left_err) = left_exp_types.err() {
                left_err
            } else {
                self.errors.push(LangError::type_error(
                    &pipe.left.node,
                    "Left side doesn't produces an error type".to_string(),
                ));
                return None;
            }
        } else {
            if let Some((value, _)) = left_exp_types.as_either() {
                value
            } else {
                left_exp_types.clone()
            }
        };
        let org_flow = flow.flow.clone();
        let right = self.validate_expression(
            flow,
            &ExpContext {
                block: context.block.clone(),
                pipe_arg: Some(PipeArg {
                    types: left_types,
                    value_origin: left.value_origin.clone(),
                }),
            },
            &pipe.right,
            is_assignment,
        );
        flow.flow = org_flow;

        let right_types = right.types();
        let Some((mut left_value, mut left_error)) = left_exp_types.as_either() else {
            return right_types;
        };

        if let Some((right_value, right_error)) = right_types
            .as_ref()
            .map(|it| it.as_either())
            .unwrap_or(None)
        {
            if !pipe.is_err_pipe {
                left_error.union(right_error);
                return Some(SumType::from_type(Type::Either(right_value, left_error)));
            } else {
                left_value.union(right_value);
                return Some(SumType::from_type(Type::Either(left_value, right_error)));
            }
        } else {
            let right_type = right_types.unwrap_or(SumType::empty());
            if !pipe.is_err_pipe {
                return Some(SumType::from_type(Type::Either(right_type, left_error)));
            } else {
                left_value.union(right_type);
                return Some(left_value);
            }
        }
    }
}
