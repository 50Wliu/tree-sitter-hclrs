#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 65
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_SEMI = 1,
  anon_sym_wire = 2,
  anon_sym_COMMA = 3,
  anon_sym_COLON = 4,
  anon_sym_register = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  sym_register_name = 8,
  anon_sym_EQ = 9,
  anon_sym_LBRACK = 10,
  anon_sym_RBRACK = 11,
  anon_sym_BANG = 12,
  anon_sym_TILDE = 13,
  anon_sym_DASH = 14,
  anon_sym_PLUS = 15,
  anon_sym_EQ_EQ = 16,
  anon_sym_BANG_EQ = 17,
  anon_sym_GT_EQ = 18,
  anon_sym_LT_EQ = 19,
  anon_sym_GT = 20,
  anon_sym_LT = 21,
  anon_sym_AMP_AMP = 22,
  anon_sym_PIPE_PIPE = 23,
  anon_sym_STAR = 24,
  anon_sym_SLASH = 25,
  anon_sym_AMP = 26,
  anon_sym_PIPE = 27,
  anon_sym_CARET = 28,
  sym_identifier = 29,
  sym_number = 30,
  sym_comment = 31,
  sym_pound_comment = 32,
  sym_slash_comment = 33,
  anon_sym_SLASH_STAR = 34,
  sym_source_file = 35,
  sym__statement = 36,
  sym__declaration = 37,
  sym_wire_declaration = 38,
  sym_variable_declarator = 39,
  sym_register_declaration = 40,
  sym__register_expression_statement = 41,
  sym__expression = 42,
  sym_assignment_expression = 43,
  sym_mux_expression = 44,
  sym_unary_expression = 45,
  sym_binary_expression = 46,
  aux_sym_source_file_repeat1 = 47,
  aux_sym_wire_declaration_repeat1 = 48,
  aux_sym_register_declaration_repeat1 = 49,
  aux_sym_mux_expression_repeat1 = 50,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_SEMI] = ";",
  [anon_sym_wire] = "wire",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_register] = "register",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_register_name] = "register_name",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_BANG] = "!",
  [anon_sym_TILDE] = "~",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_comment] = "comment",
  [sym_pound_comment] = "pound_comment",
  [sym_slash_comment] = "slash_comment",
  [anon_sym_SLASH_STAR] = "/*",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym__declaration] = "_declaration",
  [sym_wire_declaration] = "wire_declaration",
  [sym_variable_declarator] = "variable_declarator",
  [sym_register_declaration] = "register_declaration",
  [sym__register_expression_statement] = "_register_expression_statement",
  [sym__expression] = "_expression",
  [sym_assignment_expression] = "assignment_expression",
  [sym_mux_expression] = "mux_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_wire_declaration_repeat1] = "wire_declaration_repeat1",
  [aux_sym_register_declaration_repeat1] = "register_declaration_repeat1",
  [aux_sym_mux_expression_repeat1] = "mux_expression_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wire] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_register] = {
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
  [sym_register_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_pound_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_slash_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_wire_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declarator] = {
    .visible = true,
    .named = true,
  },
  [sym_register_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__register_expression_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_mux_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_wire_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mux_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == '0')
        ADVANCE(14);
      if (lookahead == ':')
        ADVANCE(28);
      if (lookahead == ';')
        ADVANCE(29);
      if (lookahead == '<')
        ADVANCE(30);
      if (lookahead == '=')
        ADVANCE(32);
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead == '[')
        ADVANCE(36);
      if (lookahead == ']')
        ADVANCE(37);
      if (lookahead == '^')
        ADVANCE(38);
      if (lookahead == '_')
        ADVANCE(39);
      if (lookahead == 'r')
        ADVANCE(40);
      if (lookahead == 'w')
        ADVANCE(50);
      if (lookahead == '{')
        ADVANCE(54);
      if (lookahead == '|')
        ADVANCE(55);
      if (lookahead == '}')
        ADVANCE(57);
      if (lookahead == '~')
        ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=')
        ADVANCE(3);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_pound_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&')
        ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(13);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_slash_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'B')
        ADVANCE(15);
      if (lookahead == 'E')
        ADVANCE(17);
      if (lookahead == 'O')
        ADVANCE(20);
      if (lookahead == 'X')
        ADVANCE(22);
      if (lookahead == 'b')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(17);
      if (lookahead == 'o')
        ADVANCE(20);
      if (lookahead == 'x')
        ADVANCE(22);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_register_name);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_register_name);
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_register_name);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_register_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_register_name);
      if (lookahead == 'E')
        ADVANCE(25);
      if (lookahead == 'e')
        ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E')
        ADVANCE(25);
      if (lookahead == 'e')
        ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_register_name);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=')
        ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_register_name);
      if (lookahead == 'g')
        ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_register);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_register_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_register_name);
      if (lookahead == 'r')
        ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_wire);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|')
        ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E')
        ADVANCE(17);
      if (lookahead == 'e')
        ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 61:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(62);
      if (lookahead == '#')
        ADVANCE(63);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(64);
      if (lookahead == '0')
        ADVANCE(68);
      if (lookahead == '[')
        ADVANCE(36);
      if (lookahead == 'r')
        ADVANCE(72);
      if (lookahead == 'w')
        ADVANCE(74);
      if (lookahead == '~')
        ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(61);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(63);
      END_STATE();
    case 64:
      if (lookahead == '*')
        ADVANCE(65);
      if (lookahead == '/')
        ADVANCE(63);
      END_STATE();
    case 65:
      if (lookahead == '*')
        ADVANCE(66);
      if (lookahead != 0)
        ADVANCE(65);
      END_STATE();
    case 66:
      if (lookahead == '*')
        ADVANCE(66);
      if (lookahead == '/')
        ADVANCE(67);
      if (lookahead != 0)
        ADVANCE(65);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'B')
        ADVANCE(69);
      if (lookahead == 'E')
        ADVANCE(25);
      if (lookahead == 'O')
        ADVANCE(70);
      if (lookahead == 'X')
        ADVANCE(71);
      if (lookahead == 'b')
        ADVANCE(69);
      if (lookahead == 'e')
        ADVANCE(25);
      if (lookahead == 'o')
        ADVANCE(70);
      if (lookahead == 'x')
        ADVANCE(71);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
      END_STATE();
    case 69:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(16);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(21);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(23);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g')
        ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 76:
      if (lookahead == '!')
        ADVANCE(62);
      if (lookahead == '#')
        ADVANCE(63);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(64);
      if (lookahead == '0')
        ADVANCE(68);
      if (lookahead == '[')
        ADVANCE(36);
      if (lookahead == ']')
        ADVANCE(37);
      if (lookahead == '~')
        ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(76);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 77:
      if (lookahead == '#')
        ADVANCE(63);
      if (lookahead == '/')
        ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 78:
      if (lookahead == '!')
        ADVANCE(79);
      if (lookahead == '#')
        ADVANCE(63);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(80);
      if (lookahead == ';')
        ADVANCE(29);
      if (lookahead == '<')
        ADVANCE(30);
      if (lookahead == '=')
        ADVANCE(32);
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead == '^')
        ADVANCE(38);
      if (lookahead == '|')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(78);
      END_STATE();
    case 79:
      if (lookahead == '=')
        ADVANCE(3);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(65);
      if (lookahead == '/')
        ADVANCE(63);
      END_STATE();
    case 81:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(63);
      if (lookahead == '/')
        ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(81);
      END_STATE();
    case 82:
      if (lookahead == '!')
        ADVANCE(79);
      if (lookahead == '#')
        ADVANCE(63);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(80);
      if (lookahead == ':')
        ADVANCE(28);
      if (lookahead == '<')
        ADVANCE(30);
      if (lookahead == '=')
        ADVANCE(32);
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead == '^')
        ADVANCE(38);
      if (lookahead == '|')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(82);
      END_STATE();
    case 83:
      if (lookahead == '#')
        ADVANCE(63);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(64);
      if (lookahead == ';')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(83);
      END_STATE();
    case 84:
      if (lookahead == '#')
        ADVANCE(63);
      if (lookahead == '/')
        ADVANCE(64);
      if (lookahead == '{')
        ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(84);
      END_STATE();
    case 85:
      if (lookahead == '!')
        ADVANCE(79);
      if (lookahead == '#')
        ADVANCE(63);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(80);
      if (lookahead == ':')
        ADVANCE(28);
      if (lookahead == ';')
        ADVANCE(29);
      if (lookahead == '<')
        ADVANCE(30);
      if (lookahead == '=')
        ADVANCE(86);
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead == '^')
        ADVANCE(38);
      if (lookahead == '|')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(85);
      END_STATE();
    case 86:
      if (lookahead == '=')
        ADVANCE(33);
      END_STATE();
    case 87:
      if (lookahead == '#')
        ADVANCE(63);
      if (lookahead == '/')
        ADVANCE(64);
      if (lookahead == '}')
        ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 88:
      if (lookahead == '#')
        ADVANCE(63);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(64);
      if (lookahead == ';')
        ADVANCE(29);
      if (lookahead == '=')
        ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 61},
  [2] = {.lex_state = 76},
  [3] = {.lex_state = 77},
  [4] = {.lex_state = 76},
  [5] = {.lex_state = 76},
  [6] = {.lex_state = 78},
  [7] = {.lex_state = 81},
  [8] = {.lex_state = 78},
  [9] = {.lex_state = 61},
  [10] = {.lex_state = 82},
  [11] = {.lex_state = 83},
  [12] = {.lex_state = 84},
  [13] = {.lex_state = 76},
  [14] = {.lex_state = 82},
  [15] = {.lex_state = 82},
  [16] = {.lex_state = 76},
  [17] = {.lex_state = 85},
  [18] = {.lex_state = 76},
  [19] = {.lex_state = 61},
  [20] = {.lex_state = 76},
  [21] = {.lex_state = 76},
  [22] = {.lex_state = 76},
  [23] = {.lex_state = 76},
  [24] = {.lex_state = 76},
  [25] = {.lex_state = 61},
  [26] = {.lex_state = 61},
  [27] = {.lex_state = 61},
  [28] = {.lex_state = 76},
  [29] = {.lex_state = 83},
  [30] = {.lex_state = 87},
  [31] = {.lex_state = 76},
  [32] = {.lex_state = 76},
  [33] = {.lex_state = 76},
  [34] = {.lex_state = 76},
  [35] = {.lex_state = 76},
  [36] = {.lex_state = 76},
  [37] = {.lex_state = 76},
  [38] = {.lex_state = 85},
  [39] = {.lex_state = 76},
  [40] = {.lex_state = 78},
  [41] = {.lex_state = 78},
  [42] = {.lex_state = 78},
  [43] = {.lex_state = 78},
  [44] = {.lex_state = 78},
  [45] = {.lex_state = 85},
  [46] = {.lex_state = 88},
  [47] = {.lex_state = 83},
  [48] = {.lex_state = 61},
  [49] = {.lex_state = 83},
  [50] = {.lex_state = 61},
  [51] = {.lex_state = 78},
  [52] = {.lex_state = 87},
  [53] = {.lex_state = 82},
  [54] = {.lex_state = 78},
  [55] = {.lex_state = 82},
  [56] = {.lex_state = 82},
  [57] = {.lex_state = 82},
  [58] = {.lex_state = 82},
  [59] = {.lex_state = 76},
  [60] = {.lex_state = 61},
  [61] = {.lex_state = 87},
  [62] = {.lex_state = 76},
  [63] = {.lex_state = 78},
  [64] = {.lex_state = 87},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_wire] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_register] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_register_name] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(3),
    [anon_sym_LT] = ACTIONS(3),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(3),
    [anon_sym_AMP] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(3),
    [anon_sym_CARET] = ACTIONS(1),
    [sym_identifier] = ACTIONS(3),
    [sym_number] = ACTIONS(3),
    [sym_pound_comment] = ACTIONS(1),
    [sym_slash_comment] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(7),
    [sym__statement] = STATE(9),
    [sym__declaration] = STATE(9),
    [sym_wire_declaration] = STATE(9),
    [sym_register_declaration] = STATE(9),
    [sym__expression] = STATE(8),
    [sym_assignment_expression] = STATE(8),
    [sym_mux_expression] = STATE(8),
    [sym_unary_expression] = STATE(8),
    [sym_binary_expression] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_wire] = ACTIONS(7),
    [anon_sym_register] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
  },
  [2] = {
    [sym_variable_declarator] = STATE(11),
    [sym_identifier] = ACTIONS(21),
    [sym_comment] = ACTIONS(19),
  },
  [3] = {
    [sym_register_name] = ACTIONS(23),
    [sym_comment] = ACTIONS(19),
  },
  [4] = {
    [sym__expression] = STATE(15),
    [sym_assignment_expression] = STATE(15),
    [sym_mux_expression] = STATE(15),
    [sym_unary_expression] = STATE(15),
    [sym_binary_expression] = STATE(15),
    [aux_sym_mux_expression_repeat1] = STATE(16),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [sym_number] = ACTIONS(29),
    [sym_comment] = ACTIONS(19),
  },
  [5] = {
    [sym__expression] = STATE(17),
    [sym_assignment_expression] = STATE(17),
    [sym_mux_expression] = STATE(17),
    [sym_unary_expression] = STATE(17),
    [sym_binary_expression] = STATE(17),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(13),
    [sym_identifier] = ACTIONS(31),
    [sym_number] = ACTIONS(33),
    [sym_comment] = ACTIONS(19),
  },
  [6] = {
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_EQ] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(35),
    [anon_sym_EQ_EQ] = ACTIONS(35),
    [anon_sym_BANG_EQ] = ACTIONS(35),
    [anon_sym_GT_EQ] = ACTIONS(35),
    [anon_sym_LT_EQ] = ACTIONS(35),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym_AMP_AMP] = ACTIONS(35),
    [anon_sym_PIPE_PIPE] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_CARET] = ACTIONS(35),
    [sym_comment] = ACTIONS(19),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_comment] = ACTIONS(19),
  },
  [8] = {
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_EQ_EQ] = ACTIONS(47),
    [anon_sym_BANG_EQ] = ACTIONS(47),
    [anon_sym_GT_EQ] = ACTIONS(47),
    [anon_sym_LT_EQ] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym_AMP_AMP] = ACTIONS(51),
    [anon_sym_PIPE_PIPE] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(55),
    [anon_sym_SLASH] = ACTIONS(57),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(61),
    [anon_sym_CARET] = ACTIONS(53),
    [sym_comment] = ACTIONS(19),
  },
  [9] = {
    [sym__statement] = STATE(25),
    [sym__declaration] = STATE(25),
    [sym_wire_declaration] = STATE(25),
    [sym_register_declaration] = STATE(25),
    [sym__expression] = STATE(8),
    [sym_assignment_expression] = STATE(8),
    [sym_mux_expression] = STATE(8),
    [sym_unary_expression] = STATE(8),
    [sym_binary_expression] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_wire] = ACTIONS(7),
    [anon_sym_register] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
  },
  [10] = {
    [anon_sym_COLON] = ACTIONS(65),
    [sym_comment] = ACTIONS(19),
  },
  [11] = {
    [aux_sym_wire_declaration_repeat1] = STATE(29),
    [anon_sym_SEMI] = ACTIONS(67),
    [anon_sym_COMMA] = ACTIONS(69),
    [sym_comment] = ACTIONS(19),
  },
  [12] = {
    [anon_sym_LBRACE] = ACTIONS(71),
    [sym_comment] = ACTIONS(19),
  },
  [13] = {
    [sym__expression] = STATE(17),
    [sym_assignment_expression] = STATE(17),
    [sym_mux_expression] = STATE(17),
    [sym_unary_expression] = STATE(17),
    [sym_binary_expression] = STATE(17),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [sym_number] = ACTIONS(33),
    [sym_comment] = ACTIONS(19),
  },
  [14] = {
    [anon_sym_COLON] = ACTIONS(35),
    [anon_sym_EQ] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(35),
    [anon_sym_EQ_EQ] = ACTIONS(35),
    [anon_sym_BANG_EQ] = ACTIONS(35),
    [anon_sym_GT_EQ] = ACTIONS(35),
    [anon_sym_LT_EQ] = ACTIONS(35),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym_AMP_AMP] = ACTIONS(35),
    [anon_sym_PIPE_PIPE] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_CARET] = ACTIONS(35),
    [sym_comment] = ACTIONS(19),
  },
  [15] = {
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_EQ_EQ] = ACTIONS(79),
    [anon_sym_BANG_EQ] = ACTIONS(79),
    [anon_sym_GT_EQ] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(81),
    [anon_sym_LT] = ACTIONS(81),
    [anon_sym_AMP_AMP] = ACTIONS(83),
    [anon_sym_PIPE_PIPE] = ACTIONS(85),
    [anon_sym_STAR] = ACTIONS(87),
    [anon_sym_SLASH] = ACTIONS(89),
    [anon_sym_AMP] = ACTIONS(91),
    [anon_sym_PIPE] = ACTIONS(93),
    [anon_sym_CARET] = ACTIONS(85),
    [sym_comment] = ACTIONS(19),
  },
  [16] = {
    [sym__expression] = STATE(15),
    [sym_assignment_expression] = STATE(15),
    [sym_mux_expression] = STATE(15),
    [sym_unary_expression] = STATE(15),
    [sym_binary_expression] = STATE(15),
    [aux_sym_mux_expression_repeat1] = STATE(39),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(95),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [sym_number] = ACTIONS(29),
    [sym_comment] = ACTIONS(19),
  },
  [17] = {
    [anon_sym_SEMI] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(97),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(97),
    [anon_sym_BANG_EQ] = ACTIONS(97),
    [anon_sym_GT_EQ] = ACTIONS(97),
    [anon_sym_LT_EQ] = ACTIONS(97),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_AMP_AMP] = ACTIONS(97),
    [anon_sym_PIPE_PIPE] = ACTIONS(97),
    [anon_sym_STAR] = ACTIONS(97),
    [anon_sym_SLASH] = ACTIONS(99),
    [anon_sym_AMP] = ACTIONS(99),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_CARET] = ACTIONS(97),
    [sym_comment] = ACTIONS(19),
  },
  [18] = {
    [sym__expression] = STATE(40),
    [sym_assignment_expression] = STATE(40),
    [sym_mux_expression] = STATE(40),
    [sym_unary_expression] = STATE(40),
    [sym_binary_expression] = STATE(40),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(13),
    [sym_identifier] = ACTIONS(31),
    [sym_number] = ACTIONS(101),
    [sym_comment] = ACTIONS(19),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_wire] = ACTIONS(105),
    [anon_sym_register] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_TILDE] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(103),
    [sym_identifier] = ACTIONS(105),
    [sym_number] = ACTIONS(103),
    [sym_comment] = ACTIONS(19),
  },
  [20] = {
    [sym__expression] = STATE(41),
    [sym_assignment_expression] = STATE(41),
    [sym_mux_expression] = STATE(41),
    [sym_unary_expression] = STATE(41),
    [sym_binary_expression] = STATE(41),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(13),
    [sym_identifier] = ACTIONS(31),
    [sym_number] = ACTIONS(107),
    [sym_comment] = ACTIONS(19),
  },
  [21] = {
    [sym__expression] = STATE(42),
    [sym_assignment_expression] = STATE(42),
    [sym_mux_expression] = STATE(42),
    [sym_unary_expression] = STATE(42),
    [sym_binary_expression] = STATE(42),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(13),
    [sym_identifier] = ACTIONS(31),
    [sym_number] = ACTIONS(109),
    [sym_comment] = ACTIONS(19),
  },
  [22] = {
    [sym__expression] = STATE(43),
    [sym_assignment_expression] = STATE(43),
    [sym_mux_expression] = STATE(43),
    [sym_unary_expression] = STATE(43),
    [sym_binary_expression] = STATE(43),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(13),
    [sym_identifier] = ACTIONS(31),
    [sym_number] = ACTIONS(111),
    [sym_comment] = ACTIONS(19),
  },
  [23] = {
    [sym__expression] = STATE(44),
    [sym_assignment_expression] = STATE(44),
    [sym_mux_expression] = STATE(44),
    [sym_unary_expression] = STATE(44),
    [sym_binary_expression] = STATE(44),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(13),
    [sym_identifier] = ACTIONS(31),
    [sym_number] = ACTIONS(113),
    [sym_comment] = ACTIONS(19),
  },
  [24] = {
    [sym__expression] = STATE(45),
    [sym_assignment_expression] = STATE(45),
    [sym_mux_expression] = STATE(45),
    [sym_unary_expression] = STATE(45),
    [sym_binary_expression] = STATE(45),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(13),
    [sym_identifier] = ACTIONS(31),
    [sym_number] = ACTIONS(115),
    [sym_comment] = ACTIONS(19),
  },
  [25] = {
    [sym__statement] = STATE(25),
    [sym__declaration] = STATE(25),
    [sym_wire_declaration] = STATE(25),
    [sym_register_declaration] = STATE(25),
    [sym__expression] = STATE(8),
    [sym_assignment_expression] = STATE(8),
    [sym_mux_expression] = STATE(8),
    [sym_unary_expression] = STATE(8),
    [sym_binary_expression] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_wire] = ACTIONS(119),
    [anon_sym_register] = ACTIONS(122),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(128),
    [anon_sym_TILDE] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [sym_identifier] = ACTIONS(131),
    [sym_number] = ACTIONS(134),
    [sym_comment] = ACTIONS(19),
  },
  [26] = {
    [sym_number] = ACTIONS(137),
    [sym_comment] = ACTIONS(19),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(139),
    [anon_sym_wire] = ACTIONS(141),
    [anon_sym_register] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_BANG] = ACTIONS(139),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [sym_identifier] = ACTIONS(141),
    [sym_number] = ACTIONS(139),
    [sym_comment] = ACTIONS(19),
  },
  [28] = {
    [sym_variable_declarator] = STATE(47),
    [sym_identifier] = ACTIONS(21),
    [sym_comment] = ACTIONS(19),
  },
  [29] = {
    [aux_sym_wire_declaration_repeat1] = STATE(49),
    [anon_sym_SEMI] = ACTIONS(143),
    [anon_sym_COMMA] = ACTIONS(69),
    [sym_comment] = ACTIONS(19),
  },
  [30] = {
    [sym_variable_declarator] = STATE(51),
    [sym__register_expression_statement] = STATE(52),
    [aux_sym_register_declaration_repeat1] = STATE(52),
    [anon_sym_RBRACE] = ACTIONS(145),
    [sym_identifier] = ACTIONS(21),
    [sym_comment] = ACTIONS(19),
  },
  [31] = {
    [sym__expression] = STATE(53),
    [sym_assignment_expression] = STATE(53),
    [sym_mux_expression] = STATE(53),
    [sym_unary_expression] = STATE(53),
    [sym_binary_expression] = STATE(53),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [sym_number] = ACTIONS(147),
    [sym_comment] = ACTIONS(19),
  },
  [32] = {
    [sym__expression] = STATE(54),
    [sym_assignment_expression] = STATE(54),
    [sym_mux_expression] = STATE(54),
    [sym_unary_expression] = STATE(54),
    [sym_binary_expression] = STATE(54),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(13),
    [sym_identifier] = ACTIONS(31),
    [sym_number] = ACTIONS(149),
    [sym_comment] = ACTIONS(19),
  },
  [33] = {
    [sym__expression] = STATE(55),
    [sym_assignment_expression] = STATE(55),
    [sym_mux_expression] = STATE(55),
    [sym_unary_expression] = STATE(55),
    [sym_binary_expression] = STATE(55),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [sym_number] = ACTIONS(151),
    [sym_comment] = ACTIONS(19),
  },
  [34] = {
    [sym__expression] = STATE(56),
    [sym_assignment_expression] = STATE(56),
    [sym_mux_expression] = STATE(56),
    [sym_unary_expression] = STATE(56),
    [sym_binary_expression] = STATE(56),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [sym_number] = ACTIONS(153),
    [sym_comment] = ACTIONS(19),
  },
  [35] = {
    [sym__expression] = STATE(57),
    [sym_assignment_expression] = STATE(57),
    [sym_mux_expression] = STATE(57),
    [sym_unary_expression] = STATE(57),
    [sym_binary_expression] = STATE(57),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [sym_number] = ACTIONS(155),
    [sym_comment] = ACTIONS(19),
  },
  [36] = {
    [sym__expression] = STATE(58),
    [sym_assignment_expression] = STATE(58),
    [sym_mux_expression] = STATE(58),
    [sym_unary_expression] = STATE(58),
    [sym_binary_expression] = STATE(58),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [sym_number] = ACTIONS(157),
    [sym_comment] = ACTIONS(19),
  },
  [37] = {
    [sym__expression] = STATE(45),
    [sym_assignment_expression] = STATE(45),
    [sym_mux_expression] = STATE(45),
    [sym_unary_expression] = STATE(45),
    [sym_binary_expression] = STATE(45),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [sym_number] = ACTIONS(115),
    [sym_comment] = ACTIONS(19),
  },
  [38] = {
    [anon_sym_SEMI] = ACTIONS(159),
    [anon_sym_COLON] = ACTIONS(159),
    [anon_sym_DASH] = ACTIONS(159),
    [anon_sym_PLUS] = ACTIONS(159),
    [anon_sym_EQ_EQ] = ACTIONS(159),
    [anon_sym_BANG_EQ] = ACTIONS(159),
    [anon_sym_GT_EQ] = ACTIONS(159),
    [anon_sym_LT_EQ] = ACTIONS(159),
    [anon_sym_GT] = ACTIONS(161),
    [anon_sym_LT] = ACTIONS(161),
    [anon_sym_AMP_AMP] = ACTIONS(159),
    [anon_sym_PIPE_PIPE] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(159),
    [anon_sym_SLASH] = ACTIONS(161),
    [anon_sym_AMP] = ACTIONS(161),
    [anon_sym_PIPE] = ACTIONS(161),
    [anon_sym_CARET] = ACTIONS(159),
    [sym_comment] = ACTIONS(19),
  },
  [39] = {
    [sym__expression] = STATE(15),
    [sym_assignment_expression] = STATE(15),
    [sym_mux_expression] = STATE(15),
    [sym_unary_expression] = STATE(15),
    [sym_binary_expression] = STATE(15),
    [aux_sym_mux_expression_repeat1] = STATE(39),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_RBRACK] = ACTIONS(166),
    [anon_sym_BANG] = ACTIONS(168),
    [anon_sym_TILDE] = ACTIONS(168),
    [anon_sym_DASH] = ACTIONS(168),
    [anon_sym_PLUS] = ACTIONS(168),
    [sym_identifier] = ACTIONS(171),
    [sym_number] = ACTIONS(174),
    [sym_comment] = ACTIONS(19),
  },
  [40] = {
    [anon_sym_SEMI] = ACTIONS(177),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_EQ_EQ] = ACTIONS(47),
    [anon_sym_BANG_EQ] = ACTIONS(47),
    [anon_sym_GT_EQ] = ACTIONS(47),
    [anon_sym_LT_EQ] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym_AMP_AMP] = ACTIONS(51),
    [anon_sym_PIPE_PIPE] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(55),
    [anon_sym_SLASH] = ACTIONS(57),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(61),
    [anon_sym_CARET] = ACTIONS(53),
    [sym_comment] = ACTIONS(19),
  },
  [41] = {
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_DASH] = ACTIONS(179),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_EQ_EQ] = ACTIONS(47),
    [anon_sym_BANG_EQ] = ACTIONS(47),
    [anon_sym_GT_EQ] = ACTIONS(47),
    [anon_sym_LT_EQ] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym_AMP_AMP] = ACTIONS(179),
    [anon_sym_PIPE_PIPE] = ACTIONS(179),
    [anon_sym_STAR] = ACTIONS(55),
    [anon_sym_SLASH] = ACTIONS(57),
    [anon_sym_AMP] = ACTIONS(181),
    [anon_sym_PIPE] = ACTIONS(181),
    [anon_sym_CARET] = ACTIONS(179),
    [sym_comment] = ACTIONS(19),
  },
  [42] = {
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_DASH] = ACTIONS(179),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_EQ_EQ] = ACTIONS(179),
    [anon_sym_BANG_EQ] = ACTIONS(179),
    [anon_sym_GT_EQ] = ACTIONS(179),
    [anon_sym_LT_EQ] = ACTIONS(179),
    [anon_sym_GT] = ACTIONS(181),
    [anon_sym_LT] = ACTIONS(181),
    [anon_sym_AMP_AMP] = ACTIONS(179),
    [anon_sym_PIPE_PIPE] = ACTIONS(179),
    [anon_sym_STAR] = ACTIONS(55),
    [anon_sym_SLASH] = ACTIONS(57),
    [anon_sym_AMP] = ACTIONS(181),
    [anon_sym_PIPE] = ACTIONS(181),
    [anon_sym_CARET] = ACTIONS(179),
    [sym_comment] = ACTIONS(19),
  },
  [43] = {
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_EQ_EQ] = ACTIONS(47),
    [anon_sym_BANG_EQ] = ACTIONS(47),
    [anon_sym_GT_EQ] = ACTIONS(47),
    [anon_sym_LT_EQ] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym_AMP_AMP] = ACTIONS(179),
    [anon_sym_PIPE_PIPE] = ACTIONS(179),
    [anon_sym_STAR] = ACTIONS(55),
    [anon_sym_SLASH] = ACTIONS(57),
    [anon_sym_AMP] = ACTIONS(181),
    [anon_sym_PIPE] = ACTIONS(181),
    [anon_sym_CARET] = ACTIONS(179),
    [sym_comment] = ACTIONS(19),
  },
  [44] = {
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_EQ_EQ] = ACTIONS(47),
    [anon_sym_BANG_EQ] = ACTIONS(47),
    [anon_sym_GT_EQ] = ACTIONS(47),
    [anon_sym_LT_EQ] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym_AMP_AMP] = ACTIONS(51),
    [anon_sym_PIPE_PIPE] = ACTIONS(179),
    [anon_sym_STAR] = ACTIONS(55),
    [anon_sym_SLASH] = ACTIONS(57),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(181),
    [anon_sym_CARET] = ACTIONS(179),
    [sym_comment] = ACTIONS(19),
  },
  [45] = {
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_COLON] = ACTIONS(179),
    [anon_sym_DASH] = ACTIONS(179),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_EQ_EQ] = ACTIONS(179),
    [anon_sym_BANG_EQ] = ACTIONS(179),
    [anon_sym_GT_EQ] = ACTIONS(179),
    [anon_sym_LT_EQ] = ACTIONS(179),
    [anon_sym_GT] = ACTIONS(181),
    [anon_sym_LT] = ACTIONS(181),
    [anon_sym_AMP_AMP] = ACTIONS(179),
    [anon_sym_PIPE_PIPE] = ACTIONS(179),
    [anon_sym_STAR] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(181),
    [anon_sym_AMP] = ACTIONS(181),
    [anon_sym_PIPE] = ACTIONS(181),
    [anon_sym_CARET] = ACTIONS(179),
    [sym_comment] = ACTIONS(19),
  },
  [46] = {
    [anon_sym_SEMI] = ACTIONS(183),
    [anon_sym_COMMA] = ACTIONS(183),
    [anon_sym_EQ] = ACTIONS(183),
    [sym_comment] = ACTIONS(19),
  },
  [47] = {
    [anon_sym_SEMI] = ACTIONS(185),
    [anon_sym_COMMA] = ACTIONS(185),
    [sym_comment] = ACTIONS(19),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [anon_sym_wire] = ACTIONS(189),
    [anon_sym_register] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_BANG] = ACTIONS(187),
    [anon_sym_TILDE] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(187),
    [anon_sym_PLUS] = ACTIONS(187),
    [sym_identifier] = ACTIONS(189),
    [sym_number] = ACTIONS(187),
    [sym_comment] = ACTIONS(19),
  },
  [49] = {
    [aux_sym_wire_declaration_repeat1] = STATE(49),
    [anon_sym_SEMI] = ACTIONS(185),
    [anon_sym_COMMA] = ACTIONS(191),
    [sym_comment] = ACTIONS(19),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(194),
    [anon_sym_wire] = ACTIONS(196),
    [anon_sym_register] = ACTIONS(196),
    [anon_sym_LBRACK] = ACTIONS(194),
    [anon_sym_BANG] = ACTIONS(194),
    [anon_sym_TILDE] = ACTIONS(194),
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_PLUS] = ACTIONS(194),
    [sym_identifier] = ACTIONS(196),
    [sym_number] = ACTIONS(194),
    [sym_comment] = ACTIONS(19),
  },
  [51] = {
    [anon_sym_EQ] = ACTIONS(198),
    [sym_comment] = ACTIONS(19),
  },
  [52] = {
    [sym_variable_declarator] = STATE(51),
    [sym__register_expression_statement] = STATE(61),
    [aux_sym_register_declaration_repeat1] = STATE(61),
    [anon_sym_RBRACE] = ACTIONS(200),
    [sym_identifier] = ACTIONS(21),
    [sym_comment] = ACTIONS(19),
  },
  [53] = {
    [anon_sym_COLON] = ACTIONS(177),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_EQ_EQ] = ACTIONS(79),
    [anon_sym_BANG_EQ] = ACTIONS(79),
    [anon_sym_GT_EQ] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(81),
    [anon_sym_LT] = ACTIONS(81),
    [anon_sym_AMP_AMP] = ACTIONS(83),
    [anon_sym_PIPE_PIPE] = ACTIONS(85),
    [anon_sym_STAR] = ACTIONS(87),
    [anon_sym_SLASH] = ACTIONS(89),
    [anon_sym_AMP] = ACTIONS(91),
    [anon_sym_PIPE] = ACTIONS(93),
    [anon_sym_CARET] = ACTIONS(85),
    [sym_comment] = ACTIONS(19),
  },
  [54] = {
    [anon_sym_SEMI] = ACTIONS(202),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_EQ_EQ] = ACTIONS(47),
    [anon_sym_BANG_EQ] = ACTIONS(47),
    [anon_sym_GT_EQ] = ACTIONS(47),
    [anon_sym_LT_EQ] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym_AMP_AMP] = ACTIONS(51),
    [anon_sym_PIPE_PIPE] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(55),
    [anon_sym_SLASH] = ACTIONS(57),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(61),
    [anon_sym_CARET] = ACTIONS(53),
    [sym_comment] = ACTIONS(19),
  },
  [55] = {
    [anon_sym_COLON] = ACTIONS(179),
    [anon_sym_DASH] = ACTIONS(179),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_EQ_EQ] = ACTIONS(79),
    [anon_sym_BANG_EQ] = ACTIONS(79),
    [anon_sym_GT_EQ] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(81),
    [anon_sym_LT] = ACTIONS(81),
    [anon_sym_AMP_AMP] = ACTIONS(179),
    [anon_sym_PIPE_PIPE] = ACTIONS(179),
    [anon_sym_STAR] = ACTIONS(87),
    [anon_sym_SLASH] = ACTIONS(89),
    [anon_sym_AMP] = ACTIONS(181),
    [anon_sym_PIPE] = ACTIONS(181),
    [anon_sym_CARET] = ACTIONS(179),
    [sym_comment] = ACTIONS(19),
  },
  [56] = {
    [anon_sym_COLON] = ACTIONS(179),
    [anon_sym_DASH] = ACTIONS(179),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_EQ_EQ] = ACTIONS(179),
    [anon_sym_BANG_EQ] = ACTIONS(179),
    [anon_sym_GT_EQ] = ACTIONS(179),
    [anon_sym_LT_EQ] = ACTIONS(179),
    [anon_sym_GT] = ACTIONS(181),
    [anon_sym_LT] = ACTIONS(181),
    [anon_sym_AMP_AMP] = ACTIONS(179),
    [anon_sym_PIPE_PIPE] = ACTIONS(179),
    [anon_sym_STAR] = ACTIONS(87),
    [anon_sym_SLASH] = ACTIONS(89),
    [anon_sym_AMP] = ACTIONS(181),
    [anon_sym_PIPE] = ACTIONS(181),
    [anon_sym_CARET] = ACTIONS(179),
    [sym_comment] = ACTIONS(19),
  },
  [57] = {
    [anon_sym_COLON] = ACTIONS(179),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_EQ_EQ] = ACTIONS(79),
    [anon_sym_BANG_EQ] = ACTIONS(79),
    [anon_sym_GT_EQ] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(81),
    [anon_sym_LT] = ACTIONS(81),
    [anon_sym_AMP_AMP] = ACTIONS(179),
    [anon_sym_PIPE_PIPE] = ACTIONS(179),
    [anon_sym_STAR] = ACTIONS(87),
    [anon_sym_SLASH] = ACTIONS(89),
    [anon_sym_AMP] = ACTIONS(181),
    [anon_sym_PIPE] = ACTIONS(181),
    [anon_sym_CARET] = ACTIONS(179),
    [sym_comment] = ACTIONS(19),
  },
  [58] = {
    [anon_sym_COLON] = ACTIONS(179),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_EQ_EQ] = ACTIONS(79),
    [anon_sym_BANG_EQ] = ACTIONS(79),
    [anon_sym_GT_EQ] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(81),
    [anon_sym_LT] = ACTIONS(81),
    [anon_sym_AMP_AMP] = ACTIONS(83),
    [anon_sym_PIPE_PIPE] = ACTIONS(179),
    [anon_sym_STAR] = ACTIONS(87),
    [anon_sym_SLASH] = ACTIONS(89),
    [anon_sym_AMP] = ACTIONS(91),
    [anon_sym_PIPE] = ACTIONS(181),
    [anon_sym_CARET] = ACTIONS(179),
    [sym_comment] = ACTIONS(19),
  },
  [59] = {
    [sym__expression] = STATE(63),
    [sym_assignment_expression] = STATE(63),
    [sym_mux_expression] = STATE(63),
    [sym_unary_expression] = STATE(63),
    [sym_binary_expression] = STATE(63),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(13),
    [sym_identifier] = ACTIONS(31),
    [sym_number] = ACTIONS(204),
    [sym_comment] = ACTIONS(19),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(206),
    [anon_sym_wire] = ACTIONS(208),
    [anon_sym_register] = ACTIONS(208),
    [anon_sym_LBRACK] = ACTIONS(206),
    [anon_sym_BANG] = ACTIONS(206),
    [anon_sym_TILDE] = ACTIONS(206),
    [anon_sym_DASH] = ACTIONS(206),
    [anon_sym_PLUS] = ACTIONS(206),
    [sym_identifier] = ACTIONS(208),
    [sym_number] = ACTIONS(206),
    [sym_comment] = ACTIONS(19),
  },
  [61] = {
    [sym_variable_declarator] = STATE(51),
    [sym__register_expression_statement] = STATE(61),
    [aux_sym_register_declaration_repeat1] = STATE(61),
    [anon_sym_RBRACE] = ACTIONS(210),
    [sym_identifier] = ACTIONS(212),
    [sym_comment] = ACTIONS(19),
  },
  [62] = {
    [anon_sym_LBRACK] = ACTIONS(215),
    [anon_sym_RBRACK] = ACTIONS(215),
    [anon_sym_BANG] = ACTIONS(215),
    [anon_sym_TILDE] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(215),
    [anon_sym_PLUS] = ACTIONS(215),
    [sym_identifier] = ACTIONS(215),
    [sym_number] = ACTIONS(215),
    [sym_comment] = ACTIONS(19),
  },
  [63] = {
    [anon_sym_SEMI] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_EQ_EQ] = ACTIONS(47),
    [anon_sym_BANG_EQ] = ACTIONS(47),
    [anon_sym_GT_EQ] = ACTIONS(47),
    [anon_sym_LT_EQ] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym_AMP_AMP] = ACTIONS(51),
    [anon_sym_PIPE_PIPE] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(55),
    [anon_sym_SLASH] = ACTIONS(57),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(61),
    [anon_sym_CARET] = ACTIONS(53),
    [sym_comment] = ACTIONS(19),
  },
  [64] = {
    [anon_sym_RBRACE] = ACTIONS(219),
    [sym_identifier] = ACTIONS(219),
    [sym_comment] = ACTIONS(19),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(2),
  [9] = {.count = 1, .reusable = false}, SHIFT(3),
  [11] = {.count = 1, .reusable = true}, SHIFT(4),
  [13] = {.count = 1, .reusable = true}, SHIFT(5),
  [15] = {.count = 1, .reusable = false}, SHIFT(6),
  [17] = {.count = 1, .reusable = true}, SHIFT(8),
  [19] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [21] = {.count = 1, .reusable = true}, SHIFT(10),
  [23] = {.count = 1, .reusable = true}, SHIFT(12),
  [25] = {.count = 1, .reusable = true}, SHIFT(13),
  [27] = {.count = 1, .reusable = true}, SHIFT(14),
  [29] = {.count = 1, .reusable = true}, SHIFT(15),
  [31] = {.count = 1, .reusable = true}, SHIFT(6),
  [33] = {.count = 1, .reusable = true}, SHIFT(17),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym__expression, 1),
  [37] = {.count = 1, .reusable = false}, SHIFT(18),
  [39] = {.count = 1, .reusable = false}, REDUCE(sym__expression, 1),
  [41] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [43] = {.count = 1, .reusable = true}, SHIFT(19),
  [45] = {.count = 1, .reusable = true}, SHIFT(20),
  [47] = {.count = 1, .reusable = true}, SHIFT(21),
  [49] = {.count = 1, .reusable = false}, SHIFT(21),
  [51] = {.count = 1, .reusable = true}, SHIFT(22),
  [53] = {.count = 1, .reusable = true}, SHIFT(23),
  [55] = {.count = 1, .reusable = true}, SHIFT(24),
  [57] = {.count = 1, .reusable = false}, SHIFT(24),
  [59] = {.count = 1, .reusable = false}, SHIFT(22),
  [61] = {.count = 1, .reusable = false}, SHIFT(23),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [65] = {.count = 1, .reusable = true}, SHIFT(26),
  [67] = {.count = 1, .reusable = true}, SHIFT(27),
  [69] = {.count = 1, .reusable = true}, SHIFT(28),
  [71] = {.count = 1, .reusable = true}, SHIFT(30),
  [73] = {.count = 1, .reusable = false}, SHIFT(31),
  [75] = {.count = 1, .reusable = true}, SHIFT(32),
  [77] = {.count = 1, .reusable = true}, SHIFT(33),
  [79] = {.count = 1, .reusable = true}, SHIFT(34),
  [81] = {.count = 1, .reusable = false}, SHIFT(34),
  [83] = {.count = 1, .reusable = true}, SHIFT(35),
  [85] = {.count = 1, .reusable = true}, SHIFT(36),
  [87] = {.count = 1, .reusable = true}, SHIFT(37),
  [89] = {.count = 1, .reusable = false}, SHIFT(37),
  [91] = {.count = 1, .reusable = false}, SHIFT(35),
  [93] = {.count = 1, .reusable = false}, SHIFT(36),
  [95] = {.count = 1, .reusable = true}, SHIFT(38),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_unary_expression, 2),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym_unary_expression, 2),
  [101] = {.count = 1, .reusable = true}, SHIFT(40),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym__statement, 2),
  [105] = {.count = 1, .reusable = false}, REDUCE(sym__statement, 2),
  [107] = {.count = 1, .reusable = true}, SHIFT(41),
  [109] = {.count = 1, .reusable = true}, SHIFT(42),
  [111] = {.count = 1, .reusable = true}, SHIFT(43),
  [113] = {.count = 1, .reusable = true}, SHIFT(44),
  [115] = {.count = 1, .reusable = true}, SHIFT(45),
  [117] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [119] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [122] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [125] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [128] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [131] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [134] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [137] = {.count = 1, .reusable = true}, SHIFT(46),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_wire_declaration, 3),
  [141] = {.count = 1, .reusable = false}, REDUCE(sym_wire_declaration, 3),
  [143] = {.count = 1, .reusable = true}, SHIFT(48),
  [145] = {.count = 1, .reusable = true}, SHIFT(50),
  [147] = {.count = 1, .reusable = true}, SHIFT(53),
  [149] = {.count = 1, .reusable = true}, SHIFT(54),
  [151] = {.count = 1, .reusable = true}, SHIFT(55),
  [153] = {.count = 1, .reusable = true}, SHIFT(56),
  [155] = {.count = 1, .reusable = true}, SHIFT(57),
  [157] = {.count = 1, .reusable = true}, SHIFT(58),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_mux_expression, 3),
  [161] = {.count = 1, .reusable = false}, REDUCE(sym_mux_expression, 3),
  [163] = {.count = 2, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(4),
  [166] = {.count = 1, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 2),
  [168] = {.count = 2, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(13),
  [171] = {.count = 2, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(14),
  [174] = {.count = 2, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(15),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 3),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [181] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_variable_declarator, 3),
  [185] = {.count = 1, .reusable = true}, REDUCE(aux_sym_wire_declaration_repeat1, 2),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_wire_declaration, 4),
  [189] = {.count = 1, .reusable = false}, REDUCE(sym_wire_declaration, 4),
  [191] = {.count = 2, .reusable = true}, REDUCE(aux_sym_wire_declaration_repeat1, 2), SHIFT_REPEAT(28),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym_register_declaration, 4),
  [196] = {.count = 1, .reusable = false}, REDUCE(sym_register_declaration, 4),
  [198] = {.count = 1, .reusable = true}, SHIFT(59),
  [200] = {.count = 1, .reusable = true}, SHIFT(60),
  [202] = {.count = 1, .reusable = true}, SHIFT(62),
  [204] = {.count = 1, .reusable = true}, SHIFT(63),
  [206] = {.count = 1, .reusable = true}, REDUCE(sym_register_declaration, 5),
  [208] = {.count = 1, .reusable = false}, REDUCE(sym_register_declaration, 5),
  [210] = {.count = 1, .reusable = true}, REDUCE(aux_sym_register_declaration_repeat1, 2),
  [212] = {.count = 2, .reusable = true}, REDUCE(aux_sym_register_declaration_repeat1, 2), SHIFT_REPEAT(10),
  [215] = {.count = 1, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 4),
  [217] = {.count = 1, .reusable = true}, SHIFT(64),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym__register_expression_statement, 4),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hcl() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
