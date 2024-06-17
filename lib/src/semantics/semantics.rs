use std::{
    collections::{HashMap, HashSet},
    ffi::OsString,
};

use super::{
    flow_container::AnalysisState,
    types::{intersection, SArray, SRefType, SSlice, SumType, Type},
    types_to_string, ClosureContext, ClosureType, SInterface,
};
use crate::{
    ast::{
        self, implement::StructImplement, Block, BlockParent, Expression, ExpressionType, Field,
        FileContext, Function, FunctionCall, FunctionSignature, IdentifierType, IfAlternative,
        IfExpression, Import, ImportName, Interface, LangError, NodeData, NodeId, PackagePath,
        Parameter, RefType, SelectorExpression, SelectorField, Struct, StructFieldInitialization,
        StructInitialization, TypeParam, VarDeclaration,
    },
    buildin::Buildins,
    types::Ptr,
};

#[derive(Debug, Clone)]
pub struct PipeArg {
    /// Type of the "$" variable
    pub types: SumType,
    pub value_origin: Vec<ValueOrigin>,
}

pub struct ExpContext {
    // For example, used to get the parent Function or to lookup local identifiers
    pub block: Ptr<Block>,
    pub pipe_arg: Option<PipeArg>,
}

impl ExpContext {
    pub fn new(block: &Ptr<Block>, pipe_arg: Option<PipeArg>) -> Self {
        ExpContext {
            block: block.clone(),
            pipe_arg,
        }
    }
}

#[derive(Debug, Clone)]
pub struct PackageContentSemantics {
    pub imports: Vec<Import>,
    /// Top level functions
    pub functions: HashMap<String, Ptr<Function>>,
    /// Struct methods declarations
    pub methods: Vec<Ptr<Function>>,
    pub structs: HashMap<String, Ptr<Struct>>,
    /// Struct type -> list of implemented interfaces
    pub struct_impls: HashMap<IdentifierType, Vec<StructImplement>>,
    pub interfaces: HashMap<String, Ptr<Interface>>,
}

/// Context in which a type is used, e.g. needed to resolve generic types
#[derive(Debug, Clone)]
pub enum TypeQueryContext {
    /// Top level statement
    Root,
    Struct(Ptr<Struct>),
    Function(FunctionSignature),
    /// Context of the receiver of a struct method definition, e.g. (self &MyStruct)method()
    StructMethodReceiver,
    /// A parameter type
    Parameter,
}

impl TypeQueryContext {
    pub fn from_fun(fun: &Function) -> Self {
        TypeQueryContext::Function(fun.signature.clone())
    }

    pub fn from_block(block: &Block) -> Self {
        TypeQueryContext::Function(block.fun().signature.clone())
    }
}

#[derive(Debug, Clone)]
pub struct BlockSemantics {
    pub vars: HashMap<String, Ptr<VarDeclaration>>,
    /// block return expression from the last statement
    pub block_return: Option<Expression>,
}

#[derive(Debug, Clone)]
pub enum IdentifierBinding {
    VarDeclaration(Ptr<VarDeclaration>),
    Parameter(Parameter),
    PipeArg(PipeArg),
    Package(PackagePath),
}

#[derive(Debug, Clone)]
pub enum FunctionCallBinding {
    Function(Ptr<Function>),
    Buildin(FunctionSignature),
}

impl FunctionCallBinding {
    pub fn as_function_signature(&self) -> &FunctionSignature {
        match self {
            FunctionCallBinding::Function(fun) => &fun.signature,
            FunctionCallBinding::Buildin(sig) => sig,
        }
    }
}

#[derive(Debug, Clone)]
pub struct FunctionCallSemantics {
    pub binding: Option<FunctionCallBinding>,
}

#[derive(Debug, Clone)]
pub struct MethodCallSemantics {
    pub binding: Option<Ptr<Function>>,
}

#[derive(Debug, Clone, Hash, PartialEq, Eq)]
pub enum OriginType {
    Parameter(Parameter),
    Expression(NodeData),
}

impl OriginType {
    pub fn id(&self) -> NodeData {
        match self {
            OriginType::Parameter(p) => p.node.clone(),
            OriginType::Expression(e) => e.clone(),
        }
    }
}

/// The origin of a value/reference the expression is pointing to
#[derive(Debug, Clone, Hash, PartialEq, Eq)]
pub struct ValueOrigin {
    pub origin: OriginType,
    /// The full path from the original value
    /// For example, for an expression value.field1.field2 the origin is value and the path is [field1, field2]
    pub path: Vec<String>,

    /// If origin has been referenced
    pub reference: bool,
    /// If origin has been mutually referenced
    pub mutable: bool,
}

impl ValueOrigin {
    pub fn from_node(origin: OriginType) -> ValueOrigin {
        ValueOrigin {
            origin,
            path: vec![],
            reference: false,
            mutable: false,
        }
    }
}

#[derive(Debug, Clone)]
pub struct ExpressionSemantics {
    /// Either the direct type from the expression or the more refined type if the expression type was unresolved.
    /// For example, an int literal expression for an argument of a function call can have multiple possible types:
    /// `2` in the function_call(2); could be of type u8, i8, u16, i16...
    /// The resolved type is the type intersection of the matching function parameter.
    pub resolved_types: Option<SumType>,
    /// The narrowed type, e.g. through an `if typeof` expression.
    pub narrowed_types: Option<SumType>,

    pub is_mutable: bool,

    /// Binding if the expression is an identifier
    pub binding: Option<IdentifierBinding>,

    /// Can be multiple origins, e.g. from if/else expression
    pub value_origin: Vec<ValueOrigin>,
}

impl ExpressionSemantics {
    pub fn empty() -> Self {
        ExpressionSemantics {
            resolved_types: None,
            narrowed_types: None,
            binding: None,
            is_mutable: false,
            value_origin: vec![],
        }
    }

    pub fn resolved_types(resolved_types: Option<SumType>, value_origin: Vec<ValueOrigin>) -> Self {
        ExpressionSemantics {
            resolved_types,
            narrowed_types: None,
            is_mutable: false,
            binding: None,
            value_origin,
        }
    }

    /// Either the narrowed or the resolved types
    pub fn types(&self) -> Option<SumType> {
        self.narrowed_types.clone().or(self.resolved_types.clone())
    }

    pub fn into_types(self) -> Option<SumType> {
        self.narrowed_types.or(self.resolved_types)
    }
}

#[derive(Debug, Clone)]
pub struct VarDeclarationSemantics {
    /// Inferred variable types if var types where not declared
    pub inferred_types: Option<SumType>,

    /// For example the origin of a reference
    pub value_origin: Vec<ValueOrigin>,
}

#[derive(Debug, Clone)]
pub struct IfExpressionSemantics {
    /// Type narrowing from the if condition
    pub type_narrowing: Option<TypeNarrowing>,
}

#[derive(Debug, Clone)]
pub struct TypeNarrowing {
    /// Type before the narrowing; might already be narrowed down before
    pub original_types: SumType,
    pub identifier_node: NodeData,
    pub identifier: String,
    /// true if in the form (typeof X != bool && typeof X != i32)
    /// false if in the form (typeof X == bool || typeof X == i32)
    pub reduction: bool,
    /// Narrowed types
    pub types: SumType,
}

#[derive(Debug, Clone)]
pub struct StructImplementation {
    pub methods: Vec<Ptr<Function>>,
}

#[derive(Debug, Clone)]
pub struct StructSemantics {
    /// method definitions for a struct grouped by struct type arguments
    pub specializations: HashMap<String, StructImplementation>,
}

#[derive(Debug, Clone)]
pub enum TypeBinding {
    Struct(Ptr<Struct>),
    StructTypeArgument(TypeParam),
    Interface(Ptr<Interface>),
}

#[derive(Debug, Clone)]
pub struct TypeIdentifierSemantics {
    pub binding: Option<TypeBinding>,
}

#[derive(Debug, Clone)]
pub enum SelectorFieldBinding {
    Struct(Ptr<Struct>),
    Package(Ptr<PackageContentSemantics>),
}

#[derive(Debug, Clone)]
pub struct SelectorFieldSemantics {
    pub field_types: SumType,
    /// The type of the field, e.g. the field type or the return type of a method call.
    /// This type contains potential accumulated errors types from previous selector fields.
    pub r#type: SumType,
    /// Parent struct of the field, e.g. `parent.field`
    pub parent: Option<SelectorFieldBinding>,
    pub binding: Option<SelectorFieldBinding>,
}

#[derive(Debug, Clone)]
pub struct PipeSemantics {
    pub pipe_argument: Option<SumType>,
}

#[derive(Debug)]
pub struct PackageSemanticAnalyzer {
    pub path: PackagePath,
    pub files: HashMap<OsString, Ptr<FileContext>>,

    // All direct and indirect dependencies
    pub(crate) dependencies: HashMap<PackagePath, Ptr<PackageContentSemantics>>,

    /// List of all sum_types in the package
    pub sum_types: HashMap<String, SumType>,
    pub errors: Vec<LangError>,

    /// Package content
    package_semantics: Option<Ptr<PackageContentSemantics>>,
    /// struct declarations
    pub structs: HashMap<NodeId, StructSemantics>,
    /// Bindings to the struct declaration that have been initialized
    pub(crate) struct_inits: HashMap<NodeId, Option<Ptr<Struct>>>,

    /// Just keeps track of validated imports
    imports: HashSet<NodeId>,
    /// Just keeps track of analyzed/checked functions
    fun_symbols: HashSet<NodeId>,
    /// Validated SumType for type nodes
    types: HashMap<NodeId, SumType>,
    pub(crate) if_expressions: HashMap<NodeId, IfExpressionSemantics>,
    pub(crate) expressions: HashMap<NodeId, ExpressionSemantics>,
    pub(crate) pipe_expressions: HashMap<NodeId, PipeSemantics>,
    /// Various details about the selector field, e.g. if nullable or which the parent struct is
    pub(crate) selector_fields: HashMap<NodeId, SelectorFieldSemantics>,
    pub(crate) variable_declarations: HashMap<NodeId, VarDeclarationSemantics>,
    function_calls: HashMap<NodeId, FunctionCallSemantics>,
    method_calls: HashMap<NodeId, MethodCallSemantics>,
    pub(crate) blocks: HashMap<NodeId, BlockSemantics>,

    /// Binding for a struct field initialization to the matching Field in of the target struct
    pub(crate) struct_field_inits: HashMap<NodeId, Field>,

    /// Map of node usages
    pub(crate) usages: HashMap<NodeId, Vec<NodeData>>,
}

impl PackageSemanticAnalyzer {
    pub fn new(path: PackagePath, files: HashMap<OsString, Ptr<FileContext>>) -> Self {
        PackageSemanticAnalyzer {
            path,
            files,
            dependencies: HashMap::new(),
            package_semantics: None,
            sum_types: HashMap::new(),
            errors: Vec::new(),

            structs: HashMap::new(),
            struct_inits: HashMap::new(),
            imports: HashSet::new(),
            fun_symbols: HashSet::new(),
            types: HashMap::new(),
            if_expressions: HashMap::new(),
            expressions: HashMap::new(),
            pipe_expressions: HashMap::new(),
            selector_fields: HashMap::new(),
            variable_declarations: HashMap::new(),
            function_calls: HashMap::new(),
            method_calls: HashMap::new(),
            blocks: HashMap::new(),
            struct_field_inits: HashMap::new(),

            usages: HashMap::new(),
        }
    }

    pub fn current_errors(&self, out: &mut Vec<LangError>) {
        for (_, file) in &self.files {
            out.append(&mut file.parse_errors.clone());
        }
        out.append(&mut self.errors.clone());
    }

    pub fn add_dependencies(
        &mut self,
        dependencies: HashMap<PackagePath, Ptr<PackageContentSemantics>>,
    ) {
        self.dependencies = dependencies;
    }

    /// Query all symbols in the files and thus doing a full validation
    pub fn query_all(&mut self) {
        let file_semantics = self.query_package_content();

        for import in &file_semantics.imports {
            self.query_import(import);
        }

        for (_, struct_def) in &file_semantics.structs {
            self.query_struct(struct_def);
        }

        for (_, fun) in &file_semantics.functions {
            self.query_fun(fun);
        }

        for method in &file_semantics.methods {
            self.query_fun(method);
        }
    }

    pub fn query_import(&mut self, import: &Import) {
        if let Some(_) = self.imports.get(&import.node.id()) {
            return;
        }

        self.validate_import(&import);

        let new_entry = self.imports.insert(import.node.id());
        assert!(new_entry);
    }

    /// Query/validate a single struct
    pub fn query_struct(&mut self, struct_def: &Ptr<Struct>) -> Option<StructSemantics> {
        if let Some(st) = self.structs.get(&struct_def.node.id()) {
            return Some(st.clone());
        }

        self.validate_struct_def(&struct_def);

        self.structs.get(&struct_def.node.id()).map(|s| s.clone())
    }

    /// Query/validate a single function
    pub fn query_fun(&mut self, fun: &Ptr<Function>) {
        if self.fun_symbols.contains(&fun.signature.node.id()) {
            return;
        }
        self.validate_fun(&fun);
        let new_entry = self.fun_symbols.insert(fun.signature.node.id());
        assert!(new_entry);
    }

    pub fn query_block(&mut self, block: &Ptr<Block>) -> Option<BlockSemantics> {
        if let Some(s) = self.blocks.get(&block.node.id()) {
            return Some(s.clone());
        }

        self.query_fun(&block.fun());

        self.blocks.get(&block.node.id()).map(|s| s.clone())
    }

    pub fn query_package_content(&mut self) -> Ptr<PackageContentSemantics> {
        if let Some(file) = &self.package_semantics {
            return file.clone();
        }

        let file = Ptr::new(self.validate_package_content());
        self.package_semantics = Some(file.clone());

        file
    }

    pub fn query_expression(
        &mut self,
        block: &Block,
        expression: &Expression,
    ) -> Option<ExpressionSemantics> {
        if let Some(s) = self.expressions.get(&expression.node.id()) {
            return Some(s.clone());
        }
        self.query_fun(&block.fun());

        self.expressions
            .get(&expression.node.id())
            .map(|s| s.clone())
    }

    pub fn query_if_expression(
        &mut self,
        block: &Block,
        statement: &IfExpression,
    ) -> Option<IfExpressionSemantics> {
        if let Some(s) = self.if_expressions.get(&statement.node.id()) {
            return Some(s.clone());
        }
        self.query_fun(&block.fun());

        self.if_expressions
            .get(&statement.node.id())
            .map(|s| s.clone())
    }

    pub fn query_struct_initialization(
        &mut self,
        block: &Block,
        struct_init: &StructInitialization,
    ) -> Option<Ptr<Struct>> {
        if let Some(s) = self.struct_inits.get(&struct_init.node.id()) {
            return s.clone();
        }

        self.query_fun(&block.fun());

        self.struct_inits
            .get(&struct_init.node.id())
            .and_then(|s| s.clone())
    }

    fn bind_type_identifier(
        &mut self,
        context: &TypeQueryContext,
        node: &NodeData,
        ident: &IdentifierType,
    ) -> Option<Type> {
        self.lookup_type_identifier(context, node, &ident.identifier)
            .map(|binding| match binding {
                TypeBinding::Struct(st) => Type::Struct(st.clone()),
                TypeBinding::StructTypeArgument(arg) => Type::StructTypeArgument(arg.clone()),
                TypeBinding::Interface(interface) => Type::Interface((
                    interface.clone(),
                    SInterface {
                        name: interface.name.clone(),
                    },
                )),
            })
    }

    /// Only binds non-trivial types such as type identifiers
    fn bind_type(
        &mut self,
        context: &TypeQueryContext,
        node: &NodeData,
        r#type: &ast::Type,
    ) -> Option<Type> {
        let t = match r#type {
            ast::Type::Null => Type::Null,
            ast::Type::Str => Type::Str,
            ast::Type::String => Type::String,
            ast::Type::Bool => Type::Bool,
            ast::Type::U8 => Type::U8,
            ast::Type::I8 => Type::I8,
            ast::Type::U32 => Type::U32,
            ast::Type::I32 => Type::I32,
            ast::Type::Array(array) => Type::Array(SArray {
                types: Ptr::new(
                    array
                        .types
                        .iter()
                        .map(|it| self.bind_ref_type(context, it))
                        .filter_map(|it| it)
                        .collect(),
                ),
                length: array.length,
            }),
            ast::Type::Slice(slice) => Type::Slice(SSlice {
                types: Ptr::new(
                    slice
                        .types
                        .iter()
                        .map(|it| self.bind_ref_type(context, it))
                        .filter_map(|it| it)
                        .collect(),
                ),
            }),
            ast::Type::Either(value, err) => Type::Either(
                SumType::from_types(
                    &value
                        .iter()
                        .map(|it| self.bind_ref_type(context, it))
                        .filter_map(|it| it)
                        .collect(),
                ),
                SumType::from_types(
                    &err.iter()
                        .map(|it| self.bind_ref_type(context, it))
                        .filter_map(|it| it)
                        .collect(),
                ),
            ),
            ast::Type::Identifier(ident) => {
                return self.bind_type_identifier(context, node, ident);
            }
            ast::Type::Closure(closure) => Type::Closure(Ptr::new(ClosureType {
                context: closure.context.as_ref().and_then(|c| {
                    Some(match c {
                        ast::ClosureContext::Owned => ClosureContext::Owned,
                        ast::ClosureContext::MutRef => ClosureContext::MutRef,
                        ast::ClosureContext::Ref => ClosureContext::Ref,
                        ast::ClosureContext::Type(types) => {
                            if types.len() > 1 {
                                self.errors.push(LangError::type_error(
                                    &node,
                                    format!("Sum types in closure context is not supported"),
                                ));
                            }
                            let t = &types[0];
                            ClosureContext::Type(self.bind_type(context, &t.node, &t.r#type)?)
                        }
                    })
                }),
                parameters: closure
                    .parameters
                    .iter()
                    .map(|p| (p.name.clone(), self.query_types(context, &p.types)))
                    .collect(),
                return_type: closure
                    .return_type
                    .as_ref()
                    .map(|t| self.query_types(context, &t.types)),
            })),
        };
        Some(t)
    }

    /// Binds the matching Type.
    /// Simple types are mapped on the fly while identifier are bound and cached.
    fn bind_ref_type(&mut self, context: &TypeQueryContext, r#type: &RefType) -> Option<Type> {
        if r#type.is_reference {
            let main_type = self.bind_type(context, &r#type.node, &r#type.r#type)?;
            Some(Type::RefType(SRefType {
                is_mut: r#type.is_mut,
                r#type: Ptr::new(main_type),
            }))
        } else {
            self.bind_type(context, &r#type.node, &r#type.r#type)
        }
    }

    /// Queries all ast RefTypes and maps them to a SumType
    pub fn query_types(&mut self, context: &TypeQueryContext, types: &Vec<RefType>) -> SumType {
        let Some(node_id) = types.get(0).map(|t| t.node.id()) else {
            return SumType::empty();
        };
        if let Some(existing) = self.types.get(&node_id) {
            return existing.clone();
        }
        let mut result_types = vec![];
        for ast_type in types {
            let Some(t) = self.bind_ref_type(context, ast_type) else {
                continue;
            };
            if result_types.iter().find(|v| *v == &t).is_none() {
                result_types.push(t.clone());
            } else {
                self.errors.push(LangError::type_error(
                    &ast_type.node,
                    format!("Duplicated type: {:?}", t),
                ))
            }
        }

        let result_types = SumType::new(result_types);
        let existing = self.types.insert(node_id, result_types.clone());
        assert!(existing.is_none());

        // Add sum type
        if result_types.len() > 1 {
            self.sum_types
                .insert(result_types.sum_type_name(), result_types.clone());
        }
        // Add sum type if type is an Either type
        if let Some((value, err)) = result_types.as_either() {
            if value.len() > 1 {
                self.sum_types.insert(value.sum_type_name(), value);
            }
            if err.len() > 1 {
                self.sum_types.insert(err.sum_type_name(), err);
            }
        }

        result_types
    }

    /// Bind a string identifier to the actual type
    pub(crate) fn lookup_type_identifier(
        &mut self,
        context: &TypeQueryContext,
        node: &NodeData,
        identifier: &String,
    ) -> Option<TypeBinding> {
        match context {
            TypeQueryContext::Struct(struct_def) => {
                if let Some(type_params) = struct_def.type_params.as_ref() {
                    for arg in type_params {
                        if &arg.identifier == identifier {
                            let binding = Some(TypeBinding::StructTypeArgument(arg.clone()));

                            return binding;
                        }
                    }
                }
            }
            TypeQueryContext::Function(_) => {}
            TypeQueryContext::StructMethodReceiver => {}
            TypeQueryContext::Parameter => {}
            TypeQueryContext::Root => {}
        }

        if let Some(struct_def) = self.lookup_struct(identifier) {
            return Some(TypeBinding::Struct(struct_def));
        };

        if let Some(interface) = self.lookup_interface(identifier) {
            return Some(TypeBinding::Interface(interface));
        }

        self.errors.push(LangError::type_error(
            node,
            format!("Can't resolve type identifier: {:?}", identifier),
        ));
        return None;
    }

    pub(crate) fn lookup_struct(&mut self, identifier: &String) -> Option<Ptr<Struct>> {
        let content = self.query_package_content();
        if let Some(struct_def) = content.structs.get(identifier) {
            return Some(struct_def.clone());
        };

        for import in &content.imports {
            match &import.name {
                ImportName::Dot => {}
                _ => continue,
            };
            let Some(dependency) = self.dependencies.get(&import.path) else {
                continue;
            };
            if let Some(struct_def) = dependency.structs.get(identifier) {
                return Some(struct_def.clone());
            };
        }

        None
    }

    pub(crate) fn lookup_interface(&mut self, identifier: &String) -> Option<Ptr<Interface>> {
        let content = self.query_package_content();
        if let Some(interface) = content.interfaces.get(identifier) {
            return Some(interface.clone());
        };

        for import in &content.imports {
            match &import.name {
                ImportName::Dot => {}
                _ => continue,
            };
            let Some(dependency) = self.dependencies.get(&import.path) else {
                continue;
            };
            if let Some(interface) = dependency.interfaces.get(identifier) {
                return Some(interface.clone());
            };
        }

        None
    }

    pub fn query_parameter_type(
        &mut self,
        signature: &FunctionSignature,
        param: &Parameter,
    ) -> Option<SumType> {
        let Some(node_id) = param.types.get(0).map(|t| t.node.id()) else {
            return None;
        };
        if let Some(s) = self.types.get(&node_id) {
            return Some(s.clone());
        }

        Some(self.query_types(&TypeQueryContext::Function(signature.clone()), &param.types))
    }

    pub fn query_return_type(&mut self, signature: &FunctionSignature) -> Option<SumType> {
        let Some(return_type) = &signature.return_type else {
            return None;
        };
        let Some(node_id) = return_type.types.get(0).map(|t| t.node.id()) else {
            return None;
        };
        if let Some(s) = self.types.get(&node_id) {
            return Some(s.clone());
        }

        Some(self.query_types(
            &TypeQueryContext::Function(signature.clone()),
            &return_type.types,
        ))
    }

    pub fn query_field_type(&mut self, st: &Ptr<Struct>, field: &Field) -> Option<SumType> {
        let Some(node_id) = field.types.get(0).map(|t| t.node.id()) else {
            return None;
        };
        if let Some(s) = self.types.get(&node_id) {
            return Some(s.clone());
        }

        Some(self.query_types(&TypeQueryContext::Struct(st.clone()), &field.types))
    }

    /// Queries the interfaces a certain type implements
    pub fn query_type_interfaces(&mut self, t: &Type) -> Vec<SInterface> {
        match t {
            Type::Null => base_type_interfaces(),
            Type::Str => vec![],
            Type::String => base_type_interfaces(),
            Type::Bool => base_type_interfaces(),
            Type::U8 => base_type_interfaces(),
            Type::I8 => base_type_interfaces(),
            Type::U32 => base_type_interfaces(),
            Type::I32 => base_type_interfaces(),
            Type::Array(_) => vec![],
            Type::Slice(_) => vec![],
            Type::Unresolved(types) => {
                let is_copy = types.iter().all(|it| {
                    self.query_type_interfaces(it)
                        .iter()
                        .any(|it| it.name == COPY_INTERFACE_NAME)
                });
                if is_copy {
                    vec![SInterface {
                        name: COPY_INTERFACE_NAME.to_string(),
                    }]
                } else {
                    vec![]
                }
            }
            Type::RefType(_) => vec![],
            Type::Either(_, _) => vec![],
            Type::Struct(st) => {
                let package = self.query_package_content();
                for (_, implements) in &package.struct_impls {
                    let Some(found_struct) = package.structs.get(&st.name) else {
                        continue;
                    };
                    if found_struct != st {
                        continue;
                    }
                    return implements
                        .iter()
                        .filter_map(|implement| {
                            let interface = self
                                .lookup_type_identifier(
                                    &TypeQueryContext::Root,
                                    &implement.node,
                                    &implement.interface.identifier,
                                )
                                .and_then(|binding| match binding {
                                    TypeBinding::Struct(_) => {
                                        self.errors.push(LangError::type_error(
                                            &implement.node,
                                            "Interface expected but found type struct".to_string(),
                                        ));
                                        None
                                    }
                                    TypeBinding::StructTypeArgument(_) => {
                                        self.errors.push(LangError::type_error(
                                            &implement.node,
                                            "Interface expected but found type argument"
                                                .to_string(),
                                        ));
                                        None
                                    }
                                    TypeBinding::Interface(interface) => Some(SInterface {
                                        name: interface.name.clone(),
                                    }),
                                });
                            interface
                        })
                        .collect();
                }
                vec![]
            }
            Type::StructTypeArgument(_) => vec![],
            Type::Interface(_) => vec![],
            Type::Closure(_) => vec![],
            Type::Package(_) => vec![],
        }
    }

    /// node_id is the node id of the identifier expression
    pub fn query_identifier(
        &mut self,
        block: &Block,
        node_id: NodeId,
    ) -> Option<ExpressionSemantics> {
        if let Some(s) = self.expressions.get(&node_id) {
            return Some(s.clone());
        }

        self.query_fun(&block.fun());

        self.expressions.get(&node_id).map(|s| s.clone())
    }

    pub fn query_function_call(
        &mut self,
        block: &Block,
        call: &FunctionCall,
    ) -> Option<FunctionCallSemantics> {
        if let Some(s) = self.function_calls.get(&call.node.id()) {
            return Some(s.clone());
        }

        self.query_fun(&block.fun());

        self.function_calls.get(&call.node.id()).map(|s| s.clone())
    }

    pub fn query_method_call(
        &mut self,
        block: &Block,
        call: &FunctionCall,
    ) -> Option<MethodCallSemantics> {
        if let Some(s) = self.method_calls.get(&call.node.id()) {
            return Some(s.clone());
        }

        self.query_fun(&block.fun());

        self.method_calls.get(&call.node.id()).map(|s| s.clone())
    }

    /// Query the root selector expression
    pub fn query_selector(
        &mut self,
        block: &Block,
        select: &SelectorExpression,
    ) -> Option<SelectorFieldSemantics> {
        if let Some(s) = self.selector_fields.get(&select.root.node.id()) {
            return Some(s.clone());
        }

        self.query_fun(&block.fun());

        self.selector_fields
            .get(&select.root.node.id())
            .map(|s| s.clone())
    }

    pub fn query_selector_field(
        &mut self,
        block: &Block,
        field: &SelectorField,
    ) -> Option<SelectorFieldSemantics> {
        if let Some(s) = self.selector_fields.get(&field.node.id()) {
            return Some(s.clone());
        }

        self.query_fun(&block.fun());

        self.selector_fields
            .get(&field.node.id())
            .map(|s| s.clone())
    }

    pub fn query_struct_field_initializer(
        &mut self,
        block: &Block,
        field: &StructFieldInitialization,
    ) -> Option<Field> {
        if let Some(f) = self.struct_field_inits.get(&field.node.id()) {
            return Some(f.clone());
        }

        self.query_fun(&block.fun());

        self.struct_field_inits
            .get(&field.node.id())
            .map(|f| f.clone())
    }

    /// Either the resolved types or the declared type
    pub fn query_var_types(
        &mut self,
        context: &TypeQueryContext,
        var_declaration: &Ptr<VarDeclaration>,
    ) -> SumType {
        match self
            .variable_declarations
            .get(&var_declaration.node.id())
            .map(|s| s.inferred_types.as_ref())
            .flatten()
        {
            Some(inferred_types) => inferred_types.clone(),
            None => var_declaration
                .types
                .as_ref()
                .map(|types| self.query_types(context, types))
                .unwrap_or(SumType::empty()),
        }
    }

    pub fn query_pipe_expression(
        &mut self,
        block: &Block,
        node: &NodeData,
    ) -> Option<PipeSemantics> {
        if let Some(f) = self.pipe_expressions.get(&node.id()) {
            return Some(f.clone());
        }

        self.query_fun(&block.fun());

        self.pipe_expressions.get(&node.id()).map(|s| s.clone())
    }

    pub fn query_usage(&mut self, node_id: NodeId) -> Vec<NodeData> {
        // validate whole package
        // TODO this can be optimized, e.g. when in a block it might be enough to just validate the block
        self.query_all();

        self.usages
            .get(&node_id)
            .map(|it| it.clone())
            .unwrap_or_default()
    }

    /// If a variable type narrowed down the type of an expression, back propagated this up to previous usage.
    pub(crate) fn back_propagate_types(
        &mut self,
        block: &Block,
        expression: &Expression,
        types: &SumType,
    ) {
        match &expression.r#type {
            ExpressionType::Identifier(_) => {
                let Some(id) = self.expressions.get(&expression.node.id()).map(|s|s.binding.clone()).flatten()  else {return};
                match id {
                    IdentifierBinding::VarDeclaration(var_declaration) => {
                        // narrow the expression down
                        self.narrow_expression_type(block, expression, types);

                        // find identifier and continue there
                        let var_types = self.query_var_types(
                            &TypeQueryContext::from_block(block),
                            &var_declaration,
                        );
                        let Some(inter) = intersection(types, &var_types) else {
                            return;
                        };
                        // update inferred_types types (if var didn't had any types declared)
                        if var_declaration.types.is_none() {
                            let entry = self
                                .variable_declarations
                                .entry(var_declaration.node.id())
                                .or_insert(VarDeclarationSemantics {
                                    inferred_types: None,
                                    value_origin: vec![],
                                });
                            entry.inferred_types = Some(inter);
                        }

                        // follow the back propagation further
                        self.back_propagate_types(block, &var_declaration.value, types);
                    }
                    IdentifierBinding::Parameter(_) => {}
                    IdentifierBinding::PipeArg(_) => {}
                    IdentifierBinding::Package(_) => {}
                }
            }
            ExpressionType::UnaryExpression(expr) => match expr.operand.r#type {
                ExpressionType::IntLiteral(_) => {
                    // narrow the unary expression and not the "base" expression (see validate_expression)
                    self.narrow_expression_type(block, expression, types);
                }
                _ => self.back_propagate_types(block, &expr.operand, types),
            },
            ExpressionType::BinaryExpression(expr) => {
                self.back_propagate_types(block, &expr.left, types);
                self.back_propagate_types(block, &expr.right, types);
            }
            ExpressionType::ParenthesizedExpression(expr) => {
                self.back_propagate_types(block, &expr.expression, types)
            }
            ExpressionType::IntLiteral(_) => {
                self.narrow_expression_type(block, expression, types);
            }
            ExpressionType::Null => {}
            ExpressionType::Bool(_) => {}
            ExpressionType::ArrayExpression(_) => {}
            ExpressionType::SliceExpression(_) => {}
            ExpressionType::FunctionCall(_) => {}
            ExpressionType::String(_) => {}
            ExpressionType::StructInitialization(_) => {}
            ExpressionType::SelectorExpression(_) => {}
            ExpressionType::Block(expr_block) => {
                self.narrow_expression_type(block, expression, types);

                if let Some(block_return) =
                    self.query_block(expr_block).and_then(|s| s.block_return)
                {
                    self.back_propagate_types(block, &block_return, types)
                }
            }
            ExpressionType::If(if_expression) => {
                let resolved_types = match self
                    .query_expression(block, expression)
                    .and_then(|s| s.resolved_types)
                    .and_then(|resolved_types| intersection(types, &resolved_types))
                {
                    Some(resolved_types) => resolved_types,
                    None => types.clone(),
                };
                let entry = self
                    .expressions
                    .entry(expression.node.id())
                    .or_insert(ExpressionSemantics::empty());
                entry.resolved_types = Some(resolved_types);

                self.back_propagate_types_in_if_expr_blocks(if_expression, types);
            }
            ExpressionType::ErrorExpression(_) => {
                self.narrow_expression_type(block, &expression, types);
            }
            ExpressionType::Pipe(_) => {}
            ExpressionType::ReturnErrorPipe(_) => {}
            ExpressionType::EitherCheck(_) => {}
        }
    }

    /// Gets the expression type and narrows it down
    fn narrow_expression_type(&mut self, block: &Block, expression: &Expression, types: &SumType) {
        let resolved_types = match self
            .query_expression(block, expression)
            .and_then(|s| s.resolved_types)
            .and_then(|resolved_types| {
                if resolved_types.as_either().is_some() {
                    return intersection(types, &resolved_types);
                }
                if let Some((value, _)) = types.as_either() {
                    // e.g. resolved = 8 && types = i32 | string ? bool
                    return intersection(&value, &resolved_types);
                }
                intersection(types, &resolved_types)
            }) {
            Some(resolved_types) => resolved_types,
            None => return,
        };
        let entry = self
            .expressions
            .entry(expression.node.id())
            .or_insert(ExpressionSemantics::empty());
        entry.resolved_types = Some(resolved_types);
    }

    fn back_propagate_types_in_if_expr_blocks(
        &mut self,
        if_expression: &Ptr<IfExpression>,
        types: &SumType,
    ) {
        if let Some(block_return) = self
            .query_block(&if_expression.consequence)
            .and_then(|s| s.block_return)
        {
            self.back_propagate_types(&if_expression.consequence, &block_return, types)
        }
        if let Some(alternative) = &if_expression.alternative {
            match alternative {
                IfAlternative::Else(block) => {
                    if let Some(block_return) = self.query_block(block).and_then(|s| s.block_return)
                    {
                        self.back_propagate_types(block, &block_return, types)
                    }
                }
                IfAlternative::If(if_expression) => {
                    self.back_propagate_types_in_if_expr_blocks(if_expression, types)
                }
            }
        }
    }

    /// Looks up an identifier from with in a function
    pub(crate) fn lookup_identifier(
        &mut self,
        context: &ExpContext,
        identifier: &String,
    ) -> Option<IdentifierBinding> {
        // pipe argument
        if identifier == "$" {
            if let Some(pipe_arg) = &context.pipe_arg {
                return Some(IdentifierBinding::PipeArg(pipe_arg.clone()));
            } else {
                return None;
            }
        }

        // block variable
        let mut current: Option<Ptr<Block>> = None;
        loop {
            let b = match &current {
                Some(current) => &current,
                None => &context.block,
            };
            let var = self
                .blocks
                .get(&b.node.id())
                .map(|s| s.vars.get(identifier))
                .flatten();
            if let Some(var) = var {
                return Some(IdentifierBinding::VarDeclaration(var.clone()));
            }

            match &b.parent {
                BlockParent::Function(fun) => {
                    if let Some(param) = (&fun.signature.parameters)
                        .into_iter()
                        .find(|it| &it.name == identifier)
                    {
                        return Some(IdentifierBinding::Parameter(param.clone()));
                    } else {
                        break;
                    }
                }
                BlockParent::Block(block) => {
                    current = Some(block.clone());
                }
            }
        }

        // package
        let content = self.query_package_content();
        for import in &content.imports {
            match &import.name {
                ast::ImportName::Package => {
                    let path = &import.path;
                    let Some(package_name) = path.last() else {
                        return None;
                    };
                    if &package_name == &identifier {
                        return Some(IdentifierBinding::Package(path.clone()));
                    }
                }
                ast::ImportName::Dot => continue,
                ast::ImportName::Alias(name) => {
                    if identifier == name {
                        return Some(IdentifierBinding::Package(import.path.clone()));
                    }
                }
            }
        }

        return None;
    }

    fn bind_fun_call_usage(&mut self, call_name_node: &NodeData, binding: &FunctionCallBinding) {
        let id = match binding {
            FunctionCallBinding::Function(fun) => fun.signature.name_node.id(),
            FunctionCallBinding::Buildin(_) => return,
        };
        let references = self.usages.entry(id).or_default();
        assert!(!references.contains(call_name_node));
        references.push(call_name_node.clone());
    }

    fn validate_call_parameters(
        &mut self,
        call: &FunctionCall,
        binding: &FunctionCallBinding,
        flow: &mut AnalysisState,
        context: &ExpContext,
    ) {
        let signature = binding.as_function_signature();
        if call.arguments.len() != signature.parameters.len() {
            self.errors.push(LangError::type_error(
                &call.node,
                format!(
                    "Expected {} arguments but got {}",
                    signature.parameters.len(),
                    call.arguments.len()
                ),
            ));
        }
        for (arg_expr, param) in call.arguments.iter().zip(signature.parameters.iter()) {
            let arg_sem = self.validate_expression(flow, context, arg_expr, false);
            let arg_types = arg_sem.into_types().unwrap_or(SumType::new(vec![]));

            let Some(param_types) = self.query_parameter_type(signature, param) else {
                continue;
            };
            let Some(overlap) = intersection(&param_types, &arg_types ) else {
                self.errors.push(LangError::type_error(
                    &arg_expr.node,
                    format!(
                        "Incompatible parameter type. Expected {} but got {}",
                        types_to_string(&param_types.types()),
                        types_to_string(&arg_types.types()),
                    ),
                ));
                return;
            };
            self.back_propagate_types(&context.block, arg_expr, &overlap);
        }
    }

    pub(crate) fn validate_pkg_fun_call(
        &mut self,
        call: &FunctionCall,
        pkg: &PackageContentSemantics,
        flow: &mut AnalysisState,
        context: &ExpContext,
    ) -> Option<Ptr<Function>> {
        let fun = pkg.functions.get(&call.name).map(|f| f.clone());
        let binding = fun
            .as_ref()
            .map(|fun| FunctionCallBinding::Function(fun.clone()));
        if let Some(binding) = binding.as_ref() {
            self.validate_call_parameters(call, binding, flow, context);
            self.bind_fun_call_usage(&call.name_node.clone(), binding);
        }

        let semantics = FunctionCallSemantics { binding };
        let existing = self
            .function_calls
            .insert(call.node.id(), semantics.clone());
        assert!(existing.is_none());

        fun
    }

    pub(crate) fn validate_fun_call(
        &mut self,
        call: &FunctionCall,
        flow: &mut AnalysisState,
        context: &ExpContext,
    ) -> FunctionCallSemantics {
        let binding = self.lookup_function_declaration(call);

        if let Some(binding) = binding.as_ref() {
            self.validate_call_parameters(call, binding, flow, context);
            self.bind_fun_call_usage(&call.name_node.clone(), binding);
        }

        let semantics = FunctionCallSemantics { binding };
        let existing = self
            .function_calls
            .insert(call.node.id(), semantics.clone());
        assert!(existing.is_none());

        semantics
    }

    fn lookup_function_declaration(&mut self, call: &FunctionCall) -> Option<FunctionCallBinding> {
        let package = self.query_package_content();
        if let Some(fun) = package.functions.get(&call.name) {
            return Some(FunctionCallBinding::Function(fun.clone()));
        }

        let content = self.query_package_content();
        for import in &content.imports {
            // only look in dot imports
            let ImportName::Dot = import.name else {
                continue;
            };

            let Some(dependency) = self.dependencies.get(&import.path) else {
                continue;
            };
            if let Some(fun) = dependency.functions.get(&call.name) {
                return Some(FunctionCallBinding::Function(fun.clone()));
            }
        }

        let buildins = Buildins::new();
        match buildins.functions.get(&call.name) {
            Some(fun_declaration) => {
                let binding = FunctionCallBinding::Buildin(fun_declaration.clone());
                Some(binding)
            }

            None => None,
        }
    }

    pub(crate) fn validate_method_call(
        &mut self,
        receiver: &Ptr<Struct>,
        call: &FunctionCall,
        flow: &mut AnalysisState,
        context: &ExpContext,
    ) -> MethodCallSemantics {
        let binding = self.lookup_struct_method(receiver, call);

        if let Some(fun) = binding.as_ref() {
            let binding = &FunctionCallBinding::Function(fun.clone());
            self.validate_call_parameters(call, binding, flow, context);
            self.bind_fun_call_usage(&call.name_node.clone(), binding);
        }

        let semantics = MethodCallSemantics { binding };
        let existing = self.method_calls.insert(call.node.id(), semantics.clone());
        assert!(existing.is_none());
        semantics
    }

    fn lookup_struct_method(
        &mut self,
        receiver: &Ptr<Struct>,
        call: &FunctionCall,
    ) -> Option<Ptr<Function>> {
        let Some(methods) = self.package_semantics.as_ref().map(|s|s.methods.clone()) else {
            return None;
        };
        for method in &methods {
            if method.signature.name != call.name {
                continue;
            }
            let Some(method_receiver) = &method.signature.receiver else {
                // should not happen!
                continue;
            };
            let Some(receiver_type) = self.bind_ref_type(&TypeQueryContext::StructMethodReceiver, &method_receiver.types[0]) else {
                continue;
            };

            let base_receiver_type = match receiver_type {
                Type::RefType(ref_type) => ref_type.r#type.as_ref().clone(),
                _ => receiver_type,
            };

            match base_receiver_type {
                Type::Struct(current) => {
                    if current.name == receiver.name {
                        return Some(method.clone());
                    }
                }
                _ => continue,
            }
        }
        return None;
    }
}

const COPY_INTERFACE_NAME: &str = "Copy";
fn base_type_interfaces() -> Vec<SInterface> {
    vec![SInterface {
        name: COPY_INTERFACE_NAME.to_string(),
    }]
}
