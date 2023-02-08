use crate::{
    ast::{
        Block, BlockTrait, Expression, ExpressionType, Field, Function, FunctionTrait, Parameter,
        SelectorField, SourcePosition, Statement, Struct, VarDeclaration,
    },
    semantics::{
        FileSemanticAnalyzer, FileSemantics, FunctionCallSemantics, IdentifierBinding,
        SelectorFieldSemantics, TypeBinding,
    },
    types::Ptr,
};

#[derive(Debug, Clone)]
pub enum QueryResult {
    Function(Ptr<Function>),
    FunctionCall(FunctionCallSemantics),
    Parameter(Parameter),
    Identifier(IdentifierBinding),
    StructIdentifier(Ptr<Struct>),
    VarDeclaration(Ptr<VarDeclaration>),
    StructDeclaration(Ptr<Struct>),
    StructFieldDeclaration(Field),
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
    for statement in body.statements() {
        let block = FunctionBlock { block: &body };
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
            Statement::IfStatement(if_statement) => {
                if !if_statement.node.contains(position) {
                    continue;
                }
                if if_statement.condition.node.contains(position) {
                    return find_in_expression(analyzer, &block, &if_statement.condition, position);
                }
                // TODO find in block
            }
            Statement::Return(ret) => {
                if let Some(ret) = &ret.expression {
                    if ret.node.contains(position) {
                        return find_in_expression(analyzer, &block, ret, position);
                    }
                }
            }
            Statement::Expression(expr) => {
                if expr.node.contains(position) {
                    return find_in_expression(analyzer, &block, &expr, position);
                }
            }
        }
    }
    //Some(format!("{}: span: {:?}", fun.name, fun.node.span))
    //Some(fun.name.clone())
    None
}

// TODO remove:
struct FunctionBlock<'a> {
    block: &'a Block,
}

fn find_in_expression(
    analyzer: &mut FileSemanticAnalyzer,
    block: &FunctionBlock,
    expression: &Expression,
    position: SourcePosition,
) -> Option<QueryResult> {
    match &expression.r#type {
        ExpressionType::Identifier(_) => {
            let Some(identifier) = analyzer
                .query_identifier(block.block, expression.node.id)
                .map(|s| s.binding.clone())
                .flatten() else { return None };
            Some(QueryResult::Identifier(identifier))
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
            match analyzer.query_function_call(block.block, &call) {
                Some(function_call) => Some(QueryResult::FunctionCall(function_call.clone())),
                None => None,
            }
        }
        ExpressionType::StructInitialization(struct_init) => {
            if struct_init.name_node.contains(position) {
                return analyzer
                    .query_type_identifier(&struct_init.name_node, &struct_init.name)
                    .and_then(|r| r.binding)
                    .and_then(|binding| match binding {
                        TypeBinding::Struct(struct_dec) => {
                            Some(QueryResult::StructIdentifier(struct_dec.clone()))
                        }
                    });
            }
            // TODO
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
        _ => None,
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
