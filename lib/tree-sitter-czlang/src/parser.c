#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 282
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 119
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
  anon_sym_DOT = 28,
  anon_sym_QMARK_DOT = 29,
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
  sym_selector_field = 81,
  sym_selector_expression = 82,
  sym_block = 83,
  sym__statement_list = 84,
  sym__statement = 85,
  sym_expression_statement = 86,
  sym_return_statement = 87,
  sym_function_call = 88,
  sym_var_declaration = 89,
  sym__expression = 90,
  sym_parenthesized_expression = 91,
  sym_unary_expression = 92,
  sym_binary_expression = 93,
  sym_argument_list = 94,
  sym_interpreted_string_literal = 95,
  sym_embetted_expr = 96,
  sym_if_statement = 97,
  sym_struct_definition = 98,
  sym_field_definition_list = 99,
  sym_field_definition = 100,
  sym_interface_definition = 101,
  sym__interface_body = 102,
  sym_method_spec = 103,
  sym_self_parameter_list = 104,
  sym_self_parameter = 105,
  sym_keyed_element = 106,
  sym_struct_initialization = 107,
  sym_null = 108,
  aux_sym_source_file_repeat1 = 109,
  aux_sym_parameter_list_repeat1 = 110,
  aux_sym_array_expression_repeat1 = 111,
  aux_sym_selector_expression_repeat1 = 112,
  aux_sym__statement_list_repeat1 = 113,
  aux_sym_argument_list_repeat1 = 114,
  aux_sym_interpreted_string_literal_repeat1 = 115,
  aux_sym_field_definition_list_repeat1 = 116,
  aux_sym_interface_definition_repeat1 = 117,
  aux_sym_struct_initialization_repeat1 = 118,
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
  [anon_sym_DOT] = ".",
  [anon_sym_QMARK_DOT] = "\?.",
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
  [sym_selector_field] = "selector_field",
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
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_QMARK_DOT] = anon_sym_QMARK_DOT,
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
  [sym_selector_field] = sym_selector_field,
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
  [16] = {.index = 28, .length = 1},
  [17] = {.index = 29, .length = 2},
  [18] = {.index = 31, .length = 1},
  [19] = {.index = 32, .length = 2},
  [20] = {.index = 34, .length = 2},
  [21] = {.index = 36, .length = 1},
  [22] = {.index = 37, .length = 3},
  [23] = {.index = 40, .length = 3},
  [24] = {.index = 43, .length = 1},
  [25] = {.index = 44, .length = 2},
  [26] = {.index = 46, .length = 2},
  [27] = {.index = 48, .length = 1},
  [28] = {.index = 49, .length = 3},
  [29] = {.index = 52, .length = 2},
  [30] = {.index = 54, .length = 2},
  [31] = {.index = 56, .length = 2},
  [32] = {.index = 58, .length = 4},
  [33] = {.index = 62, .length = 2},
  [34] = {.index = 64, .length = 2},
  [35] = {.index = 66, .length = 3},
  [36] = {.index = 69, .length = 1},
  [37] = {.index = 70, .length = 4},
  [38] = {.index = 74, .length = 4},
  [39] = {.index = 78, .length = 3},
  [40] = {.index = 81, .length = 2},
  [41] = {.index = 83, .length = 2},
  [42] = {.index = 85, .length = 2},
  [43] = {.index = 87, .length = 2},
  [44] = {.index = 89, .length = 2},
  [45] = {.index = 91, .length = 5},
  [46] = {.index = 96, .length = 3},
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
    {field_operand, 0},
  [29] =
    {field_left, 0},
    {field_right, 2},
  [31] =
    {field_element, 0},
  [32] =
    {field_field, 1},
    {field_field, 2, .inherited = true},
  [34] =
    {field_field, 0, .inherited = true},
    {field_field, 1, .inherited = true},
  [36] =
    {field_reference, 0},
  [37] =
    {field_name, 0},
    {field_parameters, 1},
    {field_result, 2},
  [40] =
    {field_name, 0},
    {field_parameters, 2},
    {field_self, 1},
  [43] =
    {field_embetted_expr, 1, .inherited = true},
  [44] =
    {field_embetted_expr, 0, .inherited = true},
    {field_embetted_expr, 1, .inherited = true},
  [46] =
    {field_condition, 1},
    {field_consequence, 2},
  [48] =
    {field_name, 0},
  [49] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [52] =
    {field_chaining, 0},
    {field_field, 1},
  [54] =
    {field_element, 0},
    {field_length, 2},
  [56] =
    {field_mut_reference, 0},
    {field_mut_reference, 1},
  [58] =
    {field_name, 0},
    {field_parameters, 2},
    {field_result, 3},
    {field_self, 1},
  [62] =
    {field_expression, 1},
    {field_expression, 2, .inherited = true},
  [64] =
    {field_expression, 0, .inherited = true},
    {field_expression, 1, .inherited = true},
  [66] =
    {field_name, 1},
    {field_value, 3},
    {field_variable, 0},
  [69] =
    {field_argument, 1},
  [70] =
    {field_mutable, 2},
    {field_name, 1},
    {field_value, 4},
    {field_variable, 0},
  [74] =
    {field_name, 1},
    {field_type, 2},
    {field_value, 4},
    {field_variable, 0},
  [78] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequence, 2},
  [81] =
    {field_argument, 1},
    {field_argument, 2, .inherited = true},
  [83] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [85] =
    {field_field, 2},
    {field_name, 0},
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
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 9,
  [42] = 10,
  [43] = 43,
  [44] = 8,
  [45] = 45,
  [46] = 46,
  [47] = 43,
  [48] = 48,
  [49] = 6,
  [50] = 50,
  [51] = 7,
  [52] = 48,
  [53] = 53,
  [54] = 32,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 55,
  [59] = 59,
  [60] = 53,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 59,
  [71] = 31,
  [72] = 72,
  [73] = 34,
  [74] = 9,
  [75] = 11,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 57,
  [80] = 36,
  [81] = 12,
  [82] = 76,
  [83] = 66,
  [84] = 84,
  [85] = 67,
  [86] = 86,
  [87] = 87,
  [88] = 87,
  [89] = 77,
  [90] = 90,
  [91] = 91,
  [92] = 30,
  [93] = 21,
  [94] = 94,
  [95] = 91,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 90,
  [100] = 100,
  [101] = 101,
  [102] = 15,
  [103] = 103,
  [104] = 104,
  [105] = 103,
  [106] = 106,
  [107] = 16,
  [108] = 27,
  [109] = 104,
  [110] = 97,
  [111] = 111,
  [112] = 18,
  [113] = 113,
  [114] = 20,
  [115] = 100,
  [116] = 101,
  [117] = 117,
  [118] = 98,
  [119] = 13,
  [120] = 120,
  [121] = 24,
  [122] = 106,
  [123] = 123,
  [124] = 31,
  [125] = 125,
  [126] = 19,
  [127] = 25,
  [128] = 32,
  [129] = 22,
  [130] = 34,
  [131] = 28,
  [132] = 26,
  [133] = 36,
  [134] = 101,
  [135] = 100,
  [136] = 90,
  [137] = 98,
  [138] = 33,
  [139] = 139,
  [140] = 94,
  [141] = 23,
  [142] = 35,
  [143] = 113,
  [144] = 144,
  [145] = 97,
  [146] = 96,
  [147] = 14,
  [148] = 96,
  [149] = 17,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 29,
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
  [164] = 164,
  [165] = 165,
  [166] = 164,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 171,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 169,
  [178] = 165,
  [179] = 179,
  [180] = 168,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 182,
  [191] = 191,
  [192] = 192,
  [193] = 187,
  [194] = 163,
  [195] = 167,
  [196] = 170,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 203,
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
  [220] = 207,
  [221] = 208,
  [222] = 222,
  [223] = 223,
  [224] = 210,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 215,
  [230] = 222,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 212,
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
  [253] = 245,
  [254] = 254,
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
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 266,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
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
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == '*') ADVANCE(61);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == ',') ADVANCE(42);
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
      if (lookahead == '(') ADVANCE(41);
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
      if (lookahead == '(') ADVANCE(41);
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
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == ',') ADVANCE(42);
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
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == '*') ADVANCE(61);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == ',') ADVANCE(42);
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
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == '*') ADVANCE(61);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == ',') ADVANCE(42);
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
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COMMA);
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
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 3},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 4},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 3},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 3},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 4},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 1},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 1},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 4},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 1},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 4},
  [227] = {.lex_state = 1},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 1},
  [232] = {.lex_state = 4},
  [233] = {.lex_state = 1},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 1},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 1},
  [248] = {.lex_state = 1},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 1},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 1},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 1},
  [258] = {.lex_state = 1},
  [259] = {.lex_state = 1},
  [260] = {.lex_state = 1},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 1},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 1},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 1},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 1},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 4},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 1},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 1},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 1},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 1},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 1},
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
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_QMARK_DOT] = ACTIONS(1),
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
    [sym_source_file] = STATE(274),
    [sym__definition] = STATE(161),
    [sym_function_definition] = STATE(269),
    [sym_struct_definition] = STATE(269),
    [sym_interface_definition] = STATE(269),
    [aux_sym_source_file_repeat1] = STATE(161),
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
    STATE(272), 1,
      sym__statement_list,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(35), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(206), 5,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      sym_var_declaration,
      sym_if_statement,
    STATE(72), 11,
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
    STATE(247), 5,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      sym_var_declaration,
      sym_if_statement,
    STATE(72), 11,
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
    STATE(247), 5,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      sym_var_declaration,
      sym_if_statement,
    STATE(72), 11,
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
    STATE(247), 5,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      sym_var_declaration,
      sym_if_statement,
    STATE(72), 11,
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
  [268] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
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
  [310] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    STATE(10), 2,
      sym_selector_field,
      aux_sym_selector_expression_repeat1,
    ACTIONS(51), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
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
  [352] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    STATE(7), 2,
      sym_selector_field,
      aux_sym_selector_expression_repeat1,
    ACTIONS(57), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 21,
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
  [394] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_argument_list,
    ACTIONS(61), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 22,
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
  [438] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    STATE(10), 2,
      sym_selector_field,
      aux_sym_selector_expression_repeat1,
    ACTIONS(67), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 21,
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
  [480] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(74), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(72), 22,
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
  [521] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(80), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(78), 22,
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
  [562] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(82), 23,
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
  [598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(86), 23,
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
  [634] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [670] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [706] = 3,
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
  [742] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(102), 23,
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
  [778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(106), 23,
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
  [814] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(110), 23,
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
  [850] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(114), 23,
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
  [886] = 3,
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
  [922] = 3,
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
  [958] = 3,
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
  [994] = 3,
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
  [1030] = 3,
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
  [1066] = 3,
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
  [1102] = 3,
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
  [1138] = 3,
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
  [1174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(150), 23,
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
  [1210] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      anon_sym_PIPE,
    ACTIONS(166), 1,
      anon_sym_AMP_AMP,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(154), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(164), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(158), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(162), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(160), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(78), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
  [1262] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      anon_sym_PIPE,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(154), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(164), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(158), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(162), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(160), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(78), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1312] = 3,
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
  [1348] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      anon_sym_PIPE,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(80), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(154), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(158), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(160), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(78), 13,
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
  [1396] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [1432] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(154), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(80), 3,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(160), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(78), 16,
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
  [1476] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      sym_identifier,
    ACTIONS(174), 1,
      anon_sym_mut,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      anon_sym_AMP,
    ACTIONS(182), 1,
      anon_sym_EQ,
    STATE(232), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(180), 15,
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
  [1521] = 8,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(186), 1,
      anon_sym_LF,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_AMP,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    ACTIONS(196), 1,
      sym_comment,
    STATE(183), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(192), 15,
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
  [1566] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      anon_sym_AMP,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_LBRACE,
    STATE(275), 1,
      sym_block,
    STATE(186), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(180), 15,
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
  [1611] = 8,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_AMP,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_LF,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    STATE(192), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(192), 15,
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
  [1656] = 6,
    ACTIONS(59), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(210), 1,
      anon_sym_LBRACE,
    STATE(93), 1,
      sym_argument_list,
    ACTIONS(61), 23,
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
  [1697] = 5,
    ACTIONS(65), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(212), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    STATE(42), 2,
      sym_selector_field,
      aux_sym_selector_expression_repeat1,
    ACTIONS(67), 21,
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
  [1735] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      anon_sym_PIPE,
    ACTIONS(166), 1,
      anon_sym_AMP_AMP,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    ACTIONS(219), 1,
      anon_sym_PIPE_PIPE,
    STATE(8), 1,
      sym_selector_field,
    STATE(224), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(154), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(164), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(158), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(162), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(160), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [1793] = 5,
    ACTIONS(55), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(221), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    STATE(51), 2,
      sym_selector_field,
      aux_sym_selector_expression_repeat1,
    ACTIONS(57), 21,
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
  [1831] = 11,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_null,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_LF,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(227), 1,
      anon_sym_LBRACK,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    ACTIONS(231), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 4,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_typeof,
    ACTIONS(233), 4,
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
  [1881] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      anon_sym_AMP,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_EQ,
    STATE(226), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(180), 15,
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
  [1923] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      anon_sym_PIPE,
    ACTIONS(166), 1,
      anon_sym_AMP_AMP,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(219), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      sym_selector_field,
    STATE(210), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(154), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(164), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(158), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(162), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(160), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [1981] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      anon_sym_PIPE,
    ACTIONS(166), 1,
      anon_sym_AMP_AMP,
    ACTIONS(219), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(243), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      sym_selector_field,
    STATE(229), 1,
      aux_sym_array_expression_repeat1,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(154), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(164), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(158), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(162), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(160), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [2039] = 5,
    ACTIONS(45), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    STATE(93), 1,
      sym_argument_list,
    ACTIONS(47), 23,
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
  [2077] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      anon_sym_AMP,
    ACTIONS(245), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_mut,
    STATE(191), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(180), 15,
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
  [2119] = 5,
    ACTIONS(49), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(221), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    STATE(42), 2,
      sym_selector_field,
      aux_sym_selector_expression_repeat1,
    ACTIONS(51), 21,
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
  [2157] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      anon_sym_PIPE,
    ACTIONS(166), 1,
      anon_sym_AMP_AMP,
    ACTIONS(219), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(249), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      sym_selector_field,
    STATE(215), 1,
      aux_sym_array_expression_repeat1,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(154), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(164), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(158), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(162), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(160), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [2215] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_null,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_RBRACK,
    ACTIONS(263), 1,
      anon_sym_typeof,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym_float_literal,
    ACTIONS(255), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(267), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(104), 11,
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
  [2266] = 8,
    ACTIONS(78), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    STATE(44), 1,
      sym_selector_field,
    ACTIONS(273), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(80), 5,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(277), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(271), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [2309] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      anon_sym_AMP,
    ACTIONS(279), 1,
      sym_identifier,
    STATE(165), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(180), 15,
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
  [2348] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      anon_sym_AMP,
    ACTIONS(281), 1,
      sym_identifier,
    STATE(189), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(180), 15,
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
  [2387] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_AMP,
    STATE(195), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(192), 15,
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
  [2426] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_AMP,
    ACTIONS(289), 1,
      sym_identifier,
    STATE(178), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(192), 15,
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
  [2465] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_null,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(263), 1,
      anon_sym_typeof,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      anon_sym_RBRACK,
    ACTIONS(295), 1,
      sym_float_literal,
    ACTIONS(255), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(293), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(52), 11,
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
  [2516] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_null,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(263), 1,
      anon_sym_typeof,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      anon_sym_RBRACK,
    ACTIONS(301), 1,
      sym_float_literal,
    ACTIONS(255), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(299), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(109), 11,
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
  [2567] = 11,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    ACTIONS(303), 1,
      anon_sym_LF,
    ACTIONS(305), 1,
      anon_sym_RBRACE,
    ACTIONS(307), 1,
      anon_sym_AMP_AMP,
    ACTIONS(309), 1,
      anon_sym_PIPE_PIPE,
    STATE(44), 1,
      sym_selector_field,
    ACTIONS(221), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(273), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(277), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(271), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [2616] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      anon_sym_PIPE,
    ACTIONS(166), 1,
      anon_sym_AMP_AMP,
    ACTIONS(219), 1,
      anon_sym_PIPE_PIPE,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(154), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(164), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(311), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(158), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(162), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(160), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [2669] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      anon_sym_PIPE,
    ACTIONS(166), 1,
      anon_sym_AMP_AMP,
    ACTIONS(219), 1,
      anon_sym_PIPE_PIPE,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(154), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(164), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(313), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(158), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(162), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(160), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [2722] = 11,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      anon_sym_AMP_AMP,
    ACTIONS(309), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(315), 1,
      anon_sym_LF,
    ACTIONS(317), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym_selector_field,
    ACTIONS(221), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(273), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(277), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(271), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [2771] = 11,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      anon_sym_AMP_AMP,
    ACTIONS(309), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(319), 1,
      anon_sym_LF,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym_selector_field,
    ACTIONS(221), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(273), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(277), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(271), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [2820] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_null,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(263), 1,
      anon_sym_typeof,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(323), 1,
      anon_sym_RBRACK,
    ACTIONS(327), 1,
      sym_float_literal,
    ACTIONS(255), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(325), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(103), 11,
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
  [2871] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_null,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(263), 1,
      anon_sym_typeof,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(329), 1,
      anon_sym_RPAREN,
    ACTIONS(333), 1,
      sym_float_literal,
    ACTIONS(255), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(331), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(47), 11,
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
  [2922] = 11,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      anon_sym_AMP_AMP,
    ACTIONS(309), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(335), 1,
      anon_sym_LF,
    ACTIONS(337), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym_selector_field,
    ACTIONS(221), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(273), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(277), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(271), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [2971] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      anon_sym_PIPE,
    ACTIONS(166), 1,
      anon_sym_AMP_AMP,
    ACTIONS(219), 1,
      anon_sym_PIPE_PIPE,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(154), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(164), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(339), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(158), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(162), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(160), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [3024] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_null,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(263), 1,
      anon_sym_typeof,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_RBRACK,
    ACTIONS(345), 1,
      sym_float_literal,
    ACTIONS(255), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(343), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(48), 11,
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
  [3075] = 9,
    ACTIONS(78), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      anon_sym_AMP_AMP,
    STATE(44), 1,
      sym_selector_field,
    ACTIONS(80), 4,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
    ACTIONS(273), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(277), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(271), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [3120] = 11,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      anon_sym_AMP_AMP,
    ACTIONS(309), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(347), 1,
      anon_sym_LF,
    ACTIONS(349), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym_selector_field,
    ACTIONS(221), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(273), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(277), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(271), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [3169] = 7,
    ACTIONS(78), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    STATE(44), 1,
      sym_selector_field,
    ACTIONS(273), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(271), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(80), 11,
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
  [3210] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_argument_list,
    ACTIONS(61), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 18,
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
  [3247] = 5,
    ACTIONS(72), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    STATE(44), 1,
      sym_selector_field,
    ACTIONS(74), 22,
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
  [3284] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_null,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(263), 1,
      anon_sym_typeof,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(351), 1,
      anon_sym_RBRACK,
    ACTIONS(355), 1,
      sym_float_literal,
    ACTIONS(255), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(353), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(122), 11,
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
  [3335] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      anon_sym_AMP,
    ACTIONS(357), 1,
      sym_identifier,
    STATE(222), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(180), 15,
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
  [3374] = 11,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      anon_sym_AMP_AMP,
    ACTIONS(309), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(359), 1,
      anon_sym_LF,
    ACTIONS(361), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym_selector_field,
    ACTIONS(221), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(273), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(277), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(271), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [3423] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      anon_sym_AMP,
    ACTIONS(363), 1,
      sym_identifier,
    STATE(167), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(180), 15,
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
  [3462] = 6,
    ACTIONS(78), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    STATE(44), 1,
      sym_selector_field,
    ACTIONS(271), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(80), 15,
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
  [3501] = 5,
    ACTIONS(78), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    STATE(44), 1,
      sym_selector_field,
    ACTIONS(80), 22,
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
  [3538] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_null,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(263), 1,
      anon_sym_typeof,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(365), 1,
      anon_sym_RBRACK,
    ACTIONS(369), 1,
      sym_float_literal,
    ACTIONS(255), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(367), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(106), 11,
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
  [3589] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_null,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(263), 1,
      anon_sym_typeof,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(371), 1,
      anon_sym_RBRACK,
    ACTIONS(375), 1,
      sym_float_literal,
    ACTIONS(255), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(373), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(105), 11,
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
  [3640] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_LBRACE,
    ACTIONS(379), 1,
      anon_sym_PIPE,
    ACTIONS(389), 1,
      anon_sym_AMP_AMP,
    ACTIONS(391), 1,
      anon_sym_PIPE_PIPE,
    STATE(8), 1,
      sym_selector_field,
    STATE(233), 1,
      sym_block,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(377), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(387), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(381), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(385), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(383), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [3695] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_null,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(263), 1,
      anon_sym_typeof,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
    ACTIONS(397), 1,
      sym_float_literal,
    ACTIONS(255), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(395), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(43), 11,
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
  [3746] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_AMP,
    ACTIONS(399), 1,
      sym_identifier,
    STATE(197), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(192), 15,
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
  [3785] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_null,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(263), 1,
      anon_sym_typeof,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(401), 1,
      anon_sym_COLON,
    ACTIONS(405), 1,
      sym_float_literal,
    ACTIONS(255), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(403), 3,
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
  [3836] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_null,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(263), 1,
      anon_sym_typeof,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(407), 1,
      anon_sym_COLON,
    ACTIONS(411), 1,
      sym_float_literal,
    ACTIONS(255), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(409), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(94), 11,
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
  [3887] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      anon_sym_AMP,
    ACTIONS(413), 1,
      sym_identifier,
    STATE(230), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(180), 15,
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
  [3926] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_null,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(263), 1,
      anon_sym_typeof,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(417), 1,
      sym_float_literal,
    ACTIONS(255), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(415), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(34), 11,
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
  [3974] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_null,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(263), 1,
      anon_sym_typeof,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(421), 1,
      sym_float_literal,
    ACTIONS(255), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(419), 3,
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
  [4022] = 3,
    ACTIONS(150), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(152), 23,
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
  [4054] = 3,
    ACTIONS(114), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(116), 23,
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
  [4086] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      anon_sym_PIPE,
    ACTIONS(166), 1,
      anon_sym_AMP_AMP,
    ACTIONS(219), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(423), 1,
      anon_sym_COLON,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(154), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(164), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(158), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(162), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(160), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [4138] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_null,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(263), 1,
      anon_sym_typeof,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(427), 1,
      sym_float_literal,
    ACTIONS(255), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(425), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(113), 11,
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
  [4186] = 11,
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
    ACTIONS(431), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(429), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(81), 11,
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
  [4234] = 11,
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
    ACTIONS(435), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(433), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(80), 11,
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
  [4282] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_null,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(437), 1,
      sym_identifier,
    ACTIONS(441), 1,
      anon_sym_typeof,
    ACTIONS(445), 1,
      sym_float_literal,
    ACTIONS(439), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(443), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(11), 11,
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
  [4330] = 11,
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
    ACTIONS(449), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(447), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(73), 11,
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
  [4378] = 11,
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
    STATE(54), 11,
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
  [4426] = 11,
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
    STATE(71), 11,
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
  [4474] = 3,
    ACTIONS(90), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
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
  [4506] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      anon_sym_PIPE,
    ACTIONS(166), 1,
      anon_sym_AMP_AMP,
    ACTIONS(219), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(459), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(154), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(164), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(158), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(162), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(160), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [4558] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      anon_sym_PIPE,
    ACTIONS(166), 1,
      anon_sym_AMP_AMP,
    ACTIONS(219), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(461), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(154), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(164), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(158), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(162), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(160), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [4610] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      anon_sym_PIPE,
    ACTIONS(166), 1,
      anon_sym_AMP_AMP,
    ACTIONS(219), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(463), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(154), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(164), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(158), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(162), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(160), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [4662] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      anon_sym_PIPE,
    ACTIONS(166), 1,
      anon_sym_AMP_AMP,
    ACTIONS(219), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(465), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(154), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(164), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(158), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(162), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(160), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [4714] = 3,
    ACTIONS(94), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
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
  [4746] = 3,
    ACTIONS(138), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
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
  [4778] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      anon_sym_PIPE,
    ACTIONS(166), 1,
      anon_sym_AMP_AMP,
    ACTIONS(219), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(467), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(154), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(164), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(158), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(162), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(160), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [4830] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_null,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(263), 1,
      anon_sym_typeof,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(471), 1,
      sym_float_literal,
    ACTIONS(255), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(469), 3,
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
  [4878] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_null,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(437), 1,
      sym_identifier,
    ACTIONS(441), 1,
      anon_sym_typeof,
    ACTIONS(475), 1,
      sym_float_literal,
    ACTIONS(439), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(473), 3,
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
  [4926] = 3,
    ACTIONS(102), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(104), 23,
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
  [4958] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      anon_sym_PIPE,
    ACTIONS(166), 1,
      anon_sym_AMP_AMP,
    ACTIONS(219), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(477), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(154), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(164), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(158), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(162), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(160), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5010] = 3,
    ACTIONS(110), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(112), 23,
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
  [5042] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_null,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(263), 1,
      anon_sym_typeof,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(481), 1,
      sym_float_literal,
    ACTIONS(255), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(479), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(32), 11,
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
  [5090] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_null,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(263), 1,
      anon_sym_typeof,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(485), 1,
      sym_float_literal,
    ACTIONS(255), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(483), 3,
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
  [5138] = 11,
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
    ACTIONS(489), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(487), 3,
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
  [5186] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_null,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(263), 1,
      anon_sym_typeof,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(445), 1,
      sym_float_literal,
    ACTIONS(255), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(443), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(11), 11,
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
  [5234] = 3,
    ACTIONS(82), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(84), 23,
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
  [5266] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_null,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(263), 1,
      anon_sym_typeof,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(493), 1,
      sym_float_literal,
    ACTIONS(255), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(491), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(69), 11,
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
  [5314] = 3,
    ACTIONS(126), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
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
  [5346] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      anon_sym_PIPE,
    ACTIONS(166), 1,
      anon_sym_AMP_AMP,
    ACTIONS(219), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(495), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(154), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(164), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(158), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(162), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(160), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5398] = 11,
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
    ACTIONS(499), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(497), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(68), 11,
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
  [5446] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(379), 1,
      anon_sym_PIPE,
    ACTIONS(389), 1,
      anon_sym_AMP_AMP,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(377), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(387), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(381), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(78), 4,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_PIPE_PIPE,
    ACTIONS(385), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(383), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5494] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      anon_sym_PIPE,
    ACTIONS(166), 1,
      anon_sym_AMP_AMP,
    ACTIONS(219), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(501), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(154), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(164), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(158), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(162), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(160), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5546] = 3,
    ACTIONS(106), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(108), 23,
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
  [5578] = 3,
    ACTIONS(130), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
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
  [5610] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(379), 1,
      anon_sym_PIPE,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(377), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(387), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(381), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(385), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(78), 5,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(383), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5656] = 3,
    ACTIONS(118), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(120), 23,
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
  [5688] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(379), 1,
      anon_sym_PIPE,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(80), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(377), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(381), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(383), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(78), 9,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5732] = 3,
    ACTIONS(142), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
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
  [5764] = 3,
    ACTIONS(134), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
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
  [5796] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(377), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(80), 3,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(383), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(78), 12,
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
  [5836] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_null,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(437), 1,
      sym_identifier,
    ACTIONS(441), 1,
      anon_sym_typeof,
    ACTIONS(505), 1,
      sym_float_literal,
    ACTIONS(439), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(503), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(124), 11,
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
  [5884] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_null,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(437), 1,
      sym_identifier,
    ACTIONS(441), 1,
      anon_sym_typeof,
    ACTIONS(509), 1,
      sym_float_literal,
    ACTIONS(439), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(507), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(128), 11,
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
  [5932] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_null,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(437), 1,
      sym_identifier,
    ACTIONS(441), 1,
      anon_sym_typeof,
    ACTIONS(513), 1,
      sym_float_literal,
    ACTIONS(439), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(511), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(130), 11,
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
  [5980] = 11,
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
    ACTIONS(517), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(515), 3,
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
  [6028] = 3,
    ACTIONS(168), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
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
  [6060] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_null,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(263), 1,
      anon_sym_typeof,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(521), 1,
      sym_float_literal,
    ACTIONS(255), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(519), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(125), 11,
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
  [6108] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      anon_sym_PIPE,
    ACTIONS(166), 1,
      anon_sym_AMP_AMP,
    ACTIONS(219), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(523), 1,
      anon_sym_COLON,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(154), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(164), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(158), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(162), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(160), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [6160] = 3,
    ACTIONS(122), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
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
  [6192] = 3,
    ACTIONS(45), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(47), 23,
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
  [6224] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      anon_sym_PIPE,
    ACTIONS(166), 1,
      anon_sym_AMP_AMP,
    ACTIONS(219), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      sym_selector_field,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(154), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(164), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(158), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(162), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(160), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [6276] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_null,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(263), 1,
      anon_sym_typeof,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(529), 1,
      sym_float_literal,
    ACTIONS(255), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(527), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(62), 11,
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
  [6324] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_null,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(437), 1,
      sym_identifier,
    ACTIONS(441), 1,
      anon_sym_typeof,
    ACTIONS(533), 1,
      sym_float_literal,
    ACTIONS(439), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(531), 3,
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
  [6372] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_null,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(263), 1,
      anon_sym_typeof,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(537), 1,
      sym_float_literal,
    ACTIONS(255), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(535), 3,
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
  [6420] = 3,
    ACTIONS(86), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(88), 23,
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
  [6452] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_null,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(437), 1,
      sym_identifier,
    ACTIONS(441), 1,
      anon_sym_typeof,
    ACTIONS(537), 1,
      sym_float_literal,
    ACTIONS(439), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(535), 3,
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
  [6500] = 3,
    ACTIONS(98), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
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
  [6532] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_null,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(263), 1,
      anon_sym_typeof,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(541), 1,
      sym_float_literal,
    ACTIONS(255), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(539), 3,
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
  [6580] = 11,
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
    ACTIONS(545), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(543), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(64), 11,
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
  [6628] = 11,
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
    ACTIONS(549), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(547), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(65), 11,
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
  [6676] = 3,
    ACTIONS(146), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
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
  [6708] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_LF,
    ACTIONS(551), 19,
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
  [6736] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_LF,
    ACTIONS(555), 19,
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
  [6764] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_LF,
    ACTIONS(559), 19,
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
  [6792] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 3,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_LBRACE,
    ACTIONS(563), 16,
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
  [6819] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 3,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_LBRACE,
    ACTIONS(567), 16,
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
  [6846] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 3,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_LBRACE,
    ACTIONS(571), 16,
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
  [6873] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      ts_builtin_sym_end,
    ACTIONS(577), 1,
      anon_sym_fun,
    ACTIONS(580), 1,
      anon_sym_struct,
    ACTIONS(583), 1,
      anon_sym_interface,
    STATE(160), 2,
      sym__definition,
      aux_sym_source_file_repeat1,
    STATE(269), 3,
      sym_function_definition,
      sym_struct_definition,
      sym_interface_definition,
  [6898] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_fun,
    ACTIONS(9), 1,
      anon_sym_struct,
    ACTIONS(11), 1,
      anon_sym_interface,
    ACTIONS(586), 1,
      ts_builtin_sym_end,
    STATE(160), 2,
      sym__definition,
      aux_sym_source_file_repeat1,
    STATE(269), 3,
      sym_function_definition,
      sym_struct_definition,
      sym_interface_definition,
  [6923] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      sym_identifier,
    ACTIONS(590), 1,
      anon_sym_mut,
    ACTIONS(592), 1,
      anon_sym_RPAREN,
    ACTIONS(594), 1,
      anon_sym_AMP,
    ACTIONS(596), 1,
      anon_sym_self,
    STATE(216), 2,
      sym_parameter,
      sym_self_parameter,
  [6946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [6958] = 6,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_LBRACE,
    ACTIONS(602), 1,
      anon_sym_DQUOTE,
    STATE(173), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(184), 1,
      sym_embetted_expr,
    ACTIONS(604), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [6978] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_PIPE,
    ACTIONS(610), 1,
      anon_sym_LBRACK,
    ACTIONS(606), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [6994] = 6,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_LBRACE,
    ACTIONS(612), 1,
      anon_sym_DQUOTE,
    STATE(173), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(184), 1,
      sym_embetted_expr,
    ACTIONS(604), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [7014] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_LBRACK,
    ACTIONS(614), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [7028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [7040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [7052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [7064] = 6,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_LBRACE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    STATE(164), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(184), 1,
      sym_embetted_expr,
    ACTIONS(624), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [7084] = 6,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_LBRACE,
    ACTIONS(626), 1,
      anon_sym_DQUOTE,
    STATE(166), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(184), 1,
      sym_embetted_expr,
    ACTIONS(628), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [7104] = 6,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(630), 1,
      anon_sym_LBRACE,
    ACTIONS(633), 1,
      anon_sym_DQUOTE,
    STATE(173), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(184), 1,
      sym_embetted_expr,
    ACTIONS(635), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [7124] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_AMP,
    ACTIONS(638), 1,
      anon_sym_mut,
    ACTIONS(640), 1,
      anon_sym_LPAREN,
    ACTIONS(642), 1,
      anon_sym_self,
    STATE(38), 1,
      sym_self_parameter_list,
    STATE(252), 1,
      sym_self_parameter,
  [7146] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      sym_identifier,
    ACTIONS(646), 1,
      anon_sym_RBRACE,
    STATE(255), 2,
      sym__interface_body,
      sym_method_spec,
  [7160] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_LBRACE,
    ACTIONS(648), 1,
      anon_sym_if,
    STATE(251), 2,
      sym_block,
      sym_if_statement,
  [7174] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_LF,
    ACTIONS(650), 3,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [7186] = 5,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_LF,
    ACTIONS(652), 1,
      anon_sym_PIPE,
    ACTIONS(654), 1,
      anon_sym_LBRACK,
    ACTIONS(656), 1,
      anon_sym_RBRACE,
  [7202] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      sym_identifier,
    ACTIONS(658), 1,
      anon_sym_RBRACE,
    STATE(255), 2,
      sym__interface_body,
      sym_method_spec,
  [7216] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(660), 3,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [7228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 4,
      ts_builtin_sym_end,
      anon_sym_fun,
      anon_sym_struct,
      anon_sym_interface,
  [7238] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_COMMA,
    ACTIONS(666), 1,
      anon_sym_RBRACE,
    ACTIONS(668), 1,
      anon_sym_EQ,
    STATE(220), 1,
      aux_sym_struct_initialization_repeat1,
  [7254] = 5,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_PIPE,
    ACTIONS(654), 1,
      anon_sym_LBRACK,
    ACTIONS(670), 1,
      anon_sym_LF,
    ACTIONS(672), 1,
      anon_sym_RBRACE,
  [7270] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(674), 2,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
    ACTIONS(676), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [7282] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      sym_identifier,
    ACTIONS(678), 1,
      anon_sym_RBRACE,
    STATE(227), 2,
      sym__interface_body,
      sym_method_spec,
  [7296] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_LBRACE,
    ACTIONS(608), 1,
      anon_sym_PIPE,
    ACTIONS(610), 1,
      anon_sym_LBRACK,
    STATE(273), 1,
      sym_block,
  [7312] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      sym_identifier,
    ACTIONS(682), 1,
      anon_sym_COMMA,
    ACTIONS(684), 1,
      anon_sym_RBRACE,
    STATE(212), 1,
      sym_keyed_element,
  [7328] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(686), 2,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
    ACTIONS(688), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [7340] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_PIPE,
    ACTIONS(610), 1,
      anon_sym_LBRACK,
    ACTIONS(690), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7354] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_EQ,
    ACTIONS(692), 1,
      anon_sym_COMMA,
    ACTIONS(694), 1,
      anon_sym_RBRACE,
    STATE(207), 1,
      aux_sym_struct_initialization_repeat1,
  [7370] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_PIPE,
    ACTIONS(610), 1,
      anon_sym_LBRACK,
    ACTIONS(696), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7384] = 5,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_PIPE,
    ACTIONS(654), 1,
      anon_sym_LBRACK,
    ACTIONS(698), 1,
      anon_sym_LF,
    ACTIONS(700), 1,
      anon_sym_RBRACE,
  [7400] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      sym_identifier,
    ACTIONS(704), 1,
      anon_sym_COMMA,
    ACTIONS(706), 1,
      anon_sym_RBRACE,
    STATE(235), 1,
      sym_keyed_element,
  [7416] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LF,
    ACTIONS(708), 3,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [7428] = 4,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_LF,
    ACTIONS(654), 1,
      anon_sym_LBRACK,
    ACTIONS(710), 2,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [7442] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_LF,
    ACTIONS(712), 3,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [7454] = 5,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_PIPE,
    ACTIONS(654), 1,
      anon_sym_LBRACK,
    ACTIONS(714), 1,
      anon_sym_LF,
    ACTIONS(716), 1,
      anon_sym_RBRACE,
  [7470] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_COMMA,
    ACTIONS(721), 1,
      anon_sym_RPAREN,
    STATE(198), 1,
      aux_sym_argument_list_repeat1,
  [7483] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      sym_identifier,
    ACTIONS(725), 1,
      anon_sym_RBRACE,
    STATE(231), 1,
      sym_field_definition,
  [7496] = 4,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_LF,
    ACTIONS(729), 1,
      anon_sym_RBRACE,
    STATE(213), 1,
      aux_sym_field_definition_list_repeat1,
  [7509] = 4,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_LF,
    ACTIONS(733), 1,
      anon_sym_RBRACE,
    STATE(239), 1,
      aux_sym__statement_list_repeat1,
  [7522] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      sym_identifier,
    ACTIONS(735), 1,
      anon_sym_RBRACE,
    STATE(248), 1,
      sym_field_definition,
  [7535] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      sym_identifier,
    ACTIONS(739), 1,
      anon_sym_RBRACE,
    STATE(250), 1,
      sym_keyed_element,
  [7548] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      sym_identifier,
    ACTIONS(741), 1,
      anon_sym_RBRACE,
    STATE(250), 1,
      sym_keyed_element,
  [7561] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      sym_identifier,
    ACTIONS(743), 1,
      anon_sym_RBRACE,
    STATE(248), 1,
      sym_field_definition,
  [7574] = 4,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_LF,
    ACTIONS(747), 1,
      anon_sym_RBRACE,
    STATE(201), 1,
      aux_sym__statement_list_repeat1,
  [7587] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_COMMA,
    ACTIONS(751), 1,
      anon_sym_RBRACE,
    STATE(240), 1,
      aux_sym_struct_initialization_repeat1,
  [7600] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      sym_identifier,
    ACTIONS(751), 1,
      anon_sym_RBRACE,
    STATE(250), 1,
      sym_keyed_element,
  [7613] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(753), 1,
      anon_sym_LF,
    ACTIONS(755), 2,
      anon_sym_RBRACE,
      anon_sym_else,
  [7624] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(757), 1,
      anon_sym_RPAREN,
    STATE(198), 1,
      aux_sym_argument_list_repeat1,
  [7637] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_EQ,
    ACTIONS(759), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [7648] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_COMMA,
    ACTIONS(694), 1,
      anon_sym_RBRACE,
    STATE(207), 1,
      aux_sym_struct_initialization_repeat1,
  [7661] = 4,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_LF,
    ACTIONS(764), 1,
      anon_sym_RBRACE,
    STATE(213), 1,
      aux_sym_field_definition_list_repeat1,
  [7674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 3,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7683] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(768), 1,
      anon_sym_RBRACK,
    STATE(228), 1,
      aux_sym_array_expression_repeat1,
  [7696] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_COMMA,
    ACTIONS(772), 1,
      anon_sym_RPAREN,
    STATE(237), 1,
      aux_sym_parameter_list_repeat1,
  [7709] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_LF,
    ACTIONS(776), 2,
      anon_sym_RBRACE,
      anon_sym_else,
  [7720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 3,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7729] = 4,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_LF,
    ACTIONS(782), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      aux_sym_interface_definition_repeat1,
  [7742] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_COMMA,
    ACTIONS(786), 1,
      anon_sym_RBRACE,
    STATE(240), 1,
      aux_sym_struct_initialization_repeat1,
  [7755] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      sym_identifier,
    ACTIONS(786), 1,
      anon_sym_RBRACE,
    STATE(250), 1,
      sym_keyed_element,
  [7768] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_PIPE,
    ACTIONS(610), 1,
      anon_sym_LBRACK,
    ACTIONS(788), 1,
      anon_sym_RPAREN,
  [7781] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_COMMA,
    ACTIONS(790), 1,
      anon_sym_RPAREN,
    STATE(242), 1,
      aux_sym_parameter_list_repeat1,
  [7794] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(792), 1,
      anon_sym_RPAREN,
    STATE(198), 1,
      aux_sym_argument_list_repeat1,
  [7807] = 4,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_LF,
    ACTIONS(797), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      aux_sym_interface_definition_repeat1,
  [7820] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_PIPE,
    ACTIONS(610), 1,
      anon_sym_LBRACK,
    ACTIONS(799), 1,
      anon_sym_EQ,
  [7833] = 4,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_LF,
    ACTIONS(803), 1,
      anon_sym_RBRACE,
    STATE(219), 1,
      aux_sym_interface_definition_repeat1,
  [7846] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_COMMA,
    ACTIONS(808), 1,
      anon_sym_RBRACK,
    STATE(228), 1,
      aux_sym_array_expression_repeat1,
  [7859] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(810), 1,
      anon_sym_RBRACK,
    STATE(228), 1,
      aux_sym_array_expression_repeat1,
  [7872] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_PIPE,
    ACTIONS(610), 1,
      anon_sym_LBRACK,
    ACTIONS(812), 1,
      anon_sym_RPAREN,
  [7885] = 4,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_LF,
    ACTIONS(816), 1,
      anon_sym_RBRACE,
    STATE(200), 1,
      aux_sym_field_definition_list_repeat1,
  [7898] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_PIPE,
    ACTIONS(610), 1,
      anon_sym_LBRACK,
    ACTIONS(818), 1,
      anon_sym_EQ,
  [7911] = 4,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_LF,
    ACTIONS(822), 1,
      anon_sym_RBRACE,
    ACTIONS(824), 1,
      anon_sym_else,
  [7924] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      sym_identifier,
    STATE(255), 2,
      sym__interface_body,
      sym_method_spec,
  [7935] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_COMMA,
    ACTIONS(666), 1,
      anon_sym_RBRACE,
    STATE(220), 1,
      aux_sym_struct_initialization_repeat1,
  [7948] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_COMMA,
    ACTIONS(826), 1,
      anon_sym_RPAREN,
    STATE(223), 1,
      aux_sym_parameter_list_repeat1,
  [7961] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_COMMA,
    ACTIONS(828), 1,
      anon_sym_RPAREN,
    STATE(242), 1,
      aux_sym_parameter_list_repeat1,
  [7974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 3,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7983] = 4,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_LF,
    ACTIONS(835), 1,
      anon_sym_RBRACE,
    STATE(239), 1,
      aux_sym__statement_list_repeat1,
  [7996] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      anon_sym_RBRACE,
    ACTIONS(837), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      aux_sym_struct_initialization_repeat1,
  [8009] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      sym_identifier,
    ACTIONS(842), 1,
      anon_sym_RPAREN,
    STATE(236), 1,
      sym_parameter,
  [8022] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_COMMA,
    ACTIONS(847), 1,
      anon_sym_RPAREN,
    STATE(242), 1,
      aux_sym_parameter_list_repeat1,
  [8035] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      sym_parameter_list,
  [8045] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      sym_identifier,
    STATE(248), 1,
      sym_field_definition,
  [8055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      sym_identifier,
    STATE(142), 1,
      sym_function_call,
  [8065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8073] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_RBRACE,
    ACTIONS(853), 1,
      anon_sym_LF,
  [8083] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(855), 1,
      anon_sym_LF,
    ACTIONS(857), 1,
      anon_sym_RBRACE,
  [8093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      sym_identifier,
    STATE(250), 1,
      sym_keyed_element,
  [8103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8111] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_LF,
    ACTIONS(861), 1,
      anon_sym_RBRACE,
  [8121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_LPAREN,
    STATE(40), 1,
      sym_self_parameter_list,
  [8131] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      sym_identifier,
    STATE(35), 1,
      sym_function_call,
  [8141] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      sym_identifier,
    STATE(246), 1,
      sym_parameter,
  [8151] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_RBRACE,
    ACTIONS(865), 1,
      anon_sym_LF,
  [8161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      anon_sym_LBRACE,
    STATE(262), 1,
      sym_field_definition_list,
  [8171] = 2,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_LF,
  [8178] = 2,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_LF,
  [8185] = 2,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_LF,
  [8192] = 2,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_LF,
  [8199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      sym_identifier,
  [8206] = 2,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_LF,
  [8213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_self,
  [8220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      sym_identifier,
  [8227] = 2,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(885), 1,
      anon_sym_LF,
  [8234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_RBRACE,
  [8241] = 2,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(887), 1,
      anon_sym_LF,
  [8248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_self,
  [8255] = 2,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_LF,
  [8262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_LBRACE,
  [8269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      anon_sym_AMP,
  [8276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_RBRACE,
  [8283] = 2,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_LF,
  [8290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      ts_builtin_sym_end,
  [8297] = 2,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_LF,
  [8304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_RBRACE,
  [8311] = 2,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_LF,
  [8318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      sym_identifier,
  [8325] = 2,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(909), 1,
      anon_sym_LF,
  [8332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      sym_identifier,
  [8339] = 2,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 70,
  [SMALL_STATE(4)] = 137,
  [SMALL_STATE(5)] = 204,
  [SMALL_STATE(6)] = 268,
  [SMALL_STATE(7)] = 310,
  [SMALL_STATE(8)] = 352,
  [SMALL_STATE(9)] = 394,
  [SMALL_STATE(10)] = 438,
  [SMALL_STATE(11)] = 480,
  [SMALL_STATE(12)] = 521,
  [SMALL_STATE(13)] = 562,
  [SMALL_STATE(14)] = 598,
  [SMALL_STATE(15)] = 634,
  [SMALL_STATE(16)] = 670,
  [SMALL_STATE(17)] = 706,
  [SMALL_STATE(18)] = 742,
  [SMALL_STATE(19)] = 778,
  [SMALL_STATE(20)] = 814,
  [SMALL_STATE(21)] = 850,
  [SMALL_STATE(22)] = 886,
  [SMALL_STATE(23)] = 922,
  [SMALL_STATE(24)] = 958,
  [SMALL_STATE(25)] = 994,
  [SMALL_STATE(26)] = 1030,
  [SMALL_STATE(27)] = 1066,
  [SMALL_STATE(28)] = 1102,
  [SMALL_STATE(29)] = 1138,
  [SMALL_STATE(30)] = 1174,
  [SMALL_STATE(31)] = 1210,
  [SMALL_STATE(32)] = 1262,
  [SMALL_STATE(33)] = 1312,
  [SMALL_STATE(34)] = 1348,
  [SMALL_STATE(35)] = 1396,
  [SMALL_STATE(36)] = 1432,
  [SMALL_STATE(37)] = 1476,
  [SMALL_STATE(38)] = 1521,
  [SMALL_STATE(39)] = 1566,
  [SMALL_STATE(40)] = 1611,
  [SMALL_STATE(41)] = 1656,
  [SMALL_STATE(42)] = 1697,
  [SMALL_STATE(43)] = 1735,
  [SMALL_STATE(44)] = 1793,
  [SMALL_STATE(45)] = 1831,
  [SMALL_STATE(46)] = 1881,
  [SMALL_STATE(47)] = 1923,
  [SMALL_STATE(48)] = 1981,
  [SMALL_STATE(49)] = 2039,
  [SMALL_STATE(50)] = 2077,
  [SMALL_STATE(51)] = 2119,
  [SMALL_STATE(52)] = 2157,
  [SMALL_STATE(53)] = 2215,
  [SMALL_STATE(54)] = 2266,
  [SMALL_STATE(55)] = 2309,
  [SMALL_STATE(56)] = 2348,
  [SMALL_STATE(57)] = 2387,
  [SMALL_STATE(58)] = 2426,
  [SMALL_STATE(59)] = 2465,
  [SMALL_STATE(60)] = 2516,
  [SMALL_STATE(61)] = 2567,
  [SMALL_STATE(62)] = 2616,
  [SMALL_STATE(63)] = 2669,
  [SMALL_STATE(64)] = 2722,
  [SMALL_STATE(65)] = 2771,
  [SMALL_STATE(66)] = 2820,
  [SMALL_STATE(67)] = 2871,
  [SMALL_STATE(68)] = 2922,
  [SMALL_STATE(69)] = 2971,
  [SMALL_STATE(70)] = 3024,
  [SMALL_STATE(71)] = 3075,
  [SMALL_STATE(72)] = 3120,
  [SMALL_STATE(73)] = 3169,
  [SMALL_STATE(74)] = 3210,
  [SMALL_STATE(75)] = 3247,
  [SMALL_STATE(76)] = 3284,
  [SMALL_STATE(77)] = 3335,
  [SMALL_STATE(78)] = 3374,
  [SMALL_STATE(79)] = 3423,
  [SMALL_STATE(80)] = 3462,
  [SMALL_STATE(81)] = 3501,
  [SMALL_STATE(82)] = 3538,
  [SMALL_STATE(83)] = 3589,
  [SMALL_STATE(84)] = 3640,
  [SMALL_STATE(85)] = 3695,
  [SMALL_STATE(86)] = 3746,
  [SMALL_STATE(87)] = 3785,
  [SMALL_STATE(88)] = 3836,
  [SMALL_STATE(89)] = 3887,
  [SMALL_STATE(90)] = 3926,
  [SMALL_STATE(91)] = 3974,
  [SMALL_STATE(92)] = 4022,
  [SMALL_STATE(93)] = 4054,
  [SMALL_STATE(94)] = 4086,
  [SMALL_STATE(95)] = 4138,
  [SMALL_STATE(96)] = 4186,
  [SMALL_STATE(97)] = 4234,
  [SMALL_STATE(98)] = 4282,
  [SMALL_STATE(99)] = 4330,
  [SMALL_STATE(100)] = 4378,
  [SMALL_STATE(101)] = 4426,
  [SMALL_STATE(102)] = 4474,
  [SMALL_STATE(103)] = 4506,
  [SMALL_STATE(104)] = 4558,
  [SMALL_STATE(105)] = 4610,
  [SMALL_STATE(106)] = 4662,
  [SMALL_STATE(107)] = 4714,
  [SMALL_STATE(108)] = 4746,
  [SMALL_STATE(109)] = 4778,
  [SMALL_STATE(110)] = 4830,
  [SMALL_STATE(111)] = 4878,
  [SMALL_STATE(112)] = 4926,
  [SMALL_STATE(113)] = 4958,
  [SMALL_STATE(114)] = 5010,
  [SMALL_STATE(115)] = 5042,
  [SMALL_STATE(116)] = 5090,
  [SMALL_STATE(117)] = 5138,
  [SMALL_STATE(118)] = 5186,
  [SMALL_STATE(119)] = 5234,
  [SMALL_STATE(120)] = 5266,
  [SMALL_STATE(121)] = 5314,
  [SMALL_STATE(122)] = 5346,
  [SMALL_STATE(123)] = 5398,
  [SMALL_STATE(124)] = 5446,
  [SMALL_STATE(125)] = 5494,
  [SMALL_STATE(126)] = 5546,
  [SMALL_STATE(127)] = 5578,
  [SMALL_STATE(128)] = 5610,
  [SMALL_STATE(129)] = 5656,
  [SMALL_STATE(130)] = 5688,
  [SMALL_STATE(131)] = 5732,
  [SMALL_STATE(132)] = 5764,
  [SMALL_STATE(133)] = 5796,
  [SMALL_STATE(134)] = 5836,
  [SMALL_STATE(135)] = 5884,
  [SMALL_STATE(136)] = 5932,
  [SMALL_STATE(137)] = 5980,
  [SMALL_STATE(138)] = 6028,
  [SMALL_STATE(139)] = 6060,
  [SMALL_STATE(140)] = 6108,
  [SMALL_STATE(141)] = 6160,
  [SMALL_STATE(142)] = 6192,
  [SMALL_STATE(143)] = 6224,
  [SMALL_STATE(144)] = 6276,
  [SMALL_STATE(145)] = 6324,
  [SMALL_STATE(146)] = 6372,
  [SMALL_STATE(147)] = 6420,
  [SMALL_STATE(148)] = 6452,
  [SMALL_STATE(149)] = 6500,
  [SMALL_STATE(150)] = 6532,
  [SMALL_STATE(151)] = 6580,
  [SMALL_STATE(152)] = 6628,
  [SMALL_STATE(153)] = 6676,
  [SMALL_STATE(154)] = 6708,
  [SMALL_STATE(155)] = 6736,
  [SMALL_STATE(156)] = 6764,
  [SMALL_STATE(157)] = 6792,
  [SMALL_STATE(158)] = 6819,
  [SMALL_STATE(159)] = 6846,
  [SMALL_STATE(160)] = 6873,
  [SMALL_STATE(161)] = 6898,
  [SMALL_STATE(162)] = 6923,
  [SMALL_STATE(163)] = 6946,
  [SMALL_STATE(164)] = 6958,
  [SMALL_STATE(165)] = 6978,
  [SMALL_STATE(166)] = 6994,
  [SMALL_STATE(167)] = 7014,
  [SMALL_STATE(168)] = 7028,
  [SMALL_STATE(169)] = 7040,
  [SMALL_STATE(170)] = 7052,
  [SMALL_STATE(171)] = 7064,
  [SMALL_STATE(172)] = 7084,
  [SMALL_STATE(173)] = 7104,
  [SMALL_STATE(174)] = 7124,
  [SMALL_STATE(175)] = 7146,
  [SMALL_STATE(176)] = 7160,
  [SMALL_STATE(177)] = 7174,
  [SMALL_STATE(178)] = 7186,
  [SMALL_STATE(179)] = 7202,
  [SMALL_STATE(180)] = 7216,
  [SMALL_STATE(181)] = 7228,
  [SMALL_STATE(182)] = 7238,
  [SMALL_STATE(183)] = 7254,
  [SMALL_STATE(184)] = 7270,
  [SMALL_STATE(185)] = 7282,
  [SMALL_STATE(186)] = 7296,
  [SMALL_STATE(187)] = 7312,
  [SMALL_STATE(188)] = 7328,
  [SMALL_STATE(189)] = 7340,
  [SMALL_STATE(190)] = 7354,
  [SMALL_STATE(191)] = 7370,
  [SMALL_STATE(192)] = 7384,
  [SMALL_STATE(193)] = 7400,
  [SMALL_STATE(194)] = 7416,
  [SMALL_STATE(195)] = 7428,
  [SMALL_STATE(196)] = 7442,
  [SMALL_STATE(197)] = 7454,
  [SMALL_STATE(198)] = 7470,
  [SMALL_STATE(199)] = 7483,
  [SMALL_STATE(200)] = 7496,
  [SMALL_STATE(201)] = 7509,
  [SMALL_STATE(202)] = 7522,
  [SMALL_STATE(203)] = 7535,
  [SMALL_STATE(204)] = 7548,
  [SMALL_STATE(205)] = 7561,
  [SMALL_STATE(206)] = 7574,
  [SMALL_STATE(207)] = 7587,
  [SMALL_STATE(208)] = 7600,
  [SMALL_STATE(209)] = 7613,
  [SMALL_STATE(210)] = 7624,
  [SMALL_STATE(211)] = 7637,
  [SMALL_STATE(212)] = 7648,
  [SMALL_STATE(213)] = 7661,
  [SMALL_STATE(214)] = 7674,
  [SMALL_STATE(215)] = 7683,
  [SMALL_STATE(216)] = 7696,
  [SMALL_STATE(217)] = 7709,
  [SMALL_STATE(218)] = 7720,
  [SMALL_STATE(219)] = 7729,
  [SMALL_STATE(220)] = 7742,
  [SMALL_STATE(221)] = 7755,
  [SMALL_STATE(222)] = 7768,
  [SMALL_STATE(223)] = 7781,
  [SMALL_STATE(224)] = 7794,
  [SMALL_STATE(225)] = 7807,
  [SMALL_STATE(226)] = 7820,
  [SMALL_STATE(227)] = 7833,
  [SMALL_STATE(228)] = 7846,
  [SMALL_STATE(229)] = 7859,
  [SMALL_STATE(230)] = 7872,
  [SMALL_STATE(231)] = 7885,
  [SMALL_STATE(232)] = 7898,
  [SMALL_STATE(233)] = 7911,
  [SMALL_STATE(234)] = 7924,
  [SMALL_STATE(235)] = 7935,
  [SMALL_STATE(236)] = 7948,
  [SMALL_STATE(237)] = 7961,
  [SMALL_STATE(238)] = 7974,
  [SMALL_STATE(239)] = 7983,
  [SMALL_STATE(240)] = 7996,
  [SMALL_STATE(241)] = 8009,
  [SMALL_STATE(242)] = 8022,
  [SMALL_STATE(243)] = 8035,
  [SMALL_STATE(244)] = 8045,
  [SMALL_STATE(245)] = 8055,
  [SMALL_STATE(246)] = 8065,
  [SMALL_STATE(247)] = 8073,
  [SMALL_STATE(248)] = 8083,
  [SMALL_STATE(249)] = 8093,
  [SMALL_STATE(250)] = 8103,
  [SMALL_STATE(251)] = 8111,
  [SMALL_STATE(252)] = 8121,
  [SMALL_STATE(253)] = 8131,
  [SMALL_STATE(254)] = 8141,
  [SMALL_STATE(255)] = 8151,
  [SMALL_STATE(256)] = 8161,
  [SMALL_STATE(257)] = 8171,
  [SMALL_STATE(258)] = 8178,
  [SMALL_STATE(259)] = 8185,
  [SMALL_STATE(260)] = 8192,
  [SMALL_STATE(261)] = 8199,
  [SMALL_STATE(262)] = 8206,
  [SMALL_STATE(263)] = 8213,
  [SMALL_STATE(264)] = 8220,
  [SMALL_STATE(265)] = 8227,
  [SMALL_STATE(266)] = 8234,
  [SMALL_STATE(267)] = 8241,
  [SMALL_STATE(268)] = 8248,
  [SMALL_STATE(269)] = 8255,
  [SMALL_STATE(270)] = 8262,
  [SMALL_STATE(271)] = 8269,
  [SMALL_STATE(272)] = 8276,
  [SMALL_STATE(273)] = 8283,
  [SMALL_STATE(274)] = 8290,
  [SMALL_STATE(275)] = 8297,
  [SMALL_STATE(276)] = 8304,
  [SMALL_STATE(277)] = 8311,
  [SMALL_STATE(278)] = 8318,
  [SMALL_STATE(279)] = 8325,
  [SMALL_STATE(280)] = 8332,
  [SMALL_STATE(281)] = 8339,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_field, 2, .production_id = 29),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_field, 2, .production_id = 29),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 3, .production_id = 16),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 3, .production_id = 16),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 2, .production_id = 16),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 2, .production_id = 16),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_expression_repeat1, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_expression_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_expression_repeat1, 2), SHIFT_REPEAT(253),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 12),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 12),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 28),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 28),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, .production_id = 13),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, .production_id = 13),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_initialization, 4, .production_id = 27),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_initialization, 4, .production_id = 27),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_initialization, 6, .production_id = 27),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_initialization, 6, .production_id = 27),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_expression, 5, .production_id = 44),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_expression, 5, .production_id = 44),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3, .production_id = 36),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3, .production_id = 36),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_initialization, 5, .production_id = 27),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_initialization, 5, .production_id = 27),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 3, .production_id = 24),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 3, .production_id = 24),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4, .production_id = 40),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4, .production_id = 40),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 15),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 15),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 3, .production_id = 13),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 3, .production_id = 13),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_expression, 4, .production_id = 16),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_expression, 4, .production_id = 16),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_expression, 5, .production_id = 43),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_expression, 5, .production_id = 43),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_initialization, 3, .production_id = 27),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_initialization, 3, .production_id = 27),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 4, .production_id = 33),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 4, .production_id = 33),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_expression, 6, .production_id = 46),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_expression, 6, .production_id = 46),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_spec, 2, .production_id = 9),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_spec, 2, .production_id = 9),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_spec, 3, .production_id = 23),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_spec, 3, .production_id = 23),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_expression_repeat1, 2), SHIFT_REPEAT(245),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 6, .production_id = 45),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 6, .production_id = 45),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyed_element, 3, .production_id = 42),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 36),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 5, .production_id = 38),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 5, .production_id = 38),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 5, .production_id = 37),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 5, .production_id = 37),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 4, .production_id = 35),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 4, .production_id = 35),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_expression_repeat1, 2, .production_id = 13),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1, .production_id = 6),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1, .production_id = 6),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, .production_id = 13),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2, .production_id = 13),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_parameter_list, 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter_list, 2),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_parameter_list, 4),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter_list, 4),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_parameter_list, 3),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter_list, 3),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 4),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [577] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(264),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(280),
  [583] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(278),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sum_type, 3, .production_id = 17),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_type, 2, .production_id = 5),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 4, .production_id = 30),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_type, 3, .production_id = 18),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_type, 3, .production_id = 11),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [630] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2, .production_id = 25), SHIFT_REPEAT(139),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2, .production_id = 25),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2, .production_id = 25), SHIFT_REPEAT(173),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_type, 3, .production_id = 18),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sum_type, 3, .production_id = 17),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 4, .production_id = 30),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 2),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_spec, 3, .production_id = 22),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_spec, 3, .production_id = 22),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 1, .production_id = 14),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 1, .production_id = 14),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_embetted_expr, 3, .production_id = 13),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embetted_expr, 3, .production_id = 13),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 10),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 4),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_spec, 4, .production_id = 32),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_spec, 4, .production_id = 32),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_type, 2, .production_id = 5),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_type, 3, .production_id = 11),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 2, .production_id = 4),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_definition, 2, .production_id = 4),
  [718] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 41), SHIFT_REPEAT(150),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 41),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 2),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 1),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_initialization_repeat1, 2),
  [761] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_definition_list_repeat1, 2, .production_id = 20), SHIFT_REPEAT(244),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_definition_list_repeat1, 2, .production_id = 20),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter, 1),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter, 2, .production_id = 21),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [794] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(234),
  [797] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_definition_repeat1, 2),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [805] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_expression_repeat1, 2, .production_id = 34), SHIFT_REPEAT(120),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_expression_repeat1, 2, .production_id = 34),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 26),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 26),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter, 3, .production_id = 31),
  [832] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(5),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [837] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_initialization_repeat1, 2), SHIFT_REPEAT(249),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [844] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(254),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_definition_list_repeat1, 2, .production_id = 8),
  [857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_definition_list_repeat1, 2, .production_id = 8),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 39),
  [861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 39),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 4, .production_id = 3),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition_list, 2),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 6, .production_id = 3),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 5, .production_id = 3),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 3, .production_id = 1),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition_list, 5, .production_id = 19),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition_list, 4, .production_id = 19),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 7),
  [901] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 2),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition_list, 4, .production_id = 8),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 7, .production_id = 3),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition_list, 3, .production_id = 8),
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
