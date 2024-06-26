use crate::{
    ast::{
        Block, BlockTrait, Expression, ExpressionType, Field, FileContext, Function, FunctionTrait,
        IfAlternative, IfExpression, Parameter, SelectorField, SourcePosition, Statement,
        StringTemplatePart, Struct, VarDeclaration,
    },
    semantics::{
        types::SumType, ExpressionSemantics, FunctionCallSemantics, PackageContentSemantics,
        PackageSemanticAnalyzer, SelectorFieldSemantics,
    },
    types::Ptr,
};

#[derive(Debug, Clone)]
pub enum QueryResult {
    Literal(SumType),
    Function(Ptr<Function>),
    FunctionCall(FunctionCallSemantics),
    Parameter(Ptr<Function>, Parameter),
    Identifier(usize, Ptr<Block>, ExpressionSemantics),
    StructIdentifier(Ptr<Struct>),
    VarDeclaration(Ptr<Block>, Ptr<VarDeclaration>),
    StructDeclaration(Ptr<Struct>),
    StructFieldDeclaration(Ptr<Struct>, Field),
    StructFieldInitialization(Ptr<Struct>, Field),
    /// the found SelectorField and the SelectorFieldSemantics
    SelectorField((Ptr<Block>, SelectorField, SelectorFieldSemantics)),
}

pub fn find_in_file(
    analyzer: &mut PackageSemanticAnalyzer,
    file: &Ptr<FileContext>,
    position: SourcePosition,
) -> Option<QueryResult> {
    let package = analyzer.query_package_content();
    for fun in package.functions.values().chain(package.methods.iter()) {
        if fun.body_node.file_id != file.file_id {
            continue;
        }
        if !fun.signature.node.contains(position) {
            continue;
        }
        if let Some(result) = find_in_function(analyzer, fun, position) {
            return Some(result);
        }
    }

    if let Some(result) = find_in_structs(&package, file, position) {
        return Some(result);
    }
    None
}

fn find_in_structs(
    package: &PackageContentSemantics,
    file: &Ptr<FileContext>,
    position: SourcePosition,
) -> Option<QueryResult> {
    for (_, struct_def) in &package.structs {
        if struct_def.node.file_id != file.file_id {
            continue;
        }
        if !struct_def.node.contains(position) {
            continue;
        }
        if struct_def.name_node.contains(position) {
            return Some(QueryResult::StructDeclaration(struct_def.clone()));
        }
        for field in &struct_def.fields {
            if field.node.contains(position) {
                return Some(QueryResult::StructFieldDeclaration(
                    struct_def.clone(),
                    field.clone(),
                ));
            }
        }
    }
    None
}

fn find_in_block(
    analyzer: &mut PackageSemanticAnalyzer,
    block: &Ptr<Block>,
    position: SourcePosition,
) -> Option<QueryResult> {
    for statement in block.statements() {
        let block = FunctionBlock { block: &block };
        match statement {
            Statement::VarDeclaration(var) => {
                if var.name_node.contains(position) {
                    return Some(QueryResult::VarDeclaration(
                        block.block.clone(),
                        var.clone(),
                    ));
                }
                if var.value.node.contains(position) {
                    return find_in_expression(analyzer, &block, &var.value, position);
                }
                continue;
            }
            Statement::Return(ret) => {
                if let Some(ret) = &ret.expression {
                    if ret.node.contains(position) {
                        return find_in_expression(analyzer, &block, ret, position);
                    }
                }
            }
            Statement::Expression(statement) => {
                if statement.expression.node.contains(position) {
                    return find_in_expression(analyzer, &block, &statement.expression, position);
                }
            }
            Statement::Loop(loop_statement) => {
                if let Some(range) = loop_statement.range {
                    if range.variable_node.contains(position) {
                        let Some(identifier_semantics) = analyzer
                            .query_identifier(block.block, range.variable_node.id()) else { return None };
                        return Some(QueryResult::Identifier(
                            range.variable_node.id,
                            loop_statement.body.clone(),
                            identifier_semantics,
                        ));
                    }
                    if range.from.node.contains(position) {
                        return find_in_expression(analyzer, &block, &range.from, position);
                    }
                    if range.to.node.contains(position) {
                        return find_in_expression(analyzer, &block, &range.to, position);
                    }
                }
                if loop_statement.body.node.contains(position) {
                    return find_in_block(analyzer, &loop_statement.body, position);
                }
            }
            Statement::Break(_) => {}
            Statement::Continue(_) => {}
            Statement::Assignment(assignment) => {
                if assignment.left.node.contains(position) {
                    return find_in_expression(analyzer, &block, &assignment.left, position);
                }
                if assignment.right.node.contains(position) {
                    return find_in_expression(analyzer, &block, &assignment.right, position);
                }
            }
        }
    }
    None
}

fn find_in_function(
    analyzer: &mut PackageSemanticAnalyzer,
    fun: &Ptr<Function>,
    position: SourcePosition,
) -> Option<QueryResult> {
    if fun.signature.name_node.contains(position) {
        return Some(QueryResult::Function(fun.clone()));
    }
    for param in &fun.signature.parameters {
        if !param.node.contains(position) {
            continue;
        }
        //return Some(types_to_string(&param.types));
        return Some(QueryResult::Parameter(fun.clone(), param.clone()));
    }

    let body = fun.body();
    find_in_block(analyzer, &body, position)
}

// TODO remove:
struct FunctionBlock<'a> {
    block: &'a Ptr<Block>,
}

fn find_in_expression(
    analyzer: &mut PackageSemanticAnalyzer,
    block: &FunctionBlock,
    expression: &Expression,
    position: SourcePosition,
) -> Option<QueryResult> {
    match &expression.r#type {
        ExpressionType::Identifier(_) => {
            let Some(identifier_semantics) = analyzer
                .query_identifier(block.block, expression.node.id()) else { return None };
            Some(QueryResult::Identifier(
                expression.node.id,
                block.block.clone(),
                identifier_semantics,
            ))
        }
        ExpressionType::BinaryExpression(binary) => {
            if binary.left.node.contains(position) {
                return find_in_expression(analyzer, block, &binary.left, position);
            }
            if binary.right.node.contains(position) {
                return find_in_expression(analyzer, block, &binary.right, position);
            }
            None
        }
        ExpressionType::UnaryExpression(unary) => {
            if unary.operand.node.contains(position) {
                return find_in_expression(analyzer, block, &unary.operand, position);
            }
            None
        }
        ExpressionType::FunctionCall(call) => {
            if call.name_node.contains(position) {
                return match analyzer.query_function_call(&block.block, &call) {
                    Some(function_call) => Some(QueryResult::FunctionCall(function_call.clone())),
                    None => None,
                };
            }

            for arg in &call.arguments {
                if arg.node.contains(position) {
                    return find_in_expression(analyzer, block, arg, position);
                }
            }
            None
        }
        ExpressionType::StructInitialization(struct_init) => {
            let Some(struct_dec) = analyzer
                .query_struct_initialization(&block.block, &struct_init) else {
                return None;
            };

            if struct_init.name_node.contains(position) {
                return Some(QueryResult::StructIdentifier(struct_dec));
            }
            for field in &struct_init.fields {
                if field.name_node.contains(position) {
                    if let Some(f) = analyzer.query_struct_field_initializer(block.block, &field) {
                        return Some(QueryResult::StructFieldInitialization(struct_dec, f));
                    }
                }

                if field.value.node.contains(position) {
                    return find_in_expression(analyzer, block, &field.value, position);
                }
            }
            None
        }
        ExpressionType::SelectorExpression(selector) => {
            if selector.root.node.contains(position) {
                return find_in_expression(analyzer, block, &selector.root, position);
            }
            for field in &selector.fields {
                if let Some(result) = find_in_selector_field(analyzer, block, field, position) {
                    return Some(result);
                }
            }
            None
        }
        ExpressionType::Block(block) => find_in_block(analyzer, block, position),
        ExpressionType::If(if_expression) => find_in_if(analyzer, block, &if_expression, position),
        ExpressionType::Bool(_) => {
            let Some(s) = analyzer.query_expression(block.block, expression) else {
                return None;
            };
            s.resolved_types.map(|t| QueryResult::Literal(t))
        }
        ExpressionType::IntLiteral(_) => {
            let Some(s) = analyzer.query_expression(block.block, expression) else {
                return None;
            };
            s.resolved_types.map(|t| QueryResult::Literal(t))
        }
        ExpressionType::EitherCheck(check) => {
            if check.left.node.contains(position) {
                return find_in_expression(analyzer, block, &check.left, position);
            }
            None
        }
        ExpressionType::Pipe(pipe) => {
            if pipe.left.node.contains(position) {
                return find_in_expression(analyzer, block, &pipe.left, position);
            }
            if pipe.right.node.contains(position) {
                return find_in_expression(analyzer, block, &pipe.right, position);
            }
            None
        }
        ExpressionType::ReturnErrorPipe(pipe) => {
            if pipe.left.node.contains(position) {
                return find_in_expression(analyzer, block, &pipe.left, position);
            }
            None
        }
        ExpressionType::String(parts) => {
            for part in parts {
                match part {
                    StringTemplatePart::Expression(expr) => {
                        if expr.node.contains(position) {
                            return find_in_expression(analyzer, block, &expr, position);
                        }
                    }
                    StringTemplatePart::String(_) => continue,
                }
            }
            None
        }
        _ => None,
    }
}

fn find_in_if(
    analyzer: &mut PackageSemanticAnalyzer,
    block: &FunctionBlock,
    if_expression: &IfExpression,
    position: SourcePosition,
) -> Option<QueryResult> {
    if let Some(result) = find_in_expression(analyzer, block, &if_expression.condition, position) {
        return Some(result);
    } else if let Some(result) = find_in_block(analyzer, &if_expression.consequence, position) {
        return Some(result);
    } else if let Some(alternative) = &if_expression.alternative {
        match alternative {
            IfAlternative::Else(block) => find_in_block(analyzer, &block, position),
            IfAlternative::If(if_expression) => {
                find_in_if(analyzer, block, if_expression, position)
            }
        }
    } else {
        None
    }
}

fn find_in_selector_field(
    analyzer: &mut PackageSemanticAnalyzer,
    block: &FunctionBlock,
    selector_field: &SelectorField,
    position: SourcePosition,
) -> Option<QueryResult> {
    if !selector_field.node.contains(position) {
        return None;
    }

    let Some(result) = analyzer
        .query_selector_field(block.block, selector_field) else {
        return None;
    };

    return Some(QueryResult::SelectorField((
        block.block.clone(),
        selector_field.clone(),
        result,
    )));
}

fn find_completions_in_if(
    if_expression: &Ptr<IfExpression>,
    position: SourcePosition,
) -> Vec<Ptr<VarDeclaration>> {
    let mut vars = find_completions_in_block(&if_expression.consequence, position);
    if let Some(alternative) = &if_expression.alternative {
        let mut alternative_vars = match alternative {
            IfAlternative::Else(e) => find_completions_in_block(&e, position),
            IfAlternative::If(i) => find_completions_in_if(&i, position),
        };
        vars.append(&mut alternative_vars);
    }
    vars
}

fn find_completions_in_block(
    block: &Ptr<Block>,
    position: SourcePosition,
) -> Vec<Ptr<VarDeclaration>> {
    let mut vars = vec![];
    if !block.node.contains(position) {
        return vars;
    }

    for statement in block.statements() {
        if statement.node().span.start.row >= position.row {
            break;
        }
        match statement {
            Statement::VarDeclaration(var) => vars.push(var),
            Statement::Expression(statement) => match statement.expression.r#type {
                ExpressionType::If(if_expression) => {
                    let mut if_vars = find_completions_in_if(&if_expression, position);
                    vars.append(&mut if_vars);
                }
                _ => {}
            },
            _ => continue,
        }
    }
    vars
}

pub fn find_completions(
    analyzer: &mut PackageSemanticAnalyzer,
    position: SourcePosition,
) -> (
    Ptr<PackageContentSemantics>,
    Option<Vec<Ptr<VarDeclaration>>>,
) {
    let file = analyzer.query_package_content();
    for (_, fun) in &file.functions {
        let body = fun.body();

        let var = find_completions_in_block(&body, position);
        return (file, Some(var));
    }
    (file, None)
}
