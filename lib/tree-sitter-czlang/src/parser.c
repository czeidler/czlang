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
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
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
  [51] = 7,
  [52] = 49,
  [53] = 53,
  [54] = 53,
  [55] = 55,
  [56] = 56,
  [57] = 56,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 59,
  [62] = 58,
  [63] = 55,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 10,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 70,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 66,
  [81] = 12,
  [82] = 82,
  [83] = 71,
  [84] = 84,
  [85] = 85,
  [86] = 72,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 68,
  [92] = 70,
  [93] = 93,
  [94] = 11,
  [95] = 8,
  [96] = 96,
  [97] = 75,
  [98] = 79,
  [99] = 78,
  [100] = 76,
  [101] = 77,
  [102] = 76,
  [103] = 75,
  [104] = 9,
  [105] = 77,
  [106] = 78,
  [107] = 79,
  [108] = 66,
  [109] = 14,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 13,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 46,
  [121] = 17,
  [122] = 34,
  [123] = 20,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 15,
  [128] = 128,
  [129] = 129,
  [130] = 18,
  [131] = 19,
  [132] = 30,
  [133] = 29,
  [134] = 134,
  [135] = 16,
  [136] = 110,
  [137] = 118,
  [138] = 7,
  [139] = 139,
  [140] = 129,
  [141] = 39,
  [142] = 31,
  [143] = 143,
  [144] = 144,
  [145] = 43,
  [146] = 35,
  [147] = 147,
  [148] = 42,
  [149] = 41,
  [150] = 150,
  [151] = 47,
  [152] = 152,
  [153] = 143,
  [154] = 44,
  [155] = 40,
  [156] = 147,
  [157] = 37,
  [158] = 38,
  [159] = 159,
  [160] = 159,
  [161] = 36,
  [162] = 33,
  [163] = 21,
  [164] = 24,
  [165] = 144,
  [166] = 32,
  [167] = 28,
  [168] = 29,
  [169] = 22,
  [170] = 30,
  [171] = 19,
  [172] = 34,
  [173] = 25,
  [174] = 26,
  [175] = 23,
  [176] = 150,
  [177] = 48,
  [178] = 27,
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
  [193] = 189,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 194,
  [200] = 200,
  [201] = 201,
  [202] = 192,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 190,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 205,
  [216] = 197,
  [217] = 217,
  [218] = 211,
  [219] = 196,
  [220] = 188,
  [221] = 221,
  [222] = 198,
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
  [235] = 224,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 231,
  [243] = 243,
  [244] = 232,
  [245] = 245,
  [246] = 246,
  [247] = 230,
  [248] = 248,
  [249] = 238,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 245,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 234,
  [265] = 265,
  [266] = 236,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 237,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 275,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 278,
  [282] = 282,
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
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 297,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 292,
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
  [317] = 292,
  [318] = 318,
  [319] = 293,
  [320] = 320,
  [321] = 321,
  [322] = 303,
  [323] = 321,
  [324] = 294,
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
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
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
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 5},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 5},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 5},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 5},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 5},
  [171] = {.lex_state = 5},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 2},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 5},
  [177] = {.lex_state = 2},
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
  [189] = {.lex_state = 3},
  [190] = {.lex_state = 4},
  [191] = {.lex_state = 3},
  [192] = {.lex_state = 4},
  [193] = {.lex_state = 3},
  [194] = {.lex_state = 3},
  [195] = {.lex_state = 4},
  [196] = {.lex_state = 4},
  [197] = {.lex_state = 4},
  [198] = {.lex_state = 4},
  [199] = {.lex_state = 3},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 1},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 1},
  [208] = {.lex_state = 1},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 3},
  [211] = {.lex_state = 4},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 3},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 1},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 4},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 1},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 1},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 1},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 1},
  [229] = {.lex_state = 1},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 4},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 1},
  [240] = {.lex_state = 1},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 1},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 4},
  [251] = {.lex_state = 1},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 1},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 1},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 1},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 4},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 1},
  [273] = {.lex_state = 1},
  [274] = {.lex_state = 1},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 1},
  [284] = {.lex_state = 1},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 1},
  [289] = {.lex_state = 1},
  [290] = {.lex_state = 1},
  [291] = {.lex_state = 1},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 1},
  [296] = {.lex_state = 1},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 1},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 1},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 1},
  [308] = {.lex_state = 1},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 1},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 1},
  [315] = {.lex_state = 1},
  [316] = {.lex_state = 1},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 4},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
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
    [sym_source_file] = STATE(305),
    [sym__definition] = STATE(186),
    [sym_function_definition] = STATE(288),
    [sym_struct_definition] = STATE(288),
    [sym_interface_definition] = STATE(288),
    [aux_sym_source_file_repeat1] = STATE(186),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_fun] = ACTIONS(7),
    [anon_sym_struct] = ACTIONS(9),
    [anon_sym_interface] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
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
      anon_sym_RBRACE,
    ACTIONS(25), 1,
      anon_sym_return,
    ACTIONS(27), 1,
      anon_sym__,
    ACTIONS(29), 1,
      anon_sym_throw,
    ACTIONS(31), 1,
      anon_sym_var,
    ACTIONS(33), 1,
      anon_sym_typeof,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_if,
    ACTIONS(41), 1,
      sym_float_literal,
    STATE(293), 1,
      sym__statement_list,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(39), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(226), 6,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      sym_throw_statement,
      sym_var_declaration,
      sym_if_statement,
    STATE(111), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [78] = 19,
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
    ACTIONS(25), 1,
      anon_sym_return,
    ACTIONS(27), 1,
      anon_sym__,
    ACTIONS(29), 1,
      anon_sym_throw,
    ACTIONS(31), 1,
      anon_sym_var,
    ACTIONS(33), 1,
      anon_sym_typeof,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_if,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(319), 1,
      sym__statement_list,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(39), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(226), 6,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      sym_throw_statement,
      sym_var_declaration,
      sym_if_statement,
    STATE(111), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [156] = 18,
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
    ACTIONS(25), 1,
      anon_sym_return,
    ACTIONS(27), 1,
      anon_sym__,
    ACTIONS(29), 1,
      anon_sym_throw,
    ACTIONS(31), 1,
      anon_sym_var,
    ACTIONS(33), 1,
      anon_sym_typeof,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_if,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(39), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(283), 6,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      sym_throw_statement,
      sym_var_declaration,
      sym_if_statement,
    STATE(111), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [231] = 18,
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
    ACTIONS(25), 1,
      anon_sym_return,
    ACTIONS(27), 1,
      anon_sym__,
    ACTIONS(29), 1,
      anon_sym_throw,
    ACTIONS(31), 1,
      anon_sym_var,
    ACTIONS(33), 1,
      anon_sym_typeof,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_if,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(39), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(283), 6,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      sym_throw_statement,
      sym_var_declaration,
      sym_if_statement,
    STATE(111), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [306] = 17,
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
    ACTIONS(25), 1,
      anon_sym_return,
    ACTIONS(27), 1,
      anon_sym__,
    ACTIONS(29), 1,
      anon_sym_throw,
    ACTIONS(31), 1,
      anon_sym_var,
    ACTIONS(33), 1,
      anon_sym_typeof,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_if,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(39), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(283), 6,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      sym_throw_statement,
      sym_var_declaration,
      sym_if_statement,
    STATE(111), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [378] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      sym_argument_list,
    ACTIONS(53), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 22,
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
  [422] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_catch,
    STATE(36), 1,
      sym_catch_block,
    ACTIONS(59), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 23,
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
  [464] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym_selector_expression_repeat1,
    STATE(28), 1,
      sym_selector_field,
    ACTIONS(67), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(65), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 21,
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
  [508] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    STATE(8), 1,
      sym_argument_list,
    ACTIONS(71), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 23,
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
  [550] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym_selector_expression_repeat1,
    STATE(28), 1,
      sym_selector_field,
    ACTIONS(77), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(75), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 21,
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
  [594] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym_selector_expression_repeat1,
    STATE(28), 1,
      sym_selector_field,
    ACTIONS(67), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(82), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(80), 21,
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
  [638] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(84), 24,
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
  [675] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      sym_selector_field,
    ACTIONS(90), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(88), 22,
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
  [716] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(9), 1,
      sym_selector_field,
    ACTIONS(96), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(94), 23,
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
  [755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(98), 24,
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
  [792] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      sym_selector_field,
    ACTIONS(104), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(102), 22,
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
  [833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(106), 24,
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
  [870] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_PIPE,
    STATE(9), 1,
      sym_selector_field,
    ACTIONS(104), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(110), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(114), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(116), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(102), 13,
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
  [918] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(118), 23,
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
  [954] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(122), 23,
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
  [990] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(122), 23,
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
  [1026] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(126), 23,
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
  [1062] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(130), 23,
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
  [1098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(134), 23,
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
  [1134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(138), 23,
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
  [1170] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(142), 23,
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
  [1206] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(146), 23,
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
  [1242] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_PIPE,
    ACTIONS(154), 1,
      anon_sym_AMP_AMP,
    STATE(9), 1,
      sym_selector_field,
    ACTIONS(110), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(152), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(114), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(150), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(116), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(102), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
  [1294] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_PIPE,
    STATE(9), 1,
      sym_selector_field,
    ACTIONS(110), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(152), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(114), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(150), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(116), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(102), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1344] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(156), 23,
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
  [1380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 23,
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
  [1416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(160), 23,
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
  [1452] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      sym_selector_field,
    ACTIONS(110), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(104), 3,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(116), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(102), 16,
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
  [1496] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(164), 23,
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
  [1532] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(168), 23,
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
  [1568] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(172), 23,
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
  [1604] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(176), 23,
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
  [1640] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(180), 23,
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
  [1676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(184), 23,
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
  [1712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(188), 23,
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
  [1748] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(192), 23,
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
  [1784] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(196), 23,
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
  [1820] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(184), 23,
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
  [1856] = 12,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_null,
    ACTIONS(27), 1,
      anon_sym__,
    ACTIONS(200), 1,
      anon_sym_LF,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LBRACK,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(33), 4,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_typeof,
    ACTIONS(210), 4,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
    STATE(128), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [1910] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(214), 23,
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
  [1946] = 3,
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
  [1982] = 3,
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
  [2018] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_null,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_RBRACK,
    ACTIONS(238), 1,
      anon_sym__,
    ACTIONS(240), 1,
      anon_sym_typeof,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(246), 1,
      sym_float_literal,
    ACTIONS(230), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(244), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(86), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [2073] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      anon_sym_AMP,
    ACTIONS(256), 1,
      anon_sym_LBRACE,
    STATE(299), 1,
      sym_block,
    STATE(200), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(254), 15,
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
  [2118] = 6,
    ACTIONS(49), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    STATE(95), 1,
      sym_argument_list,
    ACTIONS(53), 23,
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
  [2159] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_null,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 1,
      anon_sym__,
    ACTIONS(240), 1,
      anon_sym_typeof,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      anon_sym_RBRACK,
    ACTIONS(266), 1,
      sym_float_literal,
    ACTIONS(230), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(264), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(72), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [2214] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_null,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 1,
      anon_sym__,
    ACTIONS(240), 1,
      anon_sym_typeof,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      anon_sym_COLON,
    ACTIONS(272), 1,
      sym_float_literal,
    ACTIONS(230), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(270), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(144), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [2269] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_null,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 1,
      anon_sym__,
    ACTIONS(240), 1,
      anon_sym_typeof,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(274), 1,
      anon_sym_COLON,
    ACTIONS(278), 1,
      sym_float_literal,
    ACTIONS(230), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(276), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(165), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [2324] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_null,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 1,
      anon_sym__,
    ACTIONS(240), 1,
      anon_sym_typeof,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      anon_sym_RBRACK,
    ACTIONS(284), 1,
      sym_float_literal,
    ACTIONS(230), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(282), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(156), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [2379] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_null,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 1,
      anon_sym__,
    ACTIONS(240), 1,
      anon_sym_typeof,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(286), 1,
      anon_sym_RBRACK,
    ACTIONS(290), 1,
      sym_float_literal,
    ACTIONS(230), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(288), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(153), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [2434] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_null,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 1,
      anon_sym__,
    ACTIONS(240), 1,
      anon_sym_typeof,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      anon_sym_RBRACK,
    ACTIONS(296), 1,
      sym_float_literal,
    ACTIONS(230), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(294), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(143), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [2489] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_null,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 1,
      anon_sym__,
    ACTIONS(240), 1,
      anon_sym_typeof,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(298), 1,
      anon_sym_RBRACK,
    ACTIONS(302), 1,
      sym_float_literal,
    ACTIONS(230), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(300), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(176), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [2544] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_null,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 1,
      anon_sym__,
    ACTIONS(240), 1,
      anon_sym_typeof,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(304), 1,
      anon_sym_RPAREN,
    ACTIONS(308), 1,
      sym_float_literal,
    ACTIONS(230), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(306), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(71), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [2599] = 8,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(310), 1,
      sym_identifier,
    ACTIONS(312), 1,
      anon_sym_LF,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    ACTIONS(316), 1,
      anon_sym_AMP,
    ACTIONS(320), 1,
      anon_sym_RBRACE,
    STATE(221), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(318), 15,
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
  [2644] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_null,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 1,
      anon_sym__,
    ACTIONS(240), 1,
      anon_sym_typeof,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(322), 1,
      anon_sym_RPAREN,
    ACTIONS(326), 1,
      sym_float_literal,
    ACTIONS(230), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(324), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(83), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [2699] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_null,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 1,
      anon_sym__,
    ACTIONS(240), 1,
      anon_sym_typeof,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(328), 1,
      anon_sym_RBRACK,
    ACTIONS(332), 1,
      sym_float_literal,
    ACTIONS(230), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(330), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(150), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [2754] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_null,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 1,
      anon_sym__,
    ACTIONS(240), 1,
      anon_sym_typeof,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_RBRACK,
    ACTIONS(338), 1,
      sym_float_literal,
    ACTIONS(230), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(336), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(147), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [2809] = 8,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    ACTIONS(316), 1,
      anon_sym_AMP,
    ACTIONS(340), 1,
      sym_identifier,
    ACTIONS(342), 1,
      anon_sym_LF,
    ACTIONS(344), 1,
      anon_sym_RBRACE,
    STATE(203), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(318), 15,
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
  [2854] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      anon_sym_AMP,
    ACTIONS(346), 1,
      sym_identifier,
    ACTIONS(348), 1,
      anon_sym_mut,
    ACTIONS(350), 1,
      anon_sym_EQ,
    STATE(233), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(254), 15,
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
  [2899] = 12,
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
    ACTIONS(27), 1,
      anon_sym__,
    ACTIONS(33), 1,
      anon_sym_typeof,
    ACTIONS(35), 1,
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
    STATE(127), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [2951] = 5,
    ACTIONS(69), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    STATE(95), 1,
      sym_argument_list,
    ACTIONS(71), 23,
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
  [2989] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_null,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 1,
      anon_sym__,
    ACTIONS(240), 1,
      anon_sym_typeof,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(358), 1,
      sym_float_literal,
    ACTIONS(230), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(356), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(159), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [3041] = 12,
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
    ACTIONS(27), 1,
      anon_sym__,
    ACTIONS(33), 1,
      anon_sym_typeof,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(362), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(360), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(139), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [3093] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_null,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      sym_identifier,
    ACTIONS(368), 1,
      anon_sym__,
    ACTIONS(370), 1,
      anon_sym_typeof,
    ACTIONS(374), 1,
      sym_float_literal,
    ACTIONS(366), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(372), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(14), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [3145] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_PIPE,
    ACTIONS(154), 1,
      anon_sym_AMP_AMP,
    ACTIONS(376), 1,
      anon_sym_COMMA,
    ACTIONS(378), 1,
      anon_sym_RPAREN,
    ACTIONS(380), 1,
      anon_sym_PIPE_PIPE,
    STATE(9), 1,
      sym_selector_field,
    STATE(237), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(67), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(110), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(152), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(114), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(150), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(116), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [3203] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_PIPE,
    ACTIONS(154), 1,
      anon_sym_AMP_AMP,
    ACTIONS(380), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    ACTIONS(384), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      sym_selector_field,
    STATE(247), 1,
      aux_sym_array_expression_repeat1,
    ACTIONS(67), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(110), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(152), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(114), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(150), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(116), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [3261] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_null,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 1,
      anon_sym__,
    ACTIONS(240), 1,
      anon_sym_typeof,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(374), 1,
      sym_float_literal,
    ACTIONS(230), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(372), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(14), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [3313] = 12,
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
    ACTIONS(27), 1,
      anon_sym__,
    ACTIONS(33), 1,
      anon_sym_typeof,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(388), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(386), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(112), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [3365] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_null,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      sym_identifier,
    ACTIONS(368), 1,
      anon_sym__,
    ACTIONS(370), 1,
      anon_sym_typeof,
    ACTIONS(392), 1,
      sym_float_literal,
    ACTIONS(366), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(390), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(168), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [3417] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_null,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      sym_identifier,
    ACTIONS(368), 1,
      anon_sym__,
    ACTIONS(370), 1,
      anon_sym_typeof,
    ACTIONS(396), 1,
      sym_float_literal,
    ACTIONS(366), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(394), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(170), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [3469] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_null,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      sym_identifier,
    ACTIONS(368), 1,
      anon_sym__,
    ACTIONS(370), 1,
      anon_sym_typeof,
    ACTIONS(400), 1,
      sym_float_literal,
    ACTIONS(366), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(398), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(171), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [3521] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_null,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      sym_identifier,
    ACTIONS(368), 1,
      anon_sym__,
    ACTIONS(370), 1,
      anon_sym_typeof,
    ACTIONS(404), 1,
      sym_float_literal,
    ACTIONS(366), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(402), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(172), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [3573] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_null,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      sym_identifier,
    ACTIONS(368), 1,
      anon_sym__,
    ACTIONS(370), 1,
      anon_sym_typeof,
    ACTIONS(408), 1,
      sym_float_literal,
    ACTIONS(366), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(406), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(17), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [3625] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_null,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      sym_identifier,
    ACTIONS(368), 1,
      anon_sym__,
    ACTIONS(370), 1,
      anon_sym_typeof,
    ACTIONS(412), 1,
      sym_float_literal,
    ACTIONS(366), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(410), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(15), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [3677] = 6,
    ACTIONS(80), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      sym_comment,
    STATE(94), 1,
      aux_sym_selector_expression_repeat1,
    STATE(167), 1,
      sym_selector_field,
    ACTIONS(414), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(82), 21,
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
  [3717] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      anon_sym_AMP,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(418), 1,
      anon_sym_mut,
    STATE(212), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(254), 15,
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
  [3759] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_PIPE,
    ACTIONS(154), 1,
      anon_sym_AMP_AMP,
    ACTIONS(376), 1,
      anon_sym_COMMA,
    ACTIONS(380), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      sym_selector_field,
    STATE(270), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(67), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(110), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(152), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(114), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(150), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(116), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [3817] = 12,
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
    ACTIONS(27), 1,
      anon_sym__,
    ACTIONS(33), 1,
      anon_sym_typeof,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(424), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(422), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(117), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [3869] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      anon_sym_AMP,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_EQ,
    STATE(267), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(254), 15,
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
  [3911] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_PIPE,
    ACTIONS(154), 1,
      anon_sym_AMP_AMP,
    ACTIONS(380), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    ACTIONS(430), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      sym_selector_field,
    STATE(230), 1,
      aux_sym_array_expression_repeat1,
    ACTIONS(67), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(110), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(152), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(114), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(150), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(116), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [3969] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_null,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      sym_identifier,
    ACTIONS(368), 1,
      anon_sym__,
    ACTIONS(370), 1,
      anon_sym_typeof,
    ACTIONS(434), 1,
      sym_float_literal,
    ACTIONS(366), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(432), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(124), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [4021] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_null,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 1,
      anon_sym__,
    ACTIONS(240), 1,
      anon_sym_typeof,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(438), 1,
      sym_float_literal,
    ACTIONS(230), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(436), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(115), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [4073] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_null,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 1,
      anon_sym__,
    ACTIONS(240), 1,
      anon_sym_typeof,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(442), 1,
      sym_float_literal,
    ACTIONS(230), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(440), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(152), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [4125] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_null,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 1,
      anon_sym__,
    ACTIONS(240), 1,
      anon_sym_typeof,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(446), 1,
      sym_float_literal,
    ACTIONS(230), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(444), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(134), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [4177] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_null,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 1,
      anon_sym__,
    ACTIONS(240), 1,
      anon_sym_typeof,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(450), 1,
      sym_float_literal,
    ACTIONS(230), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(448), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(160), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [4229] = 12,
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
    ACTIONS(27), 1,
      anon_sym__,
    ACTIONS(33), 1,
      anon_sym_typeof,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(454), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(452), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(109), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [4281] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_null,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 1,
      anon_sym__,
    ACTIONS(240), 1,
      anon_sym_typeof,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(458), 1,
      sym_float_literal,
    ACTIONS(230), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(456), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(113), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [4333] = 6,
    ACTIONS(73), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      sym_comment,
    STATE(94), 1,
      aux_sym_selector_expression_repeat1,
    STATE(167), 1,
      sym_selector_field,
    ACTIONS(460), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(75), 21,
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
  [4373] = 5,
    ACTIONS(57), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_catch,
    STATE(161), 1,
      sym_catch_block,
    ACTIONS(59), 23,
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
  [4411] = 12,
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
    ACTIONS(27), 1,
      anon_sym__,
    ACTIONS(33), 1,
      anon_sym_typeof,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(467), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(465), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(116), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [4463] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_null,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 1,
      anon_sym__,
    ACTIONS(240), 1,
      anon_sym_typeof,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(471), 1,
      sym_float_literal,
    ACTIONS(230), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(469), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(29), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [4515] = 12,
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
    ACTIONS(27), 1,
      anon_sym__,
    ACTIONS(33), 1,
      anon_sym_typeof,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(475), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(473), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(121), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [4567] = 12,
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
    ACTIONS(27), 1,
      anon_sym__,
    ACTIONS(33), 1,
      anon_sym_typeof,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(479), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(477), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(122), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [4619] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_null,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 1,
      anon_sym__,
    ACTIONS(240), 1,
      anon_sym_typeof,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(483), 1,
      sym_float_literal,
    ACTIONS(230), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(481), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(30), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [4671] = 12,
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
    ACTIONS(27), 1,
      anon_sym__,
    ACTIONS(33), 1,
      anon_sym_typeof,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(487), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(485), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(131), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [4723] = 12,
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
    ACTIONS(27), 1,
      anon_sym__,
    ACTIONS(33), 1,
      anon_sym_typeof,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(491), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(489), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(132), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [4775] = 12,
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
    ACTIONS(27), 1,
      anon_sym__,
    ACTIONS(33), 1,
      anon_sym_typeof,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(495), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(493), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(133), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [4827] = 6,
    ACTIONS(63), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      sym_comment,
    STATE(81), 1,
      aux_sym_selector_expression_repeat1,
    STATE(167), 1,
      sym_selector_field,
    ACTIONS(414), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(65), 21,
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
  [4867] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_null,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 1,
      anon_sym__,
    ACTIONS(240), 1,
      anon_sym_typeof,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      sym_float_literal,
    ACTIONS(230), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(497), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(19), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [4919] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_null,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 1,
      anon_sym__,
    ACTIONS(240), 1,
      anon_sym_typeof,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(503), 1,
      sym_float_literal,
    ACTIONS(230), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(501), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(34), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [4971] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_null,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 1,
      anon_sym__,
    ACTIONS(240), 1,
      anon_sym_typeof,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(408), 1,
      sym_float_literal,
    ACTIONS(230), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(406), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(17), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [5023] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_null,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 1,
      anon_sym__,
    ACTIONS(240), 1,
      anon_sym_typeof,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(412), 1,
      sym_float_literal,
    ACTIONS(230), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(410), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(15), 12,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_error_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [5075] = 5,
    ACTIONS(88), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_LBRACK,
    STATE(104), 1,
      sym_selector_field,
    ACTIONS(90), 22,
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
  [5112] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      sym_identifier,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_AMP,
    STATE(202), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(318), 15,
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
  [5151] = 11,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_LBRACK,
    ACTIONS(513), 1,
      anon_sym_LF,
    ACTIONS(519), 1,
      anon_sym_RBRACE,
    ACTIONS(523), 1,
      anon_sym_AMP_AMP,
    ACTIONS(525), 1,
      anon_sym_PIPE_PIPE,
    STATE(104), 1,
      sym_selector_field,
    ACTIONS(414), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(517), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(521), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(515), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5200] = 11,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_LBRACK,
    ACTIONS(523), 1,
      anon_sym_AMP_AMP,
    ACTIONS(525), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(527), 1,
      anon_sym_LF,
    ACTIONS(529), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      sym_selector_field,
    ACTIONS(414), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(517), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(521), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(515), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5249] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_PIPE,
    ACTIONS(154), 1,
      anon_sym_AMP_AMP,
    ACTIONS(380), 1,
      anon_sym_PIPE_PIPE,
    STATE(9), 1,
      sym_selector_field,
    ACTIONS(67), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(110), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(152), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(531), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(114), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(150), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(116), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5302] = 3,
    ACTIONS(84), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(86), 24,
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
  [5335] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_PIPE,
    ACTIONS(154), 1,
      anon_sym_AMP_AMP,
    ACTIONS(380), 1,
      anon_sym_PIPE_PIPE,
    STATE(9), 1,
      sym_selector_field,
    ACTIONS(67), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(110), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(152), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(533), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(114), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(150), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(116), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5388] = 11,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_LBRACK,
    ACTIONS(523), 1,
      anon_sym_AMP_AMP,
    ACTIONS(525), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(535), 1,
      anon_sym_LF,
    ACTIONS(537), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      sym_selector_field,
    ACTIONS(414), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(517), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(521), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(515), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5437] = 11,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_LBRACK,
    ACTIONS(523), 1,
      anon_sym_AMP_AMP,
    ACTIONS(525), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(539), 1,
      anon_sym_LF,
    ACTIONS(541), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      sym_selector_field,
    ACTIONS(414), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(517), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(521), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(515), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5486] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      anon_sym_AMP,
    ACTIONS(543), 1,
      sym_identifier,
    STATE(257), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(254), 15,
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
  [5525] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      anon_sym_AMP,
    ACTIONS(545), 1,
      sym_identifier,
    STATE(214), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(254), 15,
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
  [5564] = 3,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_LF,
    ACTIONS(216), 24,
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
  [5597] = 5,
    ACTIONS(102), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_LBRACK,
    STATE(104), 1,
      sym_selector_field,
    ACTIONS(104), 22,
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
  [5634] = 6,
    ACTIONS(102), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_LBRACK,
    STATE(104), 1,
      sym_selector_field,
    ACTIONS(515), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(104), 15,
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
  [5673] = 3,
    ACTIONS(118), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(120), 24,
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
  [5706] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACK,
    ACTIONS(256), 1,
      anon_sym_LBRACE,
    ACTIONS(549), 1,
      anon_sym_PIPE,
    ACTIONS(559), 1,
      anon_sym_AMP_AMP,
    ACTIONS(561), 1,
      anon_sym_PIPE_PIPE,
    STATE(9), 1,
      sym_selector_field,
    STATE(248), 1,
      sym_block,
    ACTIONS(67), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(547), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(557), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(551), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(555), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(553), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5761] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      anon_sym_AMP,
    ACTIONS(563), 1,
      sym_identifier,
    STATE(204), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(254), 15,
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
  [5800] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_AMP,
    ACTIONS(565), 1,
      sym_identifier,
    STATE(207), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(318), 15,
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
  [5839] = 4,
    ACTIONS(94), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      sym_comment,
    STATE(104), 1,
      sym_selector_field,
    ACTIONS(96), 23,
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
  [5874] = 11,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_LBRACK,
    ACTIONS(523), 1,
      anon_sym_AMP_AMP,
    ACTIONS(525), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(567), 1,
      anon_sym_LF,
    ACTIONS(569), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      sym_selector_field,
    ACTIONS(414), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(517), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(521), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(515), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5923] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      anon_sym_AMP,
    ACTIONS(571), 1,
      sym_identifier,
    STATE(188), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(254), 15,
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
  [5962] = 3,
    ACTIONS(106), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(108), 24,
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
  [5995] = 7,
    ACTIONS(102), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_LBRACK,
    STATE(104), 1,
      sym_selector_field,
    ACTIONS(517), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(515), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(104), 11,
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
  [6036] = 8,
    ACTIONS(102), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_LBRACK,
    STATE(104), 1,
      sym_selector_field,
    ACTIONS(517), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(104), 5,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(521), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(515), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [6079] = 9,
    ACTIONS(102), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_LBRACK,
    ACTIONS(523), 1,
      anon_sym_AMP_AMP,
    STATE(104), 1,
      sym_selector_field,
    ACTIONS(104), 4,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
    ACTIONS(517), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(521), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(515), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [6124] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_PIPE,
    ACTIONS(154), 1,
      anon_sym_AMP_AMP,
    ACTIONS(380), 1,
      anon_sym_PIPE_PIPE,
    STATE(9), 1,
      sym_selector_field,
    ACTIONS(67), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(110), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(152), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(573), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(114), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(150), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(116), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [6177] = 3,
    ACTIONS(98), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(100), 24,
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
  [6210] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      anon_sym_AMP,
    ACTIONS(575), 1,
      sym_identifier,
    STATE(192), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(254), 15,
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
  [6249] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      anon_sym_AMP,
    ACTIONS(577), 1,
      sym_identifier,
    STATE(245), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(254), 15,
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
  [6288] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    STATE(8), 1,
      sym_argument_list,
    ACTIONS(53), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 18,
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
  [6325] = 11,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_LBRACK,
    ACTIONS(523), 1,
      anon_sym_AMP_AMP,
    ACTIONS(525), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(579), 1,
      anon_sym_LF,
    ACTIONS(581), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      sym_selector_field,
    ACTIONS(414), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(517), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(521), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(515), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [6374] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_AMP,
    ACTIONS(583), 1,
      sym_identifier,
    STATE(220), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(318), 15,
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
  [6413] = 3,
    ACTIONS(180), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(182), 23,
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
  [6445] = 3,
    ACTIONS(156), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(158), 23,
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
  [6477] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_PIPE,
    ACTIONS(154), 1,
      anon_sym_AMP_AMP,
    ACTIONS(380), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(585), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      sym_selector_field,
    ACTIONS(67), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(110), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(152), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(114), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(150), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(116), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [6529] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_PIPE,
    ACTIONS(154), 1,
      anon_sym_AMP_AMP,
    ACTIONS(380), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(587), 1,
      anon_sym_COLON,
    STATE(9), 1,
      sym_selector_field,
    ACTIONS(67), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(110), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(152), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(114), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(150), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(116), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [6581] = 3,
    ACTIONS(196), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(198), 23,
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
  [6613] = 3,
    ACTIONS(164), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(166), 23,
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
  [6645] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_PIPE,
    ACTIONS(154), 1,
      anon_sym_AMP_AMP,
    ACTIONS(380), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(589), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      sym_selector_field,
    ACTIONS(67), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(110), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(152), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(114), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(150), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(116), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [6697] = 3,
    ACTIONS(192), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(194), 23,
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
  [6729] = 3,
    ACTIONS(188), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(190), 23,
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
  [6761] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_PIPE,
    ACTIONS(154), 1,
      anon_sym_AMP_AMP,
    ACTIONS(380), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(591), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      sym_selector_field,
    ACTIONS(67), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(110), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(152), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(114), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(150), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(116), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [6813] = 3,
    ACTIONS(212), 1,
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
  [6845] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_PIPE,
    ACTIONS(154), 1,
      anon_sym_AMP_AMP,
    ACTIONS(380), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(593), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      sym_selector_field,
    ACTIONS(67), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(110), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(152), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(114), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(150), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(116), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [6897] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_PIPE,
    ACTIONS(154), 1,
      anon_sym_AMP_AMP,
    ACTIONS(380), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(595), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      sym_selector_field,
    ACTIONS(67), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(110), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(152), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(114), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(150), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(116), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [6949] = 3,
    ACTIONS(184), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(186), 23,
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
  [6981] = 3,
    ACTIONS(184), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(186), 23,
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
  [7013] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_PIPE,
    ACTIONS(154), 1,
      anon_sym_AMP_AMP,
    ACTIONS(380), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(597), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      sym_selector_field,
    ACTIONS(67), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(110), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(152), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(114), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(150), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(116), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [7065] = 3,
    ACTIONS(172), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(174), 23,
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
  [7097] = 3,
    ACTIONS(176), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(178), 23,
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
  [7129] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_PIPE,
    ACTIONS(154), 1,
      anon_sym_AMP_AMP,
    ACTIONS(380), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(599), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      sym_selector_field,
    ACTIONS(67), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(110), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(152), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(114), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(150), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(116), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [7181] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_PIPE,
    ACTIONS(154), 1,
      anon_sym_AMP_AMP,
    ACTIONS(380), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(601), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      sym_selector_field,
    ACTIONS(67), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(110), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(152), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(114), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(150), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(116), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [7233] = 3,
    ACTIONS(168), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(170), 23,
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
  [7265] = 3,
    ACTIONS(160), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(162), 23,
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
  [7297] = 3,
    ACTIONS(122), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(124), 23,
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
  [7329] = 3,
    ACTIONS(130), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(132), 23,
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
  [7361] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_PIPE,
    ACTIONS(154), 1,
      anon_sym_AMP_AMP,
    ACTIONS(380), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(603), 1,
      anon_sym_COLON,
    STATE(9), 1,
      sym_selector_field,
    ACTIONS(67), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(110), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(152), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(114), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(150), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(116), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [7413] = 3,
    ACTIONS(69), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(71), 23,
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
  [7445] = 3,
    ACTIONS(146), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(148), 23,
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
  [7477] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACK,
    ACTIONS(549), 1,
      anon_sym_PIPE,
    ACTIONS(559), 1,
      anon_sym_AMP_AMP,
    STATE(9), 1,
      sym_selector_field,
    ACTIONS(547), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(557), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(551), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(102), 4,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_PIPE_PIPE,
    ACTIONS(555), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(553), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [7525] = 3,
    ACTIONS(122), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(124), 23,
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
  [7557] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACK,
    ACTIONS(549), 1,
      anon_sym_PIPE,
    STATE(9), 1,
      sym_selector_field,
    ACTIONS(547), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(557), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(551), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(555), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(102), 5,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(553), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [7603] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACK,
    ACTIONS(549), 1,
      anon_sym_PIPE,
    STATE(9), 1,
      sym_selector_field,
    ACTIONS(104), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(547), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(551), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(553), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(102), 9,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7647] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      sym_selector_field,
    ACTIONS(547), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(104), 3,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(553), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(102), 12,
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
  [7687] = 3,
    ACTIONS(134), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(136), 23,
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
  [7719] = 3,
    ACTIONS(138), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(140), 23,
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
  [7751] = 3,
    ACTIONS(126), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(128), 23,
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
  [7783] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_PIPE,
    ACTIONS(154), 1,
      anon_sym_AMP_AMP,
    ACTIONS(380), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(605), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      sym_selector_field,
    ACTIONS(67), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(110), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(152), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(114), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(150), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(116), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [7835] = 3,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LF,
    ACTIONS(224), 23,
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
  [7867] = 3,
    ACTIONS(142), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(144), 23,
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
  [7899] = 3,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_LF,
    ACTIONS(607), 19,
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
  [7927] = 3,
    ACTIONS(212), 1,
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
  [7955] = 3,
    ACTIONS(212), 1,
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
  [7983] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 3,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_LBRACE,
    ACTIONS(619), 16,
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
  [8010] = 3,
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
  [8037] = 3,
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
  [8064] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      ts_builtin_sym_end,
    ACTIONS(633), 1,
      anon_sym_fun,
    ACTIONS(636), 1,
      anon_sym_struct,
    ACTIONS(639), 1,
      anon_sym_interface,
    STATE(185), 2,
      sym__definition,
      aux_sym_source_file_repeat1,
    STATE(288), 3,
      sym_function_definition,
      sym_struct_definition,
      sym_interface_definition,
  [8089] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_fun,
    ACTIONS(9), 1,
      anon_sym_struct,
    ACTIONS(11), 1,
      anon_sym_interface,
    ACTIONS(642), 1,
      ts_builtin_sym_end,
    STATE(185), 2,
      sym__definition,
      aux_sym_source_file_repeat1,
    STATE(288), 3,
      sym_function_definition,
      sym_struct_definition,
      sym_interface_definition,
  [8114] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      sym_identifier,
    ACTIONS(646), 1,
      anon_sym_mut,
    ACTIONS(648), 1,
      anon_sym_RPAREN,
    ACTIONS(650), 1,
      anon_sym_AMP,
    ACTIONS(652), 1,
      anon_sym_self,
    STATE(255), 2,
      sym_parameter,
      sym_self_parameter,
  [8137] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_LBRACK,
    ACTIONS(654), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [8151] = 6,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_LBRACE,
    ACTIONS(660), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(210), 1,
      sym_embetted_expr,
    ACTIONS(662), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [8171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [8183] = 6,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_LBRACE,
    ACTIONS(669), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(210), 1,
      sym_embetted_expr,
    ACTIONS(671), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [8203] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_LBRACK,
    ACTIONS(676), 1,
      anon_sym_PIPE,
    ACTIONS(674), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [8219] = 6,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_LBRACE,
    ACTIONS(678), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(210), 1,
      sym_embetted_expr,
    ACTIONS(662), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [8239] = 6,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_LBRACE,
    ACTIONS(680), 1,
      anon_sym_DQUOTE,
    STATE(193), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(210), 1,
      sym_embetted_expr,
    ACTIONS(682), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [8259] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_AMP,
    ACTIONS(684), 1,
      anon_sym_mut,
    ACTIONS(686), 1,
      anon_sym_LPAREN,
    ACTIONS(688), 1,
      anon_sym_self,
    STATE(60), 1,
      sym_self_parameter_list,
    STATE(287), 1,
      sym_self_parameter,
  [8281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [8293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [8305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [8317] = 6,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_LBRACE,
    ACTIONS(696), 1,
      anon_sym_DQUOTE,
    STATE(189), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(210), 1,
      sym_embetted_expr,
    ACTIONS(698), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [8337] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_LBRACE,
    ACTIONS(656), 1,
      anon_sym_LBRACK,
    ACTIONS(676), 1,
      anon_sym_PIPE,
    ACTIONS(700), 1,
      anon_sym_COMMA,
    STATE(308), 1,
      sym_block,
  [8356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 4,
      ts_builtin_sym_end,
      anon_sym_fun,
      anon_sym_struct,
      anon_sym_interface,
  [8366] = 5,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_LF,
    ACTIONS(704), 1,
      anon_sym_PIPE,
    ACTIONS(706), 1,
      anon_sym_LBRACK,
    ACTIONS(708), 1,
      anon_sym_RBRACE,
  [8382] = 5,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_PIPE,
    ACTIONS(706), 1,
      anon_sym_LBRACK,
    ACTIONS(710), 1,
      anon_sym_LF,
    ACTIONS(712), 1,
      anon_sym_RBRACE,
  [8398] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_LBRACK,
    ACTIONS(676), 1,
      anon_sym_PIPE,
    ACTIONS(714), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8412] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      sym_identifier,
    ACTIONS(718), 1,
      anon_sym_COMMA,
    ACTIONS(720), 1,
      anon_sym_RBRACE,
    STATE(249), 1,
      sym_keyed_element,
  [8428] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      sym_identifier,
    ACTIONS(724), 1,
      anon_sym_RBRACE,
    STATE(251), 2,
      sym__interface_body,
      sym_method_spec,
  [8442] = 5,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_PIPE,
    ACTIONS(706), 1,
      anon_sym_LBRACK,
    ACTIONS(726), 1,
      anon_sym_LF,
    ACTIONS(728), 1,
      anon_sym_RBRACE,
  [8458] = 3,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_LF,
    ACTIONS(730), 3,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [8470] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      sym_identifier,
    ACTIONS(732), 1,
      anon_sym_RBRACE,
    STATE(272), 2,
      sym__interface_body,
      sym_method_spec,
  [8484] = 3,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(734), 2,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
    ACTIONS(736), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [8496] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_COMMA,
    ACTIONS(740), 1,
      anon_sym_RBRACE,
    ACTIONS(742), 1,
      anon_sym_EQ,
    STATE(224), 1,
      aux_sym_struct_initialization_repeat1,
  [8512] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_LBRACK,
    ACTIONS(676), 1,
      anon_sym_PIPE,
    ACTIONS(744), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8526] = 3,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(746), 2,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
    ACTIONS(748), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [8538] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_LBRACE,
    ACTIONS(656), 1,
      anon_sym_LBRACK,
    ACTIONS(676), 1,
      anon_sym_PIPE,
    STATE(290), 1,
      sym_block,
  [8554] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      sym_identifier,
    ACTIONS(752), 1,
      anon_sym_COMMA,
    ACTIONS(754), 1,
      anon_sym_RBRACE,
    STATE(238), 1,
      sym_keyed_element,
  [8570] = 3,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_LF,
    ACTIONS(756), 3,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [8582] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_LBRACE,
    ACTIONS(758), 1,
      anon_sym_if,
    STATE(284), 2,
      sym_block,
      sym_if_statement,
  [8596] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_EQ,
    ACTIONS(760), 1,
      anon_sym_COMMA,
    ACTIONS(762), 1,
      anon_sym_RBRACE,
    STATE(235), 1,
      aux_sym_struct_initialization_repeat1,
  [8612] = 3,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_LF,
    ACTIONS(764), 3,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [8624] = 4,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_LF,
    ACTIONS(706), 1,
      anon_sym_LBRACK,
    ACTIONS(766), 2,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [8638] = 5,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_PIPE,
    ACTIONS(706), 1,
      anon_sym_LBRACK,
    ACTIONS(768), 1,
      anon_sym_LF,
    ACTIONS(770), 1,
      anon_sym_RBRACE,
  [8654] = 3,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_LF,
    ACTIONS(772), 3,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [8666] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      sym_identifier,
    ACTIONS(774), 1,
      anon_sym_RBRACE,
    STATE(272), 2,
      sym__interface_body,
      sym_method_spec,
  [8680] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_COMMA,
    ACTIONS(778), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      aux_sym_struct_initialization_repeat1,
  [8693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      sym_identifier,
    STATE(272), 2,
      sym__interface_body,
      sym_method_spec,
  [8704] = 4,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_LF,
    ACTIONS(782), 1,
      anon_sym_RBRACE,
    STATE(240), 1,
      aux_sym__statement_list_repeat1,
  [8717] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      sym_identifier,
    ACTIONS(786), 1,
      anon_sym_RBRACE,
    STATE(273), 1,
      sym_field_definition,
  [8730] = 4,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_LF,
    ACTIONS(790), 1,
      anon_sym_RBRACE,
    STATE(239), 1,
      aux_sym_field_definition_list_repeat1,
  [8743] = 4,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_LF,
    ACTIONS(795), 1,
      anon_sym_RBRACE,
    STATE(229), 1,
      aux_sym_interface_definition_repeat1,
  [8756] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    ACTIONS(797), 1,
      anon_sym_RBRACK,
    STATE(262), 1,
      aux_sym_array_expression_repeat1,
  [8769] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      sym_identifier,
    ACTIONS(801), 1,
      anon_sym_RBRACE,
    STATE(286), 1,
      sym_keyed_element,
  [8782] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      sym_identifier,
    ACTIONS(803), 1,
      anon_sym_RBRACE,
    STATE(286), 1,
      sym_keyed_element,
  [8795] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_LBRACK,
    ACTIONS(676), 1,
      anon_sym_PIPE,
    ACTIONS(805), 1,
      anon_sym_EQ,
  [8808] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_COMMA,
    ACTIONS(809), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      aux_sym_struct_initialization_repeat1,
  [8821] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_COMMA,
    ACTIONS(813), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      aux_sym_struct_initialization_repeat1,
  [8834] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      sym_identifier,
    ACTIONS(815), 1,
      anon_sym_RBRACE,
    STATE(286), 1,
      sym_keyed_element,
  [8847] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_COMMA,
    ACTIONS(817), 1,
      anon_sym_RPAREN,
    STATE(252), 1,
      aux_sym_argument_list_repeat1,
  [8860] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_COMMA,
    ACTIONS(762), 1,
      anon_sym_RBRACE,
    STATE(234), 1,
      aux_sym_struct_initialization_repeat1,
  [8873] = 4,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_LF,
    ACTIONS(822), 1,
      anon_sym_RBRACE,
    STATE(239), 1,
      aux_sym_field_definition_list_repeat1,
  [8886] = 4,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_LF,
    ACTIONS(826), 1,
      anon_sym_RBRACE,
    STATE(256), 1,
      aux_sym__statement_list_repeat1,
  [8899] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      sym_identifier,
    ACTIONS(828), 1,
      anon_sym_RBRACE,
    STATE(273), 1,
      sym_field_definition,
  [8912] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      sym_identifier,
    ACTIONS(830), 1,
      anon_sym_RBRACE,
    STATE(286), 1,
      sym_keyed_element,
  [8925] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_COMMA,
    ACTIONS(835), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      aux_sym_struct_initialization_repeat1,
  [8938] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      sym_identifier,
    ACTIONS(837), 1,
      anon_sym_RBRACE,
    STATE(286), 1,
      sym_keyed_element,
  [8951] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_LBRACK,
    ACTIONS(676), 1,
      anon_sym_PIPE,
    ACTIONS(839), 1,
      anon_sym_RPAREN,
  [8964] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_COMMA,
    ACTIONS(843), 1,
      anon_sym_RPAREN,
    STATE(261), 1,
      aux_sym_parameter_list_repeat1,
  [8977] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    ACTIONS(845), 1,
      anon_sym_RBRACK,
    STATE(262), 1,
      aux_sym_array_expression_repeat1,
  [8990] = 4,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_LF,
    ACTIONS(849), 1,
      anon_sym_RBRACE,
    ACTIONS(851), 1,
      anon_sym_else,
  [9003] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_COMMA,
    ACTIONS(740), 1,
      anon_sym_RBRACE,
    STATE(264), 1,
      aux_sym_struct_initialization_repeat1,
  [9016] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_EQ,
    ACTIONS(853), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9027] = 4,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(855), 1,
      anon_sym_LF,
    ACTIONS(857), 1,
      anon_sym_RBRACE,
    STATE(260), 1,
      aux_sym_interface_definition_repeat1,
  [9040] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_COMMA,
    ACTIONS(862), 1,
      anon_sym_RPAREN,
    STATE(252), 1,
      aux_sym_argument_list_repeat1,
  [9053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [9062] = 4,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_LF,
    ACTIONS(868), 1,
      anon_sym_RBRACE,
    STATE(228), 1,
      aux_sym_field_definition_list_repeat1,
  [9075] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_COMMA,
    ACTIONS(870), 1,
      anon_sym_RPAREN,
    STATE(259), 1,
      aux_sym_parameter_list_repeat1,
  [9088] = 4,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_LF,
    ACTIONS(875), 1,
      anon_sym_RBRACE,
    STATE(256), 1,
      aux_sym__statement_list_repeat1,
  [9101] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_LBRACK,
    ACTIONS(676), 1,
      anon_sym_PIPE,
    ACTIONS(877), 1,
      anon_sym_RPAREN,
  [9114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [9123] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_COMMA,
    ACTIONS(881), 1,
      anon_sym_RPAREN,
    STATE(261), 1,
      aux_sym_parameter_list_repeat1,
  [9136] = 4,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(883), 1,
      anon_sym_LF,
    ACTIONS(885), 1,
      anon_sym_RBRACE,
    STATE(229), 1,
      aux_sym_interface_definition_repeat1,
  [9149] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      anon_sym_COMMA,
    ACTIONS(890), 1,
      anon_sym_RPAREN,
    STATE(261), 1,
      aux_sym_parameter_list_repeat1,
  [9162] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      anon_sym_COMMA,
    ACTIONS(895), 1,
      anon_sym_RBRACK,
    STATE(262), 1,
      aux_sym_array_expression_repeat1,
  [9175] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_COMMA,
    ACTIONS(897), 1,
      anon_sym_RPAREN,
    STATE(246), 1,
      aux_sym_parameter_list_repeat1,
  [9188] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_COMMA,
    ACTIONS(901), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      aux_sym_struct_initialization_repeat1,
  [9201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [9210] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      sym_identifier,
    ACTIONS(905), 1,
      anon_sym_RBRACE,
    STATE(286), 1,
      sym_keyed_element,
  [9223] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_LBRACK,
    ACTIONS(676), 1,
      anon_sym_PIPE,
    ACTIONS(907), 1,
      anon_sym_EQ,
  [9236] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      sym_identifier,
    ACTIONS(909), 1,
      anon_sym_RBRACE,
    STATE(254), 1,
      sym_field_definition,
  [9249] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      sym_identifier,
    ACTIONS(913), 1,
      anon_sym_RPAREN,
    STATE(263), 1,
      sym_parameter,
  [9262] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_COMMA,
    ACTIONS(915), 1,
      anon_sym_RPAREN,
    STATE(252), 1,
      aux_sym_argument_list_repeat1,
  [9275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_LPAREN,
    STATE(50), 1,
      sym_parameter_list,
  [9285] = 3,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(795), 1,
      anon_sym_RBRACE,
    ACTIONS(919), 1,
      anon_sym_LF,
  [9295] = 3,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_LF,
    ACTIONS(923), 1,
      anon_sym_RBRACE,
  [9305] = 3,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(925), 1,
      anon_sym_LF,
    ACTIONS(927), 1,
      anon_sym_RBRACE,
  [9315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym_block,
  [9325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_LBRACE,
    STATE(146), 1,
      sym_block,
  [9343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      sym_identifier,
    STATE(166), 1,
      sym_function_call,
  [9353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      sym_identifier,
    STATE(286), 1,
      sym_keyed_element,
  [9363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      sym_identifier,
    STATE(276), 1,
      sym_parameter,
  [9373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      sym_identifier,
    STATE(32), 1,
      sym_function_call,
  [9383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      sym_identifier,
    STATE(273), 1,
      sym_field_definition,
  [9393] = 3,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_RBRACE,
    ACTIONS(935), 1,
      anon_sym_LF,
  [9403] = 3,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_LF,
    ACTIONS(939), 1,
      anon_sym_RBRACE,
  [9413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      anon_sym_LBRACE,
    STATE(296), 1,
      sym_field_definition_list,
  [9423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym_self_parameter_list,
  [9441] = 2,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(943), 1,
      anon_sym_LF,
  [9448] = 2,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(945), 1,
      anon_sym_LF,
  [9455] = 2,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(947), 1,
      anon_sym_LF,
  [9462] = 2,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_LF,
  [9469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      anon_sym_COMMA,
  [9476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_RBRACE,
  [9483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 1,
      anon_sym_LPAREN,
  [9490] = 2,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_LF,
  [9497] = 2,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_LF,
  [9504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_RBRACE,
  [9511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      anon_sym_LBRACE,
  [9518] = 2,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(965), 1,
      anon_sym_LF,
  [9525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      anon_sym_self,
  [9532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      anon_sym_self,
  [9539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      anon_sym_RBRACE,
  [9546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 1,
      anon_sym_RPAREN,
  [9553] = 2,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(975), 1,
      anon_sym_LF,
  [9560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      ts_builtin_sym_end,
  [9567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 1,
      anon_sym_COMMA,
  [9574] = 2,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(981), 1,
      anon_sym_LF,
  [9581] = 2,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(983), 1,
      anon_sym_LF,
  [9588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 1,
      sym_identifier,
  [9595] = 2,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(987), 1,
      anon_sym_LF,
  [9602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 1,
      sym_identifier,
  [9609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      sym_identifier,
  [9616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      sym_identifier,
  [9623] = 2,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(995), 1,
      anon_sym_LF,
  [9630] = 2,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(997), 1,
      anon_sym_LF,
  [9637] = 2,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(999), 1,
      anon_sym_LF,
  [9644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
  [9651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      anon_sym_AMP,
  [9658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      anon_sym_RBRACE,
  [9665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1007), 1,
      sym_identifier,
  [9672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 1,
      sym_identifier,
  [9679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1011), 1,
      anon_sym_RPAREN,
  [9686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1013), 1,
      sym_identifier,
  [9693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 78,
  [SMALL_STATE(4)] = 156,
  [SMALL_STATE(5)] = 231,
  [SMALL_STATE(6)] = 306,
  [SMALL_STATE(7)] = 378,
  [SMALL_STATE(8)] = 422,
  [SMALL_STATE(9)] = 464,
  [SMALL_STATE(10)] = 508,
  [SMALL_STATE(11)] = 550,
  [SMALL_STATE(12)] = 594,
  [SMALL_STATE(13)] = 638,
  [SMALL_STATE(14)] = 675,
  [SMALL_STATE(15)] = 716,
  [SMALL_STATE(16)] = 755,
  [SMALL_STATE(17)] = 792,
  [SMALL_STATE(18)] = 833,
  [SMALL_STATE(19)] = 870,
  [SMALL_STATE(20)] = 918,
  [SMALL_STATE(21)] = 954,
  [SMALL_STATE(22)] = 990,
  [SMALL_STATE(23)] = 1026,
  [SMALL_STATE(24)] = 1062,
  [SMALL_STATE(25)] = 1098,
  [SMALL_STATE(26)] = 1134,
  [SMALL_STATE(27)] = 1170,
  [SMALL_STATE(28)] = 1206,
  [SMALL_STATE(29)] = 1242,
  [SMALL_STATE(30)] = 1294,
  [SMALL_STATE(31)] = 1344,
  [SMALL_STATE(32)] = 1380,
  [SMALL_STATE(33)] = 1416,
  [SMALL_STATE(34)] = 1452,
  [SMALL_STATE(35)] = 1496,
  [SMALL_STATE(36)] = 1532,
  [SMALL_STATE(37)] = 1568,
  [SMALL_STATE(38)] = 1604,
  [SMALL_STATE(39)] = 1640,
  [SMALL_STATE(40)] = 1676,
  [SMALL_STATE(41)] = 1712,
  [SMALL_STATE(42)] = 1748,
  [SMALL_STATE(43)] = 1784,
  [SMALL_STATE(44)] = 1820,
  [SMALL_STATE(45)] = 1856,
  [SMALL_STATE(46)] = 1910,
  [SMALL_STATE(47)] = 1946,
  [SMALL_STATE(48)] = 1982,
  [SMALL_STATE(49)] = 2018,
  [SMALL_STATE(50)] = 2073,
  [SMALL_STATE(51)] = 2118,
  [SMALL_STATE(52)] = 2159,
  [SMALL_STATE(53)] = 2214,
  [SMALL_STATE(54)] = 2269,
  [SMALL_STATE(55)] = 2324,
  [SMALL_STATE(56)] = 2379,
  [SMALL_STATE(57)] = 2434,
  [SMALL_STATE(58)] = 2489,
  [SMALL_STATE(59)] = 2544,
  [SMALL_STATE(60)] = 2599,
  [SMALL_STATE(61)] = 2644,
  [SMALL_STATE(62)] = 2699,
  [SMALL_STATE(63)] = 2754,
  [SMALL_STATE(64)] = 2809,
  [SMALL_STATE(65)] = 2854,
  [SMALL_STATE(66)] = 2899,
  [SMALL_STATE(67)] = 2951,
  [SMALL_STATE(68)] = 2989,
  [SMALL_STATE(69)] = 3041,
  [SMALL_STATE(70)] = 3093,
  [SMALL_STATE(71)] = 3145,
  [SMALL_STATE(72)] = 3203,
  [SMALL_STATE(73)] = 3261,
  [SMALL_STATE(74)] = 3313,
  [SMALL_STATE(75)] = 3365,
  [SMALL_STATE(76)] = 3417,
  [SMALL_STATE(77)] = 3469,
  [SMALL_STATE(78)] = 3521,
  [SMALL_STATE(79)] = 3573,
  [SMALL_STATE(80)] = 3625,
  [SMALL_STATE(81)] = 3677,
  [SMALL_STATE(82)] = 3717,
  [SMALL_STATE(83)] = 3759,
  [SMALL_STATE(84)] = 3817,
  [SMALL_STATE(85)] = 3869,
  [SMALL_STATE(86)] = 3911,
  [SMALL_STATE(87)] = 3969,
  [SMALL_STATE(88)] = 4021,
  [SMALL_STATE(89)] = 4073,
  [SMALL_STATE(90)] = 4125,
  [SMALL_STATE(91)] = 4177,
  [SMALL_STATE(92)] = 4229,
  [SMALL_STATE(93)] = 4281,
  [SMALL_STATE(94)] = 4333,
  [SMALL_STATE(95)] = 4373,
  [SMALL_STATE(96)] = 4411,
  [SMALL_STATE(97)] = 4463,
  [SMALL_STATE(98)] = 4515,
  [SMALL_STATE(99)] = 4567,
  [SMALL_STATE(100)] = 4619,
  [SMALL_STATE(101)] = 4671,
  [SMALL_STATE(102)] = 4723,
  [SMALL_STATE(103)] = 4775,
  [SMALL_STATE(104)] = 4827,
  [SMALL_STATE(105)] = 4867,
  [SMALL_STATE(106)] = 4919,
  [SMALL_STATE(107)] = 4971,
  [SMALL_STATE(108)] = 5023,
  [SMALL_STATE(109)] = 5075,
  [SMALL_STATE(110)] = 5112,
  [SMALL_STATE(111)] = 5151,
  [SMALL_STATE(112)] = 5200,
  [SMALL_STATE(113)] = 5249,
  [SMALL_STATE(114)] = 5302,
  [SMALL_STATE(115)] = 5335,
  [SMALL_STATE(116)] = 5388,
  [SMALL_STATE(117)] = 5437,
  [SMALL_STATE(118)] = 5486,
  [SMALL_STATE(119)] = 5525,
  [SMALL_STATE(120)] = 5564,
  [SMALL_STATE(121)] = 5597,
  [SMALL_STATE(122)] = 5634,
  [SMALL_STATE(123)] = 5673,
  [SMALL_STATE(124)] = 5706,
  [SMALL_STATE(125)] = 5761,
  [SMALL_STATE(126)] = 5800,
  [SMALL_STATE(127)] = 5839,
  [SMALL_STATE(128)] = 5874,
  [SMALL_STATE(129)] = 5923,
  [SMALL_STATE(130)] = 5962,
  [SMALL_STATE(131)] = 5995,
  [SMALL_STATE(132)] = 6036,
  [SMALL_STATE(133)] = 6079,
  [SMALL_STATE(134)] = 6124,
  [SMALL_STATE(135)] = 6177,
  [SMALL_STATE(136)] = 6210,
  [SMALL_STATE(137)] = 6249,
  [SMALL_STATE(138)] = 6288,
  [SMALL_STATE(139)] = 6325,
  [SMALL_STATE(140)] = 6374,
  [SMALL_STATE(141)] = 6413,
  [SMALL_STATE(142)] = 6445,
  [SMALL_STATE(143)] = 6477,
  [SMALL_STATE(144)] = 6529,
  [SMALL_STATE(145)] = 6581,
  [SMALL_STATE(146)] = 6613,
  [SMALL_STATE(147)] = 6645,
  [SMALL_STATE(148)] = 6697,
  [SMALL_STATE(149)] = 6729,
  [SMALL_STATE(150)] = 6761,
  [SMALL_STATE(151)] = 6813,
  [SMALL_STATE(152)] = 6845,
  [SMALL_STATE(153)] = 6897,
  [SMALL_STATE(154)] = 6949,
  [SMALL_STATE(155)] = 6981,
  [SMALL_STATE(156)] = 7013,
  [SMALL_STATE(157)] = 7065,
  [SMALL_STATE(158)] = 7097,
  [SMALL_STATE(159)] = 7129,
  [SMALL_STATE(160)] = 7181,
  [SMALL_STATE(161)] = 7233,
  [SMALL_STATE(162)] = 7265,
  [SMALL_STATE(163)] = 7297,
  [SMALL_STATE(164)] = 7329,
  [SMALL_STATE(165)] = 7361,
  [SMALL_STATE(166)] = 7413,
  [SMALL_STATE(167)] = 7445,
  [SMALL_STATE(168)] = 7477,
  [SMALL_STATE(169)] = 7525,
  [SMALL_STATE(170)] = 7557,
  [SMALL_STATE(171)] = 7603,
  [SMALL_STATE(172)] = 7647,
  [SMALL_STATE(173)] = 7687,
  [SMALL_STATE(174)] = 7719,
  [SMALL_STATE(175)] = 7751,
  [SMALL_STATE(176)] = 7783,
  [SMALL_STATE(177)] = 7835,
  [SMALL_STATE(178)] = 7867,
  [SMALL_STATE(179)] = 7899,
  [SMALL_STATE(180)] = 7927,
  [SMALL_STATE(181)] = 7955,
  [SMALL_STATE(182)] = 7983,
  [SMALL_STATE(183)] = 8010,
  [SMALL_STATE(184)] = 8037,
  [SMALL_STATE(185)] = 8064,
  [SMALL_STATE(186)] = 8089,
  [SMALL_STATE(187)] = 8114,
  [SMALL_STATE(188)] = 8137,
  [SMALL_STATE(189)] = 8151,
  [SMALL_STATE(190)] = 8171,
  [SMALL_STATE(191)] = 8183,
  [SMALL_STATE(192)] = 8203,
  [SMALL_STATE(193)] = 8219,
  [SMALL_STATE(194)] = 8239,
  [SMALL_STATE(195)] = 8259,
  [SMALL_STATE(196)] = 8281,
  [SMALL_STATE(197)] = 8293,
  [SMALL_STATE(198)] = 8305,
  [SMALL_STATE(199)] = 8317,
  [SMALL_STATE(200)] = 8337,
  [SMALL_STATE(201)] = 8356,
  [SMALL_STATE(202)] = 8366,
  [SMALL_STATE(203)] = 8382,
  [SMALL_STATE(204)] = 8398,
  [SMALL_STATE(205)] = 8412,
  [SMALL_STATE(206)] = 8428,
  [SMALL_STATE(207)] = 8442,
  [SMALL_STATE(208)] = 8458,
  [SMALL_STATE(209)] = 8470,
  [SMALL_STATE(210)] = 8484,
  [SMALL_STATE(211)] = 8496,
  [SMALL_STATE(212)] = 8512,
  [SMALL_STATE(213)] = 8526,
  [SMALL_STATE(214)] = 8538,
  [SMALL_STATE(215)] = 8554,
  [SMALL_STATE(216)] = 8570,
  [SMALL_STATE(217)] = 8582,
  [SMALL_STATE(218)] = 8596,
  [SMALL_STATE(219)] = 8612,
  [SMALL_STATE(220)] = 8624,
  [SMALL_STATE(221)] = 8638,
  [SMALL_STATE(222)] = 8654,
  [SMALL_STATE(223)] = 8666,
  [SMALL_STATE(224)] = 8680,
  [SMALL_STATE(225)] = 8693,
  [SMALL_STATE(226)] = 8704,
  [SMALL_STATE(227)] = 8717,
  [SMALL_STATE(228)] = 8730,
  [SMALL_STATE(229)] = 8743,
  [SMALL_STATE(230)] = 8756,
  [SMALL_STATE(231)] = 8769,
  [SMALL_STATE(232)] = 8782,
  [SMALL_STATE(233)] = 8795,
  [SMALL_STATE(234)] = 8808,
  [SMALL_STATE(235)] = 8821,
  [SMALL_STATE(236)] = 8834,
  [SMALL_STATE(237)] = 8847,
  [SMALL_STATE(238)] = 8860,
  [SMALL_STATE(239)] = 8873,
  [SMALL_STATE(240)] = 8886,
  [SMALL_STATE(241)] = 8899,
  [SMALL_STATE(242)] = 8912,
  [SMALL_STATE(243)] = 8925,
  [SMALL_STATE(244)] = 8938,
  [SMALL_STATE(245)] = 8951,
  [SMALL_STATE(246)] = 8964,
  [SMALL_STATE(247)] = 8977,
  [SMALL_STATE(248)] = 8990,
  [SMALL_STATE(249)] = 9003,
  [SMALL_STATE(250)] = 9016,
  [SMALL_STATE(251)] = 9027,
  [SMALL_STATE(252)] = 9040,
  [SMALL_STATE(253)] = 9053,
  [SMALL_STATE(254)] = 9062,
  [SMALL_STATE(255)] = 9075,
  [SMALL_STATE(256)] = 9088,
  [SMALL_STATE(257)] = 9101,
  [SMALL_STATE(258)] = 9114,
  [SMALL_STATE(259)] = 9123,
  [SMALL_STATE(260)] = 9136,
  [SMALL_STATE(261)] = 9149,
  [SMALL_STATE(262)] = 9162,
  [SMALL_STATE(263)] = 9175,
  [SMALL_STATE(264)] = 9188,
  [SMALL_STATE(265)] = 9201,
  [SMALL_STATE(266)] = 9210,
  [SMALL_STATE(267)] = 9223,
  [SMALL_STATE(268)] = 9236,
  [SMALL_STATE(269)] = 9249,
  [SMALL_STATE(270)] = 9262,
  [SMALL_STATE(271)] = 9275,
  [SMALL_STATE(272)] = 9285,
  [SMALL_STATE(273)] = 9295,
  [SMALL_STATE(274)] = 9305,
  [SMALL_STATE(275)] = 9315,
  [SMALL_STATE(276)] = 9325,
  [SMALL_STATE(277)] = 9333,
  [SMALL_STATE(278)] = 9343,
  [SMALL_STATE(279)] = 9353,
  [SMALL_STATE(280)] = 9363,
  [SMALL_STATE(281)] = 9373,
  [SMALL_STATE(282)] = 9383,
  [SMALL_STATE(283)] = 9393,
  [SMALL_STATE(284)] = 9403,
  [SMALL_STATE(285)] = 9413,
  [SMALL_STATE(286)] = 9423,
  [SMALL_STATE(287)] = 9431,
  [SMALL_STATE(288)] = 9441,
  [SMALL_STATE(289)] = 9448,
  [SMALL_STATE(290)] = 9455,
  [SMALL_STATE(291)] = 9462,
  [SMALL_STATE(292)] = 9469,
  [SMALL_STATE(293)] = 9476,
  [SMALL_STATE(294)] = 9483,
  [SMALL_STATE(295)] = 9490,
  [SMALL_STATE(296)] = 9497,
  [SMALL_STATE(297)] = 9504,
  [SMALL_STATE(298)] = 9511,
  [SMALL_STATE(299)] = 9518,
  [SMALL_STATE(300)] = 9525,
  [SMALL_STATE(301)] = 9532,
  [SMALL_STATE(302)] = 9539,
  [SMALL_STATE(303)] = 9546,
  [SMALL_STATE(304)] = 9553,
  [SMALL_STATE(305)] = 9560,
  [SMALL_STATE(306)] = 9567,
  [SMALL_STATE(307)] = 9574,
  [SMALL_STATE(308)] = 9581,
  [SMALL_STATE(309)] = 9588,
  [SMALL_STATE(310)] = 9595,
  [SMALL_STATE(311)] = 9602,
  [SMALL_STATE(312)] = 9609,
  [SMALL_STATE(313)] = 9616,
  [SMALL_STATE(314)] = 9623,
  [SMALL_STATE(315)] = 9630,
  [SMALL_STATE(316)] = 9637,
  [SMALL_STATE(317)] = 9644,
  [SMALL_STATE(318)] = 9651,
  [SMALL_STATE(319)] = 9658,
  [SMALL_STATE(320)] = 9665,
  [SMALL_STATE(321)] = 9672,
  [SMALL_STATE(322)] = 9679,
  [SMALL_STATE(323)] = 9686,
  [SMALL_STATE(324)] = 9693,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 16),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 16),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 2, .production_id = 17),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 2, .production_id = 17),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_field, 2, .production_id = 32),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_field, 2, .production_id = 32),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_expression_repeat1, 2, .production_id = 45),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_expression_repeat1, 2, .production_id = 45),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_expression_repeat1, 2, .production_id = 45), SHIFT_REPEAT(281),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 3, .production_id = 34),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 3, .production_id = 34),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4, .production_id = 49),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4, .production_id = 49),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 12),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 12),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_expression, 3, .production_id = 25),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_error_expression, 3, .production_id = 25),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 31),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 31),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3, .production_id = 42),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3, .production_id = 42),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_initialization, 5, .production_id = 53),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_initialization, 5, .production_id = 53),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_initialization, 5, .production_id = 43),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_initialization, 5, .production_id = 43),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_expression, 4, .production_id = 44),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_expression, 4, .production_id = 44),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_initialization, 4, .production_id = 43),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_initialization, 4, .production_id = 43),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_initialization, 4, .production_id = 29),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_initialization, 4, .production_id = 29),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 4, .production_id = 39),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 4, .production_id = 39),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_expression_repeat1, 1, .production_id = 33),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_expression_repeat1, 1, .production_id = 33),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null, 1),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_expression, 5, .production_id = 55),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_expression, 5, .production_id = 55),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_catch_block, 5, .production_id = 59),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_catch_block, 5, .production_id = 59),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 30),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 30),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_initialization, 3, .production_id = 29),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_initialization, 3, .production_id = 29),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_expression, 5, .production_id = 56),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_expression, 5, .production_id = 56),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 3, .production_id = 26),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 3, .production_id = 26),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_initialization, 6, .production_id = 53),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_initialization, 6, .production_id = 53),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 3, .production_id = 13),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 3, .production_id = 13),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, .production_id = 13),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, .production_id = 13),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 1),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_expression, 6, .production_id = 58),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_expression, 6, .production_id = 58),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 2),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_spec, 2, .production_id = 9),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_spec, 2, .production_id = 9),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_spec, 3, .production_id = 24),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_spec, 3, .production_id = 24),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [460] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_expression_repeat1, 2, .production_id = 45), SHIFT_REPEAT(278),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1, .production_id = 6),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1, .production_id = 6),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 6, .production_id = 57),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 6, .production_id = 57),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyed_element, 3, .production_id = 52),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 42),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 5, .production_id = 47),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 5, .production_id = 47),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 4, .production_id = 41),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 4, .production_id = 41),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, .production_id = 13),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2, .production_id = 13),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_expression_repeat1, 2, .production_id = 13),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 5, .production_id = 46),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 5, .production_id = 46),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_parameter_list, 2),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter_list, 2),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_parameter_list, 4),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter_list, 4),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_parameter_list, 3),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter_list, 3),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 4),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [633] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(309),
  [636] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(320),
  [639] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(311),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_type, 2, .production_id = 5),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_type, 3, .production_id = 19),
  [666] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2, .production_id = 27), SHIFT_REPEAT(89),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2, .production_id = 27),
  [671] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2, .production_id = 27), SHIFT_REPEAT(191),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sum_type, 3, .production_id = 18),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 4, .production_id = 36),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_type, 3, .production_id = 11),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 2),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sum_type, 3, .production_id = 18),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_spec, 4, .production_id = 38),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_spec, 4, .production_id = 38),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 10),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 2, .production_id = 4),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_definition, 2, .production_id = 4),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_type, 3, .production_id = 19),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 1, .production_id = 15),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 1, .production_id = 15),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 4),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_embetted_expr, 3, .production_id = 13),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embetted_expr, 3, .production_id = 13),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 4, .production_id = 36),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_type, 2, .production_id = 5),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_spec, 3, .production_id = 23),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_spec, 3, .production_id = 23),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_type, 3, .production_id = 11),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 1),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [792] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(225),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_definition_repeat1, 2),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [819] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_definition_list_repeat1, 2, .production_id = 21), SHIFT_REPEAT(282),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_definition_list_repeat1, 2, .production_id = 21),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 2),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [832] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_initialization_repeat1, 2, .production_id = 54), SHIFT_REPEAT(279),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_initialization_repeat1, 2, .production_id = 54),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 28),
  [849] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 28),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_initialization_repeat1, 2, .production_id = 51),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [859] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 50), SHIFT_REPEAT(88),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 50),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter, 1),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [872] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(6),
  [875] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter, 3, .production_id = 37),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [887] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(280),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [892] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_expression_repeat1, 2, .production_id = 40), SHIFT_REPEAT(90),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_expression_repeat1, 2, .production_id = 40),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter, 2, .production_id = 22),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_definition_list_repeat1, 2, .production_id = 8),
  [923] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_definition_list_repeat1, 2, .production_id = 8),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_throw_statement, 2, .production_id = 14),
  [927] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_throw_statement, 2, .production_id = 14),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 48),
  [939] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 48),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 5, .production_id = 3),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 35),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition_list, 2),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 4, .production_id = 3),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 3, .production_id = 1),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 2),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition_list, 3, .production_id = 8),
  [977] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition_list, 5, .production_id = 20),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 7),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 6, .production_id = 3),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition_list, 4, .production_id = 8),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 7, .production_id = 3),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition_list, 4, .production_id = 20),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
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
