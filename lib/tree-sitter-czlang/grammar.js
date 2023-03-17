function commaSeparatedList1(rule) {
    return seq(rule, repeat(seq(",", rule)))
}

function commaSeparatedList(rule) {
    return optional(commaSeparatedList1(rule))
}

const
PREC = {
  primary: 7,
  unary: 6,
  multiplicative: 5,
  additive: 4,
  comparative: 3,
  and: 2,
  or: 1,
  struct_init: -1,
},

multiplicative_operators = ['*', '/', '%', '<<', '>>', '&', '&^'],
additive_operators = ['+', '-'],
comparative_operators = ['==', '!=', '<', '<=', '>', '>='],
assignment_operators = multiplicative_operators.concat(additive_operators).map(operator => operator + '=').concat('='),

unicodeLetter = /\p{L}/,
unicodeDigit = /[0-9]/,
unicodeChar = /./,
unicodeValue = unicodeChar,
letter = choice(unicodeLetter, '_'),

newline = '\n',
terminator = newline,

hexDigit = /[0-9a-fA-F]/,
octalDigit = /[0-7]/,
decimalDigit = /[0-9]/,
binaryDigit = /[01]/,

hexDigits = seq(hexDigit, repeat(seq(optional('_'), hexDigit))),
octalDigits = seq(octalDigit, repeat(seq(optional('_'), octalDigit))),
decimalDigits = seq(decimalDigit, repeat(seq(optional('_'), decimalDigit))),
binaryDigits = seq(binaryDigit, repeat(seq(optional('_'), binaryDigit))),

hexLiteral = seq('0', choice('x', 'X'), optional('_'), hexDigits),
octalLiteral = seq('0', optional(choice('o', 'O')), optional('_'), octalDigits),
decimalLiteral = choice('0', seq(/[1-9]/, optional(seq(optional('_'), decimalDigits)))),
binaryLiteral = seq('0', choice('b', 'B'), optional('_'), binaryDigits),

intLiteral = choice(binaryLiteral, decimalLiteral, octalLiteral, hexLiteral),

decimalExponent = seq(choice('e', 'E'), optional(choice('+', '-')), decimalDigits),
decimalFloatLiteral = choice(
  seq(decimalDigits, '.', optional(decimalDigits), optional(decimalExponent)),
  seq(decimalDigits, decimalExponent),
  seq('.', decimalDigits, optional(decimalExponent)),
),

hexExponent = seq(choice('p', 'P'), optional(choice('+', '-')), decimalDigits),
hexMantissa = choice(
  seq(optional('_'), hexDigits, '.', optional(hexDigits)),
  seq(optional('_'), hexDigits),
  seq('.', hexDigits),
),
hexFloatLiteral = seq('0', choice('x', 'X'), hexMantissa, hexExponent),

floatLiteral = choice(decimalFloatLiteral, hexFloatLiteral)


module.exports = grammar({
    name: 'czlang',

    extras: $ => [
      $.comment,
      /\s/
    ],

    word: $ => $.identifier,

    rules: {
      source_file: $ => repeat($._definition),

      _definition: $ => seq(choice(
          $.function_definition,
          $.method_definition,
          $.struct_definition,
          $.interface_definition,
          $.struct_impl_interface,
        ),
        terminator),

      function_definition: $ => seq(
        'fun',
        field('name', $.identifier),
        field('type_arguments', optional($.type_arguments)),
        field('parameters', $.parameter_list),
        field('result', optional(
          $._type
        )),
        field('body', $.block)
      ),

      parameter: $ => seq(
        field('name', $.identifier),
        field("mutable", optional("mut")),
        field('type', $._type),
      ),

      parameter_list: $ => seq(
        '(',
        commaSeparatedList($.parameter),
        ')'
      ),

      method_definition: $ => seq(
        'fun',
        field('receiver', $.receiver),
        field('interface', optional(
          seq(
            $._type,
            '.'
          )
        )),
        field('name', $.identifier),
        field('type_arguments', optional($.type_arguments)),
        field('parameters', $.parameter_list),
        field('result', optional($._type)),
        field('body', $.block)
      ),

      receiver: $ => seq(
        '(',
        $.parameter,
        ')'
      ),

      reference_type: $ => prec.left(seq(
        field("reference", "&"),
        field("mutable", optional("mut")),
        field('type', $._type),
      )),

      _base_type: $ => choice(
        $.primitive_type,
        $.identifier,
        $.array_type,
        $.slice_type,
        $.parenthesized_type,
        $.sum_type,
        $.reference_type,
        $.generic_type,
      ),

      _type: $ => prec.right(PREC.primary, choice(
        $._base_type,
        $.error_type,
      )),

      error_type: $ => prec.left(seq(
        field('type', $._base_type),
        $.error_op,
        field('error', $._base_type),
      )),

      generic_type: $ => seq(
        field('type', $.identifier),
        field('type_arguments', $.type_arguments),
      ),

      type_arguments: $ => prec.dynamic(2, seq(
        '<',
        commaSeparatedList1($._type),
        '>'
      )),

      sum_type: $ => prec.right(seq(
        field('left', $._type),
        "|",
        field('right', $._type)
      )),

      parenthesized_type: $ => seq(
        '(',
        field('type', $._type),
        ')'
      ),

      primitive_type: $ => choice(
        'null',
        'bool',
        'i8',
        'u8',
        'i16',
        'u16',
        'i32',
        'u32',
        'i64',
        'u64',
        'f32',
        'f64',
        'str',
        'string',
        'void'
      ),

      array_type: $ => prec(PREC.unary, seq(
        field('element', $._type),
        '[',
        field('length', $._expression),
        ']',
      )),

      slice_type: $ => prec(PREC.unary, seq(
        field('element', $._type),
        '[',
        ']',
      )),

      array_expression: $ => prec(PREC.primary, seq(
        '[',
        commaSeparatedList(field('expression', $._expression)),
        ']'
      )),

      slice_expression: $ => prec(PREC.primary, seq(
        field('operand', $._expression),
        '[',
        seq(
          field('start', optional($._expression)),
          ':',
          field('end', optional($._expression))
        ),
        ']'
      )),

      selector_field: $ => seq(
        field('chaining', choice(".", "?.")),
        field('field', choice(
          $.identifier,
          $.function_call,
        ))
      ),

      selector_expression: $ => prec.right(seq(
        field('operand', $._expression),
        field('selector_field', $.selector_field),
        repeat(field('selector_field', $.selector_field))
      )),

      block: $ => seq(
        '{',
        optional($._statement_list),
        '}'
      ),

      _statement_list: $ => seq(
        $._statement,
        repeat(seq(terminator, $._statement)),
        optional(terminator)
      ),

      _statement: $ => choice(
        $.expression_statement,
        $.var_declaration,
        $.return_statement,
      ),

      expression_statement: $ => field('expression', $._expression),

      return_statement: $ => seq(
        'return',
        field('error_return', optional($.error_op)),
        field('expression', optional($._expression)),
      ),

      error_expression: $ => prec.left(PREC.primary, seq(
        $.error_op,
        field('error', $._expression)
      )),

      catch_block: $ => seq(
        $.error_op,
        '(',
        field('error', $.identifier),
        ')',
        field('block', $.block),
      ),

      function_call: $ => prec(PREC.primary,
        seq(
          field('function', $.identifier),
          field('type_arguments', optional($.type_arguments)),
          field('arguments', $.argument_list),
          optional(choice(
            $.error_op,
            field('catch', $.catch_block)
          ))
        )
      ),

      var_declaration: $ => seq(
        'var',
        field('name', $.identifier),
        field("mutable", optional("mut")),
        field('type', optional($._type)),
        '=',
        field('value', $._expression)
      ),

      _expression: $ => choice(
        $.identifier,
        $.int_literal,
        $.float_literal,
        $.interpreted_string_literal,
        $.null,
        $.true,
        $.false,
        $.unary_expression,
        $.binary_expression,
        $.parenthesized_expression,
        $.array_expression,
        $.slice_expression,
        $.function_call,
        $.selector_expression,
        $.struct_initialization,
        $.error_expression,
        $.block,
        $.if_expression,
      ),

      parenthesized_expression: $ => seq(
        '(',
        field('expression', $._expression),
        ')'
      ),

      unary_expression: $ => prec(PREC.unary, seq(
        field('operator', choice('-', '!', '&', 'typeof')),
        field('operand', $._expression)
      )),

      binary_expression: $ => {
        const table = [
          [PREC.multiplicative, choice(...multiplicative_operators)],
          [PREC.additive, choice(...additive_operators)],
          [PREC.comparative, choice(...comparative_operators)],
          [PREC.and, '&&'],
          [PREC.or, '||'],
        ];
        return choice(...table.map(([precedence, operator]) =>
          prec.left(precedence, seq(
            field('left', $._expression),
            field('operator', operator),
            field('right', $._expression)
          ))
        ));
      },

      argument_list: $ => seq(
        '(',
        optional(seq(
          field('argument', $._expression),
          repeat(seq(',', field('argument', $._expression))),
        )),
        ')'
      ),

      interpreted_string_literal: $ => seq(
        '"',
        repeat(choice(
          token.immediate(prec(1, /[^"\n\\{]+/)),
          field('embetted_expr', $.embetted_expr),
          $.escape_sequence
        )),
        '"'
      ),

      embetted_expr: $ => seq(
        '{',
        field('expression', $._expression),
        '}'
      ),

      if_expression: $ => seq(
        'if',
        field('condition', $._expression),
        field('consequence', $.block),
        optional(seq(
          'else',
          field('alternative', choice($.block, $.if_expression))
        ))
      ),

      struct_definition: $ => seq(
        'struct',
        field('name', $.identifier),
        optional(field('type_arguments', $.type_arguments)),
        field('fields', $.field_definition_list),
      ),

      field_definition_list: $ => seq(
        '{',
        optional(seq(
          field('field', $.field_definition),
          repeat(seq(terminator, field('field', $.field_definition))),
          optional(terminator)
        )),
        '}'
      ),

      field_definition: $ => seq(
        field('name', $.identifier),
        field('type', $._type)
      ),

      interface_definition: $ => seq(
        'interface',
        field('name', $.identifier),
        field('type_argument', optional($.type_arguments)),
        '{',
        optional(seq(
          $._interface_body,
          repeat(seq(terminator, $._interface_body)),
          optional(terminator)
        )),
        '}'
      ),

      _interface_body: $ => seq(
         $.method_spec
      ),

      struct_impl_interface: $ => seq(
        $._type,
        'implements',
        $._type,
      ),

      method_spec: $ => seq(
        field('name', $.identifier),
        field('self', optional($.self_parameter)),
        field('parameters', $.self_parameter_list),
        field('result', optional($._type)),
      ),

      self_parameter_list: $ => seq(
        '(',
        optional(seq(choice($.self_parameter, $.parameter), repeat(seq(",", $.parameter)))),
        ')'
      ),

      self_parameter: $ => seq(
        optional(choice(
          field('mut_reference', seq('mut', '&')),
          field('reference', '&')
        )),
        'self',
      ),

      keyed_element: $ => seq(
        field('name', $.identifier),
        '=',
        field('field', $._expression)
      ),

      struct_initialization: $ => prec(PREC.struct_init,
        seq(
          field('name', $.identifier),
          '{',
          optional(
          seq(
            commaSeparatedList(field('field_init', $.keyed_element)),
            optional(',')
          )),
          '}'
        )
      ),

      escape_sequence: $ => token.immediate(seq(
        '\\',
        choice(
          /[^xuU]/,
          /\d{2,3}/,
          /x[0-9a-fA-F]{2,}/,
          /u[0-9a-fA-F]{4}/,
          /U[0-9a-fA-F]{8}/
        )
      )),

      identifier: $ => token(seq(
        letter,
        repeat(choice(letter, unicodeDigit))
      )),

      int_literal: $ => token(intLiteral),

      float_literal: $ => token(floatLiteral),

      null: $ => 'null',
      true: $ => 'true',
      false: $ => 'false',

      error_op: $ => '?',

      comment: $ => token(choice(
        seq('//', /.*/),
        seq(
          '/*',
          /[^*]*\*+([^/*][^*]*\*+)*/,
          '/'
        )
      ))
    }
  }
);
