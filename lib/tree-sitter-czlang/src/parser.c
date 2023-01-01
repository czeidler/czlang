#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 280
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 117
#define ALIAS_COUNT 0
#define TOKEN_COUNT 67
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 30
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 47

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
  sym_keyed_element = 105,
  sym_struct_initialization = 106,
  sym_null = 107,
  aux_sym_source_file_repeat1 = 108,
  aux_sym_parameter_list_repeat1 = 109,
  aux_sym_array_expression_repeat1 = 110,
  aux_sym__statement_list_repeat1 = 111,
  aux_sym_argument_list_repeat1 = 112,
  aux_sym_interpreted_string_literal_repeat1 = 113,
  aux_sym_field_definition_list_repeat1 = 114,
  aux_sym_interface_definition_repeat1 = 115,
  aux_sym_struct_initialization_repeat1 = 116,
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
  [sym_keyed_element] = "keyed_element",
  [sym_struct_initialization] = "struct_initialization",
  [sym_null] = "null",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_array_expression_repeat1] = "array_expression_repeat1",
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
  [sym_keyed_element] = sym_keyed_element,
  [sym_struct_initialization] = sym_struct_initialization,
  [sym_null] = sym_null,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_array_expression_repeat1] = aux_sym_array_expression_repeat1,
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
  [26] = {.index = 47, .length = 1},
  [27] = {.index = 48, .length = 3},
  [28] = {.index = 51, .length = 2},
  [29] = {.index = 53, .length = 2},
  [30] = {.index = 55, .length = 2},
  [31] = {.index = 57, .length = 4},
  [32] = {.index = 61, .length = 2},
  [33] = {.index = 63, .length = 2},
  [34] = {.index = 65, .length = 3},
  [35] = {.index = 68, .length = 1},
  [36] = {.index = 69, .length = 1},
  [37] = {.index = 70, .length = 3},
  [38] = {.index = 73, .length = 4},
  [39] = {.index = 77, .length = 4},
  [40] = {.index = 81, .length = 3},
  [41] = {.index = 84, .length = 2},
  [42] = {.index = 86, .length = 2},
  [43] = {.index = 88, .length = 2},
  [44] = {.index = 90, .length = 2},
  [45] = {.index = 92, .length = 5},
  [46] = {.index = 97, .length = 3},
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
    {field_name, 0},
  [48] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [51] =
    {field_field, 2},
    {field_operand, 0},
  [53] =
    {field_element, 0},
    {field_length, 2},
  [55] =
    {field_mut_reference, 0},
    {field_mut_reference, 1},
  [57] =
    {field_name, 0},
    {field_parameters, 2},
    {field_result, 3},
    {field_self, 1},
  [61] =
    {field_expression, 1},
    {field_expression, 2, .inherited = true},
  [63] =
    {field_expression, 0, .inherited = true},
    {field_expression, 1, .inherited = true},
  [65] =
    {field_name, 1},
    {field_value, 3},
    {field_variable, 0},
  [68] =
    {field_argument, 1},
  [69] =
    {field_operand, 0},
  [70] =
    {field_chaining, 1},
    {field_field, 3},
    {field_operand, 0},
  [73] =
    {field_mutable, 2},
    {field_name, 1},
    {field_value, 4},
    {field_variable, 0},
  [77] =
    {field_name, 1},
    {field_type, 2},
    {field_value, 4},
    {field_variable, 0},
  [81] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequence, 2},
  [84] =
    {field_argument, 1},
    {field_argument, 2, .inherited = true},
  [86] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [88] =
    {field_end, 3},
    {field_operand, 0},
  [90] =
    {field_operand, 0},
    {field_start, 2},
  [92] =
    {field_mutable, 2},
    {field_name, 1},
    {field_type, 3},
    {field_value, 5},
    {field_variable, 0},
  [97] =
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
  [30] = 6,
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
  [45] = 43,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 52,
  [54] = 54,
  [55] = 49,
  [56] = 56,
  [57] = 50,
  [58] = 6,
  [59] = 56,
  [60] = 54,
  [61] = 61,
  [62] = 46,
  [63] = 61,
  [64] = 44,
  [65] = 51,
  [66] = 48,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 35,
  [71] = 71,
  [72] = 72,
  [73] = 26,
  [74] = 27,
  [75] = 12,
  [76] = 10,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 7,
  [82] = 82,
  [83] = 29,
  [84] = 84,
  [85] = 85,
  [86] = 19,
  [87] = 9,
  [88] = 88,
  [89] = 89,
  [90] = 22,
  [91] = 69,
  [92] = 92,
  [93] = 11,
  [94] = 23,
  [95] = 95,
  [96] = 77,
  [97] = 79,
  [98] = 67,
  [99] = 99,
  [100] = 92,
  [101] = 101,
  [102] = 25,
  [103] = 72,
  [104] = 28,
  [105] = 72,
  [106] = 106,
  [107] = 8,
  [108] = 24,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 69,
  [113] = 113,
  [114] = 21,
  [115] = 115,
  [116] = 31,
  [117] = 13,
  [118] = 118,
  [119] = 14,
  [120] = 37,
  [121] = 92,
  [122] = 122,
  [123] = 36,
  [124] = 20,
  [125] = 15,
  [126] = 77,
  [127] = 79,
  [128] = 16,
  [129] = 67,
  [130] = 17,
  [131] = 106,
  [132] = 18,
  [133] = 133,
  [134] = 134,
  [135] = 133,
  [136] = 134,
  [137] = 36,
  [138] = 37,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 141,
  [143] = 143,
  [144] = 31,
  [145] = 35,
  [146] = 139,
  [147] = 140,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 162,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 167,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 163,
  [173] = 173,
  [174] = 174,
  [175] = 161,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 157,
  [183] = 183,
  [184] = 159,
  [185] = 185,
  [186] = 166,
  [187] = 158,
  [188] = 188,
  [189] = 189,
  [190] = 171,
  [191] = 178,
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
  [206] = 193,
  [207] = 199,
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
  [226] = 214,
  [227] = 211,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 216,
  [232] = 232,
  [233] = 219,
  [234] = 234,
  [235] = 235,
  [236] = 229,
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
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 258,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 263,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 262,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 257,
  [279] = 279,
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
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(85);
      if (lookahead == '{') ADVANCE(53);
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
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 3},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 3},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 2},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 3},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 3},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 2},
  [186] = {.lex_state = 2},
  [187] = {.lex_state = 2},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 4},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 2},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 2},
  [196] = {.lex_state = 4},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 2},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 2},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 2},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 2},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 2},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 4},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 2},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 2},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 4},
  [235] = {.lex_state = 2},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 2},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 2},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 2},
  [244] = {.lex_state = 2},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 2},
  [250] = {.lex_state = 2},
  [251] = {.lex_state = 2},
  [252] = {.lex_state = 2},
  [253] = {.lex_state = 2},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 2},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 5},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 2},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 2},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 2},
  [269] = {.lex_state = 2},
  [270] = {.lex_state = 4},
  [271] = {.lex_state = 2},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 2},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 5},
  [279] = {.lex_state = 2},
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
    [sym_source_file] = STATE(275),
    [sym__definition] = STATE(155),
    [sym_function_definition] = STATE(274),
    [sym_struct_definition] = STATE(274),
    [sym_interface_definition] = STATE(274),
    [aux_sym_source_file_repeat1] = STATE(155),
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
    STATE(267), 1,
      sym__statement_list,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(35), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(220), 5,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      sym_var_declaration,
      sym_if_statement,
    STATE(85), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [70] = 16,
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
    STATE(238), 5,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      sym_var_declaration,
      sym_if_statement,
    STATE(85), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [137] = 16,
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
    STATE(238), 5,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      sym_var_declaration,
      sym_if_statement,
    STATE(85), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [204] = 15,
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
    STATE(238), 5,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      sym_var_declaration,
      sym_if_statement,
    STATE(85), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [268] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      sym_argument_list,
    ACTIONS(47), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 22,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
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
  [312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 5,
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
  [348] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 23,
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
  [384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 23,
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
  [420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 23,
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
  [456] = 3,
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
  [492] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(73), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 20,
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
  [534] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 23,
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
  [570] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(85), 23,
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
  [606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(89), 23,
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
  [642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 23,
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
  [678] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(97), 23,
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
  [714] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(103), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 20,
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
  [756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(105), 23,
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
  [792] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 23,
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
  [828] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 23,
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
  [864] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 23,
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
  [900] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(121), 23,
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
  [936] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 23,
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
  [972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(129), 23,
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
  [1008] = 3,
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
  [1044] = 3,
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
  [1080] = 3,
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
  [1116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 23,
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
  [1152] = 6,
    ACTIONS(45), 1,
      anon_sym_LF,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      sym_comment,
    STATE(87), 1,
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
  [1193] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_AMP_AMP,
    ACTIONS(155), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(163), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(161), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(101), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
  [1246] = 8,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(171), 1,
      anon_sym_LF,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_AMP,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    STATE(185), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(177), 15,
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
  [1291] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_AMP,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    STATE(253), 1,
      sym_block,
    STATE(176), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(187), 15,
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
  [1336] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_AMP,
    ACTIONS(191), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_mut,
    ACTIONS(195), 1,
      anon_sym_EQ,
    STATE(234), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(187), 15,
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
  [1381] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(155), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(103), 3,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(101), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
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
  [1426] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      anon_sym_PIPE,
    ACTIONS(103), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(155), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(159), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(161), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(101), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1475] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      anon_sym_PIPE,
    ACTIONS(155), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(163), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(161), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(101), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1526] = 8,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_AMP,
    ACTIONS(197), 1,
      sym_identifier,
    ACTIONS(199), 1,
      anon_sym_LF,
    ACTIONS(201), 1,
      anon_sym_RBRACE,
    STATE(181), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(177), 15,
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
  [1571] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_AMP,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(205), 1,
      anon_sym_mut,
    STATE(169), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(187), 15,
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
  [1613] = 11,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_null,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_LF,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 4,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_typeof,
    ACTIONS(217), 4,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
    STATE(78), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [1663] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_AMP,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_EQ,
    STATE(222), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(187), 15,
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
  [1705] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym_identifier,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(227), 1,
      anon_sym_AMP,
    STATE(173), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(177), 15,
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
  [1744] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_null,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(239), 1,
      anon_sym_RBRACK,
    ACTIONS(241), 1,
      anon_sym_typeof,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(247), 1,
      sym_float_literal,
    ACTIONS(233), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(245), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(134), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [1795] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_null,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_typeof,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(249), 1,
      anon_sym_COLON,
    ACTIONS(253), 1,
      sym_float_literal,
    ACTIONS(233), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(251), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(133), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [1846] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_null,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_typeof,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(255), 1,
      anon_sym_RBRACK,
    ACTIONS(259), 1,
      sym_float_literal,
    ACTIONS(233), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(257), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(136), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [1897] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_null,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_typeof,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      anon_sym_RBRACK,
    ACTIONS(265), 1,
      sym_float_literal,
    ACTIONS(233), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(263), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(142), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [1948] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_AMP,
    ACTIONS(267), 1,
      sym_identifier,
    STATE(189), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(187), 15,
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
  [1987] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_null,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_typeof,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    ACTIONS(273), 1,
      sym_float_literal,
    ACTIONS(233), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(271), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(59), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [2038] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_AMP,
    ACTIONS(275), 1,
      sym_identifier,
    STATE(227), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(187), 15,
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
  [2077] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_AMP,
    ACTIONS(277), 1,
      sym_identifier,
    STATE(158), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(187), 15,
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
  [2116] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_null,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_typeof,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      anon_sym_RBRACK,
    ACTIONS(283), 1,
      sym_float_literal,
    ACTIONS(233), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(281), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(146), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [2167] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(227), 1,
      anon_sym_AMP,
    ACTIONS(285), 1,
      sym_identifier,
    STATE(182), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(177), 15,
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
  [2206] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_AMP,
    ACTIONS(287), 1,
      sym_identifier,
    STATE(157), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(187), 15,
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
  [2245] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_null,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_typeof,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_RBRACK,
    ACTIONS(293), 1,
      sym_float_literal,
    ACTIONS(233), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(291), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(61), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [2296] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_AMP,
    ACTIONS(295), 1,
      sym_identifier,
    STATE(211), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(187), 15,
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
  [2335] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_AMP_AMP,
    ACTIONS(297), 1,
      anon_sym_COMMA,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
    ACTIONS(301), 1,
      anon_sym_PIPE_PIPE,
    STATE(219), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(155), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(163), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(161), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [2392] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(227), 1,
      anon_sym_AMP,
    ACTIONS(303), 1,
      sym_identifier,
    STATE(187), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(177), 15,
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
  [2431] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym_argument_list,
    ACTIONS(47), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 18,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DOT,
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
  [2468] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_AMP_AMP,
    ACTIONS(297), 1,
      anon_sym_COMMA,
    ACTIONS(301), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    STATE(233), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(155), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(163), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(161), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [2525] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_null,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_typeof,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(307), 1,
      anon_sym_RBRACK,
    ACTIONS(311), 1,
      sym_float_literal,
    ACTIONS(233), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(309), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(63), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [2576] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_AMP_AMP,
    ACTIONS(301), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    ACTIONS(315), 1,
      anon_sym_RBRACK,
    STATE(236), 1,
      aux_sym_array_expression_repeat1,
    ACTIONS(155), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(163), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(161), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [2633] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_null,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_typeof,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(317), 1,
      anon_sym_RBRACK,
    ACTIONS(321), 1,
      sym_float_literal,
    ACTIONS(233), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(319), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(141), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [2684] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_AMP_AMP,
    ACTIONS(301), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    ACTIONS(323), 1,
      anon_sym_RBRACK,
    STATE(229), 1,
      aux_sym_array_expression_repeat1,
    ACTIONS(155), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(163), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(161), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [2741] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_null,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_typeof,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(325), 1,
      anon_sym_COLON,
    ACTIONS(329), 1,
      sym_float_literal,
    ACTIONS(233), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(327), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(135), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [2792] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_null,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_typeof,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      anon_sym_RBRACK,
    ACTIONS(335), 1,
      sym_float_literal,
    ACTIONS(233), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(333), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(139), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [2843] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_null,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_typeof,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
    ACTIONS(341), 1,
      sym_float_literal,
    ACTIONS(233), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(339), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(56), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [2894] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_null,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_typeof,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      sym_float_literal,
    ACTIONS(233), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(343), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(31), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [2942] = 11,
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
    ACTIONS(349), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(347), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(82), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [2990] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_null,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_typeof,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(353), 1,
      sym_float_literal,
    ACTIONS(233), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(351), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(18), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [3038] = 7,
    ACTIONS(101), 1,
      anon_sym_LF,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_LBRACK,
    ACTIONS(359), 1,
      anon_sym_QMARK,
    ACTIONS(361), 1,
      anon_sym_DOT,
    ACTIONS(355), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(103), 13,
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
  [3078] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_null,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_typeof,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(365), 1,
      sym_float_literal,
    ACTIONS(233), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(363), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(88), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [3126] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_null,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_typeof,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(369), 1,
      sym_float_literal,
    ACTIONS(233), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(367), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(12), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [3174] = 3,
    ACTIONS(133), 1,
      anon_sym_LF,
    ACTIONS(153), 1,
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
  [3206] = 3,
    ACTIONS(137), 1,
      anon_sym_LF,
    ACTIONS(153), 1,
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
  [3238] = 6,
    ACTIONS(71), 1,
      anon_sym_LF,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_LBRACK,
    ACTIONS(359), 1,
      anon_sym_QMARK,
    ACTIONS(361), 1,
      anon_sym_DOT,
    ACTIONS(73), 20,
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
  [3276] = 3,
    ACTIONS(63), 1,
      anon_sym_LF,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(65), 23,
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
  [3308] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_null,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_typeof,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      sym_float_literal,
    ACTIONS(233), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(371), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(36), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [3356] = 11,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_LBRACK,
    ACTIONS(359), 1,
      anon_sym_QMARK,
    ACTIONS(361), 1,
      anon_sym_DOT,
    ACTIONS(375), 1,
      anon_sym_LF,
    ACTIONS(379), 1,
      anon_sym_RBRACE,
    ACTIONS(383), 1,
      anon_sym_AMP_AMP,
    ACTIONS(385), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(377), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(381), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(355), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [3404] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_null,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_typeof,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      sym_float_literal,
    ACTIONS(233), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(387), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(37), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [3452] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_null,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_typeof,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(393), 1,
      sym_float_literal,
    ACTIONS(233), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(391), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(143), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [3500] = 3,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(53), 23,
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
  [3532] = 11,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_LBRACK,
    ACTIONS(359), 1,
      anon_sym_QMARK,
    ACTIONS(361), 1,
      anon_sym_DOT,
    ACTIONS(383), 1,
      anon_sym_AMP_AMP,
    ACTIONS(385), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(395), 1,
      anon_sym_LF,
    ACTIONS(397), 1,
      anon_sym_RBRACE,
    ACTIONS(377), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(381), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(355), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [3580] = 3,
    ACTIONS(145), 1,
      anon_sym_LF,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(147), 23,
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
  [3612] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(401), 1,
      anon_sym_PIPE,
    ACTIONS(411), 1,
      anon_sym_AMP_AMP,
    ACTIONS(413), 1,
      anon_sym_PIPE_PIPE,
    STATE(212), 1,
      sym_block,
    ACTIONS(399), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(409), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(403), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(407), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(405), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [3666] = 11,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_LBRACK,
    ACTIONS(359), 1,
      anon_sym_QMARK,
    ACTIONS(361), 1,
      anon_sym_DOT,
    ACTIONS(383), 1,
      anon_sym_AMP_AMP,
    ACTIONS(385), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(415), 1,
      anon_sym_LF,
    ACTIONS(417), 1,
      anon_sym_RBRACE,
    ACTIONS(377), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(381), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(355), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [3714] = 3,
    ACTIONS(105), 1,
      anon_sym_LF,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(107), 23,
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
  [3746] = 3,
    ACTIONS(59), 1,
      anon_sym_LF,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(61), 23,
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
  [3778] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_AMP_AMP,
    ACTIONS(301), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(155), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(419), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(159), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(163), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(161), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [3830] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_null,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(421), 1,
      sym_identifier,
    ACTIONS(425), 1,
      anon_sym_typeof,
    ACTIONS(429), 1,
      sym_float_literal,
    ACTIONS(423), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(427), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(84), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [3878] = 3,
    ACTIONS(117), 1,
      anon_sym_LF,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(119), 23,
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
  [3910] = 11,
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
    ACTIONS(433), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(431), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(132), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [3958] = 11,
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
    ACTIONS(437), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(435), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(70), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [4006] = 3,
    ACTIONS(67), 1,
      anon_sym_LF,
    ACTIONS(153), 1,
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
  [4038] = 3,
    ACTIONS(121), 1,
      anon_sym_LF,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(123), 23,
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
  [4070] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_AMP_AMP,
    ACTIONS(301), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(155), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(439), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(159), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(163), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(161), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [4122] = 11,
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
    ACTIONS(443), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(441), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(123), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [4170] = 11,
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
    ACTIONS(447), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(445), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(120), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [4218] = 11,
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
    ACTIONS(451), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(449), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(116), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [4266] = 11,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_LBRACK,
    ACTIONS(359), 1,
      anon_sym_QMARK,
    ACTIONS(361), 1,
      anon_sym_DOT,
    ACTIONS(383), 1,
      anon_sym_AMP_AMP,
    ACTIONS(385), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(453), 1,
      anon_sym_LF,
    ACTIONS(455), 1,
      anon_sym_RBRACE,
    ACTIONS(377), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(381), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(355), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [4314] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_null,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_typeof,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(459), 1,
      sym_float_literal,
    ACTIONS(233), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(457), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(35), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [4362] = 11,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_LBRACK,
    ACTIONS(359), 1,
      anon_sym_QMARK,
    ACTIONS(361), 1,
      anon_sym_DOT,
    ACTIONS(383), 1,
      anon_sym_AMP_AMP,
    ACTIONS(385), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(461), 1,
      anon_sym_LF,
    ACTIONS(463), 1,
      anon_sym_RBRACE,
    ACTIONS(377), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(381), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(355), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [4410] = 3,
    ACTIONS(129), 1,
      anon_sym_LF,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(131), 23,
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
  [4442] = 11,
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
    STATE(75), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [4490] = 3,
    ACTIONS(141), 1,
      anon_sym_LF,
    ACTIONS(153), 1,
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
  [4522] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_null,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(369), 1,
      sym_float_literal,
    ACTIONS(421), 1,
      sym_identifier,
    ACTIONS(425), 1,
      anon_sym_typeof,
    ACTIONS(367), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    ACTIONS(423), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(12), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [4570] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_null,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_typeof,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(471), 1,
      sym_float_literal,
    ACTIONS(233), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(469), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(140), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [4618] = 3,
    ACTIONS(55), 1,
      anon_sym_LF,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(57), 23,
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
  [4650] = 3,
    ACTIONS(125), 1,
      anon_sym_LF,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(127), 23,
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
  [4682] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_null,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_typeof,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(475), 1,
      sym_float_literal,
    ACTIONS(233), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(473), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(95), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [4730] = 11,
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
    STATE(99), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [4778] = 11,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_LBRACK,
    ACTIONS(359), 1,
      anon_sym_QMARK,
    ACTIONS(361), 1,
      anon_sym_DOT,
    ACTIONS(383), 1,
      anon_sym_AMP_AMP,
    ACTIONS(385), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(481), 1,
      anon_sym_LF,
    ACTIONS(483), 1,
      anon_sym_RBRACE,
    ACTIONS(377), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(381), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(355), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [4826] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_null,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(353), 1,
      sym_float_literal,
    ACTIONS(421), 1,
      sym_identifier,
    ACTIONS(425), 1,
      anon_sym_typeof,
    ACTIONS(351), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    ACTIONS(423), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(18), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [4874] = 11,
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
    STATE(101), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [4922] = 3,
    ACTIONS(113), 1,
      anon_sym_LF,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(115), 23,
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
  [4954] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_AMP_AMP,
    ACTIONS(301), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(155), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(489), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(159), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(163), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(161), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5006] = 10,
    ACTIONS(101), 1,
      anon_sym_LF,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_LBRACK,
    ACTIONS(359), 1,
      anon_sym_QMARK,
    ACTIONS(361), 1,
      anon_sym_DOT,
    ACTIONS(383), 1,
      anon_sym_AMP_AMP,
    ACTIONS(103), 2,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
    ACTIONS(377), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(381), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(355), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5052] = 3,
    ACTIONS(81), 1,
      anon_sym_LF,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(83), 23,
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
  [5084] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_null,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_typeof,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(493), 1,
      sym_float_literal,
    ACTIONS(233), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(491), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(115), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [5132] = 3,
    ACTIONS(85), 1,
      anon_sym_LF,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(87), 23,
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
  [5164] = 9,
    ACTIONS(101), 1,
      anon_sym_LF,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_LBRACK,
    ACTIONS(359), 1,
      anon_sym_QMARK,
    ACTIONS(361), 1,
      anon_sym_DOT,
    ACTIONS(103), 3,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(377), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(381), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(355), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5208] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_null,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(421), 1,
      sym_identifier,
    ACTIONS(425), 1,
      anon_sym_typeof,
    ACTIONS(497), 1,
      sym_float_literal,
    ACTIONS(423), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(495), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(145), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [5256] = 11,
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
    ACTIONS(501), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(499), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(111), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [5304] = 8,
    ACTIONS(101), 1,
      anon_sym_LF,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_LBRACK,
    ACTIONS(359), 1,
      anon_sym_QMARK,
    ACTIONS(361), 1,
      anon_sym_DOT,
    ACTIONS(377), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(355), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(103), 9,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5346] = 3,
    ACTIONS(109), 1,
      anon_sym_LF,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(111), 23,
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
  [5378] = 3,
    ACTIONS(89), 1,
      anon_sym_LF,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(91), 23,
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
  [5410] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_null,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(421), 1,
      sym_identifier,
    ACTIONS(425), 1,
      anon_sym_typeof,
    ACTIONS(505), 1,
      sym_float_literal,
    ACTIONS(423), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(503), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(137), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [5458] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_null,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(421), 1,
      sym_identifier,
    ACTIONS(425), 1,
      anon_sym_typeof,
    ACTIONS(509), 1,
      sym_float_literal,
    ACTIONS(423), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(507), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(138), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [5506] = 3,
    ACTIONS(93), 1,
      anon_sym_LF,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(95), 23,
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
  [5538] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_null,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(421), 1,
      sym_identifier,
    ACTIONS(425), 1,
      anon_sym_typeof,
    ACTIONS(513), 1,
      sym_float_literal,
    ACTIONS(423), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(511), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(144), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [5586] = 3,
    ACTIONS(97), 1,
      anon_sym_LF,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(99), 23,
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
  [5618] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_null,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_typeof,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(517), 1,
      sym_float_literal,
    ACTIONS(233), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(515), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(147), 11,
      sym_array_expression,
      sym_slice_expression,
      sym_selector_expression,
      sym_function_call,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_interpreted_string_literal,
      sym_struct_initialization,
      sym_null,
  [5666] = 6,
    ACTIONS(101), 1,
      anon_sym_LF,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_LBRACK,
    ACTIONS(359), 1,
      anon_sym_QMARK,
    ACTIONS(361), 1,
      anon_sym_DOT,
    ACTIONS(103), 20,
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
  [5704] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_AMP_AMP,
    ACTIONS(301), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(519), 1,
      anon_sym_COLON,
    ACTIONS(155), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(163), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(161), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5755] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_AMP_AMP,
    ACTIONS(301), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(521), 1,
      anon_sym_RBRACK,
    ACTIONS(155), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(163), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(161), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5806] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_AMP_AMP,
    ACTIONS(301), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(523), 1,
      anon_sym_COLON,
    ACTIONS(155), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(163), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(161), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5857] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_AMP_AMP,
    ACTIONS(301), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(525), 1,
      anon_sym_RBRACK,
    ACTIONS(155), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(163), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(161), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5908] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(401), 1,
      anon_sym_PIPE,
    ACTIONS(103), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(399), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(403), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(405), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(101), 7,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5953] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(401), 1,
      anon_sym_PIPE,
    ACTIONS(399), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(409), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 3,
      anon_sym_LBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(403), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(407), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(405), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [6000] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_AMP_AMP,
    ACTIONS(301), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(527), 1,
      anon_sym_RBRACK,
    ACTIONS(155), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(163), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(161), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [6051] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_AMP_AMP,
    ACTIONS(301), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(529), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(163), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(161), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [6102] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_AMP_AMP,
    ACTIONS(301), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(531), 1,
      anon_sym_RBRACK,
    ACTIONS(155), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(163), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(161), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [6153] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_AMP_AMP,
    ACTIONS(301), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(533), 1,
      anon_sym_RBRACK,
    ACTIONS(155), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(163), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(161), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [6204] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_AMP_AMP,
    ACTIONS(301), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(535), 1,
      anon_sym_RBRACE,
    ACTIONS(155), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(163), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(161), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [6255] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(401), 1,
      anon_sym_PIPE,
    ACTIONS(411), 1,
      anon_sym_AMP_AMP,
    ACTIONS(101), 2,
      anon_sym_LBRACE,
      anon_sym_PIPE_PIPE,
    ACTIONS(399), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(409), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(403), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(407), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(405), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [6304] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(399), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(103), 3,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(405), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(101), 10,
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
  [6345] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_AMP_AMP,
    ACTIONS(301), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(537), 1,
      anon_sym_RBRACK,
    ACTIONS(155), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(163), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(161), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [6396] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_AMP_AMP,
    ACTIONS(301), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(539), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(163), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(161), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [6447] = 3,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_LF,
    ACTIONS(541), 19,
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
  [6475] = 3,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_LF,
    ACTIONS(545), 19,
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
  [6503] = 3,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_LF,
    ACTIONS(549), 19,
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
  [6531] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 3,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_LBRACE,
    ACTIONS(553), 16,
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
  [6558] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 3,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_LBRACE,
    ACTIONS(557), 16,
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
  [6585] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 3,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_LBRACE,
    ACTIONS(561), 16,
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
  [6612] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      ts_builtin_sym_end,
    ACTIONS(567), 1,
      anon_sym_fun,
    ACTIONS(570), 1,
      anon_sym_struct,
    ACTIONS(573), 1,
      anon_sym_interface,
    STATE(154), 2,
      sym__definition,
      aux_sym_source_file_repeat1,
    STATE(274), 3,
      sym_function_definition,
      sym_struct_definition,
      sym_interface_definition,
  [6637] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_fun,
    ACTIONS(9), 1,
      anon_sym_struct,
    ACTIONS(11), 1,
      anon_sym_interface,
    ACTIONS(576), 1,
      ts_builtin_sym_end,
    STATE(154), 2,
      sym__definition,
      aux_sym_source_file_repeat1,
    STATE(274), 3,
      sym_function_definition,
      sym_struct_definition,
      sym_interface_definition,
  [6662] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      sym_identifier,
    ACTIONS(580), 1,
      anon_sym_mut,
    ACTIONS(582), 1,
      anon_sym_RPAREN,
    ACTIONS(584), 1,
      anon_sym_AMP,
    ACTIONS(586), 1,
      anon_sym_self,
    STATE(230), 2,
      sym_parameter,
      sym_self_parameter,
  [6685] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_PIPE,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
    ACTIONS(588), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [6701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
    ACTIONS(594), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [6715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [6727] = 6,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    STATE(160), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(183), 1,
      sym_embetted_expr,
    ACTIONS(603), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [6747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [6759] = 6,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_LBRACE,
    ACTIONS(610), 1,
      anon_sym_DQUOTE,
    STATE(160), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(183), 1,
      sym_embetted_expr,
    ACTIONS(612), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [6779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [6791] = 6,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_LBRACE,
    ACTIONS(616), 1,
      anon_sym_DQUOTE,
    STATE(160), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(183), 1,
      sym_embetted_expr,
    ACTIONS(612), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [6811] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_AMP,
    ACTIONS(618), 1,
      anon_sym_mut,
    ACTIONS(620), 1,
      anon_sym_LPAREN,
    ACTIONS(622), 1,
      anon_sym_self,
    STATE(32), 1,
      sym_self_parameter_list,
    STATE(245), 1,
      sym_self_parameter,
  [6833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [6845] = 6,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_LBRACE,
    ACTIONS(626), 1,
      anon_sym_DQUOTE,
    STATE(164), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(183), 1,
      sym_embetted_expr,
    ACTIONS(628), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [6865] = 6,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_LBRACE,
    ACTIONS(630), 1,
      anon_sym_DQUOTE,
    STATE(162), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(183), 1,
      sym_embetted_expr,
    ACTIONS(632), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [6885] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_PIPE,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
    ACTIONS(634), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6899] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      sym_identifier,
    ACTIONS(638), 1,
      anon_sym_RBRACE,
    STATE(241), 2,
      sym__interface_body,
      sym_method_spec,
  [6913] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_COMMA,
    ACTIONS(642), 1,
      anon_sym_RBRACE,
    ACTIONS(644), 1,
      anon_sym_EQ,
    STATE(226), 1,
      aux_sym_struct_initialization_repeat1,
  [6929] = 3,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_LF,
    ACTIONS(646), 3,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [6941] = 5,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_LF,
    ACTIONS(650), 1,
      anon_sym_PIPE,
    ACTIONS(652), 1,
      anon_sym_LBRACK,
    ACTIONS(654), 1,
      anon_sym_RBRACE,
  [6957] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      sym_identifier,
    ACTIONS(656), 1,
      anon_sym_RBRACE,
    STATE(232), 2,
      sym__interface_body,
      sym_method_spec,
  [6971] = 3,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_LF,
    ACTIONS(658), 3,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [6983] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(590), 1,
      anon_sym_PIPE,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
    STATE(268), 1,
      sym_block,
  [6999] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(660), 1,
      anon_sym_if,
    STATE(244), 2,
      sym_block,
      sym_if_statement,
  [7013] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      sym_identifier,
    ACTIONS(664), 1,
      anon_sym_COMMA,
    ACTIONS(666), 1,
      anon_sym_RBRACE,
    STATE(193), 1,
      sym_keyed_element,
  [7029] = 3,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(668), 2,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
    ACTIONS(670), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [7041] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      sym_identifier,
    ACTIONS(672), 1,
      anon_sym_RBRACE,
    STATE(241), 2,
      sym__interface_body,
      sym_method_spec,
  [7055] = 5,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_PIPE,
    ACTIONS(652), 1,
      anon_sym_LBRACK,
    ACTIONS(674), 1,
      anon_sym_LF,
    ACTIONS(676), 1,
      anon_sym_RBRACE,
  [7071] = 5,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_LF,
    ACTIONS(650), 1,
      anon_sym_PIPE,
    ACTIONS(652), 1,
      anon_sym_LBRACK,
    ACTIONS(678), 1,
      anon_sym_RBRACE,
  [7087] = 3,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(680), 2,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
    ACTIONS(682), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [7099] = 3,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_LF,
    ACTIONS(684), 3,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [7111] = 5,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_PIPE,
    ACTIONS(652), 1,
      anon_sym_LBRACK,
    ACTIONS(686), 1,
      anon_sym_LF,
    ACTIONS(688), 1,
      anon_sym_RBRACE,
  [7127] = 3,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_LF,
    ACTIONS(690), 3,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [7139] = 4,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_LF,
    ACTIONS(652), 1,
      anon_sym_LBRACK,
    ACTIONS(692), 2,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [7153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 4,
      ts_builtin_sym_end,
      anon_sym_fun,
      anon_sym_struct,
      anon_sym_interface,
  [7163] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_PIPE,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
    ACTIONS(696), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7177] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      anon_sym_EQ,
    ACTIONS(698), 1,
      anon_sym_COMMA,
    ACTIONS(700), 1,
      anon_sym_RBRACE,
    STATE(214), 1,
      aux_sym_struct_initialization_repeat1,
  [7193] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      sym_identifier,
    ACTIONS(704), 1,
      anon_sym_COMMA,
    ACTIONS(706), 1,
      anon_sym_RBRACE,
    STATE(206), 1,
      sym_keyed_element,
  [7209] = 4,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_LF,
    ACTIONS(711), 1,
      anon_sym_RBRACE,
    STATE(192), 1,
      aux_sym_field_definition_list_repeat1,
  [7222] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_COMMA,
    ACTIONS(700), 1,
      anon_sym_RBRACE,
    STATE(214), 1,
      aux_sym_struct_initialization_repeat1,
  [7235] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_COMMA,
    ACTIONS(716), 1,
      anon_sym_RPAREN,
    STATE(194), 1,
      aux_sym_argument_list_repeat1,
  [7248] = 4,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_LF,
    ACTIONS(721), 1,
      anon_sym_RBRACE,
    STATE(195), 1,
      aux_sym__statement_list_repeat1,
  [7261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      anon_sym_EQ,
    ACTIONS(723), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [7272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 3,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7281] = 4,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_LF,
    ACTIONS(729), 1,
      anon_sym_RBRACE,
    STATE(195), 1,
      aux_sym__statement_list_repeat1,
  [7294] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      sym_identifier,
    ACTIONS(733), 1,
      anon_sym_RBRACE,
    STATE(248), 1,
      sym_keyed_element,
  [7307] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym_RBRACE,
    ACTIONS(735), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_struct_initialization_repeat1,
  [7320] = 3,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_LF,
    ACTIONS(740), 2,
      anon_sym_RBRACE,
      anon_sym_else,
  [7331] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_COMMA,
    ACTIONS(744), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      aux_sym_parameter_list_repeat1,
  [7344] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_COMMA,
    ACTIONS(749), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      aux_sym_parameter_list_repeat1,
  [7357] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      sym_identifier,
    ACTIONS(753), 1,
      anon_sym_RPAREN,
    STATE(223), 1,
      sym_parameter,
  [7370] = 4,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_LF,
    ACTIONS(757), 1,
      anon_sym_RBRACE,
    STATE(210), 1,
      aux_sym_interface_definition_repeat1,
  [7383] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_COMMA,
    ACTIONS(642), 1,
      anon_sym_RBRACE,
    STATE(226), 1,
      aux_sym_struct_initialization_repeat1,
  [7396] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      sym_identifier,
    ACTIONS(759), 1,
      anon_sym_RBRACE,
    STATE(248), 1,
      sym_keyed_element,
  [7409] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      sym_identifier,
    ACTIONS(763), 1,
      anon_sym_RBRACE,
    STATE(235), 1,
      sym_field_definition,
  [7422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 3,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7431] = 4,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_LF,
    ACTIONS(770), 1,
      anon_sym_RBRACE,
    STATE(210), 1,
      aux_sym_interface_definition_repeat1,
  [7444] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_PIPE,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
    ACTIONS(772), 1,
      anon_sym_RPAREN,
  [7457] = 4,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_LF,
    ACTIONS(776), 1,
      anon_sym_RBRACE,
    ACTIONS(778), 1,
      anon_sym_else,
  [7470] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      sym_identifier,
    STATE(241), 2,
      sym__interface_body,
      sym_method_spec,
  [7481] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_COMMA,
    ACTIONS(782), 1,
      anon_sym_RBRACE,
    STATE(200), 1,
      aux_sym_struct_initialization_repeat1,
  [7494] = 4,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_LF,
    ACTIONS(786), 1,
      anon_sym_RBRACE,
    STATE(192), 1,
      aux_sym_field_definition_list_repeat1,
  [7507] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      sym_identifier,
    ACTIONS(782), 1,
      anon_sym_RBRACE,
    STATE(248), 1,
      sym_keyed_element,
  [7520] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      sym_identifier,
    ACTIONS(788), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      sym_field_definition,
  [7533] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      sym_identifier,
    ACTIONS(790), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      sym_field_definition,
  [7546] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_COMMA,
    ACTIONS(792), 1,
      anon_sym_RPAREN,
    STATE(194), 1,
      aux_sym_argument_list_repeat1,
  [7559] = 4,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_LF,
    ACTIONS(796), 1,
      anon_sym_RBRACE,
    STATE(198), 1,
      aux_sym__statement_list_repeat1,
  [7572] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_COMMA,
    ACTIONS(801), 1,
      anon_sym_RBRACK,
    STATE(221), 1,
      aux_sym_array_expression_repeat1,
  [7585] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_PIPE,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
    ACTIONS(803), 1,
      anon_sym_EQ,
  [7598] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_COMMA,
    ACTIONS(805), 1,
      anon_sym_RPAREN,
    STATE(228), 1,
      aux_sym_parameter_list_repeat1,
  [7611] = 3,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_LF,
    ACTIONS(809), 2,
      anon_sym_RBRACE,
      anon_sym_else,
  [7622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 3,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7631] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_COMMA,
    ACTIONS(815), 1,
      anon_sym_RBRACE,
    STATE(200), 1,
      aux_sym_struct_initialization_repeat1,
  [7644] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_PIPE,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
    ACTIONS(817), 1,
      anon_sym_RPAREN,
  [7657] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_COMMA,
    ACTIONS(819), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      aux_sym_parameter_list_repeat1,
  [7670] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    ACTIONS(821), 1,
      anon_sym_RBRACK,
    STATE(221), 1,
      aux_sym_array_expression_repeat1,
  [7683] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_COMMA,
    ACTIONS(823), 1,
      anon_sym_RPAREN,
    STATE(202), 1,
      aux_sym_parameter_list_repeat1,
  [7696] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      sym_identifier,
    ACTIONS(815), 1,
      anon_sym_RBRACE,
    STATE(248), 1,
      sym_keyed_element,
  [7709] = 4,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_LF,
    ACTIONS(827), 1,
      anon_sym_RBRACE,
    STATE(205), 1,
      aux_sym_interface_definition_repeat1,
  [7722] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_COMMA,
    ACTIONS(829), 1,
      anon_sym_RPAREN,
    STATE(194), 1,
      aux_sym_argument_list_repeat1,
  [7735] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_PIPE,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
    ACTIONS(831), 1,
      anon_sym_EQ,
  [7748] = 4,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_LF,
    ACTIONS(835), 1,
      anon_sym_RBRACE,
    STATE(215), 1,
      aux_sym_field_definition_list_repeat1,
  [7761] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    ACTIONS(837), 1,
      anon_sym_RBRACK,
    STATE(221), 1,
      aux_sym_array_expression_repeat1,
  [7774] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      sym_identifier,
    STATE(246), 1,
      sym_parameter,
  [7784] = 3,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_RBRACE,
    ACTIONS(839), 1,
      anon_sym_LF,
  [7794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_LBRACE,
    STATE(252), 1,
      sym_field_definition_list,
  [7804] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      sym_identifier,
    STATE(243), 1,
      sym_field_definition,
  [7814] = 3,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_RBRACE,
    ACTIONS(843), 1,
      anon_sym_LF,
  [7824] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_parameter_list,
  [7834] = 3,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_LF,
    ACTIONS(849), 1,
      anon_sym_RBRACE,
  [7844] = 3,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_LF,
    ACTIONS(853), 1,
      anon_sym_RBRACE,
  [7854] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym_self_parameter_list,
  [7864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      sym_identifier,
    STATE(248), 1,
      sym_keyed_element,
  [7882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [7890] = 2,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(855), 1,
      anon_sym_LF,
  [7897] = 2,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_LF,
  [7904] = 2,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_LF,
  [7911] = 2,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(861), 1,
      anon_sym_LF,
  [7918] = 2,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_LF,
  [7925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      sym_identifier,
  [7932] = 2,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(867), 1,
      anon_sym_LF,
  [7939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_LBRACE,
  [7946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_DOT,
  [7953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      sym_identifier,
  [7960] = 2,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_LF,
  [7967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      sym_identifier,
  [7974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_self,
  [7981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_RBRACE,
  [7988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      sym_identifier,
  [7995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      sym_identifier,
  [8002] = 2,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(885), 1,
      anon_sym_LF,
  [8009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      sym_identifier,
  [8016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_RBRACE,
  [8023] = 2,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_LF,
  [8030] = 2,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_LF,
  [8037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      anon_sym_AMP,
  [8044] = 2,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_LF,
  [8051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_self,
  [8058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_RBRACE,
  [8065] = 2,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(901), 1,
      anon_sym_LF,
  [8072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      ts_builtin_sym_end,
  [8079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      sym_identifier,
  [8086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      sym_identifier,
  [8093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      anon_sym_DOT,
  [8100] = 2,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 70,
  [SMALL_STATE(4)] = 137,
  [SMALL_STATE(5)] = 204,
  [SMALL_STATE(6)] = 268,
  [SMALL_STATE(7)] = 312,
  [SMALL_STATE(8)] = 348,
  [SMALL_STATE(9)] = 384,
  [SMALL_STATE(10)] = 420,
  [SMALL_STATE(11)] = 456,
  [SMALL_STATE(12)] = 492,
  [SMALL_STATE(13)] = 534,
  [SMALL_STATE(14)] = 570,
  [SMALL_STATE(15)] = 606,
  [SMALL_STATE(16)] = 642,
  [SMALL_STATE(17)] = 678,
  [SMALL_STATE(18)] = 714,
  [SMALL_STATE(19)] = 756,
  [SMALL_STATE(20)] = 792,
  [SMALL_STATE(21)] = 828,
  [SMALL_STATE(22)] = 864,
  [SMALL_STATE(23)] = 900,
  [SMALL_STATE(24)] = 936,
  [SMALL_STATE(25)] = 972,
  [SMALL_STATE(26)] = 1008,
  [SMALL_STATE(27)] = 1044,
  [SMALL_STATE(28)] = 1080,
  [SMALL_STATE(29)] = 1116,
  [SMALL_STATE(30)] = 1152,
  [SMALL_STATE(31)] = 1193,
  [SMALL_STATE(32)] = 1246,
  [SMALL_STATE(33)] = 1291,
  [SMALL_STATE(34)] = 1336,
  [SMALL_STATE(35)] = 1381,
  [SMALL_STATE(36)] = 1426,
  [SMALL_STATE(37)] = 1475,
  [SMALL_STATE(38)] = 1526,
  [SMALL_STATE(39)] = 1571,
  [SMALL_STATE(40)] = 1613,
  [SMALL_STATE(41)] = 1663,
  [SMALL_STATE(42)] = 1705,
  [SMALL_STATE(43)] = 1744,
  [SMALL_STATE(44)] = 1795,
  [SMALL_STATE(45)] = 1846,
  [SMALL_STATE(46)] = 1897,
  [SMALL_STATE(47)] = 1948,
  [SMALL_STATE(48)] = 1987,
  [SMALL_STATE(49)] = 2038,
  [SMALL_STATE(50)] = 2077,
  [SMALL_STATE(51)] = 2116,
  [SMALL_STATE(52)] = 2167,
  [SMALL_STATE(53)] = 2206,
  [SMALL_STATE(54)] = 2245,
  [SMALL_STATE(55)] = 2296,
  [SMALL_STATE(56)] = 2335,
  [SMALL_STATE(57)] = 2392,
  [SMALL_STATE(58)] = 2431,
  [SMALL_STATE(59)] = 2468,
  [SMALL_STATE(60)] = 2525,
  [SMALL_STATE(61)] = 2576,
  [SMALL_STATE(62)] = 2633,
  [SMALL_STATE(63)] = 2684,
  [SMALL_STATE(64)] = 2741,
  [SMALL_STATE(65)] = 2792,
  [SMALL_STATE(66)] = 2843,
  [SMALL_STATE(67)] = 2894,
  [SMALL_STATE(68)] = 2942,
  [SMALL_STATE(69)] = 2990,
  [SMALL_STATE(70)] = 3038,
  [SMALL_STATE(71)] = 3078,
  [SMALL_STATE(72)] = 3126,
  [SMALL_STATE(73)] = 3174,
  [SMALL_STATE(74)] = 3206,
  [SMALL_STATE(75)] = 3238,
  [SMALL_STATE(76)] = 3276,
  [SMALL_STATE(77)] = 3308,
  [SMALL_STATE(78)] = 3356,
  [SMALL_STATE(79)] = 3404,
  [SMALL_STATE(80)] = 3452,
  [SMALL_STATE(81)] = 3500,
  [SMALL_STATE(82)] = 3532,
  [SMALL_STATE(83)] = 3580,
  [SMALL_STATE(84)] = 3612,
  [SMALL_STATE(85)] = 3666,
  [SMALL_STATE(86)] = 3714,
  [SMALL_STATE(87)] = 3746,
  [SMALL_STATE(88)] = 3778,
  [SMALL_STATE(89)] = 3830,
  [SMALL_STATE(90)] = 3878,
  [SMALL_STATE(91)] = 3910,
  [SMALL_STATE(92)] = 3958,
  [SMALL_STATE(93)] = 4006,
  [SMALL_STATE(94)] = 4038,
  [SMALL_STATE(95)] = 4070,
  [SMALL_STATE(96)] = 4122,
  [SMALL_STATE(97)] = 4170,
  [SMALL_STATE(98)] = 4218,
  [SMALL_STATE(99)] = 4266,
  [SMALL_STATE(100)] = 4314,
  [SMALL_STATE(101)] = 4362,
  [SMALL_STATE(102)] = 4410,
  [SMALL_STATE(103)] = 4442,
  [SMALL_STATE(104)] = 4490,
  [SMALL_STATE(105)] = 4522,
  [SMALL_STATE(106)] = 4570,
  [SMALL_STATE(107)] = 4618,
  [SMALL_STATE(108)] = 4650,
  [SMALL_STATE(109)] = 4682,
  [SMALL_STATE(110)] = 4730,
  [SMALL_STATE(111)] = 4778,
  [SMALL_STATE(112)] = 4826,
  [SMALL_STATE(113)] = 4874,
  [SMALL_STATE(114)] = 4922,
  [SMALL_STATE(115)] = 4954,
  [SMALL_STATE(116)] = 5006,
  [SMALL_STATE(117)] = 5052,
  [SMALL_STATE(118)] = 5084,
  [SMALL_STATE(119)] = 5132,
  [SMALL_STATE(120)] = 5164,
  [SMALL_STATE(121)] = 5208,
  [SMALL_STATE(122)] = 5256,
  [SMALL_STATE(123)] = 5304,
  [SMALL_STATE(124)] = 5346,
  [SMALL_STATE(125)] = 5378,
  [SMALL_STATE(126)] = 5410,
  [SMALL_STATE(127)] = 5458,
  [SMALL_STATE(128)] = 5506,
  [SMALL_STATE(129)] = 5538,
  [SMALL_STATE(130)] = 5586,
  [SMALL_STATE(131)] = 5618,
  [SMALL_STATE(132)] = 5666,
  [SMALL_STATE(133)] = 5704,
  [SMALL_STATE(134)] = 5755,
  [SMALL_STATE(135)] = 5806,
  [SMALL_STATE(136)] = 5857,
  [SMALL_STATE(137)] = 5908,
  [SMALL_STATE(138)] = 5953,
  [SMALL_STATE(139)] = 6000,
  [SMALL_STATE(140)] = 6051,
  [SMALL_STATE(141)] = 6102,
  [SMALL_STATE(142)] = 6153,
  [SMALL_STATE(143)] = 6204,
  [SMALL_STATE(144)] = 6255,
  [SMALL_STATE(145)] = 6304,
  [SMALL_STATE(146)] = 6345,
  [SMALL_STATE(147)] = 6396,
  [SMALL_STATE(148)] = 6447,
  [SMALL_STATE(149)] = 6475,
  [SMALL_STATE(150)] = 6503,
  [SMALL_STATE(151)] = 6531,
  [SMALL_STATE(152)] = 6558,
  [SMALL_STATE(153)] = 6585,
  [SMALL_STATE(154)] = 6612,
  [SMALL_STATE(155)] = 6637,
  [SMALL_STATE(156)] = 6662,
  [SMALL_STATE(157)] = 6685,
  [SMALL_STATE(158)] = 6701,
  [SMALL_STATE(159)] = 6715,
  [SMALL_STATE(160)] = 6727,
  [SMALL_STATE(161)] = 6747,
  [SMALL_STATE(162)] = 6759,
  [SMALL_STATE(163)] = 6779,
  [SMALL_STATE(164)] = 6791,
  [SMALL_STATE(165)] = 6811,
  [SMALL_STATE(166)] = 6833,
  [SMALL_STATE(167)] = 6845,
  [SMALL_STATE(168)] = 6865,
  [SMALL_STATE(169)] = 6885,
  [SMALL_STATE(170)] = 6899,
  [SMALL_STATE(171)] = 6913,
  [SMALL_STATE(172)] = 6929,
  [SMALL_STATE(173)] = 6941,
  [SMALL_STATE(174)] = 6957,
  [SMALL_STATE(175)] = 6971,
  [SMALL_STATE(176)] = 6983,
  [SMALL_STATE(177)] = 6999,
  [SMALL_STATE(178)] = 7013,
  [SMALL_STATE(179)] = 7029,
  [SMALL_STATE(180)] = 7041,
  [SMALL_STATE(181)] = 7055,
  [SMALL_STATE(182)] = 7071,
  [SMALL_STATE(183)] = 7087,
  [SMALL_STATE(184)] = 7099,
  [SMALL_STATE(185)] = 7111,
  [SMALL_STATE(186)] = 7127,
  [SMALL_STATE(187)] = 7139,
  [SMALL_STATE(188)] = 7153,
  [SMALL_STATE(189)] = 7163,
  [SMALL_STATE(190)] = 7177,
  [SMALL_STATE(191)] = 7193,
  [SMALL_STATE(192)] = 7209,
  [SMALL_STATE(193)] = 7222,
  [SMALL_STATE(194)] = 7235,
  [SMALL_STATE(195)] = 7248,
  [SMALL_STATE(196)] = 7261,
  [SMALL_STATE(197)] = 7272,
  [SMALL_STATE(198)] = 7281,
  [SMALL_STATE(199)] = 7294,
  [SMALL_STATE(200)] = 7307,
  [SMALL_STATE(201)] = 7320,
  [SMALL_STATE(202)] = 7331,
  [SMALL_STATE(203)] = 7344,
  [SMALL_STATE(204)] = 7357,
  [SMALL_STATE(205)] = 7370,
  [SMALL_STATE(206)] = 7383,
  [SMALL_STATE(207)] = 7396,
  [SMALL_STATE(208)] = 7409,
  [SMALL_STATE(209)] = 7422,
  [SMALL_STATE(210)] = 7431,
  [SMALL_STATE(211)] = 7444,
  [SMALL_STATE(212)] = 7457,
  [SMALL_STATE(213)] = 7470,
  [SMALL_STATE(214)] = 7481,
  [SMALL_STATE(215)] = 7494,
  [SMALL_STATE(216)] = 7507,
  [SMALL_STATE(217)] = 7520,
  [SMALL_STATE(218)] = 7533,
  [SMALL_STATE(219)] = 7546,
  [SMALL_STATE(220)] = 7559,
  [SMALL_STATE(221)] = 7572,
  [SMALL_STATE(222)] = 7585,
  [SMALL_STATE(223)] = 7598,
  [SMALL_STATE(224)] = 7611,
  [SMALL_STATE(225)] = 7622,
  [SMALL_STATE(226)] = 7631,
  [SMALL_STATE(227)] = 7644,
  [SMALL_STATE(228)] = 7657,
  [SMALL_STATE(229)] = 7670,
  [SMALL_STATE(230)] = 7683,
  [SMALL_STATE(231)] = 7696,
  [SMALL_STATE(232)] = 7709,
  [SMALL_STATE(233)] = 7722,
  [SMALL_STATE(234)] = 7735,
  [SMALL_STATE(235)] = 7748,
  [SMALL_STATE(236)] = 7761,
  [SMALL_STATE(237)] = 7774,
  [SMALL_STATE(238)] = 7784,
  [SMALL_STATE(239)] = 7794,
  [SMALL_STATE(240)] = 7804,
  [SMALL_STATE(241)] = 7814,
  [SMALL_STATE(242)] = 7824,
  [SMALL_STATE(243)] = 7834,
  [SMALL_STATE(244)] = 7844,
  [SMALL_STATE(245)] = 7854,
  [SMALL_STATE(246)] = 7864,
  [SMALL_STATE(247)] = 7872,
  [SMALL_STATE(248)] = 7882,
  [SMALL_STATE(249)] = 7890,
  [SMALL_STATE(250)] = 7897,
  [SMALL_STATE(251)] = 7904,
  [SMALL_STATE(252)] = 7911,
  [SMALL_STATE(253)] = 7918,
  [SMALL_STATE(254)] = 7925,
  [SMALL_STATE(255)] = 7932,
  [SMALL_STATE(256)] = 7939,
  [SMALL_STATE(257)] = 7946,
  [SMALL_STATE(258)] = 7953,
  [SMALL_STATE(259)] = 7960,
  [SMALL_STATE(260)] = 7967,
  [SMALL_STATE(261)] = 7974,
  [SMALL_STATE(262)] = 7981,
  [SMALL_STATE(263)] = 7988,
  [SMALL_STATE(264)] = 7995,
  [SMALL_STATE(265)] = 8002,
  [SMALL_STATE(266)] = 8009,
  [SMALL_STATE(267)] = 8016,
  [SMALL_STATE(268)] = 8023,
  [SMALL_STATE(269)] = 8030,
  [SMALL_STATE(270)] = 8037,
  [SMALL_STATE(271)] = 8044,
  [SMALL_STATE(272)] = 8051,
  [SMALL_STATE(273)] = 8058,
  [SMALL_STATE(274)] = 8065,
  [SMALL_STATE(275)] = 8072,
  [SMALL_STATE(276)] = 8079,
  [SMALL_STATE(277)] = 8086,
  [SMALL_STATE(278)] = 8093,
  [SMALL_STATE(279)] = 8100,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_initialization, 4, .production_id = 26),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_initialization, 4, .production_id = 26),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 15),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 15),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 12),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 12),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, .production_id = 13),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, .production_id = 13),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 3, .production_id = 13),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 3, .production_id = 13),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 3, .production_id = 23),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 3, .production_id = 23),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_initialization, 3, .production_id = 26),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_initialization, 3, .production_id = 26),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 27),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 27),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_expression, 5, .production_id = 43),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_expression, 5, .production_id = 43),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 3, .production_id = 28),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 3, .production_id = 28),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 4, .production_id = 32),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 4, .production_id = 32),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_initialization, 5, .production_id = 26),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_initialization, 5, .production_id = 26),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4, .production_id = 41),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4, .production_id = 41),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3, .production_id = 35),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3, .production_id = 35),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 4, .production_id = 37),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 4, .production_id = 37),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_expression, 6, .production_id = 46),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_expression, 6, .production_id = 46),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_initialization, 6, .production_id = 26),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_initialization, 6, .production_id = 26),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_expression, 4, .production_id = 36),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_expression, 4, .production_id = 36),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_expression, 5, .production_id = 44),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_expression, 5, .production_id = 44),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_spec, 2, .production_id = 9),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_spec, 2, .production_id = 9),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_spec, 3, .production_id = 22),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_spec, 3, .production_id = 22),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 1),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, .production_id = 13),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2, .production_id = 13),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 6, .production_id = 45),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 6, .production_id = 45),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1, .production_id = 6),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1, .production_id = 6),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyed_element, 3),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 35),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 5, .production_id = 39),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 5, .production_id = 39),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 5, .production_id = 38),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 5, .production_id = 38),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 4, .production_id = 34),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 4, .production_id = 34),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_expression_repeat1, 2, .production_id = 13),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_parameter_list, 3),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter_list, 3),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_parameter_list, 2),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter_list, 2),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_parameter_list, 4),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter_list, 4),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 4),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [567] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(254),
  [570] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(277),
  [573] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(276),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sum_type, 3, .production_id = 16),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_type, 2, .production_id = 5),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_type, 3, .production_id = 11),
  [598] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2, .production_id = 24), SHIFT_REPEAT(80),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2, .production_id = 24),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2, .production_id = 24), SHIFT_REPEAT(160),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_type, 3, .production_id = 17),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 4, .production_id = 29),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 4),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 4, .production_id = 29),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 2, .production_id = 4),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_definition, 2, .production_id = 4),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_type, 3, .production_id = 17),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_embetted_expr, 3, .production_id = 13),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embetted_expr, 3, .production_id = 13),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_spec, 4, .production_id = 31),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_spec, 4, .production_id = 31),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sum_type, 3, .production_id = 16),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 1, .production_id = 14),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 1, .production_id = 14),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_type, 3, .production_id = 11),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_spec, 3, .production_id = 21),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_spec, 3, .production_id = 21),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_type, 2, .production_id = 5),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 2),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 10),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [708] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_definition_list_repeat1, 2, .production_id = 19), SHIFT_REPEAT(240),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_definition_list_repeat1, 2, .production_id = 19),
  [713] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 42), SHIFT_REPEAT(109),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 42),
  [718] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(5),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_initialization_repeat1, 2),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter, 3, .production_id = 30),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 2),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [735] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_initialization_repeat1, 2), SHIFT_REPEAT(247),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [746] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(237),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter, 1),
  [767] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(213),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_definition_repeat1, 2),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 25),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 25),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 1),
  [798] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_expression_repeat1, 2, .production_id = 33), SHIFT_REPEAT(118),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_expression_repeat1, 2, .production_id = 33),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [809] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter, 2, .production_id = 20),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_definition_list_repeat1, 2, .production_id = 8),
  [849] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_definition_list_repeat1, 2, .production_id = 8),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 40),
  [853] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 40),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 4, .production_id = 3),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 6, .production_id = 3),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 7, .production_id = 3),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 3, .production_id = 1),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 2),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition_list, 5, .production_id = 18),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition_list, 2),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition_list, 4, .production_id = 18),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 7),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition_list, 3, .production_id = 8),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition_list, 4, .production_id = 8),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [903] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 5, .production_id = 3),
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
