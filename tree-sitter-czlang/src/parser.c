#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 261
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 106
#define ALIAS_COUNT 0
#define TOKEN_COUNT 65
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 30
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 58

enum {
  anon_sym_fun = 1,
  anon_sym_QMARK = 2,
  anon_sym_AMP = 3,
  anon_sym_mut = 4,
  anon_sym_LPAREN = 5,
  anon_sym_COMMA = 6,
  anon_sym_RPAREN = 7,
  anon_sym_bool = 8,
  anon_sym_i8 = 9,
  anon_sym_u8 = 10,
  anon_sym_i16 = 11,
  anon_sym_u16 = 12,
  anon_sym_i32 = 13,
  anon_sym_u32 = 14,
  anon_sym_i64 = 15,
  anon_sym_u64 = 16,
  anon_sym_f32 = 17,
  anon_sym_f64 = 18,
  anon_sym_str = 19,
  anon_sym_string = 20,
  anon_sym_void = 21,
  anon_sym_LBRACK = 22,
  anon_sym_RBRACK = 23,
  anon_sym_COLON = 24,
  anon_sym_LBRACE = 25,
  anon_sym_RBRACE = 26,
  anon_sym_LF = 27,
  anon_sym_return = 28,
  anon_sym_var = 29,
  anon_sym_EQ = 30,
  anon_sym_DASH = 31,
  anon_sym_BANG = 32,
  anon_sym_STAR = 33,
  anon_sym_SLASH = 34,
  anon_sym_PERCENT = 35,
  anon_sym_LT_LT = 36,
  anon_sym_GT_GT = 37,
  anon_sym_AMP_CARET = 38,
  anon_sym_PLUS = 39,
  anon_sym_PIPE = 40,
  anon_sym_CARET = 41,
  anon_sym_EQ_EQ = 42,
  anon_sym_BANG_EQ = 43,
  anon_sym_LT = 44,
  anon_sym_LT_EQ = 45,
  anon_sym_GT = 46,
  anon_sym_GT_EQ = 47,
  anon_sym_AMP_AMP = 48,
  anon_sym_PIPE_PIPE = 49,
  anon_sym_DQUOTE = 50,
  aux_sym_interpreted_string_literal_token1 = 51,
  anon_sym_if = 52,
  anon_sym_else = 53,
  anon_sym_struct = 54,
  anon_sym_interface = 55,
  anon_sym_self = 56,
  sym_escape_sequence = 57,
  sym_identifier = 58,
  sym_int_literal = 59,
  sym_float_literal = 60,
  sym_null = 61,
  sym_true = 62,
  sym_false = 63,
  sym_comment = 64,
  sym_source_file = 65,
  sym__definition = 66,
  sym_function_definition = 67,
  sym_parameter = 68,
  sym_parameter_list = 69,
  sym__type = 70,
  sym_primitive_type = 71,
  sym_array_type = 72,
  sym_slice_type = 73,
  sym_array_expression = 74,
  sym_slice_expression = 75,
  sym_block = 76,
  sym__statement_list = 77,
  sym__statement = 78,
  sym_return_statement = 79,
  sym_function_call = 80,
  sym_var_declaration = 81,
  sym__expression = 82,
  sym_parenthesized_expression = 83,
  sym_unary_expression = 84,
  sym_binary_expression = 85,
  sym_argument_list = 86,
  sym_interpreted_string_literal = 87,
  sym_embetted_expr = 88,
  sym_if_statement = 89,
  sym_struct_definition = 90,
  sym_field_definition_list = 91,
  sym_field_definition = 92,
  sym_interface_definition = 93,
  sym__interface_body = 94,
  sym_method_spec = 95,
  sym_self_parameter_list = 96,
  sym_self_parameter = 97,
  aux_sym_source_file_repeat1 = 98,
  aux_sym_parameter_list_repeat1 = 99,
  aux_sym_array_expression_repeat1 = 100,
  aux_sym__statement_list_repeat1 = 101,
  aux_sym_argument_list_repeat1 = 102,
  aux_sym_interpreted_string_literal_repeat1 = 103,
  aux_sym_field_definition_list_repeat1 = 104,
  aux_sym_interface_definition_repeat1 = 105,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_fun] = "fun",
  [anon_sym_QMARK] = "\?",
  [anon_sym_AMP] = "&",
  [anon_sym_mut] = "mut",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
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
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LF] = "\n",
  [anon_sym_return] = "return",
  [anon_sym_var] = "var",
  [anon_sym_EQ] = "=",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_AMP_CARET] = "&^",
  [anon_sym_PLUS] = "+",
  [anon_sym_PIPE] = "|",
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
  [sym_identifier] = "identifier",
  [sym_int_literal] = "int_literal",
  [sym_float_literal] = "float_literal",
  [sym_null] = "null",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_function_definition] = "function_definition",
  [sym_parameter] = "parameter",
  [sym_parameter_list] = "parameter_list",
  [sym__type] = "_type",
  [sym_primitive_type] = "primitive_type",
  [sym_array_type] = "array_type",
  [sym_slice_type] = "slice_type",
  [sym_array_expression] = "array_expression",
  [sym_slice_expression] = "slice_expression",
  [sym_block] = "block",
  [sym__statement_list] = "_statement_list",
  [sym__statement] = "_statement",
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
  [anon_sym_fun] = anon_sym_fun,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_mut] = anon_sym_mut,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_AMP_CARET] = anon_sym_AMP_CARET,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_PIPE] = anon_sym_PIPE,
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
  [sym_identifier] = sym_identifier,
  [sym_int_literal] = sym_int_literal,
  [sym_float_literal] = sym_float_literal,
  [sym_null] = sym_null,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_function_definition] = sym_function_definition,
  [sym_parameter] = sym_parameter,
  [sym_parameter_list] = sym_parameter_list,
  [sym__type] = sym__type,
  [sym_primitive_type] = sym_primitive_type,
  [sym_array_type] = sym_array_type,
  [sym_slice_type] = sym_slice_type,
  [sym_array_expression] = sym_array_expression,
  [sym_slice_expression] = sym_slice_expression,
  [sym_block] = sym_block,
  [sym__statement_list] = sym__statement_list,
  [sym__statement] = sym__statement,
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
  [anon_sym_fun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
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
  [anon_sym_PIPE] = {
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
  [sym_identifier] = {
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
  [sym_null] = {
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
  [sym__type] = {
    .visible = false,
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
  field_condition = 5,
  field_consequence = 6,
  field_element = 7,
  field_embetted_expr = 8,
  field_end = 9,
  field_expression = 10,
  field_field = 11,
  field_fields = 12,
  field_function = 13,
  field_left = 14,
  field_length = 15,
  field_mut_reference = 16,
  field_mutable = 17,
  field_name = 18,
  field_nullable = 19,
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
  [field_nullable] = "nullable",
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
  [5] = {.index = 8, .length = 4},
  [6] = {.index = 12, .length = 1},
  [7] = {.index = 13, .length = 2},
  [8] = {.index = 15, .length = 3},
  [9] = {.index = 18, .length = 3},
  [10] = {.index = 21, .length = 3},
  [11] = {.index = 24, .length = 1},
  [12] = {.index = 25, .length = 2},
  [13] = {.index = 27, .length = 1},
  [14] = {.index = 28, .length = 2},
  [15] = {.index = 30, .length = 2},
  [16] = {.index = 32, .length = 1},
  [17] = {.index = 33, .length = 3},
  [18] = {.index = 36, .length = 3},
  [19] = {.index = 39, .length = 4},
  [20] = {.index = 43, .length = 4},
  [21] = {.index = 47, .length = 4},
  [22] = {.index = 51, .length = 2},
  [23] = {.index = 53, .length = 1},
  [24] = {.index = 54, .length = 2},
  [25] = {.index = 56, .length = 2},
  [26] = {.index = 58, .length = 2},
  [27] = {.index = 60, .length = 4},
  [28] = {.index = 64, .length = 5},
  [29] = {.index = 69, .length = 1},
  [30] = {.index = 70, .length = 2},
  [31] = {.index = 72, .length = 3},
  [32] = {.index = 75, .length = 3},
  [33] = {.index = 78, .length = 1},
  [34] = {.index = 79, .length = 2},
  [35] = {.index = 81, .length = 2},
  [36] = {.index = 83, .length = 1},
  [37] = {.index = 84, .length = 4},
  [38] = {.index = 88, .length = 4},
  [39] = {.index = 92, .length = 4},
  [40] = {.index = 96, .length = 4},
  [41] = {.index = 100, .length = 3},
  [42] = {.index = 103, .length = 2},
  [43] = {.index = 105, .length = 2},
  [44] = {.index = 107, .length = 2},
  [45] = {.index = 109, .length = 2},
  [46] = {.index = 111, .length = 5},
  [47] = {.index = 116, .length = 5},
  [48] = {.index = 121, .length = 5},
  [49] = {.index = 126, .length = 5},
  [50] = {.index = 131, .length = 5},
  [51] = {.index = 136, .length = 5},
  [52] = {.index = 141, .length = 3},
  [53] = {.index = 144, .length = 6},
  [54] = {.index = 150, .length = 6},
  [55] = {.index = 156, .length = 6},
  [56] = {.index = 162, .length = 6},
  [57] = {.index = 168, .length = 7},
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
    {field_body, 4},
    {field_name, 1},
    {field_parameters, 2},
    {field_result, 3},
  [12] =
    {field_field, 1},
  [13] =
    {field_name, 0},
    {field_parameters, 1},
  [15] =
    {field_name, 0},
    {field_nullable, 1},
    {field_type, 2},
  [18] =
    {field_name, 0},
    {field_reference, 1},
    {field_type, 2},
  [21] =
    {field_mutable, 1},
    {field_name, 0},
    {field_type, 2},
  [24] =
    {field_expression, 1},
  [25] =
    {field_arguments, 1},
    {field_function, 0},
  [27] =
    {field_element, 0},
  [28] =
    {field_field, 1},
    {field_field, 2, .inherited = true},
  [30] =
    {field_field, 0, .inherited = true},
    {field_field, 1, .inherited = true},
  [32] =
    {field_reference, 0},
  [33] =
    {field_name, 0},
    {field_parameters, 1},
    {field_result, 2},
  [36] =
    {field_name, 0},
    {field_parameters, 2},
    {field_self, 1},
  [39] =
    {field_name, 0},
    {field_nullable, 1},
    {field_reference, 2},
    {field_type, 3},
  [43] =
    {field_mutable, 2},
    {field_name, 0},
    {field_nullable, 1},
    {field_type, 3},
  [47] =
    {field_mutable, 2},
    {field_name, 0},
    {field_reference, 1},
    {field_type, 3},
  [51] =
    {field_operand, 1},
    {field_operator, 0},
  [53] =
    {field_embetted_expr, 0},
  [54] =
    {field_condition, 1},
    {field_consequence, 2},
  [56] =
    {field_element, 0},
    {field_length, 2},
  [58] =
    {field_mut_reference, 0},
    {field_mut_reference, 1},
  [60] =
    {field_name, 0},
    {field_parameters, 2},
    {field_result, 3},
    {field_self, 1},
  [64] =
    {field_mutable, 3},
    {field_name, 0},
    {field_nullable, 1},
    {field_reference, 2},
    {field_type, 4},
  [69] =
    {field_embetted_expr, 1, .inherited = true},
  [70] =
    {field_embetted_expr, 0, .inherited = true},
    {field_embetted_expr, 1, .inherited = true},
  [72] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [75] =
    {field_name, 1},
    {field_value, 3},
    {field_variable, 0},
  [78] =
    {field_argument, 1},
  [79] =
    {field_expression, 1},
    {field_expression, 2, .inherited = true},
  [81] =
    {field_expression, 0, .inherited = true},
    {field_expression, 1, .inherited = true},
  [83] =
    {field_operand, 0},
  [84] =
    {field_name, 1},
    {field_nullable, 2},
    {field_value, 4},
    {field_variable, 0},
  [88] =
    {field_name, 1},
    {field_reference, 2},
    {field_value, 4},
    {field_variable, 0},
  [92] =
    {field_mutable, 2},
    {field_name, 1},
    {field_value, 4},
    {field_variable, 0},
  [96] =
    {field_name, 1},
    {field_type, 2},
    {field_value, 4},
    {field_variable, 0},
  [100] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequence, 2},
  [103] =
    {field_argument, 1},
    {field_argument, 2, .inherited = true},
  [105] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [107] =
    {field_end, 3},
    {field_operand, 0},
  [109] =
    {field_operand, 0},
    {field_start, 2},
  [111] =
    {field_name, 1},
    {field_nullable, 2},
    {field_reference, 3},
    {field_value, 5},
    {field_variable, 0},
  [116] =
    {field_mutable, 3},
    {field_name, 1},
    {field_nullable, 2},
    {field_value, 5},
    {field_variable, 0},
  [121] =
    {field_name, 1},
    {field_nullable, 2},
    {field_type, 3},
    {field_value, 5},
    {field_variable, 0},
  [126] =
    {field_mutable, 3},
    {field_name, 1},
    {field_reference, 2},
    {field_value, 5},
    {field_variable, 0},
  [131] =
    {field_name, 1},
    {field_reference, 2},
    {field_type, 3},
    {field_value, 5},
    {field_variable, 0},
  [136] =
    {field_mutable, 2},
    {field_name, 1},
    {field_type, 3},
    {field_value, 5},
    {field_variable, 0},
  [141] =
    {field_end, 4},
    {field_operand, 0},
    {field_start, 2},
  [144] =
    {field_mutable, 4},
    {field_name, 1},
    {field_nullable, 2},
    {field_reference, 3},
    {field_value, 6},
    {field_variable, 0},
  [150] =
    {field_name, 1},
    {field_nullable, 2},
    {field_reference, 3},
    {field_type, 4},
    {field_value, 6},
    {field_variable, 0},
  [156] =
    {field_mutable, 3},
    {field_name, 1},
    {field_nullable, 2},
    {field_type, 4},
    {field_value, 6},
    {field_variable, 0},
  [162] =
    {field_mutable, 3},
    {field_name, 1},
    {field_reference, 2},
    {field_type, 4},
    {field_value, 6},
    {field_variable, 0},
  [168] =
    {field_mutable, 4},
    {field_name, 1},
    {field_nullable, 2},
    {field_reference, 3},
    {field_type, 5},
    {field_value, 7},
    {field_variable, 0},
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
  [21] = 18,
  [22] = 14,
  [23] = 4,
  [24] = 24,
  [25] = 11,
  [26] = 26,
  [27] = 15,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 5,
  [36] = 16,
  [37] = 3,
  [38] = 17,
  [39] = 13,
  [40] = 12,
  [41] = 41,
  [42] = 2,
  [43] = 43,
  [44] = 10,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 6,
  [55] = 55,
  [56] = 9,
  [57] = 8,
  [58] = 58,
  [59] = 7,
  [60] = 60,
  [61] = 61,
  [62] = 61,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 63,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 71,
  [73] = 69,
  [74] = 74,
  [75] = 74,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 80,
  [87] = 87,
  [88] = 79,
  [89] = 89,
  [90] = 90,
  [91] = 82,
  [92] = 92,
  [93] = 92,
  [94] = 94,
  [95] = 94,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 107,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 114,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 115,
  [123] = 123,
  [124] = 124,
  [125] = 104,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 126,
  [130] = 116,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 117,
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
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 151,
  [154] = 154,
  [155] = 154,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
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
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 185,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
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
  [217] = 158,
  [218] = 160,
  [219] = 167,
  [220] = 156,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 159,
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
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
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
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 6528
    ? (c < 2969
      ? (c < 2144
        ? (c < 1015
          ? (c < 248
            ? (c < 't'
              ? (c < 'c'
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || c == 'a'))
                : (c <= 'e' || (c < 'j'
                  ? (c >= 'g' && c <= 'h')
                  : c <= 'r')))
              : (c <= 't' || (c < 186
                ? (c < 170
                  ? (c >= 'w' && c <= 'z')
                  : (c <= 170 || c == 181))
                : (c <= 186 || (c < 216
                  ? (c >= 192 && c <= 214)
                  : c <= 246)))))
            : (c <= 705 || (c < 890
              ? (c < 750
                ? (c < 736
                  ? (c >= 710 && c <= 721)
                  : (c <= 740 || c == 748))
                : (c <= 750 || (c < 886
                  ? (c >= 880 && c <= 884)
                  : c <= 887)))
              : (c <= 893 || (c < 908
                ? (c < 902
                  ? c == 895
                  : (c <= 902 || (c >= 904 && c <= 906)))
                : (c <= 908 || (c < 931
                  ? (c >= 910 && c <= 929)
                  : c <= 1013)))))))
          : (c <= 1153 || (c < 1791
            ? (c < 1568
              ? (c < 1376
                ? (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : c <= 1522)))
              : (c <= 1610 || (c < 1765
                ? (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : (c <= 1747 || c == 1749))
                : (c <= 1766 || (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : c <= 1788)))))
            : (c <= 1791 || (c < 2042
              ? (c < 1969
                ? (c < 1810
                  ? c == 1808
                  : (c <= 1839 || (c >= 1869 && c <= 1957)))
                : (c <= 1969 || (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : c <= 2037)))
              : (c <= 2042 || (c < 2084
                ? (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)
                : (c <= 2084 || (c < 2112
                  ? c == 2088
                  : c <= 2136)))))))))
        : (c <= 2154 || (c < 2649
          ? (c < 2486
            ? (c < 2392
              ? (c < 2308
                ? (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : (c <= 2190 || (c >= 2208 && c <= 2249)))
                : (c <= 2361 || (c < 2384
                  ? c == 2365
                  : c <= 2384)))
              : (c <= 2401 || (c < 2451
                ? (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : (c <= 2444 || (c >= 2447 && c <= 2448)))
                : (c <= 2472 || (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : c <= 2482)))))
            : (c <= 2489 || (c < 2565
              ? (c < 2527
                ? (c < 2510
                  ? c == 2493
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : c <= 2556)))
              : (c <= 2570 || (c < 2610
                ? (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : (c <= 2600 || (c >= 2602 && c <= 2608)))
                : (c <= 2611 || (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)))))))
          : (c <= 2652 || (c < 2831
            ? (c < 2738
              ? (c < 2703
                ? (c < 2674
                  ? c == 2654
                  : (c <= 2676 || (c >= 2693 && c <= 2701)))
                : (c <= 2705 || (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : c <= 2736)))
              : (c <= 2739 || (c < 2784
                ? (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : (c <= 2749 || c == 2768))
                : (c <= 2785 || (c < 2821
                  ? c == 2809
                  : c <= 2828)))))
            : (c <= 2832 || (c < 2911
              ? (c < 2869
                ? (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : (c <= 2864 || (c >= 2866 && c <= 2867)))
                : (c <= 2873 || (c < 2908
                  ? c == 2877
                  : c <= 2909)))
              : (c <= 2913 || (c < 2949
                ? (c < 2947
                  ? c == 2929
                  : c <= 2947)
                : (c <= 2954 || (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)))))))))))
      : (c <= 2970 || (c < 3976
        ? (c < 3389
          ? (c < 3168
            ? (c < 3077
              ? (c < 2984
                ? (c < 2974
                  ? c == 2972
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : c <= 3024)))
              : (c <= 3084 || (c < 3133
                ? (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))
                : (c <= 3133 || (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : c <= 3165)))))
            : (c <= 3169 || (c < 3261
              ? (c < 3218
                ? (c < 3205
                  ? c == 3200
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))
                : (c <= 3240 || (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : c <= 3257)))
              : (c <= 3261 || (c < 3332
                ? (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : (c <= 3297 || (c >= 3313 && c <= 3314)))
                : (c <= 3340 || (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)))))))
          : (c <= 3389 || (c < 3716
            ? (c < 3507
              ? (c < 3450
                ? (c < 3412
                  ? c == 3406
                  : (c <= 3414 || (c >= 3423 && c <= 3425)))
                : (c <= 3455 || (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : c <= 3505)))
              : (c <= 3515 || (c < 3634
                ? (c < 3520
                  ? c == 3517
                  : (c <= 3526 || (c >= 3585 && c <= 3632)))
                : (c <= 3635 || (c < 3713
                  ? (c >= 3648 && c <= 3654)
                  : c <= 3714)))))
            : (c <= 3716 || (c < 3776
              ? (c < 3751
                ? (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3760 || (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : c <= 3773)))
              : (c <= 3780 || (c < 3840
                ? (c < 3804
                  ? c == 3782
                  : c <= 3807)
                : (c <= 3840 || (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)))))))))
        : (c <= 3980 || (c < 4824
          ? (c < 4348
            ? (c < 4206
              ? (c < 4186
                ? (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : (c <= 4159 || (c >= 4176 && c <= 4181)))
                : (c <= 4189 || (c < 4197
                  ? c == 4193
                  : c <= 4198)))
              : (c <= 4208 || (c < 4295
                ? (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : (c <= 4238 || (c >= 4256 && c <= 4293)))
                : (c <= 4295 || (c < 4304
                  ? c == 4301
                  : c <= 4346)))))
            : (c <= 4680 || (c < 4752
              ? (c < 4698
                ? (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : (c <= 4694 || c == 4696))
                : (c <= 4701 || (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : c <= 4749)))
              : (c <= 4784 || (c < 4800
                ? (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)
                : (c <= 4800 || (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)))))))
          : (c <= 4880 || (c < 5984
            ? (c < 5743
              ? (c < 5024
                ? (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : c <= 5740)))
              : (c <= 5759 || (c < 5888
                ? (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : (c <= 5866 || (c >= 5873 && c <= 5880)))
                : (c <= 5905 || (c < 5952
                  ? (c >= 5919 && c <= 5937)
                  : c <= 5969)))))
            : (c <= 5996 || (c < 6279
              ? (c < 6108
                ? (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : (c <= 6067 || c == 6103))
                : (c <= 6108 || (c < 6272
                  ? (c >= 6176 && c <= 6264)
                  : c <= 6276)))
              : (c <= 6312 || (c < 6400
                ? (c < 6320
                  ? c == 6314
                  : c <= 6389)
                : (c <= 6430 || (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)))))))))))))
    : (c <= 6571 || (c < 43250
      ? (c < 8526
        ? (c < 8029
          ? (c < 7312
            ? (c < 7043
              ? (c < 6823
                ? (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))
                : (c <= 6823 || (c < 6981
                  ? (c >= 6917 && c <= 6963)
                  : c <= 6988)))
              : (c <= 7072 || (c < 7245
                ? (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : (c <= 7141 || (c >= 7168 && c <= 7203)))
                : (c <= 7247 || (c < 7296
                  ? (c >= 7258 && c <= 7293)
                  : c <= 7304)))))
            : (c <= 7354 || (c < 7680
              ? (c < 7413
                ? (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : (c <= 7404 || (c >= 7406 && c <= 7411)))
                : (c <= 7414 || (c < 7424
                  ? c == 7418
                  : c <= 7615)))
              : (c <= 7957 || (c < 8016
                ? (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : (c <= 8005 || (c >= 8008 && c <= 8013)))
                : (c <= 8023 || (c < 8027
                  ? c == 8025
                  : c <= 8027)))))))
          : (c <= 8029 || (c < 8336
            ? (c < 8144
              ? (c < 8126
                ? (c < 8064
                  ? (c >= 8031 && c <= 8061)
                  : (c <= 8116 || (c >= 8118 && c <= 8124)))
                : (c <= 8126 || (c < 8134
                  ? (c >= 8130 && c <= 8132)
                  : c <= 8140)))
              : (c <= 8147 || (c < 8182
                ? (c < 8160
                  ? (c >= 8150 && c <= 8155)
                  : (c <= 8172 || (c >= 8178 && c <= 8180)))
                : (c <= 8188 || (c < 8319
                  ? c == 8305
                  : c <= 8319)))))
            : (c <= 8348 || (c < 8486
              ? (c < 8469
                ? (c < 8455
                  ? c == 8450
                  : (c <= 8455 || (c >= 8458 && c <= 8467)))
                : (c <= 8469 || (c < 8484
                  ? (c >= 8473 && c <= 8477)
                  : c <= 8484)))
              : (c <= 8486 || (c < 8495
                ? (c < 8490
                  ? c == 8488
                  : c <= 8493)
                : (c <= 8505 || (c < 8517
                  ? (c >= 8508 && c <= 8511)
                  : c <= 8521)))))))))
        : (c <= 8526 || (c < 12549
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : c <= 11559)))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : c <= 12294)))
              : (c <= 12341 || (c < 12445
                ? (c < 12353
                  ? (c >= 12347 && c <= 12348)
                  : c <= 12438)
                : (c <= 12447 || (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : c <= 12543)))))))
          : (c <= 12591 || (c < 42656
            ? (c < 40959
              ? (c < 13312
                ? (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 13312 || (c < 19968
                  ? c == 19903
                  : c <= 19968)))
              : (c <= 42124 || (c < 42538
                ? (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : (c <= 42508 || (c >= 42512 && c <= 42527)))
                : (c <= 42539 || (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : c <= 42653)))))
            : (c <= 42725 || (c < 42994
              ? (c < 42960
                ? (c < 42786
                  ? (c >= 42775 && c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))
                : (c <= 42961 || (c < 42965
                  ? c == 42963
                  : c <= 42969)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65313
        ? (c < 43808
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
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

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 6576
    ? (c < 2972
      ? (c < 2185
        ? (c < 1329
          ? (c < 736
            ? (c < 170
              ? (c < 'g'
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= 'e')))
                : (c <= 'm' || (c < 'u'
                  ? (c >= 'o' && c <= 's')
                  : c <= 'z')))
              : (c <= 170 || (c < 216
                ? (c < 186
                  ? c == 181
                  : (c <= 186 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 902
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1810
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1647)))
              : (c <= 1747 || (c < 1786
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2074
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))
              : (c <= 2074 || (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2183)))))))))
        : (c <= 2190 || (c < 2654
          ? (c < 2510
            ? (c < 2437
              ? (c < 2384
                ? (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : (c <= 2361 || c == 2365))
                : (c <= 2384 || (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : c <= 2432)))
              : (c <= 2444 || (c < 2482
                ? (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : c <= 2493)))))
            : (c <= 2510 || (c < 2579
              ? (c < 2556
                ? (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : (c <= 2529 || (c >= 2544 && c <= 2545)))
                : (c <= 2556 || (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : c <= 2576)))
              : (c <= 2600 || (c < 2613
                ? (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)
                : (c <= 2614 || (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)))))))
          : (c <= 2654 || (c < 2835
            ? (c < 2741
              ? (c < 2707
                ? (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))
                : (c <= 2728 || (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : c <= 2739)))
              : (c <= 2745 || (c < 2809
                ? (c < 2768
                  ? c == 2749
                  : (c <= 2768 || (c >= 2784 && c <= 2785)))
                : (c <= 2809 || (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : c <= 2832)))))
            : (c <= 2856 || (c < 2929
              ? (c < 2877
                ? (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))
                : (c <= 2877 || (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : c <= 2913)))
              : (c <= 2929 || (c < 2958
                ? (c < 2949
                  ? c == 2947
                  : c <= 2954)
                : (c <= 2960 || (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)))))))))))
      : (c <= 2972 || (c < 4096
        ? (c < 3406
          ? (c < 3200
            ? (c < 3086
              ? (c < 2990
                ? (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))
                : (c <= 3001 || (c < 3077
                  ? c == 3024
                  : c <= 3084)))
              : (c <= 3088 || (c < 3160
                ? (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || c == 3133))
                : (c <= 3162 || (c < 3168
                  ? c == 3165
                  : c <= 3169)))))
            : (c <= 3200 || (c < 3293
              ? (c < 3242
                ? (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))
                : (c <= 3251 || (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : c <= 3261)))
              : (c <= 3294 || (c < 3342
                ? (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
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
              ? (c < 't'
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= 'r')))
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

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 6512
    ? (c < 2962
      ? (c < 2112
        ? (c < 931
          ? (c < 216
            ? (c < 'n'
              ? (c < 'c'
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || c == 'a'))
                : (c <= 'e' || (c < 'j'
                  ? (c >= 'g' && c <= 'h')
                  : c <= 'l')))
              : (c <= 'r' || (c < 181
                ? (c < 'w'
                  ? c == 't'
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 192
                  ? c == 186
                  : c <= 214)))))
            : (c <= 246 || (c < 886
              ? (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : c <= 884)))
              : (c <= 887 || (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : c <= 929)))))))
          : (c <= 1013 || (c < 1786
            ? (c < 1519
              ? (c < 1369
                ? (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : (c <= 1327 || (c >= 1329 && c <= 1366)))
                : (c <= 1369 || (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : c <= 1514)))
              : (c <= 1522 || (c < 1749
                ? (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : (c <= 1647 || (c >= 1649 && c <= 1747)))
                : (c <= 1749 || (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : c <= 1775)))))
            : (c <= 1788 || (c < 2036
              ? (c < 1869
                ? (c < 1808
                  ? c == 1791
                  : (c <= 1808 || (c >= 1810 && c <= 1839)))
                : (c <= 1957 || (c < 1994
                  ? c == 1969
                  : c <= 2026)))
              : (c <= 2037 || (c < 2074
                ? (c < 2048
                  ? c == 2042
                  : c <= 2069)
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : c <= 2088)))))))))
        : (c <= 2136 || (c < 2616
          ? (c < 2482
            ? (c < 2384
              ? (c < 2208
                ? (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))
                : (c <= 2249 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))
              : (c <= 2384 || (c < 2447
                ? (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : c <= 2480)))))
            : (c <= 2482 || (c < 2556
              ? (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)))
              : (c <= 2556 || (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)))))))
          : (c <= 2617 || (c < 2821
            ? (c < 2730
              ? (c < 2693
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : (c <= 2654 || (c >= 2674 && c <= 2676)))
                : (c <= 2701 || (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : c <= 2728)))
              : (c <= 2736 || (c < 2768
                ? (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : (c <= 2745 || c == 2749))
                : (c <= 2768 || (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : c <= 2809)))))
            : (c <= 2828 || (c < 2908
              ? (c < 2866
                ? (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : c <= 2877)))
              : (c <= 2909 || (c < 2947
                ? (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)
                : (c <= 2947 || (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)))))))))))
      : (c <= 2965 || (c < 3913
        ? (c < 3346
          ? (c < 3165
            ? (c < 3024
              ? (c < 2979
                ? (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : (c <= 2972 || (c >= 2974 && c <= 2975)))
                : (c <= 2980 || (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : c <= 3001)))
              : (c <= 3024 || (c < 3114
                ? (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))
                : (c <= 3129 || (c < 3160
                  ? c == 3133
                  : c <= 3162)))))
            : (c <= 3165 || (c < 3253
              ? (c < 3214
                ? (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : (c <= 3200 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : c <= 3251)))
              : (c <= 3257 || (c < 3313
                ? (c < 3293
                  ? c == 3261
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))
                : (c <= 3314 || (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)))))))
          : (c <= 3386 || (c < 3713
            ? (c < 3482
              ? (c < 3423
                ? (c < 3406
                  ? c == 3389
                  : (c <= 3406 || (c >= 3412 && c <= 3414)))
                : (c <= 3425 || (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : c <= 3478)))
              : (c <= 3505 || (c < 3585
                ? (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))
                : (c <= 3632 || (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : c <= 3654)))))
            : (c <= 3714 || (c < 3773
              ? (c < 3749
                ? (c < 3718
                  ? c == 3716
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : c <= 3763)))
              : (c <= 3773 || (c < 3804
                ? (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)
                : (c <= 3807 || (c < 3904
                  ? c == 3840
                  : c <= 3911)))))))))
        : (c <= 3948 || (c < 4808
          ? (c < 4304
            ? (c < 4197
              ? (c < 4176
                ? (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : (c <= 4138 || c == 4159))
                : (c <= 4181 || (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : c <= 4193)))
              : (c <= 4198 || (c < 4256
                ? (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : (c <= 4225 || c == 4238))
                : (c <= 4293 || (c < 4301
                  ? c == 4295
                  : c <= 4301)))))
            : (c <= 4346 || (c < 4746
              ? (c < 4696
                ? (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))
                : (c <= 4696 || (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : c <= 4744)))
              : (c <= 4749 || (c < 4792
                ? (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : c <= 4805)))))))
          : (c <= 4822 || (c < 5952
            ? (c < 5121
              ? (c < 4992
                ? (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 5007 || (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : c <= 5117)))
              : (c <= 5740 || (c < 5873
                ? (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))
                : (c <= 5880 || (c < 5919
                  ? (c >= 5888 && c <= 5905)
                  : c <= 5937)))))
            : (c <= 5969 || (c < 6272
              ? (c < 6103
                ? (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : (c <= 6000 || (c >= 6016 && c <= 6067)))
                : (c <= 6103 || (c < 6176
                  ? c == 6108
                  : c <= 6264)))
              : (c <= 6276 || (c < 6320
                ? (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)
                : (c <= 6389 || (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)))))))))))))
    : (c <= 6516 || (c < 43250
      ? (c < 8517
        ? (c < 8027
          ? (c < 7296
            ? (c < 6981
              ? (c < 6688
                ? (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : (c <= 6601 || (c >= 6656 && c <= 6678)))
                : (c <= 6740 || (c < 6917
                  ? c == 6823
                  : c <= 6963)))
              : (c <= 6988 || (c < 7168
                ? (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : (c <= 7087 || (c >= 7098 && c <= 7141)))
                : (c <= 7203 || (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : c <= 7293)))))
            : (c <= 7304 || (c < 7424
              ? (c < 7406
                ? (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : (c <= 7359 || (c >= 7401 && c <= 7404)))
                : (c <= 7411 || (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : c <= 7418)))
              : (c <= 7615 || (c < 8008
                ? (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))
                : (c <= 8013 || (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)))))))
          : (c <= 8027 || (c < 8319
            ? (c < 8134
              ? (c < 8118
                ? (c < 8031
                  ? c == 8029
                  : (c <= 8061 || (c >= 8064 && c <= 8116)))
                : (c <= 8124 || (c < 8130
                  ? c == 8126
                  : c <= 8132)))
              : (c <= 8140 || (c < 8178
                ? (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : (c <= 8155 || (c >= 8160 && c <= 8172)))
                : (c <= 8180 || (c < 8305
                  ? (c >= 8182 && c <= 8188)
                  : c <= 8305)))))
            : (c <= 8319 || (c < 8484
              ? (c < 8458
                ? (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : (c <= 8450 || c == 8455))
                : (c <= 8467 || (c < 8473
                  ? c == 8469
                  : c <= 8477)))
              : (c <= 8484 || (c < 8490
                ? (c < 8488
                  ? c == 8486
                  : c <= 8488)
                : (c <= 8493 || (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8511)))))))))
        : (c <= 8521 || (c < 12549
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 8579
                  ? c == 8526
                  : (c <= 8580 || (c >= 11264 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12445
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : (c <= 12348 || (c >= 12353 && c <= 12438)))
                : (c <= 12447 || (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : c <= 12543)))))))
          : (c <= 12591 || (c < 42656
            ? (c < 40959
              ? (c < 13312
                ? (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 13312 || (c < 19968
                  ? c == 19903
                  : c <= 19968)))
              : (c <= 42124 || (c < 42538
                ? (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : (c <= 42508 || (c >= 42512 && c <= 42527)))
                : (c <= 42539 || (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : c <= 42653)))))
            : (c <= 42725 || (c < 42994
              ? (c < 42960
                ? (c < 42786
                  ? (c >= 42775 && c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))
                : (c <= 42961 || (c < 42965
                  ? c == 42963
                  : c <= 42969)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65313
        ? (c < 43808
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
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

static inline bool sym_identifier_character_set_5(int32_t c) {
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

static inline bool sym_identifier_character_set_6(int32_t c) {
  return (c < 6576
    ? (c < 2972
      ? (c < 2185
        ? (c < 1329
          ? (c < 736
            ? (c < 170
              ? (c < 'j'
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= 'h')))
                : (c <= 'q' || (c < 'w'
                  ? (c >= 's' && c <= 'u')
                  : c <= 'z')))
              : (c <= 170 || (c < 216
                ? (c < 186
                  ? c == 181
                  : (c <= 186 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 902
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1810
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1647)))
              : (c <= 1747 || (c < 1786
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2074
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))
              : (c <= 2074 || (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2183)))))))))
        : (c <= 2190 || (c < 2654
          ? (c < 2510
            ? (c < 2437
              ? (c < 2384
                ? (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : (c <= 2361 || c == 2365))
                : (c <= 2384 || (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : c <= 2432)))
              : (c <= 2444 || (c < 2482
                ? (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : c <= 2493)))))
            : (c <= 2510 || (c < 2579
              ? (c < 2556
                ? (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : (c <= 2529 || (c >= 2544 && c <= 2545)))
                : (c <= 2556 || (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : c <= 2576)))
              : (c <= 2600 || (c < 2613
                ? (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)
                : (c <= 2614 || (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)))))))
          : (c <= 2654 || (c < 2835
            ? (c < 2741
              ? (c < 2707
                ? (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))
                : (c <= 2728 || (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : c <= 2739)))
              : (c <= 2745 || (c < 2809
                ? (c < 2768
                  ? c == 2749
                  : (c <= 2768 || (c >= 2784 && c <= 2785)))
                : (c <= 2809 || (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : c <= 2832)))))
            : (c <= 2856 || (c < 2929
              ? (c < 2877
                ? (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))
                : (c <= 2877 || (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : c <= 2913)))
              : (c <= 2929 || (c < 2958
                ? (c < 2949
                  ? c == 2947
                  : c <= 2954)
                : (c <= 2960 || (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)))))))))))
      : (c <= 2972 || (c < 4096
        ? (c < 3406
          ? (c < 3200
            ? (c < 3086
              ? (c < 2990
                ? (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))
                : (c <= 3001 || (c < 3077
                  ? c == 3024
                  : c <= 3084)))
              : (c <= 3088 || (c < 3160
                ? (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || c == 3133))
                : (c <= 3162 || (c < 3168
                  ? c == 3165
                  : c <= 3169)))))
            : (c <= 3200 || (c < 3293
              ? (c < 3242
                ? (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))
                : (c <= 3251 || (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : c <= 3261)))
              : (c <= 3294 || (c < 3342
                ? (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
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

static inline bool sym_identifier_character_set_7(int32_t c) {
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

static inline bool sym_identifier_character_set_8(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'h' || (c < 170
                  ? (c >= 'j' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
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

static inline bool sym_identifier_character_set_9(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'c' || (c < 170
                  ? (c >= 'e' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
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

static inline bool sym_identifier_character_set_10(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'd' || (c < 170
                  ? (c >= 'f' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
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

static inline bool sym_identifier_character_set_11(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'e' || (c < 170
                  ? (c >= 'g' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
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

static inline bool sym_identifier_character_set_12(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'f' || (c < 170
                  ? (c >= 'h' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
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

static inline bool sym_identifier_character_set_13(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'k' || (c < 170
                  ? (c >= 'm' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
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

static inline bool sym_identifier_character_set_14(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'm' || (c < 170
                  ? (c >= 'o' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
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

static inline bool sym_identifier_character_set_15(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'n' || (c < 170
                  ? (c >= 'p' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
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

static inline bool sym_identifier_character_set_16(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'q' || (c < 170
                  ? (c >= 's' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
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

static inline bool sym_identifier_character_set_17(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'r' || (c < 170
                  ? (c >= 't' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
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

static inline bool sym_identifier_character_set_18(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 's' || (c < 170
                  ? (c >= 'u' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
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

static inline bool sym_identifier_character_set_19(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 't' || (c < 170
                  ? (c >= 'v' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
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

static inline bool sym_identifier_character_set_20(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'b'
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
      if (eof) ADVANCE(102);
      if (lookahead == '!') ADVANCE(154);
      if (lookahead == '"') ADVANCE(172);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '&') ADVANCE(106);
      if (lookahead == '(') ADVANCE(109);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == '*') ADVANCE(155);
      if (lookahead == '+') ADVANCE(161);
      if (lookahead == ',') ADVANCE(110);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '0') ADVANCE(233);
      if (lookahead == ':') ADVANCE(142);
      if (lookahead == '<') ADVANCE(166);
      if (lookahead == '=') ADVANCE(151);
      if (lookahead == '>') ADVANCE(168);
      if (lookahead == '?') ADVANCE(104);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == ']') ADVANCE(141);
      if (lookahead == '^') ADVANCE(163);
      if (lookahead == 'b') ADVANCE(59);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'm') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(76);
      if (lookahead == 'r') ADVANCE(43);
      if (lookahead == 's') ADVANCE(42);
      if (lookahead == 't') ADVANCE(64);
      if (lookahead == 'u') ADVANCE(18);
      if (lookahead == 'v') ADVANCE(34);
      if (lookahead == '{') ADVANCE(143);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '}') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(100)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(145);
      if (lookahead == '!') ADVANCE(28);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '&') ADVANCE(106);
      if (lookahead == '*') ADVANCE(155);
      if (lookahead == '+') ADVANCE(161);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '<') ADVANCE(166);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '>') ADVANCE(168);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '^') ADVANCE(163);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(232);
      if (lookahead == 'b') ADVANCE(217);
      if (lookahead == 'f') ADVANCE(193);
      if (lookahead == 'i') ADVANCE(188);
      if (lookahead == 's') ADVANCE(223);
      if (lookahead == 'u') ADVANCE(189);
      if (lookahead == 'v') ADVANCE(215);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '}') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(145);
      if (lookahead == '!') ADVANCE(153);
      if (lookahead == '"') ADVANCE(172);
      if (lookahead == '&') ADVANCE(105);
      if (lookahead == '(') ADVANCE(109);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(233);
      if (lookahead == '[') ADVANCE(140);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(232);
      if (lookahead == 'f') ADVANCE(230);
      if (lookahead == 'n') ADVANCE(228);
      if (lookahead == 't') ADVANCE(221);
      if (lookahead == '}') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(145);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == '}') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '"') ADVANCE(172);
      if (lookahead == '/') ADVANCE(173);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '{') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(176);
      if (lookahead != 0) ADVANCE(177);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(153);
      if (lookahead == '"') ADVANCE(172);
      if (lookahead == '&') ADVANCE(105);
      if (lookahead == '(') ADVANCE(109);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(233);
      if (lookahead == ':') ADVANCE(142);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == ']') ADVANCE(141);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(232);
      if (lookahead == 'f') ADVANCE(230);
      if (lookahead == 'n') ADVANCE(228);
      if (lookahead == 't') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(172);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '{') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '&') ADVANCE(105);
      if (lookahead == '(') ADVANCE(109);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == '/') ADVANCE(11);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(232);
      if (lookahead == 's') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '&') ADVANCE(105);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == ',') ADVANCE(110);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '=') ADVANCE(150);
      if (lookahead == '?') ADVANCE(104);
      if (lookahead == '[') ADVANCE(140);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(232);
      if (lookahead == 'b') ADVANCE(217);
      if (lookahead == 'f') ADVANCE(193);
      if (lookahead == 'i') ADVANCE(188);
      if (lookahead == 'm') ADVANCE(227);
      if (lookahead == 's') ADVANCE(223);
      if (lookahead == 'u') ADVANCE(189);
      if (lookahead == 'v') ADVANCE(215);
      if (lookahead == '{') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '&') ADVANCE(105);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '=') ADVANCE(150);
      if (lookahead == '?') ADVANCE(104);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(232);
      if (lookahead == 'b') ADVANCE(217);
      if (lookahead == 'f') ADVANCE(193);
      if (lookahead == 'i') ADVANCE(188);
      if (lookahead == 's') ADVANCE(223);
      if (lookahead == 'u') ADVANCE(189);
      if (lookahead == 'v') ADVANCE(215);
      if (lookahead == '{') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == '/') ADVANCE(11);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(232);
      if (lookahead == '}') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(249);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(248);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(241);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(80);
      if (lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '_') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(11);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(232);
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead == 'r') ADVANCE(202);
      if (lookahead == 'v') ADVANCE(231);
      if (lookahead == '}') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '1') ADVANCE(26);
      if (lookahead == '3') ADVANCE(20);
      if (lookahead == '6') ADVANCE(24);
      if (lookahead == '8') ADVANCE(114);
      if (lookahead == 'f') ADVANCE(178);
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 18:
      if (lookahead == '1') ADVANCE(27);
      if (lookahead == '3') ADVANCE(21);
      if (lookahead == '6') ADVANCE(25);
      if (lookahead == '8') ADVANCE(116);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(130);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(122);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(124);
      END_STATE();
    case 22:
      if (lookahead == '3') ADVANCE(19);
      if (lookahead == '6') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 23:
      if (lookahead == '4') ADVANCE(132);
      END_STATE();
    case 24:
      if (lookahead == '4') ADVANCE(126);
      END_STATE();
    case 25:
      if (lookahead == '4') ADVANCE(128);
      END_STATE();
    case 26:
      if (lookahead == '6') ADVANCE(118);
      END_STATE();
    case 27:
      if (lookahead == '6') ADVANCE(120);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(165);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(164);
      END_STATE();
    case 30:
      if (lookahead == 'U') ADVANCE(99);
      if (lookahead == 'u') ADVANCE(95);
      if (lookahead == 'x') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (lookahead != 0) ADVANCE(185);
      END_STATE();
    case 31:
      if (lookahead == '_') ADVANCE(83);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(237);
      END_STATE();
    case 32:
      if (lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(238);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(138);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 45:
      if (lookahead == 'f') ADVANCE(183);
      END_STATE();
    case 46:
      if (lookahead == 'f') ADVANCE(33);
      END_STATE();
    case 47:
      if (lookahead == 'g') ADVANCE(136);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 74:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 75:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 76:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 78:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 79:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 80:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 81:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(80);
      if (lookahead == '_') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 82:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 83:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(237);
      END_STATE();
    case 84:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(234);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(238);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 93:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 97:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      END_STATE();
    case 98:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 99:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 100:
      if (eof) ADVANCE(102);
      if (lookahead == '!') ADVANCE(154);
      if (lookahead == '"') ADVANCE(172);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '&') ADVANCE(106);
      if (lookahead == '(') ADVANCE(109);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == '*') ADVANCE(155);
      if (lookahead == '+') ADVANCE(161);
      if (lookahead == ',') ADVANCE(110);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '0') ADVANCE(233);
      if (lookahead == ':') ADVANCE(142);
      if (lookahead == '<') ADVANCE(166);
      if (lookahead == '=') ADVANCE(151);
      if (lookahead == '>') ADVANCE(168);
      if (lookahead == '?') ADVANCE(104);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == ']') ADVANCE(141);
      if (lookahead == '^') ADVANCE(163);
      if (lookahead == 'b') ADVANCE(59);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'm') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(76);
      if (lookahead == 'r') ADVANCE(43);
      if (lookahead == 's') ADVANCE(42);
      if (lookahead == 't') ADVANCE(64);
      if (lookahead == 'u') ADVANCE(18);
      if (lookahead == 'v') ADVANCE(34);
      if (lookahead == '{') ADVANCE(143);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '}') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(100)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 101:
      if (eof) ADVANCE(102);
      if (lookahead == '!') ADVANCE(28);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '&') ADVANCE(106);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == '*') ADVANCE(155);
      if (lookahead == '+') ADVANCE(161);
      if (lookahead == ',') ADVANCE(110);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == ':') ADVANCE(142);
      if (lookahead == '<') ADVANCE(166);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '>') ADVANCE(168);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == ']') ADVANCE(141);
      if (lookahead == '^') ADVANCE(163);
      if (lookahead == 'f') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 's') ADVANCE(73);
      if (lookahead == '{') ADVANCE(143);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '}') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(101)
      END_STATE();
    case 102:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_fun);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(170);
      if (lookahead == '^') ADVANCE(160);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_mut);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_mut);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(232);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_bool);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(232);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_i8);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(232);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_u8);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(232);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_i16);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(232);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_u16);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(232);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_i32);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(232);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_u32);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(232);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_i64);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(232);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_u64);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(232);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_f32);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(232);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_f64);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(232);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_str);
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_str);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(232);
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_string);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(232);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_void);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(232);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_return);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(232);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_var);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(232);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(164);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(165);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(249);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_AMP_CARET);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(171);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(158);
      if (lookahead == '=') ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(169);
      if (lookahead == '>') ADVANCE(159);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_interpreted_string_literal_token1);
      if (lookahead == '*') ADVANCE(175);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(177);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_interpreted_string_literal_token1);
      if (lookahead == '*') ADVANCE(174);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_interpreted_string_literal_token1);
      if (lookahead == '*') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_interpreted_string_literal_token1);
      if (lookahead == '/') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_interpreted_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(232);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_self);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_self);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(232);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(197);
      if (lookahead == '3') ADVANCE(191);
      if (lookahead == '6') ADVANCE(195);
      if (lookahead == '8') ADVANCE(115);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(232);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(198);
      if (lookahead == '3') ADVANCE(192);
      if (lookahead == '6') ADVANCE(196);
      if (lookahead == '8') ADVANCE(117);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(232);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(131);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(232);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(123);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(232);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(125);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(232);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(190);
      if (lookahead == '6') ADVANCE(194);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(232);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(133);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(232);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(127);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(232);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(129);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(232);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(119);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(232);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(121);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(232);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(232);
      if (lookahead == 'd') ADVANCE(139);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(232);
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(232);
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(232);
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(232);
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(232);
      if (lookahead == 'f') ADVANCE(179);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(232);
      if (lookahead == 'f') ADVANCE(184);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_12(lookahead)) ADVANCE(232);
      if (lookahead == 'g') ADVANCE(137);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(232);
      if (lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_13(lookahead)) ADVANCE(232);
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_13(lookahead)) ADVANCE(232);
      if (lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_13(lookahead)) ADVANCE(232);
      if (lookahead == 'l') ADVANCE(243);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_13(lookahead)) ADVANCE(232);
      if (lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_13(lookahead)) ADVANCE(232);
      if (lookahead == 'l') ADVANCE(210);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_14(lookahead)) ADVANCE(232);
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_14(lookahead)) ADVANCE(232);
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_15(lookahead)) ADVANCE(232);
      if (lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_15(lookahead)) ADVANCE(232);
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_15(lookahead)) ADVANCE(232);
      if (lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_16(lookahead)) ADVANCE(232);
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_16(lookahead)) ADVANCE(232);
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_16(lookahead)) ADVANCE(232);
      if (lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_16(lookahead)) ADVANCE(232);
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_17(lookahead)) ADVANCE(232);
      if (lookahead == 's') ADVANCE(201);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_18(lookahead)) ADVANCE(232);
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_18(lookahead)) ADVANCE(232);
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_18(lookahead)) ADVANCE(232);
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_19(lookahead)) ADVANCE(232);
      if (lookahead == 'u') ADVANCE(200);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_19(lookahead)) ADVANCE(232);
      if (lookahead == 'u') ADVANCE(224);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_19(lookahead)) ADVANCE(232);
      if (lookahead == 'u') ADVANCE(212);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_19(lookahead)) ADVANCE(232);
      if (lookahead == 'u') ADVANCE(220);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_20(lookahead)) ADVANCE(232);
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_20(lookahead)) ADVANCE(232);
      if (lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(241);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(80);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(32);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(15);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(241);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(80);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(241);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(80);
      if (lookahead == '_') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(80);
      if (lookahead == '_') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(83);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '_') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(80);
      if (lookahead == '_') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_null);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(232);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_true);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(232);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_false);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(232);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(249);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 101},
  [2] = {.lex_state = 101},
  [3] = {.lex_state = 101},
  [4] = {.lex_state = 101},
  [5] = {.lex_state = 101},
  [6] = {.lex_state = 101},
  [7] = {.lex_state = 101},
  [8] = {.lex_state = 101},
  [9] = {.lex_state = 101},
  [10] = {.lex_state = 101},
  [11] = {.lex_state = 101},
  [12] = {.lex_state = 101},
  [13] = {.lex_state = 101},
  [14] = {.lex_state = 101},
  [15] = {.lex_state = 101},
  [16] = {.lex_state = 101},
  [17] = {.lex_state = 101},
  [18] = {.lex_state = 101},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 101},
  [21] = {.lex_state = 101},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 101},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 101},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 101},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 101},
  [61] = {.lex_state = 101},
  [62] = {.lex_state = 101},
  [63] = {.lex_state = 101},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 101},
  [69] = {.lex_state = 101},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 101},
  [72] = {.lex_state = 101},
  [73] = {.lex_state = 101},
  [74] = {.lex_state = 101},
  [75] = {.lex_state = 101},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 9},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 9},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 9},
  [98] = {.lex_state = 9},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 9},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 9},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 9},
  [141] = {.lex_state = 9},
  [142] = {.lex_state = 9},
  [143] = {.lex_state = 16},
  [144] = {.lex_state = 16},
  [145] = {.lex_state = 16},
  [146] = {.lex_state = 16},
  [147] = {.lex_state = 16},
  [148] = {.lex_state = 101},
  [149] = {.lex_state = 101},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 8},
  [157] = {.lex_state = 7},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 8},
  [160] = {.lex_state = 101},
  [161] = {.lex_state = 10},
  [162] = {.lex_state = 101},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 101},
  [165] = {.lex_state = 101},
  [166] = {.lex_state = 101},
  [167] = {.lex_state = 101},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 101},
  [171] = {.lex_state = 101},
  [172] = {.lex_state = 101},
  [173] = {.lex_state = 101},
  [174] = {.lex_state = 10},
  [175] = {.lex_state = 101},
  [176] = {.lex_state = 101},
  [177] = {.lex_state = 101},
  [178] = {.lex_state = 10},
  [179] = {.lex_state = 101},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 10},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 10},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 10},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 1},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 10},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 3},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 1},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 1},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 3},
  [219] = {.lex_state = 3},
  [220] = {.lex_state = 1},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 10},
  [223] = {.lex_state = 1},
  [224] = {.lex_state = 1},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 1},
  [228] = {.lex_state = 10},
  [229] = {.lex_state = 8},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 1},
  [232] = {.lex_state = 8},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 1},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 8},
  [238] = {.lex_state = 1},
  [239] = {.lex_state = 1},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 8},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 8},
  [244] = {.lex_state = 8},
  [245] = {.lex_state = 1},
  [246] = {.lex_state = 10},
  [247] = {.lex_state = 8},
  [248] = {.lex_state = 1},
  [249] = {.lex_state = 8},
  [250] = {.lex_state = 1},
  [251] = {.lex_state = 1},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 10},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 10},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 10},
  [260] = {.lex_state = 10},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_fun] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_mut] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_AMP_CARET] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
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
    [sym_null] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(258),
    [sym__definition] = STATE(148),
    [sym_function_definition] = STATE(148),
    [sym_struct_definition] = STATE(148),
    [sym_interface_definition] = STATE(148),
    [aux_sym_source_file_repeat1] = STATE(148),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_fun] = ACTIONS(7),
    [anon_sym_struct] = ACTIONS(9),
    [anon_sym_interface] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_PIPE,
    ACTIONS(13), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(21), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(15), 12,
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
  [44] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 21,
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
  [78] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 21,
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
  [112] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 20,
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
  [148] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 21,
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
  [182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 21,
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
  [216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 21,
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
  [250] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(15), 20,
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
  [286] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(25), 3,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(15), 15,
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
  [326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 21,
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
  [360] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_PIPE,
    ACTIONS(13), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(55), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(21), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(15), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [406] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      anon_sym_AMP_AMP,
    ACTIONS(13), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(55), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(21), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(15), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
  [454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PIPE,
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
  [488] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 21,
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
  [522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 21,
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
  [556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 5,
      anon_sym_AMP,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 21,
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
  [590] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      anon_sym_AMP_AMP,
    ACTIONS(77), 1,
      anon_sym_COMMA,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    STATE(191), 1,
      aux_sym_array_expression_repeat1,
    ACTIONS(13), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(55), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(21), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [641] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_QMARK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_mut,
    ACTIONS(91), 1,
      anon_sym_EQ,
    ACTIONS(93), 1,
      sym_identifier,
    STATE(237), 4,
      sym__type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(89), 14,
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
  [682] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    ACTIONS(97), 1,
      anon_sym_RPAREN,
    STATE(201), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(13), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(55), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(21), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [733] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      anon_sym_AMP_AMP,
    ACTIONS(77), 1,
      anon_sym_COMMA,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(99), 1,
      anon_sym_RBRACK,
    STATE(185), 1,
      aux_sym_array_expression_repeat1,
    ACTIONS(13), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(55), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(21), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [784] = 3,
    ACTIONS(63), 1,
      anon_sym_LF,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(61), 21,
      anon_sym_AMP,
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
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [814] = 3,
    ACTIONS(33), 1,
      anon_sym_LF,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(31), 21,
      anon_sym_AMP,
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
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [844] = 9,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    ACTIONS(109), 1,
      anon_sym_LF,
    ACTIONS(115), 1,
      anon_sym_AMP_AMP,
    ACTIONS(117), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(111), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(113), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(103), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [886] = 3,
    ACTIONS(53), 1,
      anon_sym_LF,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(51), 21,
      anon_sym_AMP,
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
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [916] = 9,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_AMP_AMP,
    ACTIONS(117), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    ACTIONS(121), 1,
      anon_sym_LF,
    ACTIONS(111), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(113), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(103), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [958] = 3,
    ACTIONS(67), 1,
      anon_sym_LF,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(65), 21,
      anon_sym_AMP,
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
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [988] = 9,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_AMP_AMP,
    ACTIONS(117), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(123), 1,
      anon_sym_RBRACE,
    ACTIONS(125), 1,
      anon_sym_LF,
    ACTIONS(111), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(113), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(103), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [1030] = 9,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_AMP_AMP,
    ACTIONS(117), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    ACTIONS(129), 1,
      anon_sym_LF,
    ACTIONS(111), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(113), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(103), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [1072] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(13), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(19), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(55), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(21), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [1118] = 9,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_AMP_AMP,
    ACTIONS(117), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(133), 1,
      anon_sym_RBRACE,
    ACTIONS(135), 1,
      anon_sym_LF,
    ACTIONS(111), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(113), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(103), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [1160] = 9,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_AMP_AMP,
    ACTIONS(117), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    ACTIONS(139), 1,
      anon_sym_LF,
    ACTIONS(111), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(113), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(103), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [1202] = 9,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_AMP_AMP,
    ACTIONS(117), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    ACTIONS(143), 1,
      anon_sym_LF,
    ACTIONS(111), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(113), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(103), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [1244] = 9,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_AMP_AMP,
    ACTIONS(117), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
    ACTIONS(147), 1,
      anon_sym_LF,
    ACTIONS(111), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(113), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(103), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [1286] = 4,
    ACTIONS(37), 1,
      anon_sym_LF,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 20,
      anon_sym_AMP,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1318] = 3,
    ACTIONS(71), 1,
      anon_sym_LF,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(69), 21,
      anon_sym_AMP,
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
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1348] = 3,
    ACTIONS(29), 1,
      anon_sym_LF,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(27), 21,
      anon_sym_AMP,
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
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1378] = 3,
    ACTIONS(75), 1,
      anon_sym_LF,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(73), 21,
      anon_sym_AMP,
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
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1408] = 8,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_AMP_AMP,
    ACTIONS(25), 2,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
    ACTIONS(111), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(113), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(103), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [1448] = 7,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 3,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(111), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(113), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(103), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [1486] = 9,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_AMP_AMP,
    ACTIONS(117), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    ACTIONS(151), 1,
      anon_sym_LF,
    ACTIONS(111), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(113), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(103), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [1528] = 6,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(111), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(103), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(25), 9,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1564] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_AMP,
    ACTIONS(155), 1,
      anon_sym_mut,
    ACTIONS(157), 1,
      anon_sym_EQ,
    ACTIONS(159), 1,
      sym_identifier,
    STATE(249), 4,
      sym__type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(89), 14,
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
  [1602] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(103), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(25), 13,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1636] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(161), 1,
      anon_sym_LBRACE,
    STATE(206), 1,
      sym_block,
    ACTIONS(13), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(55), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(21), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [1684] = 9,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_AMP_AMP,
    ACTIONS(117), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    ACTIONS(165), 1,
      anon_sym_LF,
    ACTIONS(111), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(113), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(103), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [1726] = 9,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_AMP_AMP,
    ACTIONS(117), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    ACTIONS(169), 1,
      anon_sym_LF,
    ACTIONS(111), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(113), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(103), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [1768] = 9,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_AMP_AMP,
    ACTIONS(117), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
    ACTIONS(173), 1,
      anon_sym_LF,
    ACTIONS(111), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(113), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(103), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [1810] = 9,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_AMP_AMP,
    ACTIONS(117), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(175), 1,
      anon_sym_RBRACE,
    ACTIONS(177), 1,
      anon_sym_LF,
    ACTIONS(111), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(113), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(103), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [1852] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_QMARK,
    ACTIONS(181), 1,
      anon_sym_AMP,
    ACTIONS(183), 1,
      anon_sym_mut,
    ACTIONS(185), 1,
      sym_identifier,
    STATE(197), 4,
      sym__type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(89), 14,
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
  [1890] = 9,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_AMP_AMP,
    ACTIONS(117), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    ACTIONS(189), 1,
      anon_sym_LF,
    ACTIONS(111), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(113), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(103), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [1932] = 9,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_AMP_AMP,
    ACTIONS(117), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    ACTIONS(193), 1,
      anon_sym_LF,
    ACTIONS(111), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(113), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(103), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [1974] = 9,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_AMP_AMP,
    ACTIONS(117), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    ACTIONS(197), 1,
      anon_sym_LF,
    ACTIONS(111), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(113), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(103), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [2016] = 3,
    ACTIONS(41), 1,
      anon_sym_LF,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(39), 21,
      anon_sym_AMP,
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
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2046] = 9,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_AMP_AMP,
    ACTIONS(117), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    ACTIONS(201), 1,
      anon_sym_LF,
    ACTIONS(111), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(113), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(103), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [2088] = 4,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 20,
      anon_sym_AMP,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2120] = 3,
    ACTIONS(49), 1,
      anon_sym_LF,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(47), 21,
      anon_sym_AMP,
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
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2150] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(13), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(203), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(19), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(55), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(21), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [2196] = 3,
    ACTIONS(45), 1,
      anon_sym_LF,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(43), 21,
      anon_sym_AMP,
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
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2226] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(55), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(21), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [2271] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(207), 1,
      anon_sym_RBRACK,
    ACTIONS(13), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(55), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(21), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [2316] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(209), 1,
      anon_sym_RBRACK,
    ACTIONS(13), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(55), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(21), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [2361] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(211), 1,
      anon_sym_RBRACK,
    ACTIONS(13), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(55), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(21), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [2406] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_QMARK,
    ACTIONS(215), 1,
      anon_sym_AMP,
    ACTIONS(219), 1,
      sym_identifier,
    STATE(202), 4,
      sym__type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(217), 14,
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
  [2441] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LBRACE,
    ACTIONS(223), 1,
      sym_identifier,
    STATE(165), 1,
      sym_block,
    STATE(192), 4,
      sym__type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(89), 14,
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
  [2476] = 6,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    ACTIONS(227), 1,
      anon_sym_LF,
    ACTIONS(229), 1,
      sym_identifier,
    STATE(213), 4,
      sym__type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(217), 14,
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
  [2511] = 6,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    ACTIONS(233), 1,
      anon_sym_LF,
    ACTIONS(235), 1,
      sym_identifier,
    STATE(187), 4,
      sym__type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(217), 14,
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
  [2546] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(237), 1,
      anon_sym_RBRACK,
    ACTIONS(13), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(55), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(21), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [2591] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    ACTIONS(13), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(55), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(21), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [2636] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_AMP,
    ACTIONS(243), 1,
      anon_sym_mut,
    ACTIONS(245), 1,
      sym_identifier,
    STATE(216), 4,
      sym__type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(89), 14,
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
  [2671] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(247), 1,
      anon_sym_COLON,
    ACTIONS(13), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(55), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(21), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [2716] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(249), 1,
      anon_sym_COLON,
    ACTIONS(13), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(55), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(21), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [2761] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    ACTIONS(13), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(55), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(21), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [2806] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(253), 1,
      anon_sym_RBRACK,
    ACTIONS(13), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(55), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(21), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [2851] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(255), 1,
      anon_sym_RBRACK,
    ACTIONS(13), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(55), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(21), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [2896] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_mut,
    ACTIONS(259), 1,
      anon_sym_EQ,
    ACTIONS(261), 1,
      sym_identifier,
    STATE(247), 4,
      sym__type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(89), 14,
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
  [2931] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_mut,
    ACTIONS(265), 1,
      anon_sym_EQ,
    ACTIONS(267), 1,
      sym_identifier,
    STATE(241), 4,
      sym__type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(89), 14,
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
  [2966] = 9,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      anon_sym_RBRACE,
    ACTIONS(277), 1,
      anon_sym_LF,
    ACTIONS(279), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(281), 6,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(46), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [3007] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(289), 1,
      anon_sym_COLON,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    ACTIONS(295), 1,
      sym_float_literal,
    ACTIONS(283), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(293), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(71), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [3047] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      anon_sym_RBRACK,
    ACTIONS(301), 1,
      sym_float_literal,
    ACTIONS(283), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(299), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(61), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [3087] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_EQ,
    ACTIONS(305), 1,
      sym_identifier,
    STATE(229), 4,
      sym__type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(89), 14,
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
  [3119] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    ACTIONS(307), 1,
      anon_sym_RBRACK,
    ACTIONS(311), 1,
      sym_float_literal,
    ACTIONS(283), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(309), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(74), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [3159] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_AMP,
    ACTIONS(315), 1,
      sym_identifier,
    STATE(224), 4,
      sym__type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(217), 14,
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
  [3191] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_EQ,
    ACTIONS(319), 1,
      sym_identifier,
    STATE(244), 4,
      sym__type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(89), 14,
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
  [3223] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    ACTIONS(321), 1,
      anon_sym_RPAREN,
    ACTIONS(325), 1,
      sym_float_literal,
    ACTIONS(283), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(323), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(20), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [3263] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    ACTIONS(327), 1,
      anon_sym_RBRACK,
    ACTIONS(331), 1,
      sym_float_literal,
    ACTIONS(283), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(329), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(62), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [3303] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_EQ,
    ACTIONS(335), 1,
      sym_identifier,
    STATE(232), 4,
      sym__type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(89), 14,
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
  [3335] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    ACTIONS(337), 1,
      anon_sym_COLON,
    ACTIONS(341), 1,
      sym_float_literal,
    ACTIONS(283), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(339), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(72), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [3375] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_EQ,
    ACTIONS(345), 1,
      sym_identifier,
    STATE(243), 4,
      sym__type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(89), 14,
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
  [3407] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_mut,
    ACTIONS(349), 1,
      sym_identifier,
    STATE(203), 4,
      sym__type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(89), 14,
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
  [3439] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    ACTIONS(351), 1,
      anon_sym_RBRACK,
    ACTIONS(355), 1,
      sym_float_literal,
    ACTIONS(283), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(353), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(75), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [3479] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    ACTIONS(357), 1,
      anon_sym_RBRACK,
    ACTIONS(361), 1,
      sym_float_literal,
    ACTIONS(283), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(359), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(21), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [3519] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    ACTIONS(363), 1,
      anon_sym_RBRACK,
    ACTIONS(367), 1,
      sym_float_literal,
    ACTIONS(283), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(365), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(18), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [3559] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    ACTIONS(369), 1,
      anon_sym_RBRACK,
    ACTIONS(373), 1,
      sym_float_literal,
    ACTIONS(283), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(371), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(63), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [3599] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    ACTIONS(375), 1,
      anon_sym_RBRACK,
    ACTIONS(379), 1,
      sym_float_literal,
    ACTIONS(283), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(377), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(68), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [3639] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_mut,
    ACTIONS(383), 1,
      sym_identifier,
    STATE(210), 4,
      sym__type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(89), 14,
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
  [3671] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      sym_identifier,
    STATE(223), 4,
      sym__type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(217), 14,
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
  [3700] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      sym_identifier,
    STATE(208), 4,
      sym__type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(89), 14,
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
  [3729] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      sym_float_literal,
    ACTIONS(389), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(397), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(24), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [3766] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      sym_identifier,
    STATE(183), 4,
      sym__type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(89), 14,
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
  [3795] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    ACTIONS(405), 1,
      sym_float_literal,
    ACTIONS(389), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(403), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(29), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [3832] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    ACTIONS(409), 1,
      sym_float_literal,
    ACTIONS(389), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(407), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(34), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [3869] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    ACTIONS(413), 1,
      sym_float_literal,
    ACTIONS(389), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(411), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(33), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [3906] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    ACTIONS(417), 1,
      sym_float_literal,
    ACTIONS(283), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(415), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(69), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [3943] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    ACTIONS(421), 1,
      sym_float_literal,
    ACTIONS(389), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(419), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(47), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [3980] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    ACTIONS(425), 1,
      sym_float_literal,
    ACTIONS(389), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(423), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(48), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [4017] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    ACTIONS(429), 1,
      sym_float_literal,
    ACTIONS(283), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(427), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(9), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [4054] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    ACTIONS(433), 1,
      sym_float_literal,
    ACTIONS(283), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(431), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(60), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [4091] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      sym_identifier,
    STATE(199), 4,
      sym__type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(217), 14,
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
  [4120] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    ACTIONS(439), 1,
      sym_float_literal,
    ACTIONS(389), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(437), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(49), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [4157] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    ACTIONS(443), 1,
      sym_float_literal,
    ACTIONS(389), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(441), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(52), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [4194] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    ACTIONS(447), 1,
      sym_float_literal,
    ACTIONS(389), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(445), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(56), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [4231] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    ACTIONS(451), 1,
      sym_float_literal,
    ACTIONS(283), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(449), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(58), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [4268] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    ACTIONS(455), 1,
      sym_float_literal,
    ACTIONS(389), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(453), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(44), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [4305] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    ACTIONS(459), 1,
      sym_float_literal,
    ACTIONS(389), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(457), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(42), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [4342] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    ACTIONS(463), 1,
      sym_float_literal,
    ACTIONS(389), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(461), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(40), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [4379] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    ACTIONS(467), 1,
      sym_float_literal,
    ACTIONS(389), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(465), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(39), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [4416] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    ACTIONS(471), 1,
      sym_float_literal,
    ACTIONS(283), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(469), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(10), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [4453] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    ACTIONS(475), 1,
      sym_float_literal,
    ACTIONS(389), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(473), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(41), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [4490] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      sym_identifier,
    STATE(180), 4,
      sym__type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(89), 14,
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
  [4519] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    ACTIONS(481), 1,
      sym_float_literal,
    ACTIONS(389), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(479), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(31), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [4556] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    ACTIONS(485), 1,
      sym_float_literal,
    ACTIONS(283), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(483), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(2), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [4593] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    ACTIONS(489), 1,
      sym_float_literal,
    ACTIONS(389), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(487), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(55), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [4630] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    ACTIONS(493), 1,
      sym_float_literal,
    ACTIONS(389), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(491), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(32), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [4667] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    ACTIONS(497), 1,
      sym_float_literal,
    ACTIONS(283), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(495), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(73), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [4704] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    ACTIONS(501), 1,
      sym_float_literal,
    ACTIONS(389), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(499), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(35), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [4741] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    ACTIONS(505), 1,
      sym_float_literal,
    ACTIONS(389), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(503), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(53), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [4778] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    ACTIONS(509), 1,
      sym_float_literal,
    ACTIONS(389), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(507), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(28), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [4815] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    ACTIONS(513), 1,
      sym_float_literal,
    ACTIONS(283), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(511), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(5), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [4852] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    ACTIONS(517), 1,
      sym_float_literal,
    ACTIONS(283), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(515), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(12), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [4889] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    ACTIONS(521), 1,
      sym_float_literal,
    ACTIONS(389), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(519), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(51), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [4926] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    ACTIONS(525), 1,
      sym_float_literal,
    ACTIONS(389), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(523), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(26), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [4963] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    ACTIONS(529), 1,
      sym_float_literal,
    ACTIONS(283), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(527), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(45), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [5000] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      sym_identifier,
    STATE(209), 4,
      sym__type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(89), 14,
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
  [5029] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    ACTIONS(535), 1,
      sym_float_literal,
    ACTIONS(283), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(533), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(13), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [5066] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    ACTIONS(539), 1,
      sym_float_literal,
    ACTIONS(283), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(537), 5,
      sym_identifier,
      sym_int_literal,
      sym_null,
      sym_true,
      sym_false,
    STATE(30), 7,
      sym_array_expression,
      sym_slice_expression,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
  [5103] = 3,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_LF,
    ACTIONS(541), 16,
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
  [5128] = 3,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_LF,
    ACTIONS(545), 16,
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
  [5153] = 3,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_LF,
    ACTIONS(549), 16,
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
  [5178] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_LBRACE,
    ACTIONS(553), 15,
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
  [5202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_LBRACE,
    ACTIONS(557), 15,
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
  [5226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_LBRACE,
    ACTIONS(561), 15,
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
  [5250] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_RBRACE,
    ACTIONS(567), 1,
      anon_sym_return,
    ACTIONS(569), 1,
      anon_sym_var,
    ACTIONS(571), 1,
      anon_sym_if,
    ACTIONS(573), 1,
      sym_identifier,
    STATE(254), 1,
      sym__statement_list,
    STATE(200), 5,
      sym__statement,
      sym_return_statement,
      sym_function_call,
      sym_var_declaration,
      sym_if_statement,
  [5279] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_return,
    ACTIONS(569), 1,
      anon_sym_var,
    ACTIONS(571), 1,
      anon_sym_if,
    ACTIONS(573), 1,
      sym_identifier,
    ACTIONS(575), 1,
      anon_sym_RBRACE,
    STATE(252), 1,
      sym__statement_list,
    STATE(200), 5,
      sym__statement,
      sym_return_statement,
      sym_function_call,
      sym_var_declaration,
      sym_if_statement,
  [5308] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_return,
    ACTIONS(569), 1,
      anon_sym_var,
    ACTIONS(571), 1,
      anon_sym_if,
    ACTIONS(573), 1,
      sym_identifier,
    ACTIONS(577), 1,
      anon_sym_RBRACE,
    STATE(239), 5,
      sym__statement,
      sym_return_statement,
      sym_function_call,
      sym_var_declaration,
      sym_if_statement,
  [5334] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_return,
    ACTIONS(569), 1,
      anon_sym_var,
    ACTIONS(571), 1,
      anon_sym_if,
    ACTIONS(573), 1,
      sym_identifier,
    ACTIONS(579), 1,
      anon_sym_RBRACE,
    STATE(239), 5,
      sym__statement,
      sym_return_statement,
      sym_function_call,
      sym_var_declaration,
      sym_if_statement,
  [5360] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_return,
    ACTIONS(569), 1,
      anon_sym_var,
    ACTIONS(571), 1,
      anon_sym_if,
    ACTIONS(573), 1,
      sym_identifier,
    STATE(239), 5,
      sym__statement,
      sym_return_statement,
      sym_function_call,
      sym_var_declaration,
      sym_if_statement,
  [5383] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_fun,
    ACTIONS(9), 1,
      anon_sym_struct,
    ACTIONS(11), 1,
      anon_sym_interface,
    ACTIONS(581), 1,
      ts_builtin_sym_end,
    STATE(149), 5,
      sym__definition,
      sym_function_definition,
      sym_struct_definition,
      sym_interface_definition,
      aux_sym_source_file_repeat1,
  [5406] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      ts_builtin_sym_end,
    ACTIONS(585), 1,
      anon_sym_fun,
    ACTIONS(588), 1,
      anon_sym_struct,
    ACTIONS(591), 1,
      anon_sym_interface,
    STATE(149), 5,
      sym__definition,
      sym_function_definition,
      sym_struct_definition,
      sym_interface_definition,
      aux_sym_source_file_repeat1,
  [5429] = 6,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_LBRACE,
    ACTIONS(597), 1,
      anon_sym_DQUOTE,
    STATE(150), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(168), 1,
      sym_embetted_expr,
    ACTIONS(599), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [5449] = 6,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_LBRACE,
    ACTIONS(604), 1,
      anon_sym_DQUOTE,
    STATE(150), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(168), 1,
      sym_embetted_expr,
    ACTIONS(606), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [5469] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_AMP,
    ACTIONS(610), 1,
      anon_sym_RPAREN,
    ACTIONS(612), 1,
      anon_sym_self,
    ACTIONS(614), 1,
      sym_identifier,
    STATE(214), 2,
      sym_parameter,
      sym_self_parameter,
  [5489] = 6,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_LBRACE,
    ACTIONS(616), 1,
      anon_sym_DQUOTE,
    STATE(150), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(168), 1,
      sym_embetted_expr,
    ACTIONS(606), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [5509] = 6,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_LBRACE,
    ACTIONS(618), 1,
      anon_sym_DQUOTE,
    STATE(151), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(168), 1,
      sym_embetted_expr,
    ACTIONS(620), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [5529] = 6,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_LBRACE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    STATE(153), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(168), 1,
      sym_embetted_expr,
    ACTIONS(624), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [5549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [5560] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_AMP,
    ACTIONS(628), 1,
      anon_sym_LPAREN,
    ACTIONS(630), 1,
      anon_sym_self,
    STATE(66), 1,
      sym_self_parameter_list,
    STATE(234), 1,
      sym_self_parameter,
  [5579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [5590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [5601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 4,
      ts_builtin_sym_end,
      anon_sym_fun,
      anon_sym_struct,
      anon_sym_interface,
  [5611] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_RBRACE,
    ACTIONS(640), 1,
      sym_identifier,
    STATE(235), 2,
      sym__interface_body,
      sym_method_spec,
  [5625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 4,
      ts_builtin_sym_end,
      anon_sym_fun,
      anon_sym_struct,
      anon_sym_interface,
  [5635] = 3,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(644), 2,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
    ACTIONS(646), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [5647] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 4,
      ts_builtin_sym_end,
      anon_sym_fun,
      anon_sym_struct,
      anon_sym_interface,
  [5657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 4,
      ts_builtin_sym_end,
      anon_sym_fun,
      anon_sym_struct,
      anon_sym_interface,
  [5667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 4,
      ts_builtin_sym_end,
      anon_sym_fun,
      anon_sym_struct,
      anon_sym_interface,
  [5677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 4,
      ts_builtin_sym_end,
      anon_sym_fun,
      anon_sym_struct,
      anon_sym_interface,
  [5687] = 3,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(656), 2,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
    ACTIONS(658), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [5699] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_LBRACE,
    ACTIONS(660), 1,
      anon_sym_if,
    STATE(251), 2,
      sym_block,
      sym_if_statement,
  [5713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 4,
      ts_builtin_sym_end,
      anon_sym_fun,
      anon_sym_struct,
      anon_sym_interface,
  [5723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 4,
      ts_builtin_sym_end,
      anon_sym_fun,
      anon_sym_struct,
      anon_sym_interface,
  [5733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 4,
      ts_builtin_sym_end,
      anon_sym_fun,
      anon_sym_struct,
      anon_sym_interface,
  [5743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 4,
      ts_builtin_sym_end,
      anon_sym_fun,
      anon_sym_struct,
      anon_sym_interface,
  [5753] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      sym_identifier,
    ACTIONS(670), 1,
      anon_sym_RBRACE,
    STATE(196), 2,
      sym__interface_body,
      sym_method_spec,
  [5767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 4,
      ts_builtin_sym_end,
      anon_sym_fun,
      anon_sym_struct,
      anon_sym_interface,
  [5777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 4,
      ts_builtin_sym_end,
      anon_sym_fun,
      anon_sym_struct,
      anon_sym_interface,
  [5787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 4,
      ts_builtin_sym_end,
      anon_sym_fun,
      anon_sym_struct,
      anon_sym_interface,
  [5797] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      sym_identifier,
    ACTIONS(678), 1,
      anon_sym_RBRACE,
    STATE(235), 2,
      sym__interface_body,
      sym_method_spec,
  [5811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 4,
      ts_builtin_sym_end,
      anon_sym_fun,
      anon_sym_struct,
      anon_sym_interface,
  [5821] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_LBRACK,
    ACTIONS(682), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5832] = 4,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(686), 1,
      anon_sym_RBRACE,
    ACTIONS(688), 1,
      anon_sym_LF,
    STATE(181), 1,
      aux_sym__statement_list_repeat1,
  [5845] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_RPAREN,
    ACTIONS(693), 1,
      sym_identifier,
    STATE(189), 1,
      sym_parameter,
  [5858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_LBRACK,
    ACTIONS(695), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5869] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    ACTIONS(699), 1,
      anon_sym_RPAREN,
    STATE(226), 1,
      aux_sym_parameter_list_repeat1,
  [5882] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_COMMA,
    ACTIONS(701), 1,
      anon_sym_RBRACK,
    STATE(188), 1,
      aux_sym_array_expression_repeat1,
  [5895] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      anon_sym_RBRACE,
    ACTIONS(705), 1,
      sym_identifier,
    STATE(194), 1,
      sym_field_definition,
  [5908] = 4,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(707), 1,
      anon_sym_LBRACK,
    ACTIONS(709), 1,
      anon_sym_RBRACE,
    ACTIONS(711), 1,
      anon_sym_LF,
  [5921] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_COMMA,
    ACTIONS(716), 1,
      anon_sym_RBRACK,
    STATE(188), 1,
      aux_sym_array_expression_repeat1,
  [5934] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    ACTIONS(718), 1,
      anon_sym_RPAREN,
    STATE(198), 1,
      aux_sym_parameter_list_repeat1,
  [5947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 3,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5956] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_COMMA,
    ACTIONS(722), 1,
      anon_sym_RBRACK,
    STATE(188), 1,
      aux_sym_array_expression_repeat1,
  [5969] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LBRACE,
    ACTIONS(684), 1,
      anon_sym_LBRACK,
    STATE(172), 1,
      sym_block,
  [5982] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      sym_identifier,
    STATE(235), 2,
      sym__interface_body,
      sym_method_spec,
  [5993] = 4,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_RBRACE,
    ACTIONS(726), 1,
      anon_sym_LF,
    STATE(205), 1,
      aux_sym_field_definition_list_repeat1,
  [6006] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_COMMA,
    ACTIONS(731), 1,
      anon_sym_RPAREN,
    STATE(195), 1,
      aux_sym_argument_list_repeat1,
  [6019] = 4,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(733), 1,
      anon_sym_RBRACE,
    ACTIONS(735), 1,
      anon_sym_LF,
    STATE(212), 1,
      aux_sym_interface_definition_repeat1,
  [6032] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_LBRACK,
    ACTIONS(737), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6043] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    ACTIONS(739), 1,
      anon_sym_RPAREN,
    STATE(226), 1,
      aux_sym_parameter_list_repeat1,
  [6056] = 4,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(707), 1,
      anon_sym_LBRACK,
    ACTIONS(741), 1,
      anon_sym_RBRACE,
    ACTIONS(743), 1,
      anon_sym_LF,
  [6069] = 4,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_RBRACE,
    ACTIONS(747), 1,
      anon_sym_LF,
    STATE(225), 1,
      aux_sym__statement_list_repeat1,
  [6082] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    ACTIONS(749), 1,
      anon_sym_RPAREN,
    STATE(195), 1,
      aux_sym_argument_list_repeat1,
  [6095] = 4,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(707), 1,
      anon_sym_LBRACK,
    ACTIONS(751), 1,
      anon_sym_RBRACE,
    ACTIONS(753), 1,
      anon_sym_LF,
  [6108] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_LBRACK,
    ACTIONS(755), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6119] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      sym_identifier,
    ACTIONS(757), 1,
      anon_sym_RBRACE,
    STATE(231), 1,
      sym_field_definition,
  [6132] = 4,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(759), 1,
      anon_sym_RBRACE,
    ACTIONS(761), 1,
      anon_sym_LF,
    STATE(221), 1,
      aux_sym_field_definition_list_repeat1,
  [6145] = 4,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_RBRACE,
    ACTIONS(765), 1,
      anon_sym_LF,
    ACTIONS(767), 1,
      anon_sym_else,
  [6158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 3,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_LBRACK,
    ACTIONS(771), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6178] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_LBRACK,
    ACTIONS(773), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6189] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_LBRACK,
    ACTIONS(775), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6200] = 4,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_RBRACE,
    ACTIONS(779), 1,
      anon_sym_LF,
    STATE(211), 1,
      aux_sym_interface_definition_repeat1,
  [6213] = 4,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_RBRACE,
    ACTIONS(784), 1,
      anon_sym_LF,
    STATE(211), 1,
      aux_sym_interface_definition_repeat1,
  [6226] = 4,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(707), 1,
      anon_sym_LBRACK,
    ACTIONS(786), 1,
      anon_sym_RBRACE,
    ACTIONS(788), 1,
      anon_sym_LF,
  [6239] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    ACTIONS(790), 1,
      anon_sym_RPAREN,
    STATE(184), 1,
      aux_sym_parameter_list_repeat1,
  [6252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 3,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_LBRACK,
    ACTIONS(794), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6272] = 3,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_LF,
    ACTIONS(796), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [6283] = 3,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_LF,
    ACTIONS(798), 2,
      anon_sym_RBRACE,
      anon_sym_else,
  [6294] = 3,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_LF,
    ACTIONS(800), 2,
      anon_sym_RBRACE,
      anon_sym_else,
  [6305] = 3,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_LF,
    ACTIONS(802), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [6316] = 4,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_RBRACE,
    ACTIONS(806), 1,
      anon_sym_LF,
    STATE(221), 1,
      aux_sym_field_definition_list_repeat1,
  [6329] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      sym_identifier,
    ACTIONS(809), 1,
      anon_sym_RBRACE,
    STATE(231), 1,
      sym_field_definition,
  [6342] = 4,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(707), 1,
      anon_sym_LBRACK,
    ACTIONS(811), 1,
      anon_sym_RBRACE,
    ACTIONS(813), 1,
      anon_sym_LF,
  [6355] = 4,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(707), 1,
      anon_sym_LBRACK,
    ACTIONS(815), 1,
      anon_sym_RBRACE,
    ACTIONS(817), 1,
      anon_sym_LF,
  [6368] = 4,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_RBRACE,
    ACTIONS(821), 1,
      anon_sym_LF,
    STATE(181), 1,
      aux_sym__statement_list_repeat1,
  [6381] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_COMMA,
    ACTIONS(826), 1,
      anon_sym_RPAREN,
    STATE(226), 1,
      aux_sym_parameter_list_repeat1,
  [6394] = 3,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_LF,
    ACTIONS(828), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [6405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      sym_identifier,
    STATE(231), 1,
      sym_field_definition,
  [6415] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_LBRACK,
    ACTIONS(830), 1,
      anon_sym_EQ,
  [6425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6433] = 3,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_RBRACE,
    ACTIONS(834), 1,
      anon_sym_LF,
  [6443] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_LBRACK,
    ACTIONS(836), 1,
      anon_sym_EQ,
  [6453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_LPAREN,
    STATE(65), 1,
      sym_parameter_list,
  [6463] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_LPAREN,
    STATE(67), 1,
      sym_self_parameter_list,
  [6473] = 3,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_RBRACE,
    ACTIONS(840), 1,
      anon_sym_LF,
  [6483] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_mut,
    ACTIONS(844), 1,
      anon_sym_self,
  [6493] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_LBRACK,
    ACTIONS(846), 1,
      anon_sym_EQ,
  [6503] = 3,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_RBRACE,
    ACTIONS(850), 1,
      anon_sym_LF,
  [6513] = 3,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(686), 1,
      anon_sym_RBRACE,
    ACTIONS(852), 1,
      anon_sym_LF,
  [6523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_LBRACE,
    STATE(176), 1,
      sym_field_definition_list,
  [6533] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_LBRACK,
    ACTIONS(856), 1,
      anon_sym_EQ,
  [6543] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_LPAREN,
    STATE(245), 1,
      sym_argument_list,
  [6553] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_LBRACK,
    ACTIONS(860), 1,
      anon_sym_EQ,
  [6563] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_LBRACK,
    ACTIONS(862), 1,
      anon_sym_EQ,
  [6573] = 3,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_RBRACE,
    ACTIONS(866), 1,
      anon_sym_LF,
  [6583] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      sym_identifier,
    STATE(230), 1,
      sym_parameter,
  [6593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_LBRACK,
    ACTIONS(868), 1,
      anon_sym_EQ,
  [6603] = 3,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(870), 1,
      anon_sym_RBRACE,
    ACTIONS(872), 1,
      anon_sym_LF,
  [6613] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_LBRACK,
    ACTIONS(874), 1,
      anon_sym_EQ,
  [6623] = 3,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_RBRACE,
    ACTIONS(878), 1,
      anon_sym_LF,
  [6633] = 3,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_RBRACE,
    ACTIONS(882), 1,
      anon_sym_LF,
  [6643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_RBRACE,
  [6650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      sym_identifier,
  [6657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      anon_sym_RBRACE,
  [6664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_LBRACE,
  [6671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      sym_identifier,
  [6678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_self,
  [6685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      ts_builtin_sym_end,
  [6692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      sym_identifier,
  [6699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 78,
  [SMALL_STATE(5)] = 112,
  [SMALL_STATE(6)] = 148,
  [SMALL_STATE(7)] = 182,
  [SMALL_STATE(8)] = 216,
  [SMALL_STATE(9)] = 250,
  [SMALL_STATE(10)] = 286,
  [SMALL_STATE(11)] = 326,
  [SMALL_STATE(12)] = 360,
  [SMALL_STATE(13)] = 406,
  [SMALL_STATE(14)] = 454,
  [SMALL_STATE(15)] = 488,
  [SMALL_STATE(16)] = 522,
  [SMALL_STATE(17)] = 556,
  [SMALL_STATE(18)] = 590,
  [SMALL_STATE(19)] = 641,
  [SMALL_STATE(20)] = 682,
  [SMALL_STATE(21)] = 733,
  [SMALL_STATE(22)] = 784,
  [SMALL_STATE(23)] = 814,
  [SMALL_STATE(24)] = 844,
  [SMALL_STATE(25)] = 886,
  [SMALL_STATE(26)] = 916,
  [SMALL_STATE(27)] = 958,
  [SMALL_STATE(28)] = 988,
  [SMALL_STATE(29)] = 1030,
  [SMALL_STATE(30)] = 1072,
  [SMALL_STATE(31)] = 1118,
  [SMALL_STATE(32)] = 1160,
  [SMALL_STATE(33)] = 1202,
  [SMALL_STATE(34)] = 1244,
  [SMALL_STATE(35)] = 1286,
  [SMALL_STATE(36)] = 1318,
  [SMALL_STATE(37)] = 1348,
  [SMALL_STATE(38)] = 1378,
  [SMALL_STATE(39)] = 1408,
  [SMALL_STATE(40)] = 1448,
  [SMALL_STATE(41)] = 1486,
  [SMALL_STATE(42)] = 1528,
  [SMALL_STATE(43)] = 1564,
  [SMALL_STATE(44)] = 1602,
  [SMALL_STATE(45)] = 1636,
  [SMALL_STATE(46)] = 1684,
  [SMALL_STATE(47)] = 1726,
  [SMALL_STATE(48)] = 1768,
  [SMALL_STATE(49)] = 1810,
  [SMALL_STATE(50)] = 1852,
  [SMALL_STATE(51)] = 1890,
  [SMALL_STATE(52)] = 1932,
  [SMALL_STATE(53)] = 1974,
  [SMALL_STATE(54)] = 2016,
  [SMALL_STATE(55)] = 2046,
  [SMALL_STATE(56)] = 2088,
  [SMALL_STATE(57)] = 2120,
  [SMALL_STATE(58)] = 2150,
  [SMALL_STATE(59)] = 2196,
  [SMALL_STATE(60)] = 2226,
  [SMALL_STATE(61)] = 2271,
  [SMALL_STATE(62)] = 2316,
  [SMALL_STATE(63)] = 2361,
  [SMALL_STATE(64)] = 2406,
  [SMALL_STATE(65)] = 2441,
  [SMALL_STATE(66)] = 2476,
  [SMALL_STATE(67)] = 2511,
  [SMALL_STATE(68)] = 2546,
  [SMALL_STATE(69)] = 2591,
  [SMALL_STATE(70)] = 2636,
  [SMALL_STATE(71)] = 2671,
  [SMALL_STATE(72)] = 2716,
  [SMALL_STATE(73)] = 2761,
  [SMALL_STATE(74)] = 2806,
  [SMALL_STATE(75)] = 2851,
  [SMALL_STATE(76)] = 2896,
  [SMALL_STATE(77)] = 2931,
  [SMALL_STATE(78)] = 2966,
  [SMALL_STATE(79)] = 3007,
  [SMALL_STATE(80)] = 3047,
  [SMALL_STATE(81)] = 3087,
  [SMALL_STATE(82)] = 3119,
  [SMALL_STATE(83)] = 3159,
  [SMALL_STATE(84)] = 3191,
  [SMALL_STATE(85)] = 3223,
  [SMALL_STATE(86)] = 3263,
  [SMALL_STATE(87)] = 3303,
  [SMALL_STATE(88)] = 3335,
  [SMALL_STATE(89)] = 3375,
  [SMALL_STATE(90)] = 3407,
  [SMALL_STATE(91)] = 3439,
  [SMALL_STATE(92)] = 3479,
  [SMALL_STATE(93)] = 3519,
  [SMALL_STATE(94)] = 3559,
  [SMALL_STATE(95)] = 3599,
  [SMALL_STATE(96)] = 3639,
  [SMALL_STATE(97)] = 3671,
  [SMALL_STATE(98)] = 3700,
  [SMALL_STATE(99)] = 3729,
  [SMALL_STATE(100)] = 3766,
  [SMALL_STATE(101)] = 3795,
  [SMALL_STATE(102)] = 3832,
  [SMALL_STATE(103)] = 3869,
  [SMALL_STATE(104)] = 3906,
  [SMALL_STATE(105)] = 3943,
  [SMALL_STATE(106)] = 3980,
  [SMALL_STATE(107)] = 4017,
  [SMALL_STATE(108)] = 4054,
  [SMALL_STATE(109)] = 4091,
  [SMALL_STATE(110)] = 4120,
  [SMALL_STATE(111)] = 4157,
  [SMALL_STATE(112)] = 4194,
  [SMALL_STATE(113)] = 4231,
  [SMALL_STATE(114)] = 4268,
  [SMALL_STATE(115)] = 4305,
  [SMALL_STATE(116)] = 4342,
  [SMALL_STATE(117)] = 4379,
  [SMALL_STATE(118)] = 4416,
  [SMALL_STATE(119)] = 4453,
  [SMALL_STATE(120)] = 4490,
  [SMALL_STATE(121)] = 4519,
  [SMALL_STATE(122)] = 4556,
  [SMALL_STATE(123)] = 4593,
  [SMALL_STATE(124)] = 4630,
  [SMALL_STATE(125)] = 4667,
  [SMALL_STATE(126)] = 4704,
  [SMALL_STATE(127)] = 4741,
  [SMALL_STATE(128)] = 4778,
  [SMALL_STATE(129)] = 4815,
  [SMALL_STATE(130)] = 4852,
  [SMALL_STATE(131)] = 4889,
  [SMALL_STATE(132)] = 4926,
  [SMALL_STATE(133)] = 4963,
  [SMALL_STATE(134)] = 5000,
  [SMALL_STATE(135)] = 5029,
  [SMALL_STATE(136)] = 5066,
  [SMALL_STATE(137)] = 5103,
  [SMALL_STATE(138)] = 5128,
  [SMALL_STATE(139)] = 5153,
  [SMALL_STATE(140)] = 5178,
  [SMALL_STATE(141)] = 5202,
  [SMALL_STATE(142)] = 5226,
  [SMALL_STATE(143)] = 5250,
  [SMALL_STATE(144)] = 5279,
  [SMALL_STATE(145)] = 5308,
  [SMALL_STATE(146)] = 5334,
  [SMALL_STATE(147)] = 5360,
  [SMALL_STATE(148)] = 5383,
  [SMALL_STATE(149)] = 5406,
  [SMALL_STATE(150)] = 5429,
  [SMALL_STATE(151)] = 5449,
  [SMALL_STATE(152)] = 5469,
  [SMALL_STATE(153)] = 5489,
  [SMALL_STATE(154)] = 5509,
  [SMALL_STATE(155)] = 5529,
  [SMALL_STATE(156)] = 5549,
  [SMALL_STATE(157)] = 5560,
  [SMALL_STATE(158)] = 5579,
  [SMALL_STATE(159)] = 5590,
  [SMALL_STATE(160)] = 5601,
  [SMALL_STATE(161)] = 5611,
  [SMALL_STATE(162)] = 5625,
  [SMALL_STATE(163)] = 5635,
  [SMALL_STATE(164)] = 5647,
  [SMALL_STATE(165)] = 5657,
  [SMALL_STATE(166)] = 5667,
  [SMALL_STATE(167)] = 5677,
  [SMALL_STATE(168)] = 5687,
  [SMALL_STATE(169)] = 5699,
  [SMALL_STATE(170)] = 5713,
  [SMALL_STATE(171)] = 5723,
  [SMALL_STATE(172)] = 5733,
  [SMALL_STATE(173)] = 5743,
  [SMALL_STATE(174)] = 5753,
  [SMALL_STATE(175)] = 5767,
  [SMALL_STATE(176)] = 5777,
  [SMALL_STATE(177)] = 5787,
  [SMALL_STATE(178)] = 5797,
  [SMALL_STATE(179)] = 5811,
  [SMALL_STATE(180)] = 5821,
  [SMALL_STATE(181)] = 5832,
  [SMALL_STATE(182)] = 5845,
  [SMALL_STATE(183)] = 5858,
  [SMALL_STATE(184)] = 5869,
  [SMALL_STATE(185)] = 5882,
  [SMALL_STATE(186)] = 5895,
  [SMALL_STATE(187)] = 5908,
  [SMALL_STATE(188)] = 5921,
  [SMALL_STATE(189)] = 5934,
  [SMALL_STATE(190)] = 5947,
  [SMALL_STATE(191)] = 5956,
  [SMALL_STATE(192)] = 5969,
  [SMALL_STATE(193)] = 5982,
  [SMALL_STATE(194)] = 5993,
  [SMALL_STATE(195)] = 6006,
  [SMALL_STATE(196)] = 6019,
  [SMALL_STATE(197)] = 6032,
  [SMALL_STATE(198)] = 6043,
  [SMALL_STATE(199)] = 6056,
  [SMALL_STATE(200)] = 6069,
  [SMALL_STATE(201)] = 6082,
  [SMALL_STATE(202)] = 6095,
  [SMALL_STATE(203)] = 6108,
  [SMALL_STATE(204)] = 6119,
  [SMALL_STATE(205)] = 6132,
  [SMALL_STATE(206)] = 6145,
  [SMALL_STATE(207)] = 6158,
  [SMALL_STATE(208)] = 6167,
  [SMALL_STATE(209)] = 6178,
  [SMALL_STATE(210)] = 6189,
  [SMALL_STATE(211)] = 6200,
  [SMALL_STATE(212)] = 6213,
  [SMALL_STATE(213)] = 6226,
  [SMALL_STATE(214)] = 6239,
  [SMALL_STATE(215)] = 6252,
  [SMALL_STATE(216)] = 6261,
  [SMALL_STATE(217)] = 6272,
  [SMALL_STATE(218)] = 6283,
  [SMALL_STATE(219)] = 6294,
  [SMALL_STATE(220)] = 6305,
  [SMALL_STATE(221)] = 6316,
  [SMALL_STATE(222)] = 6329,
  [SMALL_STATE(223)] = 6342,
  [SMALL_STATE(224)] = 6355,
  [SMALL_STATE(225)] = 6368,
  [SMALL_STATE(226)] = 6381,
  [SMALL_STATE(227)] = 6394,
  [SMALL_STATE(228)] = 6405,
  [SMALL_STATE(229)] = 6415,
  [SMALL_STATE(230)] = 6425,
  [SMALL_STATE(231)] = 6433,
  [SMALL_STATE(232)] = 6443,
  [SMALL_STATE(233)] = 6453,
  [SMALL_STATE(234)] = 6463,
  [SMALL_STATE(235)] = 6473,
  [SMALL_STATE(236)] = 6483,
  [SMALL_STATE(237)] = 6493,
  [SMALL_STATE(238)] = 6503,
  [SMALL_STATE(239)] = 6513,
  [SMALL_STATE(240)] = 6523,
  [SMALL_STATE(241)] = 6533,
  [SMALL_STATE(242)] = 6543,
  [SMALL_STATE(243)] = 6553,
  [SMALL_STATE(244)] = 6563,
  [SMALL_STATE(245)] = 6573,
  [SMALL_STATE(246)] = 6583,
  [SMALL_STATE(247)] = 6593,
  [SMALL_STATE(248)] = 6603,
  [SMALL_STATE(249)] = 6613,
  [SMALL_STATE(250)] = 6623,
  [SMALL_STATE(251)] = 6633,
  [SMALL_STATE(252)] = 6643,
  [SMALL_STATE(253)] = 6650,
  [SMALL_STATE(254)] = 6657,
  [SMALL_STATE(255)] = 6664,
  [SMALL_STATE(256)] = 6671,
  [SMALL_STATE(257)] = 6678,
  [SMALL_STATE(258)] = 6685,
  [SMALL_STATE(259)] = 6692,
  [SMALL_STATE(260)] = 6699,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 31),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 31),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 22),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 22),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, .production_id = 11),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, .production_id = 11),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 3, .production_id = 11),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 3, .production_id = 11),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 3, .production_id = 29),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 3, .production_id = 29),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_expression, 6, .production_id = 52),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_expression, 6, .production_id = 52),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 4, .production_id = 34),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 4, .production_id = 34),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_expression, 4, .production_id = 36),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_expression, 4, .production_id = 36),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_expression, 5, .production_id = 45),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_expression, 5, .production_id = 45),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_expression, 5, .production_id = 44),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_expression, 5, .production_id = 44),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 6, .production_id = 51),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 6, .production_id = 51),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 7, .production_id = 53),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 7, .production_id = 53),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 7, .production_id = 54),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 7, .production_id = 54),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 6, .production_id = 50),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 6, .production_id = 50),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_expression_repeat1, 2, .production_id = 11),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 4, .production_id = 32),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 4, .production_id = 32),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 7, .production_id = 55),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 7, .production_id = 55),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 7, .production_id = 56),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 7, .production_id = 56),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 8, .production_id = 57),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 8, .production_id = 57),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 5, .production_id = 40),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 5, .production_id = 40),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2, .production_id = 11),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, .production_id = 11),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 6, .production_id = 49),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 6, .production_id = 49),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 6, .production_id = 48),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 6, .production_id = 48),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 6, .production_id = 47),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 6, .production_id = 47),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 5, .production_id = 37),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 5, .production_id = 37),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 6, .production_id = 46),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 6, .production_id = 46),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 5, .production_id = 38),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 5, .production_id = 38),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 5, .production_id = 39),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 5, .production_id = 39),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 33),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_spec, 2, .production_id = 7),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_spec, 2, .production_id = 7),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_spec, 3, .production_id = 18),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_spec, 3, .production_id = 18),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_parameter_list, 2),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter_list, 2),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_parameter_list, 3),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter_list, 3),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_parameter_list, 4),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter_list, 4),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 4),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 3),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 2),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(256),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(260),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(259),
  [594] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2, .production_id = 30), SHIFT_REPEAT(108),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2, .production_id = 30),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2, .production_id = 30), SHIFT_REPEAT(150),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_type, 3, .production_id = 13),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 4, .production_id = 25),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 4, .production_id = 3),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_embetted_expr, 3, .production_id = 11),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embetted_expr, 3, .production_id = 11),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition_list, 2),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 2),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition_list, 5, .production_id = 14),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 1, .production_id = 23),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 1, .production_id = 23),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition_list, 4, .production_id = 6),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition_list, 4, .production_id = 14),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 5),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 6, .production_id = 3),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition_list, 3, .production_id = 6),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 3, .production_id = 1),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 5, .production_id = 3),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 7, .production_id = 3),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 10),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [688] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(147),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 5, .production_id = 28),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_spec, 4, .production_id = 27),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_spec, 4, .production_id = 27),
  [713] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_expression_repeat1, 2, .production_id = 35), SHIFT_REPEAT(136),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_expression_repeat1, 2, .production_id = 35),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter, 3, .production_id = 26),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [728] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 43), SHIFT_REPEAT(113),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 43),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 4),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_definition, 4, .production_id = 19),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 4, .production_id = 19),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 1),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_definition, 2, .production_id = 4),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 2, .production_id = 4),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 9),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 24),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 24),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter, 1),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, .production_id = 21),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, .production_id = 20),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, .production_id = 19),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_definition_repeat1, 2),
  [779] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(193),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_spec, 3, .production_id = 17),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_spec, 3, .production_id = 17),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter, 2, .production_id = 16),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 8),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_type, 3, .production_id = 13),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_definition_list_repeat1, 2, .production_id = 15),
  [806] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_definition_list_repeat1, 2, .production_id = 15), SHIFT_REPEAT(228),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_definition, 3, .production_id = 9),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 3, .production_id = 9),
  [815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_definition, 3, .production_id = 8),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 3, .production_id = 8),
  [819] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 2),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [823] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(246),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 4, .production_id = 25),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_definition_list_repeat1, 2, .production_id = 6),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_definition_list_repeat1, 2, .production_id = 6),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 12),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 12),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [870] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3, .production_id = 33),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3, .production_id = 33),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [876] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4, .production_id = 42),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4, .production_id = 42),
  [880] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 41),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 41),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [896] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
