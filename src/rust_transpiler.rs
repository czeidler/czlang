use std::fs::{create_dir_all, File};
use std::io::{self, Read, Write};
use std::path::{Path, PathBuf};

use crate::ast::{
    print_err, ASTParser, Block, Expression, Function, FunctionCall, IfAlternative, IfStatement,
    Package, Parameter, Statement, StringTemplatePart, Type, VarDeclaration,
};
use crate::buildin::Buildins;
use crate::tree_sitter::parse;

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

fn transpile_type(t: &Type, writer: &mut Writer) {
    let text = match t {
        Type::String => "String",
        Type::Bool => "bool",
        Type::I32 => "i32",
        Type::U32 => "u32",
        Type::Identifier(identifier) => identifier.as_str(),
        Type::Str => "&str",
    };
    writer.write(text);
}

fn transpile_parameter(parameter: &Parameter, writer: &mut Writer) {
    writer.write(&parameter.name);
    writer.write(": ");
    transpile_type(&parameter._type, writer);
}

fn transpile_parameters(parameters: &Vec<Parameter>, writer: &mut Writer) {
    writer.write("(");
    let mut iter = parameters.iter().peekable();
    while let Some(parameter) = iter.next() {
        transpile_parameter(parameter, writer);
        if iter.peek().is_some() {
            writer.write(", ");
        }
    }
    writer.write(")");
}

fn transpile_expression(expression: &Expression) -> String {
    let mut out = "".to_string();
    match expression {
        Expression::String(parts) => {
            let mut fmt_string = "".to_string();
            let mut fmt_params = Vec::new();
            for part in parts {
                match part {
                    StringTemplatePart::Expression(expression) => {
                        fmt_params.push(transpile_expression(expression));
                        fmt_string += "{}";
                    }
                    StringTemplatePart::String(string) => fmt_string += string,
                }
            }
            if fmt_params.is_empty() {
                out += "\"";
                out += &fmt_string;
                out += "\"";
            } else {
                out += "format!(\"";
                out += &fmt_string;
                out += "\", ";
                out += &fmt_params.join(", ");
                out += ")"
            }
        }
        Expression::Identifier(identifier) => out += &identifier,
        Expression::Null => out += "null",
        Expression::Bool(b) => out += &format!("{}", b),
    }
    out
}

fn transpile_buildin_function_call(
    call: &FunctionCall,
    writer: &mut Writer,
    buildins: &Buildins,
) -> bool {
    let buildin = match buildins.functions.get(&call.name) {
        Some(buildin) => buildin,
        None => return false,
    };

    match buildin.name.as_str() {
        "println" => {
            if let Some(arg0) = call.arguments.get(0) {
                match arg0 {
                    Expression::String(_) => {
                        writer.write("println!(");
                        writer.write(&transpile_expression(arg0));
                        writer.write(");");
                        return true;
                    }
                    _ => {}
                }
            }
            writer.write("println!(\"{}\", ");
            let args: Vec<String> = call
                .arguments
                .iter()
                .map(|arg| transpile_expression(arg))
                .collect();
            writer.write(&args.join(", "));
            writer.write(");");
            return true;
        }
        _ => {}
    }
    return false;
}

fn transpile_function_call(call: &FunctionCall, writer: &mut Writer, buildins: &Buildins) {
    if transpile_buildin_function_call(call, writer, buildins) {
        return;
    }

    writer.write(&call.name);
    writer.write("(");
    let args: Vec<String> = call
        .arguments
        .iter()
        .map(|arg| transpile_expression(arg))
        .collect();
    writer.write(&args.join(", "));
    writer.write(");");
}

fn transpile_var_declaration(var_declaration: &VarDeclaration, writer: &mut Writer) {
    writer.write("let ");
    if var_declaration.is_mutable {
        writer.write("mut ");
    }
    writer.write(&var_declaration.name);
    match &var_declaration.var_type {
        Some(t) => {
            writer.write(": ");
            transpile_type(&t, writer);
        }
        None => {}
    }
    writer.write(" = ");
    writer.write(&transpile_expression(&var_declaration.value));
    writer.write(";");
}

fn transpile_return_statement(expression: &Option<Expression>, writer: &mut Writer) {
    writer.write("return");
    if let Some(expression) = expression {
        writer.write(" ");
        writer.write(&transpile_expression(expression));
    }
    writer.write(";");
}

fn transpile_if_statement(if_statement: &IfStatement, writer: &mut Writer, buildins: &Buildins) {
    writer.write("if ");
    writer.write(&transpile_expression(&if_statement.condition));
    writer.write(" {");
    writer.new_line();
    writer.indented(|writer| {
        transpile_block(&if_statement.consequence, writer, buildins);
    });
    writer.write("}");
    if let Some(alternative) = &if_statement.alternative {
        match alternative {
            IfAlternative::Else(else_block) => {
                writer.write(" else {");
                writer.new_line();
                writer.indented(|writer| {
                    transpile_block(else_block, writer, buildins);
                });
                writer.write("}");
            }
            IfAlternative::If(if_statement) => {
                writer.write(" else ");
                transpile_if_statement(if_statement, writer, buildins);
            }
        }
    }
}

fn transpile_block(block: &Block, writer: &mut Writer, buildins: &Buildins) {
    for statement in &block.statements {
        match statement {
            Statement::FunctionCall(call) => {
                transpile_function_call(call, writer, buildins);
                writer.new_line();
            }
            Statement::VarDeclaration(var) => {
                transpile_var_declaration(var, writer);
                writer.new_line();
            }
            Statement::Return(expression) => {
                transpile_return_statement(expression, writer);
                writer.new_line();
            }
            Statement::IfStatement(if_statement) => {
                transpile_if_statement(if_statement, writer, buildins);
                writer.new_line();
            }
        }
    }
}

fn transpile_function(function: &Function, writer: &mut Writer, buildins: &Buildins) {
    writer.write(&format!("fn {}", function.name));
    transpile_parameters(&function.parameters, writer);
    writer.write(" {");
    writer.new_line();
    writer.indented(|writer| {
        transpile_block(&function.body, writer, buildins);
    });
    writer.write("}");
}

pub fn transpile(package: &Package, outfile: &PathBuf) -> Result<(), io::Error> {
    let mut file = File::create(outfile)?;

    let buildins = Buildins::new();
    let mut buffer = "".to_string();
    let mut writer = Writer::new(&mut buffer);
    for function in &package.functions {
        transpile_function(function, &mut writer, &buildins);
        writer.new_line();
        writer.new_line();
    }
    file.write(buffer.as_bytes())?;
    file.flush()?;
    Ok(())
}

pub fn transpile_project(project_dir: &Path) -> Result<(), anyhow::Error> {
    let main_file_path = project_dir.join("main.cz");
    let mut main_file = File::open(&main_file_path)?;
    let mut buffer = Vec::new();
    main_file.read_to_end(&mut buffer)?;

    let build_dir = project_dir.join(".build");
    let src_rust = build_dir.join("src");
    create_dir_all(&src_rust)?;
    let main_rust = src_rust.join("main.rs");

    let source_code = String::from_utf8(buffer)?;
    let tree = parse(&source_code);
    let root_node = tree.root_node();

    let file_path = main_rust.to_string_lossy();
    let parser = ASTParser::new(&file_path, &source_code);
    let package = parser.parse_file(root_node);
    for error in &package.errors {
        print_err(&error, &source_code);
    }
    if !package.errors.is_empty() {
        return Err(anyhow::Error::msg(format!(
            "{} compile error(s)",
            package.errors.len()
        )));
    }

    transpile(&package, &main_rust)?;

    // write Cargo.toml
    let mut cargo_file = File::create(&build_dir.join("Cargo.toml"))?;
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
    use crate::test_utils::validate_project;

    #[test]
    fn if_else_statement() {
        validate_project(
            "if_else_statement",
            r#"
fun main() bool {
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
}
