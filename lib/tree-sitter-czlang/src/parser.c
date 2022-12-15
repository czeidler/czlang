#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 241
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 114
#define ALIAS_COUNT 0
#define TOKEN_COUNT 67
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 30
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 46

enum {
  sym_identifier = 1,
  anon_sym_LF = 2,
  anon_sym_fun = 3,
  anon_sym_mut = 4,
  anon_sym_LPAREN = 5,
  anon_sym_COMMA = 6,
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
  anon_sym_QMARK = 28,
  anon_sym_DOT = 29,
  anon_sym_LBRACE = 30,
  anon_sym_RBRACE = 31,
  anon_sym_return = 32,
  anon_sym_var = 33,
  anon_sym_EQ = 34,
  anon_sym_DASH = 35,
  anon_sym_BANG = 36,
  anon_sym_typeof = 37,
  anon_sym_STAR = 38,
  anon_sym_SLASH = 39,
  anon_sym_PERCENT = 40,
  anon_sym_LT_LT = 41,
  anon_sym_GT_GT = 42,
  anon_sym_AMP_CARET = 43,
  anon_sym_PLUS = 44,
  anon_sym_CARET = 45,
  anon_sym_EQ_EQ = 46,
  anon_sym_BANG_EQ = 47,
  anon_sym_LT = 48,
  anon_sym_LT_EQ = 49,
  anon_sym_GT = 50,
  anon_sym_GT_EQ = 51,
  anon_sym_AMP_AMP = 52,
  anon_sym_PIPE_PIPE = 53,
  anon_sym_DQUOTE = 54,
  aux_sym_interpreted_string_literal_token1 = 55,
  anon_sym_if = 56,
  anon_sym_else = 57,
  anon_sym_struct = 58,
  anon_sym_interface = 59,
  anon_sym_self = 60,
  sym_escape_sequence = 61,
  sym_int_literal = 62,
  sym_float_literal = 63,
  sym_true = 64,
  sym_false = 65,
  sym_comment = 66,
  sym_source_file = 67,
  sym__definition = 68,
  sym_function_definition = 69,
  sym_parameter = 70,
  sym_parameter_list = 71,
  sym_reference_type = 72,
  sym__type = 73,
  sym_sum_type = 74,
  sym_parenthesized_type = 75,
  sym_primitive_type = 76,
  sym_array_type = 77,
  sym_slice_type = 78,
  sym_array_expression = 79,
  sym_slice_expression = 80,
  sym_selector_expression = 81,
  sym_block = 82,
  sym__statement_list = 83,
  sym__statement = 84,
  sym_expression_statement = 85,
  sym_return_statement = 86,
  sym_function_call = 87,
  sym_var_declaration = 88,
  sym__expression = 89,
  sym_parenthesized_expression = 90,
  sym_unary_expression = 91,
  sym_binary_expression = 92,
  sym_argument_list = 93,
  sym_interpreted_string_literal = 94,
  sym_embetted_expr = 95,
  sym_if_statement = 96,
  sym_struct_definition = 97,
  sym_field_definition_list = 98,
  sym_field_definition = 99,
  sym_interface_definition = 100,
  sym__interface_body = 101,
  sym_method_spec = 102,
  sym_self_parameter_list = 103,
  sym_self_parameter = 104,
  sym_null = 105,
  aux_sym_source_file_repeat1 = 106,
  aux_sym_parameter_list_repeat1 = 107,
  aux_sym_array_expression_repeat1 = 108,
  aux_sym__statement_list_repeat1 = 109,
  aux_sym_argument_list_repeat1 = 110,
  aux_sym_interpreted_string_literal_repeat1 = 111,
  aux_sym_field_definition_list_repeat1 = 112,
  aux_sym_interface_definition_repeat1 = 113,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LF] = "\n",
  [anon_sym_fun] = "fun",
  [anon_sym_mut] = "mut",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
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
  [anon_sym_QMARK] = "\?",
  [anon_sym_DOT] = ".",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_return] = "return",
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
  [sym_selector_expression] = "selector_expression",
  [sym_block] = "block",
  [sym__statement_list] = "_statement_list",
  [sym__statement] = "_statement",
  [sym_expression_statement] = "expression_statement",
  [sym_return_statement] = "return_statement",
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
  [sym_null] = "null",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_array_expression_repeat1] = "array_expression_repeat1",
  [aux_sym__statement_list_repeat1] = "_statement_list_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_interpreted_string_literal_repeat1] = "interpreted_string_literal_repeat1",
  [aux_sym_field_definition_list_repeat1] = "field_definition_list_repeat1",
  [aux_sym_interface_definition_repeat1] = "interface_definition_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_fun] = anon_sym_fun,
  [anon_sym_mut] = anon_sym_mut,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_return] = anon_sym_return,
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
  [sym_selector_expression] = sym_selector_expression,
  [sym_block] = sym_block,
  [sym__statement_list] = sym__statement_list,
  [sym__statement] = sym__statement,
  [sym_expression_statement] = sym_expression_statement,
  [sym_return_statement] = sym_return_statement,
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
  [sym_null] = sym_null,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_array_expression_repeat1] = aux_sym_array_expression_repeat1,
  [aux_sym__statement_list_repeat1] = aux_sym__statement_list_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_interpreted_string_literal_repeat1] = aux_sym_interpreted_string_literal_repeat1,
  [aux_sym_field_definition_list_repeat1] = aux_sym_field_definition_list_repeat1,
  [aux_sym_interface_definition_repeat1] = aux_sym_interface_definition_repeat1,
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
  [anon_sym_mut] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
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
};

enum {
  field_alternative = 1,
  field_argument = 2,
  field_arguments = 3,
  field_body = 4,
  field_chaining = 5,
  field_condition = 6,
  field_consequence = 7,
  field_element = 8,
  field_embetted_expr = 9,
  field_end = 10,
  field_expression = 11,
  field_field = 12,
  field_fields = 13,
  field_function = 14,
  field_left = 15,
  field_length = 16,
  field_mut_reference = 17,
  field_mutable = 18,
  field_name = 19,
  field_operand = 20,
  field_operator = 21,
  field_parameters = 22,
  field_reference = 23,
  field_result = 24,
  field_right = 25,
  field_self = 26,
  field_start = 27,
  field_type = 28,
  field_value = 29,
  field_variable = 30,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_argument] = "argument",
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_chaining] = "chaining",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_element] = "element",
  [field_embetted_expr] = "embetted_expr",
  [field_end] = "end",
  [field_expression] = "expression",
  [field_field] = "field",
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
  [15] = {.index = 26, .length = 2},
  [16] = {.index = 28, .length = 2},
  [17] = {.index = 30, .length = 1},
  [18] = {.index = 31, .length = 2},
  [19] = {.index = 33, .length = 2},
  [20] = {.index = 35, .length = 1},
  [21] = {.index = 36, .length = 3},
  [22] = {.index = 39, .length = 3},
  [23] = {.index = 42, .length = 1},
  [24] = {.index = 43, .length = 2},
  [25] = {.index = 45, .length = 2},
  [26] = {.index = 47, .length = 3},
  [27] = {.index = 50, .length = 2},
  [28] = {.index = 52, .length = 2},
  [29] = {.index = 54, .length = 2},
  [30] = {.index = 56, .length = 4},
  [31] = {.index = 60, .length = 2},
  [32] = {.index = 62, .length = 2},
  [33] = {.index = 64, .length = 3},
  [34] = {.index = 67, .length = 1},
  [35] = {.index = 68, .length = 1},
  [36] = {.index = 69, .length = 3},
  [37] = {.index = 72, .length = 4},
  [38] = {.index = 76, .length = 4},
  [39] = {.index = 80, .length = 3},
  [40] = {.index = 83, .length = 2},
  [41] = {.index = 85, .length = 2},
  [42] = {.index = 87, .length = 2},
  [43] = {.index = 89, .length = 2},
  [44] = {.index = 91, .length = 5},
  [45] = {.index = 96, .length = 3},
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
    {field_embetted_expr, 0},
  [26] =
    {field_arguments, 1},
    {field_function, 0},
  [28] =
    {field_left, 0},
    {field_right, 2},
  [30] =
    {field_element, 0},
  [31] =
    {field_field, 1},
    {field_field, 2, .inherited = true},
  [33] =
    {field_field, 0, .inherited = true},
    {field_field, 1, .inherited = true},
  [35] =
    {field_reference, 0},
  [36] =
    {field_name, 0},
    {field_parameters, 1},
    {field_result, 2},
  [39] =
    {field_name, 0},
    {field_parameters, 2},
    {field_self, 1},
  [42] =
    {field_embetted_expr, 1, .inherited = true},
  [43] =
    {field_embetted_expr, 0, .inherited = true},
    {field_embetted_expr, 1, .inherited = true},
  [45] =
    {field_condition, 1},
    {field_consequence, 2},
  [47] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [50] =
    {field_field, 2},
    {field_operand, 0},
  [52] =
    {field_element, 0},
    {field_length, 2},
  [54] =
    {field_mut_reference, 0},
    {field_mut_reference, 1},
  [56] =
    {field_name, 0},
    {field_parameters, 2},
    {field_result, 3},
    {field_self, 1},
  [60] =
    {field_expression, 1},
    {field_expression, 2, .inherited = true},
  [62] =
    {field_expression, 0, .inherited = true},
    {field_expression, 1, .inherited = true},
  [64] =
    {field_name, 1},
    {field_value, 3},
    {field_variable, 0},
  [67] =
    {field_argument, 1},
  [68] =
    {field_operand, 0},
  [69] =
    {field_chaining, 1},
    {field_field, 3},
    {field_operand, 0},
  [72] =
    {field_mutable, 2},
    {field_name, 1},
    {field_value, 4},
    {field_variable, 0},
  [76] =
    {field_name, 1},
    {field_type, 2},
    {field_value, 4},
    {field_variable, 0},
  [80] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequence, 2},
  [83] =
    {field_argument, 1},
    {field_argument, 2, .inherited = true},
  [85] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [87] =
    {field_end, 3},
    {field_operand, 0},
  [89] =
    {field_operand, 0},
    {field_start, 2},
  [91] =
    {field_mutable, 2},
    {field_name, 1},
    {field_type, 3},
    {field_value, 5},
    {field_variable, 0},
  [96] =
    {field_end, 4},
    {field_operand, 0},
    {field_start, 2},
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
  [3] = 3,
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
  [36] = 6,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 37,
  [44] = 41,
  [45] = 42,
  [46] = 46,
  [47] = 47,
  [48] = 39,
  [49] = 46,
  [50] = 50,
  [51] = 51,
  [52] = 14,
  [53] = 53,
  [54] = 54,
  [55] = 12,
  [56] = 56,
  [57] = 23,
  [58] = 58,
  [59] = 25,
  [60] = 10,
  [61] = 53,
  [62] = 28,
  [63] = 7,
  [64] = 64,
  [65] = 65,
  [66] = 21,
  [67] = 51,
  [68] = 20,
  [69] = 19,
  [70] = 17,
  [71] = 11,
  [72] = 65,
  [73] = 8,
  [74] = 9,
  [75] = 13,
  [76] = 16,
  [77] = 29,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 18,
  [82] = 82,
  [83] = 82,
  [84] = 84,
  [85] = 85,
  [86] = 15,
  [87] = 22,
  [88] = 24,
  [89] = 85,
  [90] = 26,
  [91] = 91,
  [92] = 54,
  [93] = 27,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 98,
  [103] = 103,
  [104] = 100,
  [105] = 105,
  [106] = 106,
  [107] = 97,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 96,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 110,
  [119] = 112,
  [120] = 115,
  [121] = 121,
  [122] = 99,
  [123] = 106,
  [124] = 108,
  [125] = 105,
  [126] = 116,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 143,
  [145] = 145,
  [146] = 137,
  [147] = 147,
  [148] = 141,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 138,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 147,
  [160] = 139,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 140,
  [166] = 142,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 170,
  [185] = 172,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 176,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 212,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 213,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 228,
  [240] = 240,
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
      if (eof) ADVANCE(38);
      if (lookahead == '!') ADVANCE(59);
      if (lookahead == '"') ADVANCE(76);
      if (lookahead == '%') ADVANCE(62);
      if (lookahead == '&') ADVANCE(44);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == '*') ADVANCE(60);
      if (lookahead == '+') ADVANCE(66);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '0') ADVANCE(86);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == '<') ADVANCE(70);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '>') ADVANCE(72);
      if (lookahead == '?') ADVANCE(50);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == '^') ADVANCE(67);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '|') ADVANCE(46);
      if (lookahead == '}') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '!') ADVANCE(58);
      if (lookahead == '"') ADVANCE(76);
      if (lookahead == '&') ADVANCE(43);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(86);
      if (lookahead == '[') ADVANCE(47);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(85);
      if (lookahead == '|') ADVANCE(45);
      if (lookahead == '}') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '%') ADVANCE(62);
      if (lookahead == '&') ADVANCE(44);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == '*') ADVANCE(60);
      if (lookahead == '+') ADVANCE(66);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '<') ADVANCE(70);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(72);
      if (lookahead == '?') ADVANCE(50);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == '^') ADVANCE(67);
      if (lookahead == '|') ADVANCE(46);
      if (lookahead == '}') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '"') ADVANCE(76);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(58);
      if (lookahead == '"') ADVANCE(76);
      if (lookahead == '&') ADVANCE(43);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(86);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == ']') ADVANCE(48);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(85);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '|') ADVANCE(45);
      if (lookahead == '}') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '%') ADVANCE(62);
      if (lookahead == '&') ADVANCE(44);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == '*') ADVANCE(60);
      if (lookahead == '+') ADVANCE(66);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == '<') ADVANCE(70);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(72);
      if (lookahead == '?') ADVANCE(50);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == '^') ADVANCE(67);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '|') ADVANCE(46);
      if (lookahead == '}') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(76);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(96);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(17);
      if (lookahead == '_') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '_') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(69);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(68);
      END_STATE();
    case 14:
      if (lookahead == 'U') ADVANCE(36);
      if (lookahead == 'u') ADVANCE(32);
      if (lookahead == 'x') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(20);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(90);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(91);
      END_STATE();
    case 17:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 18:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(17);
      if (lookahead == '_') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(90);
      END_STATE();
    case 21:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(87);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(91);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
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
      if (eof) ADVANCE(38);
      if (lookahead == '!') ADVANCE(59);
      if (lookahead == '"') ADVANCE(76);
      if (lookahead == '%') ADVANCE(62);
      if (lookahead == '&') ADVANCE(44);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == '*') ADVANCE(60);
      if (lookahead == '+') ADVANCE(66);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '0') ADVANCE(86);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == '<') ADVANCE(70);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '>') ADVANCE(72);
      if (lookahead == '?') ADVANCE(50);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == '^') ADVANCE(67);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(85);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '|') ADVANCE(46);
      if (lookahead == '}') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '^') ADVANCE(65);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(75);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(68);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(69);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(96);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_AMP_CARET);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '=') ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(73);
      if (lookahead == '>') ADVANCE(64);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_interpreted_string_literal_token1);
      if (lookahead == '*') ADVANCE(79);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(81);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_interpreted_string_literal_token1);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_interpreted_string_literal_token1);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_interpreted_string_literal_token1);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_interpreted_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(15);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(17);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(16);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(11);
      if (lookahead == '_') ADVANCE(21);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(17);
      if (lookahead == '_') ADVANCE(21);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(17);
      if (lookahead == '_') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(17);
      if (lookahead == '_') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(20);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '_') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(17);
      if (lookahead == '_') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
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
      if (lookahead == 'b') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(2);
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 'i') ADVANCE(4);
      if (lookahead == 'm') ADVANCE(5);
      if (lookahead == 'n') ADVANCE(6);
      if (lookahead == 'r') ADVANCE(7);
      if (lookahead == 's') ADVANCE(8);
      if (lookahead == 't') ADVANCE(9);
      if (lookahead == 'u') ADVANCE(10);
      if (lookahead == 'v') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead == '3') ADVANCE(14);
      if (lookahead == '6') ADVANCE(15);
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == '1') ADVANCE(18);
      if (lookahead == '3') ADVANCE(19);
      if (lookahead == '6') ADVANCE(20);
      if (lookahead == '8') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 5:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == 'y') ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == '1') ADVANCE(31);
      if (lookahead == '3') ADVANCE(32);
      if (lookahead == '6') ADVANCE(33);
      if (lookahead == '8') ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 13:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 14:
      if (lookahead == '2') ADVANCE(39);
      END_STATE();
    case 15:
      if (lookahead == '4') ADVANCE(40);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 18:
      if (lookahead == '6') ADVANCE(43);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(44);
      END_STATE();
    case 20:
      if (lookahead == '4') ADVANCE(45);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 30:
      if (lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 31:
      if (lookahead == '6') ADVANCE(54);
      END_STATE();
    case 32:
      if (lookahead == '2') ADVANCE(55);
      END_STATE();
    case 33:
      if (lookahead == '4') ADVANCE(56);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_fun);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_mut);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 50:
      if (lookahead == 'f') ADVANCE(65);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_str);
      if (lookahead == 'i') ADVANCE(66);
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_self);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 72:
      if (lookahead == 'f') ADVANCE(77);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 74:
      if (lookahead == 'g') ADVANCE(79);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 76:
      if (lookahead == 'f') ADVANCE(81);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_typeof);
      END_STATE();
    case 82:
      if (lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 84:
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
  [6] = {.lex_state = 5},
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
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 3},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 3},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 1},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 1},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 1},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 1},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 1},
  [223] = {.lex_state = 4},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 1},
  [228] = {.lex_state = 5},
  [229] = {.lex_state = 1},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 1},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 1},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 5},
  [240] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_fun] = ACTIONS(1),
    [anon_sym_mut] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
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
    [sym_source_file] = STATE(237),
    [sym__definition] = STATE(133),
    [sym_function_definition] = STATE(236),
    [sym_struct_definition] = STATE(236),
    [sym_interface_definition] = STATE(236),
    [aux_sym_source_file_repeat1] = STATE(133),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_fun] = ACTIONS(7),
    [anon_sym_struct] = ACTIONS(9),
    [anon_sym_interface] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
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
      anon_sym_var,
    ACTIONS(29), 1,
      anon_sym_typeof,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      sym_float_literal,
    STATE(215), 1,
      sym__statement_list,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(35), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(192), 5,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      sym_var_declaration,
      sym_if_statement,
    STATE(64), 10,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_null,
  [69] = 16,
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
      anon_sym_var,
    ACTIONS(29), 1,
      anon_sym_typeof,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      sym_float_literal,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(35), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(204), 5,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      sym_var_declaration,
      sym_if_statement,
    STATE(64), 10,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_null,
  [135] = 16,
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
      anon_sym_var,
    ACTIONS(29), 1,
      anon_sym_typeof,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(35), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(204), 5,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      sym_var_declaration,
      sym_if_statement,
    STATE(64), 10,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_null,
  [201] = 15,
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
      anon_sym_var,
    ACTIONS(29), 1,
      anon_sym_typeof,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(35), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(204), 5,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      sym_var_declaration,
      sym_if_statement,
    STATE(64), 10,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_null,
  [264] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_argument_list,
    ACTIONS(47), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
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
  [306] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(51), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(65), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(63), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(49), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [356] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
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
  [392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
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
  [428] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
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
  [464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
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
  [500] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(83), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
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
  [536] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(89), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
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
  [614] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
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
  [650] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
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
  [686] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(103), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
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
  [722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(107), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
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
  [758] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(65), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [800] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(51), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(65), 3,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(49), 15,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_LBRACE,
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
  [846] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(111), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
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
  [882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(115), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
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
  [918] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
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
    ACTIONS(125), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
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
  [990] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(131), 1,
      anon_sym_AMP_AMP,
    ACTIONS(51), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(129), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(127), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(63), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(49), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
  [1044] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
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
  [1080] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
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
  [1116] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(51), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(129), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(127), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(63), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(49), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1168] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
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
  [1204] = 8,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      anon_sym_LF,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      anon_sym_AMP,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    ACTIONS(157), 1,
      sym_comment,
    STATE(162), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(153), 15,
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
  [1249] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_mut,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_AMP,
    ACTIONS(169), 1,
      anon_sym_EQ,
    STATE(180), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(167), 15,
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
  [1294] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_AMP,
    ACTIONS(171), 1,
      sym_identifier,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    STATE(221), 1,
      sym_block,
    STATE(152), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(167), 15,
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
  [1339] = 8,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      anon_sym_AMP,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(177), 1,
      anon_sym_LF,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    STATE(164), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(153), 15,
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
  [1384] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_AMP,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_EQ,
    STATE(174), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(167), 15,
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
  [1426] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_AMP,
    ACTIONS(185), 1,
      sym_identifier,
    ACTIONS(187), 1,
      anon_sym_mut,
    STATE(153), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(167), 15,
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
  [1468] = 5,
    ACTIONS(45), 1,
      anon_sym_LF,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    STATE(86), 1,
      sym_argument_list,
    ACTIONS(47), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DOT,
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
  [1506] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_AMP,
    STATE(166), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(153), 15,
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
  [1545] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_AMP,
    ACTIONS(197), 1,
      sym_identifier,
    STATE(155), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(153), 15,
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
  [1584] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_AMP,
    ACTIONS(199), 1,
      sym_identifier,
    STATE(139), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(167), 15,
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
  [1623] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_AMP,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(161), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(167), 15,
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
  [1662] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_AMP,
    ACTIONS(203), 1,
      sym_identifier,
    STATE(170), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(167), 15,
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
  [1701] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(131), 1,
      anon_sym_AMP_AMP,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(207), 1,
      anon_sym_RBRACK,
    ACTIONS(209), 1,
      anon_sym_PIPE_PIPE,
    STATE(172), 1,
      aux_sym_array_expression_repeat1,
    ACTIONS(51), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(129), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(127), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(63), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [1758] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_AMP,
    ACTIONS(211), 1,
      sym_identifier,
    STATE(142), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(167), 15,
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
  [1797] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_AMP,
    ACTIONS(213), 1,
      sym_identifier,
    STATE(184), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(167), 15,
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
  [1836] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(131), 1,
      anon_sym_AMP_AMP,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(215), 1,
      anon_sym_RBRACK,
    STATE(185), 1,
      aux_sym_array_expression_repeat1,
    ACTIONS(51), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(129), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(127), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(63), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [1893] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(131), 1,
      anon_sym_AMP_AMP,
    ACTIONS(209), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    STATE(195), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(51), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(129), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(127), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(63), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [1950] = 11,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_null,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LF,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 4,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_typeof,
    ACTIONS(231), 4,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
    STATE(78), 10,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_null,
  [1999] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_AMP,
    ACTIONS(233), 1,
      sym_identifier,
    STATE(160), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(153), 15,
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
  [2038] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(131), 1,
      anon_sym_AMP_AMP,
    ACTIONS(209), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(51), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(129), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(127), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(63), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [2095] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(131), 1,
      anon_sym_AMP_AMP,
    ACTIONS(209), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(51), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(129), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(237), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(61), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(127), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(63), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [2147] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_null,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(249), 1,
      anon_sym_RBRACK,
    ACTIONS(251), 1,
      anon_sym_typeof,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(257), 1,
      sym_float_literal,
    ACTIONS(243), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(255), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(102), 10,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_null,
  [2197] = 3,
    ACTIONS(91), 1,
      anon_sym_LF,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(93), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DOT,
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
  [2229] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_null,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_typeof,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_RBRACK,
    ACTIONS(263), 1,
      sym_float_literal,
    ACTIONS(243), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(261), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(45), 10,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_null,
  [2279] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_null,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_typeof,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      anon_sym_COLON,
    ACTIONS(269), 1,
      sym_float_literal,
    ACTIONS(243), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(267), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(118), 10,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_null,
  [2329] = 3,
    ACTIONS(83), 1,
      anon_sym_LF,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(85), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DOT,
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
  [2361] = 11,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_LF,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_QMARK,
    ACTIONS(281), 1,
      anon_sym_DOT,
    ACTIONS(283), 1,
      anon_sym_RBRACE,
    ACTIONS(287), 1,
      anon_sym_AMP_AMP,
    ACTIONS(289), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(275), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(285), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(273), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [2409] = 3,
    ACTIONS(119), 1,
      anon_sym_LF,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(121), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DOT,
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
  [2441] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(131), 1,
      anon_sym_AMP_AMP,
    ACTIONS(209), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(51), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(129), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(291), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(61), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(127), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(63), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [2493] = 10,
    ACTIONS(49), 1,
      anon_sym_LF,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_QMARK,
    ACTIONS(281), 1,
      anon_sym_DOT,
    ACTIONS(287), 1,
      anon_sym_AMP_AMP,
    ACTIONS(65), 2,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
    ACTIONS(275), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(285), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(273), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [2539] = 3,
    ACTIONS(75), 1,
      anon_sym_LF,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(77), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DOT,
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
  [2571] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_null,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_typeof,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      anon_sym_RBRACK,
    ACTIONS(297), 1,
      sym_float_literal,
    ACTIONS(243), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(295), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(42), 10,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_null,
  [2621] = 9,
    ACTIONS(49), 1,
      anon_sym_LF,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_QMARK,
    ACTIONS(281), 1,
      anon_sym_DOT,
    ACTIONS(65), 3,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(275), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(285), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(273), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [2665] = 8,
    ACTIONS(49), 1,
      anon_sym_LF,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_QMARK,
    ACTIONS(281), 1,
      anon_sym_DOT,
    ACTIONS(275), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(273), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(65), 9,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2707] = 11,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_QMARK,
    ACTIONS(281), 1,
      anon_sym_DOT,
    ACTIONS(287), 1,
      anon_sym_AMP_AMP,
    ACTIONS(289), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(299), 1,
      anon_sym_LF,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
    ACTIONS(275), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(285), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(273), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [2755] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_null,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_typeof,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      anon_sym_RBRACK,
    ACTIONS(307), 1,
      sym_float_literal,
    ACTIONS(243), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(305), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(100), 10,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_null,
  [2805] = 3,
    ACTIONS(111), 1,
      anon_sym_LF,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(113), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DOT,
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
  [2837] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_null,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_typeof,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(309), 1,
      anon_sym_RBRACK,
    ACTIONS(313), 1,
      sym_float_literal,
    ACTIONS(243), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(311), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(98), 10,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_null,
  [2887] = 7,
    ACTIONS(49), 1,
      anon_sym_LF,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_QMARK,
    ACTIONS(281), 1,
      anon_sym_DOT,
    ACTIONS(273), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(65), 13,
      anon_sym_PIPE,
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
  [2927] = 6,
    ACTIONS(49), 1,
      anon_sym_LF,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_QMARK,
    ACTIONS(281), 1,
      anon_sym_DOT,
    ACTIONS(65), 20,
      anon_sym_AMP,
      anon_sym_PIPE,
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
  [2965] = 3,
    ACTIONS(103), 1,
      anon_sym_LF,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(105), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DOT,
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
  [2997] = 3,
    ACTIONS(79), 1,
      anon_sym_LF,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(81), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DOT,
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
  [3029] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_null,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_typeof,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(315), 1,
      anon_sym_RBRACK,
    ACTIONS(319), 1,
      sym_float_literal,
    ACTIONS(243), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(317), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(104), 10,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_null,
  [3079] = 3,
    ACTIONS(67), 1,
      anon_sym_LF,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(69), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DOT,
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
  [3111] = 3,
    ACTIONS(71), 1,
      anon_sym_LF,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(73), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DOT,
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
  [3143] = 6,
    ACTIONS(87), 1,
      anon_sym_LF,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_QMARK,
    ACTIONS(281), 1,
      anon_sym_DOT,
    ACTIONS(89), 20,
      anon_sym_AMP,
      anon_sym_PIPE,
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
  [3181] = 3,
    ACTIONS(99), 1,
      anon_sym_LF,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(101), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DOT,
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
  [3213] = 3,
    ACTIONS(141), 1,
      anon_sym_LF,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(143), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DOT,
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
  [3245] = 11,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_QMARK,
    ACTIONS(281), 1,
      anon_sym_DOT,
    ACTIONS(287), 1,
      anon_sym_AMP_AMP,
    ACTIONS(289), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(321), 1,
      anon_sym_LF,
    ACTIONS(323), 1,
      anon_sym_RBRACE,
    ACTIONS(275), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(285), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(273), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [3293] = 11,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_QMARK,
    ACTIONS(281), 1,
      anon_sym_DOT,
    ACTIONS(287), 1,
      anon_sym_AMP_AMP,
    ACTIONS(289), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(325), 1,
      anon_sym_LF,
    ACTIONS(327), 1,
      anon_sym_RBRACE,
    ACTIONS(275), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(285), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(273), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [3341] = 11,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_QMARK,
    ACTIONS(281), 1,
      anon_sym_DOT,
    ACTIONS(287), 1,
      anon_sym_AMP_AMP,
    ACTIONS(289), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(329), 1,
      anon_sym_LF,
    ACTIONS(331), 1,
      anon_sym_RBRACE,
    ACTIONS(275), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(285), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(273), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [3389] = 3,
    ACTIONS(107), 1,
      anon_sym_LF,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(109), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DOT,
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
  [3421] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_null,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_typeof,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(333), 1,
      anon_sym_RBRACK,
    ACTIONS(337), 1,
      sym_float_literal,
    ACTIONS(243), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(335), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(125), 10,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_null,
  [3471] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_null,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_typeof,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(339), 1,
      anon_sym_RBRACK,
    ACTIONS(343), 1,
      sym_float_literal,
    ACTIONS(243), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(341), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(105), 10,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_null,
  [3521] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(131), 1,
      anon_sym_AMP_AMP,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(209), 1,
      anon_sym_PIPE_PIPE,
    STATE(186), 1,
      sym_block,
    ACTIONS(51), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(129), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(127), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(63), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [3575] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_null,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_typeof,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      anon_sym_RPAREN,
    ACTIONS(349), 1,
      sym_float_literal,
    ACTIONS(243), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(347), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(46), 10,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_null,
  [3625] = 3,
    ACTIONS(95), 1,
      anon_sym_LF,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(97), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DOT,
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
  [3657] = 3,
    ACTIONS(115), 1,
      anon_sym_LF,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(117), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DOT,
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
  [3689] = 3,
    ACTIONS(123), 1,
      anon_sym_LF,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(125), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DOT,
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
  [3721] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_null,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_typeof,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(351), 1,
      anon_sym_RPAREN,
    ACTIONS(355), 1,
      sym_float_literal,
    ACTIONS(243), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(353), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(49), 10,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_null,
  [3771] = 3,
    ACTIONS(133), 1,
      anon_sym_LF,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(135), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DOT,
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
  [3803] = 11,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_QMARK,
    ACTIONS(281), 1,
      anon_sym_DOT,
    ACTIONS(287), 1,
      anon_sym_AMP_AMP,
    ACTIONS(289), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(357), 1,
      anon_sym_LF,
    ACTIONS(359), 1,
      anon_sym_RBRACE,
    ACTIONS(275), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(285), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(273), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [3851] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_null,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_typeof,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(361), 1,
      anon_sym_COLON,
    ACTIONS(365), 1,
      sym_float_literal,
    ACTIONS(243), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(363), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(110), 10,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_null,
  [3901] = 3,
    ACTIONS(137), 1,
      anon_sym_LF,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(139), 23,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DOT,
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
  [3933] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(131), 1,
      anon_sym_AMP_AMP,
    ACTIONS(209), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(367), 1,
      anon_sym_RBRACE,
    ACTIONS(51), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(129), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(127), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(63), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [3984] = 11,
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
    ACTIONS(29), 1,
      anon_sym_typeof,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(371), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(369), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(91), 10,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_null,
  [4031] = 11,
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
    ACTIONS(29), 1,
      anon_sym_typeof,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(375), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(373), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(62), 10,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_null,
  [4078] = 11,
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
    ACTIONS(29), 1,
      anon_sym_typeof,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(379), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(377), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(59), 10,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_null,
  [4125] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(131), 1,
      anon_sym_AMP_AMP,
    ACTIONS(209), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(381), 1,
      anon_sym_RBRACK,
    ACTIONS(51), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(129), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(127), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(63), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [4176] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_null,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_typeof,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(385), 1,
      sym_float_literal,
    ACTIONS(243), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(383), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(13), 10,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_null,
  [4223] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(131), 1,
      anon_sym_AMP_AMP,
    ACTIONS(209), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(387), 1,
      anon_sym_RBRACK,
    ACTIONS(51), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(129), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(127), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(63), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [4274] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_null,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_typeof,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(391), 1,
      sym_float_literal,
    ACTIONS(243), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(389), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(84), 10,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_null,
  [4321] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(131), 1,
      anon_sym_AMP_AMP,
    ACTIONS(209), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(393), 1,
      anon_sym_RBRACK,
    ACTIONS(51), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(129), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(127), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(63), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [4372] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_null,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_typeof,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(397), 1,
      sym_float_literal,
    ACTIONS(243), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(395), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(50), 10,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_null,
  [4419] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(131), 1,
      anon_sym_AMP_AMP,
    ACTIONS(209), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(399), 1,
      anon_sym_RBRACK,
    ACTIONS(51), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(129), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(127), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(63), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [4470] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(131), 1,
      anon_sym_AMP_AMP,
    ACTIONS(209), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(401), 1,
      anon_sym_RBRACK,
    ACTIONS(51), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(129), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(127), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(63), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [4521] = 11,
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
    ACTIONS(29), 1,
      anon_sym_typeof,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(405), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(403), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(68), 10,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_null,
  [4568] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_null,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_typeof,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(409), 1,
      sym_float_literal,
    ACTIONS(243), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(407), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(25), 10,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_null,
  [4615] = 11,
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
    ACTIONS(29), 1,
      anon_sym_typeof,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(413), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(411), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(69), 10,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_null,
  [4662] = 11,
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
    ACTIONS(29), 1,
      anon_sym_typeof,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(417), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(415), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(80), 10,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_null,
  [4709] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(131), 1,
      anon_sym_AMP_AMP,
    ACTIONS(209), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(419), 1,
      anon_sym_COLON,
    ACTIONS(51), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(129), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(127), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(63), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [4760] = 11,
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
    ACTIONS(29), 1,
      anon_sym_typeof,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(423), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(421), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(79), 10,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_null,
  [4807] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(131), 1,
      anon_sym_AMP_AMP,
    ACTIONS(209), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(425), 1,
      anon_sym_RPAREN,
    ACTIONS(51), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(129), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(127), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(63), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [4858] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_null,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_typeof,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(429), 1,
      sym_float_literal,
    ACTIONS(243), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(427), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(28), 10,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_null,
  [4905] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_null,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_typeof,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(433), 1,
      sym_float_literal,
    ACTIONS(243), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(431), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(94), 10,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_null,
  [4952] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_null,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_typeof,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(437), 1,
      sym_float_literal,
    ACTIONS(243), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(435), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(7), 10,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_null,
  [4999] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_null,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_typeof,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(441), 1,
      sym_float_literal,
    ACTIONS(243), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(439), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(119), 10,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_null,
  [5046] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_null,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_typeof,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(445), 1,
      sym_float_literal,
    ACTIONS(243), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(443), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(58), 10,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_null,
  [5093] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(131), 1,
      anon_sym_AMP_AMP,
    ACTIONS(209), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(447), 1,
      anon_sym_COLON,
    ACTIONS(51), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(129), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(127), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(63), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5144] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(131), 1,
      anon_sym_AMP_AMP,
    ACTIONS(209), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
    ACTIONS(51), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(129), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(127), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(63), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5195] = 11,
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
    ACTIONS(29), 1,
      anon_sym_typeof,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(453), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(451), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(63), 10,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_null,
  [5242] = 11,
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
    ACTIONS(29), 1,
      anon_sym_typeof,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(457), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(455), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(56), 10,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_null,
  [5289] = 11,
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
    ACTIONS(29), 1,
      anon_sym_typeof,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(461), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(459), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(75), 10,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_null,
  [5336] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_null,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_typeof,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(465), 1,
      sym_float_literal,
    ACTIONS(243), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(463), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(20), 10,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_null,
  [5383] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_null,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_typeof,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(469), 1,
      sym_float_literal,
    ACTIONS(243), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(467), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(19), 10,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_null,
  [5430] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(131), 1,
      anon_sym_AMP_AMP,
    ACTIONS(209), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(471), 1,
      anon_sym_RBRACK,
    ACTIONS(51), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(129), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(127), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(63), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5481] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_null,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_typeof,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(475), 1,
      sym_float_literal,
    ACTIONS(243), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(473), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(112), 10,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_null,
  [5528] = 3,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_LF,
    ACTIONS(477), 19,
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
  [5556] = 3,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_LF,
    ACTIONS(481), 19,
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
  [5584] = 3,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_LF,
    ACTIONS(485), 19,
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
  [5612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 3,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_LBRACE,
    ACTIONS(489), 16,
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
  [5639] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 3,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_LBRACE,
    ACTIONS(493), 16,
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
  [5666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 3,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_LBRACE,
    ACTIONS(497), 16,
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
  [5693] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_fun,
    ACTIONS(9), 1,
      anon_sym_struct,
    ACTIONS(11), 1,
      anon_sym_interface,
    ACTIONS(501), 1,
      ts_builtin_sym_end,
    STATE(134), 2,
      sym__definition,
      aux_sym_source_file_repeat1,
    STATE(236), 3,
      sym_function_definition,
      sym_struct_definition,
      sym_interface_definition,
  [5718] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      ts_builtin_sym_end,
    ACTIONS(505), 1,
      anon_sym_fun,
    ACTIONS(508), 1,
      anon_sym_struct,
    ACTIONS(511), 1,
      anon_sym_interface,
    STATE(134), 2,
      sym__definition,
      aux_sym_source_file_repeat1,
    STATE(236), 3,
      sym_function_definition,
      sym_struct_definition,
      sym_interface_definition,
  [5743] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      sym_identifier,
    ACTIONS(516), 1,
      anon_sym_mut,
    ACTIONS(518), 1,
      anon_sym_RPAREN,
    ACTIONS(520), 1,
      anon_sym_AMP,
    ACTIONS(522), 1,
      anon_sym_self,
    STATE(179), 2,
      sym_parameter,
      sym_self_parameter,
  [5766] = 6,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    STATE(136), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(149), 1,
      sym_embetted_expr,
    ACTIONS(529), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [5786] = 6,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_LBRACE,
    ACTIONS(534), 1,
      anon_sym_DQUOTE,
    STATE(143), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(149), 1,
      sym_embetted_expr,
    ACTIONS(536), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [5806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [5818] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_PIPE,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    ACTIONS(540), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [5834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [5846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [5858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    ACTIONS(550), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [5872] = 6,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_LBRACE,
    ACTIONS(552), 1,
      anon_sym_DQUOTE,
    STATE(136), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(149), 1,
      sym_embetted_expr,
    ACTIONS(554), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [5892] = 6,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_LBRACE,
    ACTIONS(556), 1,
      anon_sym_DQUOTE,
    STATE(136), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(149), 1,
      sym_embetted_expr,
    ACTIONS(554), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [5912] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_AMP,
    ACTIONS(558), 1,
      anon_sym_mut,
    ACTIONS(560), 1,
      anon_sym_LPAREN,
    ACTIONS(562), 1,
      anon_sym_self,
    STATE(30), 1,
      sym_self_parameter_list,
    STATE(202), 1,
      sym_self_parameter,
  [5934] = 6,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_LBRACE,
    ACTIONS(564), 1,
      anon_sym_DQUOTE,
    STATE(144), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(149), 1,
      sym_embetted_expr,
    ACTIONS(566), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [5954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [5966] = 3,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_LF,
    ACTIONS(570), 3,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [5978] = 3,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(572), 2,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
    ACTIONS(574), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [5990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 4,
      ts_builtin_sym_end,
      anon_sym_fun,
      anon_sym_struct,
      anon_sym_interface,
  [6000] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      sym_identifier,
    ACTIONS(580), 1,
      anon_sym_RBRACE,
    STATE(171), 2,
      sym__interface_body,
      sym_method_spec,
  [6014] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(542), 1,
      anon_sym_PIPE,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    STATE(219), 1,
      sym_block,
  [6030] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_PIPE,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    ACTIONS(582), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6044] = 3,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_LF,
    ACTIONS(584), 3,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [6056] = 5,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_LF,
    ACTIONS(588), 1,
      anon_sym_PIPE,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    ACTIONS(592), 1,
      anon_sym_RBRACE,
  [6072] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      sym_identifier,
    ACTIONS(594), 1,
      anon_sym_RBRACE,
    STATE(209), 2,
      sym__interface_body,
      sym_method_spec,
  [6086] = 3,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(596), 2,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
    ACTIONS(598), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [6098] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(600), 1,
      anon_sym_if,
    STATE(207), 2,
      sym_block,
      sym_if_statement,
  [6112] = 3,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_LF,
    ACTIONS(602), 3,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [6124] = 5,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_LF,
    ACTIONS(588), 1,
      anon_sym_PIPE,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    ACTIONS(604), 1,
      anon_sym_RBRACE,
  [6140] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_PIPE,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    ACTIONS(606), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6154] = 5,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_PIPE,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    ACTIONS(608), 1,
      anon_sym_LF,
    ACTIONS(610), 1,
      anon_sym_RBRACE,
  [6170] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      sym_identifier,
    ACTIONS(612), 1,
      anon_sym_RBRACE,
    STATE(209), 2,
      sym__interface_body,
      sym_method_spec,
  [6184] = 5,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_PIPE,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    ACTIONS(614), 1,
      anon_sym_LF,
    ACTIONS(616), 1,
      anon_sym_RBRACE,
  [6200] = 3,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(618), 3,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [6212] = 4,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_LF,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    ACTIONS(620), 2,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [6226] = 4,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_LF,
    ACTIONS(624), 1,
      anon_sym_RBRACE,
    STATE(198), 1,
      aux_sym_field_definition_list_repeat1,
  [6239] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    ACTIONS(629), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      aux_sym_parameter_list_repeat1,
  [6252] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_COMMA,
    ACTIONS(633), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      aux_sym_parameter_list_repeat1,
  [6265] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_PIPE,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    ACTIONS(635), 1,
      anon_sym_RPAREN,
  [6278] = 4,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_LF,
    ACTIONS(639), 1,
      anon_sym_RBRACE,
    STATE(193), 1,
      aux_sym_interface_definition_repeat1,
  [6291] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(641), 1,
      anon_sym_RBRACK,
    STATE(194), 1,
      aux_sym_array_expression_repeat1,
  [6304] = 4,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_LF,
    ACTIONS(646), 1,
      anon_sym_RBRACE,
    STATE(173), 1,
      aux_sym_interface_definition_repeat1,
  [6317] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_PIPE,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    ACTIONS(648), 1,
      anon_sym_EQ,
  [6330] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_COMMA,
    ACTIONS(650), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      aux_sym_parameter_list_repeat1,
  [6343] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(652), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
      aux_sym_argument_list_repeat1,
  [6356] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_COMMA,
    ACTIONS(657), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
      aux_sym_argument_list_repeat1,
  [6369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 3,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6378] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_COMMA,
    ACTIONS(661), 1,
      anon_sym_RPAREN,
    STATE(169), 1,
      aux_sym_parameter_list_repeat1,
  [6391] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_PIPE,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    ACTIONS(663), 1,
      anon_sym_EQ,
  [6404] = 4,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_LF,
    ACTIONS(668), 1,
      anon_sym_RBRACE,
    STATE(181), 1,
      aux_sym_field_definition_list_repeat1,
  [6417] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      sym_identifier,
    ACTIONS(672), 1,
      anon_sym_RPAREN,
    STATE(200), 1,
      sym_parameter,
  [6430] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      sym_identifier,
    ACTIONS(676), 1,
      anon_sym_RBRACE,
    STATE(206), 1,
      sym_field_definition,
  [6443] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_PIPE,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    ACTIONS(678), 1,
      anon_sym_RPAREN,
  [6456] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(680), 1,
      anon_sym_RBRACK,
    STATE(194), 1,
      aux_sym_array_expression_repeat1,
  [6469] = 4,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_LF,
    ACTIONS(684), 1,
      anon_sym_RBRACE,
    ACTIONS(686), 1,
      anon_sym_else,
  [6482] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      sym_identifier,
    ACTIONS(688), 1,
      anon_sym_RBRACE,
    STATE(167), 1,
      sym_field_definition,
  [6495] = 4,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_LF,
    ACTIONS(692), 1,
      anon_sym_RBRACE,
    STATE(201), 1,
      aux_sym__statement_list_repeat1,
  [6508] = 3,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_LF,
    ACTIONS(696), 2,
      anon_sym_RBRACE,
      anon_sym_else,
  [6519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      sym_identifier,
    STATE(209), 2,
      sym__interface_body,
      sym_method_spec,
  [6530] = 3,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_LF,
    ACTIONS(700), 2,
      anon_sym_RBRACE,
      anon_sym_else,
  [6541] = 4,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_LF,
    ACTIONS(704), 1,
      anon_sym_RBRACE,
    STATE(188), 1,
      aux_sym__statement_list_repeat1,
  [6554] = 4,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_LF,
    ACTIONS(708), 1,
      anon_sym_RBRACE,
    STATE(173), 1,
      aux_sym_interface_definition_repeat1,
  [6567] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_COMMA,
    ACTIONS(713), 1,
      anon_sym_RBRACK,
    STATE(194), 1,
      aux_sym_array_expression_repeat1,
  [6580] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(715), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
      aux_sym_argument_list_repeat1,
  [6593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 3,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6602] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      sym_identifier,
    ACTIONS(719), 1,
      anon_sym_RBRACE,
    STATE(206), 1,
      sym_field_definition,
  [6615] = 4,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_LF,
    ACTIONS(723), 1,
      anon_sym_RBRACE,
    STATE(181), 1,
      aux_sym_field_definition_list_repeat1,
  [6628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 3,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6637] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_COMMA,
    ACTIONS(727), 1,
      anon_sym_RPAREN,
    STATE(175), 1,
      aux_sym_parameter_list_repeat1,
  [6650] = 4,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_LF,
    ACTIONS(732), 1,
      anon_sym_RBRACE,
    STATE(201), 1,
      aux_sym__statement_list_repeat1,
  [6663] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_self_parameter_list,
  [6673] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      sym_identifier,
    STATE(206), 1,
      sym_field_definition,
  [6683] = 3,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_RBRACE,
    ACTIONS(734), 1,
      anon_sym_LF,
  [6693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6701] = 3,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_LF,
    ACTIONS(738), 1,
      anon_sym_RBRACE,
  [6711] = 3,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_LF,
    ACTIONS(742), 1,
      anon_sym_RBRACE,
  [6721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      sym_identifier,
    STATE(205), 1,
      sym_parameter,
  [6731] = 3,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_RBRACE,
    ACTIONS(744), 1,
      anon_sym_LF,
  [6741] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_LBRACE,
    STATE(225), 1,
      sym_field_definition_list,
  [6751] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym_parameter_list,
  [6761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      sym_identifier,
  [6768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      sym_identifier,
  [6775] = 2,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(754), 1,
      anon_sym_LF,
  [6782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_RBRACE,
  [6789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_identifier,
  [6796] = 2,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_LF,
  [6803] = 2,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_LF,
  [6810] = 2,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_LF,
  [6817] = 2,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_LF,
  [6824] = 2,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_LF,
  [6831] = 2,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_LF,
  [6838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_AMP,
  [6845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_self,
  [6852] = 2,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_LF,
  [6859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      sym_identifier,
  [6866] = 2,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_LF,
  [6873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_DOT,
  [6880] = 2,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_LF,
  [6887] = 2,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_LF,
  [6894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      sym_identifier,
  [6901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_self,
  [6908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_LBRACE,
  [6915] = 2,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_LF,
  [6922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      sym_identifier,
  [6929] = 2,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_LF,
  [6936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      ts_builtin_sym_end,
  [6943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      sym_identifier,
  [6950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_DOT,
  [6957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 69,
  [SMALL_STATE(4)] = 135,
  [SMALL_STATE(5)] = 201,
  [SMALL_STATE(6)] = 264,
  [SMALL_STATE(7)] = 306,
  [SMALL_STATE(8)] = 356,
  [SMALL_STATE(9)] = 392,
  [SMALL_STATE(10)] = 428,
  [SMALL_STATE(11)] = 464,
  [SMALL_STATE(12)] = 500,
  [SMALL_STATE(13)] = 536,
  [SMALL_STATE(14)] = 578,
  [SMALL_STATE(15)] = 614,
  [SMALL_STATE(16)] = 650,
  [SMALL_STATE(17)] = 686,
  [SMALL_STATE(18)] = 722,
  [SMALL_STATE(19)] = 758,
  [SMALL_STATE(20)] = 800,
  [SMALL_STATE(21)] = 846,
  [SMALL_STATE(22)] = 882,
  [SMALL_STATE(23)] = 918,
  [SMALL_STATE(24)] = 954,
  [SMALL_STATE(25)] = 990,
  [SMALL_STATE(26)] = 1044,
  [SMALL_STATE(27)] = 1080,
  [SMALL_STATE(28)] = 1116,
  [SMALL_STATE(29)] = 1168,
  [SMALL_STATE(30)] = 1204,
  [SMALL_STATE(31)] = 1249,
  [SMALL_STATE(32)] = 1294,
  [SMALL_STATE(33)] = 1339,
  [SMALL_STATE(34)] = 1384,
  [SMALL_STATE(35)] = 1426,
  [SMALL_STATE(36)] = 1468,
  [SMALL_STATE(37)] = 1506,
  [SMALL_STATE(38)] = 1545,
  [SMALL_STATE(39)] = 1584,
  [SMALL_STATE(40)] = 1623,
  [SMALL_STATE(41)] = 1662,
  [SMALL_STATE(42)] = 1701,
  [SMALL_STATE(43)] = 1758,
  [SMALL_STATE(44)] = 1797,
  [SMALL_STATE(45)] = 1836,
  [SMALL_STATE(46)] = 1893,
  [SMALL_STATE(47)] = 1950,
  [SMALL_STATE(48)] = 1999,
  [SMALL_STATE(49)] = 2038,
  [SMALL_STATE(50)] = 2095,
  [SMALL_STATE(51)] = 2147,
  [SMALL_STATE(52)] = 2197,
  [SMALL_STATE(53)] = 2229,
  [SMALL_STATE(54)] = 2279,
  [SMALL_STATE(55)] = 2329,
  [SMALL_STATE(56)] = 2361,
  [SMALL_STATE(57)] = 2409,
  [SMALL_STATE(58)] = 2441,
  [SMALL_STATE(59)] = 2493,
  [SMALL_STATE(60)] = 2539,
  [SMALL_STATE(61)] = 2571,
  [SMALL_STATE(62)] = 2621,
  [SMALL_STATE(63)] = 2665,
  [SMALL_STATE(64)] = 2707,
  [SMALL_STATE(65)] = 2755,
  [SMALL_STATE(66)] = 2805,
  [SMALL_STATE(67)] = 2837,
  [SMALL_STATE(68)] = 2887,
  [SMALL_STATE(69)] = 2927,
  [SMALL_STATE(70)] = 2965,
  [SMALL_STATE(71)] = 2997,
  [SMALL_STATE(72)] = 3029,
  [SMALL_STATE(73)] = 3079,
  [SMALL_STATE(74)] = 3111,
  [SMALL_STATE(75)] = 3143,
  [SMALL_STATE(76)] = 3181,
  [SMALL_STATE(77)] = 3213,
  [SMALL_STATE(78)] = 3245,
  [SMALL_STATE(79)] = 3293,
  [SMALL_STATE(80)] = 3341,
  [SMALL_STATE(81)] = 3389,
  [SMALL_STATE(82)] = 3421,
  [SMALL_STATE(83)] = 3471,
  [SMALL_STATE(84)] = 3521,
  [SMALL_STATE(85)] = 3575,
  [SMALL_STATE(86)] = 3625,
  [SMALL_STATE(87)] = 3657,
  [SMALL_STATE(88)] = 3689,
  [SMALL_STATE(89)] = 3721,
  [SMALL_STATE(90)] = 3771,
  [SMALL_STATE(91)] = 3803,
  [SMALL_STATE(92)] = 3851,
  [SMALL_STATE(93)] = 3901,
  [SMALL_STATE(94)] = 3933,
  [SMALL_STATE(95)] = 3984,
  [SMALL_STATE(96)] = 4031,
  [SMALL_STATE(97)] = 4078,
  [SMALL_STATE(98)] = 4125,
  [SMALL_STATE(99)] = 4176,
  [SMALL_STATE(100)] = 4223,
  [SMALL_STATE(101)] = 4274,
  [SMALL_STATE(102)] = 4321,
  [SMALL_STATE(103)] = 4372,
  [SMALL_STATE(104)] = 4419,
  [SMALL_STATE(105)] = 4470,
  [SMALL_STATE(106)] = 4521,
  [SMALL_STATE(107)] = 4568,
  [SMALL_STATE(108)] = 4615,
  [SMALL_STATE(109)] = 4662,
  [SMALL_STATE(110)] = 4709,
  [SMALL_STATE(111)] = 4760,
  [SMALL_STATE(112)] = 4807,
  [SMALL_STATE(113)] = 4858,
  [SMALL_STATE(114)] = 4905,
  [SMALL_STATE(115)] = 4952,
  [SMALL_STATE(116)] = 4999,
  [SMALL_STATE(117)] = 5046,
  [SMALL_STATE(118)] = 5093,
  [SMALL_STATE(119)] = 5144,
  [SMALL_STATE(120)] = 5195,
  [SMALL_STATE(121)] = 5242,
  [SMALL_STATE(122)] = 5289,
  [SMALL_STATE(123)] = 5336,
  [SMALL_STATE(124)] = 5383,
  [SMALL_STATE(125)] = 5430,
  [SMALL_STATE(126)] = 5481,
  [SMALL_STATE(127)] = 5528,
  [SMALL_STATE(128)] = 5556,
  [SMALL_STATE(129)] = 5584,
  [SMALL_STATE(130)] = 5612,
  [SMALL_STATE(131)] = 5639,
  [SMALL_STATE(132)] = 5666,
  [SMALL_STATE(133)] = 5693,
  [SMALL_STATE(134)] = 5718,
  [SMALL_STATE(135)] = 5743,
  [SMALL_STATE(136)] = 5766,
  [SMALL_STATE(137)] = 5786,
  [SMALL_STATE(138)] = 5806,
  [SMALL_STATE(139)] = 5818,
  [SMALL_STATE(140)] = 5834,
  [SMALL_STATE(141)] = 5846,
  [SMALL_STATE(142)] = 5858,
  [SMALL_STATE(143)] = 5872,
  [SMALL_STATE(144)] = 5892,
  [SMALL_STATE(145)] = 5912,
  [SMALL_STATE(146)] = 5934,
  [SMALL_STATE(147)] = 5954,
  [SMALL_STATE(148)] = 5966,
  [SMALL_STATE(149)] = 5978,
  [SMALL_STATE(150)] = 5990,
  [SMALL_STATE(151)] = 6000,
  [SMALL_STATE(152)] = 6014,
  [SMALL_STATE(153)] = 6030,
  [SMALL_STATE(154)] = 6044,
  [SMALL_STATE(155)] = 6056,
  [SMALL_STATE(156)] = 6072,
  [SMALL_STATE(157)] = 6086,
  [SMALL_STATE(158)] = 6098,
  [SMALL_STATE(159)] = 6112,
  [SMALL_STATE(160)] = 6124,
  [SMALL_STATE(161)] = 6140,
  [SMALL_STATE(162)] = 6154,
  [SMALL_STATE(163)] = 6170,
  [SMALL_STATE(164)] = 6184,
  [SMALL_STATE(165)] = 6200,
  [SMALL_STATE(166)] = 6212,
  [SMALL_STATE(167)] = 6226,
  [SMALL_STATE(168)] = 6239,
  [SMALL_STATE(169)] = 6252,
  [SMALL_STATE(170)] = 6265,
  [SMALL_STATE(171)] = 6278,
  [SMALL_STATE(172)] = 6291,
  [SMALL_STATE(173)] = 6304,
  [SMALL_STATE(174)] = 6317,
  [SMALL_STATE(175)] = 6330,
  [SMALL_STATE(176)] = 6343,
  [SMALL_STATE(177)] = 6356,
  [SMALL_STATE(178)] = 6369,
  [SMALL_STATE(179)] = 6378,
  [SMALL_STATE(180)] = 6391,
  [SMALL_STATE(181)] = 6404,
  [SMALL_STATE(182)] = 6417,
  [SMALL_STATE(183)] = 6430,
  [SMALL_STATE(184)] = 6443,
  [SMALL_STATE(185)] = 6456,
  [SMALL_STATE(186)] = 6469,
  [SMALL_STATE(187)] = 6482,
  [SMALL_STATE(188)] = 6495,
  [SMALL_STATE(189)] = 6508,
  [SMALL_STATE(190)] = 6519,
  [SMALL_STATE(191)] = 6530,
  [SMALL_STATE(192)] = 6541,
  [SMALL_STATE(193)] = 6554,
  [SMALL_STATE(194)] = 6567,
  [SMALL_STATE(195)] = 6580,
  [SMALL_STATE(196)] = 6593,
  [SMALL_STATE(197)] = 6602,
  [SMALL_STATE(198)] = 6615,
  [SMALL_STATE(199)] = 6628,
  [SMALL_STATE(200)] = 6637,
  [SMALL_STATE(201)] = 6650,
  [SMALL_STATE(202)] = 6663,
  [SMALL_STATE(203)] = 6673,
  [SMALL_STATE(204)] = 6683,
  [SMALL_STATE(205)] = 6693,
  [SMALL_STATE(206)] = 6701,
  [SMALL_STATE(207)] = 6711,
  [SMALL_STATE(208)] = 6721,
  [SMALL_STATE(209)] = 6731,
  [SMALL_STATE(210)] = 6741,
  [SMALL_STATE(211)] = 6751,
  [SMALL_STATE(212)] = 6761,
  [SMALL_STATE(213)] = 6768,
  [SMALL_STATE(214)] = 6775,
  [SMALL_STATE(215)] = 6782,
  [SMALL_STATE(216)] = 6789,
  [SMALL_STATE(217)] = 6796,
  [SMALL_STATE(218)] = 6803,
  [SMALL_STATE(219)] = 6810,
  [SMALL_STATE(220)] = 6817,
  [SMALL_STATE(221)] = 6824,
  [SMALL_STATE(222)] = 6831,
  [SMALL_STATE(223)] = 6838,
  [SMALL_STATE(224)] = 6845,
  [SMALL_STATE(225)] = 6852,
  [SMALL_STATE(226)] = 6859,
  [SMALL_STATE(227)] = 6866,
  [SMALL_STATE(228)] = 6873,
  [SMALL_STATE(229)] = 6880,
  [SMALL_STATE(230)] = 6887,
  [SMALL_STATE(231)] = 6894,
  [SMALL_STATE(232)] = 6901,
  [SMALL_STATE(233)] = 6908,
  [SMALL_STATE(234)] = 6915,
  [SMALL_STATE(235)] = 6922,
  [SMALL_STATE(236)] = 6929,
  [SMALL_STATE(237)] = 6936,
  [SMALL_STATE(238)] = 6943,
  [SMALL_STATE(239)] = 6950,
  [SMALL_STATE(240)] = 6957,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 26),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 26),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 4, .production_id = 36),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 4, .production_id = 36),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 3, .production_id = 13),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 3, .production_id = 13),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 3, .production_id = 23),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 3, .production_id = 23),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3, .production_id = 34),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3, .production_id = 34),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 12),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 12),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_expression, 4, .production_id = 35),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_expression, 4, .production_id = 35),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 15),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 15),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 3, .production_id = 27),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 3, .production_id = 27),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4, .production_id = 40),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4, .production_id = 40),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 4, .production_id = 31),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 4, .production_id = 31),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_expression, 5, .production_id = 42),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_expression, 5, .production_id = 42),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_expression, 5, .production_id = 43),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_expression, 5, .production_id = 43),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_expression, 6, .production_id = 45),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_expression, 6, .production_id = 45),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, .production_id = 13),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, .production_id = 13),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_spec, 2, .production_id = 9),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_spec, 2, .production_id = 9),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_spec, 3, .production_id = 22),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_spec, 3, .production_id = 22),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 1),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 34),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 4, .production_id = 33),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 4, .production_id = 33),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_expression_repeat1, 2, .production_id = 13),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1, .production_id = 6),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1, .production_id = 6),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, .production_id = 13),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2, .production_id = 13),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 5, .production_id = 37),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 5, .production_id = 37),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 5, .production_id = 38),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 5, .production_id = 38),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 6, .production_id = 44),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 6, .production_id = 44),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_parameter_list, 4),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter_list, 4),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_parameter_list, 3),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter_list, 3),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_parameter_list, 2),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter_list, 2),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 4),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(235),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(240),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(238),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [524] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2, .production_id = 24), SHIFT_REPEAT(114),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2, .production_id = 24),
  [529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2, .production_id = 24), SHIFT_REPEAT(136),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 4, .production_id = 28),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sum_type, 3, .production_id = 16),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_type, 3, .production_id = 11),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_type, 2, .production_id = 5),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_type, 3, .production_id = 17),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 1, .production_id = 14),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 1, .production_id = 14),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 2),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 4),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 4, .production_id = 28),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 2, .production_id = 4),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_definition, 2, .production_id = 4),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_embetted_expr, 3, .production_id = 13),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embetted_expr, 3, .production_id = 13),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_type, 3, .production_id = 17),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sum_type, 3, .production_id = 16),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 10),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_spec, 3, .production_id = 21),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_spec, 3, .production_id = 21),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_spec, 4, .production_id = 30),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_spec, 4, .production_id = 30),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_type, 3, .production_id = 11),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_type, 2, .production_id = 5),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(208),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(190),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_definition_repeat1, 2),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [654] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 41), SHIFT_REPEAT(103),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 41),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter, 2, .production_id = 20),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [665] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_definition_list_repeat1, 2, .production_id = 19), SHIFT_REPEAT(203),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_definition_list_repeat1, 2, .production_id = 19),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 25),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 25),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 2),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 1),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [710] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_expression_repeat1, 2, .production_id = 32), SHIFT_REPEAT(117),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_expression_repeat1, 2, .production_id = 32),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter, 3, .production_id = 29),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter, 1),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [729] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(5),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_definition_list_repeat1, 2, .production_id = 8),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_definition_list_repeat1, 2, .production_id = 8),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 39),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 39),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition_list, 3, .production_id = 8),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition_list, 5, .production_id = 18),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 4, .production_id = 3),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 7),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition_list, 2),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 2),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 7, .production_id = 3),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 3, .production_id = 1),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 5, .production_id = 3),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition_list, 4, .production_id = 8),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition_list, 4, .production_id = 18),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 6, .production_id = 3),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [800] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
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
