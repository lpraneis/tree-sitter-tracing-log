#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
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
  aux_sym_string_token1 = 14,
  sym__uuid = 15,
  sym__ipv4 = 16,
  aux_sym_constant_token1 = 17,
  aux_sym_constant_token2 = 18,
  sym_logs = 19,
  sym__logline = 20,
  sym_log_date = 21,
  sym_log_time = 22,
  sym_level = 23,
  sym_bad_level = 24,
  sym_ok_level = 25,
  sym_string = 26,
  sym_important = 27,
  sym_constant = 28,
  aux_sym_logs_repeat1 = 29,
  aux_sym__logline_repeat1 = 30,
  aux_sym_string_repeat1 = 31,
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
  [aux_sym_string_token1] = "string_token1",
  [sym__uuid] = "_uuid",
  [sym__ipv4] = "_ipv4",
  [aux_sym_constant_token1] = "constant_token1",
  [aux_sym_constant_token2] = "constant_token2",
  [sym_logs] = "logs",
  [sym__logline] = "_logline",
  [sym_log_date] = "log_date",
  [sym_log_time] = "log_time",
  [sym_level] = "level",
  [sym_bad_level] = "bad_level",
  [sym_ok_level] = "ok_level",
  [sym_string] = "string",
  [sym_important] = "important",
  [sym_constant] = "constant",
  [aux_sym_logs_repeat1] = "logs_repeat1",
  [aux_sym__logline_repeat1] = "_logline_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
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
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym__uuid] = sym__uuid,
  [sym__ipv4] = sym__ipv4,
  [aux_sym_constant_token1] = aux_sym_constant_token1,
  [aux_sym_constant_token2] = aux_sym_constant_token2,
  [sym_logs] = sym_logs,
  [sym__logline] = sym__logline,
  [sym_log_date] = sym_log_date,
  [sym_log_time] = sym_log_time,
  [sym_level] = sym_level,
  [sym_bad_level] = sym_bad_level,
  [sym_ok_level] = sym_ok_level,
  [sym_string] = sym_string,
  [sym_important] = sym_important,
  [sym_constant] = sym_constant,
  [aux_sym_logs_repeat1] = aux_sym_logs_repeat1,
  [aux_sym__logline_repeat1] = aux_sym__logline_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
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
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__uuid] = {
    .visible = false,
    .named = true,
  },
  [sym__ipv4] = {
    .visible = false,
    .named = true,
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
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_important] = {
    .visible = true,
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
  [aux_sym_string_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(128);
      if (lookahead == '"') ADVANCE(143);
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == '2') ADVANCE(9);
      if (lookahead == 'D') ADVANCE(52);
      if (lookahead == 'E') ADVANCE(64);
      if (lookahead == 'F') ADVANCE(46);
      if (lookahead == 'I') ADVANCE(57);
      if (lookahead == 'T') ADVANCE(65);
      if (lookahead == 'W') ADVANCE(49);
      if (lookahead == 'f') ADVANCE(68);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(111);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(134);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '"') ADVANCE(143);
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == 'f') ADVANCE(68);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '"') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(143);
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == '2') ADVANCE(154);
      if (lookahead == 'D') ADVANCE(52);
      if (lookahead == 'E') ADVANCE(64);
      if (lookahead == 'F') ADVANCE(46);
      if (lookahead == 'I') ADVANCE(57);
      if (lookahead == 'T') ADVANCE(65);
      if (lookahead == 'W') ADVANCE(49);
      if (lookahead == 'f') ADVANCE(68);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(111);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(143);
      if (lookahead == 'f') ADVANCE(68);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(143);
      if (lookahead == 'f') ADVANCE(68);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(80);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '.') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(8);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '.') ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '.') ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '.') ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '.') ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(35);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(35);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(35);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(35);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(38);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(109);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(125);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(116);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(122);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(88);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(93);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == '1') ADVANCE(76);
      END_STATE();
    case 36:
      if (lookahead == '0') ADVANCE(132);
      END_STATE();
    case 37:
      if (lookahead == '0') ADVANCE(82);
      if (lookahead == '1') ADVANCE(77);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      END_STATE();
    case 38:
      if (lookahead == '0') ADVANCE(84);
      if (lookahead == '3') ADVANCE(74);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(87);
      END_STATE();
    case 39:
      if (lookahead == '2') ADVANCE(78);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(92);
      END_STATE();
    case 40:
      if (lookahead == '2') ADVANCE(79);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      END_STATE();
    case 41:
      if (lookahead == '3') ADVANCE(151);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 42:
      if (lookahead == '6') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(89);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(80);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(42);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(81);
      END_STATE();
    case 46:
      if (lookahead == 'A') ADVANCE(66);
      END_STATE();
    case 47:
      if (lookahead == 'A') ADVANCE(51);
      END_STATE();
    case 48:
      if (lookahead == 'A') ADVANCE(56);
      END_STATE();
    case 49:
      if (lookahead == 'A') ADVANCE(63);
      END_STATE();
    case 50:
      if (lookahead == 'B') ADVANCE(67);
      END_STATE();
    case 51:
      if (lookahead == 'C') ADVANCE(53);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(50);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(140);
      END_STATE();
    case 54:
      if (lookahead == 'F') ADVANCE(59);
      END_STATE();
    case 55:
      if (lookahead == 'G') ADVANCE(138);
      END_STATE();
    case 56:
      if (lookahead == 'L') ADVANCE(137);
      END_STATE();
    case 57:
      if (lookahead == 'N') ADVANCE(54);
      END_STATE();
    case 58:
      if (lookahead == 'N') ADVANCE(135);
      END_STATE();
    case 59:
      if (lookahead == 'O') ADVANCE(139);
      END_STATE();
    case 60:
      if (lookahead == 'O') ADVANCE(62);
      END_STATE();
    case 61:
      if (lookahead == 'R') ADVANCE(60);
      END_STATE();
    case 62:
      if (lookahead == 'R') ADVANCE(136);
      END_STATE();
    case 63:
      if (lookahead == 'R') ADVANCE(58);
      END_STATE();
    case 64:
      if (lookahead == 'R') ADVANCE(61);
      END_STATE();
    case 65:
      if (lookahead == 'R') ADVANCE(47);
      END_STATE();
    case 66:
      if (lookahead == 'T') ADVANCE(48);
      END_STATE();
    case 67:
      if (lookahead == 'U') ADVANCE(55);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 74:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == ' ' ||
          lookahead == 'T' ||
          lookahead == 't') ADVANCE(130);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(19);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(20);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(45);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(43);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(86);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(90);
      END_STATE();
    case 82:
      if (lookahead == '0' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 83:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 84:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 93:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 97:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 98:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 99:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      END_STATE();
    case 100:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 101:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      END_STATE();
    case 102:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      END_STATE();
    case 103:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 104:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 105:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 106:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      END_STATE();
    case 107:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 108:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      END_STATE();
    case 109:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 110:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 111:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 112:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 113:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 114:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 115:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 116:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 117:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      END_STATE();
    case 118:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 119:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(117);
      END_STATE();
    case 120:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      END_STATE();
    case 121:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      END_STATE();
    case 122:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      END_STATE();
    case 123:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      END_STATE();
    case 124:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      END_STATE();
    case 125:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 126:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 127:
      if (eof) ADVANCE(128);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '"') ADVANCE(143);
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == 'f') ADVANCE(68);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_logs_token1);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_year_month_date);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_time_with_offset);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_time_without_offset);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(39);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(131);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_time_without_offset);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(39);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_WARN);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_ERROR);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_FATAL);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_DEBUG);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_INFO);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_module_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_module_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(145);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__uuid);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__ipv4);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__ipv4);
      if (lookahead == '/') ADVANCE(41);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__ipv4);
      if (lookahead == '/') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__ipv4);
      if (lookahead == '/') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__ipv4);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(147);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__ipv4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(80);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '.') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(153);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '.') ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '.') ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '.') ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '.') ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(35);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(35);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(35);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(35);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '.') ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '.') ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '.') ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 127},
  [2] = {.lex_state = 127},
  [3] = {.lex_state = 127},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 127},
  [6] = {.lex_state = 127},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 127},
  [9] = {.lex_state = 127},
  [10] = {.lex_state = 127},
  [11] = {.lex_state = 127},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 40},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 40},
  [18] = {.lex_state = 141},
  [19] = {.lex_state = 141},
  [20] = {.lex_state = 141},
  [21] = {.lex_state = 141},
  [22] = {.lex_state = 0},
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
    [sym__uuid] = ACTIONS(1),
    [sym__ipv4] = ACTIONS(1),
    [aux_sym_constant_token1] = ACTIONS(1),
    [aux_sym_constant_token2] = ACTIONS(1),
  },
  [1] = {
    [sym_logs] = STATE(22),
    [sym__logline] = STATE(10),
    [sym_log_date] = STATE(15),
    [aux_sym_logs_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_logs_token1] = ACTIONS(5),
    [sym_year_month_date] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 2,
      ts_builtin_sym_end,
      aux_sym_logs_token1,
    ACTIONS(13), 2,
      sym_year_month_date,
      sym_comment,
    STATE(2), 2,
      sym_important,
      aux_sym__logline_repeat1,
    STATE(8), 2,
      sym_string,
      sym_constant,
    ACTIONS(18), 4,
      sym__uuid,
      sym__ipv4,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
  [26] = 6,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      aux_sym_logs_token1,
    ACTIONS(23), 2,
      sym_year_month_date,
      sym_comment,
    STATE(2), 2,
      sym_important,
      aux_sym__logline_repeat1,
    STATE(8), 2,
      sym_string,
      sym_constant,
    ACTIONS(27), 4,
      sym__uuid,
      sym__ipv4,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
  [52] = 5,
    ACTIONS(27), 1,
      aux_sym_constant_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    STATE(3), 2,
      sym_important,
      aux_sym__logline_repeat1,
    STATE(8), 2,
      sym_string,
      sym_constant,
    ACTIONS(31), 3,
      sym__uuid,
      sym__ipv4,
      aux_sym_constant_token2,
  [72] = 2,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      aux_sym_logs_token1,
    ACTIONS(35), 7,
      sym_year_month_date,
      sym_comment,
      anon_sym_DQUOTE,
      sym__uuid,
      sym__ipv4,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
  [86] = 2,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      aux_sym_logs_token1,
    ACTIONS(39), 7,
      sym_year_month_date,
      sym_comment,
      anon_sym_DQUOTE,
      sym__uuid,
      sym__ipv4,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
  [100] = 4,
    STATE(18), 1,
      sym_level,
    STATE(19), 2,
      sym_bad_level,
      sym_ok_level,
    ACTIONS(41), 3,
      anon_sym_WARN,
      anon_sym_ERROR,
      anon_sym_FATAL,
    ACTIONS(43), 3,
      anon_sym_DEBUG,
      anon_sym_INFO,
      anon_sym_TRACE,
  [118] = 2,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      aux_sym_logs_token1,
    ACTIONS(47), 7,
      sym_year_month_date,
      sym_comment,
      anon_sym_DQUOTE,
      sym__uuid,
      sym__ipv4,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
  [132] = 2,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      aux_sym_logs_token1,
    ACTIONS(51), 7,
      sym_year_month_date,
      sym_comment,
      anon_sym_DQUOTE,
      sym__uuid,
      sym__ipv4,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
  [146] = 6,
    ACTIONS(7), 1,
      sym_year_month_date,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      aux_sym_logs_token1,
    ACTIONS(57), 1,
      sym_comment,
    STATE(15), 1,
      sym_log_date,
    STATE(11), 2,
      sym__logline,
      aux_sym_logs_repeat1,
  [166] = 6,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      aux_sym_logs_token1,
    ACTIONS(64), 1,
      sym_year_month_date,
    ACTIONS(67), 1,
      sym_comment,
    STATE(15), 1,
      sym_log_date,
    STATE(11), 2,
      sym__logline,
      aux_sym_logs_repeat1,
  [186] = 1,
    ACTIONS(70), 6,
      anon_sym_WARN,
      anon_sym_ERROR,
      anon_sym_FATAL,
      anon_sym_DEBUG,
      anon_sym_INFO,
      anon_sym_TRACE,
  [195] = 3,
    ACTIONS(72), 1,
      anon_sym_DQUOTE,
    ACTIONS(74), 1,
      aux_sym_string_token1,
    STATE(14), 1,
      aux_sym_string_repeat1,
  [205] = 3,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    ACTIONS(78), 1,
      aux_sym_string_token1,
    STATE(16), 1,
      aux_sym_string_repeat1,
  [215] = 3,
    ACTIONS(80), 1,
      sym_time_with_offset,
    ACTIONS(82), 1,
      sym_time_without_offset,
    STATE(7), 1,
      sym_log_time,
  [225] = 3,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      aux_sym_string_token1,
    STATE(16), 1,
      aux_sym_string_repeat1,
  [235] = 2,
    ACTIONS(89), 1,
      sym_time_with_offset,
    ACTIONS(91), 1,
      sym_time_without_offset,
  [242] = 1,
    ACTIONS(93), 1,
      sym_module_name,
  [246] = 1,
    ACTIONS(95), 1,
      sym_module_name,
  [250] = 1,
    ACTIONS(97), 1,
      sym_module_name,
  [254] = 1,
    ACTIONS(99), 1,
      sym_module_name,
  [258] = 1,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 72,
  [SMALL_STATE(6)] = 86,
  [SMALL_STATE(7)] = 100,
  [SMALL_STATE(8)] = 118,
  [SMALL_STATE(9)] = 132,
  [SMALL_STATE(10)] = 146,
  [SMALL_STATE(11)] = 166,
  [SMALL_STATE(12)] = 186,
  [SMALL_STATE(13)] = 195,
  [SMALL_STATE(14)] = 205,
  [SMALL_STATE(15)] = 215,
  [SMALL_STATE(16)] = 225,
  [SMALL_STATE(17)] = 235,
  [SMALL_STATE(18)] = 242,
  [SMALL_STATE(19)] = 246,
  [SMALL_STATE(20)] = 250,
  [SMALL_STATE(21)] = 254,
  [SMALL_STATE(22)] = 258,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logs, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__logline_repeat1, 2),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__logline_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__logline_repeat1, 2), SHIFT_REPEAT(13),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__logline_repeat1, 2), SHIFT_REPEAT(9),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logline, 5),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__logline, 5),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_important, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_important, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logs, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_logs_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_logs_repeat1, 2), SHIFT_REPEAT(11),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_logs_repeat1, 2), SHIFT_REPEAT(17),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_logs_repeat1, 2), SHIFT_REPEAT(11),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_time, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(16),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_date, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_date, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_level, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ok_level, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bad_level, 1),
  [101] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
