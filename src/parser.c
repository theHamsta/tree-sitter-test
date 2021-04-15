#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 36
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_body_token1 = 1,
  aux_sym_body_token2 = 2,
  aux_sym_body_token3 = 3,
  aux_sym_body_token4 = 4,
  sym_eq_divider = 5,
  sym_dash_divider = 6,
  sym__newline = 7,
  sym_heading_name = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  sym_identifier = 11,
  sym_program = 12,
  sym_test = 13,
  sym_header = 14,
  sym_body = 15,
  sym_s_expression = 16,
  sym__term = 17,
  sym_group = 18,
  aux_sym_program_repeat1 = 19,
  aux_sym_test_repeat1 = 20,
  aux_sym_body_repeat1 = 21,
  aux_sym_group_repeat1 = 22,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_body_token1] = "body_token1",
  [aux_sym_body_token2] = "body_token2",
  [aux_sym_body_token3] = "body_token3",
  [aux_sym_body_token4] = "body_token4",
  [sym_eq_divider] = "eq_divider",
  [sym_dash_divider] = "dash_divider",
  [sym__newline] = "_newline",
  [sym_heading_name] = "heading_name",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_identifier] = "identifier",
  [sym_program] = "program",
  [sym_test] = "test",
  [sym_header] = "header",
  [sym_body] = "body",
  [sym_s_expression] = "s_expression",
  [sym__term] = "_term",
  [sym_group] = "group",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_test_repeat1] = "test_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_group_repeat1] = "group_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_body_token1] = aux_sym_body_token1,
  [aux_sym_body_token2] = aux_sym_body_token2,
  [aux_sym_body_token3] = aux_sym_body_token3,
  [aux_sym_body_token4] = aux_sym_body_token4,
  [sym_eq_divider] = sym_eq_divider,
  [sym_dash_divider] = sym_dash_divider,
  [sym__newline] = sym__newline,
  [sym_heading_name] = sym_heading_name,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_identifier] = sym_identifier,
  [sym_program] = sym_program,
  [sym_test] = sym_test,
  [sym_header] = sym_header,
  [sym_body] = sym_body,
  [sym_s_expression] = sym_s_expression,
  [sym__term] = sym__term,
  [sym_group] = sym_group,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_test_repeat1] = aux_sym_test_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_group_repeat1] = aux_sym_group_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_body_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_token4] = {
    .visible = false,
    .named = false,
  },
  [sym_eq_divider] = {
    .visible = true,
    .named = true,
  },
  [sym_dash_divider] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_heading_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_test] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_s_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__term] = {
    .visible = false,
    .named = true,
  },
  [sym_group] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_test_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_group_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < '{'
    ? (c < '%'
      ? (c < '!'
        ? c == 0
        : c <= '#')
      : (c <= '@' || (c < '`'
        ? (c >= '[' && c <= '^')
        : c <= '`')))
    : (c <= '~' || (c < 8288
      ? (c < 8203
        ? c == 160
        : c <= 8203)
      : (c <= 8288 || c == 65279))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < '['
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= '#' || (c < ':'
        ? (c >= '%' && c <= '/')
        : c <= '@')))
    : (c <= '^' || (c < 8203
      ? (c < '{'
        ? c == '`'
        : (c <= '~' || c == 160))
      : (c <= 8203 || (c < 65279
        ? c == 8288
        : c <= 65279)))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(27);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(27);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(27);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(20);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(7);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(9);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(27);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_body_token1);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_body_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_body_token1);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_body_token2);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(13);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_body_token3);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_body_token4);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_eq_divider);
      if (lookahead == '=') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_dash_divider);
      if (lookahead == '-') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '\r') ADVANCE(3);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_heading_name);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_heading_name);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '=') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(27);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 11},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 11},
  [35] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_body_token3] = ACTIONS(1),
    [aux_sym_body_token4] = ACTIONS(1),
    [sym_eq_divider] = ACTIONS(1),
    [sym_dash_divider] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(31),
    [sym_test] = STATE(15),
    [sym_header] = STATE(4),
    [aux_sym_program_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_eq_divider] = ACTIONS(5),
    [sym__newline] = ACTIONS(7),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(9), 1,
      sym__newline,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(6), 1,
      aux_sym_test_repeat1,
    STATE(21), 1,
      sym_s_expression,
    STATE(19), 2,
      sym__term,
      sym_group,
  [20] = 6,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym__newline,
    STATE(18), 1,
      aux_sym_test_repeat1,
    STATE(24), 1,
      sym_s_expression,
    STATE(19), 2,
      sym__term,
      sym_group,
  [40] = 4,
    ACTIONS(19), 1,
      sym_dash_divider,
    STATE(9), 1,
      aux_sym_body_repeat1,
    STATE(33), 1,
      sym_body,
    ACTIONS(17), 4,
      aux_sym_body_token1,
      aux_sym_body_token2,
      aux_sym_body_token3,
      aux_sym_body_token4,
  [56] = 6,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(21), 1,
      sym__newline,
    STATE(3), 1,
      aux_sym_test_repeat1,
    STATE(22), 1,
      sym_s_expression,
    STATE(19), 2,
      sym__term,
      sym_group,
  [76] = 6,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym__newline,
    STATE(18), 1,
      aux_sym_test_repeat1,
    STATE(22), 1,
      sym_s_expression,
    STATE(19), 2,
      sym__term,
      sym_group,
  [96] = 3,
    ACTIONS(26), 1,
      sym_dash_divider,
    STATE(7), 1,
      aux_sym_body_repeat1,
    ACTIONS(23), 4,
      aux_sym_body_token1,
      aux_sym_body_token2,
      aux_sym_body_token3,
      aux_sym_body_token4,
  [109] = 4,
    ACTIONS(28), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(8), 3,
      sym__term,
      sym_group,
      aux_sym_group_repeat1,
  [124] = 3,
    ACTIONS(38), 1,
      sym_dash_divider,
    STATE(7), 1,
      aux_sym_body_repeat1,
    ACTIONS(36), 4,
      aux_sym_body_token1,
      aux_sym_body_token2,
      aux_sym_body_token3,
      aux_sym_body_token4,
  [137] = 5,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 1,
      sym_eq_divider,
    ACTIONS(45), 1,
      sym__newline,
    STATE(4), 1,
      sym_header,
    STATE(10), 2,
      sym_test,
      aux_sym_program_repeat1,
  [154] = 4,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_RPAREN,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(8), 3,
      sym__term,
      sym_group,
      aux_sym_group_repeat1,
  [169] = 4,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      anon_sym_RPAREN,
    ACTIONS(56), 1,
      sym_identifier,
    STATE(11), 3,
      sym__term,
      sym_group,
      aux_sym_group_repeat1,
  [184] = 4,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      anon_sym_RPAREN,
    ACTIONS(60), 1,
      sym_identifier,
    STATE(14), 3,
      sym__term,
      sym_group,
      aux_sym_group_repeat1,
  [199] = 4,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(62), 1,
      anon_sym_RPAREN,
    STATE(8), 3,
      sym__term,
      sym_group,
      aux_sym_group_repeat1,
  [214] = 5,
    ACTIONS(5), 1,
      sym_eq_divider,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 1,
      sym__newline,
    STATE(4), 1,
      sym_header,
    STATE(10), 2,
      sym_test,
      aux_sym_program_repeat1,
  [231] = 1,
    ACTIONS(68), 5,
      aux_sym_body_token1,
      aux_sym_body_token2,
      aux_sym_body_token3,
      aux_sym_body_token4,
      sym_dash_divider,
  [239] = 1,
    ACTIONS(70), 5,
      aux_sym_body_token1,
      aux_sym_body_token2,
      aux_sym_body_token3,
      aux_sym_body_token4,
      sym_dash_divider,
  [247] = 3,
    ACTIONS(72), 1,
      sym__newline,
    STATE(18), 1,
      aux_sym_test_repeat1,
    ACTIONS(75), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [258] = 2,
    ACTIONS(79), 1,
      sym_eq_divider,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      sym__newline,
  [266] = 2,
    ACTIONS(83), 1,
      sym_eq_divider,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      sym__newline,
  [274] = 2,
    ACTIONS(87), 1,
      sym_eq_divider,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      sym__newline,
  [282] = 2,
    ACTIONS(91), 1,
      sym_eq_divider,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      sym__newline,
  [290] = 2,
    ACTIONS(95), 1,
      sym_eq_divider,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      sym__newline,
  [298] = 2,
    ACTIONS(99), 1,
      sym_eq_divider,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      sym__newline,
  [306] = 1,
    ACTIONS(81), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [312] = 1,
    ACTIONS(93), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [318] = 2,
    ACTIONS(101), 1,
      sym__newline,
    ACTIONS(103), 1,
      sym_heading_name,
  [325] = 1,
    ACTIONS(105), 1,
      sym__newline,
  [329] = 1,
    ACTIONS(107), 1,
      sym__newline,
  [333] = 1,
    ACTIONS(109), 1,
      sym_eq_divider,
  [337] = 1,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
  [341] = 1,
    ACTIONS(113), 1,
      sym__newline,
  [345] = 1,
    ACTIONS(115), 1,
      sym_dash_divider,
  [349] = 1,
    ACTIONS(117), 1,
      sym__newline,
  [353] = 1,
    ACTIONS(119), 1,
      sym_eq_divider,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 56,
  [SMALL_STATE(6)] = 76,
  [SMALL_STATE(7)] = 96,
  [SMALL_STATE(8)] = 109,
  [SMALL_STATE(9)] = 124,
  [SMALL_STATE(10)] = 137,
  [SMALL_STATE(11)] = 154,
  [SMALL_STATE(12)] = 169,
  [SMALL_STATE(13)] = 184,
  [SMALL_STATE(14)] = 199,
  [SMALL_STATE(15)] = 214,
  [SMALL_STATE(16)] = 231,
  [SMALL_STATE(17)] = 239,
  [SMALL_STATE(18)] = 247,
  [SMALL_STATE(19)] = 258,
  [SMALL_STATE(20)] = 266,
  [SMALL_STATE(21)] = 274,
  [SMALL_STATE(22)] = 282,
  [SMALL_STATE(23)] = 290,
  [SMALL_STATE(24)] = 298,
  [SMALL_STATE(25)] = 306,
  [SMALL_STATE(26)] = 312,
  [SMALL_STATE(27)] = 318,
  [SMALL_STATE(28)] = 325,
  [SMALL_STATE(29)] = 329,
  [SMALL_STATE(30)] = 333,
  [SMALL_STATE(31)] = 337,
  [SMALL_STATE(32)] = 341,
  [SMALL_STATE(33)] = 345,
  [SMALL_STATE(34)] = 349,
  [SMALL_STATE(35)] = 353,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(7),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(12),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(8),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(28),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 6),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_repeat1, 2), SHIFT_REPEAT(18),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_repeat1, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_expression, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_expression, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 4),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 4),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 5),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 5),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [111] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_test(void) {
  static TSLanguage language = {
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
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
