#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 315
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
  [51] = {.index = 106, .length = 2},
  [52] = {.index = 108, .length = 1},
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
    {field_field, 2},
    {field_name, 0},
  [108] =
    {field_field_init, 1},
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
  [17] = 16,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 15,
  [23] = 23,
  [24] = 24,
  [25] = 19,
  [26] = 26,
  [27] = 27,
  [28] = 18,
  [29] = 29,
  [30] = 20,
  [31] = 24,
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
  [43] = 38,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 33,
  [49] = 38,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 60,
  [74] = 67,
  [75] = 69,
  [76] = 34,
  [77] = 35,
  [78] = 78,
  [79] = 79,
  [80] = 34,
  [81] = 81,
  [82] = 36,
  [83] = 69,
  [84] = 35,
  [85] = 85,
  [86] = 86,
  [87] = 36,
  [88] = 88,
  [89] = 60,
  [90] = 67,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 13,
  [96] = 12,
  [97] = 97,
  [98] = 98,
  [99] = 8,
  [100] = 11,
  [101] = 101,
  [102] = 102,
  [103] = 9,
  [104] = 101,
  [105] = 98,
  [106] = 7,
  [107] = 107,
  [108] = 27,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 79,
  [115] = 115,
  [116] = 116,
  [117] = 29,
  [118] = 118,
  [119] = 13,
  [120] = 120,
  [121] = 121,
  [122] = 14,
  [123] = 123,
  [124] = 124,
  [125] = 57,
  [126] = 113,
  [127] = 21,
  [128] = 111,
  [129] = 129,
  [130] = 23,
  [131] = 59,
  [132] = 132,
  [133] = 26,
  [134] = 64,
  [135] = 124,
  [136] = 136,
  [137] = 62,
  [138] = 61,
  [139] = 56,
  [140] = 53,
  [141] = 141,
  [142] = 65,
  [143] = 143,
  [144] = 32,
  [145] = 145,
  [146] = 146,
  [147] = 141,
  [148] = 148,
  [149] = 63,
  [150] = 66,
  [151] = 151,
  [152] = 57,
  [153] = 146,
  [154] = 143,
  [155] = 42,
  [156] = 44,
  [157] = 86,
  [158] = 145,
  [159] = 61,
  [160] = 62,
  [161] = 64,
  [162] = 47,
  [163] = 45,
  [164] = 39,
  [165] = 40,
  [166] = 50,
  [167] = 70,
  [168] = 41,
  [169] = 46,
  [170] = 71,
  [171] = 58,
  [172] = 52,
  [173] = 88,
  [174] = 151,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
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
  [191] = 184,
  [192] = 192,
  [193] = 193,
  [194] = 193,
  [195] = 195,
  [196] = 196,
  [197] = 188,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 190,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 186,
  [210] = 210,
  [211] = 211,
  [212] = 189,
  [213] = 185,
  [214] = 203,
  [215] = 215,
  [216] = 192,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 219,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 230,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 232,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 241,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 223,
  [252] = 252,
  [253] = 253,
  [254] = 237,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 228,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 260,
  [274] = 262,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 282,
  [291] = 291,
  [292] = 292,
  [293] = 284,
  [294] = 294,
  [295] = 292,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 282,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 302,
  [313] = 287,
  [314] = 301,
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
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 5},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 5},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 5},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 5},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 5},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 2},
  [172] = {.lex_state = 2},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 5},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 4},
  [184] = {.lex_state = 3},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 4},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 4},
  [190] = {.lex_state = 4},
  [191] = {.lex_state = 3},
  [192] = {.lex_state = 4},
  [193] = {.lex_state = 3},
  [194] = {.lex_state = 3},
  [195] = {.lex_state = 3},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 3},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 1},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 1},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 3},
  [216] = {.lex_state = 1},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 4},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 4},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 1},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 1},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 1},
  [245] = {.lex_state = 1},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 1},
  [249] = {.lex_state = 1},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 1},
  [253] = {.lex_state = 1},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 1},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 1},
  [264] = {.lex_state = 1},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 1},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 1},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 1},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 1},
  [279] = {.lex_state = 1},
  [280] = {.lex_state = 1},
  [281] = {.lex_state = 1},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 1},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 1},
  [286] = {.lex_state = 1},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 4},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 1},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 1},
  [297] = {.lex_state = 4},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 1},
  [300] = {.lex_state = 1},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 1},
  [304] = {.lex_state = 1},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 1},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
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
    [sym_source_file] = STATE(308),
    [sym__definition] = STATE(182),
    [sym_function_definition] = STATE(306),
    [sym_struct_definition] = STATE(306),
    [sym_interface_definition] = STATE(306),
    [aux_sym_source_file_repeat1] = STATE(182),
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
    STATE(293), 1,
      sym__statement_list,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(41), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(249), 6,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      sym_throw_statement,
      sym_var_declaration,
      sym_if_statement,
    STATE(129), 13,
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
    STATE(284), 1,
      sym__statement_list,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(41), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(249), 6,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      sym_throw_statement,
      sym_var_declaration,
      sym_if_statement,
    STATE(129), 13,
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
    STATE(268), 6,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      sym_throw_statement,
      sym_var_declaration,
      sym_if_statement,
    STATE(129), 13,
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
    STATE(268), 6,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      sym_throw_statement,
      sym_var_declaration,
      sym_if_statement,
    STATE(129), 13,
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
    STATE(268), 6,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      sym_throw_statement,
      sym_var_declaration,
      sym_if_statement,
    STATE(129), 13,
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
  [398] = 5,
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
    ACTIONS(51), 23,
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
  [440] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_selector_expression_repeat1,
    STATE(56), 1,
      sym_selector_field,
    ACTIONS(61), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(59), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 21,
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
  [484] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_selector_expression_repeat1,
    STATE(56), 1,
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
  [528] = 13,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_null,
    ACTIONS(29), 1,
      anon_sym__,
    ACTIONS(70), 1,
      anon_sym_LF,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(35), 4,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_typeof,
    ACTIONS(82), 4,
      sym_int_literal,
      sym_float_literal,
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
  [586] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_selector_expression_repeat1,
    STATE(56), 1,
      sym_selector_field,
    ACTIONS(61), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(88), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(86), 21,
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
  [630] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_catch,
    STATE(65), 1,
      sym_catch_block,
    ACTIONS(92), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(90), 23,
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
  [672] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_argument_list,
    ACTIONS(98), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(96), 22,
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
  [716] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    STATE(11), 1,
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
  [757] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_null,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(118), 1,
      anon_sym_RBRACK,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym__,
    ACTIONS(124), 1,
      anon_sym_typeof,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(130), 1,
      sym_float_literal,
    ACTIONS(112), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(128), 3,
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
  [816] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_null,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym__,
    ACTIONS(124), 1,
      anon_sym_typeof,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      anon_sym_COLON,
    ACTIONS(136), 1,
      sym_float_literal,
    ACTIONS(112), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(134), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(147), 13,
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
  [875] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_null,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym__,
    ACTIONS(124), 1,
      anon_sym_typeof,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(138), 1,
      anon_sym_COLON,
    ACTIONS(142), 1,
      sym_float_literal,
    ACTIONS(112), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(140), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(141), 13,
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
  [934] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_null,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym__,
    ACTIONS(124), 1,
      anon_sym_typeof,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
    ACTIONS(148), 1,
      sym_float_literal,
    ACTIONS(112), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(146), 3,
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
  [993] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_null,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym__,
    ACTIONS(124), 1,
      anon_sym_typeof,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      anon_sym_RBRACK,
    ACTIONS(154), 1,
      sym_float_literal,
    ACTIONS(112), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(152), 3,
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
  [1052] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_null,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym__,
    ACTIONS(124), 1,
      anon_sym_typeof,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      anon_sym_RBRACK,
    ACTIONS(160), 1,
      sym_float_literal,
    ACTIONS(112), 3,
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
    STATE(11), 1,
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
  [1150] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_null,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym__,
    ACTIONS(124), 1,
      anon_sym_typeof,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(166), 1,
      anon_sym_RBRACK,
    ACTIONS(170), 1,
      sym_float_literal,
    ACTIONS(112), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(168), 3,
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
  [1209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(172), 24,
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
  [1246] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_null,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym__,
    ACTIONS(124), 1,
      anon_sym_typeof,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(176), 1,
      anon_sym_RBRACK,
    ACTIONS(180), 1,
      sym_float_literal,
    ACTIONS(112), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(178), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(158), 13,
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
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_null,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym__,
    ACTIONS(124), 1,
      anon_sym_typeof,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_RBRACK,
    ACTIONS(186), 1,
      sym_float_literal,
    ACTIONS(112), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(184), 3,
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
  [1364] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    STATE(11), 1,
      sym_selector_field,
    ACTIONS(190), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(188), 22,
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
  [1405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(192), 24,
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
  [1442] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_null,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym__,
    ACTIONS(124), 1,
      anon_sym_typeof,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_RPAREN,
    ACTIONS(200), 1,
      sym_float_literal,
    ACTIONS(112), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(198), 3,
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
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_null,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym__,
    ACTIONS(124), 1,
      anon_sym_typeof,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(206), 1,
      anon_sym_RBRACK,
    ACTIONS(210), 1,
      sym_float_literal,
    ACTIONS(112), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(208), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(153), 13,
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
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_null,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym__,
    ACTIONS(124), 1,
      anon_sym_typeof,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(212), 1,
      anon_sym_RBRACK,
    ACTIONS(216), 1,
      sym_float_literal,
    ACTIONS(112), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(214), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(145), 13,
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
  [1692] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_null,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym__,
    ACTIONS(124), 1,
      anon_sym_typeof,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(224), 1,
      sym_float_literal,
    ACTIONS(112), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(222), 3,
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
  [1748] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_null,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(230), 1,
      anon_sym__,
    ACTIONS(232), 1,
      anon_sym_typeof,
    ACTIONS(236), 1,
      sym_float_literal,
    ACTIONS(228), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(234), 3,
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
  [1804] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_null,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(230), 1,
      anon_sym__,
    ACTIONS(232), 1,
      anon_sym_typeof,
    ACTIONS(240), 1,
      sym_float_literal,
    ACTIONS(228), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(238), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(26), 13,
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
  [1860] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_null,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(230), 1,
      anon_sym__,
    ACTIONS(232), 1,
      anon_sym_typeof,
    ACTIONS(244), 1,
      sym_float_literal,
    ACTIONS(228), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(242), 3,
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
  [1916] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_null,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym__,
    ACTIONS(124), 1,
      anon_sym_typeof,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(248), 1,
      sym_float_literal,
    ACTIONS(112), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(246), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(118), 13,
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
  [1972] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_null,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(230), 1,
      anon_sym__,
    ACTIONS(232), 1,
      anon_sym_typeof,
    ACTIONS(252), 1,
      sym_float_literal,
    ACTIONS(228), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(250), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(14), 13,
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
  [2028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(254), 23,
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
  [2064] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(258), 23,
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
  [2100] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(262), 23,
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
  [2136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(266), 23,
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
  [2172] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_null,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym__,
    ACTIONS(124), 1,
      anon_sym_typeof,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 1,
      sym_float_literal,
    ACTIONS(112), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(250), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(14), 13,
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
  [2228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(270), 23,
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
  [2264] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 23,
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
  [2300] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(278), 23,
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
  [2336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(282), 23,
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
  [2372] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_null,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym__,
    ACTIONS(124), 1,
      anon_sym_typeof,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(288), 1,
      sym_float_literal,
    ACTIONS(112), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(286), 3,
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
  [2428] = 13,
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
    ACTIONS(292), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(290), 3,
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
  [2484] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(294), 23,
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
  [2520] = 13,
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
    ACTIONS(300), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(298), 3,
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
  [2576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(302), 23,
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
  [2612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(306), 23,
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
  [2648] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_null,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(230), 1,
      anon_sym__,
    ACTIONS(232), 1,
      anon_sym_typeof,
    ACTIONS(312), 1,
      sym_float_literal,
    ACTIONS(228), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(310), 3,
      sym_int_literal,
      sym_true,
      sym_false,
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
  [2704] = 13,
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
    ACTIONS(316), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(314), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(116), 13,
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
  [2760] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(318), 23,
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
  [2796] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    ACTIONS(324), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_AMP_AMP,
    STATE(11), 1,
      sym_selector_field,
    ACTIONS(322), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(332), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(326), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(330), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(328), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(188), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
  [2848] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(336), 23,
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
  [2884] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(340), 23,
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
  [2920] = 13,
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
    ACTIONS(346), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(344), 3,
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
  [2976] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    ACTIONS(324), 1,
      anon_sym_PIPE,
    STATE(11), 1,
      sym_selector_field,
    ACTIONS(322), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(332), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(326), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(330), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(328), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(188), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3026] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    ACTIONS(324), 1,
      anon_sym_PIPE,
    STATE(11), 1,
      sym_selector_field,
    ACTIONS(190), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(322), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(326), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(328), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(188), 13,
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
  [3074] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 23,
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
  [3110] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    STATE(11), 1,
      sym_selector_field,
    ACTIONS(322), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(190), 3,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(328), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(188), 16,
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
  [3154] = 3,
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
  [3190] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(352), 23,
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
  [3226] = 13,
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
    ACTIONS(358), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(356), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(138), 13,
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
  [3282] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_null,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym__,
    ACTIONS(124), 1,
      anon_sym_typeof,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(362), 1,
      sym_float_literal,
    ACTIONS(112), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(360), 3,
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
  [3338] = 13,
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
    ACTIONS(366), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(364), 3,
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
  [3394] = 3,
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
  [3430] = 3,
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
  [3466] = 13,
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
    STATE(112), 13,
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
  [3522] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_null,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym__,
    ACTIONS(124), 1,
      anon_sym_typeof,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(382), 1,
      sym_float_literal,
    ACTIONS(112), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(380), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(57), 13,
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
  [3578] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_null,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym__,
    ACTIONS(124), 1,
      anon_sym_typeof,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(386), 1,
      sym_float_literal,
    ACTIONS(112), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(384), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(61), 13,
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
  [3634] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_null,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym__,
    ACTIONS(124), 1,
      anon_sym_typeof,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(390), 1,
      sym_float_literal,
    ACTIONS(112), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(388), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(62), 13,
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
  [3690] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_null,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym__,
    ACTIONS(124), 1,
      anon_sym_typeof,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(394), 1,
      sym_float_literal,
    ACTIONS(112), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(392), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(64), 13,
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
  [3746] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_null,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym__,
    ACTIONS(124), 1,
      anon_sym_typeof,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(240), 1,
      sym_float_literal,
    ACTIONS(112), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(238), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(26), 13,
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
  [3802] = 13,
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
  [3858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(400), 23,
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
  [3894] = 13,
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
  [3950] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_null,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym__,
    ACTIONS(124), 1,
      anon_sym_typeof,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(410), 1,
      sym_float_literal,
    ACTIONS(112), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(408), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(109), 13,
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
  [4006] = 13,
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
    ACTIONS(414), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(412), 3,
      sym_int_literal,
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
  [4062] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_null,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(230), 1,
      anon_sym__,
    ACTIONS(232), 1,
      anon_sym_typeof,
    ACTIONS(418), 1,
      sym_float_literal,
    ACTIONS(228), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(416), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(160), 13,
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
  [4118] = 13,
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
    ACTIONS(422), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(420), 3,
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
  [4174] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_null,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym__,
    ACTIONS(124), 1,
      anon_sym_typeof,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(426), 1,
      sym_float_literal,
    ACTIONS(112), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(424), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(148), 13,
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
  [4230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(428), 23,
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
  [4266] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_null,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym__,
    ACTIONS(124), 1,
      anon_sym_typeof,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      sym_float_literal,
    ACTIONS(112), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(242), 3,
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
  [4322] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(432), 23,
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
  [4358] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_null,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(230), 1,
      anon_sym__,
    ACTIONS(232), 1,
      anon_sym_typeof,
    ACTIONS(438), 1,
      sym_float_literal,
    ACTIONS(228), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(436), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(152), 13,
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
  [4414] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_null,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(230), 1,
      anon_sym__,
    ACTIONS(232), 1,
      anon_sym_typeof,
    ACTIONS(442), 1,
      sym_float_literal,
    ACTIONS(228), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(440), 3,
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
  [4470] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      sym_identifier,
    ACTIONS(446), 1,
      anon_sym_mut,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 1,
      anon_sym_AMP,
    ACTIONS(454), 1,
      anon_sym_EQ,
    STATE(225), 7,
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
  [4515] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 1,
      anon_sym_AMP,
    ACTIONS(456), 1,
      sym_identifier,
    STATE(286), 1,
      sym_block,
    STATE(196), 7,
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
  [4560] = 8,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(458), 1,
      sym_identifier,
    ACTIONS(460), 1,
      anon_sym_LF,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(464), 1,
      anon_sym_AMP,
    ACTIONS(468), 1,
      anon_sym_RBRACE,
    STATE(200), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(466), 15,
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
  [4605] = 8,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(464), 1,
      anon_sym_AMP,
    ACTIONS(470), 1,
      sym_identifier,
    ACTIONS(472), 1,
      anon_sym_LF,
    ACTIONS(474), 1,
      anon_sym_RBRACE,
    STATE(198), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(466), 15,
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
  [4650] = 6,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LF,
    ACTIONS(476), 1,
      anon_sym_LPAREN,
    ACTIONS(478), 1,
      anon_sym_LBRACE,
    STATE(96), 1,
      sym_argument_list,
    ACTIONS(98), 23,
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
  [4691] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_LF,
    ACTIONS(480), 1,
      anon_sym_catch,
    STATE(142), 1,
      sym_catch_block,
    ACTIONS(92), 23,
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
  [4729] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 1,
      anon_sym_AMP,
    ACTIONS(482), 1,
      sym_identifier,
    ACTIONS(484), 1,
      anon_sym_mut,
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
  [4771] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    ACTIONS(324), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_AMP_AMP,
    ACTIONS(486), 1,
      anon_sym_COMMA,
    ACTIONS(488), 1,
      anon_sym_RBRACK,
    ACTIONS(490), 1,
      anon_sym_PIPE_PIPE,
    STATE(11), 1,
      sym_selector_field,
    STATE(222), 1,
      aux_sym_array_expression_repeat1,
    ACTIONS(61), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(322), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(332), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(326), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(330), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(328), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [4829] = 6,
    ACTIONS(57), 1,
      anon_sym_LF,
    ACTIONS(84), 1,
      sym_comment,
    STATE(103), 1,
      aux_sym_selector_expression_repeat1,
    STATE(139), 1,
      sym_selector_field,
    ACTIONS(492), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(59), 21,
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
  [4869] = 6,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_LF,
    STATE(99), 1,
      aux_sym_selector_expression_repeat1,
    STATE(139), 1,
      sym_selector_field,
    ACTIONS(492), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(88), 21,
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
  [4909] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    ACTIONS(324), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_AMP_AMP,
    ACTIONS(490), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(494), 1,
      anon_sym_COMMA,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      sym_selector_field,
    STATE(237), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(61), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(322), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(332), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(326), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(330), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(328), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [4967] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 1,
      anon_sym_AMP,
    ACTIONS(498), 1,
      sym_identifier,
    ACTIONS(500), 1,
      anon_sym_EQ,
    STATE(218), 7,
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
  [5009] = 6,
    ACTIONS(63), 1,
      anon_sym_LF,
    ACTIONS(84), 1,
      sym_comment,
    STATE(103), 1,
      aux_sym_selector_expression_repeat1,
    STATE(139), 1,
      sym_selector_field,
    ACTIONS(502), 2,
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
  [5049] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    ACTIONS(324), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_AMP_AMP,
    ACTIONS(490), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(494), 1,
      anon_sym_COMMA,
    ACTIONS(505), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      sym_selector_field,
    STATE(254), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(61), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(322), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(332), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(326), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(330), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(328), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5107] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    ACTIONS(324), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_AMP_AMP,
    ACTIONS(486), 1,
      anon_sym_COMMA,
    ACTIONS(490), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(507), 1,
      anon_sym_RBRACK,
    STATE(11), 1,
      sym_selector_field,
    STATE(219), 1,
      aux_sym_array_expression_repeat1,
    ACTIONS(61), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(322), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(332), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(326), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(330), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(328), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5165] = 5,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_LPAREN,
    STATE(96), 1,
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
  [5203] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 1,
      anon_sym_AMP,
    ACTIONS(509), 1,
      sym_identifier,
    STATE(210), 7,
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
  [5242] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_LF,
    ACTIONS(194), 24,
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
  [5275] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    ACTIONS(324), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_AMP_AMP,
    ACTIONS(490), 1,
      anon_sym_PIPE_PIPE,
    STATE(11), 1,
      sym_selector_field,
    ACTIONS(61), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(322), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(332), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(511), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(326), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(330), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(328), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5328] = 11,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_LF,
    ACTIONS(519), 1,
      anon_sym_LBRACK,
    ACTIONS(521), 1,
      anon_sym_RBRACE,
    ACTIONS(525), 1,
      anon_sym_AMP_AMP,
    ACTIONS(527), 1,
      anon_sym_PIPE_PIPE,
    STATE(100), 1,
      sym_selector_field,
    ACTIONS(492), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(517), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(523), 6,
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
  [5377] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      sym_identifier,
    ACTIONS(531), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_AMP,
    STATE(209), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(466), 15,
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
  [5416] = 11,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_LBRACK,
    ACTIONS(525), 1,
      anon_sym_AMP_AMP,
    ACTIONS(527), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(535), 1,
      anon_sym_LF,
    ACTIONS(537), 1,
      anon_sym_RBRACE,
    STATE(100), 1,
      sym_selector_field,
    ACTIONS(492), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(517), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(523), 6,
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
  [5465] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_AMP,
    ACTIONS(539), 1,
      sym_identifier,
    STATE(213), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(466), 15,
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
  [5504] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_LF,
    ACTIONS(402), 24,
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
  [5537] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    ACTIONS(543), 1,
      anon_sym_PIPE,
    ACTIONS(553), 1,
      anon_sym_AMP_AMP,
    ACTIONS(555), 1,
      anon_sym_PIPE_PIPE,
    STATE(11), 1,
      sym_selector_field,
    STATE(221), 1,
      sym_block,
    ACTIONS(61), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(541), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(551), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(545), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(549), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(547), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5592] = 11,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_LBRACK,
    ACTIONS(525), 1,
      anon_sym_AMP_AMP,
    ACTIONS(527), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(557), 1,
      anon_sym_LF,
    ACTIONS(559), 1,
      anon_sym_RBRACE,
    STATE(100), 1,
      sym_selector_field,
    ACTIONS(492), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(517), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(523), 6,
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
  [5641] = 3,
    ACTIONS(84), 1,
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
  [5674] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    ACTIONS(324), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_AMP_AMP,
    ACTIONS(490), 1,
      anon_sym_PIPE_PIPE,
    STATE(11), 1,
      sym_selector_field,
    ACTIONS(61), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(322), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(332), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(561), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(326), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(330), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(328), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5727] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_argument_list,
    ACTIONS(98), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(96), 18,
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
  [5764] = 11,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_LBRACK,
    ACTIONS(525), 1,
      anon_sym_AMP_AMP,
    ACTIONS(527), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(563), 1,
      anon_sym_LF,
    ACTIONS(565), 1,
      anon_sym_RBRACE,
    STATE(100), 1,
      sym_selector_field,
    ACTIONS(492), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(517), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(523), 6,
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
  [5813] = 11,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_LBRACK,
    ACTIONS(525), 1,
      anon_sym_AMP_AMP,
    ACTIONS(527), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(567), 1,
      anon_sym_LF,
    ACTIONS(569), 1,
      anon_sym_RBRACE,
    STATE(100), 1,
      sym_selector_field,
    ACTIONS(492), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(517), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(523), 6,
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
  [5862] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_LF,
    ACTIONS(519), 1,
      anon_sym_LBRACK,
    STATE(100), 1,
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
  [5899] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    ACTIONS(324), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_AMP_AMP,
    ACTIONS(490), 1,
      anon_sym_PIPE_PIPE,
    STATE(11), 1,
      sym_selector_field,
    ACTIONS(61), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(322), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(332), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(571), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(326), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(330), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(328), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5952] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 1,
      anon_sym_AMP,
    ACTIONS(573), 1,
      sym_identifier,
    STATE(258), 7,
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
  [5991] = 9,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_LF,
    ACTIONS(519), 1,
      anon_sym_LBRACK,
    ACTIONS(525), 1,
      anon_sym_AMP_AMP,
    STATE(100), 1,
      sym_selector_field,
    ACTIONS(190), 4,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
    ACTIONS(517), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(523), 6,
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
  [6036] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 1,
      anon_sym_AMP,
    ACTIONS(575), 1,
      sym_identifier,
    STATE(185), 7,
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
  [6075] = 4,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_LF,
    STATE(100), 1,
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
  [6110] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 1,
      anon_sym_AMP,
    ACTIONS(577), 1,
      sym_identifier,
    STATE(186), 7,
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
  [6149] = 11,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_LBRACK,
    ACTIONS(525), 1,
      anon_sym_AMP_AMP,
    ACTIONS(527), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(579), 1,
      anon_sym_LF,
    ACTIONS(581), 1,
      anon_sym_RBRACE,
    STATE(100), 1,
      sym_selector_field,
    ACTIONS(492), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(517), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(523), 6,
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
  [6198] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_LF,
    ACTIONS(174), 24,
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
  [6231] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_LF,
    ACTIONS(342), 24,
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
  [6264] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 1,
      anon_sym_AMP,
    ACTIONS(583), 1,
      sym_identifier,
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
  [6303] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_LF,
    ACTIONS(519), 1,
      anon_sym_LBRACK,
    STATE(100), 1,
      sym_selector_field,
    ACTIONS(190), 22,
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
  [6340] = 6,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_LF,
    ACTIONS(519), 1,
      anon_sym_LBRACK,
    STATE(100), 1,
      sym_selector_field,
    ACTIONS(515), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(190), 15,
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
  [6379] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 1,
      anon_sym_AMP,
    ACTIONS(585), 1,
      sym_identifier,
    STATE(228), 7,
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
  [6418] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_AMP,
    ACTIONS(587), 1,
      sym_identifier,
    STATE(206), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(466), 15,
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
  [6457] = 7,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_LF,
    ACTIONS(519), 1,
      anon_sym_LBRACK,
    STATE(100), 1,
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
    ACTIONS(190), 11,
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
  [6498] = 8,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_LF,
    ACTIONS(519), 1,
      anon_sym_LBRACK,
    STATE(100), 1,
      sym_selector_field,
    ACTIONS(517), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(190), 5,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(523), 6,
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
  [6541] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_LF,
    ACTIONS(320), 23,
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
  [6573] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_LF,
    ACTIONS(308), 23,
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
  [6605] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    ACTIONS(324), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_AMP_AMP,
    ACTIONS(490), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(589), 1,
      anon_sym_COLON,
    STATE(11), 1,
      sym_selector_field,
    ACTIONS(61), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(322), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(332), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(326), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(330), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(328), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [6657] = 3,
    ACTIONS(84), 1,
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
  [6689] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    ACTIONS(324), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_AMP_AMP,
    ACTIONS(490), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(591), 1,
      anon_sym_RBRACK,
    STATE(11), 1,
      sym_selector_field,
    ACTIONS(61), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(322), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(332), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(326), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(330), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(328), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [6741] = 3,
    ACTIONS(84), 1,
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
  [6773] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    ACTIONS(324), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_AMP_AMP,
    ACTIONS(490), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(593), 1,
      anon_sym_RBRACK,
    STATE(11), 1,
      sym_selector_field,
    ACTIONS(61), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(322), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(332), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(326), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(330), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(328), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [6825] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    ACTIONS(324), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_AMP_AMP,
    ACTIONS(490), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(595), 1,
      anon_sym_RBRACK,
    STATE(11), 1,
      sym_selector_field,
    ACTIONS(61), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(322), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(332), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(326), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(330), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(328), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [6877] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    ACTIONS(324), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_AMP_AMP,
    ACTIONS(490), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(597), 1,
      anon_sym_COLON,
    STATE(11), 1,
      sym_selector_field,
    ACTIONS(61), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(322), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(332), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(326), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(330), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(328), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [6929] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    ACTIONS(324), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_AMP_AMP,
    ACTIONS(490), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(599), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      sym_selector_field,
    ACTIONS(61), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(322), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(332), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(326), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(330), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(328), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [6981] = 3,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(84), 1,
      sym_comment,
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
  [7013] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_LF,
    ACTIONS(354), 23,
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
  [7045] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    ACTIONS(324), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_AMP_AMP,
    ACTIONS(490), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(601), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      sym_selector_field,
    ACTIONS(61), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(322), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(332), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(326), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(330), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(328), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [7097] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    ACTIONS(543), 1,
      anon_sym_PIPE,
    ACTIONS(553), 1,
      anon_sym_AMP_AMP,
    STATE(11), 1,
      sym_selector_field,
    ACTIONS(541), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(551), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(545), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(188), 4,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_PIPE_PIPE,
    ACTIONS(549), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(547), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [7145] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    ACTIONS(324), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_AMP_AMP,
    ACTIONS(490), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(603), 1,
      anon_sym_RBRACK,
    STATE(11), 1,
      sym_selector_field,
    ACTIONS(61), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(322), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(332), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(326), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(330), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(328), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [7197] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    ACTIONS(324), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_AMP_AMP,
    ACTIONS(490), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(605), 1,
      anon_sym_RBRACK,
    STATE(11), 1,
      sym_selector_field,
    ACTIONS(61), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(322), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(332), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(326), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(330), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(328), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [7249] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_LF,
    ACTIONS(268), 23,
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
  [7281] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LF,
    ACTIONS(272), 23,
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
  [7313] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_LF,
    ACTIONS(430), 23,
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
  [7345] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    ACTIONS(324), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_AMP_AMP,
    ACTIONS(490), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(607), 1,
      anon_sym_RBRACK,
    STATE(11), 1,
      sym_selector_field,
    ACTIONS(61), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(322), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(332), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(326), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(330), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(328), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [7397] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    ACTIONS(543), 1,
      anon_sym_PIPE,
    STATE(11), 1,
      sym_selector_field,
    ACTIONS(541), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(551), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(545), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(549), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(188), 5,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(547), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [7443] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    ACTIONS(543), 1,
      anon_sym_PIPE,
    STATE(11), 1,
      sym_selector_field,
    ACTIONS(190), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(541), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(545), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(547), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(188), 9,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7487] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    STATE(11), 1,
      sym_selector_field,
    ACTIONS(541), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(190), 3,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(547), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(188), 12,
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
  [7527] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_LF,
    ACTIONS(284), 23,
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
  [7559] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_LF,
    ACTIONS(276), 23,
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
  [7591] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LF,
    ACTIONS(256), 23,
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
  [7623] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LF,
    ACTIONS(260), 23,
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
  [7655] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LF,
    ACTIONS(296), 23,
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
  [7687] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_LF,
    ACTIONS(370), 23,
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
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_LF,
    ACTIONS(264), 23,
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
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_LF,
    ACTIONS(280), 23,
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
  [7783] = 3,
    ACTIONS(84), 1,
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
  [7815] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_LF,
    ACTIONS(338), 23,
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
  [7847] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_LF,
    ACTIONS(304), 23,
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
  [7879] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_LF,
    ACTIONS(434), 23,
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
  [7911] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    ACTIONS(324), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_AMP_AMP,
    ACTIONS(490), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(609), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      sym_selector_field,
    ACTIONS(61), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(322), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(332), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(326), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(330), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(328), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [7963] = 3,
    ACTIONS(84), 1,
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
  [7991] = 3,
    ACTIONS(84), 1,
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
  [8019] = 3,
    ACTIONS(84), 1,
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
  [8047] = 3,
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
  [8074] = 3,
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
  [8101] = 3,
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
  [8128] = 7,
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
    STATE(181), 2,
      sym__definition,
      aux_sym_source_file_repeat1,
    STATE(306), 3,
      sym_function_definition,
      sym_struct_definition,
      sym_interface_definition,
  [8153] = 7,
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
    STATE(181), 2,
      sym__definition,
      aux_sym_source_file_repeat1,
    STATE(306), 3,
      sym_function_definition,
      sym_struct_definition,
      sym_interface_definition,
  [8178] = 7,
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
    STATE(255), 2,
      sym_parameter,
      sym_self_parameter,
  [8201] = 6,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_LBRACE,
    ACTIONS(660), 1,
      anon_sym_DQUOTE,
    STATE(193), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(215), 1,
      sym_embetted_expr,
    ACTIONS(662), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [8221] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_PIPE,
    ACTIONS(668), 1,
      anon_sym_LBRACK,
    ACTIONS(664), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [8237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_LBRACK,
    ACTIONS(670), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [8251] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_AMP,
    ACTIONS(672), 1,
      anon_sym_mut,
    ACTIONS(674), 1,
      anon_sym_LPAREN,
    ACTIONS(676), 1,
      anon_sym_self,
    STATE(94), 1,
      sym_self_parameter_list,
    STATE(267), 1,
      sym_self_parameter,
  [8273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [8285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [8297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [8309] = 6,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_LBRACE,
    ACTIONS(684), 1,
      anon_sym_DQUOTE,
    STATE(194), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(215), 1,
      sym_embetted_expr,
    ACTIONS(686), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [8329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [8341] = 6,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_LBRACE,
    ACTIONS(690), 1,
      anon_sym_DQUOTE,
    STATE(195), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(215), 1,
      sym_embetted_expr,
    ACTIONS(692), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [8361] = 6,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_LBRACE,
    ACTIONS(694), 1,
      anon_sym_DQUOTE,
    STATE(195), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(215), 1,
      sym_embetted_expr,
    ACTIONS(692), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [8381] = 6,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(696), 1,
      anon_sym_LBRACE,
    ACTIONS(699), 1,
      anon_sym_DQUOTE,
    STATE(195), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(215), 1,
      sym_embetted_expr,
    ACTIONS(701), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [8401] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(666), 1,
      anon_sym_PIPE,
    ACTIONS(668), 1,
      anon_sym_LBRACK,
    ACTIONS(704), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      sym_block,
  [8420] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_LF,
    ACTIONS(706), 3,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [8432] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_LF,
    ACTIONS(710), 1,
      anon_sym_PIPE,
    ACTIONS(712), 1,
      anon_sym_LBRACK,
    ACTIONS(714), 1,
      anon_sym_RBRACE,
  [8448] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      sym_identifier,
    ACTIONS(718), 1,
      anon_sym_RBRACE,
    STATE(248), 2,
      sym__interface_body,
      sym_method_spec,
  [8462] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_PIPE,
    ACTIONS(712), 1,
      anon_sym_LBRACK,
    ACTIONS(720), 1,
      anon_sym_LF,
    ACTIONS(722), 1,
      anon_sym_RBRACE,
  [8478] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_PIPE,
    ACTIONS(668), 1,
      anon_sym_LBRACK,
    ACTIONS(724), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 4,
      ts_builtin_sym_end,
      anon_sym_fun,
      anon_sym_struct,
      anon_sym_interface,
  [8502] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      sym_identifier,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    ACTIONS(732), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      sym_keyed_element,
  [8518] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      sym_identifier,
    ACTIONS(734), 1,
      anon_sym_RBRACE,
    STATE(270), 2,
      sym__interface_body,
      sym_method_spec,
  [8532] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_LF,
    ACTIONS(736), 3,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [8544] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_PIPE,
    ACTIONS(712), 1,
      anon_sym_LBRACK,
    ACTIONS(738), 1,
      anon_sym_LF,
    ACTIONS(740), 1,
      anon_sym_RBRACE,
  [8560] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(742), 2,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
    ACTIONS(744), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [8572] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      sym_identifier,
    ACTIONS(746), 1,
      anon_sym_RBRACE,
    STATE(270), 2,
      sym__interface_body,
      sym_method_spec,
  [8586] = 4,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_LF,
    ACTIONS(712), 1,
      anon_sym_LBRACK,
    ACTIONS(748), 2,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [8600] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(666), 1,
      anon_sym_PIPE,
    ACTIONS(668), 1,
      anon_sym_LBRACK,
    STATE(283), 1,
      sym_block,
  [8616] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_PIPE,
    ACTIONS(668), 1,
      anon_sym_LBRACK,
    ACTIONS(750), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8630] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_LF,
    ACTIONS(752), 3,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [8642] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_LF,
    ACTIONS(710), 1,
      anon_sym_PIPE,
    ACTIONS(712), 1,
      anon_sym_LBRACK,
    ACTIONS(754), 1,
      anon_sym_RBRACE,
  [8658] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      sym_identifier,
    ACTIONS(756), 1,
      anon_sym_COMMA,
    ACTIONS(758), 1,
      anon_sym_RBRACE,
    STATE(241), 1,
      sym_keyed_element,
  [8674] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(760), 2,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
    ACTIONS(762), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [8686] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_LF,
    ACTIONS(764), 3,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [8698] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(766), 1,
      anon_sym_if,
    STATE(264), 2,
      sym_block,
      sym_if_statement,
  [8712] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_PIPE,
    ACTIONS(668), 1,
      anon_sym_LBRACK,
    ACTIONS(768), 1,
      anon_sym_EQ,
  [8725] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_COMMA,
    ACTIONS(770), 1,
      anon_sym_RBRACK,
    STATE(250), 1,
      aux_sym_array_expression_repeat1,
  [8738] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_COMMA,
    ACTIONS(775), 1,
      anon_sym_RPAREN,
    STATE(220), 1,
      aux_sym_argument_list_repeat1,
  [8751] = 4,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_LF,
    ACTIONS(779), 1,
      anon_sym_RBRACE,
    ACTIONS(781), 1,
      anon_sym_else,
  [8764] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_COMMA,
    ACTIONS(783), 1,
      anon_sym_RBRACK,
    STATE(250), 1,
      aux_sym_array_expression_repeat1,
  [8777] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      sym_identifier,
    ACTIONS(785), 1,
      anon_sym_RBRACE,
    STATE(276), 1,
      sym_keyed_element,
  [8790] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      anon_sym_COMMA,
    ACTIONS(790), 1,
      anon_sym_RBRACE,
    STATE(224), 1,
      aux_sym_struct_initialization_repeat1,
  [8803] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_PIPE,
    ACTIONS(668), 1,
      anon_sym_LBRACK,
    ACTIONS(792), 1,
      anon_sym_EQ,
  [8816] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      sym_identifier,
    ACTIONS(796), 1,
      anon_sym_RPAREN,
    STATE(239), 1,
      sym_parameter,
  [8829] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      sym_identifier,
    ACTIONS(800), 1,
      anon_sym_RBRACE,
    STATE(245), 1,
      sym_field_definition,
  [8842] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_PIPE,
    ACTIONS(668), 1,
      anon_sym_LBRACK,
    ACTIONS(802), 1,
      anon_sym_RPAREN,
  [8855] = 4,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_LF,
    ACTIONS(806), 1,
      anon_sym_RBRACE,
    STATE(253), 1,
      aux_sym__statement_list_repeat1,
  [8868] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      anon_sym_COMMA,
    ACTIONS(810), 1,
      anon_sym_RBRACE,
    STATE(224), 1,
      aux_sym_struct_initialization_repeat1,
  [8881] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_COMMA,
    ACTIONS(814), 1,
      anon_sym_RBRACE,
    STATE(224), 1,
      aux_sym_struct_initialization_repeat1,
  [8894] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      sym_identifier,
    ACTIONS(816), 1,
      anon_sym_RBRACE,
    STATE(276), 1,
      sym_keyed_element,
  [8907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [8916] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_COMMA,
    ACTIONS(823), 1,
      anon_sym_RPAREN,
    STATE(234), 1,
      aux_sym_parameter_list_repeat1,
  [8929] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_COMMA,
    ACTIONS(827), 1,
      anon_sym_RPAREN,
    STATE(234), 1,
      aux_sym_parameter_list_repeat1,
  [8942] = 4,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_LF,
    ACTIONS(831), 1,
      anon_sym_RBRACE,
    STATE(256), 1,
      aux_sym_interface_definition_repeat1,
  [8955] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_COMMA,
    ACTIONS(833), 1,
      anon_sym_RPAREN,
    STATE(220), 1,
      aux_sym_argument_list_repeat1,
  [8968] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      sym_identifier,
    ACTIONS(835), 1,
      anon_sym_RBRACE,
    STATE(276), 1,
      sym_keyed_element,
  [8981] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_COMMA,
    ACTIONS(837), 1,
      anon_sym_RPAREN,
    STATE(259), 1,
      aux_sym_parameter_list_repeat1,
  [8994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [9003] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_COMMA,
    ACTIONS(843), 1,
      anon_sym_RBRACE,
    STATE(230), 1,
      aux_sym_struct_initialization_repeat1,
  [9016] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      sym_identifier,
    ACTIONS(845), 1,
      anon_sym_RBRACE,
    STATE(263), 1,
      sym_field_definition,
  [9029] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_COMMA,
    ACTIONS(849), 1,
      anon_sym_RBRACE,
    STATE(231), 1,
      aux_sym_struct_initialization_repeat1,
  [9042] = 4,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_LF,
    ACTIONS(853), 1,
      anon_sym_RBRACE,
    STATE(252), 1,
      aux_sym_field_definition_list_repeat1,
  [9055] = 4,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(855), 1,
      anon_sym_LF,
    ACTIONS(857), 1,
      anon_sym_RBRACE,
    STATE(244), 1,
      aux_sym_field_definition_list_repeat1,
  [9068] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      sym_identifier,
    ACTIONS(859), 1,
      anon_sym_RBRACE,
    STATE(263), 1,
      sym_field_definition,
  [9081] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      sym_identifier,
    STATE(270), 2,
      sym__interface_body,
      sym_method_spec,
  [9092] = 4,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(861), 1,
      anon_sym_LF,
    ACTIONS(863), 1,
      anon_sym_RBRACE,
    STATE(236), 1,
      aux_sym_interface_definition_repeat1,
  [9105] = 4,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_LF,
    ACTIONS(867), 1,
      anon_sym_RBRACE,
    STATE(229), 1,
      aux_sym__statement_list_repeat1,
  [9118] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_COMMA,
    ACTIONS(872), 1,
      anon_sym_RBRACK,
    STATE(250), 1,
      aux_sym_array_expression_repeat1,
  [9131] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      sym_identifier,
    ACTIONS(874), 1,
      anon_sym_RBRACE,
    STATE(276), 1,
      sym_keyed_element,
  [9144] = 4,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_LF,
    ACTIONS(879), 1,
      anon_sym_RBRACE,
    STATE(252), 1,
      aux_sym_field_definition_list_repeat1,
  [9157] = 4,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_LF,
    ACTIONS(884), 1,
      anon_sym_RBRACE,
    STATE(253), 1,
      aux_sym__statement_list_repeat1,
  [9170] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_COMMA,
    ACTIONS(886), 1,
      anon_sym_RPAREN,
    STATE(220), 1,
      aux_sym_argument_list_repeat1,
  [9183] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_COMMA,
    ACTIONS(888), 1,
      anon_sym_RPAREN,
    STATE(235), 1,
      aux_sym_parameter_list_repeat1,
  [9196] = 4,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_LF,
    ACTIONS(893), 1,
      anon_sym_RBRACE,
    STATE(256), 1,
      aux_sym_interface_definition_repeat1,
  [9209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [9218] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_PIPE,
    ACTIONS(668), 1,
      anon_sym_LBRACK,
    ACTIONS(897), 1,
      anon_sym_RPAREN,
  [9231] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_COMMA,
    ACTIONS(899), 1,
      anon_sym_RPAREN,
    STATE(234), 1,
      aux_sym_parameter_list_repeat1,
  [9244] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      sym_identifier,
    STATE(63), 1,
      sym_function_call,
  [9254] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      sym_identifier,
    STATE(269), 1,
      sym_parameter,
  [9264] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym_block,
  [9274] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_LF,
    ACTIONS(905), 1,
      anon_sym_RBRACE,
  [9284] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_LF,
    ACTIONS(909), 1,
      anon_sym_RBRACE,
  [9294] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_LBRACE,
    STATE(278), 1,
      sym_field_definition_list,
  [9304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_LPAREN,
    STATE(92), 1,
      sym_parameter_list,
  [9314] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_LPAREN,
    STATE(93), 1,
      sym_self_parameter_list,
  [9324] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_RBRACE,
    ACTIONS(915), 1,
      anon_sym_LF,
  [9334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9342] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_RBRACE,
    ACTIONS(917), 1,
      anon_sym_LF,
  [9352] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      sym_identifier,
    STATE(263), 1,
      sym_field_definition,
  [9362] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(919), 1,
      anon_sym_LF,
    ACTIONS(921), 1,
      anon_sym_RBRACE,
  [9372] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      sym_identifier,
    STATE(149), 1,
      sym_function_call,
  [9382] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    STATE(164), 1,
      sym_block,
  [9392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      sym_identifier,
    STATE(276), 1,
      sym_keyed_element,
  [9402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      sym_identifier,
  [9417] = 2,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(929), 1,
      anon_sym_LF,
  [9424] = 2,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_LF,
  [9431] = 2,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(933), 1,
      anon_sym_LF,
  [9438] = 2,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(935), 1,
      anon_sym_LF,
  [9445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_COMMA,
  [9452] = 2,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_LF,
  [9459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      anon_sym_RBRACE,
  [9466] = 2,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(943), 1,
      anon_sym_LF,
  [9473] = 2,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(945), 1,
      anon_sym_LF,
  [9480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      sym_identifier,
  [9487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_EQ,
  [9494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      anon_sym_LBRACE,
  [9501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_COMMA,
  [9508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 1,
      sym_identifier,
  [9515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_RBRACE,
  [9522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_RBRACE,
  [9529] = 2,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_LF,
  [9536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      anon_sym_RBRACE,
  [9543] = 2,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(965), 1,
      anon_sym_LF,
  [9550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      anon_sym_AMP,
  [9557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      anon_sym_self,
  [9564] = 2,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(971), 1,
      anon_sym_LF,
  [9571] = 2,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(973), 1,
      anon_sym_LF,
  [9578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 1,
      anon_sym_LPAREN,
  [9585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      anon_sym_RPAREN,
  [9592] = 2,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(979), 1,
      anon_sym_LF,
  [9599] = 2,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(981), 1,
      anon_sym_LF,
  [9606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(983), 1,
      anon_sym_self,
  [9613] = 2,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(985), 1,
      anon_sym_LF,
  [9620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 1,
      anon_sym_COMMA,
  [9627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 1,
      ts_builtin_sym_end,
  [9634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      sym_identifier,
  [9641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      sym_identifier,
  [9648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 1,
      sym_identifier,
  [9655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 1,
      anon_sym_RPAREN,
  [9662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 1,
      sym_identifier,
  [9669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 82,
  [SMALL_STATE(4)] = 164,
  [SMALL_STATE(5)] = 243,
  [SMALL_STATE(6)] = 322,
  [SMALL_STATE(7)] = 398,
  [SMALL_STATE(8)] = 440,
  [SMALL_STATE(9)] = 484,
  [SMALL_STATE(10)] = 528,
  [SMALL_STATE(11)] = 586,
  [SMALL_STATE(12)] = 630,
  [SMALL_STATE(13)] = 672,
  [SMALL_STATE(14)] = 716,
  [SMALL_STATE(15)] = 757,
  [SMALL_STATE(16)] = 816,
  [SMALL_STATE(17)] = 875,
  [SMALL_STATE(18)] = 934,
  [SMALL_STATE(19)] = 993,
  [SMALL_STATE(20)] = 1052,
  [SMALL_STATE(21)] = 1111,
  [SMALL_STATE(22)] = 1150,
  [SMALL_STATE(23)] = 1209,
  [SMALL_STATE(24)] = 1246,
  [SMALL_STATE(25)] = 1305,
  [SMALL_STATE(26)] = 1364,
  [SMALL_STATE(27)] = 1405,
  [SMALL_STATE(28)] = 1442,
  [SMALL_STATE(29)] = 1501,
  [SMALL_STATE(30)] = 1538,
  [SMALL_STATE(31)] = 1597,
  [SMALL_STATE(32)] = 1656,
  [SMALL_STATE(33)] = 1692,
  [SMALL_STATE(34)] = 1748,
  [SMALL_STATE(35)] = 1804,
  [SMALL_STATE(36)] = 1860,
  [SMALL_STATE(37)] = 1916,
  [SMALL_STATE(38)] = 1972,
  [SMALL_STATE(39)] = 2028,
  [SMALL_STATE(40)] = 2064,
  [SMALL_STATE(41)] = 2100,
  [SMALL_STATE(42)] = 2136,
  [SMALL_STATE(43)] = 2172,
  [SMALL_STATE(44)] = 2228,
  [SMALL_STATE(45)] = 2264,
  [SMALL_STATE(46)] = 2300,
  [SMALL_STATE(47)] = 2336,
  [SMALL_STATE(48)] = 2372,
  [SMALL_STATE(49)] = 2428,
  [SMALL_STATE(50)] = 2484,
  [SMALL_STATE(51)] = 2520,
  [SMALL_STATE(52)] = 2576,
  [SMALL_STATE(53)] = 2612,
  [SMALL_STATE(54)] = 2648,
  [SMALL_STATE(55)] = 2704,
  [SMALL_STATE(56)] = 2760,
  [SMALL_STATE(57)] = 2796,
  [SMALL_STATE(58)] = 2848,
  [SMALL_STATE(59)] = 2884,
  [SMALL_STATE(60)] = 2920,
  [SMALL_STATE(61)] = 2976,
  [SMALL_STATE(62)] = 3026,
  [SMALL_STATE(63)] = 3074,
  [SMALL_STATE(64)] = 3110,
  [SMALL_STATE(65)] = 3154,
  [SMALL_STATE(66)] = 3190,
  [SMALL_STATE(67)] = 3226,
  [SMALL_STATE(68)] = 3282,
  [SMALL_STATE(69)] = 3338,
  [SMALL_STATE(70)] = 3394,
  [SMALL_STATE(71)] = 3430,
  [SMALL_STATE(72)] = 3466,
  [SMALL_STATE(73)] = 3522,
  [SMALL_STATE(74)] = 3578,
  [SMALL_STATE(75)] = 3634,
  [SMALL_STATE(76)] = 3690,
  [SMALL_STATE(77)] = 3746,
  [SMALL_STATE(78)] = 3802,
  [SMALL_STATE(79)] = 3858,
  [SMALL_STATE(80)] = 3894,
  [SMALL_STATE(81)] = 3950,
  [SMALL_STATE(82)] = 4006,
  [SMALL_STATE(83)] = 4062,
  [SMALL_STATE(84)] = 4118,
  [SMALL_STATE(85)] = 4174,
  [SMALL_STATE(86)] = 4230,
  [SMALL_STATE(87)] = 4266,
  [SMALL_STATE(88)] = 4322,
  [SMALL_STATE(89)] = 4358,
  [SMALL_STATE(90)] = 4414,
  [SMALL_STATE(91)] = 4470,
  [SMALL_STATE(92)] = 4515,
  [SMALL_STATE(93)] = 4560,
  [SMALL_STATE(94)] = 4605,
  [SMALL_STATE(95)] = 4650,
  [SMALL_STATE(96)] = 4691,
  [SMALL_STATE(97)] = 4729,
  [SMALL_STATE(98)] = 4771,
  [SMALL_STATE(99)] = 4829,
  [SMALL_STATE(100)] = 4869,
  [SMALL_STATE(101)] = 4909,
  [SMALL_STATE(102)] = 4967,
  [SMALL_STATE(103)] = 5009,
  [SMALL_STATE(104)] = 5049,
  [SMALL_STATE(105)] = 5107,
  [SMALL_STATE(106)] = 5165,
  [SMALL_STATE(107)] = 5203,
  [SMALL_STATE(108)] = 5242,
  [SMALL_STATE(109)] = 5275,
  [SMALL_STATE(110)] = 5328,
  [SMALL_STATE(111)] = 5377,
  [SMALL_STATE(112)] = 5416,
  [SMALL_STATE(113)] = 5465,
  [SMALL_STATE(114)] = 5504,
  [SMALL_STATE(115)] = 5537,
  [SMALL_STATE(116)] = 5592,
  [SMALL_STATE(117)] = 5641,
  [SMALL_STATE(118)] = 5674,
  [SMALL_STATE(119)] = 5727,
  [SMALL_STATE(120)] = 5764,
  [SMALL_STATE(121)] = 5813,
  [SMALL_STATE(122)] = 5862,
  [SMALL_STATE(123)] = 5899,
  [SMALL_STATE(124)] = 5952,
  [SMALL_STATE(125)] = 5991,
  [SMALL_STATE(126)] = 6036,
  [SMALL_STATE(127)] = 6075,
  [SMALL_STATE(128)] = 6110,
  [SMALL_STATE(129)] = 6149,
  [SMALL_STATE(130)] = 6198,
  [SMALL_STATE(131)] = 6231,
  [SMALL_STATE(132)] = 6264,
  [SMALL_STATE(133)] = 6303,
  [SMALL_STATE(134)] = 6340,
  [SMALL_STATE(135)] = 6379,
  [SMALL_STATE(136)] = 6418,
  [SMALL_STATE(137)] = 6457,
  [SMALL_STATE(138)] = 6498,
  [SMALL_STATE(139)] = 6541,
  [SMALL_STATE(140)] = 6573,
  [SMALL_STATE(141)] = 6605,
  [SMALL_STATE(142)] = 6657,
  [SMALL_STATE(143)] = 6689,
  [SMALL_STATE(144)] = 6741,
  [SMALL_STATE(145)] = 6773,
  [SMALL_STATE(146)] = 6825,
  [SMALL_STATE(147)] = 6877,
  [SMALL_STATE(148)] = 6929,
  [SMALL_STATE(149)] = 6981,
  [SMALL_STATE(150)] = 7013,
  [SMALL_STATE(151)] = 7045,
  [SMALL_STATE(152)] = 7097,
  [SMALL_STATE(153)] = 7145,
  [SMALL_STATE(154)] = 7197,
  [SMALL_STATE(155)] = 7249,
  [SMALL_STATE(156)] = 7281,
  [SMALL_STATE(157)] = 7313,
  [SMALL_STATE(158)] = 7345,
  [SMALL_STATE(159)] = 7397,
  [SMALL_STATE(160)] = 7443,
  [SMALL_STATE(161)] = 7487,
  [SMALL_STATE(162)] = 7527,
  [SMALL_STATE(163)] = 7559,
  [SMALL_STATE(164)] = 7591,
  [SMALL_STATE(165)] = 7623,
  [SMALL_STATE(166)] = 7655,
  [SMALL_STATE(167)] = 7687,
  [SMALL_STATE(168)] = 7719,
  [SMALL_STATE(169)] = 7751,
  [SMALL_STATE(170)] = 7783,
  [SMALL_STATE(171)] = 7815,
  [SMALL_STATE(172)] = 7847,
  [SMALL_STATE(173)] = 7879,
  [SMALL_STATE(174)] = 7911,
  [SMALL_STATE(175)] = 7963,
  [SMALL_STATE(176)] = 7991,
  [SMALL_STATE(177)] = 8019,
  [SMALL_STATE(178)] = 8047,
  [SMALL_STATE(179)] = 8074,
  [SMALL_STATE(180)] = 8101,
  [SMALL_STATE(181)] = 8128,
  [SMALL_STATE(182)] = 8153,
  [SMALL_STATE(183)] = 8178,
  [SMALL_STATE(184)] = 8201,
  [SMALL_STATE(185)] = 8221,
  [SMALL_STATE(186)] = 8237,
  [SMALL_STATE(187)] = 8251,
  [SMALL_STATE(188)] = 8273,
  [SMALL_STATE(189)] = 8285,
  [SMALL_STATE(190)] = 8297,
  [SMALL_STATE(191)] = 8309,
  [SMALL_STATE(192)] = 8329,
  [SMALL_STATE(193)] = 8341,
  [SMALL_STATE(194)] = 8361,
  [SMALL_STATE(195)] = 8381,
  [SMALL_STATE(196)] = 8401,
  [SMALL_STATE(197)] = 8420,
  [SMALL_STATE(198)] = 8432,
  [SMALL_STATE(199)] = 8448,
  [SMALL_STATE(200)] = 8462,
  [SMALL_STATE(201)] = 8478,
  [SMALL_STATE(202)] = 8492,
  [SMALL_STATE(203)] = 8502,
  [SMALL_STATE(204)] = 8518,
  [SMALL_STATE(205)] = 8532,
  [SMALL_STATE(206)] = 8544,
  [SMALL_STATE(207)] = 8560,
  [SMALL_STATE(208)] = 8572,
  [SMALL_STATE(209)] = 8586,
  [SMALL_STATE(210)] = 8600,
  [SMALL_STATE(211)] = 8616,
  [SMALL_STATE(212)] = 8630,
  [SMALL_STATE(213)] = 8642,
  [SMALL_STATE(214)] = 8658,
  [SMALL_STATE(215)] = 8674,
  [SMALL_STATE(216)] = 8686,
  [SMALL_STATE(217)] = 8698,
  [SMALL_STATE(218)] = 8712,
  [SMALL_STATE(219)] = 8725,
  [SMALL_STATE(220)] = 8738,
  [SMALL_STATE(221)] = 8751,
  [SMALL_STATE(222)] = 8764,
  [SMALL_STATE(223)] = 8777,
  [SMALL_STATE(224)] = 8790,
  [SMALL_STATE(225)] = 8803,
  [SMALL_STATE(226)] = 8816,
  [SMALL_STATE(227)] = 8829,
  [SMALL_STATE(228)] = 8842,
  [SMALL_STATE(229)] = 8855,
  [SMALL_STATE(230)] = 8868,
  [SMALL_STATE(231)] = 8881,
  [SMALL_STATE(232)] = 8894,
  [SMALL_STATE(233)] = 8907,
  [SMALL_STATE(234)] = 8916,
  [SMALL_STATE(235)] = 8929,
  [SMALL_STATE(236)] = 8942,
  [SMALL_STATE(237)] = 8955,
  [SMALL_STATE(238)] = 8968,
  [SMALL_STATE(239)] = 8981,
  [SMALL_STATE(240)] = 8994,
  [SMALL_STATE(241)] = 9003,
  [SMALL_STATE(242)] = 9016,
  [SMALL_STATE(243)] = 9029,
  [SMALL_STATE(244)] = 9042,
  [SMALL_STATE(245)] = 9055,
  [SMALL_STATE(246)] = 9068,
  [SMALL_STATE(247)] = 9081,
  [SMALL_STATE(248)] = 9092,
  [SMALL_STATE(249)] = 9105,
  [SMALL_STATE(250)] = 9118,
  [SMALL_STATE(251)] = 9131,
  [SMALL_STATE(252)] = 9144,
  [SMALL_STATE(253)] = 9157,
  [SMALL_STATE(254)] = 9170,
  [SMALL_STATE(255)] = 9183,
  [SMALL_STATE(256)] = 9196,
  [SMALL_STATE(257)] = 9209,
  [SMALL_STATE(258)] = 9218,
  [SMALL_STATE(259)] = 9231,
  [SMALL_STATE(260)] = 9244,
  [SMALL_STATE(261)] = 9254,
  [SMALL_STATE(262)] = 9264,
  [SMALL_STATE(263)] = 9274,
  [SMALL_STATE(264)] = 9284,
  [SMALL_STATE(265)] = 9294,
  [SMALL_STATE(266)] = 9304,
  [SMALL_STATE(267)] = 9314,
  [SMALL_STATE(268)] = 9324,
  [SMALL_STATE(269)] = 9334,
  [SMALL_STATE(270)] = 9342,
  [SMALL_STATE(271)] = 9352,
  [SMALL_STATE(272)] = 9362,
  [SMALL_STATE(273)] = 9372,
  [SMALL_STATE(274)] = 9382,
  [SMALL_STATE(275)] = 9392,
  [SMALL_STATE(276)] = 9402,
  [SMALL_STATE(277)] = 9410,
  [SMALL_STATE(278)] = 9417,
  [SMALL_STATE(279)] = 9424,
  [SMALL_STATE(280)] = 9431,
  [SMALL_STATE(281)] = 9438,
  [SMALL_STATE(282)] = 9445,
  [SMALL_STATE(283)] = 9452,
  [SMALL_STATE(284)] = 9459,
  [SMALL_STATE(285)] = 9466,
  [SMALL_STATE(286)] = 9473,
  [SMALL_STATE(287)] = 9480,
  [SMALL_STATE(288)] = 9487,
  [SMALL_STATE(289)] = 9494,
  [SMALL_STATE(290)] = 9501,
  [SMALL_STATE(291)] = 9508,
  [SMALL_STATE(292)] = 9515,
  [SMALL_STATE(293)] = 9522,
  [SMALL_STATE(294)] = 9529,
  [SMALL_STATE(295)] = 9536,
  [SMALL_STATE(296)] = 9543,
  [SMALL_STATE(297)] = 9550,
  [SMALL_STATE(298)] = 9557,
  [SMALL_STATE(299)] = 9564,
  [SMALL_STATE(300)] = 9571,
  [SMALL_STATE(301)] = 9578,
  [SMALL_STATE(302)] = 9585,
  [SMALL_STATE(303)] = 9592,
  [SMALL_STATE(304)] = 9599,
  [SMALL_STATE(305)] = 9606,
  [SMALL_STATE(306)] = 9613,
  [SMALL_STATE(307)] = 9620,
  [SMALL_STATE(308)] = 9627,
  [SMALL_STATE(309)] = 9634,
  [SMALL_STATE(310)] = 9641,
  [SMALL_STATE(311)] = 9648,
  [SMALL_STATE(312)] = 9655,
  [SMALL_STATE(313)] = 9662,
  [SMALL_STATE(314)] = 9669,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_field, 2, .production_id = 32),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_field, 2, .production_id = 32),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 3, .production_id = 34),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 3, .production_id = 34),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_expression_repeat1, 2, .production_id = 45),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_expression_repeat1, 2, .production_id = 45),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_expression_repeat1, 2, .production_id = 45), SHIFT_REPEAT(260),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 2, .production_id = 17),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 2, .production_id = 17),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 16),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 16),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 12),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 12),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_expression, 3, .production_id = 25),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_error_expression, 3, .production_id = 25),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 31),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 31),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4, .production_id = 49),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4, .production_id = 49),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3, .production_id = 42),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3, .production_id = 42),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 3, .production_id = 26),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 3, .production_id = 26),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_catch_block, 5, .production_id = 59),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_catch_block, 5, .production_id = 59),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_expression, 6, .production_id = 58),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_expression, 6, .production_id = 58),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_initialization, 6, .production_id = 53),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_initialization, 6, .production_id = 53),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_expression, 5, .production_id = 56),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_expression, 5, .production_id = 56),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_expression, 5, .production_id = 55),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_expression, 5, .production_id = 55),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_initialization, 5, .production_id = 53),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_initialization, 5, .production_id = 53),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_initialization, 5, .production_id = 43),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_initialization, 5, .production_id = 43),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_expression, 4, .production_id = 44),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_expression, 4, .production_id = 44),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_initialization, 4, .production_id = 43),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_initialization, 4, .production_id = 43),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_initialization, 4, .production_id = 29),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_initialization, 4, .production_id = 29),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 4, .production_id = 39),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 4, .production_id = 39),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_expression_repeat1, 1, .production_id = 33),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_expression_repeat1, 1, .production_id = 33),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null, 1),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 30),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 30),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_initialization, 3, .production_id = 29),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_initialization, 3, .production_id = 29),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 3, .production_id = 13),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 3, .production_id = 13),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, .production_id = 13),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, .production_id = 13),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 2),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 2),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 2),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 2),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_spec, 3, .production_id = 24),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_spec, 3, .production_id = 24),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_spec, 2, .production_id = 9),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_spec, 2, .production_id = 9),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [502] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_expression_repeat1, 2, .production_id = 45), SHIFT_REPEAT(273),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 42),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 5, .production_id = 47),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 5, .production_id = 47),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 5, .production_id = 46),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 5, .production_id = 46),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 6, .production_id = 57),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 6, .production_id = 57),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyed_element, 3, .production_id = 51),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, .production_id = 13),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2, .production_id = 13),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 4, .production_id = 41),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 4, .production_id = 41),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_expression_repeat1, 2, .production_id = 13),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1, .production_id = 6),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1, .production_id = 6),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_parameter_list, 3),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter_list, 3),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_parameter_list, 4),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter_list, 4),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_parameter_list, 2),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter_list, 2),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 4),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(311),
  [640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(310),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(309),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sum_type, 3, .production_id = 18),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_type, 2, .production_id = 5),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_type, 3, .production_id = 11),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 4, .production_id = 36),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_type, 3, .production_id = 19),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [696] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2, .production_id = 27), SHIFT_REPEAT(85),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2, .production_id = 27),
  [701] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2, .production_id = 27), SHIFT_REPEAT(195),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_spec, 3, .production_id = 23),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_spec, 3, .production_id = 23),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_spec, 4, .production_id = 38),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_spec, 4, .production_id = 38),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 4),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 2),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 4, .production_id = 36),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 2, .production_id = 4),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_definition, 2, .production_id = 4),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_embetted_expr, 3, .production_id = 13),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embetted_expr, 3, .production_id = 13),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_type, 2, .production_id = 5),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 10),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_type, 3, .production_id = 11),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sum_type, 3, .production_id = 18),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [760] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 1, .production_id = 15),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 1, .production_id = 15),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_type, 3, .production_id = 19),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [772] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 50), SHIFT_REPEAT(81),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 50),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 28),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 28),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [787] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_initialization_repeat1, 2, .production_id = 54), SHIFT_REPEAT(275),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_initialization_repeat1, 2, .production_id = 54),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 2),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter, 3, .production_id = 37),
  [820] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(261),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter, 1),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [867] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 1),
  [869] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_expression_repeat1, 2, .production_id = 40), SHIFT_REPEAT(68),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_expression_repeat1, 2, .production_id = 40),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [876] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_definition_list_repeat1, 2, .production_id = 21), SHIFT_REPEAT(271),
  [879] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_definition_list_repeat1, 2, .production_id = 21),
  [881] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(6),
  [884] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [890] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(247),
  [893] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_definition_repeat1, 2),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter, 2, .production_id = 22),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_definition_list_repeat1, 2, .production_id = 8),
  [905] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_definition_list_repeat1, 2, .production_id = 8),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 48),
  [909] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 48),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_throw_statement, 2, .production_id = 14),
  [921] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_throw_statement, 2, .production_id = 14),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_initialization_repeat1, 2, .production_id = 52),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 3, .production_id = 1),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 4, .production_id = 3),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 7, .production_id = 3),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition_list, 2),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 35),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition_list, 5, .production_id = 20),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 2),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 7),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition_list, 3, .production_id = 8),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 5, .production_id = 3),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 6, .production_id = 3),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition_list, 4, .production_id = 8),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition_list, 4, .production_id = 20),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [989] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
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
