#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 325
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 125
#define ALIAS_COUNT 0
#define TOKEN_COUNT 70
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 35
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 60

enum {
  sym_identifier = 1,
  anon_sym_LF = 2,
  anon_sym_fun = 3,
  anon_sym_COMMA = 4,
  anon_sym_mut = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_AMP = 8,
  anon_sym_PIPE = 9,
  anon_sym_null = 10,
  anon_sym_bool = 11,
  anon_sym_i8 = 12,
  anon_sym_u8 = 13,
  anon_sym_i16 = 14,
  anon_sym_u16 = 15,
  anon_sym_i32 = 16,
  anon_sym_u32 = 17,
  anon_sym_i64 = 18,
  anon_sym_u64 = 19,
  anon_sym_f32 = 20,
  anon_sym_f64 = 21,
  anon_sym_str = 22,
  anon_sym_string = 23,
  anon_sym_void = 24,
  anon_sym_LBRACK = 25,
  anon_sym_RBRACK = 26,
  anon_sym_COLON = 27,
  anon_sym_DOT = 28,
  anon_sym_QMARK_DOT = 29,
  anon_sym_LBRACE = 30,
  anon_sym_RBRACE = 31,
  anon_sym_return = 32,
  anon_sym__ = 33,
  anon_sym_throw = 34,
  anon_sym_catch = 35,
  anon_sym_var = 36,
  anon_sym_EQ = 37,
  anon_sym_DASH = 38,
  anon_sym_BANG = 39,
  anon_sym_typeof = 40,
  anon_sym_STAR = 41,
  anon_sym_SLASH = 42,
  anon_sym_PERCENT = 43,
  anon_sym_LT_LT = 44,
  anon_sym_GT_GT = 45,
  anon_sym_AMP_CARET = 46,
  anon_sym_PLUS = 47,
  anon_sym_CARET = 48,
  anon_sym_EQ_EQ = 49,
  anon_sym_BANG_EQ = 50,
  anon_sym_LT = 51,
  anon_sym_LT_EQ = 52,
  anon_sym_GT = 53,
  anon_sym_GT_EQ = 54,
  anon_sym_AMP_AMP = 55,
  anon_sym_PIPE_PIPE = 56,
  anon_sym_DQUOTE = 57,
  aux_sym_interpreted_string_literal_token1 = 58,
  anon_sym_if = 59,
  anon_sym_else = 60,
  anon_sym_struct = 61,
  anon_sym_interface = 62,
  anon_sym_self = 63,
  sym_escape_sequence = 64,
  sym_int_literal = 65,
  sym_float_literal = 66,
  sym_true = 67,
  sym_false = 68,
  sym_comment = 69,
  sym_source_file = 70,
  sym__definition = 71,
  sym_function_definition = 72,
  sym_parameter = 73,
  sym_parameter_list = 74,
  sym_reference_type = 75,
  sym__type = 76,
  sym_sum_type = 77,
  sym_parenthesized_type = 78,
  sym_primitive_type = 79,
  sym_array_type = 80,
  sym_slice_type = 81,
  sym_array_expression = 82,
  sym_slice_expression = 83,
  sym_selector_field = 84,
  sym_selector_expression = 85,
  sym_block = 86,
  sym__statement_list = 87,
  sym__statement = 88,
  sym_expression_statement = 89,
  sym_return_statement = 90,
  sym_error_expression = 91,
  sym_throw_statement = 92,
  sym_catch_block = 93,
  sym_function_call = 94,
  sym_var_declaration = 95,
  sym__expression = 96,
  sym_parenthesized_expression = 97,
  sym_unary_expression = 98,
  sym_binary_expression = 99,
  sym_argument_list = 100,
  sym_interpreted_string_literal = 101,
  sym_embetted_expr = 102,
  sym_if_statement = 103,
  sym_struct_definition = 104,
  sym_field_definition_list = 105,
  sym_field_definition = 106,
  sym_interface_definition = 107,
  sym__interface_body = 108,
  sym_method_spec = 109,
  sym_self_parameter_list = 110,
  sym_self_parameter = 111,
  sym_keyed_element = 112,
  sym_struct_initialization = 113,
  sym_null = 114,
  aux_sym_source_file_repeat1 = 115,
  aux_sym_parameter_list_repeat1 = 116,
  aux_sym_array_expression_repeat1 = 117,
  aux_sym_selector_expression_repeat1 = 118,
  aux_sym__statement_list_repeat1 = 119,
  aux_sym_argument_list_repeat1 = 120,
  aux_sym_interpreted_string_literal_repeat1 = 121,
  aux_sym_field_definition_list_repeat1 = 122,
  aux_sym_interface_definition_repeat1 = 123,
  aux_sym_struct_initialization_repeat1 = 124,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LF] = "\n",
  [anon_sym_fun] = "fun",
  [anon_sym_COMMA] = ",",
  [anon_sym_mut] = "mut",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_null] = "null",
  [anon_sym_bool] = "bool",
  [anon_sym_i8] = "i8",
  [anon_sym_u8] = "u8",
  [anon_sym_i16] = "i16",
  [anon_sym_u16] = "u16",
  [anon_sym_i32] = "i32",
  [anon_sym_u32] = "u32",
  [anon_sym_i64] = "i64",
  [anon_sym_u64] = "u64",
  [anon_sym_f32] = "f32",
  [anon_sym_f64] = "f64",
  [anon_sym_str] = "str",
  [anon_sym_string] = "string",
  [anon_sym_void] = "void",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [anon_sym_DOT] = ".",
  [anon_sym_QMARK_DOT] = "\?.",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_return] = "return",
  [anon_sym__] = "_",
  [anon_sym_throw] = "throw",
  [anon_sym_catch] = "catch",
  [anon_sym_var] = "var",
  [anon_sym_EQ] = "=",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_typeof] = "typeof",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_AMP_CARET] = "&^",
  [anon_sym_PLUS] = "+",
  [anon_sym_CARET] = "^",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_interpreted_string_literal_token1] = "interpreted_string_literal_token1",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_struct] = "struct",
  [anon_sym_interface] = "interface",
  [anon_sym_self] = "self",
  [sym_escape_sequence] = "escape_sequence",
  [sym_int_literal] = "int_literal",
  [sym_float_literal] = "float_literal",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_function_definition] = "function_definition",
  [sym_parameter] = "parameter",
  [sym_parameter_list] = "parameter_list",
  [sym_reference_type] = "reference_type",
  [sym__type] = "_type",
  [sym_sum_type] = "sum_type",
  [sym_parenthesized_type] = "parenthesized_type",
  [sym_primitive_type] = "primitive_type",
  [sym_array_type] = "array_type",
  [sym_slice_type] = "slice_type",
  [sym_array_expression] = "array_expression",
  [sym_slice_expression] = "slice_expression",
  [sym_selector_field] = "selector_field",
  [sym_selector_expression] = "selector_expression",
  [sym_block] = "block",
  [sym__statement_list] = "_statement_list",
  [sym__statement] = "_statement",
  [sym_expression_statement] = "expression_statement",
  [sym_return_statement] = "return_statement",
  [sym_error_expression] = "error_expression",
  [sym_throw_statement] = "throw_statement",
  [sym_catch_block] = "catch_block",
  [sym_function_call] = "function_call",
  [sym_var_declaration] = "var_declaration",
  [sym__expression] = "_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_argument_list] = "argument_list",
  [sym_interpreted_string_literal] = "interpreted_string_literal",
  [sym_embetted_expr] = "embetted_expr",
  [sym_if_statement] = "if_statement",
  [sym_struct_definition] = "struct_definition",
  [sym_field_definition_list] = "field_definition_list",
  [sym_field_definition] = "field_definition",
  [sym_interface_definition] = "interface_definition",
  [sym__interface_body] = "_interface_body",
  [sym_method_spec] = "method_spec",
  [sym_self_parameter_list] = "self_parameter_list",
  [sym_self_parameter] = "self_parameter",
  [sym_keyed_element] = "keyed_element",
  [sym_struct_initialization] = "struct_initialization",
  [sym_null] = "null",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_array_expression_repeat1] = "array_expression_repeat1",
  [aux_sym_selector_expression_repeat1] = "selector_expression_repeat1",
  [aux_sym__statement_list_repeat1] = "_statement_list_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_interpreted_string_literal_repeat1] = "interpreted_string_literal_repeat1",
  [aux_sym_field_definition_list_repeat1] = "field_definition_list_repeat1",
  [aux_sym_interface_definition_repeat1] = "interface_definition_repeat1",
  [aux_sym_struct_initialization_repeat1] = "struct_initialization_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_fun] = anon_sym_fun,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_mut] = anon_sym_mut,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_i8] = anon_sym_i8,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_i16] = anon_sym_i16,
  [anon_sym_u16] = anon_sym_u16,
  [anon_sym_i32] = anon_sym_i32,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_i64] = anon_sym_i64,
  [anon_sym_u64] = anon_sym_u64,
  [anon_sym_f32] = anon_sym_f32,
  [anon_sym_f64] = anon_sym_f64,
  [anon_sym_str] = anon_sym_str,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_QMARK_DOT] = anon_sym_QMARK_DOT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_return] = anon_sym_return,
  [anon_sym__] = anon_sym__,
  [anon_sym_throw] = anon_sym_throw,
  [anon_sym_catch] = anon_sym_catch,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_typeof] = anon_sym_typeof,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_AMP_CARET] = anon_sym_AMP_CARET,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_interpreted_string_literal_token1] = aux_sym_interpreted_string_literal_token1,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_self] = anon_sym_self,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_int_literal] = sym_int_literal,
  [sym_float_literal] = sym_float_literal,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_function_definition] = sym_function_definition,
  [sym_parameter] = sym_parameter,
  [sym_parameter_list] = sym_parameter_list,
  [sym_reference_type] = sym_reference_type,
  [sym__type] = sym__type,
  [sym_sum_type] = sym_sum_type,
  [sym_parenthesized_type] = sym_parenthesized_type,
  [sym_primitive_type] = sym_primitive_type,
  [sym_array_type] = sym_array_type,
  [sym_slice_type] = sym_slice_type,
  [sym_array_expression] = sym_array_expression,
  [sym_slice_expression] = sym_slice_expression,
  [sym_selector_field] = sym_selector_field,
  [sym_selector_expression] = sym_selector_expression,
  [sym_block] = sym_block,
  [sym__statement_list] = sym__statement_list,
  [sym__statement] = sym__statement,
  [sym_expression_statement] = sym_expression_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_error_expression] = sym_error_expression,
  [sym_throw_statement] = sym_throw_statement,
  [sym_catch_block] = sym_catch_block,
  [sym_function_call] = sym_function_call,
  [sym_var_declaration] = sym_var_declaration,
  [sym__expression] = sym__expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_argument_list] = sym_argument_list,
  [sym_interpreted_string_literal] = sym_interpreted_string_literal,
  [sym_embetted_expr] = sym_embetted_expr,
  [sym_if_statement] = sym_if_statement,
  [sym_struct_definition] = sym_struct_definition,
  [sym_field_definition_list] = sym_field_definition_list,
  [sym_field_definition] = sym_field_definition,
  [sym_interface_definition] = sym_interface_definition,
  [sym__interface_body] = sym__interface_body,
  [sym_method_spec] = sym_method_spec,
  [sym_self_parameter_list] = sym_self_parameter_list,
  [sym_self_parameter] = sym_self_parameter,
  [sym_keyed_element] = sym_keyed_element,
  [sym_struct_initialization] = sym_struct_initialization,
  [sym_null] = sym_null,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_array_expression_repeat1] = aux_sym_array_expression_repeat1,
  [aux_sym_selector_expression_repeat1] = aux_sym_selector_expression_repeat1,
  [aux_sym__statement_list_repeat1] = aux_sym__statement_list_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_interpreted_string_literal_repeat1] = aux_sym_interpreted_string_literal_repeat1,
  [aux_sym_field_definition_list_repeat1] = aux_sym_field_definition_list_repeat1,
  [aux_sym_interface_definition_repeat1] = aux_sym_interface_definition_repeat1,
  [aux_sym_struct_initialization_repeat1] = aux_sym_struct_initialization_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mut] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_str] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_throw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_catch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typeof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_interpreted_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_self] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_int_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_reference_type] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_sum_type] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_type] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_slice_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_slice_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_field] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_list] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_error_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_throw_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_catch_block] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_var_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_interpreted_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_embetted_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_field_definition_list] = {
    .visible = true,
    .named = true,
  },
  [sym_field_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__interface_body] = {
    .visible = false,
    .named = true,
  },
  [sym_method_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_self_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_self_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_keyed_element] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_initialization] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_selector_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__statement_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interpreted_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_definition_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interface_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_initialization_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alternative = 1,
  field_argument = 2,
  field_arguments = 3,
  field_block = 4,
  field_body = 5,
  field_catch = 6,
  field_chaining = 7,
  field_condition = 8,
  field_consequence = 9,
  field_element = 10,
  field_embetted_expr = 11,
  field_end = 12,
  field_error = 13,
  field_expression = 14,
  field_field = 15,
  field_field_init = 16,
  field_fields = 17,
  field_function = 18,
  field_left = 19,
  field_length = 20,
  field_mut_reference = 21,
  field_mutable = 22,
  field_name = 23,
  field_operand = 24,
  field_operator = 25,
  field_parameters = 26,
  field_reference = 27,
  field_result = 28,
  field_right = 29,
  field_selector_field = 30,
  field_self = 31,
  field_start = 32,
  field_type = 33,
  field_value = 34,
  field_variable = 35,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_argument] = "argument",
  [field_arguments] = "arguments",
  [field_block] = "block",
  [field_body] = "body",
  [field_catch] = "catch",
  [field_chaining] = "chaining",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_element] = "element",
  [field_embetted_expr] = "embetted_expr",
  [field_end] = "end",
  [field_error] = "error",
  [field_expression] = "expression",
  [field_field] = "field",
  [field_field_init] = "field_init",
  [field_fields] = "fields",
  [field_function] = "function",
  [field_left] = "left",
  [field_length] = "length",
  [field_mut_reference] = "mut_reference",
  [field_mutable] = "mutable",
  [field_name] = "name",
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_parameters] = "parameters",
  [field_reference] = "reference",
  [field_result] = "result",
  [field_right] = "right",
  [field_selector_field] = "selector_field",
  [field_self] = "self",
  [field_start] = "start",
  [field_type] = "type",
  [field_value] = "value",
  [field_variable] = "variable",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
  [3] = {.index = 5, .length = 1},
  [4] = {.index = 6, .length = 2},
  [5] = {.index = 8, .length = 2},
  [6] = {.index = 10, .length = 1},
  [7] = {.index = 11, .length = 4},
  [8] = {.index = 15, .length = 1},
  [9] = {.index = 16, .length = 2},
  [10] = {.index = 18, .length = 3},
  [11] = {.index = 21, .length = 1},
  [12] = {.index = 22, .length = 2},
  [13] = {.index = 24, .length = 1},
  [14] = {.index = 25, .length = 1},
  [15] = {.index = 26, .length = 1},
  [16] = {.index = 27, .length = 2},
  [17] = {.index = 29, .length = 2},
  [18] = {.index = 31, .length = 2},
  [19] = {.index = 33, .length = 1},
  [20] = {.index = 34, .length = 2},
  [21] = {.index = 36, .length = 2},
  [22] = {.index = 38, .length = 1},
  [23] = {.index = 39, .length = 3},
  [24] = {.index = 42, .length = 3},
  [25] = {.index = 45, .length = 1},
  [26] = {.index = 46, .length = 1},
  [27] = {.index = 47, .length = 2},
  [28] = {.index = 49, .length = 2},
  [29] = {.index = 51, .length = 1},
  [30] = {.index = 52, .length = 3},
  [31] = {.index = 55, .length = 3},
  [32] = {.index = 58, .length = 2},
  [33] = {.index = 60, .length = 1},
  [34] = {.index = 61, .length = 3},
  [35] = {.index = 64, .length = 6},
  [36] = {.index = 70, .length = 2},
  [37] = {.index = 72, .length = 2},
  [38] = {.index = 74, .length = 4},
  [39] = {.index = 78, .length = 2},
  [40] = {.index = 80, .length = 2},
  [41] = {.index = 82, .length = 3},
  [42] = {.index = 85, .length = 1},
  [43] = {.index = 86, .length = 2},
  [44] = {.index = 88, .length = 1},
  [45] = {.index = 89, .length = 2},
  [46] = {.index = 91, .length = 4},
  [47] = {.index = 95, .length = 4},
  [48] = {.index = 99, .length = 3},
  [49] = {.index = 102, .length = 2},
  [50] = {.index = 104, .length = 2},
  [51] = {.index = 106, .length = 1},
  [52] = {.index = 107, .length = 2},
  [53] = {.index = 109, .length = 3},
  [54] = {.index = 112, .length = 2},
  [55] = {.index = 114, .length = 2},
  [56] = {.index = 116, .length = 2},
  [57] = {.index = 118, .length = 5},
  [58] = {.index = 123, .length = 3},
  [59] = {.index = 126, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_fields, 2},
    {field_name, 1},
  [2] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
  [5] =
    {field_name, 1},
  [6] =
    {field_name, 0},
    {field_type, 1},
  [8] =
    {field_reference, 0},
    {field_type, 1},
  [10] =
    {field_expression, 0},
  [11] =
    {field_body, 4},
    {field_name, 1},
    {field_parameters, 2},
    {field_result, 3},
  [15] =
    {field_field, 1},
  [16] =
    {field_name, 0},
    {field_parameters, 1},
  [18] =
    {field_mutable, 1},
    {field_name, 0},
    {field_type, 2},
  [21] =
    {field_type, 1},
  [22] =
    {field_operand, 1},
    {field_operator, 0},
  [24] =
    {field_expression, 1},
  [25] =
    {field_error, 1},
  [26] =
    {field_embetted_expr, 0},
  [27] =
    {field_arguments, 1},
    {field_function, 0},
  [29] =
    {field_operand, 0},
    {field_selector_field, 1},
  [31] =
    {field_left, 0},
    {field_right, 2},
  [33] =
    {field_element, 0},
  [34] =
    {field_field, 1},
    {field_field, 2, .inherited = true},
  [36] =
    {field_field, 0, .inherited = true},
    {field_field, 1, .inherited = true},
  [38] =
    {field_reference, 0},
  [39] =
    {field_name, 0},
    {field_parameters, 1},
    {field_result, 2},
  [42] =
    {field_name, 0},
    {field_parameters, 2},
    {field_self, 1},
  [45] =
    {field_error, 2},
  [46] =
    {field_embetted_expr, 1, .inherited = true},
  [47] =
    {field_embetted_expr, 0, .inherited = true},
    {field_embetted_expr, 1, .inherited = true},
  [49] =
    {field_condition, 1},
    {field_consequence, 2},
  [51] =
    {field_name, 0},
  [52] =
    {field_arguments, 1},
    {field_catch, 2},
    {field_function, 0},
  [55] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [58] =
    {field_chaining, 0},
    {field_field, 1},
  [60] =
    {field_selector_field, 0},
  [61] =
    {field_operand, 0},
    {field_selector_field, 1},
    {field_selector_field, 2, .inherited = true},
  [64] =
    {field_body, 6},
    {field_error, 5},
    {field_name, 1},
    {field_parameters, 2},
    {field_result, 3},
    {field_result, 4},
  [70] =
    {field_element, 0},
    {field_length, 2},
  [72] =
    {field_mut_reference, 0},
    {field_mut_reference, 1},
  [74] =
    {field_name, 0},
    {field_parameters, 2},
    {field_result, 3},
    {field_self, 1},
  [78] =
    {field_expression, 1},
    {field_expression, 2, .inherited = true},
  [80] =
    {field_expression, 0, .inherited = true},
    {field_expression, 1, .inherited = true},
  [82] =
    {field_name, 1},
    {field_value, 3},
    {field_variable, 0},
  [85] =
    {field_argument, 1},
  [86] =
    {field_field_init, 2},
    {field_name, 0},
  [88] =
    {field_operand, 0},
  [89] =
    {field_selector_field, 0, .inherited = true},
    {field_selector_field, 1, .inherited = true},
  [91] =
    {field_mutable, 2},
    {field_name, 1},
    {field_value, 4},
    {field_variable, 0},
  [95] =
    {field_name, 1},
    {field_type, 2},
    {field_value, 4},
    {field_variable, 0},
  [99] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequence, 2},
  [102] =
    {field_argument, 1},
    {field_argument, 2, .inherited = true},
  [104] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [106] =
    {field_field_init, 1},
  [107] =
    {field_field, 2},
    {field_name, 0},
  [109] =
    {field_field_init, 2},
    {field_field_init, 3, .inherited = true},
    {field_name, 0},
  [112] =
    {field_field_init, 0, .inherited = true},
    {field_field_init, 1, .inherited = true},
  [114] =
    {field_end, 3},
    {field_operand, 0},
  [116] =
    {field_operand, 0},
    {field_start, 2},
  [118] =
    {field_mutable, 2},
    {field_name, 1},
    {field_type, 3},
    {field_value, 5},
    {field_variable, 0},
  [123] =
    {field_end, 4},
    {field_operand, 0},
    {field_start, 2},
  [126] =
    {field_block, 4},
    {field_error, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 17,
  [19] = 19,
  [20] = 15,
  [21] = 21,
  [22] = 22,
  [23] = 16,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 24,
  [29] = 29,
  [30] = 25,
  [31] = 14,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 44,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 51,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 64,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 69,
  [72] = 64,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 51,
  [77] = 62,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 69,
  [83] = 83,
  [84] = 45,
  [85] = 85,
  [86] = 61,
  [87] = 60,
  [88] = 88,
  [89] = 62,
  [90] = 45,
  [91] = 61,
  [92] = 60,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 7,
  [98] = 98,
  [99] = 10,
  [100] = 11,
  [101] = 101,
  [102] = 12,
  [103] = 13,
  [104] = 101,
  [105] = 98,
  [106] = 8,
  [107] = 107,
  [108] = 108,
  [109] = 7,
  [110] = 27,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 73,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 117,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 48,
  [126] = 126,
  [127] = 127,
  [128] = 21,
  [129] = 29,
  [130] = 111,
  [131] = 26,
  [132] = 46,
  [133] = 43,
  [134] = 42,
  [135] = 22,
  [136] = 33,
  [137] = 137,
  [138] = 124,
  [139] = 139,
  [140] = 19,
  [141] = 32,
  [142] = 35,
  [143] = 143,
  [144] = 144,
  [145] = 70,
  [146] = 146,
  [147] = 58,
  [148] = 56,
  [149] = 38,
  [150] = 66,
  [151] = 151,
  [152] = 54,
  [153] = 59,
  [154] = 154,
  [155] = 57,
  [156] = 52,
  [157] = 39,
  [158] = 55,
  [159] = 144,
  [160] = 49,
  [161] = 161,
  [162] = 65,
  [163] = 34,
  [164] = 37,
  [165] = 143,
  [166] = 47,
  [167] = 41,
  [168] = 154,
  [169] = 74,
  [170] = 146,
  [171] = 36,
  [172] = 42,
  [173] = 161,
  [174] = 43,
  [175] = 68,
  [176] = 46,
  [177] = 48,
  [178] = 40,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 192,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 194,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 195,
  [207] = 207,
  [208] = 189,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 199,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 188,
  [217] = 202,
  [218] = 218,
  [219] = 196,
  [220] = 198,
  [221] = 221,
  [222] = 215,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 231,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 232,
  [248] = 233,
  [249] = 244,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 252,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 239,
  [268] = 234,
  [269] = 236,
  [270] = 238,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 277,
  [281] = 281,
  [282] = 271,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 288,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 299,
  [303] = 303,
  [304] = 296,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 288,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 289,
  [323] = 308,
  [324] = 297,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 6688
    ? (c < 2984
      ? (c < 2365
        ? (c < 1488
          ? (c < 886
            ? (c < 216
              ? (c < 181
                ? (c < 'a'
                  ? (c >= 'A' && c <= '_')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 192
                  ? c == 186
                  : c <= 214)))
              : (c <= 246 || (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : c <= 884)))))
            : (c <= 887 || (c < 931
              ? (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : c <= 929)))
              : (c <= 1013 || (c < 1329
                ? (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 1994
            ? (c < 1774
              ? (c < 1649
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))
              : (c <= 1775 || (c < 1810
                ? (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2112
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : c <= 2088)))
              : (c <= 2136 || (c < 2185
                ? (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2183)
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2544
            ? (c < 2474
              ? (c < 2437
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : c <= 2472)))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2654
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)
                : (c <= 2654 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2869
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2958
              ? (c < 2929
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2929 || (c < 2949
                  ? c == 2947
                  : c <= 2954)))
              : (c <= 2960 || (c < 2972
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3133
              ? (c < 3086
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)))
              : (c <= 3133 || (c < 3200
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3293
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6103
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5984
                ? (c < 5919
                  ? (c >= 5888 && c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? c == 6108
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6528
                ? (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)
                : (c <= 6571 || (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43261
      ? (c < 11264
        ? (c < 8064
          ? (c < 7406
            ? (c < 7168
              ? (c < 7043
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))
                : (c <= 7072 || (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : c <= 7141)))
              : (c <= 7203 || (c < 7312
                ? (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8008
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))
              : (c <= 8013 || (c < 8027
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8160
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))
              : (c <= 8172 || (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8490
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))
              : (c <= 8493 || (c < 8517
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8511)
                : (c <= 8521 || (c < 8579
                  ? c == 8526
                  : c <= 8580)))))))))
        : (c <= 11492 || (c < 12704
          ? (c < 11720
            ? (c < 11631
              ? (c < 11559
                ? (c < 11506
                  ? (c >= 11499 && c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11568
                  ? c == 11565
                  : c <= 11623)))
              : (c <= 11631 || (c < 11696
                ? (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : c <= 11718)))))
            : (c <= 11726 || (c < 12353
              ? (c < 12293
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || c == 11823))
                : (c <= 12294 || (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)))
              : (c <= 12438 || (c < 12540
                ? (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)))))))
          : (c <= 12735 || (c < 42786
            ? (c < 42240
              ? (c < 19968
                ? (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : (c <= 13312 || c == 19903))
                : (c <= 19968 || (c < 42192
                  ? (c >= 40959 && c <= 42124)
                  : c <= 42237)))
              : (c <= 42508 || (c < 42623
                ? (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))
                : (c <= 42653 || (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : c <= 42783)))))
            : (c <= 42888 || (c < 43015
              ? (c < 42965
                ? (c < 42960
                  ? (c >= 42891 && c <= 42954)
                  : (c <= 42961 || c == 42963))
                : (c <= 42969 || (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : c <= 43013)))
              : (c <= 43018 || (c < 43138
                ? (c < 43072
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43123)
                : (c <= 43187 || (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : c <= 43259)))))))))))
      : (c <= 43262 || (c < 65345
        ? (c < 43816
          ? (c < 43646
            ? (c < 43494
              ? (c < 43396
                ? (c < 43312
                  ? (c >= 43274 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43488
                  ? c == 43471
                  : c <= 43492)))
              : (c <= 43503 || (c < 43588
                ? (c < 43520
                  ? (c >= 43514 && c <= 43518)
                  : (c <= 43560 || (c >= 43584 && c <= 43586)))
                : (c <= 43595 || (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : c <= 43642)))))
            : (c <= 43695 || (c < 43744
              ? (c < 43712
                ? (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))
                : (c <= 43712 || (c < 43739
                  ? c == 43714
                  : c <= 43741)))
              : (c <= 43754 || (c < 43785
                ? (c < 43777
                  ? (c >= 43762 && c <= 43764)
                  : c <= 43782)
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : c <= 43814)))))))
          : (c <= 43822 || (c < 64298
            ? (c < 55243
              ? (c < 44032
                ? (c < 43868
                  ? (c >= 43824 && c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))
                : (c <= 44032 || (c < 55216
                  ? c == 55203
                  : c <= 55238)))
              : (c <= 55291 || (c < 64275
                ? (c < 64112
                  ? (c >= 63744 && c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))
                : (c <= 64279 || (c < 64287
                  ? c == 64285
                  : c <= 64296)))))
            : (c <= 64310 || (c < 64848
              ? (c < 64323
                ? (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : c <= 64829)))
              : (c <= 64911 || (c < 65136
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : c <= 65019)
                : (c <= 65140 || (c < 65313
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66928
          ? (c < 66208
            ? (c < 65549
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : c <= 65547)))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 66176
                  ? (c >= 65664 && c <= 65786)
                  : c <= 66204)))))
            : (c <= 66256 || (c < 66504
              ? (c < 66384
                ? (c < 66349
                  ? (c >= 66304 && c <= 66335)
                  : (c <= 66368 || (c >= 66370 && c <= 66377)))
                : (c <= 66421 || (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : c <= 66499)))
              : (c <= 66511 || (c < 66776
                ? (c < 66736
                  ? (c >= 66560 && c <= 66717)
                  : c <= 66771)
                : (c <= 66811 || (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : c <= 66915)))))))
          : (c <= 66938 || (c < 67506
            ? (c < 67003
              ? (c < 66967
                ? (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))
                : (c <= 66977 || (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : c <= 67001)))
              : (c <= 67004 || (c < 67424
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : c <= 67413)
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 880
            ? (c < 192
              ? (c < 170
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= 'z')))
                : (c <= 170 || (c < 186
                  ? c == 181
                  : c <= 186)))
              : (c <= 214 || (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : c <= 750)))))
            : (c <= 884 || (c < 910
              ? (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))
              : (c <= 929 || (c < 1162
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : c <= 1153)
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(39);
      if (lookahead == '!') ADVANCE(60);
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '%') ADVANCE(63);
      if (lookahead == '&') ADVANCE(45);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == '*') ADVANCE(61);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '0') ADVANCE(87);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == '<') ADVANCE(71);
      if (lookahead == '=') ADVANCE(57);
      if (lookahead == '>') ADVANCE(73);
      if (lookahead == '?') ADVANCE(11);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == ']') ADVANCE(49);
      if (lookahead == '^') ADVANCE(68);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(86);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '|') ADVANCE(47);
      if (lookahead == '}') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '!') ADVANCE(59);
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '&') ADVANCE(44);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(87);
      if (lookahead == '[') ADVANCE(48);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(86);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '|') ADVANCE(46);
      if (lookahead == '}') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '%') ADVANCE(63);
      if (lookahead == '&') ADVANCE(45);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == '*') ADVANCE(61);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '<') ADVANCE(71);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '>') ADVANCE(73);
      if (lookahead == '?') ADVANCE(11);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '^') ADVANCE(68);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(86);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '|') ADVANCE(47);
      if (lookahead == '}') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(59);
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '&') ADVANCE(44);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(87);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == ']') ADVANCE(49);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(86);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '|') ADVANCE(46);
      if (lookahead == '}') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '%') ADVANCE(63);
      if (lookahead == '&') ADVANCE(45);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == '*') ADVANCE(61);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == '<') ADVANCE(71);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '>') ADVANCE(73);
      if (lookahead == '?') ADVANCE(11);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == ']') ADVANCE(49);
      if (lookahead == '^') ADVANCE(68);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(86);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '|') ADVANCE(47);
      if (lookahead == '}') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(97);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(96);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      if (lookahead == '_') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(53);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '_') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(69);
      END_STATE();
    case 15:
      if (lookahead == 'U') ADVANCE(37);
      if (lookahead == 'u') ADVANCE(33);
      if (lookahead == 'x') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(21);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(91);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(92);
      END_STATE();
    case 18:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 19:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(18);
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(91);
      END_STATE();
    case 22:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(88);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(92);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 38:
      if (eof) ADVANCE(39);
      if (lookahead == '!') ADVANCE(60);
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '%') ADVANCE(63);
      if (lookahead == '&') ADVANCE(45);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == '*') ADVANCE(61);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '0') ADVANCE(87);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == '<') ADVANCE(71);
      if (lookahead == '=') ADVANCE(57);
      if (lookahead == '>') ADVANCE(73);
      if (lookahead == '?') ADVANCE(11);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == ']') ADVANCE(49);
      if (lookahead == '^') ADVANCE(68);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(86);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '|') ADVANCE(47);
      if (lookahead == '}') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(75);
      if (lookahead == '^') ADVANCE(66);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(76);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_QMARK_DOT);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(69);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(97);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_AMP_CARET);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(64);
      if (lookahead == '=') ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '>') ADVANCE(65);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_interpreted_string_literal_token1);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(82);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_interpreted_string_literal_token1);
      if (lookahead == '*') ADVANCE(79);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_interpreted_string_literal_token1);
      if (lookahead == '*') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_interpreted_string_literal_token1);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_interpreted_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(16);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(17);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(12);
      if (lookahead == '_') ADVANCE(22);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      if (lookahead == '_') ADVANCE(22);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      if (lookahead == '_') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(18);
      if (lookahead == '_') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(21);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '_') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      if (lookahead == '_') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == '_') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'm') ADVANCE(7);
      if (lookahead == 'n') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(9);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 't') ADVANCE(11);
      if (lookahead == 'u') ADVANCE(12);
      if (lookahead == 'v') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == '3') ADVANCE(17);
      if (lookahead == '6') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == '1') ADVANCE(21);
      if (lookahead == '3') ADVANCE(22);
      if (lookahead == '6') ADVANCE(23);
      if (lookahead == '8') ADVANCE(24);
      if (lookahead == 'f') ADVANCE(25);
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 7:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 8:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 11:
      if (lookahead == 'h') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(33);
      if (lookahead == 'y') ADVANCE(34);
      END_STATE();
    case 12:
      if (lookahead == '1') ADVANCE(35);
      if (lookahead == '3') ADVANCE(36);
      if (lookahead == '6') ADVANCE(37);
      if (lookahead == '8') ADVANCE(38);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(44);
      END_STATE();
    case 18:
      if (lookahead == '4') ADVANCE(45);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 21:
      if (lookahead == '6') ADVANCE(48);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(49);
      END_STATE();
    case 23:
      if (lookahead == '4') ADVANCE(50);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 33:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 34:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 35:
      if (lookahead == '6') ADVANCE(60);
      END_STATE();
    case 36:
      if (lookahead == '2') ADVANCE(61);
      END_STATE();
    case 37:
      if (lookahead == '4') ADVANCE(62);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_fun);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_mut);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 54:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 55:
      if (lookahead == 'f') ADVANCE(72);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_str);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(78);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 66:
      if (lookahead == 'h') ADVANCE(79);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_self);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 75:
      if (lookahead == 'w') ADVANCE(85);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_catch);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 81:
      if (lookahead == 'f') ADVANCE(87);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 83:
      if (lookahead == 'g') ADVANCE(89);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_throw);
      END_STATE();
    case 86:
      if (lookahead == 'f') ADVANCE(91);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_typeof);
      END_STATE();
    case 92:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 5},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 5},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 5},
  [171] = {.lex_state = 2},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 5},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 5},
  [177] = {.lex_state = 5},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 4},
  [183] = {.lex_state = 4},
  [184] = {.lex_state = 4},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 4},
  [190] = {.lex_state = 4},
  [191] = {.lex_state = 3},
  [192] = {.lex_state = 3},
  [193] = {.lex_state = 3},
  [194] = {.lex_state = 3},
  [195] = {.lex_state = 4},
  [196] = {.lex_state = 4},
  [197] = {.lex_state = 3},
  [198] = {.lex_state = 4},
  [199] = {.lex_state = 4},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 3},
  [208] = {.lex_state = 1},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 3},
  [211] = {.lex_state = 1},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 4},
  [216] = {.lex_state = 1},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 1},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 4},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 1},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 1},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 1},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 4},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 1},
  [246] = {.lex_state = 1},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 1},
  [251] = {.lex_state = 1},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 4},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 1},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 1},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 4},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 1},
  [275] = {.lex_state = 1},
  [276] = {.lex_state = 1},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 1},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 1},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 1},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 1},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 1},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 1},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 1},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 1},
  [307] = {.lex_state = 1},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 1},
  [310] = {.lex_state = 4},
  [311] = {.lex_state = 1},
  [312] = {.lex_state = 1},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 1},
  [315] = {.lex_state = 1},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 1},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 1},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_fun] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_mut] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_i16] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_i64] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [anon_sym_f32] = ACTIONS(1),
    [anon_sym_f64] = ACTIONS(1),
    [anon_sym_str] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_QMARK_DOT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_throw] = ACTIONS(1),
    [anon_sym_catch] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_typeof] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_AMP_CARET] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym_self] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_int_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(316),
    [sym__definition] = STATE(186),
    [sym_function_definition] = STATE(311),
    [sym_struct_definition] = STATE(311),
    [sym_interface_definition] = STATE(311),
    [aux_sym_source_file_repeat1] = STATE(186),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_fun] = ACTIONS(7),
    [anon_sym_struct] = ACTIONS(9),
    [anon_sym_interface] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_null,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    ACTIONS(27), 1,
      anon_sym_return,
    ACTIONS(29), 1,
      anon_sym__,
    ACTIONS(31), 1,
      anon_sym_throw,
    ACTIONS(33), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_typeof,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_if,
    ACTIONS(43), 1,
      sym_float_literal,
    STATE(296), 1,
      sym__statement_list,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(41), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(245), 6,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      sym_throw_statement,
      sym_var_declaration,
      sym_if_statement,
    STATE(115), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [82] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_null,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_return,
    ACTIONS(29), 1,
      anon_sym__,
    ACTIONS(31), 1,
      anon_sym_throw,
    ACTIONS(33), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_typeof,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_if,
    ACTIONS(43), 1,
      sym_float_literal,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(304), 1,
      sym__statement_list,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(41), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(245), 6,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      sym_throw_statement,
      sym_var_declaration,
      sym_if_statement,
    STATE(115), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [164] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_null,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_return,
    ACTIONS(29), 1,
      anon_sym__,
    ACTIONS(31), 1,
      anon_sym_throw,
    ACTIONS(33), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_typeof,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_if,
    ACTIONS(43), 1,
      sym_float_literal,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(41), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(281), 6,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      sym_throw_statement,
      sym_var_declaration,
      sym_if_statement,
    STATE(115), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [243] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_null,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_return,
    ACTIONS(29), 1,
      anon_sym__,
    ACTIONS(31), 1,
      anon_sym_throw,
    ACTIONS(33), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_typeof,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_if,
    ACTIONS(43), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(41), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(281), 6,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      sym_throw_statement,
      sym_var_declaration,
      sym_if_statement,
    STATE(115), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [322] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_null,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_return,
    ACTIONS(29), 1,
      anon_sym__,
    ACTIONS(31), 1,
      anon_sym_throw,
    ACTIONS(33), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_typeof,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_if,
    ACTIONS(43), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(41), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(281), 6,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      sym_throw_statement,
      sym_var_declaration,
      sym_if_statement,
    STATE(115), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [398] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_argument_list,
    ACTIONS(55), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 22,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [442] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym_selector_expression_repeat1,
    STATE(41), 1,
      sym_selector_field,
    ACTIONS(63), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(61), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 21,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [486] = 13,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_null,
    ACTIONS(29), 1,
      anon_sym__,
    ACTIONS(65), 1,
      anon_sym_LF,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(35), 4,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_typeof,
    ACTIONS(77), 4,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
    STATE(127), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [544] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_selector_expression_repeat1,
    STATE(41), 1,
      sym_selector_field,
    ACTIONS(85), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(83), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 21,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [588] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_selector_expression_repeat1,
    STATE(41), 1,
      sym_selector_field,
    ACTIONS(63), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(90), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(88), 21,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [632] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_catch,
    STATE(49), 1,
      sym_catch_block,
    ACTIONS(94), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(92), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [674] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_argument_list,
    ACTIONS(100), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(98), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [716] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_null,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_RBRACK,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      anon_sym__,
    ACTIONS(118), 1,
      anon_sym_typeof,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      sym_float_literal,
    ACTIONS(106), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(122), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(168), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [775] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_null,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      anon_sym__,
    ACTIONS(118), 1,
      anon_sym_typeof,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(126), 1,
      anon_sym_RBRACK,
    ACTIONS(130), 1,
      sym_float_literal,
    ACTIONS(106), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(128), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(170), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [834] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_null,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      anon_sym__,
    ACTIONS(118), 1,
      anon_sym_typeof,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      anon_sym_COLON,
    ACTIONS(136), 1,
      sym_float_literal,
    ACTIONS(106), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(134), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(143), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [893] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_null,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      anon_sym__,
    ACTIONS(118), 1,
      anon_sym_typeof,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(138), 1,
      anon_sym_RBRACK,
    ACTIONS(142), 1,
      sym_float_literal,
    ACTIONS(106), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(140), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(144), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [952] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_null,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      anon_sym__,
    ACTIONS(118), 1,
      anon_sym_typeof,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(144), 1,
      anon_sym_RBRACK,
    ACTIONS(148), 1,
      sym_float_literal,
    ACTIONS(106), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(146), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(159), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [1011] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(152), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(150), 22,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1052] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_null,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      anon_sym__,
    ACTIONS(118), 1,
      anon_sym_typeof,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      anon_sym_RBRACK,
    ACTIONS(160), 1,
      sym_float_literal,
    ACTIONS(106), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(158), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(146), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [1111] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(164), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(162), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1150] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(166), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_catch,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1187] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_null,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      anon_sym__,
    ACTIONS(118), 1,
      anon_sym_typeof,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(170), 1,
      anon_sym_COLON,
    ACTIONS(174), 1,
      sym_float_literal,
    ACTIONS(106), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(172), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(165), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [1246] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_null,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      anon_sym__,
    ACTIONS(118), 1,
      anon_sym_typeof,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(176), 1,
      anon_sym_RPAREN,
    ACTIONS(180), 1,
      sym_float_literal,
    ACTIONS(106), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(178), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(101), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [1305] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_null,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      anon_sym__,
    ACTIONS(118), 1,
      anon_sym_typeof,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_RBRACK,
    ACTIONS(186), 1,
      sym_float_literal,
    ACTIONS(106), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(184), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(98), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [1364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(188), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_catch,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1401] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(194), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(192), 22,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1442] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_null,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      anon_sym__,
    ACTIONS(118), 1,
      anon_sym_typeof,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_RPAREN,
    ACTIONS(200), 1,
      sym_float_literal,
    ACTIONS(106), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(198), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(104), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [1501] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(202), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_catch,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1538] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_null,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      anon_sym__,
    ACTIONS(118), 1,
      anon_sym_typeof,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(206), 1,
      anon_sym_RBRACK,
    ACTIONS(210), 1,
      sym_float_literal,
    ACTIONS(106), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(208), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(105), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [1597] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_null,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      anon_sym__,
    ACTIONS(118), 1,
      anon_sym_typeof,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(212), 1,
      anon_sym_RBRACK,
    ACTIONS(216), 1,
      sym_float_literal,
    ACTIONS(106), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(214), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(154), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [1656] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(218), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1692] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(222), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(226), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1764] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(226), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1800] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(230), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(234), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(238), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1908] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(242), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1944] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(246), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1980] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(250), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2016] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    ACTIONS(256), 1,
      anon_sym_PIPE,
    ACTIONS(266), 1,
      anon_sym_AMP_AMP,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(254), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(264), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(258), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(262), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(260), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(192), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
  [2068] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    ACTIONS(256), 1,
      anon_sym_PIPE,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(254), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(264), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(258), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(262), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(260), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(192), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2118] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_null,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      anon_sym__,
    ACTIONS(118), 1,
      anon_sym_typeof,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      sym_float_literal,
    ACTIONS(106), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(268), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(173), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [2174] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_null,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym__,
    ACTIONS(35), 1,
      anon_sym_typeof,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(274), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(272), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(140), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [2230] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    ACTIONS(256), 1,
      anon_sym_PIPE,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(194), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(254), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(258), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(260), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(192), 13,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(98), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2314] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(254), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(194), 3,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(260), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(192), 16,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2358] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(276), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2394] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_null,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(284), 1,
      anon_sym__,
    ACTIONS(286), 1,
      anon_sym_typeof,
    ACTIONS(290), 1,
      sym_float_literal,
    ACTIONS(282), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(288), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(123), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [2450] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_null,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym__,
    ACTIONS(35), 1,
      anon_sym_typeof,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(292), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(125), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [2506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(296), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2542] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_null,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      anon_sym__,
    ACTIONS(118), 1,
      anon_sym_typeof,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(302), 1,
      sym_float_literal,
    ACTIONS(106), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(300), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(161), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [2598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(304), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2634] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(308), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(312), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2706] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(308), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2742] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(316), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(320), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2814] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_null,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      anon_sym__,
    ACTIONS(118), 1,
      anon_sym_typeof,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(326), 1,
      sym_float_literal,
    ACTIONS(106), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(324), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(42), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [2870] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_null,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      anon_sym__,
    ACTIONS(118), 1,
      anon_sym_typeof,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(330), 1,
      sym_float_literal,
    ACTIONS(106), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(328), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(43), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [2926] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_null,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      anon_sym__,
    ACTIONS(118), 1,
      anon_sym_typeof,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      sym_float_literal,
    ACTIONS(106), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(332), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(46), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [2982] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_null,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      anon_sym__,
    ACTIONS(118), 1,
      anon_sym_typeof,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(338), 1,
      sym_float_literal,
    ACTIONS(106), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(336), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(48), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [3038] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_null,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      anon_sym__,
    ACTIONS(118), 1,
      anon_sym_typeof,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(342), 1,
      sym_float_literal,
    ACTIONS(106), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(340), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(27), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [3094] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(344), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(348), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3166] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_null,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym__,
    ACTIONS(35), 1,
      anon_sym_typeof,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(354), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(352), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(110), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [3222] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(356), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3258] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_null,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      anon_sym__,
    ACTIONS(118), 1,
      anon_sym_typeof,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(362), 1,
      sym_float_literal,
    ACTIONS(106), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(360), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(21), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [3314] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(364), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3350] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_null,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(284), 1,
      anon_sym__,
    ACTIONS(286), 1,
      anon_sym_typeof,
    ACTIONS(362), 1,
      sym_float_literal,
    ACTIONS(282), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(360), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(21), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [3406] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_null,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(284), 1,
      anon_sym__,
    ACTIONS(286), 1,
      anon_sym_typeof,
    ACTIONS(342), 1,
      sym_float_literal,
    ACTIONS(282), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(340), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(27), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [3462] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(368), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3498] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(372), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3534] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_null,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym__,
    ACTIONS(35), 1,
      anon_sym_typeof,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(378), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(376), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(119), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [3590] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_null,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(284), 1,
      anon_sym__,
    ACTIONS(286), 1,
      anon_sym_typeof,
    ACTIONS(382), 1,
      sym_float_literal,
    ACTIONS(282), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(380), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(177), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [3646] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_null,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(284), 1,
      anon_sym__,
    ACTIONS(286), 1,
      anon_sym_typeof,
    ACTIONS(386), 1,
      sym_float_literal,
    ACTIONS(282), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(384), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(176), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [3702] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_null,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      anon_sym__,
    ACTIONS(118), 1,
      anon_sym_typeof,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(390), 1,
      sym_float_literal,
    ACTIONS(106), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(388), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(122), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [3758] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_null,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      anon_sym__,
    ACTIONS(118), 1,
      anon_sym_typeof,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(394), 1,
      sym_float_literal,
    ACTIONS(106), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(392), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(126), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [3814] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_null,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym__,
    ACTIONS(35), 1,
      anon_sym_typeof,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(398), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(396), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(121), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [3870] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_null,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym__,
    ACTIONS(35), 1,
      anon_sym_typeof,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(402), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(400), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(120), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [3926] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_null,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym__,
    ACTIONS(35), 1,
      anon_sym_typeof,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(406), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(404), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(128), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [3982] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_null,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym__,
    ACTIONS(35), 1,
      anon_sym_typeof,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(410), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(408), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(139), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [4038] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_null,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(284), 1,
      anon_sym__,
    ACTIONS(286), 1,
      anon_sym_typeof,
    ACTIONS(414), 1,
      sym_float_literal,
    ACTIONS(282), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(412), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(19), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [4094] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_null,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      anon_sym__,
    ACTIONS(118), 1,
      anon_sym_typeof,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(418), 1,
      sym_float_literal,
    ACTIONS(106), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(416), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(151), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [4150] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_null,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(284), 1,
      anon_sym__,
    ACTIONS(286), 1,
      anon_sym_typeof,
    ACTIONS(422), 1,
      sym_float_literal,
    ACTIONS(282), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(420), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(174), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [4206] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_null,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(284), 1,
      anon_sym__,
    ACTIONS(286), 1,
      anon_sym_typeof,
    ACTIONS(426), 1,
      sym_float_literal,
    ACTIONS(282), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(424), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(172), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [4262] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_null,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      anon_sym__,
    ACTIONS(118), 1,
      anon_sym_typeof,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(430), 1,
      sym_float_literal,
    ACTIONS(106), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(428), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(137), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [4318] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_null,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym__,
    ACTIONS(35), 1,
      anon_sym_typeof,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(434), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(432), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(132), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [4374] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_null,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      anon_sym__,
    ACTIONS(118), 1,
      anon_sym_typeof,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(414), 1,
      sym_float_literal,
    ACTIONS(106), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(412), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(19), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [4430] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_null,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym__,
    ACTIONS(35), 1,
      anon_sym_typeof,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(438), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(436), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(133), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [4486] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_null,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym__,
    ACTIONS(35), 1,
      anon_sym_typeof,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(442), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(440), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(134), 13,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_block,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [4542] = 8,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(444), 1,
      sym_identifier,
    ACTIONS(446), 1,
      anon_sym_LF,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 1,
      anon_sym_AMP,
    ACTIONS(454), 1,
      anon_sym_RBRACE,
    STATE(203), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(452), 15,
      anon_sym_null,
      anon_sym_bool,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_str,
      anon_sym_string,
      anon_sym_void,
  [4587] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      sym_identifier,
    ACTIONS(458), 1,
      anon_sym_mut,
    ACTIONS(460), 1,
      anon_sym_LPAREN,
    ACTIONS(462), 1,
      anon_sym_AMP,
    ACTIONS(466), 1,
      anon_sym_EQ,
    STATE(241), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(464), 15,
      anon_sym_null,
      anon_sym_bool,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_str,
      anon_sym_string,
      anon_sym_void,
  [4632] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(460), 1,
      anon_sym_LPAREN,
    ACTIONS(462), 1,
      anon_sym_AMP,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(301), 1,
      sym_block,
    STATE(200), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(464), 15,
      anon_sym_null,
      anon_sym_bool,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_str,
      anon_sym_string,
      anon_sym_void,
  [4677] = 8,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 1,
      anon_sym_AMP,
    ACTIONS(470), 1,
      sym_identifier,
    ACTIONS(472), 1,
      anon_sym_LF,
    ACTIONS(474), 1,
      anon_sym_RBRACE,
    STATE(211), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(452), 15,
      anon_sym_null,
      anon_sym_bool,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_str,
      anon_sym_string,
      anon_sym_void,
  [4722] = 6,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_LPAREN,
    ACTIONS(478), 1,
      anon_sym_LBRACE,
    STATE(102), 1,
      sym_argument_list,
    ACTIONS(55), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [4763] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    ACTIONS(256), 1,
      anon_sym_PIPE,
    ACTIONS(266), 1,
      anon_sym_AMP_AMP,
    ACTIONS(480), 1,
      anon_sym_COMMA,
    ACTIONS(482), 1,
      anon_sym_RBRACK,
    ACTIONS(484), 1,
      anon_sym_PIPE_PIPE,
    STATE(8), 1,
      sym_selector_field,
    STATE(233), 1,
      aux_sym_array_expression_repeat1,
    ACTIONS(63), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(254), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(264), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(258), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(262), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(260), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [4821] = 6,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LF,
    STATE(99), 1,
      aux_sym_selector_expression_repeat1,
    STATE(167), 1,
      sym_selector_field,
    ACTIONS(486), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(83), 21,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [4861] = 6,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LF,
    STATE(99), 1,
      aux_sym_selector_expression_repeat1,
    STATE(167), 1,
      sym_selector_field,
    ACTIONS(489), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(90), 21,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [4901] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    ACTIONS(256), 1,
      anon_sym_PIPE,
    ACTIONS(266), 1,
      anon_sym_AMP_AMP,
    ACTIONS(484), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    ACTIONS(493), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      sym_selector_field,
    STATE(267), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(63), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(254), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(264), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(258), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(262), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(260), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [4959] = 5,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LF,
    ACTIONS(495), 1,
      anon_sym_catch,
    STATE(160), 1,
      sym_catch_block,
    ACTIONS(94), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [4997] = 5,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_LF,
    ACTIONS(476), 1,
      anon_sym_LPAREN,
    STATE(102), 1,
      sym_argument_list,
    ACTIONS(100), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5035] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    ACTIONS(256), 1,
      anon_sym_PIPE,
    ACTIONS(266), 1,
      anon_sym_AMP_AMP,
    ACTIONS(484), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    ACTIONS(497), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      sym_selector_field,
    STATE(239), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(63), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(254), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(264), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(258), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(262), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(260), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5093] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    ACTIONS(256), 1,
      anon_sym_PIPE,
    ACTIONS(266), 1,
      anon_sym_AMP_AMP,
    ACTIONS(480), 1,
      anon_sym_COMMA,
    ACTIONS(484), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(499), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      sym_selector_field,
    STATE(248), 1,
      aux_sym_array_expression_repeat1,
    ACTIONS(63), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(254), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(264), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(258), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(262), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(260), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5151] = 6,
    ACTIONS(59), 1,
      anon_sym_LF,
    ACTIONS(79), 1,
      sym_comment,
    STATE(100), 1,
      aux_sym_selector_expression_repeat1,
    STATE(167), 1,
      sym_selector_field,
    ACTIONS(489), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(61), 21,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5191] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_LPAREN,
    ACTIONS(462), 1,
      anon_sym_AMP,
    ACTIONS(501), 1,
      sym_identifier,
    ACTIONS(503), 1,
      anon_sym_EQ,
    STATE(266), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(464), 15,
      anon_sym_null,
      anon_sym_bool,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_str,
      anon_sym_string,
      anon_sym_void,
  [5233] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_LPAREN,
    ACTIONS(462), 1,
      anon_sym_AMP,
    ACTIONS(505), 1,
      sym_identifier,
    ACTIONS(507), 1,
      anon_sym_mut,
    STATE(205), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(464), 15,
      anon_sym_null,
      anon_sym_bool,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_str,
      anon_sym_string,
      anon_sym_void,
  [5275] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_argument_list,
    ACTIONS(55), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 18,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5312] = 5,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_LF,
    ACTIONS(509), 1,
      anon_sym_LBRACK,
    STATE(106), 1,
      sym_selector_field,
    ACTIONS(194), 22,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5349] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_LPAREN,
    ACTIONS(462), 1,
      anon_sym_AMP,
    ACTIONS(511), 1,
      sym_identifier,
    STATE(198), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(464), 15,
      anon_sym_null,
      anon_sym_bool,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_str,
      anon_sym_string,
      anon_sym_void,
  [5388] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      sym_identifier,
    ACTIONS(515), 1,
      anon_sym_LPAREN,
    ACTIONS(517), 1,
      anon_sym_AMP,
    STATE(201), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(452), 15,
      anon_sym_null,
      anon_sym_bool,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_str,
      anon_sym_string,
      anon_sym_void,
  [5427] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_LPAREN,
    ACTIONS(462), 1,
      anon_sym_AMP,
    ACTIONS(519), 1,
      sym_identifier,
    STATE(221), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(464), 15,
      anon_sym_null,
      anon_sym_bool,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_str,
      anon_sym_string,
      anon_sym_void,
  [5466] = 3,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_LF,
    ACTIONS(370), 24,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_else,
  [5499] = 11,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LBRACK,
    ACTIONS(521), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      anon_sym_RBRACE,
    ACTIONS(531), 1,
      anon_sym_AMP_AMP,
    ACTIONS(533), 1,
      anon_sym_PIPE_PIPE,
    STATE(106), 1,
      sym_selector_field,
    ACTIONS(489), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(525), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(529), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(523), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5548] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_LPAREN,
    ACTIONS(462), 1,
      anon_sym_AMP,
    ACTIONS(535), 1,
      sym_identifier,
    STATE(213), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(464), 15,
      anon_sym_null,
      anon_sym_bool,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_str,
      anon_sym_string,
      anon_sym_void,
  [5587] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_LPAREN,
    ACTIONS(462), 1,
      anon_sym_AMP,
    ACTIONS(537), 1,
      sym_identifier,
    STATE(189), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(464), 15,
      anon_sym_null,
      anon_sym_bool,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_str,
      anon_sym_string,
      anon_sym_void,
  [5626] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_LPAREN,
    ACTIONS(517), 1,
      anon_sym_AMP,
    ACTIONS(539), 1,
      sym_identifier,
    STATE(208), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(452), 15,
      anon_sym_null,
      anon_sym_bool,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_str,
      anon_sym_string,
      anon_sym_void,
  [5665] = 11,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LBRACK,
    ACTIONS(531), 1,
      anon_sym_AMP_AMP,
    ACTIONS(533), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(541), 1,
      anon_sym_LF,
    ACTIONS(543), 1,
      anon_sym_RBRACE,
    STATE(106), 1,
      sym_selector_field,
    ACTIONS(489), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(525), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(529), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(523), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5714] = 11,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LBRACK,
    ACTIONS(531), 1,
      anon_sym_AMP_AMP,
    ACTIONS(533), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(545), 1,
      anon_sym_LF,
    ACTIONS(547), 1,
      anon_sym_RBRACE,
    STATE(106), 1,
      sym_selector_field,
    ACTIONS(489), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(525), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(529), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(523), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5763] = 11,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LBRACK,
    ACTIONS(531), 1,
      anon_sym_AMP_AMP,
    ACTIONS(533), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(549), 1,
      anon_sym_LF,
    ACTIONS(551), 1,
      anon_sym_RBRACE,
    STATE(106), 1,
      sym_selector_field,
    ACTIONS(489), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(525), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(529), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(523), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5812] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    ACTIONS(256), 1,
      anon_sym_PIPE,
    ACTIONS(266), 1,
      anon_sym_AMP_AMP,
    ACTIONS(484), 1,
      anon_sym_PIPE_PIPE,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(63), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(254), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(264), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(553), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(258), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(262), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(260), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5865] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    ACTIONS(557), 1,
      anon_sym_PIPE,
    ACTIONS(567), 1,
      anon_sym_AMP_AMP,
    ACTIONS(569), 1,
      anon_sym_PIPE_PIPE,
    STATE(8), 1,
      sym_selector_field,
    STATE(246), 1,
      sym_block,
    ACTIONS(63), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(555), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(565), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(559), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(563), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(561), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5920] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_LPAREN,
    ACTIONS(462), 1,
      anon_sym_AMP,
    ACTIONS(571), 1,
      sym_identifier,
    STATE(254), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(464), 15,
      anon_sym_null,
      anon_sym_bool,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_str,
      anon_sym_string,
      anon_sym_void,
  [5959] = 6,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_LF,
    ACTIONS(509), 1,
      anon_sym_LBRACK,
    STATE(106), 1,
      sym_selector_field,
    ACTIONS(523), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(194), 15,
      anon_sym_PIPE,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5998] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    ACTIONS(256), 1,
      anon_sym_PIPE,
    ACTIONS(266), 1,
      anon_sym_AMP_AMP,
    ACTIONS(484), 1,
      anon_sym_PIPE_PIPE,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(63), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(254), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(264), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(573), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(258), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(262), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(260), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [6051] = 11,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LBRACK,
    ACTIONS(531), 1,
      anon_sym_AMP_AMP,
    ACTIONS(533), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(575), 1,
      anon_sym_LF,
    ACTIONS(577), 1,
      anon_sym_RBRACE,
    STATE(106), 1,
      sym_selector_field,
    ACTIONS(489), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(525), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(529), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(523), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [6100] = 4,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_LF,
    STATE(106), 1,
      sym_selector_field,
    ACTIONS(164), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6135] = 3,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LF,
    ACTIONS(204), 24,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_catch,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6168] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_LPAREN,
    ACTIONS(517), 1,
      anon_sym_AMP,
    ACTIONS(579), 1,
      sym_identifier,
    STATE(220), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(452), 15,
      anon_sym_null,
      anon_sym_bool,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_str,
      anon_sym_string,
      anon_sym_void,
  [6207] = 3,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_LF,
    ACTIONS(190), 24,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_catch,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6240] = 7,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_LF,
    ACTIONS(509), 1,
      anon_sym_LBRACK,
    STATE(106), 1,
      sym_selector_field,
    ACTIONS(525), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(523), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(194), 11,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6281] = 8,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_LF,
    ACTIONS(509), 1,
      anon_sym_LBRACK,
    STATE(106), 1,
      sym_selector_field,
    ACTIONS(525), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(194), 5,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(529), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(523), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [6324] = 9,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_LF,
    ACTIONS(509), 1,
      anon_sym_LBRACK,
    ACTIONS(531), 1,
      anon_sym_AMP_AMP,
    STATE(106), 1,
      sym_selector_field,
    ACTIONS(194), 4,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
    ACTIONS(525), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(529), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(523), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [6369] = 3,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LF,
    ACTIONS(168), 24,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_catch,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6402] = 3,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LF,
    ACTIONS(224), 24,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_else,
  [6435] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    ACTIONS(256), 1,
      anon_sym_PIPE,
    ACTIONS(266), 1,
      anon_sym_AMP_AMP,
    ACTIONS(484), 1,
      anon_sym_PIPE_PIPE,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(63), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(254), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(264), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(581), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(258), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(262), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(260), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [6488] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_LPAREN,
    ACTIONS(462), 1,
      anon_sym_AMP,
    ACTIONS(583), 1,
      sym_identifier,
    STATE(252), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(464), 15,
      anon_sym_null,
      anon_sym_bool,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_str,
      anon_sym_string,
      anon_sym_void,
  [6527] = 11,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LBRACK,
    ACTIONS(531), 1,
      anon_sym_AMP_AMP,
    ACTIONS(533), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(585), 1,
      anon_sym_LF,
    ACTIONS(587), 1,
      anon_sym_RBRACE,
    STATE(106), 1,
      sym_selector_field,
    ACTIONS(489), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(525), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(529), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(523), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [6576] = 5,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_LF,
    ACTIONS(509), 1,
      anon_sym_LBRACK,
    STATE(106), 1,
      sym_selector_field,
    ACTIONS(152), 22,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6613] = 3,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LF,
    ACTIONS(220), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6645] = 3,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LF,
    ACTIONS(228), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6677] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    ACTIONS(256), 1,
      anon_sym_PIPE,
    ACTIONS(266), 1,
      anon_sym_AMP_AMP,
    ACTIONS(484), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(589), 1,
      anon_sym_COLON,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(63), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(254), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(264), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(258), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(262), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(260), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [6729] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    ACTIONS(256), 1,
      anon_sym_PIPE,
    ACTIONS(266), 1,
      anon_sym_AMP_AMP,
    ACTIONS(484), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(591), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(63), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(254), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(264), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(258), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(262), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(260), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [6781] = 3,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LF,
    ACTIONS(366), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6813] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    ACTIONS(256), 1,
      anon_sym_PIPE,
    ACTIONS(266), 1,
      anon_sym_AMP_AMP,
    ACTIONS(484), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(593), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(63), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(254), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(264), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(258), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(262), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(260), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [6865] = 3,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LF,
    ACTIONS(318), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6897] = 3,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_LF,
    ACTIONS(314), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6929] = 3,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LF,
    ACTIONS(240), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6961] = 3,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_LF,
    ACTIONS(350), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6993] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    ACTIONS(256), 1,
      anon_sym_PIPE,
    ACTIONS(266), 1,
      anon_sym_AMP_AMP,
    ACTIONS(484), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(595), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(63), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(254), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(264), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(258), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(262), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(260), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [7045] = 3,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_LF,
    ACTIONS(306), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7077] = 3,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_LF,
    ACTIONS(322), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7109] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    ACTIONS(256), 1,
      anon_sym_PIPE,
    ACTIONS(266), 1,
      anon_sym_AMP_AMP,
    ACTIONS(484), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(597), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(63), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(254), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(264), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(258), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(262), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(260), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [7161] = 3,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_LF,
    ACTIONS(310), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7193] = 3,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LF,
    ACTIONS(298), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7225] = 3,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_LF,
    ACTIONS(244), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7257] = 3,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_LF,
    ACTIONS(310), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7289] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    ACTIONS(256), 1,
      anon_sym_PIPE,
    ACTIONS(266), 1,
      anon_sym_AMP_AMP,
    ACTIONS(484), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(599), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(63), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(254), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(264), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(258), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(262), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(260), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [7341] = 3,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_LF,
    ACTIONS(278), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7373] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    ACTIONS(256), 1,
      anon_sym_PIPE,
    ACTIONS(266), 1,
      anon_sym_AMP_AMP,
    ACTIONS(484), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(601), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(63), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(254), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(264), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(258), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(262), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(260), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [7425] = 3,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_LF,
    ACTIONS(346), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7457] = 3,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LF,
    ACTIONS(228), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7489] = 3,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_LF,
    ACTIONS(236), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7521] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    ACTIONS(256), 1,
      anon_sym_PIPE,
    ACTIONS(266), 1,
      anon_sym_AMP_AMP,
    ACTIONS(484), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(603), 1,
      anon_sym_COLON,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(63), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(254), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(264), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(258), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(262), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(260), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [7573] = 3,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_LF,
    ACTIONS(100), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7605] = 3,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LF,
    ACTIONS(252), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7637] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    ACTIONS(256), 1,
      anon_sym_PIPE,
    ACTIONS(266), 1,
      anon_sym_AMP_AMP,
    ACTIONS(484), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(605), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(63), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(254), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(264), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(258), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(262), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(260), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [7689] = 3,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LF,
    ACTIONS(374), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7721] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    ACTIONS(256), 1,
      anon_sym_PIPE,
    ACTIONS(266), 1,
      anon_sym_AMP_AMP,
    ACTIONS(484), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(607), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(63), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(254), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(264), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(258), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(262), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(260), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [7773] = 3,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LF,
    ACTIONS(232), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7805] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    ACTIONS(557), 1,
      anon_sym_PIPE,
    ACTIONS(567), 1,
      anon_sym_AMP_AMP,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(555), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(565), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(559), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(192), 4,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_PIPE_PIPE,
    ACTIONS(563), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(561), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [7853] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    ACTIONS(256), 1,
      anon_sym_PIPE,
    ACTIONS(266), 1,
      anon_sym_AMP_AMP,
    ACTIONS(484), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(609), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(63), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(254), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(264), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(258), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(262), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(260), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [7905] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    ACTIONS(557), 1,
      anon_sym_PIPE,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(555), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(565), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(559), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(563), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(192), 5,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(561), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [7951] = 3,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LF,
    ACTIONS(358), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7983] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    ACTIONS(557), 1,
      anon_sym_PIPE,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(194), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(555), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(559), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(561), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(192), 9,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8027] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(555), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(194), 3,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(561), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(192), 12,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8067] = 3,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_LF,
    ACTIONS(248), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8099] = 3,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_LF,
    ACTIONS(611), 19,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_null,
      anon_sym_bool,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_str,
      anon_sym_string,
      anon_sym_void,
      anon_sym_RBRACE,
      sym_identifier,
  [8127] = 3,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_LF,
    ACTIONS(615), 19,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_null,
      anon_sym_bool,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_str,
      anon_sym_string,
      anon_sym_void,
      anon_sym_RBRACE,
      sym_identifier,
  [8155] = 3,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_LF,
    ACTIONS(619), 19,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_null,
      anon_sym_bool,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_str,
      anon_sym_string,
      anon_sym_void,
      anon_sym_RBRACE,
      sym_identifier,
  [8183] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 3,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_LBRACE,
    ACTIONS(623), 16,
      anon_sym_null,
      anon_sym_bool,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_str,
      anon_sym_string,
      anon_sym_void,
      sym_identifier,
  [8210] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 3,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_LBRACE,
    ACTIONS(627), 16,
      anon_sym_null,
      anon_sym_bool,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_str,
      anon_sym_string,
      anon_sym_void,
      sym_identifier,
  [8237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 3,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_LBRACE,
    ACTIONS(631), 16,
      anon_sym_null,
      anon_sym_bool,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_i64,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_str,
      anon_sym_string,
      anon_sym_void,
      sym_identifier,
  [8264] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      ts_builtin_sym_end,
    ACTIONS(637), 1,
      anon_sym_fun,
    ACTIONS(640), 1,
      anon_sym_struct,
    ACTIONS(643), 1,
      anon_sym_interface,
    STATE(185), 2,
      sym__definition,
      aux_sym_source_file_repeat1,
    STATE(311), 3,
      sym_function_definition,
      sym_struct_definition,
      sym_interface_definition,
  [8289] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_fun,
    ACTIONS(9), 1,
      anon_sym_struct,
    ACTIONS(11), 1,
      anon_sym_interface,
    ACTIONS(646), 1,
      ts_builtin_sym_end,
    STATE(185), 2,
      sym__definition,
      aux_sym_source_file_repeat1,
    STATE(311), 3,
      sym_function_definition,
      sym_struct_definition,
      sym_interface_definition,
  [8314] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      sym_identifier,
    ACTIONS(650), 1,
      anon_sym_mut,
    ACTIONS(652), 1,
      anon_sym_RPAREN,
    ACTIONS(654), 1,
      anon_sym_AMP,
    ACTIONS(656), 1,
      anon_sym_self,
    STATE(242), 2,
      sym_parameter,
      sym_self_parameter,
  [8337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [8349] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_PIPE,
    ACTIONS(664), 1,
      anon_sym_LBRACK,
    ACTIONS(660), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [8365] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_AMP,
    ACTIONS(666), 1,
      anon_sym_mut,
    ACTIONS(668), 1,
      anon_sym_LPAREN,
    ACTIONS(670), 1,
      anon_sym_self,
    STATE(96), 1,
      sym_self_parameter_list,
    STATE(278), 1,
      sym_self_parameter,
  [8387] = 6,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_LBRACE,
    ACTIONS(675), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(207), 1,
      sym_embetted_expr,
    ACTIONS(677), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [8407] = 6,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_LBRACE,
    ACTIONS(682), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(207), 1,
      sym_embetted_expr,
    ACTIONS(684), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [8427] = 6,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_LBRACE,
    ACTIONS(686), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(207), 1,
      sym_embetted_expr,
    ACTIONS(684), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [8447] = 6,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_LBRACE,
    ACTIONS(688), 1,
      anon_sym_DQUOTE,
    STATE(192), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(207), 1,
      sym_embetted_expr,
    ACTIONS(690), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [8467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [8479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [8491] = 6,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_LBRACE,
    ACTIONS(696), 1,
      anon_sym_DQUOTE,
    STATE(193), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(207), 1,
      sym_embetted_expr,
    ACTIONS(698), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [8511] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_LBRACK,
    ACTIONS(700), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [8525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [8537] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(662), 1,
      anon_sym_PIPE,
    ACTIONS(664), 1,
      anon_sym_LBRACK,
    ACTIONS(704), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      sym_block,
  [8556] = 5,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_LF,
    ACTIONS(708), 1,
      anon_sym_PIPE,
    ACTIONS(710), 1,
      anon_sym_LBRACK,
    ACTIONS(712), 1,
      anon_sym_RBRACE,
  [8572] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      sym_identifier,
    ACTIONS(716), 1,
      anon_sym_COMMA,
    ACTIONS(718), 1,
      anon_sym_RBRACE,
    STATE(249), 1,
      sym_keyed_element,
  [8588] = 5,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_PIPE,
    ACTIONS(710), 1,
      anon_sym_LBRACK,
    ACTIONS(720), 1,
      anon_sym_LF,
    ACTIONS(722), 1,
      anon_sym_RBRACE,
  [8604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 4,
      ts_builtin_sym_end,
      anon_sym_fun,
      anon_sym_struct,
      anon_sym_interface,
  [8614] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_PIPE,
    ACTIONS(664), 1,
      anon_sym_LBRACK,
    ACTIONS(726), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8628] = 3,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_LF,
    ACTIONS(728), 3,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [8640] = 3,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(730), 2,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
    ACTIONS(732), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [8652] = 5,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_LF,
    ACTIONS(708), 1,
      anon_sym_PIPE,
    ACTIONS(710), 1,
      anon_sym_LBRACK,
    ACTIONS(734), 1,
      anon_sym_RBRACE,
  [8668] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      sym_identifier,
    ACTIONS(738), 1,
      anon_sym_RBRACE,
    STATE(261), 2,
      sym__interface_body,
      sym_method_spec,
  [8682] = 3,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(740), 2,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
    ACTIONS(742), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [8694] = 5,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_PIPE,
    ACTIONS(710), 1,
      anon_sym_LBRACK,
    ACTIONS(744), 1,
      anon_sym_LF,
    ACTIONS(746), 1,
      anon_sym_RBRACE,
  [8710] = 3,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_LF,
    ACTIONS(748), 3,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [8722] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(662), 1,
      anon_sym_PIPE,
    ACTIONS(664), 1,
      anon_sym_LBRACK,
    STATE(295), 1,
      sym_block,
  [8738] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      sym_identifier,
    ACTIONS(750), 1,
      anon_sym_RBRACE,
    STATE(276), 2,
      sym__interface_body,
      sym_method_spec,
  [8752] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_COMMA,
    ACTIONS(754), 1,
      anon_sym_RBRACE,
    ACTIONS(756), 1,
      anon_sym_EQ,
    STATE(269), 1,
      aux_sym_struct_initialization_repeat1,
  [8768] = 3,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_LF,
    ACTIONS(758), 3,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [8780] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      sym_identifier,
    ACTIONS(762), 1,
      anon_sym_COMMA,
    ACTIONS(764), 1,
      anon_sym_RBRACE,
    STATE(244), 1,
      sym_keyed_element,
  [8796] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(766), 1,
      anon_sym_if,
    STATE(286), 2,
      sym_block,
      sym_if_statement,
  [8810] = 3,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_LF,
    ACTIONS(768), 3,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [8822] = 4,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_LF,
    ACTIONS(710), 1,
      anon_sym_LBRACK,
    ACTIONS(770), 2,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [8836] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_PIPE,
    ACTIONS(664), 1,
      anon_sym_LBRACK,
    ACTIONS(772), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8850] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_EQ,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    ACTIONS(776), 1,
      anon_sym_RBRACE,
    STATE(236), 1,
      aux_sym_struct_initialization_repeat1,
  [8866] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      sym_identifier,
    ACTIONS(778), 1,
      anon_sym_RBRACE,
    STATE(276), 2,
      sym__interface_body,
      sym_method_spec,
  [8880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [8889] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_COMMA,
    ACTIONS(784), 1,
      anon_sym_RPAREN,
    STATE(255), 1,
      aux_sym_parameter_list_repeat1,
  [8902] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_COMMA,
    ACTIONS(789), 1,
      anon_sym_RPAREN,
    STATE(226), 1,
      aux_sym_parameter_list_repeat1,
  [8915] = 4,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(791), 1,
      anon_sym_LF,
    ACTIONS(793), 1,
      anon_sym_RBRACE,
    STATE(250), 1,
      aux_sym__statement_list_repeat1,
  [8928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [8937] = 4,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_LF,
    ACTIONS(799), 1,
      anon_sym_RBRACE,
    STATE(230), 1,
      aux_sym_interface_definition_repeat1,
  [8950] = 4,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_LF,
    ACTIONS(804), 1,
      anon_sym_RBRACE,
    STATE(230), 1,
      aux_sym_interface_definition_repeat1,
  [8963] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      sym_identifier,
    ACTIONS(808), 1,
      anon_sym_RBRACE,
    STATE(272), 1,
      sym_keyed_element,
  [8976] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      sym_identifier,
    ACTIONS(810), 1,
      anon_sym_RBRACE,
    STATE(272), 1,
      sym_keyed_element,
  [8989] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_COMMA,
    ACTIONS(812), 1,
      anon_sym_RBRACK,
    STATE(260), 1,
      aux_sym_array_expression_repeat1,
  [9002] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_COMMA,
    ACTIONS(816), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      aux_sym_struct_initialization_repeat1,
  [9015] = 4,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_LF,
    ACTIONS(820), 1,
      anon_sym_RBRACE,
    STATE(251), 1,
      aux_sym_field_definition_list_repeat1,
  [9028] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_COMMA,
    ACTIONS(824), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      aux_sym_struct_initialization_repeat1,
  [9041] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      sym_identifier,
    ACTIONS(828), 1,
      anon_sym_RBRACE,
    STATE(274), 1,
      sym_field_definition,
  [9054] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      sym_identifier,
    ACTIONS(830), 1,
      anon_sym_RBRACE,
    STATE(272), 1,
      sym_keyed_element,
  [9067] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    ACTIONS(832), 1,
      anon_sym_RPAREN,
    STATE(256), 1,
      aux_sym_argument_list_repeat1,
  [9080] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      sym_identifier,
    ACTIONS(834), 1,
      anon_sym_RBRACE,
    STATE(272), 1,
      sym_keyed_element,
  [9093] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_PIPE,
    ACTIONS(664), 1,
      anon_sym_LBRACK,
    ACTIONS(836), 1,
      anon_sym_EQ,
  [9106] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_COMMA,
    ACTIONS(838), 1,
      anon_sym_RPAREN,
    STATE(258), 1,
      aux_sym_parameter_list_repeat1,
  [9119] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_COMMA,
    ACTIONS(843), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      aux_sym_struct_initialization_repeat1,
  [9132] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    ACTIONS(776), 1,
      anon_sym_RBRACE,
    STATE(234), 1,
      aux_sym_struct_initialization_repeat1,
  [9145] = 4,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_LF,
    ACTIONS(847), 1,
      anon_sym_RBRACE,
    STATE(227), 1,
      aux_sym__statement_list_repeat1,
  [9158] = 4,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(849), 1,
      anon_sym_LF,
    ACTIONS(851), 1,
      anon_sym_RBRACE,
    ACTIONS(853), 1,
      anon_sym_else,
  [9171] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      sym_identifier,
    ACTIONS(855), 1,
      anon_sym_RBRACE,
    STATE(272), 1,
      sym_keyed_element,
  [9184] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_COMMA,
    ACTIONS(857), 1,
      anon_sym_RBRACK,
    STATE(260), 1,
      aux_sym_array_expression_repeat1,
  [9197] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_COMMA,
    ACTIONS(754), 1,
      anon_sym_RBRACE,
    STATE(268), 1,
      aux_sym_struct_initialization_repeat1,
  [9210] = 4,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_LF,
    ACTIONS(862), 1,
      anon_sym_RBRACE,
    STATE(250), 1,
      aux_sym__statement_list_repeat1,
  [9223] = 4,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_LF,
    ACTIONS(867), 1,
      anon_sym_RBRACE,
    STATE(251), 1,
      aux_sym_field_definition_list_repeat1,
  [9236] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_PIPE,
    ACTIONS(664), 1,
      anon_sym_LBRACK,
    ACTIONS(869), 1,
      anon_sym_RPAREN,
  [9249] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_EQ,
    ACTIONS(871), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9260] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_PIPE,
    ACTIONS(664), 1,
      anon_sym_LBRACK,
    ACTIONS(873), 1,
      anon_sym_RPAREN,
  [9273] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_COMMA,
    ACTIONS(875), 1,
      anon_sym_RPAREN,
    STATE(226), 1,
      aux_sym_parameter_list_repeat1,
  [9286] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_COMMA,
    ACTIONS(880), 1,
      anon_sym_RPAREN,
    STATE(256), 1,
      aux_sym_argument_list_repeat1,
  [9299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [9308] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_COMMA,
    ACTIONS(884), 1,
      anon_sym_RPAREN,
    STATE(226), 1,
      aux_sym_parameter_list_repeat1,
  [9321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      sym_identifier,
    STATE(276), 2,
      sym__interface_body,
      sym_method_spec,
  [9332] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_COMMA,
    ACTIONS(889), 1,
      anon_sym_RBRACK,
    STATE(260), 1,
      aux_sym_array_expression_repeat1,
  [9345] = 4,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_LF,
    ACTIONS(893), 1,
      anon_sym_RBRACE,
    STATE(229), 1,
      aux_sym_interface_definition_repeat1,
  [9358] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      sym_identifier,
    ACTIONS(897), 1,
      anon_sym_RPAREN,
    STATE(225), 1,
      sym_parameter,
  [9371] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      sym_identifier,
    ACTIONS(899), 1,
      anon_sym_RBRACE,
    STATE(264), 1,
      sym_field_definition,
  [9384] = 4,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(901), 1,
      anon_sym_LF,
    ACTIONS(903), 1,
      anon_sym_RBRACE,
    STATE(235), 1,
      aux_sym_field_definition_list_repeat1,
  [9397] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      sym_identifier,
    ACTIONS(905), 1,
      anon_sym_RBRACE,
    STATE(274), 1,
      sym_field_definition,
  [9410] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_PIPE,
    ACTIONS(664), 1,
      anon_sym_LBRACK,
    ACTIONS(907), 1,
      anon_sym_EQ,
  [9423] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    ACTIONS(909), 1,
      anon_sym_RPAREN,
    STATE(256), 1,
      aux_sym_argument_list_repeat1,
  [9436] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_COMMA,
    ACTIONS(913), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      aux_sym_struct_initialization_repeat1,
  [9449] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      anon_sym_COMMA,
    ACTIONS(917), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      aux_sym_struct_initialization_repeat1,
  [9462] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      sym_identifier,
    ACTIONS(919), 1,
      anon_sym_RBRACE,
    STATE(272), 1,
      sym_keyed_element,
  [9475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      sym_identifier,
    STATE(166), 1,
      sym_function_call,
  [9485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9501] = 3,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(923), 1,
      anon_sym_LF,
    ACTIONS(925), 1,
      anon_sym_RBRACE,
  [9511] = 3,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(927), 1,
      anon_sym_LF,
    ACTIONS(929), 1,
      anon_sym_RBRACE,
  [9521] = 3,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_RBRACE,
    ACTIONS(931), 1,
      anon_sym_LF,
  [9531] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_block,
  [9541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_LPAREN,
    STATE(93), 1,
      sym_self_parameter_list,
  [9551] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      sym_identifier,
    STATE(272), 1,
      sym_keyed_element,
  [9561] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    STATE(150), 1,
      sym_block,
  [9571] = 3,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_RBRACE,
    ACTIONS(933), 1,
      anon_sym_LF,
  [9581] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      sym_identifier,
    STATE(47), 1,
      sym_function_call,
  [9591] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_LPAREN,
    STATE(95), 1,
      sym_parameter_list,
  [9601] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      sym_identifier,
    STATE(273), 1,
      sym_parameter,
  [9611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      sym_identifier,
    STATE(274), 1,
      sym_field_definition,
  [9621] = 3,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_LF,
    ACTIONS(941), 1,
      anon_sym_RBRACE,
  [9631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      anon_sym_LBRACE,
    STATE(321), 1,
      sym_field_definition_list,
  [9641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      anon_sym_COMMA,
  [9648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      anon_sym_RPAREN,
  [9655] = 2,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_LF,
  [9662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      sym_identifier,
  [9669] = 2,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_LF,
  [9676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 1,
      anon_sym_LBRACE,
  [9683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_COMMA,
  [9690] = 2,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_LF,
  [9697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_RBRACE,
  [9704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      anon_sym_LPAREN,
  [9711] = 2,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(965), 1,
      anon_sym_LF,
  [9718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      anon_sym_RBRACE,
  [9725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      sym_identifier,
  [9732] = 2,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(971), 1,
      anon_sym_LF,
  [9739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 1,
      anon_sym_RBRACE,
  [9746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 1,
      sym_identifier,
  [9753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      anon_sym_RBRACE,
  [9760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 1,
      anon_sym_self,
  [9767] = 2,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(981), 1,
      anon_sym_LF,
  [9774] = 2,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(983), 1,
      anon_sym_LF,
  [9781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 1,
      sym_identifier,
  [9788] = 2,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(987), 1,
      anon_sym_LF,
  [9795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 1,
      anon_sym_AMP,
  [9802] = 2,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(991), 1,
      anon_sym_LF,
  [9809] = 2,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(993), 1,
      anon_sym_LF,
  [9816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 1,
      anon_sym_self,
  [9823] = 2,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(997), 1,
      anon_sym_LF,
  [9830] = 2,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(999), 1,
      anon_sym_LF,
  [9837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      ts_builtin_sym_end,
  [9844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      anon_sym_COMMA,
  [9851] = 2,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(1005), 1,
      anon_sym_LF,
  [9858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1007), 1,
      sym_identifier,
  [9865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 1,
      sym_identifier,
  [9872] = 2,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(1011), 1,
      anon_sym_LF,
  [9879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1013), 1,
      anon_sym_RPAREN,
  [9886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 1,
      sym_identifier,
  [9893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 82,
  [SMALL_STATE(4)] = 164,
  [SMALL_STATE(5)] = 243,
  [SMALL_STATE(6)] = 322,
  [SMALL_STATE(7)] = 398,
  [SMALL_STATE(8)] = 442,
  [SMALL_STATE(9)] = 486,
  [SMALL_STATE(10)] = 544,
  [SMALL_STATE(11)] = 588,
  [SMALL_STATE(12)] = 632,
  [SMALL_STATE(13)] = 674,
  [SMALL_STATE(14)] = 716,
  [SMALL_STATE(15)] = 775,
  [SMALL_STATE(16)] = 834,
  [SMALL_STATE(17)] = 893,
  [SMALL_STATE(18)] = 952,
  [SMALL_STATE(19)] = 1011,
  [SMALL_STATE(20)] = 1052,
  [SMALL_STATE(21)] = 1111,
  [SMALL_STATE(22)] = 1150,
  [SMALL_STATE(23)] = 1187,
  [SMALL_STATE(24)] = 1246,
  [SMALL_STATE(25)] = 1305,
  [SMALL_STATE(26)] = 1364,
  [SMALL_STATE(27)] = 1401,
  [SMALL_STATE(28)] = 1442,
  [SMALL_STATE(29)] = 1501,
  [SMALL_STATE(30)] = 1538,
  [SMALL_STATE(31)] = 1597,
  [SMALL_STATE(32)] = 1656,
  [SMALL_STATE(33)] = 1692,
  [SMALL_STATE(34)] = 1728,
  [SMALL_STATE(35)] = 1764,
  [SMALL_STATE(36)] = 1800,
  [SMALL_STATE(37)] = 1836,
  [SMALL_STATE(38)] = 1872,
  [SMALL_STATE(39)] = 1908,
  [SMALL_STATE(40)] = 1944,
  [SMALL_STATE(41)] = 1980,
  [SMALL_STATE(42)] = 2016,
  [SMALL_STATE(43)] = 2068,
  [SMALL_STATE(44)] = 2118,
  [SMALL_STATE(45)] = 2174,
  [SMALL_STATE(46)] = 2230,
  [SMALL_STATE(47)] = 2278,
  [SMALL_STATE(48)] = 2314,
  [SMALL_STATE(49)] = 2358,
  [SMALL_STATE(50)] = 2394,
  [SMALL_STATE(51)] = 2450,
  [SMALL_STATE(52)] = 2506,
  [SMALL_STATE(53)] = 2542,
  [SMALL_STATE(54)] = 2598,
  [SMALL_STATE(55)] = 2634,
  [SMALL_STATE(56)] = 2670,
  [SMALL_STATE(57)] = 2706,
  [SMALL_STATE(58)] = 2742,
  [SMALL_STATE(59)] = 2778,
  [SMALL_STATE(60)] = 2814,
  [SMALL_STATE(61)] = 2870,
  [SMALL_STATE(62)] = 2926,
  [SMALL_STATE(63)] = 2982,
  [SMALL_STATE(64)] = 3038,
  [SMALL_STATE(65)] = 3094,
  [SMALL_STATE(66)] = 3130,
  [SMALL_STATE(67)] = 3166,
  [SMALL_STATE(68)] = 3222,
  [SMALL_STATE(69)] = 3258,
  [SMALL_STATE(70)] = 3314,
  [SMALL_STATE(71)] = 3350,
  [SMALL_STATE(72)] = 3406,
  [SMALL_STATE(73)] = 3462,
  [SMALL_STATE(74)] = 3498,
  [SMALL_STATE(75)] = 3534,
  [SMALL_STATE(76)] = 3590,
  [SMALL_STATE(77)] = 3646,
  [SMALL_STATE(78)] = 3702,
  [SMALL_STATE(79)] = 3758,
  [SMALL_STATE(80)] = 3814,
  [SMALL_STATE(81)] = 3870,
  [SMALL_STATE(82)] = 3926,
  [SMALL_STATE(83)] = 3982,
  [SMALL_STATE(84)] = 4038,
  [SMALL_STATE(85)] = 4094,
  [SMALL_STATE(86)] = 4150,
  [SMALL_STATE(87)] = 4206,
  [SMALL_STATE(88)] = 4262,
  [SMALL_STATE(89)] = 4318,
  [SMALL_STATE(90)] = 4374,
  [SMALL_STATE(91)] = 4430,
  [SMALL_STATE(92)] = 4486,
  [SMALL_STATE(93)] = 4542,
  [SMALL_STATE(94)] = 4587,
  [SMALL_STATE(95)] = 4632,
  [SMALL_STATE(96)] = 4677,
  [SMALL_STATE(97)] = 4722,
  [SMALL_STATE(98)] = 4763,
  [SMALL_STATE(99)] = 4821,
  [SMALL_STATE(100)] = 4861,
  [SMALL_STATE(101)] = 4901,
  [SMALL_STATE(102)] = 4959,
  [SMALL_STATE(103)] = 4997,
  [SMALL_STATE(104)] = 5035,
  [SMALL_STATE(105)] = 5093,
  [SMALL_STATE(106)] = 5151,
  [SMALL_STATE(107)] = 5191,
  [SMALL_STATE(108)] = 5233,
  [SMALL_STATE(109)] = 5275,
  [SMALL_STATE(110)] = 5312,
  [SMALL_STATE(111)] = 5349,
  [SMALL_STATE(112)] = 5388,
  [SMALL_STATE(113)] = 5427,
  [SMALL_STATE(114)] = 5466,
  [SMALL_STATE(115)] = 5499,
  [SMALL_STATE(116)] = 5548,
  [SMALL_STATE(117)] = 5587,
  [SMALL_STATE(118)] = 5626,
  [SMALL_STATE(119)] = 5665,
  [SMALL_STATE(120)] = 5714,
  [SMALL_STATE(121)] = 5763,
  [SMALL_STATE(122)] = 5812,
  [SMALL_STATE(123)] = 5865,
  [SMALL_STATE(124)] = 5920,
  [SMALL_STATE(125)] = 5959,
  [SMALL_STATE(126)] = 5998,
  [SMALL_STATE(127)] = 6051,
  [SMALL_STATE(128)] = 6100,
  [SMALL_STATE(129)] = 6135,
  [SMALL_STATE(130)] = 6168,
  [SMALL_STATE(131)] = 6207,
  [SMALL_STATE(132)] = 6240,
  [SMALL_STATE(133)] = 6281,
  [SMALL_STATE(134)] = 6324,
  [SMALL_STATE(135)] = 6369,
  [SMALL_STATE(136)] = 6402,
  [SMALL_STATE(137)] = 6435,
  [SMALL_STATE(138)] = 6488,
  [SMALL_STATE(139)] = 6527,
  [SMALL_STATE(140)] = 6576,
  [SMALL_STATE(141)] = 6613,
  [SMALL_STATE(142)] = 6645,
  [SMALL_STATE(143)] = 6677,
  [SMALL_STATE(144)] = 6729,
  [SMALL_STATE(145)] = 6781,
  [SMALL_STATE(146)] = 6813,
  [SMALL_STATE(147)] = 6865,
  [SMALL_STATE(148)] = 6897,
  [SMALL_STATE(149)] = 6929,
  [SMALL_STATE(150)] = 6961,
  [SMALL_STATE(151)] = 6993,
  [SMALL_STATE(152)] = 7045,
  [SMALL_STATE(153)] = 7077,
  [SMALL_STATE(154)] = 7109,
  [SMALL_STATE(155)] = 7161,
  [SMALL_STATE(156)] = 7193,
  [SMALL_STATE(157)] = 7225,
  [SMALL_STATE(158)] = 7257,
  [SMALL_STATE(159)] = 7289,
  [SMALL_STATE(160)] = 7341,
  [SMALL_STATE(161)] = 7373,
  [SMALL_STATE(162)] = 7425,
  [SMALL_STATE(163)] = 7457,
  [SMALL_STATE(164)] = 7489,
  [SMALL_STATE(165)] = 7521,
  [SMALL_STATE(166)] = 7573,
  [SMALL_STATE(167)] = 7605,
  [SMALL_STATE(168)] = 7637,
  [SMALL_STATE(169)] = 7689,
  [SMALL_STATE(170)] = 7721,
  [SMALL_STATE(171)] = 7773,
  [SMALL_STATE(172)] = 7805,
  [SMALL_STATE(173)] = 7853,
  [SMALL_STATE(174)] = 7905,
  [SMALL_STATE(175)] = 7951,
  [SMALL_STATE(176)] = 7983,
  [SMALL_STATE(177)] = 8027,
  [SMALL_STATE(178)] = 8067,
  [SMALL_STATE(179)] = 8099,
  [SMALL_STATE(180)] = 8127,
  [SMALL_STATE(181)] = 8155,
  [SMALL_STATE(182)] = 8183,
  [SMALL_STATE(183)] = 8210,
  [SMALL_STATE(184)] = 8237,
  [SMALL_STATE(185)] = 8264,
  [SMALL_STATE(186)] = 8289,
  [SMALL_STATE(187)] = 8314,
  [SMALL_STATE(188)] = 8337,
  [SMALL_STATE(189)] = 8349,
  [SMALL_STATE(190)] = 8365,
  [SMALL_STATE(191)] = 8387,
  [SMALL_STATE(192)] = 8407,
  [SMALL_STATE(193)] = 8427,
  [SMALL_STATE(194)] = 8447,
  [SMALL_STATE(195)] = 8467,
  [SMALL_STATE(196)] = 8479,
  [SMALL_STATE(197)] = 8491,
  [SMALL_STATE(198)] = 8511,
  [SMALL_STATE(199)] = 8525,
  [SMALL_STATE(200)] = 8537,
  [SMALL_STATE(201)] = 8556,
  [SMALL_STATE(202)] = 8572,
  [SMALL_STATE(203)] = 8588,
  [SMALL_STATE(204)] = 8604,
  [SMALL_STATE(205)] = 8614,
  [SMALL_STATE(206)] = 8628,
  [SMALL_STATE(207)] = 8640,
  [SMALL_STATE(208)] = 8652,
  [SMALL_STATE(209)] = 8668,
  [SMALL_STATE(210)] = 8682,
  [SMALL_STATE(211)] = 8694,
  [SMALL_STATE(212)] = 8710,
  [SMALL_STATE(213)] = 8722,
  [SMALL_STATE(214)] = 8738,
  [SMALL_STATE(215)] = 8752,
  [SMALL_STATE(216)] = 8768,
  [SMALL_STATE(217)] = 8780,
  [SMALL_STATE(218)] = 8796,
  [SMALL_STATE(219)] = 8810,
  [SMALL_STATE(220)] = 8822,
  [SMALL_STATE(221)] = 8836,
  [SMALL_STATE(222)] = 8850,
  [SMALL_STATE(223)] = 8866,
  [SMALL_STATE(224)] = 8880,
  [SMALL_STATE(225)] = 8889,
  [SMALL_STATE(226)] = 8902,
  [SMALL_STATE(227)] = 8915,
  [SMALL_STATE(228)] = 8928,
  [SMALL_STATE(229)] = 8937,
  [SMALL_STATE(230)] = 8950,
  [SMALL_STATE(231)] = 8963,
  [SMALL_STATE(232)] = 8976,
  [SMALL_STATE(233)] = 8989,
  [SMALL_STATE(234)] = 9002,
  [SMALL_STATE(235)] = 9015,
  [SMALL_STATE(236)] = 9028,
  [SMALL_STATE(237)] = 9041,
  [SMALL_STATE(238)] = 9054,
  [SMALL_STATE(239)] = 9067,
  [SMALL_STATE(240)] = 9080,
  [SMALL_STATE(241)] = 9093,
  [SMALL_STATE(242)] = 9106,
  [SMALL_STATE(243)] = 9119,
  [SMALL_STATE(244)] = 9132,
  [SMALL_STATE(245)] = 9145,
  [SMALL_STATE(246)] = 9158,
  [SMALL_STATE(247)] = 9171,
  [SMALL_STATE(248)] = 9184,
  [SMALL_STATE(249)] = 9197,
  [SMALL_STATE(250)] = 9210,
  [SMALL_STATE(251)] = 9223,
  [SMALL_STATE(252)] = 9236,
  [SMALL_STATE(253)] = 9249,
  [SMALL_STATE(254)] = 9260,
  [SMALL_STATE(255)] = 9273,
  [SMALL_STATE(256)] = 9286,
  [SMALL_STATE(257)] = 9299,
  [SMALL_STATE(258)] = 9308,
  [SMALL_STATE(259)] = 9321,
  [SMALL_STATE(260)] = 9332,
  [SMALL_STATE(261)] = 9345,
  [SMALL_STATE(262)] = 9358,
  [SMALL_STATE(263)] = 9371,
  [SMALL_STATE(264)] = 9384,
  [SMALL_STATE(265)] = 9397,
  [SMALL_STATE(266)] = 9410,
  [SMALL_STATE(267)] = 9423,
  [SMALL_STATE(268)] = 9436,
  [SMALL_STATE(269)] = 9449,
  [SMALL_STATE(270)] = 9462,
  [SMALL_STATE(271)] = 9475,
  [SMALL_STATE(272)] = 9485,
  [SMALL_STATE(273)] = 9493,
  [SMALL_STATE(274)] = 9501,
  [SMALL_STATE(275)] = 9511,
  [SMALL_STATE(276)] = 9521,
  [SMALL_STATE(277)] = 9531,
  [SMALL_STATE(278)] = 9541,
  [SMALL_STATE(279)] = 9551,
  [SMALL_STATE(280)] = 9561,
  [SMALL_STATE(281)] = 9571,
  [SMALL_STATE(282)] = 9581,
  [SMALL_STATE(283)] = 9591,
  [SMALL_STATE(284)] = 9601,
  [SMALL_STATE(285)] = 9611,
  [SMALL_STATE(286)] = 9621,
  [SMALL_STATE(287)] = 9631,
  [SMALL_STATE(288)] = 9641,
  [SMALL_STATE(289)] = 9648,
  [SMALL_STATE(290)] = 9655,
  [SMALL_STATE(291)] = 9662,
  [SMALL_STATE(292)] = 9669,
  [SMALL_STATE(293)] = 9676,
  [SMALL_STATE(294)] = 9683,
  [SMALL_STATE(295)] = 9690,
  [SMALL_STATE(296)] = 9697,
  [SMALL_STATE(297)] = 9704,
  [SMALL_STATE(298)] = 9711,
  [SMALL_STATE(299)] = 9718,
  [SMALL_STATE(300)] = 9725,
  [SMALL_STATE(301)] = 9732,
  [SMALL_STATE(302)] = 9739,
  [SMALL_STATE(303)] = 9746,
  [SMALL_STATE(304)] = 9753,
  [SMALL_STATE(305)] = 9760,
  [SMALL_STATE(306)] = 9767,
  [SMALL_STATE(307)] = 9774,
  [SMALL_STATE(308)] = 9781,
  [SMALL_STATE(309)] = 9788,
  [SMALL_STATE(310)] = 9795,
  [SMALL_STATE(311)] = 9802,
  [SMALL_STATE(312)] = 9809,
  [SMALL_STATE(313)] = 9816,
  [SMALL_STATE(314)] = 9823,
  [SMALL_STATE(315)] = 9830,
  [SMALL_STATE(316)] = 9837,
  [SMALL_STATE(317)] = 9844,
  [SMALL_STATE(318)] = 9851,
  [SMALL_STATE(319)] = 9858,
  [SMALL_STATE(320)] = 9865,
  [SMALL_STATE(321)] = 9872,
  [SMALL_STATE(322)] = 9879,
  [SMALL_STATE(323)] = 9886,
  [SMALL_STATE(324)] = 9893,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 2, .production_id = 17),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 2, .production_id = 17),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_expression_repeat1, 2, .production_id = 45),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_expression_repeat1, 2, .production_id = 45),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_expression_repeat1, 2, .production_id = 45), SHIFT_REPEAT(282),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 3, .production_id = 34),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 3, .production_id = 34),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 16),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 16),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_field, 2, .production_id = 32),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_field, 2, .production_id = 32),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 12),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 12),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_expression, 3, .production_id = 25),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_error_expression, 3, .production_id = 25),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3, .production_id = 42),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3, .production_id = 42),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 31),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 31),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4, .production_id = 49),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4, .production_id = 49),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_expression, 5, .production_id = 56),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_expression, 5, .production_id = 56),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_initialization, 5, .production_id = 53),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_initialization, 5, .production_id = 53),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_initialization, 5, .production_id = 43),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_initialization, 5, .production_id = 43),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_expression, 4, .production_id = 44),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_expression, 4, .production_id = 44),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_initialization, 4, .production_id = 43),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_initialization, 4, .production_id = 43),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_initialization, 4, .production_id = 29),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_initialization, 4, .production_id = 29),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 4, .production_id = 39),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 4, .production_id = 39),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_expression_repeat1, 1, .production_id = 33),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_expression_repeat1, 1, .production_id = 33),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 30),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 30),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_initialization, 3, .production_id = 29),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_initialization, 3, .production_id = 29),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 3, .production_id = 26),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 3, .production_id = 26),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_initialization, 6, .production_id = 53),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_initialization, 6, .production_id = 53),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 3, .production_id = 13),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 3, .production_id = 13),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, .production_id = 13),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, .production_id = 13),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_expression, 6, .production_id = 58),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_expression, 6, .production_id = 58),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_expression, 5, .production_id = 55),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_expression, 5, .production_id = 55),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_catch_block, 5, .production_id = 59),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_catch_block, 5, .production_id = 59),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 2),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 2),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 2),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null, 1),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null, 1),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_spec, 3, .production_id = 24),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_spec, 3, .production_id = 24),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_spec, 2, .production_id = 9),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_spec, 2, .production_id = 9),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [486] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_expression_repeat1, 2, .production_id = 45), SHIFT_REPEAT(271),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1, .production_id = 6),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1, .production_id = 6),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 6, .production_id = 57),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 6, .production_id = 57),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 5, .production_id = 47),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 5, .production_id = 47),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 4, .production_id = 41),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 4, .production_id = 41),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyed_element, 3, .production_id = 52),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 42),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, .production_id = 13),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2, .production_id = 13),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_expression_repeat1, 2, .production_id = 13),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 5, .production_id = 46),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 5, .production_id = 46),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_parameter_list, 4),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter_list, 4),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_parameter_list, 3),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter_list, 3),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_parameter_list, 2),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter_list, 2),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 4),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(291),
  [640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(320),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(319),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_type, 3, .production_id = 11),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sum_type, 3, .production_id = 18),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [672] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2, .production_id = 27), SHIFT_REPEAT(85),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2, .production_id = 27),
  [677] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2, .production_id = 27), SHIFT_REPEAT(191),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_type, 3, .production_id = 19),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_type, 2, .production_id = 5),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 4, .production_id = 36),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 2, .production_id = 4),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_definition, 2, .production_id = 4),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_spec, 4, .production_id = 38),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_spec, 4, .production_id = 38),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 2),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 4),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_type, 3, .production_id = 19),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 1, .production_id = 15),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 1, .production_id = 15),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sum_type, 3, .production_id = 18),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_embetted_expr, 3, .production_id = 13),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embetted_expr, 3, .production_id = 13),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_spec, 3, .production_id = 23),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_spec, 3, .production_id = 23),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 4, .production_id = 36),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_type, 3, .production_id = 11),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_type, 2, .production_id = 5),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 10),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter, 1),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [786] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(284),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [793] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 2),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter, 2, .production_id = 22),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [801] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(259),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_definition_repeat1, 2),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [840] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_initialization_repeat1, 2, .production_id = 54), SHIFT_REPEAT(279),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_initialization_repeat1, 2, .production_id = 54),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 1),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 28),
  [851] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 28),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [859] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(6),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [864] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_definition_list_repeat1, 2, .production_id = 21), SHIFT_REPEAT(285),
  [867] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_definition_list_repeat1, 2, .production_id = 21),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_initialization_repeat1, 2, .production_id = 51),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [877] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 50), SHIFT_REPEAT(79),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 50),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter, 3, .production_id = 37),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [886] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_expression_repeat1, 2, .production_id = 40), SHIFT_REPEAT(88),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_expression_repeat1, 2, .production_id = 40),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_definition_list_repeat1, 2, .production_id = 8),
  [925] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_definition_list_repeat1, 2, .production_id = 8),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_throw_statement, 2, .production_id = 14),
  [929] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_throw_statement, 2, .production_id = 14),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 48),
  [941] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 48),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 7, .production_id = 3),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition_list, 5, .production_id = 20),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 35),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition_list, 4, .production_id = 8),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 2),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 7),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition_list, 4, .production_id = 20),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition_list, 3, .production_id = 8),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 6, .production_id = 3),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 4, .production_id = 3),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition_list, 2),
  [1001] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 5, .production_id = 3),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 3, .production_id = 1),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_czlang(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
