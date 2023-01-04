#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 296
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 119
#define ALIAS_COUNT 0
#define TOKEN_COUNT 67
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 32
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 55

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
  field_field_init = 13,
  field_fields = 14,
  field_function = 15,
  field_left = 16,
  field_length = 17,
  field_mut_reference = 18,
  field_mutable = 19,
  field_name = 20,
  field_operand = 21,
  field_operator = 22,
  field_parameters = 23,
  field_reference = 24,
  field_result = 25,
  field_right = 26,
  field_selector_field = 27,
  field_self = 28,
  field_start = 29,
  field_type = 30,
  field_value = 31,
  field_variable = 32,
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
  [15] = {.index = 26, .length = 2},
  [16] = {.index = 28, .length = 2},
  [17] = {.index = 30, .length = 2},
  [18] = {.index = 32, .length = 1},
  [19] = {.index = 33, .length = 2},
  [20] = {.index = 35, .length = 2},
  [21] = {.index = 37, .length = 1},
  [22] = {.index = 38, .length = 3},
  [23] = {.index = 41, .length = 3},
  [24] = {.index = 44, .length = 1},
  [25] = {.index = 45, .length = 2},
  [26] = {.index = 47, .length = 2},
  [27] = {.index = 49, .length = 1},
  [28] = {.index = 50, .length = 3},
  [29] = {.index = 53, .length = 2},
  [30] = {.index = 55, .length = 1},
  [31] = {.index = 56, .length = 3},
  [32] = {.index = 59, .length = 2},
  [33] = {.index = 61, .length = 2},
  [34] = {.index = 63, .length = 4},
  [35] = {.index = 67, .length = 2},
  [36] = {.index = 69, .length = 2},
  [37] = {.index = 71, .length = 3},
  [38] = {.index = 74, .length = 1},
  [39] = {.index = 75, .length = 2},
  [40] = {.index = 77, .length = 1},
  [41] = {.index = 78, .length = 2},
  [42] = {.index = 80, .length = 4},
  [43] = {.index = 84, .length = 4},
  [44] = {.index = 88, .length = 3},
  [45] = {.index = 91, .length = 2},
  [46] = {.index = 93, .length = 2},
  [47] = {.index = 95, .length = 1},
  [48] = {.index = 96, .length = 2},
  [49] = {.index = 98, .length = 3},
  [50] = {.index = 101, .length = 2},
  [51] = {.index = 103, .length = 2},
  [52] = {.index = 105, .length = 2},
  [53] = {.index = 107, .length = 5},
  [54] = {.index = 112, .length = 3},
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
    {field_selector_field, 1},
  [30] =
    {field_left, 0},
    {field_right, 2},
  [32] =
    {field_element, 0},
  [33] =
    {field_field, 1},
    {field_field, 2, .inherited = true},
  [35] =
    {field_field, 0, .inherited = true},
    {field_field, 1, .inherited = true},
  [37] =
    {field_reference, 0},
  [38] =
    {field_name, 0},
    {field_parameters, 1},
    {field_result, 2},
  [41] =
    {field_name, 0},
    {field_parameters, 2},
    {field_self, 1},
  [44] =
    {field_embetted_expr, 1, .inherited = true},
  [45] =
    {field_embetted_expr, 0, .inherited = true},
    {field_embetted_expr, 1, .inherited = true},
  [47] =
    {field_condition, 1},
    {field_consequence, 2},
  [49] =
    {field_name, 0},
  [50] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [53] =
    {field_chaining, 0},
    {field_field, 1},
  [55] =
    {field_selector_field, 0},
  [56] =
    {field_operand, 0},
    {field_selector_field, 1},
    {field_selector_field, 2, .inherited = true},
  [59] =
    {field_element, 0},
    {field_length, 2},
  [61] =
    {field_mut_reference, 0},
    {field_mut_reference, 1},
  [63] =
    {field_name, 0},
    {field_parameters, 2},
    {field_result, 3},
    {field_self, 1},
  [67] =
    {field_expression, 1},
    {field_expression, 2, .inherited = true},
  [69] =
    {field_expression, 0, .inherited = true},
    {field_expression, 1, .inherited = true},
  [71] =
    {field_name, 1},
    {field_value, 3},
    {field_variable, 0},
  [74] =
    {field_argument, 1},
  [75] =
    {field_field_init, 2},
    {field_name, 0},
  [77] =
    {field_operand, 0},
  [78] =
    {field_selector_field, 0, .inherited = true},
    {field_selector_field, 1, .inherited = true},
  [80] =
    {field_mutable, 2},
    {field_name, 1},
    {field_value, 4},
    {field_variable, 0},
  [84] =
    {field_name, 1},
    {field_type, 2},
    {field_value, 4},
    {field_variable, 0},
  [88] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequence, 2},
  [91] =
    {field_argument, 1},
    {field_argument, 2, .inherited = true},
  [93] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [95] =
    {field_field_init, 1},
  [96] =
    {field_field, 2},
    {field_name, 0},
  [98] =
    {field_field_init, 2},
    {field_field_init, 3, .inherited = true},
    {field_name, 0},
  [101] =
    {field_field_init, 0, .inherited = true},
    {field_field_init, 1, .inherited = true},
  [103] =
    {field_end, 3},
    {field_operand, 0},
  [105] =
    {field_operand, 0},
    {field_start, 2},
  [107] =
    {field_mutable, 2},
    {field_name, 1},
    {field_type, 3},
    {field_value, 5},
    {field_variable, 0},
  [112] =
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
  [41] = 41,
  [42] = 42,
  [43] = 10,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 7,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 9,
  [53] = 6,
  [54] = 54,
  [55] = 8,
  [56] = 48,
  [57] = 50,
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
  [70] = 13,
  [71] = 71,
  [72] = 10,
  [73] = 33,
  [74] = 74,
  [75] = 75,
  [76] = 59,
  [77] = 29,
  [78] = 78,
  [79] = 19,
  [80] = 12,
  [81] = 11,
  [82] = 82,
  [83] = 83,
  [84] = 62,
  [85] = 85,
  [86] = 78,
  [87] = 87,
  [88] = 69,
  [89] = 87,
  [90] = 58,
  [91] = 71,
  [92] = 75,
  [93] = 60,
  [94] = 94,
  [95] = 22,
  [96] = 96,
  [97] = 97,
  [98] = 33,
  [99] = 13,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 104,
  [108] = 103,
  [109] = 102,
  [110] = 101,
  [111] = 34,
  [112] = 100,
  [113] = 113,
  [114] = 104,
  [115] = 106,
  [116] = 116,
  [117] = 23,
  [118] = 118,
  [119] = 24,
  [120] = 19,
  [121] = 121,
  [122] = 122,
  [123] = 32,
  [124] = 124,
  [125] = 25,
  [126] = 14,
  [127] = 26,
  [128] = 27,
  [129] = 121,
  [130] = 20,
  [131] = 28,
  [132] = 132,
  [133] = 21,
  [134] = 18,
  [135] = 132,
  [136] = 16,
  [137] = 137,
  [138] = 17,
  [139] = 113,
  [140] = 97,
  [141] = 35,
  [142] = 36,
  [143] = 37,
  [144] = 38,
  [145] = 145,
  [146] = 41,
  [147] = 105,
  [148] = 30,
  [149] = 15,
  [150] = 105,
  [151] = 40,
  [152] = 152,
  [153] = 31,
  [154] = 29,
  [155] = 100,
  [156] = 156,
  [157] = 101,
  [158] = 39,
  [159] = 102,
  [160] = 160,
  [161] = 103,
  [162] = 96,
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
  [181] = 178,
  [182] = 182,
  [183] = 183,
  [184] = 183,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 177,
  [191] = 191,
  [192] = 173,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 175,
  [198] = 179,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 202,
  [205] = 182,
  [206] = 180,
  [207] = 200,
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
  [222] = 213,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 211,
  [228] = 219,
  [229] = 229,
  [230] = 230,
  [231] = 224,
  [232] = 232,
  [233] = 210,
  [234] = 218,
  [235] = 216,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 212,
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
  [256] = 244,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 257,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 274,
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
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
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
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 4},
  [173] = {.lex_state = 4},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 3},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 3},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 3},
  [182] = {.lex_state = 4},
  [183] = {.lex_state = 3},
  [184] = {.lex_state = 3},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 3},
  [196] = {.lex_state = 3},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 4},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 4},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 4},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 1},
  [215] = {.lex_state = 4},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 1},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 1},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 1},
  [238] = {.lex_state = 1},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
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
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 1},
  [255] = {.lex_state = 4},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 1},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 1},
  [265] = {.lex_state = 1},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 1},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 1},
  [272] = {.lex_state = 1},
  [273] = {.lex_state = 1},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 1},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 1},
  [280] = {.lex_state = 1},
  [281] = {.lex_state = 1},
  [282] = {.lex_state = 1},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 1},
  [286] = {.lex_state = 4},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 1},
  [290] = {.lex_state = 1},
  [291] = {.lex_state = 1},
  [292] = {.lex_state = 1},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
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
    [sym_source_file] = STATE(293),
    [sym__definition] = STATE(170),
    [sym_function_definition] = STATE(292),
    [sym_struct_definition] = STATE(292),
    [sym_interface_definition] = STATE(292),
    [aux_sym_source_file_repeat1] = STATE(170),
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
    STATE(276), 1,
      sym__statement_list,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(35), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(250), 5,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      sym_var_declaration,
      sym_if_statement,
    STATE(74), 11,
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
    STATE(262), 5,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      sym_var_declaration,
      sym_if_statement,
    STATE(74), 11,
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
    STATE(262), 5,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      sym_var_declaration,
      sym_if_statement,
    STATE(74), 11,
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
    STATE(262), 5,
      sym__statement,
      sym_expression_statement,
      sym_return_statement,
      sym_var_declaration,
      sym_if_statement,
    STATE(74), 11,
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
    STATE(8), 1,
      aux_sym_selector_expression_repeat1,
    STATE(41), 1,
      sym_selector_field,
    ACTIONS(47), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(45), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 21,
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
  [312] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_argument_list,
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
  [354] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_selector_expression_repeat1,
    STATE(41), 1,
      sym_selector_field,
    ACTIONS(47), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
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
  [398] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(9), 1,
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
  [442] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_argument_list,
    ACTIONS(68), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(66), 22,
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
  [486] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    STATE(6), 1,
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
  [527] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    STATE(6), 1,
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
  [568] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(94), 1,
      anon_sym_AMP_AMP,
    STATE(6), 1,
      sym_selector_field,
    ACTIONS(82), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(92), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(86), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(90), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(88), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(72), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
  [620] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(96), 23,
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
  [656] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(100), 23,
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
  [692] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(100), 23,
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
  [728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(104), 23,
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
  [764] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(108), 23,
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
  [800] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    STATE(6), 1,
      sym_selector_field,
    ACTIONS(82), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(74), 3,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(88), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(72), 16,
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
  [844] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(112), 23,
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
  [880] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(116), 23,
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
  [916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(120), 23,
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
  [952] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(124), 23,
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
  [988] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(128), 23,
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
  [1024] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(132), 23,
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
  [1060] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(96), 23,
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
  [1096] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(136), 23,
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
  [1132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(140), 23,
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
  [1168] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    STATE(6), 1,
      sym_selector_field,
    ACTIONS(74), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(82), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(86), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(88), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(72), 13,
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
  [1216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(144), 23,
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
  [1252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(148), 23,
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
  [1288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(152), 23,
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
  [1324] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    STATE(6), 1,
      sym_selector_field,
    ACTIONS(82), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(92), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(86), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(90), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(88), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(72), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1374] = 3,
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
  [1410] = 3,
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
  [1446] = 3,
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
  [1482] = 3,
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
  [1518] = 3,
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
  [1554] = 3,
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
  [1590] = 3,
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
  [1626] = 3,
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
  [1662] = 8,
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
    STATE(203), 7,
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
  [1707] = 6,
    ACTIONS(66), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 1,
      anon_sym_LBRACE,
    STATE(95), 1,
      sym_argument_list,
    ACTIONS(68), 23,
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
  [1748] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_mut,
    ACTIONS(206), 1,
      anon_sym_LPAREN,
    ACTIONS(208), 1,
      anon_sym_AMP,
    ACTIONS(212), 1,
      anon_sym_EQ,
    STATE(215), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(210), 15,
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
  [1793] = 8,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_AMP,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_LF,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    STATE(188), 7,
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
  [1838] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LPAREN,
    ACTIONS(208), 1,
      anon_sym_AMP,
    ACTIONS(220), 1,
      sym_identifier,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    STATE(281), 1,
      sym_block,
    STATE(187), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(210), 15,
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
  [1883] = 5,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_LPAREN,
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
  [1921] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(94), 1,
      anon_sym_AMP_AMP,
    ACTIONS(224), 1,
      anon_sym_COMMA,
    ACTIONS(226), 1,
      anon_sym_RBRACK,
    ACTIONS(228), 1,
      anon_sym_PIPE_PIPE,
    STATE(6), 1,
      sym_selector_field,
    STATE(216), 1,
      aux_sym_array_expression_repeat1,
    ACTIONS(47), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(82), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(92), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(86), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(90), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(88), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [1979] = 11,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_null,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LF,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_RBRACE,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 4,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_typeof,
    ACTIONS(240), 4,
      sym_int_literal,
      sym_float_literal,
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
  [2029] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(94), 1,
      anon_sym_AMP_AMP,
    ACTIONS(228), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      sym_selector_field,
    STATE(231), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(47), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(82), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(92), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(86), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(90), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(88), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [2087] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LPAREN,
    ACTIONS(208), 1,
      anon_sym_AMP,
    ACTIONS(246), 1,
      sym_identifier,
    ACTIONS(248), 1,
      anon_sym_EQ,
    STATE(209), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(210), 15,
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
  [2129] = 6,
    ACTIONS(59), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym_selector_expression_repeat1,
    STATE(146), 1,
      sym_selector_field,
    ACTIONS(250), 2,
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
  [2169] = 6,
    ACTIONS(43), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    STATE(55), 1,
      aux_sym_selector_expression_repeat1,
    STATE(146), 1,
      sym_selector_field,
    ACTIONS(253), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(45), 21,
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
  [2209] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LPAREN,
    ACTIONS(208), 1,
      anon_sym_AMP,
    ACTIONS(255), 1,
      sym_identifier,
    ACTIONS(257), 1,
      anon_sym_mut,
    STATE(189), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(210), 15,
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
  [2251] = 6,
    ACTIONS(55), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym_selector_expression_repeat1,
    STATE(146), 1,
      sym_selector_field,
    ACTIONS(253), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
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
  [2291] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(94), 1,
      anon_sym_AMP_AMP,
    ACTIONS(224), 1,
      anon_sym_COMMA,
    ACTIONS(228), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(259), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      sym_selector_field,
    STATE(235), 1,
      aux_sym_array_expression_repeat1,
    ACTIONS(47), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(82), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(92), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(86), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(90), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(88), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [2349] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(94), 1,
      anon_sym_AMP_AMP,
    ACTIONS(228), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      sym_selector_field,
    STATE(224), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(47), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(82), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(92), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(86), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(90), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(88), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [2407] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_RPAREN,
    ACTIONS(271), 1,
      anon_sym_null,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      anon_sym_typeof,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(281), 1,
      sym_float_literal,
    ACTIONS(269), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(279), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(50), 11,
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
  [2458] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_null,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      anon_sym_typeof,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      anon_sym_RBRACK,
    ACTIONS(287), 1,
      sym_float_literal,
    ACTIONS(269), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(285), 3,
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
  [2509] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_null,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      anon_sym_typeof,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_COLON,
    ACTIONS(293), 1,
      sym_float_literal,
    ACTIONS(269), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(291), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(97), 11,
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
  [2560] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LPAREN,
    ACTIONS(208), 1,
      anon_sym_AMP,
    ACTIONS(295), 1,
      sym_identifier,
    STATE(193), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(210), 15,
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
  [2599] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_null,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      anon_sym_typeof,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      anon_sym_RBRACK,
    ACTIONS(301), 1,
      sym_float_literal,
    ACTIONS(269), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(299), 3,
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
  [2650] = 11,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_LF,
    ACTIONS(309), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_RBRACE,
    ACTIONS(315), 1,
      anon_sym_AMP_AMP,
    ACTIONS(317), 1,
      anon_sym_PIPE_PIPE,
    STATE(53), 1,
      sym_selector_field,
    ACTIONS(253), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(307), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(313), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(305), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [2699] = 11,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_LBRACK,
    ACTIONS(315), 1,
      anon_sym_AMP_AMP,
    ACTIONS(317), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(319), 1,
      anon_sym_LF,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      sym_selector_field,
    ACTIONS(253), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(307), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(313), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(305), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [2748] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(94), 1,
      anon_sym_AMP_AMP,
    ACTIONS(228), 1,
      anon_sym_PIPE_PIPE,
    STATE(6), 1,
      sym_selector_field,
    ACTIONS(47), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(82), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(92), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(323), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(86), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(90), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(88), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [2801] = 11,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_LBRACK,
    ACTIONS(315), 1,
      anon_sym_AMP_AMP,
    ACTIONS(317), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(325), 1,
      anon_sym_LF,
    ACTIONS(327), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      sym_selector_field,
    ACTIONS(253), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(307), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(313), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(305), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [2850] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(94), 1,
      anon_sym_AMP_AMP,
    ACTIONS(228), 1,
      anon_sym_PIPE_PIPE,
    STATE(6), 1,
      sym_selector_field,
    ACTIONS(47), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(82), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(92), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(329), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(86), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(90), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(88), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [2903] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(94), 1,
      anon_sym_AMP_AMP,
    ACTIONS(228), 1,
      anon_sym_PIPE_PIPE,
    STATE(6), 1,
      sym_selector_field,
    ACTIONS(47), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(82), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(92), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(331), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(86), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(90), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(88), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [2956] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LPAREN,
    ACTIONS(208), 1,
      anon_sym_AMP,
    ACTIONS(333), 1,
      sym_identifier,
    STATE(244), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(210), 15,
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
  [2995] = 9,
    ACTIONS(72), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_LBRACK,
    ACTIONS(315), 1,
      anon_sym_AMP_AMP,
    STATE(53), 1,
      sym_selector_field,
    ACTIONS(74), 4,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
    ACTIONS(307), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(313), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(305), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [3040] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_null,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      anon_sym_typeof,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(335), 1,
      anon_sym_RBRACK,
    ACTIONS(339), 1,
      sym_float_literal,
    ACTIONS(269), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(337), 3,
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
  [3091] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_argument_list,
    ACTIONS(68), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(66), 18,
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
  [3128] = 8,
    ACTIONS(72), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_LBRACK,
    STATE(53), 1,
      sym_selector_field,
    ACTIONS(307), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(74), 5,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(313), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(305), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [3171] = 11,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_LBRACK,
    ACTIONS(315), 1,
      anon_sym_AMP_AMP,
    ACTIONS(317), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(341), 1,
      anon_sym_LF,
    ACTIONS(343), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      sym_selector_field,
    ACTIONS(253), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(307), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(313), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(305), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [3220] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LPAREN,
    ACTIONS(208), 1,
      anon_sym_AMP,
    ACTIONS(345), 1,
      sym_identifier,
    STATE(177), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(210), 15,
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
  [3259] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_null,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      anon_sym_typeof,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_RBRACK,
    ACTIONS(351), 1,
      sym_float_literal,
    ACTIONS(269), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(349), 3,
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
  [3310] = 7,
    ACTIONS(72), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_LBRACK,
    STATE(53), 1,
      sym_selector_field,
    ACTIONS(307), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(305), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(74), 11,
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
  [3351] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_null,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      anon_sym_typeof,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(353), 1,
      anon_sym_RBRACK,
    ACTIONS(357), 1,
      sym_float_literal,
    ACTIONS(269), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(355), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(129), 11,
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
  [3402] = 6,
    ACTIONS(72), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_LBRACK,
    STATE(53), 1,
      sym_selector_field,
    ACTIONS(305), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(74), 15,
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
  [3441] = 5,
    ACTIONS(78), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_LBRACK,
    STATE(53), 1,
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
  [3478] = 5,
    ACTIONS(72), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_LBRACK,
    STATE(53), 1,
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
  [3515] = 11,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_LBRACK,
    ACTIONS(315), 1,
      anon_sym_AMP_AMP,
    ACTIONS(317), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(359), 1,
      anon_sym_LF,
    ACTIONS(361), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      sym_selector_field,
    ACTIONS(253), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(307), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(313), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(305), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [3564] = 11,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_LBRACK,
    ACTIONS(315), 1,
      anon_sym_AMP_AMP,
    ACTIONS(317), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(363), 1,
      anon_sym_LF,
    ACTIONS(365), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      sym_selector_field,
    ACTIONS(253), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(307), 4,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(313), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(305), 7,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [3613] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_null,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      anon_sym_typeof,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(367), 1,
      anon_sym_RBRACK,
    ACTIONS(371), 1,
      sym_float_literal,
    ACTIONS(269), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(369), 3,
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
  [3664] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(375), 1,
      anon_sym_PIPE,
    ACTIONS(385), 1,
      anon_sym_AMP_AMP,
    ACTIONS(387), 1,
      anon_sym_PIPE_PIPE,
    STATE(6), 1,
      sym_selector_field,
    STATE(214), 1,
      sym_block,
    ACTIONS(47), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(373), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(383), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(377), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(381), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(379), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [3719] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_null,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      anon_sym_typeof,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      anon_sym_RBRACK,
    ACTIONS(393), 1,
      sym_float_literal,
    ACTIONS(269), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(391), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(121), 11,
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
  [3770] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LPAREN,
    ACTIONS(208), 1,
      anon_sym_AMP,
    ACTIONS(395), 1,
      sym_identifier,
    STATE(180), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(210), 15,
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
  [3809] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LPAREN,
    ACTIONS(208), 1,
      anon_sym_AMP,
    ACTIONS(397), 1,
      sym_identifier,
    STATE(256), 7,
      sym_reference_type,
      sym__type,
      sym_sum_type,
      sym_parenthesized_type,
      sym_primitive_type,
      sym_array_type,
      sym_slice_type,
    ACTIONS(210), 15,
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
  [3848] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      sym_identifier,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      anon_sym_AMP,
    STATE(206), 7,
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
  [3887] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_null,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      anon_sym_typeof,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
    ACTIONS(409), 1,
      sym_float_literal,
    ACTIONS(269), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(407), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(57), 11,
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
  [3938] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_null,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      anon_sym_typeof,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(411), 1,
      anon_sym_RBRACK,
    ACTIONS(415), 1,
      sym_float_literal,
    ACTIONS(269), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(413), 3,
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
  [3989] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      anon_sym_AMP,
    ACTIONS(417), 1,
      sym_identifier,
    STATE(190), 7,
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
  [4028] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_null,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      anon_sym_typeof,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(419), 1,
      anon_sym_COLON,
    ACTIONS(423), 1,
      sym_float_literal,
    ACTIONS(269), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(421), 3,
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
  [4079] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      anon_sym_AMP,
    ACTIONS(425), 1,
      sym_identifier,
    STATE(185), 7,
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
  [4118] = 3,
    ACTIONS(120), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(122), 23,
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
  [4150] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_null,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      anon_sym_typeof,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(429), 1,
      sym_float_literal,
    ACTIONS(269), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(427), 3,
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
  [4198] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(94), 1,
      anon_sym_AMP_AMP,
    ACTIONS(228), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(431), 1,
      anon_sym_COLON,
    STATE(6), 1,
      sym_selector_field,
    ACTIONS(47), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(82), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(92), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(86), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(90), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(88), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [4250] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(375), 1,
      anon_sym_PIPE,
    STATE(6), 1,
      sym_selector_field,
    ACTIONS(373), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(383), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(377), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(381), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(72), 5,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(379), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [4296] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(375), 1,
      anon_sym_PIPE,
    ACTIONS(385), 1,
      anon_sym_AMP_AMP,
    STATE(6), 1,
      sym_selector_field,
    ACTIONS(373), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(383), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(377), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(72), 4,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_PIPE_PIPE,
    ACTIONS(381), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(379), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [4344] = 11,
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
  [4392] = 11,
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
    ACTIONS(439), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(437), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(79), 11,
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
  [4440] = 11,
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
    STATE(77), 11,
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
  [4488] = 11,
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
  [4536] = 11,
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
  [4584] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_null,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      anon_sym_typeof,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(455), 1,
      sym_float_literal,
    ACTIONS(269), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(453), 3,
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
  [4632] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(94), 1,
      anon_sym_AMP_AMP,
    ACTIONS(228), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(457), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      sym_selector_field,
    ACTIONS(47), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(82), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(92), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(86), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(90), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(88), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [4684] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_null,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      anon_sym_typeof,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(461), 1,
      sym_float_literal,
    ACTIONS(269), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(459), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(13), 11,
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
  [4732] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_null,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      anon_sym_typeof,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(465), 1,
      sym_float_literal,
    ACTIONS(269), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(463), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(33), 11,
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
  [4780] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_null,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      anon_sym_typeof,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(469), 1,
      sym_float_literal,
    ACTIONS(269), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(467), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(29), 11,
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
  [4828] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_null,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      anon_sym_typeof,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(473), 1,
      sym_float_literal,
    ACTIONS(269), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(471), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(19), 11,
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
  [4876] = 3,
    ACTIONS(156), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
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
  [4908] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_null,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      anon_sym_typeof,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(477), 1,
      sym_float_literal,
    ACTIONS(269), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(475), 3,
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
  [4956] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(94), 1,
      anon_sym_AMP_AMP,
    ACTIONS(228), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(479), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      sym_selector_field,
    ACTIONS(47), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(82), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(92), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(86), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(90), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(88), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5008] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_null,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(481), 1,
      sym_identifier,
    ACTIONS(485), 1,
      anon_sym_typeof,
    ACTIONS(489), 1,
      sym_float_literal,
    ACTIONS(483), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(487), 3,
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
  [5056] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(94), 1,
      anon_sym_AMP_AMP,
    ACTIONS(228), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(491), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      sym_selector_field,
    ACTIONS(47), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(82), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(92), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(86), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(90), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(88), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5108] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_null,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      anon_sym_typeof,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(495), 1,
      sym_float_literal,
    ACTIONS(269), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(493), 3,
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
  [5156] = 3,
    ACTIONS(124), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(126), 23,
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
  [5188] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_null,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      anon_sym_typeof,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      sym_float_literal,
    ACTIONS(269), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(497), 3,
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
  [5236] = 3,
    ACTIONS(128), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(130), 23,
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
  [5268] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    STATE(6), 1,
      sym_selector_field,
    ACTIONS(373), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(74), 3,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(379), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(72), 12,
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
  [5308] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(94), 1,
      anon_sym_AMP_AMP,
    ACTIONS(228), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(501), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      sym_selector_field,
    ACTIONS(47), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(82), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(92), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(86), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(90), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(88), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5360] = 11,
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
    ACTIONS(505), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(503), 3,
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
  [5408] = 3,
    ACTIONS(152), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(154), 23,
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
  [5440] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(94), 1,
      anon_sym_AMP_AMP,
    ACTIONS(228), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(507), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_selector_field,
    ACTIONS(47), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(82), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(92), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(86), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(90), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(88), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5492] = 3,
    ACTIONS(132), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(134), 23,
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
  [5524] = 3,
    ACTIONS(96), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
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
  [5556] = 3,
    ACTIONS(96), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
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
  [5588] = 3,
    ACTIONS(136), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(138), 23,
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
  [5620] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(94), 1,
      anon_sym_AMP_AMP,
    ACTIONS(228), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(509), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      sym_selector_field,
    ACTIONS(47), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(82), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(92), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(86), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(90), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(88), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5672] = 3,
    ACTIONS(112), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(114), 23,
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
  [5704] = 3,
    ACTIONS(140), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(142), 23,
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
  [5736] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(94), 1,
      anon_sym_AMP_AMP,
    ACTIONS(228), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(511), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      sym_selector_field,
    ACTIONS(47), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(82), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(92), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(86), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(90), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(88), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5788] = 3,
    ACTIONS(116), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(118), 23,
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
  [5820] = 3,
    ACTIONS(108), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(110), 23,
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
  [5852] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(94), 1,
      anon_sym_AMP_AMP,
    ACTIONS(228), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(513), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      sym_selector_field,
    ACTIONS(47), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(82), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(92), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(86), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(90), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(88), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [5904] = 3,
    ACTIONS(100), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(102), 23,
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
  [5936] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_null,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      anon_sym_typeof,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(517), 1,
      sym_float_literal,
    ACTIONS(269), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(515), 3,
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
  [5984] = 3,
    ACTIONS(104), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(106), 23,
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
  [6016] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(94), 1,
      anon_sym_AMP_AMP,
    ACTIONS(228), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(519), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      sym_selector_field,
    ACTIONS(47), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(82), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(92), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(86), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(90), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(88), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [6068] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(94), 1,
      anon_sym_AMP_AMP,
    ACTIONS(228), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(521), 1,
      anon_sym_COLON,
    STATE(6), 1,
      sym_selector_field,
    ACTIONS(47), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(82), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(92), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(86), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(90), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(88), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [6120] = 3,
    ACTIONS(160), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
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
  [6152] = 3,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
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
  [6184] = 3,
    ACTIONS(164), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
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
  [6216] = 3,
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
  [6248] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_null,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(481), 1,
      sym_identifier,
    ACTIONS(485), 1,
      anon_sym_typeof,
    ACTIONS(525), 1,
      sym_float_literal,
    ACTIONS(483), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(523), 3,
      sym_int_literal,
      sym_true,
      sym_false,
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
  [6296] = 3,
    ACTIONS(180), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
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
  [6328] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_null,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(455), 1,
      sym_float_literal,
    ACTIONS(481), 1,
      sym_identifier,
    ACTIONS(485), 1,
      anon_sym_typeof,
    ACTIONS(453), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    ACTIONS(483), 3,
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
  [6376] = 3,
    ACTIONS(144), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(146), 23,
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
  [6408] = 3,
    ACTIONS(100), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(102), 23,
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
  [6440] = 11,
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
    ACTIONS(529), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(527), 3,
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
  [6488] = 3,
    ACTIONS(176), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
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
  [6520] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_null,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      anon_sym_typeof,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(533), 1,
      sym_float_literal,
    ACTIONS(269), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(531), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(67), 11,
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
  [6568] = 3,
    ACTIONS(148), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(150), 23,
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
  [6600] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(375), 1,
      anon_sym_PIPE,
    STATE(6), 1,
      sym_selector_field,
    ACTIONS(74), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(373), 2,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(377), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(379), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(72), 9,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6644] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_null,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(477), 1,
      sym_float_literal,
    ACTIONS(481), 1,
      sym_identifier,
    ACTIONS(485), 1,
      anon_sym_typeof,
    ACTIONS(475), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    ACTIONS(483), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
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
  [6692] = 11,
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
    ACTIONS(537), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(535), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(83), 11,
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
  [6740] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_null,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(481), 1,
      sym_identifier,
    ACTIONS(485), 1,
      anon_sym_typeof,
    ACTIONS(541), 1,
      sym_float_literal,
    ACTIONS(483), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(539), 3,
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
  [6788] = 3,
    ACTIONS(172), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
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
  [6820] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_null,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(481), 1,
      sym_identifier,
    ACTIONS(485), 1,
      anon_sym_typeof,
    ACTIONS(545), 1,
      sym_float_literal,
    ACTIONS(483), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(543), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(154), 11,
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
  [6868] = 11,
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
  [6916] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_null,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(481), 1,
      sym_identifier,
    ACTIONS(485), 1,
      anon_sym_typeof,
    ACTIONS(553), 1,
      sym_float_literal,
    ACTIONS(483), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(551), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(98), 11,
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
  [6964] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_null,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      anon_sym_typeof,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(557), 1,
      sym_float_literal,
    ACTIONS(269), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(555), 3,
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
  [7012] = 11,
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
    ACTIONS(561), 1,
      sym_float_literal,
    ACTIONS(17), 3,
      anon_sym_AMP,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(559), 3,
      sym_int_literal,
      sym_true,
      sym_false,
    STATE(66), 11,
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
  [7060] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_LF,
    ACTIONS(563), 19,
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
  [7088] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_LF,
    ACTIONS(567), 19,
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
  [7116] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_LF,
    ACTIONS(571), 19,
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
  [7144] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 3,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_LBRACE,
    ACTIONS(575), 16,
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
  [7171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 3,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_LBRACE,
    ACTIONS(579), 16,
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
  [7198] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 3,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_LBRACE,
    ACTIONS(583), 16,
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
  [7225] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_fun,
    ACTIONS(9), 1,
      anon_sym_struct,
    ACTIONS(11), 1,
      anon_sym_interface,
    ACTIONS(587), 1,
      ts_builtin_sym_end,
    STATE(171), 2,
      sym__definition,
      aux_sym_source_file_repeat1,
    STATE(292), 3,
      sym_function_definition,
      sym_struct_definition,
      sym_interface_definition,
  [7250] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      ts_builtin_sym_end,
    ACTIONS(591), 1,
      anon_sym_fun,
    ACTIONS(594), 1,
      anon_sym_struct,
    ACTIONS(597), 1,
      anon_sym_interface,
    STATE(171), 2,
      sym__definition,
      aux_sym_source_file_repeat1,
    STATE(292), 3,
      sym_function_definition,
      sym_struct_definition,
      sym_interface_definition,
  [7275] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      sym_identifier,
    ACTIONS(602), 1,
      anon_sym_mut,
    ACTIONS(604), 1,
      anon_sym_RPAREN,
    ACTIONS(606), 1,
      anon_sym_AMP,
    ACTIONS(608), 1,
      anon_sym_self,
    STATE(221), 2,
      sym_parameter,
      sym_self_parameter,
  [7298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [7310] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_AMP,
    ACTIONS(612), 1,
      anon_sym_mut,
    ACTIONS(614), 1,
      anon_sym_LPAREN,
    ACTIONS(616), 1,
      anon_sym_self,
    STATE(42), 1,
      sym_self_parameter_list,
    STATE(270), 1,
      sym_self_parameter,
  [7332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [7344] = 6,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_LBRACE,
    ACTIONS(623), 1,
      anon_sym_DQUOTE,
    STATE(176), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(195), 1,
      sym_embetted_expr,
    ACTIONS(625), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [7364] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      anon_sym_PIPE,
    ACTIONS(632), 1,
      anon_sym_LBRACK,
    ACTIONS(628), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [7380] = 6,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_LBRACE,
    ACTIONS(636), 1,
      anon_sym_DQUOTE,
    STATE(176), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(195), 1,
      sym_embetted_expr,
    ACTIONS(638), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [7400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [7412] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_LBRACK,
    ACTIONS(642), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [7426] = 6,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_LBRACE,
    ACTIONS(644), 1,
      anon_sym_DQUOTE,
    STATE(176), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(195), 1,
      sym_embetted_expr,
    ACTIONS(638), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [7446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [7458] = 6,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_LBRACE,
    ACTIONS(648), 1,
      anon_sym_DQUOTE,
    STATE(178), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(195), 1,
      sym_embetted_expr,
    ACTIONS(650), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [7478] = 6,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_LBRACE,
    ACTIONS(652), 1,
      anon_sym_DQUOTE,
    STATE(181), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(195), 1,
      sym_embetted_expr,
    ACTIONS(654), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [7498] = 5,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_LF,
    ACTIONS(658), 1,
      anon_sym_PIPE,
    ACTIONS(660), 1,
      anon_sym_LBRACK,
    ACTIONS(662), 1,
      anon_sym_RBRACE,
  [7514] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(664), 1,
      anon_sym_if,
    STATE(268), 2,
      sym_block,
      sym_if_statement,
  [7528] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(630), 1,
      anon_sym_PIPE,
    ACTIONS(632), 1,
      anon_sym_LBRACK,
    STATE(291), 1,
      sym_block,
  [7544] = 5,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_PIPE,
    ACTIONS(660), 1,
      anon_sym_LBRACK,
    ACTIONS(666), 1,
      anon_sym_LF,
    ACTIONS(668), 1,
      anon_sym_RBRACE,
  [7560] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      anon_sym_PIPE,
    ACTIONS(632), 1,
      anon_sym_LBRACK,
    ACTIONS(670), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7574] = 5,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_LF,
    ACTIONS(658), 1,
      anon_sym_PIPE,
    ACTIONS(660), 1,
      anon_sym_LBRACK,
    ACTIONS(672), 1,
      anon_sym_RBRACE,
  [7590] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      sym_identifier,
    ACTIONS(676), 1,
      anon_sym_RBRACE,
    STATE(264), 2,
      sym__interface_body,
      sym_method_spec,
  [7604] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_LF,
    ACTIONS(678), 3,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [7616] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      anon_sym_PIPE,
    ACTIONS(632), 1,
      anon_sym_LBRACK,
    ACTIONS(680), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 4,
      ts_builtin_sym_end,
      anon_sym_fun,
      anon_sym_struct,
      anon_sym_interface,
  [7640] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(684), 2,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
    ACTIONS(686), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [7652] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(688), 2,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
    ACTIONS(690), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [7664] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_LF,
    ACTIONS(692), 3,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [7676] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_LF,
    ACTIONS(694), 3,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [7688] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      sym_identifier,
    ACTIONS(696), 1,
      anon_sym_RBRACE,
    STATE(264), 2,
      sym__interface_body,
      sym_method_spec,
  [7702] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_COMMA,
    ACTIONS(700), 1,
      anon_sym_RBRACE,
    ACTIONS(702), 1,
      anon_sym_EQ,
    STATE(228), 1,
      aux_sym_struct_initialization_repeat1,
  [7718] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      sym_identifier,
    ACTIONS(704), 1,
      anon_sym_RBRACE,
    STATE(251), 2,
      sym__interface_body,
      sym_method_spec,
  [7732] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      sym_identifier,
    ACTIONS(708), 1,
      anon_sym_COMMA,
    ACTIONS(710), 1,
      anon_sym_RBRACE,
    STATE(211), 1,
      sym_keyed_element,
  [7748] = 5,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_PIPE,
    ACTIONS(660), 1,
      anon_sym_LBRACK,
    ACTIONS(712), 1,
      anon_sym_LF,
    ACTIONS(714), 1,
      anon_sym_RBRACE,
  [7764] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      sym_identifier,
    ACTIONS(718), 1,
      anon_sym_COMMA,
    ACTIONS(720), 1,
      anon_sym_RBRACE,
    STATE(227), 1,
      sym_keyed_element,
  [7780] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_LF,
    ACTIONS(722), 3,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [7792] = 4,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_LF,
    ACTIONS(660), 1,
      anon_sym_LBRACK,
    ACTIONS(724), 2,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [7806] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_EQ,
    ACTIONS(726), 1,
      anon_sym_COMMA,
    ACTIONS(728), 1,
      anon_sym_RBRACE,
    STATE(219), 1,
      aux_sym_struct_initialization_repeat1,
  [7822] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    ACTIONS(733), 1,
      anon_sym_RPAREN,
    STATE(208), 1,
      aux_sym_parameter_list_repeat1,
  [7835] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      anon_sym_PIPE,
    ACTIONS(632), 1,
      anon_sym_LBRACK,
    ACTIONS(735), 1,
      anon_sym_EQ,
  [7848] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      sym_identifier,
    ACTIONS(739), 1,
      anon_sym_RBRACE,
    STATE(259), 1,
      sym_keyed_element,
  [7861] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_COMMA,
    ACTIONS(700), 1,
      anon_sym_RBRACE,
    STATE(234), 1,
      aux_sym_struct_initialization_repeat1,
  [7874] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      sym_identifier,
    ACTIONS(741), 1,
      anon_sym_RBRACE,
    STATE(259), 1,
      sym_keyed_element,
  [7887] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      sym_identifier,
    ACTIONS(743), 1,
      anon_sym_RBRACE,
    STATE(259), 1,
      sym_keyed_element,
  [7900] = 4,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_LF,
    ACTIONS(747), 1,
      anon_sym_RBRACE,
    ACTIONS(749), 1,
      anon_sym_else,
  [7913] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      anon_sym_PIPE,
    ACTIONS(632), 1,
      anon_sym_LBRACK,
    ACTIONS(751), 1,
      anon_sym_EQ,
  [7926] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_COMMA,
    ACTIONS(753), 1,
      anon_sym_RBRACK,
    STATE(239), 1,
      aux_sym_array_expression_repeat1,
  [7939] = 4,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_LF,
    ACTIONS(758), 1,
      anon_sym_RBRACE,
    STATE(217), 1,
      aux_sym_interface_definition_repeat1,
  [7952] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_COMMA,
    ACTIONS(762), 1,
      anon_sym_RBRACE,
    STATE(236), 1,
      aux_sym_struct_initialization_repeat1,
  [7965] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_COMMA,
    ACTIONS(766), 1,
      anon_sym_RBRACE,
    STATE(236), 1,
      aux_sym_struct_initialization_repeat1,
  [7978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 3,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7987] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_COMMA,
    ACTIONS(772), 1,
      anon_sym_RPAREN,
    STATE(252), 1,
      aux_sym_parameter_list_repeat1,
  [8000] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      sym_identifier,
    ACTIONS(774), 1,
      anon_sym_RBRACE,
    STATE(259), 1,
      sym_keyed_element,
  [8013] = 4,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_LF,
    ACTIONS(779), 1,
      anon_sym_RBRACE,
    STATE(223), 1,
      aux_sym_field_definition_list_repeat1,
  [8026] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(781), 1,
      anon_sym_RPAREN,
    STATE(249), 1,
      aux_sym_argument_list_repeat1,
  [8039] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      sym_identifier,
    ACTIONS(785), 1,
      anon_sym_RBRACE,
    STATE(265), 1,
      sym_field_definition,
  [8052] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      sym_identifier,
    ACTIONS(789), 1,
      anon_sym_RPAREN,
    STATE(241), 1,
      sym_parameter,
  [8065] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_COMMA,
    ACTIONS(728), 1,
      anon_sym_RBRACE,
    STATE(218), 1,
      aux_sym_struct_initialization_repeat1,
  [8078] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      anon_sym_COMMA,
    ACTIONS(793), 1,
      anon_sym_RBRACE,
    STATE(236), 1,
      aux_sym_struct_initialization_repeat1,
  [8091] = 4,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(795), 1,
      anon_sym_LF,
    ACTIONS(797), 1,
      anon_sym_RBRACE,
    STATE(237), 1,
      aux_sym__statement_list_repeat1,
  [8104] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(799), 1,
      anon_sym_LF,
    ACTIONS(801), 2,
      anon_sym_RBRACE,
      anon_sym_else,
  [8115] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(803), 1,
      anon_sym_RPAREN,
    STATE(249), 1,
      aux_sym_argument_list_repeat1,
  [8128] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      sym_identifier,
    ACTIONS(805), 1,
      anon_sym_RBRACE,
    STATE(246), 1,
      sym_field_definition,
  [8141] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      sym_identifier,
    ACTIONS(807), 1,
      anon_sym_RBRACE,
    STATE(259), 1,
      sym_keyed_element,
  [8154] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_COMMA,
    ACTIONS(811), 1,
      anon_sym_RBRACE,
    STATE(236), 1,
      aux_sym_struct_initialization_repeat1,
  [8167] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_COMMA,
    ACTIONS(813), 1,
      anon_sym_RBRACK,
    STATE(239), 1,
      aux_sym_array_expression_repeat1,
  [8180] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_COMMA,
    ACTIONS(818), 1,
      anon_sym_RBRACE,
    STATE(236), 1,
      aux_sym_struct_initialization_repeat1,
  [8193] = 4,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_LF,
    ACTIONS(823), 1,
      anon_sym_RBRACE,
    STATE(237), 1,
      aux_sym__statement_list_repeat1,
  [8206] = 4,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_LF,
    ACTIONS(827), 1,
      anon_sym_RBRACE,
    STATE(217), 1,
      aux_sym_interface_definition_repeat1,
  [8219] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_COMMA,
    ACTIONS(832), 1,
      anon_sym_RBRACK,
    STATE(239), 1,
      aux_sym_array_expression_repeat1,
  [8232] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      sym_identifier,
    ACTIONS(834), 1,
      anon_sym_RBRACE,
    STATE(259), 1,
      sym_keyed_element,
  [8245] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_COMMA,
    ACTIONS(836), 1,
      anon_sym_RPAREN,
    STATE(253), 1,
      aux_sym_parameter_list_repeat1,
  [8258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 3,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      sym_identifier,
    STATE(264), 2,
      sym__interface_body,
      sym_method_spec,
  [8278] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      anon_sym_PIPE,
    ACTIONS(632), 1,
      anon_sym_LBRACK,
    ACTIONS(840), 1,
      anon_sym_RPAREN,
  [8291] = 4,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_LF,
    ACTIONS(844), 1,
      anon_sym_RBRACE,
    STATE(223), 1,
      aux_sym_field_definition_list_repeat1,
  [8304] = 4,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_LF,
    ACTIONS(848), 1,
      anon_sym_RBRACE,
    STATE(245), 1,
      aux_sym_field_definition_list_repeat1,
  [8317] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      sym_identifier,
    ACTIONS(850), 1,
      anon_sym_RBRACE,
    STATE(265), 1,
      sym_field_definition,
  [8330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 3,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8339] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(857), 1,
      anon_sym_RPAREN,
    STATE(249), 1,
      aux_sym_argument_list_repeat1,
  [8352] = 4,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_LF,
    ACTIONS(861), 1,
      anon_sym_RBRACE,
    STATE(229), 1,
      aux_sym__statement_list_repeat1,
  [8365] = 4,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_LF,
    ACTIONS(865), 1,
      anon_sym_RBRACE,
    STATE(238), 1,
      aux_sym_interface_definition_repeat1,
  [8378] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_COMMA,
    ACTIONS(867), 1,
      anon_sym_RPAREN,
    STATE(208), 1,
      aux_sym_parameter_list_repeat1,
  [8391] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_COMMA,
    ACTIONS(869), 1,
      anon_sym_RPAREN,
    STATE(208), 1,
      aux_sym_parameter_list_repeat1,
  [8404] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_LF,
    ACTIONS(873), 2,
      anon_sym_RBRACE,
      anon_sym_else,
  [8415] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_EQ,
    ACTIONS(875), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8426] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      anon_sym_PIPE,
    ACTIONS(632), 1,
      anon_sym_LBRACK,
    ACTIONS(877), 1,
      anon_sym_RPAREN,
  [8439] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(36), 1,
      sym_function_call,
  [8449] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      sym_identifier,
    STATE(267), 1,
      sym_parameter,
  [8459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_parameter_list,
  [8477] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      anon_sym_LBRACE,
    STATE(271), 1,
      sym_field_definition_list,
  [8487] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_RBRACE,
    ACTIONS(885), 1,
      anon_sym_LF,
  [8497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      sym_identifier,
    STATE(259), 1,
      sym_keyed_element,
  [8507] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_RBRACE,
    ACTIONS(887), 1,
      anon_sym_LF,
  [8517] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_LF,
    ACTIONS(891), 1,
      anon_sym_RBRACE,
  [8527] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      sym_identifier,
    STATE(142), 1,
      sym_function_call,
  [8537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8545] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(895), 1,
      anon_sym_LF,
    ACTIONS(897), 1,
      anon_sym_RBRACE,
  [8555] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      sym_identifier,
    STATE(265), 1,
      sym_field_definition,
  [8565] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym_self_parameter_list,
  [8575] = 2,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_LF,
  [8582] = 2,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(901), 1,
      anon_sym_LF,
  [8589] = 2,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_LF,
  [8596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_RBRACE,
  [8603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      sym_identifier,
  [8610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      anon_sym_RBRACE,
  [8617] = 2,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_LF,
  [8624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_RBRACE,
  [8631] = 2,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(915), 1,
      anon_sym_LF,
  [8638] = 2,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_LF,
  [8645] = 2,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(919), 1,
      anon_sym_LF,
  [8652] = 2,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_LF,
  [8659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      anon_sym_self,
  [8666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      anon_sym_self,
  [8673] = 2,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(927), 1,
      anon_sym_LF,
  [8680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 1,
      anon_sym_AMP,
  [8687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_LBRACE,
  [8694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      sym_identifier,
  [8701] = 2,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(935), 1,
      anon_sym_LF,
  [8708] = 2,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_LF,
  [8715] = 2,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_LF,
  [8722] = 2,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(941), 1,
      anon_sym_LF,
  [8729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      ts_builtin_sym_end,
  [8736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      sym_identifier,
  [8743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 70,
  [SMALL_STATE(4)] = 137,
  [SMALL_STATE(5)] = 204,
  [SMALL_STATE(6)] = 268,
  [SMALL_STATE(7)] = 312,
  [SMALL_STATE(8)] = 354,
  [SMALL_STATE(9)] = 398,
  [SMALL_STATE(10)] = 442,
  [SMALL_STATE(11)] = 486,
  [SMALL_STATE(12)] = 527,
  [SMALL_STATE(13)] = 568,
  [SMALL_STATE(14)] = 620,
  [SMALL_STATE(15)] = 656,
  [SMALL_STATE(16)] = 692,
  [SMALL_STATE(17)] = 728,
  [SMALL_STATE(18)] = 764,
  [SMALL_STATE(19)] = 800,
  [SMALL_STATE(20)] = 844,
  [SMALL_STATE(21)] = 880,
  [SMALL_STATE(22)] = 916,
  [SMALL_STATE(23)] = 952,
  [SMALL_STATE(24)] = 988,
  [SMALL_STATE(25)] = 1024,
  [SMALL_STATE(26)] = 1060,
  [SMALL_STATE(27)] = 1096,
  [SMALL_STATE(28)] = 1132,
  [SMALL_STATE(29)] = 1168,
  [SMALL_STATE(30)] = 1216,
  [SMALL_STATE(31)] = 1252,
  [SMALL_STATE(32)] = 1288,
  [SMALL_STATE(33)] = 1324,
  [SMALL_STATE(34)] = 1374,
  [SMALL_STATE(35)] = 1410,
  [SMALL_STATE(36)] = 1446,
  [SMALL_STATE(37)] = 1482,
  [SMALL_STATE(38)] = 1518,
  [SMALL_STATE(39)] = 1554,
  [SMALL_STATE(40)] = 1590,
  [SMALL_STATE(41)] = 1626,
  [SMALL_STATE(42)] = 1662,
  [SMALL_STATE(43)] = 1707,
  [SMALL_STATE(44)] = 1748,
  [SMALL_STATE(45)] = 1793,
  [SMALL_STATE(46)] = 1838,
  [SMALL_STATE(47)] = 1883,
  [SMALL_STATE(48)] = 1921,
  [SMALL_STATE(49)] = 1979,
  [SMALL_STATE(50)] = 2029,
  [SMALL_STATE(51)] = 2087,
  [SMALL_STATE(52)] = 2129,
  [SMALL_STATE(53)] = 2169,
  [SMALL_STATE(54)] = 2209,
  [SMALL_STATE(55)] = 2251,
  [SMALL_STATE(56)] = 2291,
  [SMALL_STATE(57)] = 2349,
  [SMALL_STATE(58)] = 2407,
  [SMALL_STATE(59)] = 2458,
  [SMALL_STATE(60)] = 2509,
  [SMALL_STATE(61)] = 2560,
  [SMALL_STATE(62)] = 2599,
  [SMALL_STATE(63)] = 2650,
  [SMALL_STATE(64)] = 2699,
  [SMALL_STATE(65)] = 2748,
  [SMALL_STATE(66)] = 2801,
  [SMALL_STATE(67)] = 2850,
  [SMALL_STATE(68)] = 2903,
  [SMALL_STATE(69)] = 2956,
  [SMALL_STATE(70)] = 2995,
  [SMALL_STATE(71)] = 3040,
  [SMALL_STATE(72)] = 3091,
  [SMALL_STATE(73)] = 3128,
  [SMALL_STATE(74)] = 3171,
  [SMALL_STATE(75)] = 3220,
  [SMALL_STATE(76)] = 3259,
  [SMALL_STATE(77)] = 3310,
  [SMALL_STATE(78)] = 3351,
  [SMALL_STATE(79)] = 3402,
  [SMALL_STATE(80)] = 3441,
  [SMALL_STATE(81)] = 3478,
  [SMALL_STATE(82)] = 3515,
  [SMALL_STATE(83)] = 3564,
  [SMALL_STATE(84)] = 3613,
  [SMALL_STATE(85)] = 3664,
  [SMALL_STATE(86)] = 3719,
  [SMALL_STATE(87)] = 3770,
  [SMALL_STATE(88)] = 3809,
  [SMALL_STATE(89)] = 3848,
  [SMALL_STATE(90)] = 3887,
  [SMALL_STATE(91)] = 3938,
  [SMALL_STATE(92)] = 3989,
  [SMALL_STATE(93)] = 4028,
  [SMALL_STATE(94)] = 4079,
  [SMALL_STATE(95)] = 4118,
  [SMALL_STATE(96)] = 4150,
  [SMALL_STATE(97)] = 4198,
  [SMALL_STATE(98)] = 4250,
  [SMALL_STATE(99)] = 4296,
  [SMALL_STATE(100)] = 4344,
  [SMALL_STATE(101)] = 4392,
  [SMALL_STATE(102)] = 4440,
  [SMALL_STATE(103)] = 4488,
  [SMALL_STATE(104)] = 4536,
  [SMALL_STATE(105)] = 4584,
  [SMALL_STATE(106)] = 4632,
  [SMALL_STATE(107)] = 4684,
  [SMALL_STATE(108)] = 4732,
  [SMALL_STATE(109)] = 4780,
  [SMALL_STATE(110)] = 4828,
  [SMALL_STATE(111)] = 4876,
  [SMALL_STATE(112)] = 4908,
  [SMALL_STATE(113)] = 4956,
  [SMALL_STATE(114)] = 5008,
  [SMALL_STATE(115)] = 5056,
  [SMALL_STATE(116)] = 5108,
  [SMALL_STATE(117)] = 5156,
  [SMALL_STATE(118)] = 5188,
  [SMALL_STATE(119)] = 5236,
  [SMALL_STATE(120)] = 5268,
  [SMALL_STATE(121)] = 5308,
  [SMALL_STATE(122)] = 5360,
  [SMALL_STATE(123)] = 5408,
  [SMALL_STATE(124)] = 5440,
  [SMALL_STATE(125)] = 5492,
  [SMALL_STATE(126)] = 5524,
  [SMALL_STATE(127)] = 5556,
  [SMALL_STATE(128)] = 5588,
  [SMALL_STATE(129)] = 5620,
  [SMALL_STATE(130)] = 5672,
  [SMALL_STATE(131)] = 5704,
  [SMALL_STATE(132)] = 5736,
  [SMALL_STATE(133)] = 5788,
  [SMALL_STATE(134)] = 5820,
  [SMALL_STATE(135)] = 5852,
  [SMALL_STATE(136)] = 5904,
  [SMALL_STATE(137)] = 5936,
  [SMALL_STATE(138)] = 5984,
  [SMALL_STATE(139)] = 6016,
  [SMALL_STATE(140)] = 6068,
  [SMALL_STATE(141)] = 6120,
  [SMALL_STATE(142)] = 6152,
  [SMALL_STATE(143)] = 6184,
  [SMALL_STATE(144)] = 6216,
  [SMALL_STATE(145)] = 6248,
  [SMALL_STATE(146)] = 6296,
  [SMALL_STATE(147)] = 6328,
  [SMALL_STATE(148)] = 6376,
  [SMALL_STATE(149)] = 6408,
  [SMALL_STATE(150)] = 6440,
  [SMALL_STATE(151)] = 6488,
  [SMALL_STATE(152)] = 6520,
  [SMALL_STATE(153)] = 6568,
  [SMALL_STATE(154)] = 6600,
  [SMALL_STATE(155)] = 6644,
  [SMALL_STATE(156)] = 6692,
  [SMALL_STATE(157)] = 6740,
  [SMALL_STATE(158)] = 6788,
  [SMALL_STATE(159)] = 6820,
  [SMALL_STATE(160)] = 6868,
  [SMALL_STATE(161)] = 6916,
  [SMALL_STATE(162)] = 6964,
  [SMALL_STATE(163)] = 7012,
  [SMALL_STATE(164)] = 7060,
  [SMALL_STATE(165)] = 7088,
  [SMALL_STATE(166)] = 7116,
  [SMALL_STATE(167)] = 7144,
  [SMALL_STATE(168)] = 7171,
  [SMALL_STATE(169)] = 7198,
  [SMALL_STATE(170)] = 7225,
  [SMALL_STATE(171)] = 7250,
  [SMALL_STATE(172)] = 7275,
  [SMALL_STATE(173)] = 7298,
  [SMALL_STATE(174)] = 7310,
  [SMALL_STATE(175)] = 7332,
  [SMALL_STATE(176)] = 7344,
  [SMALL_STATE(177)] = 7364,
  [SMALL_STATE(178)] = 7380,
  [SMALL_STATE(179)] = 7400,
  [SMALL_STATE(180)] = 7412,
  [SMALL_STATE(181)] = 7426,
  [SMALL_STATE(182)] = 7446,
  [SMALL_STATE(183)] = 7458,
  [SMALL_STATE(184)] = 7478,
  [SMALL_STATE(185)] = 7498,
  [SMALL_STATE(186)] = 7514,
  [SMALL_STATE(187)] = 7528,
  [SMALL_STATE(188)] = 7544,
  [SMALL_STATE(189)] = 7560,
  [SMALL_STATE(190)] = 7574,
  [SMALL_STATE(191)] = 7590,
  [SMALL_STATE(192)] = 7604,
  [SMALL_STATE(193)] = 7616,
  [SMALL_STATE(194)] = 7630,
  [SMALL_STATE(195)] = 7640,
  [SMALL_STATE(196)] = 7652,
  [SMALL_STATE(197)] = 7664,
  [SMALL_STATE(198)] = 7676,
  [SMALL_STATE(199)] = 7688,
  [SMALL_STATE(200)] = 7702,
  [SMALL_STATE(201)] = 7718,
  [SMALL_STATE(202)] = 7732,
  [SMALL_STATE(203)] = 7748,
  [SMALL_STATE(204)] = 7764,
  [SMALL_STATE(205)] = 7780,
  [SMALL_STATE(206)] = 7792,
  [SMALL_STATE(207)] = 7806,
  [SMALL_STATE(208)] = 7822,
  [SMALL_STATE(209)] = 7835,
  [SMALL_STATE(210)] = 7848,
  [SMALL_STATE(211)] = 7861,
  [SMALL_STATE(212)] = 7874,
  [SMALL_STATE(213)] = 7887,
  [SMALL_STATE(214)] = 7900,
  [SMALL_STATE(215)] = 7913,
  [SMALL_STATE(216)] = 7926,
  [SMALL_STATE(217)] = 7939,
  [SMALL_STATE(218)] = 7952,
  [SMALL_STATE(219)] = 7965,
  [SMALL_STATE(220)] = 7978,
  [SMALL_STATE(221)] = 7987,
  [SMALL_STATE(222)] = 8000,
  [SMALL_STATE(223)] = 8013,
  [SMALL_STATE(224)] = 8026,
  [SMALL_STATE(225)] = 8039,
  [SMALL_STATE(226)] = 8052,
  [SMALL_STATE(227)] = 8065,
  [SMALL_STATE(228)] = 8078,
  [SMALL_STATE(229)] = 8091,
  [SMALL_STATE(230)] = 8104,
  [SMALL_STATE(231)] = 8115,
  [SMALL_STATE(232)] = 8128,
  [SMALL_STATE(233)] = 8141,
  [SMALL_STATE(234)] = 8154,
  [SMALL_STATE(235)] = 8167,
  [SMALL_STATE(236)] = 8180,
  [SMALL_STATE(237)] = 8193,
  [SMALL_STATE(238)] = 8206,
  [SMALL_STATE(239)] = 8219,
  [SMALL_STATE(240)] = 8232,
  [SMALL_STATE(241)] = 8245,
  [SMALL_STATE(242)] = 8258,
  [SMALL_STATE(243)] = 8267,
  [SMALL_STATE(244)] = 8278,
  [SMALL_STATE(245)] = 8291,
  [SMALL_STATE(246)] = 8304,
  [SMALL_STATE(247)] = 8317,
  [SMALL_STATE(248)] = 8330,
  [SMALL_STATE(249)] = 8339,
  [SMALL_STATE(250)] = 8352,
  [SMALL_STATE(251)] = 8365,
  [SMALL_STATE(252)] = 8378,
  [SMALL_STATE(253)] = 8391,
  [SMALL_STATE(254)] = 8404,
  [SMALL_STATE(255)] = 8415,
  [SMALL_STATE(256)] = 8426,
  [SMALL_STATE(257)] = 8439,
  [SMALL_STATE(258)] = 8449,
  [SMALL_STATE(259)] = 8459,
  [SMALL_STATE(260)] = 8467,
  [SMALL_STATE(261)] = 8477,
  [SMALL_STATE(262)] = 8487,
  [SMALL_STATE(263)] = 8497,
  [SMALL_STATE(264)] = 8507,
  [SMALL_STATE(265)] = 8517,
  [SMALL_STATE(266)] = 8527,
  [SMALL_STATE(267)] = 8537,
  [SMALL_STATE(268)] = 8545,
  [SMALL_STATE(269)] = 8555,
  [SMALL_STATE(270)] = 8565,
  [SMALL_STATE(271)] = 8575,
  [SMALL_STATE(272)] = 8582,
  [SMALL_STATE(273)] = 8589,
  [SMALL_STATE(274)] = 8596,
  [SMALL_STATE(275)] = 8603,
  [SMALL_STATE(276)] = 8610,
  [SMALL_STATE(277)] = 8617,
  [SMALL_STATE(278)] = 8624,
  [SMALL_STATE(279)] = 8631,
  [SMALL_STATE(280)] = 8638,
  [SMALL_STATE(281)] = 8645,
  [SMALL_STATE(282)] = 8652,
  [SMALL_STATE(283)] = 8659,
  [SMALL_STATE(284)] = 8666,
  [SMALL_STATE(285)] = 8673,
  [SMALL_STATE(286)] = 8680,
  [SMALL_STATE(287)] = 8687,
  [SMALL_STATE(288)] = 8694,
  [SMALL_STATE(289)] = 8701,
  [SMALL_STATE(290)] = 8708,
  [SMALL_STATE(291)] = 8715,
  [SMALL_STATE(292)] = 8722,
  [SMALL_STATE(293)] = 8729,
  [SMALL_STATE(294)] = 8736,
  [SMALL_STATE(295)] = 8743,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 2, .production_id = 16),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 2, .production_id = 16),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_field, 2, .production_id = 29),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_field, 2, .production_id = 29),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 3, .production_id = 31),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 3, .production_id = 31),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_expression_repeat1, 2, .production_id = 41),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_expression_repeat1, 2, .production_id = 41),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_expression_repeat1, 2, .production_id = 41), SHIFT_REPEAT(257),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 28),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 28),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 12),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 12),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_initialization, 6, .production_id = 49),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_initialization, 6, .production_id = 49),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_initialization, 5, .production_id = 49),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_initialization, 5, .production_id = 49),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_expression, 5, .production_id = 51),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_expression, 5, .production_id = 51),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_expression, 5, .production_id = 52),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_expression, 5, .production_id = 52),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 15),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 15),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, .production_id = 13),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, .production_id = 13),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 3, .production_id = 13),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 3, .production_id = 13),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 3, .production_id = 24),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 3, .production_id = 24),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_initialization, 3, .production_id = 27),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_initialization, 3, .production_id = 27),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4, .production_id = 45),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4, .production_id = 45),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_expression, 6, .production_id = 54),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_expression, 6, .production_id = 54),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_expression, 4, .production_id = 40),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_expression, 4, .production_id = 40),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_initialization, 4, .production_id = 39),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_initialization, 4, .production_id = 39),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_initialization, 4, .production_id = 27),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_initialization, 4, .production_id = 27),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3, .production_id = 38),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3, .production_id = 38),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 4, .production_id = 35),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 4, .production_id = 35),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_initialization, 5, .production_id = 39),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_initialization, 5, .production_id = 39),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_expression_repeat1, 1, .production_id = 30),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_expression_repeat1, 1, .production_id = 30),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_spec, 2, .production_id = 9),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_spec, 2, .production_id = 9),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_spec, 3, .production_id = 23),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_spec, 3, .production_id = 23),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 1),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_expression_repeat1, 2, .production_id = 41), SHIFT_REPEAT(266),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 4, .production_id = 37),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 4, .production_id = 37),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 5, .production_id = 42),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 5, .production_id = 42),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_expression_repeat1, 2, .production_id = 13),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 5, .production_id = 43),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 5, .production_id = 43),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 38),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyed_element, 3, .production_id = 48),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1, .production_id = 6),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1, .production_id = 6),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, .production_id = 13),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2, .production_id = 13),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 6, .production_id = 53),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 6, .production_id = 53),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_parameter_list, 4),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter_list, 4),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_parameter_list, 3),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter_list, 3),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_parameter_list, 2),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter_list, 2),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 4),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(288),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(295),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(294),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 4, .production_id = 32),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_type, 3, .production_id = 18),
  [620] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2, .production_id = 25), SHIFT_REPEAT(137),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2, .production_id = 25),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2, .production_id = 25), SHIFT_REPEAT(176),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sum_type, 3, .production_id = 17),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_type, 3, .production_id = 11),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_type, 2, .production_id = 5),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 2, .production_id = 4),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_definition, 2, .production_id = 4),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_spec, 4, .production_id = 34),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_spec, 4, .production_id = 34),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 4),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sum_type, 3, .production_id = 17),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 4, .production_id = 32),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 10),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 2),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 1, .production_id = 14),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 1, .production_id = 14),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_embetted_expr, 3, .production_id = 13),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embetted_expr, 3, .production_id = 13),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_type, 3, .production_id = 18),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_type, 3, .production_id = 11),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_spec, 3, .production_id = 22),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_spec, 3, .production_id = 22),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_type, 2, .production_id = 5),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [730] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(258),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 26),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 26),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [755] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(243),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_definition_repeat1, 2),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter, 2, .production_id = 21),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [776] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_definition_list_repeat1, 2, .production_id = 20), SHIFT_REPEAT(269),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_definition_list_repeat1, 2, .production_id = 20),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [797] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 2),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [801] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [815] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_initialization_repeat1, 2, .production_id = 50), SHIFT_REPEAT(263),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_initialization_repeat1, 2, .production_id = 50),
  [820] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(5),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [829] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_expression_repeat1, 2, .production_id = 36), SHIFT_REPEAT(118),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_expression_repeat1, 2, .production_id = 36),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter, 1),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_parameter, 3, .production_id = 33),
  [854] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 46), SHIFT_REPEAT(152),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 46),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 1),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [873] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_initialization_repeat1, 2, .production_id = 47),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_definition_list_repeat1, 2, .production_id = 8),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_definition_list_repeat1, 2, .production_id = 8),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 44),
  [897] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 44),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 3, .production_id = 1),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 6, .production_id = 3),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 5, .production_id = 3),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition_list, 5, .production_id = 19),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 7, .production_id = 3),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition_list, 4, .production_id = 8),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 2),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition_list, 4, .production_id = 19),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition_list, 2),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition_list, 3, .production_id = 8),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 4, .production_id = 3),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 7),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [943] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
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
