#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  sym_y_m_d = 2,
  sym_h_m_s_subs = 3,
  anon_sym_WARN = 4,
  anon_sym_ERROR = 5,
  anon_sym_DEBUG = 6,
  anon_sym_INFO = 7,
  anon_sym_TRACE = 8,
  sym_module_name = 9,
  sym__any = 10,
  anon_sym_DQUOTE = 11,
  sym__uuid = 12,
  sym__ipv4 = 13,
  aux_sym_constant_token1 = 14,
  aux_sym_constant_token2 = 15,
  sym__non_newline_whitespace = 16,
  sym_logs = 17,
  sym__logline = 18,
  sym_date = 19,
  sym_utc_tz = 20,
  sym_level = 21,
  sym_bad_level = 22,
  sym_ok_level = 23,
  sym_string = 24,
  sym_message = 25,
  sym_constant = 26,
  sym_spacing = 27,
  aux_sym_logs_repeat1 = 28,
  aux_sym_string_repeat1 = 29,
  aux_sym_message_repeat1 = 30,
  aux_sym_spacing_repeat1 = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_y_m_d] = "y_m_d",
  [sym_h_m_s_subs] = "h_m_s_subs",
  [anon_sym_WARN] = "WARN",
  [anon_sym_ERROR] = "ERROR",
  [anon_sym_DEBUG] = "DEBUG",
  [anon_sym_INFO] = "INFO",
  [anon_sym_TRACE] = "TRACE",
  [sym_module_name] = "module_name",
  [sym__any] = "_any",
  [anon_sym_DQUOTE] = "\"",
  [sym__uuid] = "_uuid",
  [sym__ipv4] = "_ipv4",
  [aux_sym_constant_token1] = "constant_token1",
  [aux_sym_constant_token2] = "constant_token2",
  [sym__non_newline_whitespace] = "_non_newline_whitespace",
  [sym_logs] = "logs",
  [sym__logline] = "_logline",
  [sym_date] = "date",
  [sym_utc_tz] = "utc_tz",
  [sym_level] = "level",
  [sym_bad_level] = "bad_level",
  [sym_ok_level] = "ok_level",
  [sym_string] = "string",
  [sym_message] = "message",
  [sym_constant] = "constant",
  [sym_spacing] = "spacing",
  [aux_sym_logs_repeat1] = "logs_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_message_repeat1] = "message_repeat1",
  [aux_sym_spacing_repeat1] = "spacing_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_y_m_d] = sym_y_m_d,
  [sym_h_m_s_subs] = sym_h_m_s_subs,
  [anon_sym_WARN] = anon_sym_WARN,
  [anon_sym_ERROR] = anon_sym_ERROR,
  [anon_sym_DEBUG] = anon_sym_DEBUG,
  [anon_sym_INFO] = anon_sym_INFO,
  [anon_sym_TRACE] = anon_sym_TRACE,
  [sym_module_name] = sym_module_name,
  [sym__any] = sym__any,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym__uuid] = sym__uuid,
  [sym__ipv4] = sym__ipv4,
  [aux_sym_constant_token1] = aux_sym_constant_token1,
  [aux_sym_constant_token2] = aux_sym_constant_token2,
  [sym__non_newline_whitespace] = sym__non_newline_whitespace,
  [sym_logs] = sym_logs,
  [sym__logline] = sym__logline,
  [sym_date] = sym_date,
  [sym_utc_tz] = sym_utc_tz,
  [sym_level] = sym_level,
  [sym_bad_level] = sym_bad_level,
  [sym_ok_level] = sym_ok_level,
  [sym_string] = sym_string,
  [sym_message] = sym_message,
  [sym_constant] = sym_constant,
  [sym_spacing] = sym_spacing,
  [aux_sym_logs_repeat1] = aux_sym_logs_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_message_repeat1] = aux_sym_message_repeat1,
  [aux_sym_spacing_repeat1] = aux_sym_spacing_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_y_m_d] = {
    .visible = true,
    .named = true,
  },
  [sym_h_m_s_subs] = {
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
  [sym__any] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
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
  [sym__non_newline_whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_logs] = {
    .visible = true,
    .named = true,
  },
  [sym__logline] = {
    .visible = false,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_utc_tz] = {
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
  [sym_message] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_spacing] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_logs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_message_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_spacing_repeat1] = {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(99);
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == 'D') ADVANCE(24);
      if (lookahead == 'E') ADVANCE(36);
      if (lookahead == 'I') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == 'W') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(40);
      if (lookahead == 't') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == 'f') ADVANCE(118);
      if (lookahead == 't') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') ADVANCE(113);
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == 'f') ADVANCE(118);
      if (lookahead == 't') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(55);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(56);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(79);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(95);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(86);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(92);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(48);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(54);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == '3') ADVANCE(127);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(63);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(57);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(34);
      END_STATE();
    case 21:
      if (lookahead == 'B') ADVANCE(38);
      END_STATE();
    case 22:
      if (lookahead == 'C') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 'D') ADVANCE(24);
      if (lookahead == 'E') ADVANCE(36);
      if (lookahead == 'I') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == 'W') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(23)
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(21);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(108);
      END_STATE();
    case 26:
      if (lookahead == 'F') ADVANCE(30);
      END_STATE();
    case 27:
      if (lookahead == 'G') ADVANCE(106);
      END_STATE();
    case 28:
      if (lookahead == 'N') ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == 'N') ADVANCE(104);
      END_STATE();
    case 30:
      if (lookahead == 'O') ADVANCE(107);
      END_STATE();
    case 31:
      if (lookahead == 'O') ADVANCE(33);
      END_STATE();
    case 32:
      if (lookahead == 'R') ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == 'R') ADVANCE(105);
      END_STATE();
    case 34:
      if (lookahead == 'R') ADVANCE(29);
      END_STATE();
    case 35:
      if (lookahead == 'R') ADVANCE(19);
      END_STATE();
    case 36:
      if (lookahead == 'R') ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == 'T') ADVANCE(102);
      END_STATE();
    case 38:
      if (lookahead == 'U') ADVANCE(27);
      END_STATE();
    case 39:
      if (lookahead == 'Z') ADVANCE(103);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 46:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 93:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 96:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 97:
      if (eof) ADVANCE(99);
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == 'f') ADVANCE(118);
      if (lookahead == 't') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(112);
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 98:
      if (eof) ADVANCE(99);
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(98)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(112);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_y_m_d);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_h_m_s_subs);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_WARN);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_ERROR);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DEBUG);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_INFO);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_module_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_module_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__any);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__any);
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == 'f') ADVANCE(118);
      if (lookahead == 't') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(112);
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__any);
      if (lookahead == '\r') ADVANCE(113);
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == 'f') ADVANCE(118);
      if (lookahead == 't') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(111);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__any);
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == 'f') ADVANCE(118);
      if (lookahead == 't') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(111);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__any);
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(111);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__any);
      if (lookahead == '.') ADVANCE(47);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__any);
      if (lookahead == '.') ADVANCE(47);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__any);
      if (lookahead == 'a') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__any);
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__any);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__uuid);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__ipv4);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__ipv4);
      if (lookahead == '/') ADVANCE(16);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__ipv4);
      if (lookahead == '/') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__ipv4);
      if (lookahead == '/') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__ipv4);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(123);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__ipv4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(55);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '.') ADVANCE(47);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '.') ADVANCE(47);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '.') ADVANCE(47);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '.') ADVANCE(47);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '.') ADVANCE(47);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(142);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 97},
  [3] = {.lex_state = 97},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 97},
  [6] = {.lex_state = 97},
  [7] = {.lex_state = 97},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 23},
  [12] = {.lex_state = 23},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 109},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 23},
  [18] = {.lex_state = 23},
  [19] = {.lex_state = 98},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 109},
  [22] = {.lex_state = 98},
  [23] = {.lex_state = 23},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 23},
  [27] = {.lex_state = 110},
  [28] = {.lex_state = 46},
  [29] = {.lex_state = 23},
  [30] = {.lex_state = 23},
  [31] = {.lex_state = 23},
  [32] = {.lex_state = 23},
  [33] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_y_m_d] = ACTIONS(1),
    [anon_sym_WARN] = ACTIONS(1),
    [anon_sym_ERROR] = ACTIONS(1),
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
    [sym_logs] = STATE(33),
    [sym__logline] = STATE(19),
    [sym_date] = STATE(23),
    [sym_utc_tz] = STATE(32),
    [aux_sym_logs_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_y_m_d] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      sym__any,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 2,
      anon_sym_LF,
      sym_y_m_d,
    STATE(3), 3,
      sym_string,
      sym_constant,
      aux_sym_message_repeat1,
    ACTIONS(15), 4,
      sym__uuid,
      sym__ipv4,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
  [25] = 6,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym__any,
    ACTIONS(24), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 2,
      anon_sym_LF,
      sym_y_m_d,
    STATE(3), 3,
      sym_string,
      sym_constant,
      aux_sym_message_repeat1,
    ACTIONS(27), 4,
      sym__uuid,
      sym__ipv4,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
  [50] = 5,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(30), 1,
      sym__any,
    STATE(22), 1,
      sym_message,
    STATE(2), 3,
      sym_string,
      sym_constant,
      aux_sym_message_repeat1,
    ACTIONS(15), 4,
      sym__uuid,
      sym__ipv4,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
  [71] = 2,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 8,
      anon_sym_LF,
      sym_y_m_d,
      sym__any,
      anon_sym_DQUOTE,
      sym__uuid,
      sym__ipv4,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
  [85] = 2,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 8,
      anon_sym_LF,
      sym_y_m_d,
      sym__any,
      anon_sym_DQUOTE,
      sym__uuid,
      sym__ipv4,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
  [99] = 2,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 8,
      anon_sym_LF,
      sym_y_m_d,
      sym__any,
      anon_sym_DQUOTE,
      sym__uuid,
      sym__ipv4,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
  [113] = 3,
    ACTIONS(46), 1,
      sym__non_newline_whitespace,
    STATE(8), 1,
      aux_sym_spacing_repeat1,
    ACTIONS(44), 6,
      sym__any,
      anon_sym_DQUOTE,
      sym__uuid,
      sym__ipv4,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
  [128] = 3,
    ACTIONS(51), 1,
      sym__non_newline_whitespace,
    STATE(8), 1,
      aux_sym_spacing_repeat1,
    ACTIONS(49), 6,
      sym__any,
      anon_sym_DQUOTE,
      sym__uuid,
      sym__ipv4,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
  [143] = 4,
    STATE(17), 1,
      sym_level,
    ACTIONS(53), 2,
      anon_sym_WARN,
      anon_sym_ERROR,
    STATE(29), 2,
      sym_bad_level,
      sym_ok_level,
    ACTIONS(55), 3,
      anon_sym_DEBUG,
      anon_sym_INFO,
      anon_sym_TRACE,
  [160] = 3,
    ACTIONS(57), 1,
      sym__non_newline_whitespace,
    STATE(11), 1,
      aux_sym_spacing_repeat1,
    ACTIONS(44), 5,
      anon_sym_WARN,
      anon_sym_ERROR,
      anon_sym_DEBUG,
      anon_sym_INFO,
      anon_sym_TRACE,
  [174] = 3,
    ACTIONS(60), 1,
      sym__non_newline_whitespace,
    STATE(11), 1,
      aux_sym_spacing_repeat1,
    ACTIONS(49), 5,
      anon_sym_WARN,
      anon_sym_ERROR,
      anon_sym_DEBUG,
      anon_sym_INFO,
      anon_sym_TRACE,
  [188] = 6,
    ACTIONS(5), 1,
      sym_y_m_d,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      aux_sym_logs_repeat1,
    STATE(19), 1,
      sym__logline,
    STATE(23), 1,
      sym_date,
    STATE(32), 1,
      sym_utc_tz,
  [207] = 6,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 1,
      sym_y_m_d,
    STATE(14), 1,
      aux_sym_logs_repeat1,
    STATE(19), 1,
      sym__logline,
    STATE(23), 1,
      sym_date,
    STATE(32), 1,
      sym_utc_tz,
  [226] = 3,
    ACTIONS(44), 1,
      sym_module_name,
    ACTIONS(69), 1,
      sym__non_newline_whitespace,
    STATE(15), 1,
      aux_sym_spacing_repeat1,
  [236] = 3,
    ACTIONS(72), 1,
      sym__any,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      aux_sym_string_repeat1,
  [246] = 3,
    ACTIONS(77), 1,
      sym__non_newline_whitespace,
    STATE(21), 1,
      aux_sym_spacing_repeat1,
    STATE(27), 1,
      sym_spacing,
  [256] = 3,
    ACTIONS(79), 1,
      sym__non_newline_whitespace,
    STATE(4), 1,
      sym_spacing,
    STATE(9), 1,
      aux_sym_spacing_repeat1,
  [266] = 3,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 1,
      anon_sym_LF,
    ACTIONS(85), 1,
      sym_y_m_d,
  [276] = 3,
    ACTIONS(87), 1,
      sym__any,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    STATE(24), 1,
      aux_sym_string_repeat1,
  [286] = 3,
    ACTIONS(49), 1,
      sym_module_name,
    ACTIONS(91), 1,
      sym__non_newline_whitespace,
    STATE(15), 1,
      aux_sym_spacing_repeat1,
  [296] = 2,
    ACTIONS(95), 1,
      sym_y_m_d,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [304] = 3,
    ACTIONS(97), 1,
      sym__non_newline_whitespace,
    STATE(10), 1,
      sym_spacing,
    STATE(12), 1,
      aux_sym_spacing_repeat1,
  [314] = 3,
    ACTIONS(99), 1,
      sym__any,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      aux_sym_string_repeat1,
  [324] = 1,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      sym_y_m_d,
  [329] = 1,
    ACTIONS(103), 1,
      sym__non_newline_whitespace,
  [333] = 1,
    ACTIONS(105), 1,
      sym_module_name,
  [337] = 1,
    ACTIONS(107), 1,
      sym_h_m_s_subs,
  [341] = 1,
    ACTIONS(109), 1,
      sym__non_newline_whitespace,
  [345] = 1,
    ACTIONS(111), 1,
      sym__non_newline_whitespace,
  [349] = 1,
    ACTIONS(113), 1,
      sym__non_newline_whitespace,
  [353] = 1,
    ACTIONS(115), 1,
      sym__non_newline_whitespace,
  [357] = 1,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 71,
  [SMALL_STATE(6)] = 85,
  [SMALL_STATE(7)] = 99,
  [SMALL_STATE(8)] = 113,
  [SMALL_STATE(9)] = 128,
  [SMALL_STATE(10)] = 143,
  [SMALL_STATE(11)] = 160,
  [SMALL_STATE(12)] = 174,
  [SMALL_STATE(13)] = 188,
  [SMALL_STATE(14)] = 207,
  [SMALL_STATE(15)] = 226,
  [SMALL_STATE(16)] = 236,
  [SMALL_STATE(17)] = 246,
  [SMALL_STATE(18)] = 256,
  [SMALL_STATE(19)] = 266,
  [SMALL_STATE(20)] = 276,
  [SMALL_STATE(21)] = 286,
  [SMALL_STATE(22)] = 296,
  [SMALL_STATE(23)] = 304,
  [SMALL_STATE(24)] = 314,
  [SMALL_STATE(25)] = 324,
  [SMALL_STATE(26)] = 329,
  [SMALL_STATE(27)] = 333,
  [SMALL_STATE(28)] = 337,
  [SMALL_STATE(29)] = 341,
  [SMALL_STATE(30)] = 345,
  [SMALL_STATE(31)] = 349,
  [SMALL_STATE(32)] = 353,
  [SMALL_STATE(33)] = 357,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logs, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2), SHIFT_REPEAT(3),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2), SHIFT_REPEAT(20),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2), SHIFT_REPEAT(6),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_spacing_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spacing_repeat1, 2), SHIFT_REPEAT(8),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spacing, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_spacing_repeat1, 2), SHIFT_REPEAT(11),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logs, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_logs_repeat1, 2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_logs_repeat1, 2), SHIFT_REPEAT(28),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spacing_repeat1, 2), SHIFT_REPEAT(15),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(16),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_logs_repeat1, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_logs_repeat1, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logline, 7),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__logline, 7),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_utc_tz, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_level, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ok_level, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bad_level, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [117] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_log(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
