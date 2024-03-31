use std::fs::create_dir_all;
use std::io::{self, Write};
use std::path::PathBuf;

use crate::ast::{
    root_package_path, ArrayExpression, BinaryOperator, Block, BlockTrait, Expression,
    ExpressionType, Field, Function, FunctionCall, FunctionSignature, FunctionTrait, IfAlternative,
    IfExpression, Loop, Parameter, PipeExpression, Receiver, ReturnErrorPipeExpression,
    SelectorExpression, SelectorFieldType, SliceExpression, Statement, StringTemplatePart, Struct,
    StructFieldInitialization, StructInitialization, TypeParam, UnaryOperator, VarDeclaration,
};
use crate::buildin::Buildins;
use crate::project::Project;
use crate::semantics::ClosureContext;
use crate::semantics::{
    types::{SArray, SSlice, SumType, Type},
    PackageSemanticAnalyzer, TypeNarrowing, TypeQueryContext,
};

use crate::types::Ptr;
use crate::vfs::DiskFS;

struct Writer<'a> {
    pub indentation: u16,
    /// just about to start a new line?
    starting_new_line: bool,
    buffer: &'a mut String,
}

impl<'a> Writer<'a> {
    fn new(buffer: &'a mut String, indentation: u16) -> Self {
        Writer {
            indentation,
            starting_new_line: false,
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

fn type_to_enum_variant(t: &Type) -> String {
    match t {
        Type::Null => "Null".to_string(),
        Type::Str => todo!(),
        Type::String => "String".to_string(),
        Type::Bool => "Bool".to_string(),
        Type::U8 => "U8".to_string(),
        Type::I8 => "I8".to_string(),
        Type::U32 => "U32".to_string(),
        Type::I32 => "I32".to_string(),
        Type::Array(_) => todo!(),
        Type::Slice(_) => todo!(),
        Type::Either(_, _) => panic!("Validation should have failed"),
        Type::Unresolved(_) => panic!("Validation should have failed"),
        Type::RefType(ref_type) => {
            if ref_type.is_mut {
                format!("RefM{}", type_to_enum_variant(&ref_type.r#type))
            } else {
                format!("Ref{}", type_to_enum_variant(&ref_type.r#type))
            }
        }
        Type::Struct(str) => {
            // TODO include type args
            str.name.clone()
        }
        Type::StructTypeArgument(_) => todo!(),
        Type::Closure(closure) => {
            let mut name = "C".to_string();
            if let Some(ctx) = &closure.context {
                match ctx {
                    ClosureContext::Owned => name += "o",
                    ClosureContext::MutRef => name += "m",
                    ClosureContext::Ref => name += "r",
                    ClosureContext::Type(t) => {
                        name += "t";
                        name += &SumType::from_type(t.clone()).sum_type_name();
                    }
                }
            };
            name += "p";
            for (_, t) in &closure.parameters {
                name += &t.sum_type_name();
            }
            name += "p";
            if let Some(ret) = &closure.return_type {
                name += &ret.sum_type_name();
            };
            name
        }
        Type::Package(_) => todo!(),
        Type::Interface(interface) => {
            // TODO include type args
            interface.1.name.clone()
        }
    }
}

impl RustTranspiler {
    fn transpile_types(&self, types: &Vec<Type>, writer: &mut Writer) {
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

    fn transpile_type_arg(&self, type_arg: &TypeParam, writer: &mut Writer) {
        writer.write(&type_arg.identifier);
        if !type_arg.type_params.is_empty() {
            writer.write("<");
            for (i, arg) in type_arg.type_params.iter().enumerate() {
                if i != 0 {
                    writer.write(", ");
                }
                self.transpile_type_arg(arg, writer);
            }
            writer.write(">");
        }
    }

    fn transpile_type(&self, t: &Type, writer: &mut Writer) {
        let text = match &t {
            Type::Str => "str",
            Type::String => "String",
            Type::Bool => "bool",
            Type::I8 => "i8",
            Type::U8 => "u8",
            Type::I32 => "i32",
            Type::U32 => "u32",
            Type::Array(array) => return self.transpile_array(&array, writer),
            Type::Slice(slice) => return self.transpile_slice(&slice, writer),
            Type::Null => "()",
            Type::Either(value, err) => {
                writer.write("Result<");
                self.transpile_types(value.types(), writer);
                writer.write(", ");
                self.transpile_types(err.types(), writer);
                writer.write(">");
                return;
            }
            Type::RefType(ref_type) => {
                writer.write("&");
                if ref_type.is_mut {
                    writer.write("mut ");
                }
                self.transpile_type(&ref_type.r#type, writer);
                return;
            }
            Type::StructTypeArgument(type_arg) => {
                self.transpile_type_arg(type_arg, writer);
                return;
            }
            Type::Struct(str) => {
                writer.write(&str.name);
                return;
            }
            Type::Unresolved(_) => panic!(),
            Type::Closure(closure) => {
                if let Some(ctx) = &closure.context {
                    match ctx {
                        ClosureContext::Owned => writer.write("FnOnce("),
                        ClosureContext::MutRef => writer.write("FnMut("),
                        ClosureContext::Ref => writer.write("Fn("),
                        ClosureContext::Type(_) => todo!(),
                    };
                } else {
                    writer.write("fn (");
                }
                for (_, t) in &closure.parameters {
                    self.transpile_types(t.types(), writer);
                }
                writer.write(")");
                if let Some(ret) = &closure.return_type {
                    writer.write(" -> ");
                    self.transpile_types(ret.types(), writer);
                };
                return;
            }
            Type::Package(path) => {
                let name = path.last().unwrap();
                writer.write(&name);
                return;
            }
            Type::Interface(interface) => {
                writer.write(&interface.1.name);
                return;
            }
        };
        writer.write(text);
    }

    fn rust_type(t: &Type) -> String {
        let t = match t {
            Type::Null => "",
            Type::Str => todo!(),
            Type::String => "String",
            Type::Bool => "bool",
            Type::U8 => "u8",
            Type::I8 => "i8",
            Type::U32 => "u32",
            Type::I32 => "i32",
            Type::Array(_) => todo!("array"),
            Type::Slice(_) => todo!("slice"),
            Type::Either(_, _) => panic!("Validation should have failed"),
            Type::Unresolved(_) => panic!("Validation should have failed"),
            Type::RefType(ref_type) => {
                if ref_type.is_mut {
                    return format!("&'a mut {}", Self::rust_type(&ref_type.r#type));
                } else {
                    return format!("&'a {}", Self::rust_type(&ref_type.r#type));
                }
            }
            Type::Struct(st) => return st.name.clone(),
            Type::StructTypeArgument(_) => todo!(),
            Type::Closure(_) => todo!(),
            Type::Package(_) => todo!(),
            Type::Interface(interface) => return interface.1.name.clone(),
        };
        t.to_string()
    }

    fn transpile_sum_type_def(&self, name: &str, types: &SumType, writer: &mut Writer) {
        writer.write("enum ");
        writer.write(name);
        if types.has_reference() {
            writer.write("<'a>");
        }
        writer.write(" {");
        writer.new_line();
        writer.indented(|writer| {
            for t in types.types() {
                let variant = type_to_enum_variant(t);
                let rust_type = Self::rust_type(&t);
                if rust_type == "" {
                    writer.write(&variant);
                } else {
                    writer.write(&format!("{}({})", variant, rust_type));
                }

                writer.write(",");
                writer.new_line();
            }
        });
        writer.write("}");
    }

    fn transpile_array(&self, array: &SArray, writer: &mut Writer) {
        writer.write("[");
        self.transpile_types(&array.types, writer);
        writer.write("; ");
        writer.write(&format!("{}", array.length));
        writer.write("]");
    }

    fn transpile_slice(&self, slice: &SSlice, writer: &mut Writer) {
        writer.write("&[");
        self.transpile_types(&slice.types, writer);
        writer.write("]");
    }

    fn transpile_parameter(
        &self,
        analyzer: &mut PackageSemanticAnalyzer,
        fun: &Function,
        parameter: &Parameter,
        writer: &mut Writer,
    ) {
        let types = analyzer.query_types(&TypeQueryContext::from_fun(fun), &parameter.types);
        writer.write(&parameter.name);
        writer.write(": ");
        self.transpile_types(&types.types(), writer);
    }

    fn transpile_parameters(
        &self,
        analyzer: &mut PackageSemanticAnalyzer,
        fun: &Function,
        receiver: &Option<Receiver>,
        parameters: &Vec<Parameter>,
        writer: &mut Writer,
    ) {
        writer.write("(");
        if let Some(receiver) = &receiver {
            let t = &receiver.types[0];
            if t.is_reference {
                writer.write("&");
            }
            if t.is_mut {
                writer.write("mut ");
            }
            writer.write("self");
            if parameters.len() > 0 {
                writer.write(", ");
            }
        }
        let mut iter = parameters.iter().peekable();
        while let Some(parameter) = iter.next() {
            self.transpile_parameter(analyzer, fun, parameter, writer);
            if iter.peek().is_some() {
                writer.write(", ");
            }
        }
        writer.write(")");
    }

    fn transpile_expression(
        &self,
        analyzer: &mut PackageSemanticAnalyzer,
        expression: &Expression,
        block: &Block,
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
                            let mut fmt_writer = Writer::new(&mut buffer, writer.indentation);
                            self.transpile_expression(analyzer, expression, block, &mut fmt_writer);

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
                if identifier == "$" {
                    writer.write("___pipe_arg");
                } else {
                    writer.write(&identifier);
                }
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
                    UnaryOperator::MutReference => "&mut ",
                    UnaryOperator::TypeOf => "",
                };
                writer.write(op);
                self.transpile_expression(analyzer, &expr.operand, block, writer);
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
                self.transpile_expression(analyzer, &expr.left, block, writer);
                writer.write(" ");
                writer.write(op);
                writer.write(" ");
                self.transpile_expression(analyzer, &expr.right, block, writer);
            }
            ExpressionType::ParenthesizedExpression(expr) => {
                writer.write("(");
                self.transpile_expression(analyzer, &expr.expression, block, writer);
                writer.write(")");
            }
            ExpressionType::ArrayExpression(array) => {
                self.transpile_array_expr(analyzer, array, block, writer)
            }
            ExpressionType::SliceExpression(slice) => {
                self.transpile_slice_expr(analyzer, slice, block, writer)
            }
            ExpressionType::FunctionCall(call) => {
                self.transpile_function_call(analyzer, call, block, writer);
            }
            ExpressionType::StructInitialization(struct_init) => {
                self.transpile_struct_init(analyzer, struct_init, block, writer);
            }
            ExpressionType::SelectorExpression(selector) => {
                self.transpile_selector_expr(analyzer, expression, selector, block, writer);
            }
            ExpressionType::Block(child_block) => {
                writer.write("{");
                writer.new_line();
                writer.indented(|writer| {
                    self.transpile_block(analyzer, child_block, &None, writer);
                });
                writer.write("}");
            }
            ExpressionType::If(if_expression) => {
                let target = analyzer
                    .query_expression(block, expression)
                    .and_then(|s| s.resolved_types);
                self.transpile_if_expression(analyzer, if_expression, block, &target, writer)
            }
            ExpressionType::Pipe(pipe) => {
                self.transpile_pipe_expr(analyzer, expression, pipe, block, writer)
            }
            ExpressionType::ReturnErrorPipe(pipe) => {
                self.transpile_ret_err_pipe_expr(analyzer, pipe, block, writer)
            }
            ExpressionType::ErrorExpression(error) => {
                self.transpile_err_expr(analyzer, expression, error, block, writer)
            }
            ExpressionType::EitherCheck(_) => panic!("Should be handled in if expression"),
        };
    }

    fn transpile_err_expr(
        &self,
        analyzer: &mut PackageSemanticAnalyzer,
        expression: &Expression,
        error: &Expression,
        block: &Block,
        writer: &mut Writer,
    ) {
        let err_type = analyzer
            .query_expression(block, expression)
            .and_then(|s| s.resolved_types)
            .unwrap()
            .err()
            .unwrap();
        writer.write("Result::<(), ");
        self.transpile_types(err_type.types(), writer);
        writer.write(">::Err(");
        self.transpile_expression(analyzer, error, block, writer);
        writer.write(")");
    }

    fn transpile_pipe_expr(
        &self,
        analyzer: &mut PackageSemanticAnalyzer,
        expression: &Expression,
        pipe: &PipeExpression,
        block: &Block,
        writer: &mut Writer,
    ) {
        let pipe_type = analyzer
            .query_expression(block, expression)
            .unwrap()
            .types();
        let left_semantics = analyzer.query_expression(block, &pipe.left).unwrap();
        let left_types = left_semantics.types().unwrap();

        writer.write("match ");
        if left_types.err().is_none() {
            writer.write("Result::<");
            self.transpile_types(left_types.types(), writer);
            writer.write(", ()>::Ok(");
        }

        self.transpile_expression(analyzer, &pipe.left, block, writer);
        if left_types.err().is_none() {
            writer.write(")");
        }
        writer.write(" {");
        writer.new_line();
        writer.indented(|writer| {
            if !pipe.is_err_pipe {
                // |>
                writer.write("Ok(___pipe_arg) => ");
                self.transpile_expression_with_mapping(
                    analyzer,
                    &pipe.right,
                    &pipe_type,
                    block,
                    writer,
                );
                writer.write(",");
                writer.new_line();
                writer.write("Err(_) => panic!(\"Impossible\"),");
            } else {
                // |?>
                writer.write("Err(___pipe_arg) => ");
                self.transpile_expression_with_mapping(
                    analyzer,
                    &pipe.right,
                    &pipe_type,
                    block,
                    writer,
                );
                writer.write(",");
                writer.new_line();
                let (left_value, _) = left_types.as_either().unwrap();
                writer.write("Ok(___value) => ");
                self.transpile_type_mapping(
                    "___value",
                    &pipe_type.unwrap(),
                    &left_value,
                    &left_value,
                    writer,
                );
                writer.write(",");
            }
            writer.new_line();
        });
        writer.write("}");
    }

    fn transpile_ret_err_pipe_expr(
        &self,
        analyzer: &mut PackageSemanticAnalyzer,
        pipe: &ReturnErrorPipeExpression,
        block: &Block,
        writer: &mut Writer,
    ) {
        self.transpile_expression(analyzer, &pipe.left, block, writer);

        let expression_type = analyzer
            .query_expression(block, &pipe.left)
            .unwrap()
            .types()
            .unwrap()
            .types()[0]
            .clone();
        let expression_err = match expression_type {
            Type::Either(_, err) => err,
            _ => {
                panic!("Should be an either type")
            }
        };
        let return_type = block
            .fun()
            .signature
            .return_type
            .as_ref()
            .unwrap()
            .types
            .clone();
        let return_type = analyzer.query_types(&TypeQueryContext::from_block(block), &return_type);
        let return_err = match &return_type.types()[0] {
            Type::Either(_, err) => err.clone(),
            _ => {
                panic!("Should be an either type")
            }
        };
        if expression_err != return_err {
            writer.write(".map_err(|err| ");
            self.transpile_type_mapping(
                "err",
                &return_err,
                &expression_err,
                &expression_err,
                writer,
            );
            writer.write(")");
        }
        writer.write("?");
    }

    fn transpile_selector_expr(
        &self,
        analyzer: &mut PackageSemanticAnalyzer,
        expression: &Expression,
        selector: &SelectorExpression,
        block: &Block,
        writer: &mut Writer,
    ) {
        let semantics = analyzer.query_expression(block, expression).unwrap();
        let expr_err_sum_type = semantics.types().and_then(|types| types.err());

        let mut has_optional_chaining = false;
        self.transpile_expression(analyzer, &selector.root, block, writer);
        for field in &selector.fields {
            let semantics = analyzer.query_selector_field(block, field).unwrap();
            let field_err = semantics.field_types.err();

            has_optional_chaining = has_optional_chaining || field.optional_chaining;
            writer.write(".");
            if has_optional_chaining {
                if field_err.is_some() {
                    writer.write("and_then(|it| it.");
                } else {
                    writer.write("map(|it| it.");
                }
            }
            match &field.field {
                SelectorFieldType::Identifier(identifier) => {
                    writer.write(identifier);
                }
                SelectorFieldType::Call(call) => {
                    self.transpile_method_call(analyzer, call, block, writer);
                }
                SelectorFieldType::StructInit(struct_init) => {
                    self.transpile_struct_init(analyzer, struct_init, block, writer)
                }
            };

            if let (Some(field_err), Some(expr_target_err)) =
                (field_err, expr_err_sum_type.as_ref())
            {
                if &field_err != expr_target_err {
                    writer.write(".map_err(|err| ");
                    self.transpile_type_mapping(
                        "err",
                        expr_target_err,
                        &field_err,
                        &field_err,
                        writer,
                    );
                    writer.write(")");
                }
            }
            if has_optional_chaining {
                writer.write(")");
            }
        }
    }

    fn transpile_array_expr(
        &self,
        analyzer: &mut PackageSemanticAnalyzer,
        array: &ArrayExpression,
        block: &Block,
        writer: &mut Writer,
    ) {
        writer.write("[");
        let mut iter = array.expressions.iter().peekable();
        while let Some(expr) = iter.next() {
            self.transpile_expression(analyzer, expr, block, writer);
            if iter.peek().is_some() {
                writer.write(", ");
            }
        }
        writer.write("]");
    }

    fn transpile_slice_expr(
        &self,
        analyzer: &mut PackageSemanticAnalyzer,
        slice: &SliceExpression,
        block: &Block,
        writer: &mut Writer,
    ) {
        self.transpile_expression(analyzer, &slice.operand, block, writer);
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
        analyzer: &mut PackageSemanticAnalyzer,
        call: &FunctionCall,
        block: &Block,
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
                            self.transpile_expression(analyzer, arg0, block, writer);
                            writer.write(")");
                            return true;
                        }
                        _ => {}
                    }
                }
                writer.write("println!(\"{}\", ");
                let mut iter = call.arguments.iter().peekable();
                while let Some(expr) = iter.next() {
                    self.transpile_expression(analyzer, expr, block, writer);
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

    fn transpile_either_mapping(
        &self,
        expression: &str,
        target: &SumType,
        either: (SumType, SumType),
        narrowed_type: &SumType,
        writer: &mut Writer,
    ) {
        match target.as_either() {
            Some((value, err)) => {
                if value == either.0 && err == either.1 {
                    // nothing to map
                    writer.write(expression);
                    return;
                }
                writer.write("match ");
                writer.write(expression);
                writer.write(" {");
                writer.new_line();
                writer.indented(|writer| {
                    if either.0.len() == 0 {
                        writer.write("Ok(_) => panic!(\"Impossible\"),");
                    } else {
                        writer.write("Ok(___value) => Ok(");
                        self.transpile_type_mapping(
                            "___value", &value, &either.0, &either.0, writer,
                        );
                        writer.write("),");
                    }
                    writer.new_line();
                    if either.1.len() == 0 {
                        writer.write("Err(_) => panic!(\"Impossible\"),");
                    } else {
                        writer.write("Err(___error) => Err(");
                        self.transpile_type_mapping("___error", &err, &either.1, &either.1, writer);
                        writer.write("),");
                    }
                    writer.new_line();
                });
                writer.write("}");
            }
            None => match narrowed_type.as_either() {
                Some((value, err)) => {
                    if value.is_empty() {
                        writer.write(&format!("{}.unwrap_err()", expression));
                    } else if err.is_empty() {
                        writer.write(&format!("{}.unwrap()", expression));
                    } else {
                        panic!();
                    }
                }
                None => panic!(),
            },
        }
    }

    /// # Arguments:
    /// * `expression` the already transpiled expression
    /// * `target` is the target type to where expression type should be mapped
    /// * `resolved_type` the resolved expression type
    /// * `narrowed_type` the narrowed expression type, e.g. if expression type has been narrowed down from the
    /// `resolved_type`
    fn transpile_type_mapping(
        &self,
        expression: &str,
        target: &SumType,
        resolved_type: &SumType,
        narrowed_type: &SumType,
        writer: &mut Writer,
    ) {
        if target.len() == 1 {
            if resolved_type.len() == 1 {
                if let Some((value, err)) = resolved_type.as_either() {
                    self.transpile_either_mapping(
                        expression,
                        target,
                        (value, err),
                        narrowed_type,
                        writer,
                    );
                } else {
                    if let Some((value, err)) = target.as_either() {
                        writer.write("Result::<");
                        self.transpile_types(value.types(), writer);
                        writer.write(", ");
                        if err.is_empty() {
                            writer.write("()");
                        } else {
                            self.transpile_types(err.types(), writer);
                        }
                        writer.write(">::Ok(");

                        self.transpile_type_mapping(
                            expression,
                            &value,
                            resolved_type,
                            narrowed_type,
                            writer,
                        );
                        writer.write(")");
                    } else {
                        // the target is a simple type, i.e. we can directly assign the expression
                        writer.write(expression);
                    }
                }
            } else {
                writer.write("match ");
                writer.write(expression);
                writer.write(" {");
                writer.new_line();
                writer.indented(|writer| {
                    let resolved_name = resolved_type.sum_type_name();
                    let target_type = &target.types()[0];
                    writer.write(&resolved_name);
                    writer.write("::");

                    let exact_match = resolved_type
                        .types()
                        .iter()
                        .find(|it| it == &target_type)
                        .is_some();
                    let variant = if exact_match {
                        type_to_enum_variant(target_type)
                    } else {
                        // if not an exact match it must be `&` expression, thus use the base type
                        let target_type = match target_type {
                            Type::RefType(ref_type) => ref_type.r#type.as_ref().clone(),
                            _ => target_type.clone(),
                        };
                        type_to_enum_variant(&target_type)
                    };

                    let full_variant = match target_type {
                        Type::Null => variant,
                        _ => format!("{}(e)", variant),
                    };
                    writer.write(&full_variant);
                    writer.write(" => e,");
                    writer.new_line();

                    writer.write("_ => panic!(\"Impossible\")");
                    writer.new_line();
                });
                writer.write("}");
            }
        } else {
            let resolved_name = resolved_type.sum_type_name();
            let target_name = target.sum_type_name();
            if target_name == resolved_name {
                writer.write(expression);
                return;
            }
            if resolved_type.len() == 1 {
                if let Some((value, err)) = narrowed_type.as_either() {
                    if err.is_empty() {
                        self.transpile_type_mapping(
                            &format!("{}.unwrap()", expression),
                            target,
                            &value,
                            &value,
                            writer,
                        );
                    }
                    if value.is_empty() {
                        self.transpile_type_mapping(
                            &format!("{}.unwrap_err()", expression),
                            target,
                            &err,
                            &err,
                            writer,
                        );
                    }
                    return;
                }

                writer.write(&target_name);
                writer.write("::");
                let variant = type_to_enum_variant(&resolved_type.types()[0]);
                writer.write(&variant);
                writer.write("(");
                writer.write(expression);
                writer.write(")");
            } else {
                writer.write("match ");
                writer.write(expression);
                writer.write(" {");
                writer.new_line();
                writer.indented(|writer| {
                    for resolved in narrowed_type.types() {
                        writer.write(&resolved_name);
                        writer.write("::");
                        let variant = type_to_enum_variant(resolved);
                        let full_variant = match resolved {
                            Type::Null => variant,
                            _ => format!("{}(e)", variant),
                        };
                        writer.write(&full_variant);
                        writer.write(" => ");
                        writer.write(&target_name);
                        writer.write("::");
                        writer.write(&full_variant);
                        writer.write(",");
                        writer.new_line();
                    }
                    writer.write("_ => panic!(\"Impossible\")");
                    writer.new_line();
                });
                writer.write("}");
            }
        }
    }

    fn transpile_expression_with_mapping(
        &self,
        analyzer: &mut PackageSemanticAnalyzer,
        expression: &Expression,
        target: &Option<SumType>,
        block: &Block,
        writer: &mut Writer,
    ) {
        let Some(target) = target else {
            self.transpile_expression(analyzer, &expression, block, writer);
            return;
        };
        if matches!(expression.r#type, ExpressionType::Null) {
            writer.write(&target.sum_type_name());
            writer.write("::");
            self.transpile_expression(analyzer, &expression, block, writer);
            return;
        }

        let mut transpiled_expression = "".to_string();
        let mut str_writer = Writer::new(&mut transpiled_expression, writer.indentation);
        self.transpile_expression(analyzer, &expression, block, &mut str_writer);

        // If expression is "&exp" map the inner operand to avoid type conversions
        let expr = match &expression.r#type {
            ExpressionType::UnaryExpression(op) => match op.operator {
                UnaryOperator::Reference => &op.operand,
                _ => expression,
            },
            _ => expression,
        };
        let Some((resolved_type, narrowed_type)) = analyzer
            .query_expression(block, expr)
            .map(|s| (s.resolved_types.clone().unwrap(), s.types().unwrap())) else {
            // e.g. a block that returned doesn't has an expression type
            self.transpile_expression(analyzer, &expression, block, writer);
            return;
        };

        self.transpile_type_mapping(
            &transpiled_expression,
            target,
            &resolved_type,
            &narrowed_type,
            writer,
        );
    }

    fn transpile_method_call(
        &self,
        analyzer: &mut PackageSemanticAnalyzer,
        call: &FunctionCall,
        block: &Block,
        writer: &mut Writer,
    ) {
        let method = analyzer
            .query_method_call(block, call)
            .unwrap()
            .binding
            .unwrap();

        self.transpile_call(analyzer, call, block, &method.signature, writer);
    }

    fn transpile_function_call(
        &self,
        analyzer: &mut PackageSemanticAnalyzer,
        call: &FunctionCall,
        block: &Block,
        writer: &mut Writer,
    ) {
        if self.transpile_buildin_function_call(analyzer, call, block, writer) {
            return;
        }

        let fun_call_binding = analyzer
            .query_function_call(block, call)
            .unwrap()
            .binding
            .unwrap();
        let function = fun_call_binding.as_function_signature();

        self.transpile_call(analyzer, call, block, function, writer);
    }

    fn transpile_call(
        &self,
        analyzer: &mut PackageSemanticAnalyzer,
        call: &FunctionCall,
        block: &Block,
        function_signature: &FunctionSignature,
        writer: &mut Writer,
    ) {
        writer.write(&call.name);
        writer.write("(");

        let mut iter = call.arguments.iter().enumerate().peekable();
        while let Some((i, expr)) = iter.next() {
            let parameter = function_signature.parameters.get(i).unwrap();
            let parameter_type = analyzer.query_parameter_type(function_signature, parameter);
            self.transpile_expression_with_mapping(analyzer, expr, &parameter_type, block, writer);
            if iter.peek().is_some() {
                writer.write(", ");
            }
        }

        writer.write(")");
    }

    fn transpile_var_declaration(
        &self,
        analyzer: &mut PackageSemanticAnalyzer,
        var_declaration: &Ptr<VarDeclaration>,
        block: &Block,
        writer: &mut Writer,
    ) {
        writer.write("let ");
        if var_declaration.is_mutable {
            writer.write("mut ");
        }
        writer.write(&var_declaration.name);
        match &var_declaration.types {
            Some(t) => {
                let types = analyzer.query_types(&TypeQueryContext::from_block(block), t);
                writer.write(": ");
                self.transpile_types(types.types(), writer);
            }
            None => {}
        }
        writer.write(" = ");
        let var_types =
            analyzer.query_var_types(&TypeQueryContext::from_block(block), var_declaration);

        self.transpile_expression_with_mapping(
            analyzer,
            &var_declaration.value,
            &Some(var_types),
            block,
            writer,
        );
        writer.write(";");
    }

    fn transpile_return_statement(
        &self,
        analyzer: &mut PackageSemanticAnalyzer,
        expression: &Option<Expression>,
        block: &Block,
        writer: &mut Writer,
    ) {
        writer.write("return");
        if let Some(expression) = expression {
            writer.write(" ");
            let fun = block.fun();
            let return_type = analyzer.query_return_type(&fun.signature);
            self.transpile_expression_with_mapping(
                analyzer,
                expression,
                &return_type,
                block,
                writer,
            );
        }
        writer.write(";");
    }

    fn transpile_if_type_narrowing(
        &self,
        analyzer: &mut PackageSemanticAnalyzer,
        block: &Block,
        type_narrowing: &TypeNarrowing,
        writer: &mut Writer,
    ) {
        if type_narrowing.original_types.as_either().is_some() {
            if type_narrowing.reduction {
                // != ?
                writer.write(&format!("{}.is_ok()", type_narrowing.identifier));
            } else {
                writer.write(&format!("{}.is_err()", type_narrowing.identifier));
            }
            return;
        }
        if type_narrowing.original_types.len() == 1 {
            // nothing needs to be narrowed
            writer.write("true");
            return;
        }

        let identifier_semantics = analyzer
            .query_identifier(block, type_narrowing.identifier_node.id())
            .unwrap();
        let condition_type = identifier_semantics.resolved_types.unwrap().sum_type_name();
        let target_type_name = type_narrowing.types.sum_type_name();

        writer.write(&format!(
            "let Some(_) = match {} {{",
            type_narrowing.identifier
        ));
        writer.indented(|writer| {
            if type_narrowing.reduction {
                // true if in the form (typeof X != bool && typeof X != i32)
                todo!();
            } else {
                // false if in the form (typeof X == bool || typeof X == i32)
                for t in type_narrowing.types.types() {
                    writer.new_line();
                    if type_narrowing.types.len() > 1 {
                        writer.write(&format!(
                            "{}::{:?}(v) => Some({}::{:?}(v)),",
                            condition_type, t, target_type_name, t,
                        ));
                    } else {
                        writer.write(&format!("{}::{:?}(v) => Some(v),", condition_type, t));
                    }
                }
                writer.new_line();
                writer.write("_ => None,");
            }
        });
        writer.new_line();
        writer.write("}");
    }

    fn transpile_if_expression(
        &self,
        analyzer: &mut PackageSemanticAnalyzer,
        if_expression: &IfExpression,
        block: &Block,
        target: &Option<SumType>,
        writer: &mut Writer,
    ) {
        writer.write("if ");
        let type_narrowing = analyzer
            .query_if_expression(block, &if_expression)
            .and_then(|s| s.type_narrowing);
        if let Some(type_narrowing) = &type_narrowing {
            self.transpile_if_type_narrowing(analyzer, block, type_narrowing, writer);
        } else {
            self.transpile_expression(analyzer, &if_expression.condition, block, writer);
        }
        writer.write(" {");
        writer.new_line();
        writer.indented(|writer| {
            self.transpile_block(analyzer, &if_expression.consequence, target, writer);
        });
        writer.write("}");
        if let Some(alternative) = &if_expression.alternative {
            match alternative {
                IfAlternative::Else(else_block) => {
                    writer.write(" else {");
                    writer.new_line();
                    writer.indented(|writer| {
                        self.transpile_block(analyzer, else_block, target, writer);
                    });
                    writer.write("}");
                }
                IfAlternative::If(if_expression) => {
                    writer.write(" else ");
                    self.transpile_if_expression(analyzer, &if_expression, block, target, writer);
                }
            }
        }
    }

    /// * target if the block has a block return the target gives the target type for this returns
    fn transpile_block(
        &self,
        analyzer: &mut PackageSemanticAnalyzer,
        block: &Ptr<Block>,
        target: &Option<SumType>,
        writer: &mut Writer,
    ) {
        let mut iterator = block.statements().peekable().into_iter();
        while let Some(statement) = iterator.next() {
            match statement {
                Statement::Expression(statement) => {
                    if iterator.peek().is_some() {
                        self.transpile_expression(analyzer, &statement.expression, block, writer);
                        writer.write(";");
                        writer.new_line();
                        continue;
                    }
                    let Some(block_return) = analyzer
                        .query_block(block)
                        .and_then(|s| s.block_return) else {
                        self.transpile_expression(analyzer, &statement.expression, block, writer);
                        writer.write(";");
                        writer.new_line();
                        return;
                    };

                    self.transpile_expression_with_mapping(
                        analyzer,
                        &block_return,
                        target,
                        block,
                        writer,
                    );
                    writer.new_line();
                }
                Statement::VarDeclaration(var) => {
                    self.transpile_var_declaration(analyzer, &var, block, writer);
                    writer.new_line();
                }
                Statement::Return(ret) => {
                    self.transpile_return_statement(analyzer, &ret.expression, block, writer);
                    writer.new_line();
                }
                Statement::Loop(loop_statement) => {
                    self.transpile_loop_statement(analyzer, &loop_statement, block, writer);
                    writer.new_line();
                }
                Statement::Break(_) => {
                    writer.write("break;");
                    writer.new_line();
                }
                Statement::Continue(_) => {
                    writer.write("continue;");
                    writer.new_line();
                }
                Statement::Assignment(assignment) => {
                    self.transpile_expression(analyzer, &assignment.left, block, writer);
                    writer.write(" = ");
                    let target = &analyzer
                        .query_expression(block, &assignment.left)
                        .unwrap()
                        .types();
                    self.transpile_expression_with_mapping(
                        analyzer,
                        &assignment.right,
                        target,
                        block,
                        writer,
                    );
                    writer.write(";");
                    writer.new_line();
                }
            }
        }
    }

    fn transpile_loop_statement(
        &self,
        analyzer: &mut PackageSemanticAnalyzer,
        loop_statement: &Loop,
        block: &Ptr<Block>,
        writer: &mut Writer,
    ) {
        if let Some(range) = &loop_statement.range {
            writer.write(&format!("for {} in ", range.variable));
            self.transpile_expression(analyzer, &range.from, block, writer);
            writer.write("..");
            if range.to_inclusive {
                writer.write("=");
            }
            self.transpile_expression(analyzer, &range.from, block, writer);
            writer.write(" {");
        } else {
            writer.write("loop {");
        }
        writer.new_line();
        writer.indented(|writer| {
            self.transpile_block(analyzer, &loop_statement.body, &None, writer);
        });
        writer.write("}");
    }

    fn transpile_function(
        &self,
        analyzer: &mut PackageSemanticAnalyzer,
        fun: &Ptr<Function>,
        writer: &mut Writer,
    ) {
        writer.write(&format!("fn {}", fun.signature.name));

        self.transpile_parameters(
            analyzer,
            &fun,
            &fun.signature.receiver,
            &fun.signature.parameters,
            writer,
        );
        if let Some(return_type) = &fun.signature.return_type {
            writer.write(" -> ");
            let types = analyzer.query_types(&TypeQueryContext::from_fun(&fun), &return_type.types);
            self.transpile_types(types.types(), writer);
        }
        writer.write(" {");
        writer.new_line();
        writer.indented(|writer| {
            self.transpile_block(analyzer, &fun.body(), &None, writer);
        });
        writer.write("}");
    }

    fn transpile_struct_field(
        &self,
        analyzer: &mut PackageSemanticAnalyzer,
        st: &Ptr<Struct>,
        field: &Field,
        writer: &mut Writer,
    ) {
        writer.write(&field.name);
        writer.write(": ");
        if field.has_reference() {
            writer.write("&'a ");
        }
        let types = analyzer.query_types(&TypeQueryContext::Struct(st.clone()), &field.types);
        self.transpile_types(types.types(), writer);

        writer.write(",");
    }

    fn transpile_struct_fields(
        &self,
        analyzer: &mut PackageSemanticAnalyzer,
        st: &Ptr<Struct>,
        fields: &Vec<Field>,
        writer: &mut Writer,
    ) {
        for field in fields {
            self.transpile_struct_field(analyzer, st, field, writer);
            writer.new_line();
        }
    }

    fn transpile_type_param(&self, param: &TypeParam) -> String {
        if param.type_params.is_empty() {
            return param.identifier.clone();
        }
        let parts = param
            .type_params
            .iter()
            .map(|p| self.transpile_type_param(p))
            .collect::<Vec<_>>()
            .join(", ");
        format!("{}<{}>", param.identifier, parts)
    }

    fn transpile_struct(
        &self,
        analyzer: &mut PackageSemanticAnalyzer,
        struct_def: &Ptr<Struct>,
        writer: &mut Writer,
    ) {
        writer.write(&format!("struct {}", struct_def.name));
        let has_ref = struct_def.has_reference();
        if has_ref || struct_def.type_params.is_some() {
            let mut parts = vec![];
            if has_ref {
                parts.push("'a".to_string());
            }
            for param in struct_def.type_params.as_ref().unwrap() {
                parts.push(self.transpile_type_param(param));
            }
            writer.write(&format!("<{}>", parts.join(", ")));
        }
        writer.write(" {");
        writer.new_line();
        writer.indented(|writer| {
            self.transpile_struct_fields(analyzer, struct_def, &struct_def.fields, writer);
        });
        writer.write("}");
    }

    fn transpile_struct_field_init(
        &self,
        analyzer: &mut PackageSemanticAnalyzer,
        struct_field_init: &StructFieldInitialization,
        struct_def: &Ptr<Struct>,
        block: &Block,
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
        let field_type = analyzer.query_field_type(struct_def, &field);
        self.transpile_expression_with_mapping(
            analyzer,
            &struct_field_init.value,
            &field_type,
            block,
            writer,
        )
    }

    fn transpile_struct_init(
        &self,
        analyzer: &mut PackageSemanticAnalyzer,
        struct_init: &StructInitialization,
        block: &Block,
        writer: &mut Writer,
    ) {
        writer.write(&struct_init.name);
        writer.write(" {");
        writer.new_line();
        writer.indented(|writer| {
            let file = analyzer.query_package_content();
            let struct_def = file.structs.get(&struct_init.name).unwrap();
            for field in &struct_init.fields {
                self.transpile_struct_field_init(analyzer, field, &struct_def, block, writer);
                writer.write(",");
                writer.new_line();
            }
        });
        writer.write("}");
    }

    pub fn transpile_file(&self, analyzer: &mut PackageSemanticAnalyzer, writer: &mut Writer) {
        let file = analyzer.query_package_content();
        for (name, types) in &analyzer.sum_types {
            self.transpile_sum_type_def(name, types, writer);
            writer.new_line();
            writer.new_line();
        }

        for (_, struct_def) in &file.structs {
            self.transpile_struct(analyzer, struct_def, writer);
            writer.new_line();
            writer.new_line();

            if let Some(semantics) = &analyzer.query_struct(struct_def) {
                for (_, implementations) in &semantics.specializations {
                    writer.write(&format!("impl {} {{", struct_def.name));
                    writer.new_line();
                    writer.indented(|writer| {
                        for (i, method) in implementations.methods.iter().enumerate() {
                            self.transpile_function(analyzer, method, writer);
                            writer.new_line();
                            if i < implementations.methods.len() - 1 {
                                writer.new_line();
                            }
                        }
                    });
                    writer.write("}");
                    writer.new_line();
                    writer.new_line();
                }
            }
        }

        for (_, function) in &file.functions {
            self.transpile_function(analyzer, function, writer);
            writer.new_line();
            writer.new_line();
        }
    }
}

pub fn transpile(
    analyzer: &mut PackageSemanticAnalyzer,
    outfile: &PathBuf,
) -> Result<(), io::Error> {
    let mut outfile = std::fs::File::create(outfile)?;

    let mut buffer = "".to_string();
    let mut writer = Writer::new(&mut buffer, 0);
    let transpiler = RustTranspiler {
        buildins: Buildins::new(),
    };
    transpiler.transpile_file(analyzer, &mut writer);

    outfile.write(buffer.as_bytes())?;
    outfile.flush()?;
    Ok(())
}

pub fn transpile_project(project_dir: &PathBuf) -> Result<(), anyhow::Error> {
    let mut project = Project::new(Box::new(DiskFS {}), project_dir.clone());
    let (package, _) = project
        .query_package(&root_package_path())
        .ok_or(anyhow::Error::msg("Not a package directory"))?;
    let mut package = package.write().unwrap();

    package.query_all();
    if !package.errors.is_empty() {
        return Err(anyhow::Error::msg(package.errors[0].msg.clone()));
    }

    let build_dir = project_dir.join(".build");
    let src_rust = build_dir.join("src");
    create_dir_all(&src_rust)?;
    let main_rust = src_rust.join("main.rs");

    transpile(&mut package, &main_rust)?;

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
