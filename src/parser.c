#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 75
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
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
  anon_sym_in = 12,
  anon_sym_BANG = 13,
  anon_sym_TILDE = 14,
  anon_sym_DASH = 15,
  anon_sym_PLUS = 16,
  anon_sym_EQ_EQ = 17,
  anon_sym_BANG_EQ = 18,
  anon_sym_GT_EQ = 19,
  anon_sym_LT_EQ = 20,
  anon_sym_GT = 21,
  anon_sym_LT = 22,
  anon_sym_AMP_AMP = 23,
  anon_sym_PIPE_PIPE = 24,
  anon_sym_STAR = 25,
  anon_sym_SLASH = 26,
  anon_sym_AMP = 27,
  anon_sym_PIPE = 28,
  anon_sym_CARET = 29,
  sym_identifier = 30,
  sym_number = 31,
  sym_comment = 32,
  sym_pound_comment = 33,
  sym_slash_comment = 34,
  anon_sym_SLASH_STAR = 35,
  sym_source_file = 36,
  sym__statement = 37,
  sym__declaration = 38,
  sym_wire_declaration = 39,
  sym_variable_declarator = 40,
  sym_register_declaration = 41,
  sym__register_expression_statement = 42,
  sym__expression = 43,
  sym_assignment_expression = 44,
  sym_mux_expression = 45,
  sym_in_expression = 46,
  sym_unary_expression = 47,
  sym_binary_expression = 48,
  aux_sym_source_file_repeat1 = 49,
  aux_sym_wire_declaration_repeat1 = 50,
  aux_sym_register_declaration_repeat1 = 51,
  aux_sym_mux_expression_repeat1 = 52,
  aux_sym_in_expression_repeat1 = 53,
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
  [anon_sym_in] = "in",
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
  [sym_in_expression] = "in_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_wire_declaration_repeat1] = "wire_declaration_repeat1",
  [aux_sym_register_declaration_repeat1] = "register_declaration_repeat1",
  [aux_sym_mux_expression_repeat1] = "mux_expression_repeat1",
  [aux_sym_in_expression_repeat1] = "in_expression_repeat1",
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
  [anon_sym_in] = {
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
  [sym_in_expression] = {
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
  [aux_sym_in_expression_repeat1] = {
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
        ADVANCE(25);
      if (lookahead == ';')
        ADVANCE(26);
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(29);
      if (lookahead == '>')
        ADVANCE(31);
      if (lookahead == '[')
        ADVANCE(33);
      if (lookahead == ']')
        ADVANCE(34);
      if (lookahead == '^')
        ADVANCE(35);
      if (lookahead == 'i')
        ADVANCE(36);
      if (lookahead == 'r')
        ADVANCE(39);
      if (lookahead == 'w')
        ADVANCE(47);
      if (lookahead == '{')
        ADVANCE(51);
      if (lookahead == '|')
        ADVANCE(52);
      if (lookahead == '}')
        ADVANCE(54);
      if (lookahead == '~')
        ADVANCE(55);
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
        ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
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
      END_STATE();
    case 15:
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
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(21);
      END_STATE();
    case 22:
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
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E')
        ADVANCE(17);
      if (lookahead == 'e')
        ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=')
        ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_register);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_wire);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|')
        ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 56:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(57);
      if (lookahead == '#')
        ADVANCE(58);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(59);
      if (lookahead == '0')
        ADVANCE(14);
      if (lookahead == '[')
        ADVANCE(33);
      if (lookahead == 'r')
        ADVANCE(39);
      if (lookahead == 'w')
        ADVANCE(47);
      if (lookahead == '~')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(56);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(58);
      END_STATE();
    case 59:
      if (lookahead == '*')
        ADVANCE(60);
      if (lookahead == '/')
        ADVANCE(58);
      END_STATE();
    case 60:
      if (lookahead == '*')
        ADVANCE(61);
      if (lookahead != 0)
        ADVANCE(60);
      END_STATE();
    case 61:
      if (lookahead == '*')
        ADVANCE(61);
      if (lookahead == '/')
        ADVANCE(62);
      if (lookahead != 0)
        ADVANCE(60);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 63:
      if (lookahead == '!')
        ADVANCE(57);
      if (lookahead == '#')
        ADVANCE(58);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(59);
      if (lookahead == '0')
        ADVANCE(14);
      if (lookahead == '[')
        ADVANCE(33);
      if (lookahead == ']')
        ADVANCE(34);
      if (lookahead == '~')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(63);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 64:
      if (lookahead == '#')
        ADVANCE(58);
      if (lookahead == '/')
        ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(65);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_register_name);
      END_STATE();
    case 67:
      if (lookahead == '!')
        ADVANCE(68);
      if (lookahead == '#')
        ADVANCE(58);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(69);
      if (lookahead == ';')
        ADVANCE(26);
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(29);
      if (lookahead == '>')
        ADVANCE(31);
      if (lookahead == '^')
        ADVANCE(35);
      if (lookahead == 'i')
        ADVANCE(70);
      if (lookahead == '|')
        ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(67);
      END_STATE();
    case 68:
      if (lookahead == '=')
        ADVANCE(3);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(60);
      if (lookahead == '/')
        ADVANCE(58);
      END_STATE();
    case 70:
      if (lookahead == 'n')
        ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 72:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(58);
      if (lookahead == '/')
        ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(72);
      END_STATE();
    case 73:
      if (lookahead == '!')
        ADVANCE(68);
      if (lookahead == '#')
        ADVANCE(58);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(69);
      if (lookahead == ':')
        ADVANCE(25);
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(29);
      if (lookahead == '>')
        ADVANCE(31);
      if (lookahead == '^')
        ADVANCE(35);
      if (lookahead == 'i')
        ADVANCE(70);
      if (lookahead == '|')
        ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(73);
      END_STATE();
    case 74:
      if (lookahead == '#')
        ADVANCE(58);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(59);
      if (lookahead == ';')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(74);
      END_STATE();
    case 75:
      if (lookahead == '#')
        ADVANCE(58);
      if (lookahead == '/')
        ADVANCE(59);
      if (lookahead == '{')
        ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(75);
      END_STATE();
    case 76:
      if (lookahead == '!')
        ADVANCE(68);
      if (lookahead == '#')
        ADVANCE(58);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(69);
      if (lookahead == ':')
        ADVANCE(25);
      if (lookahead == ';')
        ADVANCE(26);
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(77);
      if (lookahead == '>')
        ADVANCE(31);
      if (lookahead == '^')
        ADVANCE(35);
      if (lookahead == 'i')
        ADVANCE(70);
      if (lookahead == '|')
        ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(76);
      END_STATE();
    case 77:
      if (lookahead == '=')
        ADVANCE(30);
      END_STATE();
    case 78:
      if (lookahead == '#')
        ADVANCE(58);
      if (lookahead == '/')
        ADVANCE(59);
      if (lookahead == '}')
        ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 79:
      if (lookahead == '#')
        ADVANCE(58);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(59);
      if (lookahead == ';')
        ADVANCE(26);
      if (lookahead == '=')
        ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 81:
      if (lookahead == '#')
        ADVANCE(58);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(59);
      if (lookahead == '}')
        ADVANCE(54);
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
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 56},
  [2] = {.lex_state = 63},
  [3] = {.lex_state = 64},
  [4] = {.lex_state = 63},
  [5] = {.lex_state = 63},
  [6] = {.lex_state = 67},
  [7] = {.lex_state = 72},
  [8] = {.lex_state = 67},
  [9] = {.lex_state = 56},
  [10] = {.lex_state = 73},
  [11] = {.lex_state = 74},
  [12] = {.lex_state = 75},
  [13] = {.lex_state = 63},
  [14] = {.lex_state = 73},
  [15] = {.lex_state = 73},
  [16] = {.lex_state = 63},
  [17] = {.lex_state = 76},
  [18] = {.lex_state = 63},
  [19] = {.lex_state = 56},
  [20] = {.lex_state = 75},
  [21] = {.lex_state = 63},
  [22] = {.lex_state = 63},
  [23] = {.lex_state = 63},
  [24] = {.lex_state = 63},
  [25] = {.lex_state = 63},
  [26] = {.lex_state = 56},
  [27] = {.lex_state = 56},
  [28] = {.lex_state = 56},
  [29] = {.lex_state = 63},
  [30] = {.lex_state = 74},
  [31] = {.lex_state = 78},
  [32] = {.lex_state = 63},
  [33] = {.lex_state = 63},
  [34] = {.lex_state = 63},
  [35] = {.lex_state = 63},
  [36] = {.lex_state = 63},
  [37] = {.lex_state = 63},
  [38] = {.lex_state = 63},
  [39] = {.lex_state = 76},
  [40] = {.lex_state = 63},
  [41] = {.lex_state = 67},
  [42] = {.lex_state = 78},
  [43] = {.lex_state = 67},
  [44] = {.lex_state = 67},
  [45] = {.lex_state = 67},
  [46] = {.lex_state = 67},
  [47] = {.lex_state = 76},
  [48] = {.lex_state = 79},
  [49] = {.lex_state = 74},
  [50] = {.lex_state = 56},
  [51] = {.lex_state = 74},
  [52] = {.lex_state = 56},
  [53] = {.lex_state = 67},
  [54] = {.lex_state = 78},
  [55] = {.lex_state = 73},
  [56] = {.lex_state = 67},
  [57] = {.lex_state = 73},
  [58] = {.lex_state = 73},
  [59] = {.lex_state = 73},
  [60] = {.lex_state = 73},
  [61] = {.lex_state = 76},
  [62] = {.lex_state = 81},
  [63] = {.lex_state = 63},
  [64] = {.lex_state = 56},
  [65] = {.lex_state = 78},
  [66] = {.lex_state = 63},
  [67] = {.lex_state = 63},
  [68] = {.lex_state = 76},
  [69] = {.lex_state = 81},
  [70] = {.lex_state = 67},
  [71] = {.lex_state = 81},
  [72] = {.lex_state = 76},
  [73] = {.lex_state = 81},
  [74] = {.lex_state = 78},
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
    [anon_sym_EQ] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(3),
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
    [sym_number] = ACTIONS(1),
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
    [sym_in_expression] = STATE(8),
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
    [sym_in_expression] = STATE(15),
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
    [sym_in_expression] = STATE(17),
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
    [anon_sym_in] = ACTIONS(35),
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
    [anon_sym_in] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_AMP_AMP] = ACTIONS(53),
    [anon_sym_PIPE_PIPE] = ACTIONS(55),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(61),
    [anon_sym_PIPE] = ACTIONS(63),
    [anon_sym_CARET] = ACTIONS(55),
    [sym_comment] = ACTIONS(19),
  },
  [9] = {
    [sym__statement] = STATE(26),
    [sym__declaration] = STATE(26),
    [sym_wire_declaration] = STATE(26),
    [sym_register_declaration] = STATE(26),
    [sym__expression] = STATE(8),
    [sym_assignment_expression] = STATE(8),
    [sym_mux_expression] = STATE(8),
    [sym_in_expression] = STATE(8),
    [sym_unary_expression] = STATE(8),
    [sym_binary_expression] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(65),
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
    [anon_sym_COLON] = ACTIONS(67),
    [sym_comment] = ACTIONS(19),
  },
  [11] = {
    [aux_sym_wire_declaration_repeat1] = STATE(30),
    [anon_sym_SEMI] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(71),
    [sym_comment] = ACTIONS(19),
  },
  [12] = {
    [anon_sym_LBRACE] = ACTIONS(73),
    [sym_comment] = ACTIONS(19),
  },
  [13] = {
    [sym__expression] = STATE(17),
    [sym_assignment_expression] = STATE(17),
    [sym_mux_expression] = STATE(17),
    [sym_in_expression] = STATE(17),
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
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_in] = ACTIONS(35),
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
    [anon_sym_COLON] = ACTIONS(77),
    [anon_sym_in] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_EQ_EQ] = ACTIONS(81),
    [anon_sym_BANG_EQ] = ACTIONS(81),
    [anon_sym_GT_EQ] = ACTIONS(81),
    [anon_sym_LT_EQ] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(83),
    [anon_sym_LT] = ACTIONS(83),
    [anon_sym_AMP_AMP] = ACTIONS(85),
    [anon_sym_PIPE_PIPE] = ACTIONS(87),
    [anon_sym_STAR] = ACTIONS(89),
    [anon_sym_SLASH] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(95),
    [anon_sym_CARET] = ACTIONS(87),
    [sym_comment] = ACTIONS(19),
  },
  [16] = {
    [sym__expression] = STATE(15),
    [sym_assignment_expression] = STATE(15),
    [sym_mux_expression] = STATE(15),
    [sym_in_expression] = STATE(15),
    [sym_unary_expression] = STATE(15),
    [sym_binary_expression] = STATE(15),
    [aux_sym_mux_expression_repeat1] = STATE(40),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(97),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [sym_number] = ACTIONS(29),
    [sym_comment] = ACTIONS(19),
  },
  [17] = {
    [anon_sym_SEMI] = ACTIONS(99),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_in] = ACTIONS(99),
    [anon_sym_DASH] = ACTIONS(99),
    [anon_sym_PLUS] = ACTIONS(99),
    [anon_sym_EQ_EQ] = ACTIONS(99),
    [anon_sym_BANG_EQ] = ACTIONS(99),
    [anon_sym_GT_EQ] = ACTIONS(99),
    [anon_sym_LT_EQ] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_AMP_AMP] = ACTIONS(99),
    [anon_sym_PIPE_PIPE] = ACTIONS(99),
    [anon_sym_STAR] = ACTIONS(99),
    [anon_sym_SLASH] = ACTIONS(101),
    [anon_sym_AMP] = ACTIONS(101),
    [anon_sym_PIPE] = ACTIONS(101),
    [anon_sym_CARET] = ACTIONS(99),
    [sym_comment] = ACTIONS(19),
  },
  [18] = {
    [sym__expression] = STATE(41),
    [sym_assignment_expression] = STATE(41),
    [sym_mux_expression] = STATE(41),
    [sym_in_expression] = STATE(41),
    [sym_unary_expression] = STATE(41),
    [sym_binary_expression] = STATE(41),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(13),
    [sym_identifier] = ACTIONS(31),
    [sym_number] = ACTIONS(103),
    [sym_comment] = ACTIONS(19),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_wire] = ACTIONS(107),
    [anon_sym_register] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(105),
    [anon_sym_BANG] = ACTIONS(105),
    [anon_sym_TILDE] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_PLUS] = ACTIONS(105),
    [sym_identifier] = ACTIONS(107),
    [sym_number] = ACTIONS(105),
    [sym_comment] = ACTIONS(19),
  },
  [20] = {
    [anon_sym_LBRACE] = ACTIONS(109),
    [sym_comment] = ACTIONS(19),
  },
  [21] = {
    [sym__expression] = STATE(43),
    [sym_assignment_expression] = STATE(43),
    [sym_mux_expression] = STATE(43),
    [sym_in_expression] = STATE(43),
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
  [22] = {
    [sym__expression] = STATE(44),
    [sym_assignment_expression] = STATE(44),
    [sym_mux_expression] = STATE(44),
    [sym_in_expression] = STATE(44),
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
  [23] = {
    [sym__expression] = STATE(45),
    [sym_assignment_expression] = STATE(45),
    [sym_mux_expression] = STATE(45),
    [sym_in_expression] = STATE(45),
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
  [24] = {
    [sym__expression] = STATE(46),
    [sym_assignment_expression] = STATE(46),
    [sym_mux_expression] = STATE(46),
    [sym_in_expression] = STATE(46),
    [sym_unary_expression] = STATE(46),
    [sym_binary_expression] = STATE(46),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(13),
    [sym_identifier] = ACTIONS(31),
    [sym_number] = ACTIONS(117),
    [sym_comment] = ACTIONS(19),
  },
  [25] = {
    [sym__expression] = STATE(47),
    [sym_assignment_expression] = STATE(47),
    [sym_mux_expression] = STATE(47),
    [sym_in_expression] = STATE(47),
    [sym_unary_expression] = STATE(47),
    [sym_binary_expression] = STATE(47),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(13),
    [sym_identifier] = ACTIONS(31),
    [sym_number] = ACTIONS(119),
    [sym_comment] = ACTIONS(19),
  },
  [26] = {
    [sym__statement] = STATE(26),
    [sym__declaration] = STATE(26),
    [sym_wire_declaration] = STATE(26),
    [sym_register_declaration] = STATE(26),
    [sym__expression] = STATE(8),
    [sym_assignment_expression] = STATE(8),
    [sym_mux_expression] = STATE(8),
    [sym_in_expression] = STATE(8),
    [sym_unary_expression] = STATE(8),
    [sym_binary_expression] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(121),
    [anon_sym_wire] = ACTIONS(123),
    [anon_sym_register] = ACTIONS(126),
    [anon_sym_LBRACK] = ACTIONS(129),
    [anon_sym_BANG] = ACTIONS(132),
    [anon_sym_TILDE] = ACTIONS(132),
    [anon_sym_DASH] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(132),
    [sym_identifier] = ACTIONS(135),
    [sym_number] = ACTIONS(138),
    [sym_comment] = ACTIONS(19),
  },
  [27] = {
    [sym_number] = ACTIONS(141),
    [sym_comment] = ACTIONS(19),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(143),
    [anon_sym_wire] = ACTIONS(145),
    [anon_sym_register] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_BANG] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(143),
    [sym_identifier] = ACTIONS(145),
    [sym_number] = ACTIONS(143),
    [sym_comment] = ACTIONS(19),
  },
  [29] = {
    [sym_variable_declarator] = STATE(49),
    [sym_identifier] = ACTIONS(21),
    [sym_comment] = ACTIONS(19),
  },
  [30] = {
    [aux_sym_wire_declaration_repeat1] = STATE(51),
    [anon_sym_SEMI] = ACTIONS(147),
    [anon_sym_COMMA] = ACTIONS(71),
    [sym_comment] = ACTIONS(19),
  },
  [31] = {
    [sym_variable_declarator] = STATE(53),
    [sym__register_expression_statement] = STATE(54),
    [aux_sym_register_declaration_repeat1] = STATE(54),
    [anon_sym_RBRACE] = ACTIONS(149),
    [sym_identifier] = ACTIONS(21),
    [sym_comment] = ACTIONS(19),
  },
  [32] = {
    [sym__expression] = STATE(55),
    [sym_assignment_expression] = STATE(55),
    [sym_mux_expression] = STATE(55),
    [sym_in_expression] = STATE(55),
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
  [33] = {
    [sym__expression] = STATE(56),
    [sym_assignment_expression] = STATE(56),
    [sym_mux_expression] = STATE(56),
    [sym_in_expression] = STATE(56),
    [sym_unary_expression] = STATE(56),
    [sym_binary_expression] = STATE(56),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(13),
    [sym_identifier] = ACTIONS(31),
    [sym_number] = ACTIONS(153),
    [sym_comment] = ACTIONS(19),
  },
  [34] = {
    [sym__expression] = STATE(57),
    [sym_assignment_expression] = STATE(57),
    [sym_mux_expression] = STATE(57),
    [sym_in_expression] = STATE(57),
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
  [35] = {
    [sym__expression] = STATE(58),
    [sym_assignment_expression] = STATE(58),
    [sym_mux_expression] = STATE(58),
    [sym_in_expression] = STATE(58),
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
  [36] = {
    [sym__expression] = STATE(59),
    [sym_assignment_expression] = STATE(59),
    [sym_mux_expression] = STATE(59),
    [sym_in_expression] = STATE(59),
    [sym_unary_expression] = STATE(59),
    [sym_binary_expression] = STATE(59),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [sym_number] = ACTIONS(159),
    [sym_comment] = ACTIONS(19),
  },
  [37] = {
    [sym__expression] = STATE(60),
    [sym_assignment_expression] = STATE(60),
    [sym_mux_expression] = STATE(60),
    [sym_in_expression] = STATE(60),
    [sym_unary_expression] = STATE(60),
    [sym_binary_expression] = STATE(60),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [sym_number] = ACTIONS(161),
    [sym_comment] = ACTIONS(19),
  },
  [38] = {
    [sym__expression] = STATE(47),
    [sym_assignment_expression] = STATE(47),
    [sym_mux_expression] = STATE(47),
    [sym_in_expression] = STATE(47),
    [sym_unary_expression] = STATE(47),
    [sym_binary_expression] = STATE(47),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [sym_number] = ACTIONS(119),
    [sym_comment] = ACTIONS(19),
  },
  [39] = {
    [anon_sym_SEMI] = ACTIONS(163),
    [anon_sym_COLON] = ACTIONS(163),
    [anon_sym_in] = ACTIONS(163),
    [anon_sym_DASH] = ACTIONS(163),
    [anon_sym_PLUS] = ACTIONS(163),
    [anon_sym_EQ_EQ] = ACTIONS(163),
    [anon_sym_BANG_EQ] = ACTIONS(163),
    [anon_sym_GT_EQ] = ACTIONS(163),
    [anon_sym_LT_EQ] = ACTIONS(163),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_AMP_AMP] = ACTIONS(163),
    [anon_sym_PIPE_PIPE] = ACTIONS(163),
    [anon_sym_STAR] = ACTIONS(163),
    [anon_sym_SLASH] = ACTIONS(165),
    [anon_sym_AMP] = ACTIONS(165),
    [anon_sym_PIPE] = ACTIONS(165),
    [anon_sym_CARET] = ACTIONS(163),
    [sym_comment] = ACTIONS(19),
  },
  [40] = {
    [sym__expression] = STATE(15),
    [sym_assignment_expression] = STATE(15),
    [sym_mux_expression] = STATE(15),
    [sym_in_expression] = STATE(15),
    [sym_unary_expression] = STATE(15),
    [sym_binary_expression] = STATE(15),
    [aux_sym_mux_expression_repeat1] = STATE(40),
    [anon_sym_LBRACK] = ACTIONS(167),
    [anon_sym_RBRACK] = ACTIONS(170),
    [anon_sym_BANG] = ACTIONS(172),
    [anon_sym_TILDE] = ACTIONS(172),
    [anon_sym_DASH] = ACTIONS(172),
    [anon_sym_PLUS] = ACTIONS(172),
    [sym_identifier] = ACTIONS(175),
    [sym_number] = ACTIONS(178),
    [sym_comment] = ACTIONS(19),
  },
  [41] = {
    [anon_sym_SEMI] = ACTIONS(181),
    [anon_sym_in] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_AMP_AMP] = ACTIONS(53),
    [anon_sym_PIPE_PIPE] = ACTIONS(55),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(61),
    [anon_sym_PIPE] = ACTIONS(63),
    [anon_sym_CARET] = ACTIONS(55),
    [sym_comment] = ACTIONS(19),
  },
  [42] = {
    [anon_sym_RBRACE] = ACTIONS(183),
    [sym_identifier] = ACTIONS(185),
    [sym_comment] = ACTIONS(19),
  },
  [43] = {
    [anon_sym_SEMI] = ACTIONS(187),
    [anon_sym_in] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(187),
    [anon_sym_PLUS] = ACTIONS(187),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_AMP_AMP] = ACTIONS(187),
    [anon_sym_PIPE_PIPE] = ACTIONS(187),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(189),
    [anon_sym_PIPE] = ACTIONS(189),
    [anon_sym_CARET] = ACTIONS(187),
    [sym_comment] = ACTIONS(19),
  },
  [44] = {
    [anon_sym_SEMI] = ACTIONS(187),
    [anon_sym_in] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(187),
    [anon_sym_PLUS] = ACTIONS(187),
    [anon_sym_EQ_EQ] = ACTIONS(187),
    [anon_sym_BANG_EQ] = ACTIONS(187),
    [anon_sym_GT_EQ] = ACTIONS(187),
    [anon_sym_LT_EQ] = ACTIONS(187),
    [anon_sym_GT] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(189),
    [anon_sym_AMP_AMP] = ACTIONS(187),
    [anon_sym_PIPE_PIPE] = ACTIONS(187),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(189),
    [anon_sym_PIPE] = ACTIONS(189),
    [anon_sym_CARET] = ACTIONS(187),
    [sym_comment] = ACTIONS(19),
  },
  [45] = {
    [anon_sym_SEMI] = ACTIONS(187),
    [anon_sym_in] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_AMP_AMP] = ACTIONS(187),
    [anon_sym_PIPE_PIPE] = ACTIONS(187),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(189),
    [anon_sym_PIPE] = ACTIONS(189),
    [anon_sym_CARET] = ACTIONS(187),
    [sym_comment] = ACTIONS(19),
  },
  [46] = {
    [anon_sym_SEMI] = ACTIONS(187),
    [anon_sym_in] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_AMP_AMP] = ACTIONS(53),
    [anon_sym_PIPE_PIPE] = ACTIONS(187),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(61),
    [anon_sym_PIPE] = ACTIONS(189),
    [anon_sym_CARET] = ACTIONS(187),
    [sym_comment] = ACTIONS(19),
  },
  [47] = {
    [anon_sym_SEMI] = ACTIONS(187),
    [anon_sym_COLON] = ACTIONS(187),
    [anon_sym_in] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(187),
    [anon_sym_PLUS] = ACTIONS(187),
    [anon_sym_EQ_EQ] = ACTIONS(187),
    [anon_sym_BANG_EQ] = ACTIONS(187),
    [anon_sym_GT_EQ] = ACTIONS(187),
    [anon_sym_LT_EQ] = ACTIONS(187),
    [anon_sym_GT] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(189),
    [anon_sym_AMP_AMP] = ACTIONS(187),
    [anon_sym_PIPE_PIPE] = ACTIONS(187),
    [anon_sym_STAR] = ACTIONS(187),
    [anon_sym_SLASH] = ACTIONS(189),
    [anon_sym_AMP] = ACTIONS(189),
    [anon_sym_PIPE] = ACTIONS(189),
    [anon_sym_CARET] = ACTIONS(187),
    [sym_comment] = ACTIONS(19),
  },
  [48] = {
    [anon_sym_SEMI] = ACTIONS(191),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_EQ] = ACTIONS(191),
    [sym_comment] = ACTIONS(19),
  },
  [49] = {
    [anon_sym_SEMI] = ACTIONS(193),
    [anon_sym_COMMA] = ACTIONS(193),
    [sym_comment] = ACTIONS(19),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [anon_sym_wire] = ACTIONS(197),
    [anon_sym_register] = ACTIONS(197),
    [anon_sym_LBRACK] = ACTIONS(195),
    [anon_sym_BANG] = ACTIONS(195),
    [anon_sym_TILDE] = ACTIONS(195),
    [anon_sym_DASH] = ACTIONS(195),
    [anon_sym_PLUS] = ACTIONS(195),
    [sym_identifier] = ACTIONS(197),
    [sym_number] = ACTIONS(195),
    [sym_comment] = ACTIONS(19),
  },
  [51] = {
    [aux_sym_wire_declaration_repeat1] = STATE(51),
    [anon_sym_SEMI] = ACTIONS(193),
    [anon_sym_COMMA] = ACTIONS(199),
    [sym_comment] = ACTIONS(19),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(202),
    [anon_sym_wire] = ACTIONS(204),
    [anon_sym_register] = ACTIONS(204),
    [anon_sym_LBRACK] = ACTIONS(202),
    [anon_sym_BANG] = ACTIONS(202),
    [anon_sym_TILDE] = ACTIONS(202),
    [anon_sym_DASH] = ACTIONS(202),
    [anon_sym_PLUS] = ACTIONS(202),
    [sym_identifier] = ACTIONS(204),
    [sym_number] = ACTIONS(202),
    [sym_comment] = ACTIONS(19),
  },
  [53] = {
    [anon_sym_EQ] = ACTIONS(206),
    [sym_comment] = ACTIONS(19),
  },
  [54] = {
    [sym_variable_declarator] = STATE(53),
    [sym__register_expression_statement] = STATE(65),
    [aux_sym_register_declaration_repeat1] = STATE(65),
    [anon_sym_RBRACE] = ACTIONS(208),
    [sym_identifier] = ACTIONS(21),
    [sym_comment] = ACTIONS(19),
  },
  [55] = {
    [anon_sym_COLON] = ACTIONS(181),
    [anon_sym_in] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_EQ_EQ] = ACTIONS(81),
    [anon_sym_BANG_EQ] = ACTIONS(81),
    [anon_sym_GT_EQ] = ACTIONS(81),
    [anon_sym_LT_EQ] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(83),
    [anon_sym_LT] = ACTIONS(83),
    [anon_sym_AMP_AMP] = ACTIONS(85),
    [anon_sym_PIPE_PIPE] = ACTIONS(87),
    [anon_sym_STAR] = ACTIONS(89),
    [anon_sym_SLASH] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(95),
    [anon_sym_CARET] = ACTIONS(87),
    [sym_comment] = ACTIONS(19),
  },
  [56] = {
    [anon_sym_SEMI] = ACTIONS(210),
    [anon_sym_in] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_AMP_AMP] = ACTIONS(53),
    [anon_sym_PIPE_PIPE] = ACTIONS(55),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(61),
    [anon_sym_PIPE] = ACTIONS(63),
    [anon_sym_CARET] = ACTIONS(55),
    [sym_comment] = ACTIONS(19),
  },
  [57] = {
    [anon_sym_COLON] = ACTIONS(187),
    [anon_sym_in] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(187),
    [anon_sym_PLUS] = ACTIONS(187),
    [anon_sym_EQ_EQ] = ACTIONS(81),
    [anon_sym_BANG_EQ] = ACTIONS(81),
    [anon_sym_GT_EQ] = ACTIONS(81),
    [anon_sym_LT_EQ] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(83),
    [anon_sym_LT] = ACTIONS(83),
    [anon_sym_AMP_AMP] = ACTIONS(187),
    [anon_sym_PIPE_PIPE] = ACTIONS(187),
    [anon_sym_STAR] = ACTIONS(89),
    [anon_sym_SLASH] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(189),
    [anon_sym_PIPE] = ACTIONS(189),
    [anon_sym_CARET] = ACTIONS(187),
    [sym_comment] = ACTIONS(19),
  },
  [58] = {
    [anon_sym_COLON] = ACTIONS(187),
    [anon_sym_in] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(187),
    [anon_sym_PLUS] = ACTIONS(187),
    [anon_sym_EQ_EQ] = ACTIONS(187),
    [anon_sym_BANG_EQ] = ACTIONS(187),
    [anon_sym_GT_EQ] = ACTIONS(187),
    [anon_sym_LT_EQ] = ACTIONS(187),
    [anon_sym_GT] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(189),
    [anon_sym_AMP_AMP] = ACTIONS(187),
    [anon_sym_PIPE_PIPE] = ACTIONS(187),
    [anon_sym_STAR] = ACTIONS(89),
    [anon_sym_SLASH] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(189),
    [anon_sym_PIPE] = ACTIONS(189),
    [anon_sym_CARET] = ACTIONS(187),
    [sym_comment] = ACTIONS(19),
  },
  [59] = {
    [anon_sym_COLON] = ACTIONS(187),
    [anon_sym_in] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_EQ_EQ] = ACTIONS(81),
    [anon_sym_BANG_EQ] = ACTIONS(81),
    [anon_sym_GT_EQ] = ACTIONS(81),
    [anon_sym_LT_EQ] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(83),
    [anon_sym_LT] = ACTIONS(83),
    [anon_sym_AMP_AMP] = ACTIONS(187),
    [anon_sym_PIPE_PIPE] = ACTIONS(187),
    [anon_sym_STAR] = ACTIONS(89),
    [anon_sym_SLASH] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(189),
    [anon_sym_PIPE] = ACTIONS(189),
    [anon_sym_CARET] = ACTIONS(187),
    [sym_comment] = ACTIONS(19),
  },
  [60] = {
    [anon_sym_COLON] = ACTIONS(187),
    [anon_sym_in] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_EQ_EQ] = ACTIONS(81),
    [anon_sym_BANG_EQ] = ACTIONS(81),
    [anon_sym_GT_EQ] = ACTIONS(81),
    [anon_sym_LT_EQ] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(83),
    [anon_sym_LT] = ACTIONS(83),
    [anon_sym_AMP_AMP] = ACTIONS(85),
    [anon_sym_PIPE_PIPE] = ACTIONS(187),
    [anon_sym_STAR] = ACTIONS(89),
    [anon_sym_SLASH] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(189),
    [anon_sym_CARET] = ACTIONS(187),
    [sym_comment] = ACTIONS(19),
  },
  [61] = {
    [anon_sym_SEMI] = ACTIONS(212),
    [anon_sym_COLON] = ACTIONS(212),
    [anon_sym_in] = ACTIONS(212),
    [anon_sym_DASH] = ACTIONS(212),
    [anon_sym_PLUS] = ACTIONS(212),
    [anon_sym_EQ_EQ] = ACTIONS(212),
    [anon_sym_BANG_EQ] = ACTIONS(212),
    [anon_sym_GT_EQ] = ACTIONS(212),
    [anon_sym_LT_EQ] = ACTIONS(212),
    [anon_sym_GT] = ACTIONS(214),
    [anon_sym_LT] = ACTIONS(214),
    [anon_sym_AMP_AMP] = ACTIONS(212),
    [anon_sym_PIPE_PIPE] = ACTIONS(212),
    [anon_sym_STAR] = ACTIONS(212),
    [anon_sym_SLASH] = ACTIONS(214),
    [anon_sym_AMP] = ACTIONS(214),
    [anon_sym_PIPE] = ACTIONS(214),
    [anon_sym_CARET] = ACTIONS(212),
    [sym_comment] = ACTIONS(19),
  },
  [62] = {
    [aux_sym_in_expression_repeat1] = STATE(69),
    [anon_sym_COMMA] = ACTIONS(216),
    [anon_sym_RBRACE] = ACTIONS(218),
    [sym_comment] = ACTIONS(19),
  },
  [63] = {
    [sym__expression] = STATE(70),
    [sym_assignment_expression] = STATE(70),
    [sym_mux_expression] = STATE(70),
    [sym_in_expression] = STATE(70),
    [sym_unary_expression] = STATE(70),
    [sym_binary_expression] = STATE(70),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(13),
    [sym_identifier] = ACTIONS(31),
    [sym_number] = ACTIONS(220),
    [sym_comment] = ACTIONS(19),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(222),
    [anon_sym_wire] = ACTIONS(224),
    [anon_sym_register] = ACTIONS(224),
    [anon_sym_LBRACK] = ACTIONS(222),
    [anon_sym_BANG] = ACTIONS(222),
    [anon_sym_TILDE] = ACTIONS(222),
    [anon_sym_DASH] = ACTIONS(222),
    [anon_sym_PLUS] = ACTIONS(222),
    [sym_identifier] = ACTIONS(224),
    [sym_number] = ACTIONS(222),
    [sym_comment] = ACTIONS(19),
  },
  [65] = {
    [sym_variable_declarator] = STATE(53),
    [sym__register_expression_statement] = STATE(65),
    [aux_sym_register_declaration_repeat1] = STATE(65),
    [anon_sym_RBRACE] = ACTIONS(226),
    [sym_identifier] = ACTIONS(228),
    [sym_comment] = ACTIONS(19),
  },
  [66] = {
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_RBRACK] = ACTIONS(231),
    [anon_sym_BANG] = ACTIONS(231),
    [anon_sym_TILDE] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(231),
    [anon_sym_PLUS] = ACTIONS(231),
    [sym_identifier] = ACTIONS(231),
    [sym_number] = ACTIONS(231),
    [sym_comment] = ACTIONS(19),
  },
  [67] = {
    [sym_identifier] = ACTIONS(233),
    [sym_comment] = ACTIONS(19),
  },
  [68] = {
    [anon_sym_SEMI] = ACTIONS(235),
    [anon_sym_COLON] = ACTIONS(235),
    [anon_sym_in] = ACTIONS(235),
    [anon_sym_DASH] = ACTIONS(235),
    [anon_sym_PLUS] = ACTIONS(235),
    [anon_sym_EQ_EQ] = ACTIONS(235),
    [anon_sym_BANG_EQ] = ACTIONS(235),
    [anon_sym_GT_EQ] = ACTIONS(235),
    [anon_sym_LT_EQ] = ACTIONS(235),
    [anon_sym_GT] = ACTIONS(237),
    [anon_sym_LT] = ACTIONS(237),
    [anon_sym_AMP_AMP] = ACTIONS(235),
    [anon_sym_PIPE_PIPE] = ACTIONS(235),
    [anon_sym_STAR] = ACTIONS(235),
    [anon_sym_SLASH] = ACTIONS(237),
    [anon_sym_AMP] = ACTIONS(237),
    [anon_sym_PIPE] = ACTIONS(237),
    [anon_sym_CARET] = ACTIONS(235),
    [sym_comment] = ACTIONS(19),
  },
  [69] = {
    [aux_sym_in_expression_repeat1] = STATE(73),
    [anon_sym_COMMA] = ACTIONS(216),
    [anon_sym_RBRACE] = ACTIONS(239),
    [sym_comment] = ACTIONS(19),
  },
  [70] = {
    [anon_sym_SEMI] = ACTIONS(241),
    [anon_sym_in] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_AMP_AMP] = ACTIONS(53),
    [anon_sym_PIPE_PIPE] = ACTIONS(55),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(61),
    [anon_sym_PIPE] = ACTIONS(63),
    [anon_sym_CARET] = ACTIONS(55),
    [sym_comment] = ACTIONS(19),
  },
  [71] = {
    [anon_sym_COMMA] = ACTIONS(243),
    [anon_sym_RBRACE] = ACTIONS(243),
    [sym_comment] = ACTIONS(19),
  },
  [72] = {
    [anon_sym_SEMI] = ACTIONS(245),
    [anon_sym_COLON] = ACTIONS(245),
    [anon_sym_in] = ACTIONS(245),
    [anon_sym_DASH] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_EQ_EQ] = ACTIONS(245),
    [anon_sym_BANG_EQ] = ACTIONS(245),
    [anon_sym_GT_EQ] = ACTIONS(245),
    [anon_sym_LT_EQ] = ACTIONS(245),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_LT] = ACTIONS(247),
    [anon_sym_AMP_AMP] = ACTIONS(245),
    [anon_sym_PIPE_PIPE] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(247),
    [anon_sym_AMP] = ACTIONS(247),
    [anon_sym_PIPE] = ACTIONS(247),
    [anon_sym_CARET] = ACTIONS(245),
    [sym_comment] = ACTIONS(19),
  },
  [73] = {
    [aux_sym_in_expression_repeat1] = STATE(73),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_RBRACE] = ACTIONS(243),
    [sym_comment] = ACTIONS(19),
  },
  [74] = {
    [anon_sym_RBRACE] = ACTIONS(252),
    [sym_identifier] = ACTIONS(252),
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
  [49] = {.count = 1, .reusable = true}, SHIFT(22),
  [51] = {.count = 1, .reusable = false}, SHIFT(22),
  [53] = {.count = 1, .reusable = true}, SHIFT(23),
  [55] = {.count = 1, .reusable = true}, SHIFT(24),
  [57] = {.count = 1, .reusable = true}, SHIFT(25),
  [59] = {.count = 1, .reusable = false}, SHIFT(25),
  [61] = {.count = 1, .reusable = false}, SHIFT(23),
  [63] = {.count = 1, .reusable = false}, SHIFT(24),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [67] = {.count = 1, .reusable = true}, SHIFT(27),
  [69] = {.count = 1, .reusable = true}, SHIFT(28),
  [71] = {.count = 1, .reusable = true}, SHIFT(29),
  [73] = {.count = 1, .reusable = true}, SHIFT(31),
  [75] = {.count = 1, .reusable = false}, SHIFT(32),
  [77] = {.count = 1, .reusable = true}, SHIFT(33),
  [79] = {.count = 1, .reusable = true}, SHIFT(34),
  [81] = {.count = 1, .reusable = true}, SHIFT(35),
  [83] = {.count = 1, .reusable = false}, SHIFT(35),
  [85] = {.count = 1, .reusable = true}, SHIFT(36),
  [87] = {.count = 1, .reusable = true}, SHIFT(37),
  [89] = {.count = 1, .reusable = true}, SHIFT(38),
  [91] = {.count = 1, .reusable = false}, SHIFT(38),
  [93] = {.count = 1, .reusable = false}, SHIFT(36),
  [95] = {.count = 1, .reusable = false}, SHIFT(37),
  [97] = {.count = 1, .reusable = true}, SHIFT(39),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_unary_expression, 2),
  [101] = {.count = 1, .reusable = false}, REDUCE(sym_unary_expression, 2),
  [103] = {.count = 1, .reusable = true}, SHIFT(41),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym__statement, 2),
  [107] = {.count = 1, .reusable = false}, REDUCE(sym__statement, 2),
  [109] = {.count = 1, .reusable = true}, SHIFT(42),
  [111] = {.count = 1, .reusable = true}, SHIFT(43),
  [113] = {.count = 1, .reusable = true}, SHIFT(44),
  [115] = {.count = 1, .reusable = true}, SHIFT(45),
  [117] = {.count = 1, .reusable = true}, SHIFT(46),
  [119] = {.count = 1, .reusable = true}, SHIFT(47),
  [121] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [123] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [126] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [129] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [132] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [135] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [138] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [141] = {.count = 1, .reusable = true}, SHIFT(48),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_wire_declaration, 3),
  [145] = {.count = 1, .reusable = false}, REDUCE(sym_wire_declaration, 3),
  [147] = {.count = 1, .reusable = true}, SHIFT(50),
  [149] = {.count = 1, .reusable = true}, SHIFT(52),
  [151] = {.count = 1, .reusable = true}, SHIFT(55),
  [153] = {.count = 1, .reusable = true}, SHIFT(56),
  [155] = {.count = 1, .reusable = true}, SHIFT(57),
  [157] = {.count = 1, .reusable = true}, SHIFT(58),
  [159] = {.count = 1, .reusable = true}, SHIFT(59),
  [161] = {.count = 1, .reusable = true}, SHIFT(60),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_mux_expression, 3),
  [165] = {.count = 1, .reusable = false}, REDUCE(sym_mux_expression, 3),
  [167] = {.count = 2, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(4),
  [170] = {.count = 1, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 2),
  [172] = {.count = 2, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(13),
  [175] = {.count = 2, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(14),
  [178] = {.count = 2, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(15),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 3),
  [183] = {.count = 1, .reusable = true}, SHIFT(61),
  [185] = {.count = 1, .reusable = true}, SHIFT(62),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [189] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_variable_declarator, 3),
  [193] = {.count = 1, .reusable = true}, REDUCE(aux_sym_wire_declaration_repeat1, 2),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_wire_declaration, 4),
  [197] = {.count = 1, .reusable = false}, REDUCE(sym_wire_declaration, 4),
  [199] = {.count = 2, .reusable = true}, REDUCE(aux_sym_wire_declaration_repeat1, 2), SHIFT_REPEAT(29),
  [202] = {.count = 1, .reusable = true}, REDUCE(sym_register_declaration, 4),
  [204] = {.count = 1, .reusable = false}, REDUCE(sym_register_declaration, 4),
  [206] = {.count = 1, .reusable = true}, SHIFT(63),
  [208] = {.count = 1, .reusable = true}, SHIFT(64),
  [210] = {.count = 1, .reusable = true}, SHIFT(66),
  [212] = {.count = 1, .reusable = true}, REDUCE(sym_in_expression, 4),
  [214] = {.count = 1, .reusable = false}, REDUCE(sym_in_expression, 4),
  [216] = {.count = 1, .reusable = true}, SHIFT(67),
  [218] = {.count = 1, .reusable = true}, SHIFT(68),
  [220] = {.count = 1, .reusable = true}, SHIFT(70),
  [222] = {.count = 1, .reusable = true}, REDUCE(sym_register_declaration, 5),
  [224] = {.count = 1, .reusable = false}, REDUCE(sym_register_declaration, 5),
  [226] = {.count = 1, .reusable = true}, REDUCE(aux_sym_register_declaration_repeat1, 2),
  [228] = {.count = 2, .reusable = true}, REDUCE(aux_sym_register_declaration_repeat1, 2), SHIFT_REPEAT(10),
  [231] = {.count = 1, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 4),
  [233] = {.count = 1, .reusable = true}, SHIFT(71),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym_in_expression, 5),
  [237] = {.count = 1, .reusable = false}, REDUCE(sym_in_expression, 5),
  [239] = {.count = 1, .reusable = true}, SHIFT(72),
  [241] = {.count = 1, .reusable = true}, SHIFT(74),
  [243] = {.count = 1, .reusable = true}, REDUCE(aux_sym_in_expression_repeat1, 2),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_in_expression, 6),
  [247] = {.count = 1, .reusable = false}, REDUCE(sym_in_expression, 6),
  [249] = {.count = 2, .reusable = true}, REDUCE(aux_sym_in_expression_repeat1, 2), SHIFT_REPEAT(67),
  [252] = {.count = 1, .reusable = true}, REDUCE(sym__register_expression_statement, 4),
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
