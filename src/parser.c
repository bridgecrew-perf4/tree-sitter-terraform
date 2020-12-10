#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  anon_sym_bool = 1,
  anon_sym_number = 2,
  anon_sym_string = 3,
  anon_sym_list = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_EQ = 7,
  anon_sym_variable = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  sym_number_literal = 11,
  anon_sym_DQUOTE = 12,
  anon_sym_DOLLAR = 13,
  sym_escape_sequence = 14,
  sym__not_escape_sequence = 15,
  sym__string_content = 16,
  anon_sym_true = 17,
  anon_sym_false = 18,
  sym__identifier = 19,
  sym_source_file = 20,
  sym__statement = 21,
  sym_type = 22,
  sym__primitive_type = 23,
  sym__list_type = 24,
  sym_assigment_expression = 25,
  sym__expresion = 26,
  sym_variable_declaration = 27,
  sym_block = 28,
  sym_argument_name = 29,
  sym_string_literal = 30,
  sym_interpolation = 31,
  sym_bool_literal = 32,
  sym_variable_name = 33,
  sym__quoted_name = 34,
  sym_name = 35,
  aux_sym_source_file_repeat1 = 36,
  aux_sym_variable_declaration_repeat1 = 37,
  aux_sym_block_repeat1 = 38,
  aux_sym_string_literal_repeat1 = 39,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_bool] = "bool",
  [anon_sym_number] = "number",
  [anon_sym_string] = "string",
  [anon_sym_list] = "list",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [anon_sym_variable] = "variable",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_number_literal] = "number_literal",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_DOLLAR] = "$",
  [sym_escape_sequence] = "escape_sequence",
  [sym__not_escape_sequence] = "_not_escape_sequence",
  [sym__string_content] = "_string_content",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym__identifier] = "_identifier",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_type] = "type",
  [sym__primitive_type] = "_primitive_type",
  [sym__list_type] = "_list_type",
  [sym_assigment_expression] = "assigment_expression",
  [sym__expresion] = "_expresion",
  [sym_variable_declaration] = "variable_declaration",
  [sym_block] = "block",
  [sym_argument_name] = "argument_name",
  [sym_string_literal] = "string_literal",
  [sym_interpolation] = "interpolation",
  [sym_bool_literal] = "bool_literal",
  [sym_variable_name] = "variable_name",
  [sym__quoted_name] = "_quoted_name",
  [sym_name] = "name",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_variable_declaration_repeat1] = "variable_declaration_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_number] = anon_sym_number,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_list] = anon_sym_list,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_variable] = anon_sym_variable,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_number_literal] = sym_number_literal,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym__not_escape_sequence] = sym__not_escape_sequence,
  [sym__string_content] = sym__string_content,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym__identifier] = sym__identifier,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_type] = sym_type,
  [sym__primitive_type] = sym__primitive_type,
  [sym__list_type] = sym__list_type,
  [sym_assigment_expression] = sym_assigment_expression,
  [sym__expresion] = sym__expresion,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_block] = sym_block,
  [sym_argument_name] = sym_argument_name,
  [sym_string_literal] = sym_string_literal,
  [sym_interpolation] = sym_interpolation,
  [sym_bool_literal] = sym_bool_literal,
  [sym_variable_name] = sym_variable_name,
  [sym__quoted_name] = sym__quoted_name,
  [sym_name] = sym_name,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_variable_declaration_repeat1] = aux_sym_variable_declaration_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_number] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list] = {
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_variable] = {
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
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__not_escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym__string_content] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym__primitive_type] = {
    .visible = false,
    .named = true,
  },
  [sym__list_type] = {
    .visible = false,
    .named = true,
  },
  [sym_assigment_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__expresion] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_name] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_name] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted_name] = {
    .visible = false,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_left = 1,
  field_name = 2,
  field_right = 3,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_name] = "name",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[3] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_left, 0},
    {field_right, 2},
};

static TSSymbol ts_alias_sequences[3][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(42);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '$') ADVANCE(56);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(58);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '}') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '$') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 5:
      if (lookahead == 'b') ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == 'b') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 11:
      if (lookahead == 'g') ADVANCE(45);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(3);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 18:
      if (lookahead == 'm') ADVANCE(6);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(7);
      END_STATE();
    case 32:
      if (lookahead == '}') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(32)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 41:
      if (eof) ADVANCE(42);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == 'b') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(2);
      if (lookahead == 'l') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == 's') ADVANCE(29);
      if (lookahead == 't') ADVANCE(24);
      if (lookahead == 'v') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(41)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_variable);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__not_escape_sequence);
      if (lookahead == 'U') ADVANCE(40);
      if (lookahead == 'u') ADVANCE(36);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(57);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__string_content);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 41},
  [2] = {.lex_state = 41},
  [3] = {.lex_state = 32},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 32},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 32},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 41},
  [11] = {.lex_state = 32},
  [12] = {.lex_state = 41},
  [13] = {.lex_state = 32},
  [14] = {.lex_state = 32},
  [15] = {.lex_state = 41},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 41},
  [18] = {.lex_state = 41},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 32},
  [21] = {.lex_state = 32},
  [22] = {.lex_state = 32},
  [23] = {.lex_state = 32},
  [24] = {.lex_state = 32},
  [25] = {.lex_state = 32},
  [26] = {.lex_state = 32},
  [27] = {.lex_state = 32},
  [28] = {.lex_state = 32},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym__not_escape_sequence] = ACTIONS(1),
    [sym__string_content] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(38),
    [sym__statement] = STATE(10),
    [sym_variable_declaration] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_variable] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(9), 1,
      anon_sym_list,
    ACTIONS(11), 1,
      sym_number_literal,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 2,
      sym__primitive_type,
      sym__list_type,
    ACTIONS(7), 3,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
    STATE(26), 4,
      sym_type,
      sym__expresion,
      sym_string_literal,
      sym_bool_literal,
  [29] = 5,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(19), 1,
      sym__identifier,
    STATE(31), 1,
      sym_argument_name,
    STATE(41), 1,
      sym_name,
    STATE(8), 3,
      sym_assigment_expression,
      sym_block,
      aux_sym_variable_declaration_repeat1,
  [47] = 5,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(29), 1,
      sym__not_escape_sequence,
    ACTIONS(26), 2,
      sym_escape_sequence,
      sym__string_content,
    STATE(4), 2,
      sym_interpolation,
      aux_sym_string_literal_repeat1,
  [65] = 5,
    ACTIONS(32), 1,
      anon_sym_DQUOTE,
    ACTIONS(34), 1,
      anon_sym_DOLLAR,
    ACTIONS(38), 1,
      sym__not_escape_sequence,
    ACTIONS(36), 2,
      sym_escape_sequence,
      sym__string_content,
    STATE(4), 2,
      sym_interpolation,
      aux_sym_string_literal_repeat1,
  [83] = 5,
    ACTIONS(19), 1,
      sym__identifier,
    ACTIONS(40), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      sym_argument_name,
    STATE(41), 1,
      sym_name,
    STATE(3), 3,
      sym_assigment_expression,
      sym_block,
      aux_sym_variable_declaration_repeat1,
  [101] = 5,
    ACTIONS(34), 1,
      anon_sym_DOLLAR,
    ACTIONS(42), 1,
      anon_sym_DQUOTE,
    ACTIONS(46), 1,
      sym__not_escape_sequence,
    ACTIONS(44), 2,
      sym_escape_sequence,
      sym__string_content,
    STATE(5), 2,
      sym_interpolation,
      aux_sym_string_literal_repeat1,
  [119] = 5,
    ACTIONS(48), 1,
      anon_sym_RBRACE,
    ACTIONS(50), 1,
      sym__identifier,
    STATE(31), 1,
      sym_argument_name,
    STATE(41), 1,
      sym_name,
    STATE(8), 3,
      sym_assigment_expression,
      sym_block,
      aux_sym_variable_declaration_repeat1,
  [137] = 2,
    ACTIONS(55), 1,
      sym__not_escape_sequence,
    ACTIONS(53), 4,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      sym_escape_sequence,
      sym__string_content,
  [147] = 3,
    ACTIONS(5), 1,
      anon_sym_variable,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    STATE(12), 3,
      sym__statement,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [159] = 4,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    ACTIONS(61), 1,
      sym__identifier,
    STATE(31), 1,
      sym_argument_name,
    STATE(11), 2,
      sym_assigment_expression,
      aux_sym_block_repeat1,
  [173] = 3,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 1,
      anon_sym_variable,
    STATE(12), 3,
      sym__statement,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [185] = 4,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(71), 1,
      sym__identifier,
    STATE(31), 1,
      sym_argument_name,
    STATE(11), 2,
      sym_assigment_expression,
      aux_sym_block_repeat1,
  [199] = 4,
    ACTIONS(71), 1,
      sym__identifier,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      sym_argument_name,
    STATE(13), 2,
      sym_assigment_expression,
      aux_sym_block_repeat1,
  [213] = 2,
    STATE(36), 1,
      sym__primitive_type,
    ACTIONS(75), 3,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
  [222] = 3,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym__quoted_name,
    STATE(39), 1,
      sym_variable_name,
  [232] = 1,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      anon_sym_variable,
  [237] = 1,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      anon_sym_variable,
  [242] = 2,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
  [249] = 2,
    ACTIONS(87), 1,
      sym__identifier,
    STATE(29), 1,
      sym_name,
  [256] = 1,
    ACTIONS(89), 2,
      anon_sym_RBRACE,
      sym__identifier,
  [261] = 1,
    ACTIONS(91), 2,
      anon_sym_RBRACE,
      sym__identifier,
  [266] = 1,
    ACTIONS(93), 2,
      anon_sym_RBRACE,
      sym__identifier,
  [271] = 1,
    ACTIONS(95), 2,
      anon_sym_RBRACE,
      sym__identifier,
  [276] = 1,
    ACTIONS(97), 2,
      anon_sym_RBRACE,
      sym__identifier,
  [281] = 1,
    ACTIONS(99), 2,
      anon_sym_RBRACE,
      sym__identifier,
  [286] = 1,
    ACTIONS(101), 2,
      anon_sym_RBRACE,
      sym__identifier,
  [291] = 1,
    ACTIONS(103), 2,
      anon_sym_RBRACE,
      sym__identifier,
  [296] = 1,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
  [300] = 1,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
  [304] = 1,
    ACTIONS(109), 1,
      anon_sym_EQ,
  [308] = 1,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
  [312] = 1,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
  [316] = 1,
    ACTIONS(83), 1,
      anon_sym_EQ,
  [320] = 1,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
  [324] = 1,
    ACTIONS(115), 1,
      anon_sym_RBRACK,
  [328] = 1,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
  [332] = 1,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
  [336] = 1,
    ACTIONS(121), 1,
      anon_sym_LBRACE,
  [340] = 1,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
  [344] = 1,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 47,
  [SMALL_STATE(5)] = 65,
  [SMALL_STATE(6)] = 83,
  [SMALL_STATE(7)] = 101,
  [SMALL_STATE(8)] = 119,
  [SMALL_STATE(9)] = 137,
  [SMALL_STATE(10)] = 147,
  [SMALL_STATE(11)] = 159,
  [SMALL_STATE(12)] = 173,
  [SMALL_STATE(13)] = 185,
  [SMALL_STATE(14)] = 199,
  [SMALL_STATE(15)] = 213,
  [SMALL_STATE(16)] = 222,
  [SMALL_STATE(17)] = 232,
  [SMALL_STATE(18)] = 237,
  [SMALL_STATE(19)] = 242,
  [SMALL_STATE(20)] = 249,
  [SMALL_STATE(21)] = 256,
  [SMALL_STATE(22)] = 261,
  [SMALL_STATE(23)] = 266,
  [SMALL_STATE(24)] = 271,
  [SMALL_STATE(25)] = 276,
  [SMALL_STATE(26)] = 281,
  [SMALL_STATE(27)] = 286,
  [SMALL_STATE(28)] = 291,
  [SMALL_STATE(29)] = 296,
  [SMALL_STATE(30)] = 300,
  [SMALL_STATE(31)] = 304,
  [SMALL_STATE(32)] = 308,
  [SMALL_STATE(33)] = 312,
  [SMALL_STATE(34)] = 316,
  [SMALL_STATE(35)] = 320,
  [SMALL_STATE(36)] = 324,
  [SMALL_STATE(37)] = 328,
  [SMALL_STATE(38)] = 332,
  [SMALL_STATE(39)] = 336,
  [SMALL_STATE(40)] = 340,
  [SMALL_STATE(41)] = 344,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(32),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(4),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(4),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_declaration_repeat1, 2), SHIFT_REPEAT(19),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(34),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_name, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_type, 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assigment_expression, 3, .production_id = 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_name, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_name, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [119] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_terraform(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .field_count = FIELD_COUNT,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .field_names = ts_field_names,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
