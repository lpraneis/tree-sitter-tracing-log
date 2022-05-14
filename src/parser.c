#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 33
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
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
  sym_uuid = 12,
  sym_ipv4 = 13,
  sym__non_newline_whitespace = 14,
  sym_logs = 15,
  sym__logline = 16,
  sym_date = 17,
  sym_utc_tz = 18,
  sym_level = 19,
  sym_bad_level = 20,
  sym_ok_level = 21,
  sym_string = 22,
  sym_message = 23,
  sym_spacing = 24,
  aux_sym_logs_repeat1 = 25,
  aux_sym_string_repeat1 = 26,
  aux_sym_message_repeat1 = 27,
  aux_sym_spacing_repeat1 = 28,
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
  [sym_uuid] = "uuid",
  [sym_ipv4] = "ipv4",
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
  [sym_uuid] = sym_uuid,
  [sym_ipv4] = sym_ipv4,
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
  [sym_uuid] = {
    .visible = true,
    .named = true,
  },
  [sym_ipv4] = {
    .visible = true,
    .named = true,
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
      if (eof) ADVANCE(97);
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == 'D') ADVANCE(30);
      if (lookahead == 'E') ADVANCE(42);
      if (lookahead == 'I') ADVANCE(34);
      if (lookahead == 'T') ADVANCE(41);
      if (lookahead == 'W') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(112);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') ADVANCE(111);
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(111);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(55);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(57);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(77);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(93);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(84);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(90);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == ':') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(48);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(54);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == '3') ADVANCE(123);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(56);
      END_STATE();
    case 25:
      if (lookahead == 'A') ADVANCE(28);
      END_STATE();
    case 26:
      if (lookahead == 'A') ADVANCE(40);
      END_STATE();
    case 27:
      if (lookahead == 'B') ADVANCE(44);
      END_STATE();
    case 28:
      if (lookahead == 'C') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'D') ADVANCE(30);
      if (lookahead == 'E') ADVANCE(42);
      if (lookahead == 'I') ADVANCE(34);
      if (lookahead == 'T') ADVANCE(41);
      if (lookahead == 'W') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(125);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(29)
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(27);
      END_STATE();
    case 31:
      if (lookahead == 'E') ADVANCE(106);
      END_STATE();
    case 32:
      if (lookahead == 'F') ADVANCE(36);
      END_STATE();
    case 33:
      if (lookahead == 'G') ADVANCE(104);
      END_STATE();
    case 34:
      if (lookahead == 'N') ADVANCE(32);
      END_STATE();
    case 35:
      if (lookahead == 'N') ADVANCE(102);
      END_STATE();
    case 36:
      if (lookahead == 'O') ADVANCE(105);
      END_STATE();
    case 37:
      if (lookahead == 'O') ADVANCE(39);
      END_STATE();
    case 38:
      if (lookahead == 'R') ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == 'R') ADVANCE(103);
      END_STATE();
    case 40:
      if (lookahead == 'R') ADVANCE(35);
      END_STATE();
    case 41:
      if (lookahead == 'R') ADVANCE(25);
      END_STATE();
    case 42:
      if (lookahead == 'R') ADVANCE(38);
      END_STATE();
    case 43:
      if (lookahead == 'T') ADVANCE(100);
      END_STATE();
    case 44:
      if (lookahead == 'U') ADVANCE(33);
      END_STATE();
    case 45:
      if (lookahead == 'Z') ADVANCE(101);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 93:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 94:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 95:
      if (eof) ADVANCE(97);
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(110);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 96:
      if (eof) ADVANCE(97);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(96)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(110);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_y_m_d);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_h_m_s_subs);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_WARN);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_ERROR);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DEBUG);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_INFO);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_module_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_module_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__any);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__any);
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(110);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__any);
      if (lookahead == '\r') ADVANCE(111);
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(111);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__any);
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(112);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__any);
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__any);
      if (lookahead == '.') ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__any);
      if (lookahead == '.') ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__any);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_uuid);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_ipv4);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_ipv4);
      if (lookahead == '/') ADVANCE(23);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_ipv4);
      if (lookahead == '/') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_ipv4);
      if (lookahead == '/') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_ipv4);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(119);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_ipv4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(125);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 95},
  [3] = {.lex_state = 95},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 95},
  [6] = {.lex_state = 95},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 29},
  [9] = {.lex_state = 29},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 107},
  [15] = {.lex_state = 29},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 96},
  [18] = {.lex_state = 29},
  [19] = {.lex_state = 107},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 96},
  [22] = {.lex_state = 29},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 29},
  [26] = {.lex_state = 108},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 29},
  [29] = {.lex_state = 29},
  [30] = {.lex_state = 29},
  [31] = {.lex_state = 29},
  [32] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_y_m_d] = ACTIONS(1),
    [sym_h_m_s_subs] = ACTIONS(1),
    [anon_sym_WARN] = ACTIONS(1),
    [anon_sym_ERROR] = ACTIONS(1),
    [anon_sym_DEBUG] = ACTIONS(1),
    [anon_sym_INFO] = ACTIONS(1),
    [anon_sym_TRACE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_uuid] = ACTIONS(1),
    [sym_ipv4] = ACTIONS(1),
  },
  [1] = {
    [sym_logs] = STATE(32),
    [sym__logline] = STATE(17),
    [sym_date] = STATE(22),
    [sym_utc_tz] = STATE(31),
    [aux_sym_logs_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_y_m_d] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 2,
      anon_sym_LF,
      sym_y_m_d,
    STATE(3), 2,
      sym_string,
      aux_sym_message_repeat1,
    ACTIONS(11), 3,
      sym__any,
      sym_uuid,
      sym_ipv4,
  [20] = 5,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(22), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 2,
      anon_sym_LF,
      sym_y_m_d,
    STATE(3), 2,
      sym_string,
      aux_sym_message_repeat1,
    ACTIONS(19), 3,
      sym__any,
      sym_uuid,
      sym_ipv4,
  [40] = 4,
    STATE(15), 1,
      sym_level,
    ACTIONS(25), 2,
      anon_sym_WARN,
      anon_sym_ERROR,
    STATE(28), 2,
      sym_bad_level,
      sym_ok_level,
    ACTIONS(27), 3,
      anon_sym_DEBUG,
      anon_sym_INFO,
      anon_sym_TRACE,
  [57] = 2,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 6,
      anon_sym_LF,
      sym_y_m_d,
      sym__any,
      anon_sym_DQUOTE,
      sym_uuid,
      sym_ipv4,
  [69] = 2,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 6,
      anon_sym_LF,
      sym_y_m_d,
      sym__any,
      anon_sym_DQUOTE,
      sym_uuid,
      sym_ipv4,
  [81] = 4,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      sym_message,
    STATE(2), 2,
      sym_string,
      aux_sym_message_repeat1,
    ACTIONS(37), 3,
      sym__any,
      sym_uuid,
      sym_ipv4,
  [97] = 3,
    ACTIONS(41), 1,
      sym__non_newline_whitespace,
    STATE(9), 1,
      aux_sym_spacing_repeat1,
    ACTIONS(39), 5,
      anon_sym_WARN,
      anon_sym_ERROR,
      anon_sym_DEBUG,
      anon_sym_INFO,
      anon_sym_TRACE,
  [111] = 3,
    ACTIONS(45), 1,
      sym__non_newline_whitespace,
    STATE(9), 1,
      aux_sym_spacing_repeat1,
    ACTIONS(43), 5,
      anon_sym_WARN,
      anon_sym_ERROR,
      anon_sym_DEBUG,
      anon_sym_INFO,
      anon_sym_TRACE,
  [125] = 3,
    ACTIONS(48), 1,
      sym__non_newline_whitespace,
    STATE(10), 1,
      aux_sym_spacing_repeat1,
    ACTIONS(43), 4,
      sym__any,
      anon_sym_DQUOTE,
      sym_uuid,
      sym_ipv4,
  [138] = 3,
    ACTIONS(51), 1,
      sym__non_newline_whitespace,
    STATE(10), 1,
      aux_sym_spacing_repeat1,
    ACTIONS(39), 4,
      sym__any,
      anon_sym_DQUOTE,
      sym_uuid,
      sym_ipv4,
  [151] = 6,
    ACTIONS(5), 1,
      sym_y_m_d,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      aux_sym_logs_repeat1,
    STATE(17), 1,
      sym__logline,
    STATE(22), 1,
      sym_date,
    STATE(31), 1,
      sym_utc_tz,
  [170] = 6,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      sym_y_m_d,
    STATE(13), 1,
      aux_sym_logs_repeat1,
    STATE(17), 1,
      sym__logline,
    STATE(22), 1,
      sym_date,
    STATE(31), 1,
      sym_utc_tz,
  [189] = 3,
    ACTIONS(43), 1,
      sym_module_name,
    ACTIONS(60), 1,
      sym__non_newline_whitespace,
    STATE(14), 1,
      aux_sym_spacing_repeat1,
  [199] = 3,
    ACTIONS(63), 1,
      sym__non_newline_whitespace,
    STATE(19), 1,
      aux_sym_spacing_repeat1,
    STATE(26), 1,
      sym_spacing,
  [209] = 3,
    ACTIONS(65), 1,
      sym__any,
    ACTIONS(68), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      aux_sym_string_repeat1,
  [219] = 3,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 1,
      anon_sym_LF,
    ACTIONS(74), 1,
      sym_y_m_d,
  [229] = 3,
    ACTIONS(76), 1,
      sym__non_newline_whitespace,
    STATE(7), 1,
      sym_spacing,
    STATE(11), 1,
      aux_sym_spacing_repeat1,
  [239] = 3,
    ACTIONS(39), 1,
      sym_module_name,
    ACTIONS(78), 1,
      sym__non_newline_whitespace,
    STATE(14), 1,
      aux_sym_spacing_repeat1,
  [249] = 3,
    ACTIONS(80), 1,
      sym__any,
    ACTIONS(82), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      aux_sym_string_repeat1,
  [259] = 2,
    ACTIONS(86), 1,
      sym_y_m_d,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [267] = 3,
    ACTIONS(88), 1,
      sym__non_newline_whitespace,
    STATE(4), 1,
      sym_spacing,
    STATE(8), 1,
      aux_sym_spacing_repeat1,
  [277] = 3,
    ACTIONS(90), 1,
      sym__any,
    ACTIONS(92), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      aux_sym_string_repeat1,
  [287] = 1,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      sym_y_m_d,
  [292] = 1,
    ACTIONS(94), 1,
      sym__non_newline_whitespace,
  [296] = 1,
    ACTIONS(96), 1,
      sym_module_name,
  [300] = 1,
    ACTIONS(98), 1,
      sym_h_m_s_subs,
  [304] = 1,
    ACTIONS(100), 1,
      sym__non_newline_whitespace,
  [308] = 1,
    ACTIONS(102), 1,
      sym__non_newline_whitespace,
  [312] = 1,
    ACTIONS(104), 1,
      sym__non_newline_whitespace,
  [316] = 1,
    ACTIONS(106), 1,
      sym__non_newline_whitespace,
  [320] = 1,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 57,
  [SMALL_STATE(6)] = 69,
  [SMALL_STATE(7)] = 81,
  [SMALL_STATE(8)] = 97,
  [SMALL_STATE(9)] = 111,
  [SMALL_STATE(10)] = 125,
  [SMALL_STATE(11)] = 138,
  [SMALL_STATE(12)] = 151,
  [SMALL_STATE(13)] = 170,
  [SMALL_STATE(14)] = 189,
  [SMALL_STATE(15)] = 199,
  [SMALL_STATE(16)] = 209,
  [SMALL_STATE(17)] = 219,
  [SMALL_STATE(18)] = 229,
  [SMALL_STATE(19)] = 239,
  [SMALL_STATE(20)] = 249,
  [SMALL_STATE(21)] = 259,
  [SMALL_STATE(22)] = 267,
  [SMALL_STATE(23)] = 277,
  [SMALL_STATE(24)] = 287,
  [SMALL_STATE(25)] = 292,
  [SMALL_STATE(26)] = 296,
  [SMALL_STATE(27)] = 300,
  [SMALL_STATE(28)] = 304,
  [SMALL_STATE(29)] = 308,
  [SMALL_STATE(30)] = 312,
  [SMALL_STATE(31)] = 316,
  [SMALL_STATE(32)] = 320,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logs, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2), SHIFT_REPEAT(3),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2), SHIFT_REPEAT(20),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spacing, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_spacing_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_spacing_repeat1, 2), SHIFT_REPEAT(9),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spacing_repeat1, 2), SHIFT_REPEAT(10),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logs, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_logs_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_logs_repeat1, 2), SHIFT_REPEAT(27),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spacing_repeat1, 2), SHIFT_REPEAT(14),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(16),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_logs_repeat1, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_logs_repeat1, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logline, 7),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__logline, 7),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_utc_tz, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_level, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ok_level, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bad_level, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [108] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
