use std::fs::create_dir_all;
use std::io::{self, Read, Write};
use std::path::{Path, PathBuf};

use crate::ast::{
    print_err, Array, ArrayExpression, BinaryOperator, Block, BlockTrait, Expression,
    ExpressionType, Field, FileContext, Function, FunctionCall, FunctionTrait, IfAlternative,
    IfStatement, Parameter, RefType, SelectorExpression, SelectorFieldType, Slice, SliceExpression,
    Statement, StringTemplatePart, Struct, StructFieldInitialization, StructInitialization, Type,
    UnaryOperator, VarDeclaration,
};
use crate::buildin::Buildins;
use crate::semantics::{FileSemanticAnalyzer, SelectorFieldBinding, TypeNarrowing};
use crate::types::{Ptr, SumType};

struct Writer<'a> {
    indentation: u16,
    /// just about to start a new line?
    starting_new_line: bool,
    buffer: &'a mut String,
}

impl<'a> Writer<'a> {
    fn new(buffer: &'a mut String) -> Self {
        Writer {
            indentation: 0,
            starting_new_line: true,
            buffer,
        }
    }
    fn indented<F>(&mut self, body: F)
    where
        F: FnOnce(&mut Writer<'a>) -> (),
    {
        self.indentation += 1;
        body(self);
        self.indentation -= 1;
    }

    fn write(&mut self, string: &str) -> &mut Self {
        if string.len() == 0 {
            return self;
        }
        if self.starting_new_line && self.indentation > 0 {
            for _ in 0..self.indentation {
                *self.buffer += "\t";
            }
            self.starting_new_line = false;
        }
        *self.buffer += string;
        self
    }

    fn new_line(&mut self) {
        self.write("\n");
        self.starting_new_line = true;
    }
}

struct RustTranspiler {
    buildins: Buildins,
}

impl RustTranspiler {
    fn transpile_types(&self, types: &Vec<RefType>, writer: &mut Writer) {
        if types.len() > 1 {
            let name = SumType::from_types(types).sum_type_name();
            writer.write(&name);
            return;
        }
        if types.is_empty() {
            return;
        }

        let t = types.get(0).unwrap();
        self.transpile_type(t, writer)
    }

    fn transpile_type(&self, t: &RefType, writer: &mut Writer) {
        if t.is_reference {
            writer.write("&");
        }
        let text = match &t.r#type {
            Type::Str => "str",
            Type::String => "String",
            Type::Bool => "bool",
            Type::I8 => "i8",
            Type::U8 => "u8",
            Type::I32 => "i32",
            Type::U32 => "u32",
            Type::Identifier(identifier) => identifier.as_str(),
            Type::Array(array) => return self.transpile_array(&array, writer),
            Type::Slice(slice) => return self.transpile_slice(&slice, writer),
            Type::Null => "None",
            Type::Unresolved(_) => panic!(),
        };
        writer.write(text);
    }

    fn transpile_sum_type_def(&self, name: &str, types: &SumType, writer: &mut Writer) {
        writer.write("enum ");
        writer.write(name);
        writer.write(" {");
        writer.new_line();
        writer.indented(|writer| {
            for t in types.types() {
                match &t.r#type {
                    Type::Null => writer.write("Null"),
                    Type::Str => todo!(),
                    Type::String => writer.write("String(String)"),
                    Type::Bool => writer.write("Bool(bool)"),
                    Type::U8 => writer.write("U8(u8)"),
                    Type::I8 => writer.write("I8(i8)"),
                    Type::U32 => writer.write("U32(u32)"),
                    Type::I32 => writer.write("I32(i32)"),
                    Type::Identifier(identifier) => {
                        writer.write(&format!("{}({})", &identifier, &identifier))
                    }
                    Type::Array(_) => writer.write("todoarray"),
                    Type::Slice(_) => writer.write("todoslice"),
                    Type::Unresolved(_) => panic!("Validation should have failed"),
                };
                writer.write(",");
                writer.new_line();
            }
        });
        writer.write("}");
    }

    fn transpile_array(&self, array: &Array, writer: &mut Writer) {
        writer.write("[");
        self.transpile_types(&array.types, writer);
        writer.write("; ");
        writer.write(&format!("{}", array.length));
        writer.write("]");
    }

    fn transpile_slice(&self, slice: &Slice, writer: &mut Writer) {
        writer.write("&[");
        self.transpile_types(&slice.types, writer);
        writer.write("]");
    }

    fn transpile_parameter(&self, parameter: &Parameter, writer: &mut Writer) {
        writer.write(&parameter.name);
        writer.write(": ");
        self.transpile_types(&parameter.types, writer);
    }

    fn transpile_parameters(&self, parameters: &Vec<Parameter>, writer: &mut Writer) {
        writer.write("(");
        let mut iter = parameters.iter().peekable();
        while let Some(parameter) = iter.next() {
            self.transpile_parameter(parameter, writer);
            if iter.peek().is_some() {
                writer.write(", ");
            }
        }
        writer.write(")");
    }

    fn transpile_expression(
        &self,
        analyzer: &mut FileSemanticAnalyzer,
        expression: &Expression,
        fun: &Ptr<Function>,
        writer: &mut Writer,
    ) {
        match &expression.r#type {
            ExpressionType::String(parts) => {
                let mut fmt_string = "".to_string();
                let mut fmt_params = Vec::new();
                for part in parts {
                    match part {
                        StringTemplatePart::Expression(expression) => {
                            let mut buffer = "".to_string();
                            let mut fmt_writer = Writer::new(&mut buffer);
                            self.transpile_expression(analyzer, expression, fun, &mut fmt_writer);

                            fmt_params.push(buffer);
                            fmt_string += "{}";
                        }
                        StringTemplatePart::String(string) => fmt_string += string,
                    }
                }
                if fmt_params.is_empty() {
                    writer.write("\"");
                    writer.write(&fmt_string);
                    writer.write("\"");
                } else {
                    writer.write("format!(\"");
                    writer.write(&fmt_string);
                    writer.write("\", ");
                    writer.write(&fmt_params.join(", "));
                    writer.write(")");
                }
            }
            ExpressionType::Identifier(identifier) => {
                writer.write(&identifier);
            }
            ExpressionType::IntLiteral(number) => {
                writer.write(&format!("{}", number));
            }
            ExpressionType::Null => {
                writer.write("Null");
            }
            ExpressionType::Bool(b) => {
                writer.write(&format!("{}", b));
            }
            ExpressionType::UnaryExpression(expr) => {
                let op = match expr.operator {
                    UnaryOperator::Minus => "-",
                    UnaryOperator::Not => "!",
                    UnaryOperator::Reference => "&",
                    UnaryOperator::TypeOf => "",
                };
                writer.write(op);
                self.transpile_expression(analyzer, &expr.operand, fun, writer);
            }
            ExpressionType::BinaryExpression(expr) => {
                let op = match expr.operator {
                    BinaryOperator::Add => "+",
                    BinaryOperator::Substract => "-",
                    BinaryOperator::Multiply => "*",
                    BinaryOperator::Divide => "/",
                    BinaryOperator::Equal => "==",
                    BinaryOperator::NotEqual => "!=",
                    BinaryOperator::Smaller => "<",
                    BinaryOperator::SmallerEqual => "<=",
                    BinaryOperator::Bigger => ">",
                    BinaryOperator::BiggerEqual => ">=",
                    BinaryOperator::And => "&&",
                    BinaryOperator::Or => "||",
                };
                self.transpile_expression(analyzer, &expr.left, fun, writer);
                writer.write(" ");
                writer.write(op);
                writer.write(" ");
                self.transpile_expression(analyzer, &expr.right, fun, writer);
            }
            ExpressionType::ParenthesizedExpression(expr) => {
                writer.write("(");
                self.transpile_expression(analyzer, &expr.expression, fun, writer);
                writer.write(")");
            }
            ExpressionType::ArrayExpression(array) => {
                self.transpile_array_expr(analyzer, array, fun, writer)
            }
            ExpressionType::SliceExpression(slice) => {
                self.transpile_slice_expr(analyzer, slice, fun, writer)
            }
            ExpressionType::FunctionCall(call) => {
                self.transpile_function_call(analyzer, call, fun, writer);
            }
            ExpressionType::StructInitialization(struct_init) => {
                self.transpile_struct_init(analyzer, struct_init, fun, writer);
            }
            ExpressionType::SelectorExpression(selector) => {
                self.transpile_selector_expr(analyzer, expression, selector, fun, writer);
            }
        };
    }

    fn transpile_selector_expr(
        &self,
        analyzer: &mut FileSemanticAnalyzer,
        expression: &Expression,
        selector: &SelectorExpression,
        fun: &Ptr<Function>,
        writer: &mut Writer,
    ) {
        let has_optional_chaining = selector.fields.iter().any(|f| f.optional_chaining);
        if !has_optional_chaining {
            self.transpile_expression(analyzer, &selector.root, fun, writer);
            for field in &selector.fields {
                match &field.field {
                    SelectorFieldType::Identifier(identifier) => {
                        writer.write(".");
                        writer.write(identifier);
                    }
                    SelectorFieldType::Call => todo!(),
                }
            }
            return;
        }

        let mut selector_start = String::new();
        self.transpile_expression(
            analyzer,
            &selector.root,
            fun,
            &mut Writer::new(&mut selector_start),
        );

        let mut encountered_first_optional = false;
        let mut current_types = analyzer
            .expressions
            .get(&selector.root.node.id)
            .map(|s| s.resolved_types.clone())
            .flatten()
            .unwrap();
        let mut current_struct = match analyzer
            .query_selector(&fun.body(), selector)
            .unwrap()
            .binding
            .unwrap()
        {
            SelectorFieldBinding::Struct(struct_dec) => struct_dec,
        };
        for field in &selector.fields {
            if !encountered_first_optional {
                if field.optional_chaining {
                    encountered_first_optional = true;
                    writer.write(&format!("match {} {{", selector_start));
                    writer.new_line();
                    writer.indented(|writer| {
                        let SelectorFieldType::Identifier(identifier) = &field.field else {
                                panic!("Field not an identifier; shouldn't have passed validation");
                            };
                        let sum_type = current_types.sum_type_name();
                        let struct_identifier = current_types
                            .iter()
                            .filter_map(|t| match &t.r#type {
                                Type::Identifier(identifier) => Some(identifier),
                                _ => None,
                            })
                            .next()
                            .unwrap();
                        writer.write(&format!("{}::Null => None,", sum_type));
                        writer.new_line();
                        writer.write(&format!(
                            "{}::{}(s) => Some(s.{}),",
                            sum_type, struct_identifier, identifier
                        ));
                        writer.new_line();
                    });
                    writer.write("}");
                } else {
                    match &field.field {
                        SelectorFieldType::Identifier(identifier) => {
                            selector_start.push_str(".");
                            selector_start.push_str(identifier);
                            current_types = SumType::from_types(
                                &current_struct
                                    .fields
                                    .iter()
                                    .find(|f| &f.name == identifier)
                                    .unwrap()
                                    .types,
                            );
                            current_struct = match analyzer
                                .query_selector_field(&fun.body(), &field)
                                .unwrap()
                                .binding
                                .unwrap()
                            {
                                SelectorFieldBinding::Struct(struct_dec) => struct_dec,
                            };
                        }
                        SelectorFieldType::Call => todo!(),
                    }
                }
            } else {
                // map optional
                match &field.field {
                    SelectorFieldType::Identifier(identifier) => {
                        writer.new_line();
                        writer.write(&format!(".map(|s| s.{})", identifier));
                    }
                    SelectorFieldType::Call => todo!(),
                };
            }
        }
        let resolved_types = analyzer
            .expressions
            .get(&expression.node.id)
            .map(|s| s.resolved_types.clone())
            .flatten()
            .unwrap();
        let target_sum_type = resolved_types.sum_type_name();
        let target_type = resolved_types
            .iter()
            .filter_map(|t| match &t.r#type {
                Type::Null => None,
                Type::U32 => Some("U32"),
                Type::I32 => Some("I32"),
                Type::Identifier(identifier) => Some(identifier),
                _ => panic!(),
            })
            .next()
            .unwrap();
        writer.new_line();
        writer.write(&format!(
            ".map(|s| {}::{}(s))",
            target_sum_type, target_type
        ));
        writer.new_line();
        writer.write(&format!(".unwrap_or({}::Null)", target_sum_type));
    }

    fn transpile_array_expr(
        &self,
        analyzer: &mut FileSemanticAnalyzer,
        array: &ArrayExpression,
        fun: &Ptr<Function>,
        writer: &mut Writer,
    ) {
        writer.write("[");
        let mut iter = array.expressions.iter().peekable();
        while let Some(expr) = iter.next() {
            self.transpile_expression(analyzer, expr, fun, writer);
            if iter.peek().is_some() {
                writer.write(", ");
            }
        }
        writer.write("]");
    }

    fn transpile_slice_expr(
        &self,
        analyzer: &mut FileSemanticAnalyzer,
        slice: &SliceExpression,
        fun: &Ptr<Function>,
        writer: &mut Writer,
    ) {
        self.transpile_expression(analyzer, &slice.operand, fun, writer);
        writer.write("[");
        if let Some(start) = slice.start {
            writer.write(&format!("{}", start));
        }
        writer.write("..");
        if let Some(end) = slice.end {
            writer.write(&format!("{}", end));
        }
        writer.write("]");
    }

    fn transpile_buildin_function_call(
        &self,
        analyzer: &mut FileSemanticAnalyzer,
        call: &FunctionCall,
        fun: &Ptr<Function>,
        writer: &mut Writer,
    ) -> bool {
        let buildin = match self.buildins.functions.get(&call.name) {
            Some(buildin) => buildin,
            None => return false,
        };

        match buildin.name.as_str() {
            "println" => {
                if let Some(arg0) = call.arguments.get(0) {
                    match arg0.r#type {
                        ExpressionType::String(_) => {
                            writer.write("println!(\"{}\", ");
                            self.transpile_expression(analyzer, arg0, fun, writer);
                            writer.write(")");
                            return true;
                        }
                        _ => {}
                    }
                }
                writer.write("println!(\"{}\", ");
                let mut iter = call.arguments.iter().peekable();
                while let Some(expr) = iter.next() {
                    self.transpile_expression(analyzer, expr, fun, writer);
                    if iter.peek().is_some() {
                        writer.write(", ");
                    }
                }
                writer.write(")");
                return true;
            }
            _ => {}
        }
        return false;
    }

    fn transpile_expression_with_mapping(
        &self,
        analyzer: &mut FileSemanticAnalyzer,
        expression: &Expression,
        target: Option<&Vec<RefType>>,
        fun: &Ptr<Function>,
        writer: &mut Writer,
    ) {
        let Some(target) = target else {
            self.transpile_expression(analyzer,&expression, fun, writer);
            return;
        };
        let target = SumType::from_types(&target);
        if matches!(expression.r#type, ExpressionType::Null) {
            writer.write(&target.sum_type_name());
            writer.write("::");
            self.transpile_expression(analyzer, &expression, fun, writer);
            return;
        }

        if target.len() == 1 {
            // the target is a simple type, i.e. we can directly assign the expression
            self.transpile_expression(analyzer, &expression, fun, writer);
        } else {
            let resolved_type = analyzer
                .expressions
                .get(&expression.node.id)
                .map(|s| s.resolved_types.clone())
                .flatten()
                .unwrap();
            if resolved_type.len() == 1 {
                writer.write(&target.sum_type_name());
                writer.write("::");
                // TODO refactor out:
                let t = match &resolved_type.types()[0].r#type {
                    Type::U32 => "U32",
                    Type::I32 => "I32",
                    Type::Identifier(identifier) => identifier,
                    _ => panic!("{}", resolved_type.types()[0]),
                };
                writer.write(&format!("{}", t));
                writer.write("(");
                self.transpile_expression(analyzer, &expression, fun, writer);
                writer.write(")");
            } else {
                // just the expresion
                self.transpile_expression(analyzer, &expression, fun, writer);
            }
        }
    }

    fn transpile_function_call(
        &self,
        analyzer: &mut FileSemanticAnalyzer,
        call: &FunctionCall,
        fun: &Ptr<Function>,
        writer: &mut Writer,
    ) {
        if self.transpile_buildin_function_call(analyzer, call, fun, writer) {
            return;
        }

        writer.write(&call.name);
        writer.write("(");

        let fun_call_binding = analyzer
            .query_function_call(&fun.body(), call)
            .unwrap()
            .binding
            .unwrap();
        let function = fun_call_binding.as_function_signature();

        let mut iter = call.arguments.iter().enumerate().peekable();
        while let Some((i, expr)) = iter.next() {
            let parameter = function.parameters.get(i).unwrap();
            self.transpile_expression_with_mapping(
                analyzer,
                expr,
                Some(&parameter.types),
                fun,
                writer,
            );
            if iter.peek().is_some() {
                writer.write(", ");
            }
        }

        writer.write(")");
    }

    fn transpile_var_declaration(
        &self,
        analyzer: &mut FileSemanticAnalyzer,
        var_declaration: &VarDeclaration,
        fun: &Ptr<Function>,
        writer: &mut Writer,
    ) {
        writer.write("let ");
        if var_declaration.is_mutable {
            writer.write("mut ");
        }
        writer.write(&var_declaration.name);
        match &var_declaration.types {
            Some(t) => {
                writer.write(": ");
                self.transpile_types(t, writer);
            }
            None => {}
        }
        writer.write(" = ");
        self.transpile_expression_with_mapping(
            analyzer,
            &var_declaration.value,
            var_declaration.types.as_ref(),
            fun,
            writer,
        );
        writer.write(";");
    }

    fn transpile_return_statement(
        &self,
        analyzer: &mut FileSemanticAnalyzer,
        expression: &Option<Expression>,
        fun: &Ptr<Function>,
        writer: &mut Writer,
    ) {
        writer.write("return");
        if let Some(expression) = expression {
            writer.write(" ");
            self.transpile_expression_with_mapping(
                analyzer,
                expression,
                Some(&fun.signature.return_types),
                fun,
                writer,
            );
        }
        writer.write(";");
    }

    fn transpile_if_type_narrowing(&self, type_narrowing: &TypeNarrowing, writer: &mut Writer) {
        if type_narrowing.original_types.len() == 1 {
            // nothing needs to be narrowed
            writer.write("true");
            return;
        }

        //TODO extract correct condition type here (not typeof)
        let condition_type = type_narrowing.original_types.sum_type_name();
        let target_type_name = type_narrowing.types.sum_type_name();

        writer.write(&format!(
            "let Some({}) = match {} {{",
            type_narrowing.identifier, type_narrowing.identifier
        ));
        writer.indented(|writer| {
            if type_narrowing.reduction {
                // true if in the form (typeof X != bool && typeof X != i32)
            } else {
                // false if in the form (typeof X == bool || typeof X == i32)
                for t in type_narrowing.types.types() {
                    writer.new_line();
                    if type_narrowing.types.len() > 1 {
                        writer.write(&format!(
                            "{}::{:?}(v) => Some({}::{:?}(v)),",
                            condition_type, t.r#type, target_type_name, t.r#type,
                        ));
                    } else {
                        writer.write(&format!(
                            "{}::{:?}(v) => Some(v),",
                            condition_type, t.r#type
                        ));
                    }
                }
                writer.new_line();
                writer.write("_ => None,");
            }
        });
        writer.new_line();
        writer.write("}");
    }

    fn transpile_if_statement(
        &self,
        analyzer: &mut FileSemanticAnalyzer,
        if_statement: &IfStatement,
        fun: &Ptr<Function>,
        writer: &mut Writer,
    ) {
        writer.write("if ");
        let type_narrowing = analyzer
            .if_statements
            .get(&if_statement.node.id)
            .map(|s| s.type_narrowing.as_ref())
            .flatten();
        if let Some(type_narrowing) = &type_narrowing {
            self.transpile_if_type_narrowing(type_narrowing, writer);
        } else {
            self.transpile_expression(analyzer, &if_statement.condition, fun, writer);
        }
        writer.write(" {");
        writer.new_line();
        writer.indented(|writer| {
            self.transpile_block(analyzer, &if_statement.consequence, fun, writer);
        });
        writer.write("}");
        if let Some(alternative) = &if_statement.alternative {
            match alternative {
                IfAlternative::Else(else_block) => {
                    writer.write(" else {");
                    writer.new_line();
                    writer.indented(|writer| {
                        self.transpile_block(analyzer, else_block, fun, writer);
                    });
                    writer.write("}");
                }
                IfAlternative::If(if_statement) => {
                    writer.write(" else ");
                    self.transpile_if_statement(analyzer, &if_statement, fun, writer);
                }
            }
        }
    }

    fn transpile_block(
        &self,
        analyzer: &mut FileSemanticAnalyzer,
        block: &Ptr<Block>,
        fun: &Ptr<Function>,
        writer: &mut Writer,
    ) {
        for statement in block.statements() {
            match statement {
                Statement::Expression(expr) => {
                    self.transpile_expression(analyzer, &expr, fun, writer);
                    writer.write(";");
                    writer.new_line();
                }
                Statement::VarDeclaration(var) => {
                    self.transpile_var_declaration(analyzer, &var, fun, writer);
                    writer.new_line();
                }
                Statement::Return(ret) => {
                    self.transpile_return_statement(analyzer, &ret.expression, fun, writer);
                    writer.new_line();
                }
                Statement::IfStatement(if_statement) => {
                    self.transpile_if_statement(analyzer, &if_statement, fun, writer);
                    writer.new_line();
                }
            }
        }
    }

    fn transpile_function(
        &self,
        analyzer: &mut FileSemanticAnalyzer,
        fun: &Ptr<Function>,
        writer: &mut Writer,
    ) {
        writer.write(&format!("fn {}", fun.signature.name));
        self.transpile_parameters(&fun.signature.parameters, writer);
        if !fun.signature.return_types.is_empty() {
            writer.write(" -> ");
            self.transpile_types(&fun.signature.return_types, writer);
        }
        writer.write(" {");
        writer.new_line();
        writer.indented(|writer| {
            self.transpile_block(analyzer, &fun.body(), fun, writer);
        });
        writer.write("}");
    }

    fn transpile_struct_field(&self, field: &Field, writer: &mut Writer) {
        writer.write(&field.name);
        writer.write(": ");
        if field.has_reference() {
            writer.write("&'a ");
        }
        self.transpile_types(&field.types, writer);

        writer.write(",");
    }

    fn transpile_struct_fields(&self, fields: &Vec<Field>, writer: &mut Writer) {
        for field in fields {
            self.transpile_struct_field(field, writer);
            writer.new_line();
        }
    }

    fn transpile_struct(&self, struct_def: &Struct, writer: &mut Writer) {
        writer.write(&format!("struct {}", struct_def.name));
        if struct_def.has_reference() {
            writer.write("<'a>");
        }
        writer.write(" {");
        writer.new_line();
        writer.indented(|writer| {
            self.transpile_struct_fields(&struct_def.fields, writer);
        });
        writer.write("}");
    }

    fn transpile_struct_field_init(
        &self,
        analyzer: &mut FileSemanticAnalyzer,
        struct_field_init: &StructFieldInitialization,
        struct_def: &Ptr<Struct>,
        fun: &Ptr<Function>,
        writer: &mut Writer,
    ) {
        writer.write(&struct_field_init.name);
        writer.write(": ");

        let field = struct_def
            .fields
            .iter()
            .find(|it| it.name == struct_field_init.name)
            .map(|it| it.clone())
            .unwrap();
        self.transpile_expression_with_mapping(
            analyzer,
            &struct_field_init.value,
            Some(&field.types),
            fun,
            writer,
        )
    }

    fn transpile_struct_init(
        &self,
        analyzer: &mut FileSemanticAnalyzer,
        struct_init: &StructInitialization,
        fun: &Ptr<Function>,
        writer: &mut Writer,
    ) {
        writer.write(&struct_init.name);
        writer.write(" {");
        writer.new_line();
        writer.indented(|writer| {
            let file = analyzer.query_file();
            let struct_def = file.structs.get(&struct_init.name).unwrap();
            for field in &struct_init.fields {
                self.transpile_struct_field_init(analyzer, field, &struct_def, fun, writer);
                writer.write(",");
                writer.new_line();
            }
        });
        writer.write("}");
    }

    pub fn transpile_file(&self, analyzer: &mut FileSemanticAnalyzer, writer: &mut Writer) {
        let file = analyzer.query_file();
        for (name, types) in &analyzer.sum_types {
            self.transpile_sum_type_def(name, types, writer);
            writer.new_line();
            writer.new_line();
        }

        for (_, struct_def) in &file.structs {
            self.transpile_struct(struct_def, writer);
            writer.new_line();
            writer.new_line();
        }

        for (_, function) in &file.functions {
            self.transpile_function(analyzer, function, writer);
            writer.new_line();
            writer.new_line();
        }
    }
}

pub fn transpile(analyzer: &mut FileSemanticAnalyzer, outfile: &PathBuf) -> Result<(), io::Error> {
    let mut outfile = std::fs::File::create(outfile)?;

    let mut buffer = "".to_string();
    let mut writer = Writer::new(&mut buffer);
    let transpiler = RustTranspiler {
        buildins: Buildins::new(),
    };
    transpiler.transpile_file(analyzer, &mut writer);

    outfile.write(buffer.as_bytes())?;
    outfile.flush()?;
    Ok(())
}

pub fn transpile_project(project_dir: &Path) -> Result<(), anyhow::Error> {
    let main_file_path = project_dir.join("main.cz");
    let mut main_file = std::fs::File::open(&main_file_path)?;
    let mut buffer = Vec::new();
    main_file.read_to_end(&mut buffer)?;

    let source_code = String::from_utf8(buffer)?;
    let file_path = main_file_path.to_string_lossy();
    let mut parse_errors = Vec::new();
    let file = FileContext::parse(file_path.to_string(), source_code, &mut parse_errors);
    for error in &parse_errors {
        print_err(&error, &file.source);
    }
    if !parse_errors.is_empty() {
        return Err(anyhow::Error::msg(format!(
            "{} compile error(s)",
            parse_errors.len()
        )));
    }

    let mut analyzer = FileSemanticAnalyzer::new(file.clone());
    analyzer.analyze();
    if !analyzer.errors.is_empty() {
        return Err(anyhow::Error::msg(analyzer.errors[0].msg.clone()));
    }

    let build_dir = project_dir.join(".build");
    let src_rust = build_dir.join("src");
    create_dir_all(&src_rust)?;
    let main_rust = src_rust.join("main.rs");

    transpile(&mut analyzer, &main_rust)?;

    // write Cargo.toml
    let mut cargo_file = std::fs::File::create(&build_dir.join("Cargo.toml"))?;
    let cargo_content = r#"[package]
name = "app"
version = "0.1.0"
edition = "2021"

[workspace]
"#;
    cargo_file.write_all(&cargo_content.as_bytes())?;
    Ok(())
}
