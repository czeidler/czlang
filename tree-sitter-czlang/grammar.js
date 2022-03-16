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
  composite_literal: -1,
},

multiplicative_operators = ['*', '/', '%', '<<', '>>', '&', '&^'],
additive_operators = ['+', '-', '|', '^'],
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

    rules: {
      source_file: $ => repeat($._definition),

      _definition: $ => choice(
        $.function_definition
        // TODO: other kinds of definitions
      ),

      function_definition: $ => seq(
        'fun',
        field('name', $.identifier),
        field('parameters', $.parameter_list),
        field('result', optional($._type)),
        field('body', $.block)
      ),

      parameter: $ => seq(
        field('name', $.identifier),
        field('nullable', optional('?')),
        field("reference", optional("&")),
        field("mutable", optional("mut")),
        field('type', $._type),
      ),

      parameter_list: $ => seq(
        '(',
        commaSeparatedList($.parameter),
        ')'
      ),

      _type: $ => choice(
        $.primitive_type,
      ),

      primitive_type: $ => choice(
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
        $.function_call,
        $.var_declaration,
        $.return_statement,
        $.if_statement,
      ),

      return_statement: $ => seq(
        'return',
        field('expression', optional($._expression)),
      ),

      function_call: $ => prec(PREC.primary,
        seq(
          field('function', $.identifier),
          field('arguments', $.argument_list)
        )
      ),

      var_declaration: $ => seq(
        field('variable', 'val'),
        field('name', $.identifier),
        field('nullable', optional('?')),
        field("reference", optional("&")),
        field("mutable", optional("mut")),
        field('type', optional($._type)),
        '=',
        field('value', $._expression)
      ),

      _expression: $ => choice(
        $.identifier,
        $.number,
        $.interpreted_string_literal,
        $.null,
        $.true,
        $.false,
        // TODO: other kinds of expressions
      ),

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

      if_statement: $ => seq(
        'if',
        field('condition', $._expression),
        field('consequence', $.block),
        optional(seq(
          'else',
          field('alternative', choice($.block, $.if_statement))
        ))
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

      number: $ => /\d+/,
      null: $ => 'null',
      true: $ => 'true',
      false: $ => 'false',

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
