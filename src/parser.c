#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 40
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  sym_word = 1,
  anon_sym_locals = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_EQ = 5,
  anon_sym_LBRACK = 6,
  anon_sym_COMMA = 7,
  anon_sym_RBRACK = 8,
  sym_number = 9,
  sym_null = 10,
  anon_sym_DQUOTE = 11,
  aux_sym__double_quote_string_token1 = 12,
  anon_sym_SQUOTE = 13,
  anon_sym_true = 14,
  anon_sym_false = 15,
  anon_sym_module = 16,
  sym_comment = 17,
  anon_sym_module_DOT = 18,
  anon_sym_DOT = 19,
  sym__identifier = 20,
  sym_source_file = 21,
  sym__statement = 22,
  sym_local_declarations = 23,
  sym_assignment_expression = 24,
  sym_variable_name = 25,
  sym__expression = 26,
  sym__type = 27,
  sym_list = 28,
  sym_map = 29,
  sym_string = 30,
  sym__double_quote_string = 31,
  sym__single_quote_string = 32,
  sym_bool = 33,
  aux_sym_source_file_repeat1 = 34,
  aux_sym_local_declarations_repeat1 = 35,
  aux_sym_list_repeat1 = 36,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_word] = "word",
  [anon_sym_locals] = "locals",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [sym_number] = "number",
  [sym_null] = "null",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__double_quote_string_token1] = "_double_quote_string_token1",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_module] = "module",
  [sym_comment] = "comment",
  [anon_sym_module_DOT] = "module.",
  [anon_sym_DOT] = ".",
  [sym__identifier] = "_identifier",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_local_declarations] = "local_declarations",
  [sym_assignment_expression] = "assignment_expression",
  [sym_variable_name] = "variable_name",
  [sym__expression] = "_expression",
  [sym__type] = "_type",
  [sym_list] = "list",
  [sym_map] = "map",
  [sym_string] = "string",
  [sym__double_quote_string] = "_double_quote_string",
  [sym__single_quote_string] = "_single_quote_string",
  [sym_bool] = "bool",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_local_declarations_repeat1] = "local_declarations_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_word] = sym_word,
  [anon_sym_locals] = anon_sym_locals,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_number] = sym_number,
  [sym_null] = sym_null,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__double_quote_string_token1] = aux_sym__double_quote_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_module] = anon_sym_module,
  [sym_comment] = sym_comment,
  [anon_sym_module_DOT] = anon_sym_module_DOT,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym__identifier] = sym__identifier,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_local_declarations] = sym_local_declarations,
  [sym_assignment_expression] = sym_assignment_expression,
  [sym_variable_name] = sym_variable_name,
  [sym__expression] = sym__expression,
  [sym__type] = sym__type,
  [sym_list] = sym_list,
  [sym_map] = sym_map,
  [sym_string] = sym_string,
  [sym__double_quote_string] = sym__double_quote_string,
  [sym__single_quote_string] = sym__single_quote_string,
  [sym_bool] = sym_bool,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_local_declarations_repeat1] = aux_sym_local_declarations_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_locals] = {
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__double_quote_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_module_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
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
  [sym_local_declarations] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_name] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_map] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__double_quote_string] = {
    .visible = false,
    .named = true,
  },
  [sym__single_quote_string] = {
    .visible = false,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_local_declarations_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_left = 1,
  field_right = 2,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[2] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_left, 0},
    {field_right, 2},
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
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
      if (eof) ADVANCE(7);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '[') ADVANCE(11);
      if (lookahead == ']') ADVANCE(13);
      if (lookahead == 'm') ADVANCE(29);
      if (lookahead == '{') ADVANCE(8);
      if (lookahead == '}') ADVANCE(9);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ']') ADVANCE(13);
      if (lookahead == '}') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(1)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(21);
      END_STATE();
    case 3:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 4:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '[') ADVANCE(11);
      if (lookahead == ']') ADVANCE(13);
      if (lookahead == '{') ADVANCE(8);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == ' ') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_module_DOT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(27);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(26);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(28);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
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
      if (lookahead == 'f') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(2);
      if (lookahead == 'm') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(4);
      if (lookahead == 't') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_locals);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 6},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 17},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 17},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [anon_sym_locals] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_module_DOT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(39),
    [sym__statement] = STATE(10),
    [sym_local_declarations] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_locals] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_COMMA,
    ACTIONS(15), 1,
      anon_sym_RBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_number,
      sym_null,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(21), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(24), 5,
      sym__type,
      sym_list,
      sym_map,
      sym_string,
      sym_bool,
  [41] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_RBRACK,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      sym_number,
      sym_null,
    STATE(21), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(29), 5,
      sym__type,
      sym_list,
      sym_map,
      sym_string,
      sym_bool,
  [79] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_RBRACK,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      sym_number,
      sym_null,
    STATE(21), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(29), 5,
      sym__type,
      sym_list,
      sym_map,
      sym_string,
      sym_bool,
  [117] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      sym_number,
      sym_null,
    STATE(21), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(27), 6,
      sym__expression,
      sym__type,
      sym_list,
      sym_map,
      sym_string,
      sym_bool,
  [153] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      sym_number,
      sym_null,
    STATE(21), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(29), 5,
      sym__type,
      sym_list,
      sym_map,
      sym_string,
      sym_bool,
  [188] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    ACTIONS(35), 1,
      sym__identifier,
    STATE(36), 1,
      sym_variable_name,
    STATE(8), 2,
      sym_assignment_expression,
      aux_sym_local_declarations_repeat1,
  [205] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    ACTIONS(39), 1,
      sym__identifier,
    STATE(36), 1,
      sym_variable_name,
    STATE(8), 2,
      sym_assignment_expression,
      aux_sym_local_declarations_repeat1,
  [222] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      anon_sym_locals,
    STATE(9), 3,
      sym__statement,
      sym_local_declarations,
      aux_sym_source_file_repeat1,
  [237] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_locals,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(9), 3,
      sym__statement,
      sym_local_declarations,
      aux_sym_source_file_repeat1,
  [252] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym__identifier,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      sym_variable_name,
    STATE(7), 2,
      sym_assignment_expression,
      aux_sym_local_declarations_repeat1,
  [269] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym__identifier,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      sym_variable_name,
    STATE(13), 2,
      sym_assignment_expression,
      aux_sym_local_declarations_repeat1,
  [286] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      sym_variable_name,
    STATE(8), 2,
      sym_assignment_expression,
      aux_sym_local_declarations_repeat1,
  [303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__identifier,
  [313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__identifier,
  [323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__identifier,
  [333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__identifier,
  [343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__identifier,
  [353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__identifier,
  [363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__identifier,
  [373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__identifier,
  [383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__identifier,
  [393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__identifier,
  [403] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_COMMA,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      aux_sym_list_repeat1,
  [416] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_RBRACK,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_list_repeat1,
  [429] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    ACTIONS(84), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_list_repeat1,
  [442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 2,
      anon_sym_RBRACE,
      sym__identifier,
  [450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      anon_sym_locals,
  [458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 2,
      ts_builtin_sym_end,
      anon_sym_locals,
  [474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
  [481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_DQUOTE,
  [488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_SQUOTE,
  [495] = 2,
    ACTIONS(96), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(98), 1,
      sym_comment,
  [502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_LBRACE,
  [509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_EQ,
  [516] = 2,
    ACTIONS(98), 1,
      sym_comment,
    ACTIONS(104), 1,
      aux_sym__double_quote_string_token1,
  [523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_EQ,
  [530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 79,
  [SMALL_STATE(5)] = 117,
  [SMALL_STATE(6)] = 153,
  [SMALL_STATE(7)] = 188,
  [SMALL_STATE(8)] = 205,
  [SMALL_STATE(9)] = 222,
  [SMALL_STATE(10)] = 237,
  [SMALL_STATE(11)] = 252,
  [SMALL_STATE(12)] = 269,
  [SMALL_STATE(13)] = 286,
  [SMALL_STATE(14)] = 303,
  [SMALL_STATE(15)] = 313,
  [SMALL_STATE(16)] = 323,
  [SMALL_STATE(17)] = 333,
  [SMALL_STATE(18)] = 343,
  [SMALL_STATE(19)] = 353,
  [SMALL_STATE(20)] = 363,
  [SMALL_STATE(21)] = 373,
  [SMALL_STATE(22)] = 383,
  [SMALL_STATE(23)] = 393,
  [SMALL_STATE(24)] = 403,
  [SMALL_STATE(25)] = 416,
  [SMALL_STATE(26)] = 429,
  [SMALL_STATE(27)] = 442,
  [SMALL_STATE(28)] = 450,
  [SMALL_STATE(29)] = 458,
  [SMALL_STATE(30)] = 466,
  [SMALL_STATE(31)] = 474,
  [SMALL_STATE(32)] = 481,
  [SMALL_STATE(33)] = 488,
  [SMALL_STATE(34)] = 495,
  [SMALL_STATE(35)] = 502,
  [SMALL_STATE(36)] = 509,
  [SMALL_STATE(37)] = 516,
  [SMALL_STATE(38)] = 523,
  [SMALL_STATE(39)] = 530,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_local_declarations_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_local_declarations_repeat1, 2), SHIFT_REPEAT(38),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_string, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(6),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3, .production_id = 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_declarations, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_declarations, 4),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_name, 1),
  [108] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_word,
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
