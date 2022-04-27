use std::fs::create_dir_all;
use std::io::{self, Read, Write};
use std::path::{Path, PathBuf};
use std::rc::Rc;

use tree_sitter::Tree;

use crate::ast::{
    print_err, Array, ArrayExpression, BinaryOperator, Block, Expression, Field, File, FileContext,
    Function, FunctionCall, IfAlternative, IfStatement, Parameter, Slice, SliceExpression,
    Statement, StringTemplatePart, Struct, Type, UnaryOperator, VarDeclaration,
};
use crate::buildin::Buildins;
use crate::tree_sitter::parse;
use crate::validation::validate;

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
    fn transpile_optional_type(&self, t: &Type, writer: &mut Writer) {
        writer.write("Option<");
        self.transpile_type(t, writer);
        writer.write(">");
    }

    fn transpile_type(&self, t: &Type, writer: &mut Writer) {
        let text = match t {
            Type::String => "String",
            Type::Bool => "bool",
            Type::I8 => "i8",
            Type::U8 => "u8",
            Type::I32 => "i32",
            Type::U32 => "u32",
            Type::Identifier(identifier) => identifier.as_str(),
            Type::Str => "&str",
            Type::Array(array) => return self.transpile_array(array, writer),
            Type::Slice(slice) => return self.transpile_slice(slice, writer),
            Type::Null => "None",
        };
        writer.write(text);
    }

    fn transpile_array(&self, array: &Array, writer: &mut Writer) {
        writer.write("[");
        self.transpile_type(&array.r#type, writer);
        writer.write("; ");
        writer.write(&format!("{}", array.length));
        writer.write("]");
    }

    fn transpile_slice(&self, slice: &Slice, writer: &mut Writer) {
        writer.write("&[");
        self.transpile_type(&slice.r#type, writer);
        writer.write("]");
    }

    fn transpile_parameter(&self, parameter: &Parameter, writer: &mut Writer) {
        writer.write(&parameter.name);
        writer.write(": ");
        self.transpile_type(&parameter._type, writer);
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

    fn transpile_expression(&self, expression: &Expression, writer: &mut Writer) {
        match expression {
            Expression::String(parts) => {
                let mut fmt_string = "".to_string();
                let mut fmt_params = Vec::new();
                for part in parts {
                    match part {
                        StringTemplatePart::Expression(expression) => {
                            let mut buffer = "".to_string();
                            let mut fmt_writer = Writer::new(&mut buffer);
                            self.transpile_expression(expression, &mut fmt_writer);

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
            Expression::Identifier(identifier) => {
                writer.write(&identifier);
            }
            Expression::IntLiteral(number) => {
                writer.write(&format!("{}", number));
            }
            Expression::Null => {
                writer.write("null");
            }
            Expression::Bool(b) => {
                writer.write(&format!("{}", b));
            }
            Expression::UnaryExpression(expr) => {
                let op = match expr.operator {
                    UnaryOperator::Minus => "-",
                    UnaryOperator::Not => "!",
                    UnaryOperator::Reference => "&",
                };
                writer.write(op);
                self.transpile_expression(&expr.operand, writer);
            }
            Expression::BinaryExpression(expr) => {
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
                self.transpile_expression(&expr.left, writer);
                writer.write(" ");
                writer.write(op);
                writer.write(" ");
                self.transpile_expression(&expr.right, writer);
            }
            Expression::ParenthesizedExpression(expr) => {
                writer.write("(");
                self.transpile_expression(&expr.expression, writer);
                writer.write(")");
            }
            Expression::ArrayExpression(array) => self.transpile_array_expr(array, writer),
            Expression::SliceExpression(slice) => self.transpile_slice_expr(slice, writer),
            Expression::FunctionCall(call) => {
                self.transpile_function_call(call, writer);
            }
        };
    }

    fn transpile_array_expr(&self, array: &ArrayExpression, writer: &mut Writer) {
        writer.write("[");
        let mut iter = array.expressions.iter().peekable();
        while let Some(expr) = iter.next() {
            self.transpile_expression(expr, writer);
            if iter.peek().is_some() {
                writer.write(", ");
            }
        }
        writer.write("]");
    }

    fn transpile_slice_expr(&self, slice: &SliceExpression, writer: &mut Writer) {
        self.transpile_expression(&slice.operand, writer);
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

    fn transpile_buildin_function_call(&self, call: &FunctionCall, writer: &mut Writer) -> bool {
        let buildin = match self.buildins.functions.get(&call.name) {
            Some(buildin) => buildin,
            None => return false,
        };

        match buildin.name.as_str() {
            "println" => {
                if let Some(arg0) = call.arguments.get(0) {
                    match arg0 {
                        Expression::String(_) => {
                            writer.write("println!(");
                            self.transpile_expression(arg0, writer);
                            writer.write(");");
                            return true;
                        }
                        _ => {}
                    }
                }
                writer.write("println!(\"{}\", ");
                let mut iter = call.arguments.iter().peekable();
                while let Some(expr) = iter.next() {
                    self.transpile_expression(expr, writer);
                    if iter.peek().is_some() {
                        writer.write(", ");
                    }
                }
                writer.write(");");
                return true;
            }
            _ => {}
        }
        return false;
    }

    fn transpile_function_call(&self, call: &FunctionCall, writer: &mut Writer) {
        if self.transpile_buildin_function_call(call, writer) {
            return;
        }

        writer.write(&call.name);
        writer.write("(");

        let mut iter = call.arguments.iter().peekable();
        while let Some(expr) = iter.next() {
            self.transpile_expression(expr, writer);
            if iter.peek().is_some() {
                writer.write(", ");
            }
        }

        writer.write(")");
    }

    fn transpile_var_declaration(&self, var_declaration: &VarDeclaration, writer: &mut Writer) {
        writer.write("let ");
        if var_declaration.is_mutable {
            writer.write("mut ");
        }
        writer.write(&var_declaration.name);
        match &var_declaration.var_type {
            Some(t) => {
                writer.write(": ");
                self.transpile_type(&t, writer);
            }
            None => {}
        }
        writer.write(" = ");
        self.transpile_expression(&var_declaration.value, writer);
        writer.write(";");
    }

    fn transpile_return_statement(&self, expression: &Option<Expression>, writer: &mut Writer) {
        writer.write("return");
        if let Some(expression) = expression {
            writer.write(" ");
            self.transpile_expression(expression, writer);
        }
        writer.write(";");
    }

    fn transpile_if_statement(&self, if_statement: &IfStatement, writer: &mut Writer) {
        writer.write("if ");
        self.transpile_expression(&if_statement.condition, writer);
        writer.write(" {");
        writer.new_line();
        writer.indented(|writer| {
            self.transpile_block(&if_statement.consequence, writer);
        });
        writer.write("}");
        if let Some(alternative) = &if_statement.alternative {
            match alternative {
                IfAlternative::Else(else_block) => {
                    writer.write(" else {");
                    writer.new_line();
                    writer.indented(|writer| {
                        self.transpile_block(else_block, writer);
                    });
                    writer.write("}");
                }
                IfAlternative::If(if_statement) => {
                    writer.write(" else ");
                    self.transpile_if_statement(if_statement, writer);
                }
            }
        }
    }

    fn transpile_block(&self, block: &Block, writer: &mut Writer) {
        for statement in &block.statements {
            match statement {
                Statement::Expression(expr) => {
                    self.transpile_expression(expr, writer);
                    writer.write(";");
                    writer.new_line();
                }
                Statement::VarDeclaration(var) => {
                    self.transpile_var_declaration(var, writer);
                    writer.new_line();
                }
                Statement::Return(expression) => {
                    self.transpile_return_statement(expression, writer);
                    writer.new_line();
                }
                Statement::IfStatement(if_statement) => {
                    self.transpile_if_statement(if_statement, writer);
                    writer.new_line();
                }
            }
        }
    }

    fn transpile_function(&self, function: &Function, writer: &mut Writer) {
        writer.write(&format!("fn {}", function.name));
        self.transpile_parameters(&function.parameters, writer);
        if let Some(return_type) = &function.return_type {
            writer.write(" -> ");
            self.transpile_type(return_type, writer);
        }
        writer.write(" {");
        writer.new_line();
        writer.indented(|writer| {
            self.transpile_block(&function.body, writer);
        });
        writer.write("}");
    }

    fn transpile_struct_field(&self, field: &Field, writer: &mut Writer) {
        writer.write(&field.name);
        writer.write(": ");
        if field.is_reference {
            writer.write("&'a ");
        }
        if field.is_nullable {
            self.transpile_optional_type(&field.r#type, writer);
        } else {
            self.transpile_type(&field.r#type, writer);
        }
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

    pub fn transpile_file(&self, file: &File, writer: &mut Writer) {
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

pub fn transpile(file: &File, outfile: &PathBuf) -> Result<(), io::Error> {
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
    let tree = parse(&source_code);
    let root_node = tree.root_node();

    let file_path = main_file_path.to_string_lossy();
    let mut file_context = FileContext::new(root_node.clone(), file_path.to_string(), source_code);
    let file = Rc::new(file_context.parse_file());
    for error in &file_context.errors {
        print_err(&error, &file_context.source);
    }
    if !file_context.errors.is_empty() {
        return Err(anyhow::Error::msg(format!(
            "{} compile error(s)",
            file_context.errors.len()
        )));
    }

    let _ = match validate(&file) {
        Ok(result) => result,
        Err(err) => return Err(anyhow::Error::msg(err)),
    };

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
}
