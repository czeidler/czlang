use std::fs::create_dir_all;
use std::io::{self, Read, Write};
use std::path::{Path, PathBuf};

use crate::ast::{
    print_err, Array, ArrayExpression, BinaryOperator, Block, Expression, ExpressionType, Field,
    File, FileContext, Function, FunctionCall, IfAlternative, IfStatement, Parameter, RefType,
    Slice, SliceExpression, Statement, StringTemplatePart, Struct, Type, UnaryOperator,
    VarDeclaration,
};
use crate::buildin::Buildins;
use crate::tree_sitter::parse;
use crate::types::{Ptr, PtrMut};
use crate::validation::{sum_type_name, validate, TypeNarrowing};

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
            // TODO avoid clone() and sort earlier?
            let mut sorted_type = types.clone();
            sorted_type.sort();
            let name = sum_type_name(&sorted_type);
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

    fn transpile_sum_type_def(&self, name: &str, types: &Vec<RefType>, writer: &mut Writer) {
        writer.write("enum ");
        writer.write(name);
        writer.write(" {");
        writer.new_line();
        writer.indented(|writer| {
            for t in types {
                match &t.r#type {
                    Type::Null => writer.write("Null"),
                    Type::Str => todo!(),
                    Type::String => writer.write("String(String)"),
                    Type::Bool => writer.write("Bool(bool)"),
                    Type::U8 => writer.write("U8(u8)"),
                    Type::I8 => writer.write("I8(i8)"),
                    Type::U32 => writer.write("U32(u32)"),
                    Type::I32 => writer.write("I32(i32)"),
                    Type::Identifier(identifier) => writer.write(&identifier),
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
        expression: &Expression,
        target: Option<&Vec<RefType>>,
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
                            self.transpile_expression(expression, target, fun, &mut fmt_writer);

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
                // TODO sort earlier
                let mut target = target.map(|t| t.clone()).unwrap_or(vec![]);
                target.sort();

                if target.len() == 1 {
                    // the target is a simple type, i.e. we can directly assign the number
                    writer.write(&format!("{}", number));
                } else {
                    let resolved_type = expression.resolved_types.read().unwrap();
                    let resolved_type = resolved_type.clone().unwrap_or(vec![]);
                    if resolved_type.len() == 1 {
                        writer.write(&sum_type_name(&target));
                        writer.write("::");
                        // TODO refactor out:
                        let t = match resolved_type[0].r#type {
                            Type::U32 => "U32",
                            Type::I32 => "I32",
                            _ => panic!("{}", resolved_type[0]),
                        };
                        writer.write(&format!("{}", t));
                        writer.write("(");
                        writer.write(&format!("{}", number));
                        writer.write(")");
                    } else {
                        // just an int literal
                        writer.write(&format!("{}", number));
                    }
                }
            }
            ExpressionType::Null => {
                // TODO sort earlier
                let mut target = target.unwrap().clone();
                target.sort();
                writer.write(&sum_type_name(&target));
                writer.write("::Null");
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
                self.transpile_expression(&expr.operand, target, fun, writer);
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
                self.transpile_expression(&expr.left, target, fun, writer);
                writer.write(" ");
                writer.write(op);
                writer.write(" ");
                self.transpile_expression(&expr.right, target, fun, writer);
            }
            ExpressionType::ParenthesizedExpression(expr) => {
                writer.write("(");
                self.transpile_expression(&expr.expression, target, fun, writer);
                writer.write(")");
            }
            ExpressionType::ArrayExpression(array) => {
                self.transpile_array_expr(array, target, fun, writer)
            }
            ExpressionType::SliceExpression(slice) => {
                self.transpile_slice_expr(slice, target, fun, writer)
            }
            ExpressionType::FunctionCall(call) => {
                self.transpile_function_call(call, fun, writer);
            }
        };
    }

    fn transpile_array_expr(
        &self,
        array: &ArrayExpression,
        target: Option<&Vec<RefType>>,
        fun: &Ptr<Function>,
        writer: &mut Writer,
    ) {
        writer.write("[");
        let mut iter = array.expressions.iter().peekable();
        while let Some(expr) = iter.next() {
            self.transpile_expression(expr, target, fun, writer);
            if iter.peek().is_some() {
                writer.write(", ");
            }
        }
        writer.write("]");
    }

    fn transpile_slice_expr(
        &self,
        slice: &SliceExpression,
        target: Option<&Vec<RefType>>,
        fun: &Ptr<Function>,
        writer: &mut Writer,
    ) {
        self.transpile_expression(&slice.operand, target, fun, writer);
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
                            self.transpile_expression(arg0, None, fun, writer);
                            writer.write(")");
                            return true;
                        }
                        _ => {}
                    }
                }
                writer.write("println!(\"{}\", ");
                let mut iter = call.arguments.iter().peekable();
                while let Some(expr) = iter.next() {
                    self.transpile_expression(expr, None, fun, writer);
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

    fn transpile_function_call(
        &self,
        call: &FunctionCall,
        fun: &Ptr<Function>,
        writer: &mut Writer,
    ) {
        if self.transpile_buildin_function_call(call, fun, writer) {
            return;
        }

        writer.write(&call.name);
        writer.write("(");

        // TODO make this a query method:
        let file = fun.file();
        let file = file.read().unwrap();
        let function = file.functions.get(&call.name).unwrap();

        let mut iter = call.arguments.iter().enumerate().peekable();
        while let Some((i, expr)) = iter.next() {
            let parameter = function.parameters.get(i).unwrap();
            self.transpile_expression(expr, Some(&parameter.types), fun, writer);
            if iter.peek().is_some() {
                writer.write(", ");
            }
        }

        writer.write(")");
    }

    fn transpile_var_declaration(
        &self,
        var_declaration: &VarDeclaration,
        fun: &Ptr<Function>,
        writer: &mut Writer,
    ) {
        writer.write("let ");
        if var_declaration.is_mutable && !var_declaration.is_reference {
            writer.write("mut ");
        }
        writer.write(&var_declaration.name);
        match &var_declaration.types {
            Some(t) => {
                writer.write(": ");
                if var_declaration.is_reference && var_declaration.is_mutable {
                    writer.write("&mut ");
                } else if var_declaration.is_reference {
                    writer.write("& ");
                }
                self.transpile_types(t, writer);
            }
            None => {}
        }
        writer.write(" = ");
        self.transpile_expression(
            &var_declaration.value,
            var_declaration.types.as_ref(),
            fun,
            writer,
        );
        writer.write(";");
    }

    fn transpile_return_statement(
        &self,
        expression: &Option<Expression>,
        fun: &Ptr<Function>,
        writer: &mut Writer,
    ) {
        writer.write("return");
        if let Some(expression) = expression {
            writer.write(" ");
            self.transpile_expression(expression, fun.return_types.as_ref(), fun, writer);
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
        let condition_type = sum_type_name(&type_narrowing.original_types);
        let target_type_name = sum_type_name(&type_narrowing.types);

        writer.write(&format!(
            "let Some({}) = match {} {{",
            type_narrowing.identifier, type_narrowing.identifier
        ));
        writer.indented(|writer| {
            if type_narrowing.reduction {
                // true if in the form (typeof X != bool && typeof X != i32)
            } else {
                // false if in the form (typeof X == bool || typeof X == i32)
                for t in &type_narrowing.types {
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
        if_statement: &IfStatement,
        fun: &Ptr<Function>,
        writer: &mut Writer,
    ) {
        let target_types = vec![RefType {
            is_reference: false,
            r#type: Type::Bool,
        }];
        writer.write("if ");
        if let Some(type_narrowing) = &if_statement.type_narrowing {
            self.transpile_if_type_narrowing(type_narrowing, writer);
        } else {
            self.transpile_expression(&if_statement.condition, Some(&target_types), fun, writer);
        }
        writer.write(" {");
        writer.new_line();
        writer.indented(|writer| {
            self.transpile_block(&if_statement.consequence, fun, writer);
        });
        writer.write("}");
        if let Some(alternative) = &if_statement.alternative {
            match alternative {
                IfAlternative::Else(else_block) => {
                    writer.write(" else {");
                    writer.new_line();
                    writer.indented(|writer| {
                        self.transpile_block(else_block, fun, writer);
                    });
                    writer.write("}");
                }
                IfAlternative::If(if_statement) => {
                    writer.write(" else ");
                    let statement = if_statement.read().unwrap();
                    self.transpile_if_statement(&statement, fun, writer);
                }
            }
        }
    }

    fn transpile_block(&self, block: &PtrMut<Block>, fun: &Ptr<Function>, writer: &mut Writer) {
        for statement in &block.read().unwrap().statements {
            match statement {
                Statement::Expression(expr) => {
                    self.transpile_expression(expr, None, fun, writer);
                    writer.write(";");
                    writer.new_line();
                }
                Statement::VarDeclaration(var) => {
                    self.transpile_var_declaration(&var, fun, writer);
                    writer.new_line();
                }
                Statement::Return(expression) => {
                    self.transpile_return_statement(expression, fun, writer);
                    writer.new_line();
                }
                Statement::IfStatement(if_statement) => {
                    let statement = if_statement.read().unwrap();
                    self.transpile_if_statement(&statement, fun, writer);
                    writer.new_line();
                }
            }
        }
    }

    fn transpile_function(&self, fun: &Ptr<Function>, writer: &mut Writer) {
        writer.write(&format!("fn {}", fun.name));
        self.transpile_parameters(&fun.parameters, writer);
        if let Some(return_type) = &fun.return_types {
            writer.write(" -> ");
            self.transpile_types(return_type, writer);
        }
        writer.write(" {");
        writer.new_line();
        writer.indented(|writer| {
            self.transpile_block(&fun.body, fun, writer);
        });
        writer.write("}");
    }

    fn transpile_struct_field(&self, field: &Field, writer: &mut Writer) {
        writer.write(&field.name);
        writer.write(": ");
        if field.is_reference {
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
        if struct_def.fields.iter().any(|it| it.is_reference) {
            writer.write("<'a>");
        }
        writer.write(" {");
        writer.new_line();
        writer.indented(|writer| {
            self.transpile_struct_fields(&struct_def.fields, writer);
        });
        writer.write("}");
    }

    pub fn transpile_file(&self, file: &PtrMut<File>, writer: &mut Writer) {
        let file = file.read().unwrap();
        for (name, types) in &file.sum_types {
            self.transpile_sum_type_def(name, types, writer);
            writer.new_line();
            writer.new_line();
        }

        for (_, struct_def) in &file.struct_defs {
            self.transpile_struct(struct_def, writer);
            writer.new_line();
            writer.new_line();
        }

        for (_, function) in &file.functions {
            self.transpile_function(function, writer);
            writer.new_line();
            writer.new_line();
        }
    }
}

pub fn transpile(file: &PtrMut<File>, outfile: &PathBuf) -> Result<(), io::Error> {
    let mut outfile = std::fs::File::create(outfile)?;

    let mut buffer = "".to_string();
    let mut writer = Writer::new(&mut buffer);
    let transpiler = RustTranspiler {
        buildins: Buildins::new(),
    };
    transpiler.transpile_file(file, &mut writer);

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
    let tree = parse(&source_code, None);
    let root_node = tree.root_node();

    let file_path = main_file_path.to_string_lossy();
    let mut file_context = FileContext::new(root_node.clone(), file_path.to_string(), &source_code);
    let file = file_context.parse_file();
    for error in &file_context.errors {
        print_err(&error, &file_context.source);
    }
    if !file_context.errors.is_empty() {
        return Err(anyhow::Error::msg(format!(
            "{} compile error(s)",
            file_context.errors.len()
        )));
    }

    validate(&file, &mut file_context.errors);
    if !file_context.errors.is_empty() {
        return Err(anyhow::Error::msg(file_context.errors[0].msg.clone()));
    }

    let build_dir = project_dir.join(".build");
    let src_rust = build_dir.join("src");
    create_dir_all(&src_rust)?;
    let main_rust = src_rust.join("main.rs");

    transpile(&file, &main_rust)?;

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

#[cfg(test)]
mod rust_transpiler_tests {
    use crate::test_utils::transpile_and_validate_project;

    #[test]
    fn function_call() {
        transpile_and_validate_project(
            "test_projects/function_call",
            r#"
fun test() i32 {
    return 10
}

fun main() {
    var result = test()
    println("Result: {result}")
}
        "#,
        )
    }

    #[test]
    fn if_else_statement() {
        transpile_and_validate_project(
            "test_projects/transpile_if_else_statement",
            r#"
fun main() {
    if true {
        println("if")
    }

    if true {
        println("if")
    } else {
        println("else")
    }

    if true {
        println("if")
    } else if true {
        println("if else")
    } else {
        println("else")
    }
}
        "#,
        )
    }

    #[test]
    fn array_slice() {
        transpile_and_validate_project(
            "test_projects/transpile_array_slice",
            r#"
fun main() {
    var array i32[5] = [1, 2, 3, 4, 5]
    var array2 = [1, 2, 3]
    var slice = &array[:]
    var slice2 = &array2[1:1]
}
        "#,
        )
    }

    #[test]
    fn var_declaration() {
        transpile_and_validate_project(
            "test_projects/transpile_var_declaration",
            r#"
fun main() {
    var value1 i32 = 12
    var value2 mut i32 = 12
    var value3 &i32 = &value1
    var value4 mut &i32 = &value1
    var value5 i32 | null = null
    var value6 i32 = 12
}
        "#,
        )
    }
}
