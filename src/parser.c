#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 24
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_logs_token1 = 1,
  sym_year_month_date = 2,
  sym_time_with_offset = 3,
  sym_time_without_offset = 4,
  sym_comment = 5,
  anon_sym_WARN = 6,
  anon_sym_ERROR = 7,
  anon_sym_FATAL = 8,
  anon_sym_DEBUG = 9,
  anon_sym_INFO = 10,
  anon_sym_TRACE = 11,
  sym_module_name = 12,
  anon_sym_DQUOTE = 13,
  aux_sym_quoted_string_token1 = 14,
  aux_sym__uuid_token1 = 15,
  aux_sym__uuid_token2 = 16,
  aux_sym__ipv4_token1 = 17,
  aux_sym__ipv4_token2 = 18,
  aux_sym_constant_token1 = 19,
  aux_sym_constant_token2 = 20,
  sym_logs = 21,
  sym__logline = 22,
  sym_log_date = 23,
  sym_log_time = 24,
  sym_level = 25,
  sym_bad_level = 26,
  sym_ok_level = 27,
  sym_quoted_string = 28,
  sym__important = 29,
  sym__uuid = 30,
  sym__ipv4 = 31,
  sym_constant = 32,
  aux_sym_logs_repeat1 = 33,
  aux_sym__logline_repeat1 = 34,
  aux_sym_quoted_string_repeat1 = 35,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_logs_token1] = "logs_token1",
  [sym_year_month_date] = "year_month_date",
  [sym_time_with_offset] = "time_with_offset",
  [sym_time_without_offset] = "time_without_offset",
  [sym_comment] = "comment",
  [anon_sym_WARN] = "WARN",
  [anon_sym_ERROR] = "ERROR",
  [anon_sym_FATAL] = "FATAL",
  [anon_sym_DEBUG] = "DEBUG",
  [anon_sym_INFO] = "INFO",
  [anon_sym_TRACE] = "TRACE",
  [sym_module_name] = "module_name",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_string_token1] = "quoted_string_token1",
  [aux_sym__uuid_token1] = "_uuid_token1",
  [aux_sym__uuid_token2] = "_uuid_token2",
  [aux_sym__ipv4_token1] = "_ipv4_token1",
  [aux_sym__ipv4_token2] = "_ipv4_token2",
  [aux_sym_constant_token1] = "constant_token1",
  [aux_sym_constant_token2] = "constant_token2",
  [sym_logs] = "logs",
  [sym__logline] = "_logline",
  [sym_log_date] = "log_date",
  [sym_log_time] = "log_time",
  [sym_level] = "level",
  [sym_bad_level] = "bad_level",
  [sym_ok_level] = "ok_level",
  [sym_quoted_string] = "quoted_string",
  [sym__important] = "_important",
  [sym__uuid] = "_uuid",
  [sym__ipv4] = "_ipv4",
  [sym_constant] = "constant",
  [aux_sym_logs_repeat1] = "logs_repeat1",
  [aux_sym__logline_repeat1] = "_logline_repeat1",
  [aux_sym_quoted_string_repeat1] = "quoted_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_logs_token1] = aux_sym_logs_token1,
  [sym_year_month_date] = sym_year_month_date,
  [sym_time_with_offset] = sym_time_with_offset,
  [sym_time_without_offset] = sym_time_without_offset,
  [sym_comment] = sym_comment,
  [anon_sym_WARN] = anon_sym_WARN,
  [anon_sym_ERROR] = anon_sym_ERROR,
  [anon_sym_FATAL] = anon_sym_FATAL,
  [anon_sym_DEBUG] = anon_sym_DEBUG,
  [anon_sym_INFO] = anon_sym_INFO,
  [anon_sym_TRACE] = anon_sym_TRACE,
  [sym_module_name] = sym_module_name,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_string_token1] = aux_sym_quoted_string_token1,
  [aux_sym__uuid_token1] = aux_sym__uuid_token1,
  [aux_sym__uuid_token2] = aux_sym__uuid_token2,
  [aux_sym__ipv4_token1] = aux_sym__ipv4_token1,
  [aux_sym__ipv4_token2] = aux_sym__ipv4_token2,
  [aux_sym_constant_token1] = aux_sym_constant_token1,
  [aux_sym_constant_token2] = aux_sym_constant_token2,
  [sym_logs] = sym_logs,
  [sym__logline] = sym__logline,
  [sym_log_date] = sym_log_date,
  [sym_log_time] = sym_log_time,
  [sym_level] = sym_level,
  [sym_bad_level] = sym_bad_level,
  [sym_ok_level] = sym_ok_level,
  [sym_quoted_string] = sym_quoted_string,
  [sym__important] = sym__important,
  [sym__uuid] = sym__uuid,
  [sym__ipv4] = sym__ipv4,
  [sym_constant] = sym_constant,
  [aux_sym_logs_repeat1] = aux_sym_logs_repeat1,
  [aux_sym__logline_repeat1] = aux_sym__logline_repeat1,
  [aux_sym_quoted_string_repeat1] = aux_sym_quoted_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_logs_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_year_month_date] = {
    .visible = true,
    .named = true,
  },
  [sym_time_with_offset] = {
    .visible = true,
    .named = true,
  },
  [sym_time_without_offset] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_WARN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ERROR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FATAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEBUG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INFO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_module_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__uuid_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__uuid_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__ipv4_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__ipv4_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_logs] = {
    .visible = true,
    .named = true,
  },
  [sym__logline] = {
    .visible = false,
    .named = true,
  },
  [sym_log_date] = {
    .visible = true,
    .named = true,
  },
  [sym_log_time] = {
    .visible = true,
    .named = true,
  },
  [sym_level] = {
    .visible = true,
    .named = true,
  },
  [sym_bad_level] = {
    .visible = true,
    .named = true,
  },
  [sym_ok_level] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym__important] = {
    .visible = false,
    .named = true,
  },
  [sym__uuid] = {
    .visible = false,
    .named = true,
  },
  [sym__ipv4] = {
    .visible = false,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_logs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__logline_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(175);
      if (lookahead == '"') ADVANCE(190);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '2') ADVANCE(9);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead == 'D') ADVANCE(75);
      if (lookahead == 'E') ADVANCE(87);
      if (lookahead == 'F') ADVANCE(69);
      if (lookahead == 'I') ADVANCE(80);
      if (lookahead == 'T') ADVANCE(88);
      if (lookahead == 'W') ADVANCE(72);
      if (lookahead == 'f') ADVANCE(91);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(149);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '"') ADVANCE(190);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead == 'f') ADVANCE(91);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '"') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(191);
      if (lookahead != 0) ADVANCE(192);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(190);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '2') ADVANCE(206);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead == 'D') ADVANCE(75);
      if (lookahead == 'E') ADVANCE(87);
      if (lookahead == 'F') ADVANCE(69);
      if (lookahead == 'I') ADVANCE(80);
      if (lookahead == 'T') ADVANCE(88);
      if (lookahead == 'W') ADVANCE(72);
      if (lookahead == 'f') ADVANCE(91);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(149);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(190);
      if (lookahead == 'f') ADVANCE(91);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(190);
      if (lookahead == 'f') ADVANCE(91);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == ':') ADVANCE(103);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(8);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(109);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(109);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(109);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(109);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(61);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(60);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(139);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(146);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(161);
      END_STATE();
    case 49:
      if (lookahead == '.') ADVANCE(109);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 50:
      if (lookahead == '.') ADVANCE(109);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 51:
      if (lookahead == '.') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(112);
      END_STATE();
    case 53:
      if (lookahead == '.') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == '.') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 55:
      if (lookahead == '.') ADVANCE(117);
      END_STATE();
    case 56:
      if (lookahead == '.') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 57:
      if (lookahead == '.') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 58:
      if (lookahead == '0') ADVANCE(106);
      if (lookahead == '1') ADVANCE(99);
      END_STATE();
    case 59:
      if (lookahead == '0') ADVANCE(179);
      END_STATE();
    case 60:
      if (lookahead == '0') ADVANCE(105);
      if (lookahead == '1') ADVANCE(100);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 61:
      if (lookahead == '0') ADVANCE(107);
      if (lookahead == '3') ADVANCE(97);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(111);
      END_STATE();
    case 62:
      if (lookahead == '2') ADVANCE(101);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(116);
      END_STATE();
    case 63:
      if (lookahead == '2') ADVANCE(102);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      END_STATE();
    case 64:
      if (lookahead == '3') ADVANCE(202);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 65:
      if (lookahead == '6') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(113);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(103);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(65);
      END_STATE();
    case 68:
      if (lookahead == ':') ADVANCE(104);
      END_STATE();
    case 69:
      if (lookahead == 'A') ADVANCE(89);
      END_STATE();
    case 70:
      if (lookahead == 'A') ADVANCE(74);
      END_STATE();
    case 71:
      if (lookahead == 'A') ADVANCE(79);
      END_STATE();
    case 72:
      if (lookahead == 'A') ADVANCE(86);
      END_STATE();
    case 73:
      if (lookahead == 'B') ADVANCE(90);
      END_STATE();
    case 74:
      if (lookahead == 'C') ADVANCE(76);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(73);
      END_STATE();
    case 76:
      if (lookahead == 'E') ADVANCE(187);
      END_STATE();
    case 77:
      if (lookahead == 'F') ADVANCE(82);
      END_STATE();
    case 78:
      if (lookahead == 'G') ADVANCE(185);
      END_STATE();
    case 79:
      if (lookahead == 'L') ADVANCE(184);
      END_STATE();
    case 80:
      if (lookahead == 'N') ADVANCE(77);
      END_STATE();
    case 81:
      if (lookahead == 'N') ADVANCE(182);
      END_STATE();
    case 82:
      if (lookahead == 'O') ADVANCE(186);
      END_STATE();
    case 83:
      if (lookahead == 'O') ADVANCE(85);
      END_STATE();
    case 84:
      if (lookahead == 'R') ADVANCE(83);
      END_STATE();
    case 85:
      if (lookahead == 'R') ADVANCE(183);
      END_STATE();
    case 86:
      if (lookahead == 'R') ADVANCE(81);
      END_STATE();
    case 87:
      if (lookahead == 'R') ADVANCE(84);
      END_STATE();
    case 88:
      if (lookahead == 'R') ADVANCE(70);
      END_STATE();
    case 89:
      if (lookahead == 'T') ADVANCE(71);
      END_STATE();
    case 90:
      if (lookahead == 'U') ADVANCE(78);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 95:
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 96:
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 97:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == ' ' ||
          lookahead == 'T' ||
          lookahead == 't') ADVANCE(177);
      END_STATE();
    case 99:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(42);
      END_STATE();
    case 100:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(43);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 101:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(68);
      END_STATE();
    case 102:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(66);
      END_STATE();
    case 103:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(110);
      END_STATE();
    case 104:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(114);
      END_STATE();
    case 105:
      if (lookahead == '0' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 106:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 107:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 108:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 109:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 110:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 111:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 112:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 113:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 114:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 115:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 116:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 117:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 118:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 119:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 120:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      END_STATE();
    case 121:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(193);
      END_STATE();
    case 122:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      END_STATE();
    case 123:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 124:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      END_STATE();
    case 125:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      END_STATE();
    case 126:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      END_STATE();
    case 127:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      END_STATE();
    case 128:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 129:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      END_STATE();
    case 130:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 131:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 132:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 133:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      END_STATE();
    case 134:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 135:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 136:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 137:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      END_STATE();
    case 138:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      END_STATE();
    case 139:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      END_STATE();
    case 140:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      END_STATE();
    case 141:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      END_STATE();
    case 142:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      END_STATE();
    case 143:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 144:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(143);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(140);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      END_STATE();
    case 157:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      END_STATE();
    case 163:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(162);
      END_STATE();
    case 164:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      END_STATE();
    case 165:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 166:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(165);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      END_STATE();
    case 168:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(167);
      END_STATE();
    case 169:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 170:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(169);
      END_STATE();
    case 171:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      END_STATE();
    case 172:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(171);
      END_STATE();
    case 173:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 174:
      if (eof) ADVANCE(175);
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '"') ADVANCE(190);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead == 'f') ADVANCE(91);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_logs_token1);
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_year_month_date);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_time_with_offset);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_time_without_offset);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(62);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(178);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_time_without_offset);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(62);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_WARN);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_ERROR);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_FATAL);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_DEBUG);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_INFO);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_module_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_module_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__uuid_token1);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__uuid_token2);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__uuid_token2);
      if (lookahead == '-') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__uuid_token2);
      if (lookahead == '-') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__uuid_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__ipv4_token1);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__ipv4_token1);
      if (lookahead == '/') ADVANCE(64);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__ipv4_token1);
      if (lookahead == '/') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__ipv4_token1);
      if (lookahead == '/') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__ipv4_token1);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(198);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__ipv4_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__ipv4_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == ':') ADVANCE(103);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(205);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(208);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(109);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(109);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(109);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(109);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(60);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(132);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '.') ADVANCE(109);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '.') ADVANCE(109);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '.') ADVANCE(109);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(246);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 174},
  [2] = {.lex_state = 174},
  [3] = {.lex_state = 174},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 174},
  [6] = {.lex_state = 174},
  [7] = {.lex_state = 174},
  [8] = {.lex_state = 174},
  [9] = {.lex_state = 174},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 174},
  [12] = {.lex_state = 174},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 63},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 63},
  [19] = {.lex_state = 188},
  [20] = {.lex_state = 188},
  [21] = {.lex_state = 188},
  [22] = {.lex_state = 188},
  [23] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_year_month_date] = ACTIONS(1),
    [sym_time_with_offset] = ACTIONS(1),
    [sym_time_without_offset] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_WARN] = ACTIONS(1),
    [anon_sym_ERROR] = ACTIONS(1),
    [anon_sym_FATAL] = ACTIONS(1),
    [anon_sym_DEBUG] = ACTIONS(1),
    [anon_sym_INFO] = ACTIONS(1),
    [anon_sym_TRACE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym__uuid_token1] = ACTIONS(1),
    [aux_sym__uuid_token2] = ACTIONS(1),
    [aux_sym__ipv4_token1] = ACTIONS(1),
    [aux_sym__ipv4_token2] = ACTIONS(1),
    [aux_sym_constant_token1] = ACTIONS(1),
    [aux_sym_constant_token2] = ACTIONS(1),
  },
  [1] = {
    [sym_logs] = STATE(23),
    [sym__logline] = STATE(11),
    [sym_log_date] = STATE(16),
    [aux_sym_logs_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_logs_token1] = ACTIONS(5),
    [sym_year_month_date] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      aux_sym__ipv4_token1,
    ACTIONS(11), 2,
      ts_builtin_sym_end,
      aux_sym_logs_token1,
    ACTIONS(13), 2,
      sym_year_month_date,
      sym_comment,
    STATE(9), 2,
      sym__uuid,
      sym__ipv4,
    ACTIONS(18), 4,
      aux_sym__uuid_token1,
      aux_sym__uuid_token2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(2), 4,
      sym_quoted_string,
      sym__important,
      sym_constant,
      aux_sym__logline_repeat1,
  [31] = 7,
    ACTIONS(28), 1,
      anon_sym_DQUOTE,
    ACTIONS(32), 1,
      aux_sym__ipv4_token1,
    ACTIONS(24), 2,
      ts_builtin_sym_end,
      aux_sym_logs_token1,
    ACTIONS(26), 2,
      sym_year_month_date,
      sym_comment,
    STATE(9), 2,
      sym__uuid,
      sym__ipv4,
    ACTIONS(30), 4,
      aux_sym__uuid_token1,
      aux_sym__uuid_token2,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
    STATE(2), 4,
      sym_quoted_string,
      sym__important,
      sym_constant,
      aux_sym__logline_repeat1,
  [62] = 6,
    ACTIONS(34), 1,
      anon_sym_DQUOTE,
    ACTIONS(38), 1,
      aux_sym__ipv4_token1,
    ACTIONS(30), 2,
      aux_sym__uuid_token2,
      aux_sym_constant_token1,
    ACTIONS(36), 2,
      aux_sym__uuid_token1,
      aux_sym_constant_token2,
    STATE(9), 2,
      sym__uuid,
      sym__ipv4,
    STATE(3), 4,
      sym_quoted_string,
      sym__important,
      sym_constant,
      aux_sym__logline_repeat1,
  [87] = 3,
    ACTIONS(44), 1,
      aux_sym__ipv4_token2,
    ACTIONS(40), 2,
      ts_builtin_sym_end,
      aux_sym_logs_token1,
    ACTIONS(42), 8,
      sym_year_month_date,
      sym_comment,
      anon_sym_DQUOTE,
      aux_sym__uuid_token1,
      aux_sym__uuid_token2,
      aux_sym__ipv4_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
  [105] = 2,
    ACTIONS(46), 2,
      ts_builtin_sym_end,
      aux_sym_logs_token1,
    ACTIONS(48), 8,
      sym_year_month_date,
      sym_comment,
      anon_sym_DQUOTE,
      aux_sym__uuid_token1,
      aux_sym__uuid_token2,
      aux_sym__ipv4_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
  [120] = 2,
    ACTIONS(50), 2,
      ts_builtin_sym_end,
      aux_sym_logs_token1,
    ACTIONS(52), 8,
      sym_year_month_date,
      sym_comment,
      anon_sym_DQUOTE,
      aux_sym__uuid_token1,
      aux_sym__uuid_token2,
      aux_sym__ipv4_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
  [135] = 2,
    ACTIONS(54), 2,
      ts_builtin_sym_end,
      aux_sym_logs_token1,
    ACTIONS(56), 8,
      sym_year_month_date,
      sym_comment,
      anon_sym_DQUOTE,
      aux_sym__uuid_token1,
      aux_sym__uuid_token2,
      aux_sym__ipv4_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
  [150] = 2,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      aux_sym_logs_token1,
    ACTIONS(60), 8,
      sym_year_month_date,
      sym_comment,
      anon_sym_DQUOTE,
      aux_sym__uuid_token1,
      aux_sym__uuid_token2,
      aux_sym__ipv4_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
  [165] = 4,
    STATE(20), 1,
      sym_level,
    STATE(19), 2,
      sym_bad_level,
      sym_ok_level,
    ACTIONS(62), 3,
      anon_sym_WARN,
      anon_sym_ERROR,
      anon_sym_FATAL,
    ACTIONS(64), 3,
      anon_sym_DEBUG,
      anon_sym_INFO,
      anon_sym_TRACE,
  [183] = 6,
    ACTIONS(7), 1,
      sym_year_month_date,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 1,
      aux_sym_logs_token1,
    ACTIONS(70), 1,
      sym_comment,
    STATE(16), 1,
      sym_log_date,
    STATE(12), 2,
      sym__logline,
      aux_sym_logs_repeat1,
  [203] = 6,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(74), 1,
      aux_sym_logs_token1,
    ACTIONS(77), 1,
      sym_year_month_date,
    ACTIONS(80), 1,
      sym_comment,
    STATE(16), 1,
      sym_log_date,
    STATE(12), 2,
      sym__logline,
      aux_sym_logs_repeat1,
  [223] = 1,
    ACTIONS(83), 6,
      anon_sym_WARN,
      anon_sym_ERROR,
      anon_sym_FATAL,
      anon_sym_DEBUG,
      anon_sym_INFO,
      anon_sym_TRACE,
  [232] = 3,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      aux_sym_quoted_string_token1,
    STATE(15), 1,
      aux_sym_quoted_string_repeat1,
  [242] = 3,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      aux_sym_quoted_string_token1,
    STATE(17), 1,
      aux_sym_quoted_string_repeat1,
  [252] = 3,
    ACTIONS(93), 1,
      sym_time_with_offset,
    ACTIONS(95), 1,
      sym_time_without_offset,
    STATE(10), 1,
      sym_log_time,
  [262] = 3,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      aux_sym_quoted_string_token1,
    STATE(17), 1,
      aux_sym_quoted_string_repeat1,
  [272] = 2,
    ACTIONS(102), 1,
      sym_time_with_offset,
    ACTIONS(104), 1,
      sym_time_without_offset,
  [279] = 1,
    ACTIONS(106), 1,
      sym_module_name,
  [283] = 1,
    ACTIONS(108), 1,
      sym_module_name,
  [287] = 1,
    ACTIONS(110), 1,
      sym_module_name,
  [291] = 1,
    ACTIONS(112), 1,
      sym_module_name,
  [295] = 1,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 87,
  [SMALL_STATE(6)] = 105,
  [SMALL_STATE(7)] = 120,
  [SMALL_STATE(8)] = 135,
  [SMALL_STATE(9)] = 150,
  [SMALL_STATE(10)] = 165,
  [SMALL_STATE(11)] = 183,
  [SMALL_STATE(12)] = 203,
  [SMALL_STATE(13)] = 223,
  [SMALL_STATE(14)] = 232,
  [SMALL_STATE(15)] = 242,
  [SMALL_STATE(16)] = 252,
  [SMALL_STATE(17)] = 262,
  [SMALL_STATE(18)] = 272,
  [SMALL_STATE(19)] = 279,
  [SMALL_STATE(20)] = 283,
  [SMALL_STATE(21)] = 287,
  [SMALL_STATE(22)] = 291,
  [SMALL_STATE(23)] = 295,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logs, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__logline_repeat1, 2),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__logline_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__logline_repeat1, 2), SHIFT_REPEAT(14),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__logline_repeat1, 2), SHIFT_REPEAT(9),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__logline_repeat1, 2), SHIFT_REPEAT(5),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logline, 5),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__logline, 5),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ipv4, 1),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ipv4, 1),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ipv4, 2),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ipv4, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logs, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_logs_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_logs_repeat1, 2), SHIFT_REPEAT(12),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_logs_repeat1, 2), SHIFT_REPEAT(18),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_logs_repeat1, 2), SHIFT_REPEAT(12),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_time, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(17),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_date, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_date, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_level, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ok_level, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bad_level, 1),
  [114] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_tracinglog(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
