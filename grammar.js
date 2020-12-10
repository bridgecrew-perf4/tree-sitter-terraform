module.exports = grammar({
  name: 'terraform',

  extras: $ => [
    /[\s\uFEFF\u2060\u200B\u00A0]/
  ],

  rules: {
    source_file: $ => optional(
      repeat($._statement)
    ),

    _statement: $ => choice(
      $.variable_declaration,
    ),

    type: $ => choice(
      $._primitive_type,
      $._list_type
    ),

    _primitive_type: $ => choice(
      'bool',
      'number',
      'string',
    ),

    _list_type: $ => seq( 'list', '[', $._primitive_type, ']'
    ),

    expression_statement: $ => choice(
      $.assigment_expression,
    ),

    assigment_expression: $ => seq(
      field('left', $.argument_name),
      '=',
      field('right', $._expresion),
    ),

    _expresion: $ => choice(
      $.type,
      $.bool_literal,
      $.string_literal,
      $.number_literal
    ),

    variable_declaration: $ => seq(
      'variable',
      field('name', $.variable_name),
      '{',
      repeat(choice($.assigment_expression, $.block)),
      '}'
    ),

    block: $ => seq(
      $.name,
      "{",
      optional(repeat1($.assigment_expression)),
      "}"
    ),

    argument_name: $ => $._identifier,

    number_literal: $ => /[\d]+(\.\d*)?/,

    string_literal: $ => seq(
      '"',
      repeat(choice($.interpolation, $.escape_sequence, $._not_escape_sequence, $._string_content)),
      '"',
    ),

    interpolation: $ => seq(
      '$',
      '{',
      '}'
    ),

    escape_sequence: $ => token(prec(1, seq(
      '\\',
      choice(
        /u[a-fA-F\d]{4}/,
        /U[a-fA-F\d]{8}/,
        /['"nrt\\]/,
      )
    ))),

    _not_escape_sequence: $ => '\\',

    _string_content: $ => /[\w\d]/,

    bool_literal: $ => choice("true", "false"),

    variable_name: $ => $._quoted_name,

    block_name: $ => $.name,

    _quoted_name: $ => seq('"', $.name, '"'),

    name: $ => $._identifier,

    _identifier: $ => /[a-zA-Z_][a-zA-Z0-9_\-]*/,

  }
})

function keyword(word, aliasAsWord = true) {
  let pattern = ''
  for (const letter of word) {
    pattern += `[${letter}${letter.toLocaleUpperCase()}]`
  }
  let result = new RegExp(pattern)
  if (aliasAsWord) result = alias(result, word)
  return result
}

function commaSep1 (rule) {
  return seq(rule, repeat(seq(',', rule)));
}

function commaSep (rule) {
  return optional(commaSep1(rule));
}
