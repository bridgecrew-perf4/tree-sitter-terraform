module.exports = grammar({
  name: 'terraform',

  extras: $ => [
    $.comment,
    /[\s\uFEFF\u2060\u200B\u00A0]/
  ],

  word: $ => $.word,

  rules: {
    source_file: $ => optional(
      repeat($._statement)
    ),

    _statement: $ => choice(
      $.local_declarations
    ),

    local_declarations: $ => seq(
      'locals',
      '{',
      optional(
        repeat($.assignment_expression)
      ),
      '}'
    ),

    assignment_expression: $ => seq(
      field('left', $.variable_name),
      '=',
      field('right', $._expression)
    ),

    variable_name: $ => $._identifier,

    _expression: $ => choice(
      $._type,
    ),

    _type: $ => choice(
      $.number,
      $.string,
      $.bool,
      $.null,
      $.list,
      $.map,
      $.null,
    ),


    list: $ => seq( '[', commaSep($._type), optional(','), ']'),
    map: $ => seq( '{', repeat($.assignment_expression), '}'),
    number: $ => /[\+\-]?\d+(\.\d+)?/,
    string: $ => choice($._single_quote_string, $._double_quote_string),
    null: $ => 'null',
    _double_quote_string: $ => seq(
      '"',
      /(\w|\d| )*/,
      '"',
    ),
    _single_quote_string: $ => seq(
      '\'',
      /(\w|\d| )*/,
      '\'',
    ),
    bool: $ => choice('true', 'false'),
    null: $ => 'null',


    _call: $ => choice($.module),

    module: $ => seq(
      'module',
      $.name,
      $.block,
    ),

    block: $ => seq(
      '{',
       repeat($.argument),
      '}'
    ),

    argument: $ => seq(
      $.argument_name,
      '=',
      $.expression
    ),

    argument_name: $ => $._identifier,

    expression: $ => choice(
      $._module_output_value,
      $.string,
    ),

    comment: $ => token(seq(
      choice('#', '//'), /.*(\n)*/)),

    _module_output_value: $ => seq(
      repeat($._module_output),
      $._identifier,
    ),

    _module_output: $ => seq('module.', $._identifier, '.'),

    name: $ => seq('"', $._identifier, '"'),
    _identifier: $ => /[a-zA-Z_\-][a-zA-Z0-9_\-]+/,
    word: $ => /[a-z_]+/,
  }
})

function commaSep1 (rule) {
  return seq(rule, repeat(seq(',', rule)));
}

function commaSep (rule) {
  return optional(commaSep1(rule));
}
