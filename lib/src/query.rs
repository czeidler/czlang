use crate::{
    ast::{
        Block, BlockTrait, Expression, ExpressionType, Field, Function, FunctionTrait,
        IfAlternative, IfExpression, Parameter, SelectorField, SourcePosition, Statement, Struct,
        VarDeclaration,
    },
    semantics::{
        ExpressionSemantics, FileSemanticAnalyzer, FileSemantics, FunctionCallSemantics,
        SelectorFieldSemantics, TypeBinding, TypeQueryContext,
    },
    sum_type::SumType,
    types::Ptr,
};

#[derive(Debug, Clone)]
pub enum QueryResult {
    Literal(SumType),
    Function(Ptr<Function>),
    FunctionCall(FunctionCallSemantics),
    Parameter(Parameter),
    Identifier(Ptr<Block>, ExpressionSemantics),
    StructIdentifier(Ptr<Struct>),
    VarDeclaration(Ptr<VarDeclaration>),
    StructDeclaration(Ptr<Struct>),
    StructFieldDeclaration(Field),
    StructFieldInitialization(Field),
    /// the found SelectorField and the SelectorFieldSemantics
    SelectorField((SelectorField, SelectorFieldSemantics)),
}

pub fn find_in_file(
    analyzer: &mut FileSemanticAnalyzer,
    position: SourcePosition,
) -> Option<QueryResult> {
    let file = analyzer.query_file();
    for (_, fun) in &file.functions {
        if !fun.signature.node.contains(position) {
            continue;
        }
        if let Some(result) = find_in_function(analyzer, fun, position) {
            return Some(result);
        }
    }

    if let Some(result) = find_in_structs(&file, position) {
        return Some(result);
    }
    None
}

fn find_in_structs(file: &FileSemantics, position: SourcePosition) -> Option<QueryResult> {
    for (_, struct_def) in &file.structs {
        if !struct_def.node.contains(position) {
            continue;
        }
        if struct_def.name_node.contains(position) {
            return Some(QueryResult::StructDeclaration(struct_def.clone()));
        }
        for field in &struct_def.fields {
            if field.node.contains(position) {
                return Some(QueryResult::StructFieldDeclaration(field.clone()));
            }
        }
    }
    None
}

fn find_in_block(
    analyzer: &mut FileSemanticAnalyzer,
    block: &Ptr<Block>,
    position: SourcePosition,
) -> Option<QueryResult> {
    for statement in block.statements() {
        let block = FunctionBlock { block: &block };
        match statement {
            Statement::VarDeclaration(var) => {
                if var.name_node.contains(position) {
                    return Some(QueryResult::VarDeclaration(var.clone()));
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
        }
    }
    None
}

fn find_in_function(
    analyzer: &mut FileSemanticAnalyzer,
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
        return Some(QueryResult::Parameter(param.clone()));
    }

    let body = fun.body();
    find_in_block(analyzer, &body, position)
}

// TODO remove:
struct FunctionBlock<'a> {
    block: &'a Ptr<Block>,
}

fn find_in_expression(
    analyzer: &mut FileSemanticAnalyzer,
    block: &FunctionBlock,
    expression: &Expression,
    position: SourcePosition,
) -> Option<QueryResult> {
    match &expression.r#type {
        ExpressionType::Identifier(_) => {
            let Some(identifier_semantics) = analyzer
                .query_identifier(block.block, expression.node.id) else { return None };
            Some(QueryResult::Identifier(
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
        ExpressionType::FunctionCall(call) => match analyzer.query_function_call(&call) {
            Some(function_call) => Some(QueryResult::FunctionCall(function_call.clone())),
            None => None,
        },
        ExpressionType::StructInitialization(struct_init) => {
            if struct_init.name_node.contains(position) {
                return analyzer
                    .query_struct_initialization(
                        TypeQueryContext::Function(block.block.fun().signature.clone()),
                        &struct_init,
                        &struct_init.name,
                    )
                    .and_then(|r| r.binding)
                    .and_then(|binding| match binding {
                        TypeBinding::Struct(struct_dec) => {
                            Some(QueryResult::StructIdentifier(struct_dec.clone()))
                        }
                        _ => None,
                    });
            }
            for field in &struct_init.fields {
                if field.name_node.contains(position) {
                    if let Some(f) = analyzer.query_struct_field_initializer(block.block, &field) {
                        return Some(QueryResult::StructFieldInitialization(f));
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
        _ => None,
    }
}

fn find_in_if(
    analyzer: &mut FileSemanticAnalyzer,
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
    analyzer: &mut FileSemanticAnalyzer,
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

    return Some(QueryResult::SelectorField((selector_field.clone(), result)));
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
    analyzer: &mut FileSemanticAnalyzer,
    position: SourcePosition,
) -> (Ptr<FileSemantics>, Option<Vec<Ptr<VarDeclaration>>>) {
    let file = analyzer.query_file();
    for (_, fun) in &file.functions {
        let body = fun.body();

        let var = find_completions_in_block(&body, position);
        return (file, Some(var));
    }
    (file, None)
}
