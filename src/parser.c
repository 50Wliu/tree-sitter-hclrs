#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 68
#define SYMBOL_COUNT 52
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
  aux_sym_SLASH_BSLASHw_PLUS_SLASH = 10,
  anon_sym_LBRACK = 11,
  anon_sym_RBRACK = 12,
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
  sym_identifier = 47,
  aux_sym_source_file_repeat1 = 48,
  aux_sym_wire_declaration_repeat1 = 49,
  aux_sym_register_declaration_repeat1 = 50,
  aux_sym_mux_expression_repeat1 = 51,
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
  [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = "/\\w+/",
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
  [sym_identifier] = "identifier",
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
  [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = {
    .visible = false,
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
  [sym_identifier] = {
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
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '<')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '[')
        ADVANCE(22);
      if (lookahead == ']')
        ADVANCE(23);
      if (lookahead == '^')
        ADVANCE(24);
      if (lookahead == 'r')
        ADVANCE(25);
      if (lookahead == 'w')
        ADVANCE(35);
      if (lookahead == '{')
        ADVANCE(39);
      if (lookahead == '|')
        ADVANCE(40);
      if (lookahead == '}')
        ADVANCE(42);
      if (lookahead == '~')
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
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
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=')
        ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_register_name);
      if (lookahead == 'g')
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_register);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_register_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_register_name);
      if (lookahead == 'r')
        ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_wire);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|')
        ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_register_name);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 48:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(49);
      if (lookahead == '#')
        ADVANCE(50);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(51);
      if (lookahead == '[')
        ADVANCE(22);
      if (lookahead == 'r')
        ADVANCE(55);
      if (lookahead == 'w')
        ADVANCE(57);
      if (lookahead == '~')
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(48);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(50);
      END_STATE();
    case 51:
      if (lookahead == '*')
        ADVANCE(52);
      if (lookahead == '/')
        ADVANCE(50);
      END_STATE();
    case 52:
      if (lookahead == '*')
        ADVANCE(53);
      if (lookahead != 0)
        ADVANCE(52);
      END_STATE();
    case 53:
      if (lookahead == '*')
        ADVANCE(53);
      if (lookahead == '/')
        ADVANCE(54);
      if (lookahead != 0)
        ADVANCE(52);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 'g')
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 59:
      if (lookahead == '!')
        ADVANCE(49);
      if (lookahead == '#')
        ADVANCE(50);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(51);
      if (lookahead == '[')
        ADVANCE(22);
      if (lookahead == ']')
        ADVANCE(23);
      if (lookahead == '~')
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(59);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 60:
      if (lookahead == '#')
        ADVANCE(50);
      if (lookahead == '/')
        ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(61);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_register_name);
      END_STATE();
    case 63:
      if (lookahead == '!')
        ADVANCE(64);
      if (lookahead == '#')
        ADVANCE(50);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(65);
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '<')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '^')
        ADVANCE(24);
      if (lookahead == '|')
        ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(63);
      END_STATE();
    case 64:
      if (lookahead == '=')
        ADVANCE(3);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(52);
      if (lookahead == '/')
        ADVANCE(50);
      END_STATE();
    case 66:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(50);
      if (lookahead == '/')
        ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(66);
      END_STATE();
    case 67:
      if (lookahead == '!')
        ADVANCE(64);
      if (lookahead == '#')
        ADVANCE(50);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(65);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '<')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '^')
        ADVANCE(24);
      if (lookahead == '|')
        ADVANCE(40);
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
      if (lookahead == '#')
        ADVANCE(50);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(51);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(68);
      END_STATE();
    case 69:
      if (lookahead == '!')
        ADVANCE(64);
      if (lookahead == '#')
        ADVANCE(50);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(65);
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == '<')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '^')
        ADVANCE(24);
      if (lookahead == '|')
        ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(69);
      END_STATE();
    case 70:
      if (lookahead == '#')
        ADVANCE(50);
      if (lookahead == '/')
        ADVANCE(51);
      if (lookahead == '{')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(70);
      END_STATE();
    case 71:
      if (lookahead == '#')
        ADVANCE(50);
      if (lookahead == '/')
        ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(71);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(72);
      END_STATE();
    case 73:
      if (lookahead == '#')
        ADVANCE(50);
      if (lookahead == '/')
        ADVANCE(51);
      if (lookahead == '}')
        ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 48},
  [2] = {.lex_state = 59},
  [3] = {.lex_state = 60},
  [4] = {.lex_state = 63},
  [5] = {.lex_state = 59},
  [6] = {.lex_state = 59},
  [7] = {.lex_state = 66},
  [8] = {.lex_state = 67},
  [9] = {.lex_state = 67},
  [10] = {.lex_state = 48},
  [11] = {.lex_state = 68},
  [12] = {.lex_state = 69},
  [13] = {.lex_state = 70},
  [14] = {.lex_state = 59},
  [15] = {.lex_state = 69},
  [16] = {.lex_state = 69},
  [17] = {.lex_state = 59},
  [18] = {.lex_state = 63},
  [19] = {.lex_state = 48},
  [20] = {.lex_state = 59},
  [21] = {.lex_state = 59},
  [22] = {.lex_state = 59},
  [23] = {.lex_state = 59},
  [24] = {.lex_state = 59},
  [25] = {.lex_state = 59},
  [26] = {.lex_state = 48},
  [27] = {.lex_state = 48},
  [28] = {.lex_state = 59},
  [29] = {.lex_state = 68},
  [30] = {.lex_state = 71},
  [31] = {.lex_state = 73},
  [32] = {.lex_state = 59},
  [33] = {.lex_state = 59},
  [34] = {.lex_state = 59},
  [35] = {.lex_state = 59},
  [36] = {.lex_state = 59},
  [37] = {.lex_state = 59},
  [38] = {.lex_state = 59},
  [39] = {.lex_state = 63},
  [40] = {.lex_state = 59},
  [41] = {.lex_state = 67},
  [42] = {.lex_state = 67},
  [43] = {.lex_state = 67},
  [44] = {.lex_state = 67},
  [45] = {.lex_state = 63},
  [46] = {.lex_state = 67},
  [47] = {.lex_state = 68},
  [48] = {.lex_state = 48},
  [49] = {.lex_state = 68},
  [50] = {.lex_state = 68},
  [51] = {.lex_state = 48},
  [52] = {.lex_state = 69},
  [53] = {.lex_state = 73},
  [54] = {.lex_state = 67},
  [55] = {.lex_state = 69},
  [56] = {.lex_state = 69},
  [57] = {.lex_state = 69},
  [58] = {.lex_state = 69},
  [59] = {.lex_state = 69},
  [60] = {.lex_state = 71},
  [61] = {.lex_state = 48},
  [62] = {.lex_state = 73},
  [63] = {.lex_state = 59},
  [64] = {.lex_state = 63},
  [65] = {.lex_state = 59},
  [66] = {.lex_state = 67},
  [67] = {.lex_state = 73},
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
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(3),
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
    [sym_number] = ACTIONS(3),
    [sym_pound_comment] = ACTIONS(1),
    [sym_slash_comment] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(7),
    [sym__statement] = STATE(10),
    [sym__declaration] = STATE(10),
    [sym_wire_declaration] = STATE(10),
    [sym_register_declaration] = STATE(10),
    [sym__expression] = STATE(8),
    [sym_assignment_expression] = STATE(8),
    [sym_mux_expression] = STATE(8),
    [sym_unary_expression] = STATE(8),
    [sym_binary_expression] = STATE(8),
    [sym_identifier] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_wire] = ACTIONS(7),
    [anon_sym_register] = ACTIONS(9),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
  },
  [2] = {
    [sym_variable_declarator] = STATE(11),
    [sym_identifier] = STATE(12),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(21),
    [sym_comment] = ACTIONS(19),
  },
  [3] = {
    [sym_register_name] = ACTIONS(23),
    [sym_comment] = ACTIONS(19),
  },
  [4] = {
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_EQ] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_AMP_AMP] = ACTIONS(25),
    [anon_sym_PIPE_PIPE] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_CARET] = ACTIONS(25),
    [sym_comment] = ACTIONS(19),
  },
  [5] = {
    [sym__expression] = STATE(15),
    [sym_assignment_expression] = STATE(15),
    [sym_mux_expression] = STATE(15),
    [sym_unary_expression] = STATE(15),
    [sym_binary_expression] = STATE(15),
    [sym_identifier] = STATE(16),
    [aux_sym_mux_expression_repeat1] = STATE(17),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(29),
    [sym_number] = ACTIONS(31),
    [sym_comment] = ACTIONS(19),
  },
  [6] = {
    [sym__expression] = STATE(18),
    [sym_assignment_expression] = STATE(18),
    [sym_mux_expression] = STATE(18),
    [sym_unary_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_identifier] = STATE(9),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(15),
    [sym_number] = ACTIONS(33),
    [sym_comment] = ACTIONS(19),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_comment] = ACTIONS(19),
  },
  [8] = {
    [anon_sym_SEMI] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_EQ_EQ] = ACTIONS(41),
    [anon_sym_BANG_EQ] = ACTIONS(41),
    [anon_sym_GT_EQ] = ACTIONS(41),
    [anon_sym_LT_EQ] = ACTIONS(41),
    [anon_sym_GT] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_AMP_AMP] = ACTIONS(45),
    [anon_sym_PIPE_PIPE] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_SLASH] = ACTIONS(51),
    [anon_sym_AMP] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(47),
    [sym_comment] = ACTIONS(19),
  },
  [9] = {
    [anon_sym_SEMI] = ACTIONS(57),
    [anon_sym_EQ] = ACTIONS(59),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_EQ_EQ] = ACTIONS(57),
    [anon_sym_BANG_EQ] = ACTIONS(57),
    [anon_sym_GT_EQ] = ACTIONS(57),
    [anon_sym_LT_EQ] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_AMP_AMP] = ACTIONS(57),
    [anon_sym_PIPE_PIPE] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(61),
    [anon_sym_AMP] = ACTIONS(61),
    [anon_sym_PIPE] = ACTIONS(61),
    [anon_sym_CARET] = ACTIONS(57),
    [sym_comment] = ACTIONS(19),
  },
  [10] = {
    [sym__statement] = STATE(26),
    [sym__declaration] = STATE(26),
    [sym_wire_declaration] = STATE(26),
    [sym_register_declaration] = STATE(26),
    [sym__expression] = STATE(8),
    [sym_assignment_expression] = STATE(8),
    [sym_mux_expression] = STATE(8),
    [sym_unary_expression] = STATE(8),
    [sym_binary_expression] = STATE(8),
    [sym_identifier] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_wire] = ACTIONS(7),
    [anon_sym_register] = ACTIONS(9),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
  },
  [11] = {
    [aux_sym_wire_declaration_repeat1] = STATE(29),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(67),
    [sym_comment] = ACTIONS(19),
  },
  [12] = {
    [anon_sym_COLON] = ACTIONS(69),
    [sym_comment] = ACTIONS(19),
  },
  [13] = {
    [anon_sym_LBRACE] = ACTIONS(71),
    [sym_comment] = ACTIONS(19),
  },
  [14] = {
    [sym__expression] = STATE(18),
    [sym_assignment_expression] = STATE(18),
    [sym_mux_expression] = STATE(18),
    [sym_unary_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_identifier] = STATE(16),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(29),
    [sym_number] = ACTIONS(33),
    [sym_comment] = ACTIONS(19),
  },
  [15] = {
    [anon_sym_COLON] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_EQ_EQ] = ACTIONS(77),
    [anon_sym_BANG_EQ] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(77),
    [anon_sym_LT_EQ] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_AMP_AMP] = ACTIONS(81),
    [anon_sym_PIPE_PIPE] = ACTIONS(83),
    [anon_sym_STAR] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(87),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_CARET] = ACTIONS(83),
    [sym_comment] = ACTIONS(19),
  },
  [16] = {
    [anon_sym_COLON] = ACTIONS(57),
    [anon_sym_EQ] = ACTIONS(93),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_EQ_EQ] = ACTIONS(57),
    [anon_sym_BANG_EQ] = ACTIONS(57),
    [anon_sym_GT_EQ] = ACTIONS(57),
    [anon_sym_LT_EQ] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_AMP_AMP] = ACTIONS(57),
    [anon_sym_PIPE_PIPE] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(61),
    [anon_sym_AMP] = ACTIONS(61),
    [anon_sym_PIPE] = ACTIONS(61),
    [anon_sym_CARET] = ACTIONS(57),
    [sym_comment] = ACTIONS(19),
  },
  [17] = {
    [sym__expression] = STATE(15),
    [sym_assignment_expression] = STATE(15),
    [sym_mux_expression] = STATE(15),
    [sym_unary_expression] = STATE(15),
    [sym_binary_expression] = STATE(15),
    [sym_identifier] = STATE(16),
    [aux_sym_mux_expression_repeat1] = STATE(40),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(95),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(29),
    [sym_number] = ACTIONS(31),
    [sym_comment] = ACTIONS(19),
  },
  [18] = {
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
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [anon_sym_wire] = ACTIONS(103),
    [anon_sym_register] = ACTIONS(103),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_BANG] = ACTIONS(101),
    [anon_sym_TILDE] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(101),
    [anon_sym_PLUS] = ACTIONS(101),
    [sym_number] = ACTIONS(103),
    [sym_comment] = ACTIONS(19),
  },
  [20] = {
    [sym__expression] = STATE(41),
    [sym_assignment_expression] = STATE(41),
    [sym_mux_expression] = STATE(41),
    [sym_unary_expression] = STATE(41),
    [sym_binary_expression] = STATE(41),
    [sym_identifier] = STATE(9),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(15),
    [sym_number] = ACTIONS(105),
    [sym_comment] = ACTIONS(19),
  },
  [21] = {
    [sym__expression] = STATE(42),
    [sym_assignment_expression] = STATE(42),
    [sym_mux_expression] = STATE(42),
    [sym_unary_expression] = STATE(42),
    [sym_binary_expression] = STATE(42),
    [sym_identifier] = STATE(9),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(15),
    [sym_number] = ACTIONS(107),
    [sym_comment] = ACTIONS(19),
  },
  [22] = {
    [sym__expression] = STATE(43),
    [sym_assignment_expression] = STATE(43),
    [sym_mux_expression] = STATE(43),
    [sym_unary_expression] = STATE(43),
    [sym_binary_expression] = STATE(43),
    [sym_identifier] = STATE(9),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(15),
    [sym_number] = ACTIONS(109),
    [sym_comment] = ACTIONS(19),
  },
  [23] = {
    [sym__expression] = STATE(44),
    [sym_assignment_expression] = STATE(44),
    [sym_mux_expression] = STATE(44),
    [sym_unary_expression] = STATE(44),
    [sym_binary_expression] = STATE(44),
    [sym_identifier] = STATE(9),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(15),
    [sym_number] = ACTIONS(111),
    [sym_comment] = ACTIONS(19),
  },
  [24] = {
    [sym__expression] = STATE(45),
    [sym_assignment_expression] = STATE(45),
    [sym_mux_expression] = STATE(45),
    [sym_unary_expression] = STATE(45),
    [sym_binary_expression] = STATE(45),
    [sym_identifier] = STATE(9),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(15),
    [sym_number] = ACTIONS(113),
    [sym_comment] = ACTIONS(19),
  },
  [25] = {
    [sym__expression] = STATE(46),
    [sym_assignment_expression] = STATE(46),
    [sym_mux_expression] = STATE(46),
    [sym_unary_expression] = STATE(46),
    [sym_binary_expression] = STATE(46),
    [sym_identifier] = STATE(9),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(15),
    [sym_number] = ACTIONS(115),
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
    [sym_unary_expression] = STATE(8),
    [sym_binary_expression] = STATE(8),
    [sym_identifier] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_wire] = ACTIONS(119),
    [anon_sym_register] = ACTIONS(122),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(128),
    [anon_sym_BANG] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [anon_sym_DASH] = ACTIONS(131),
    [anon_sym_PLUS] = ACTIONS(131),
    [sym_number] = ACTIONS(134),
    [sym_comment] = ACTIONS(19),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_wire] = ACTIONS(139),
    [anon_sym_register] = ACTIONS(139),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_BANG] = ACTIONS(137),
    [anon_sym_TILDE] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(137),
    [anon_sym_PLUS] = ACTIONS(137),
    [sym_number] = ACTIONS(139),
    [sym_comment] = ACTIONS(19),
  },
  [28] = {
    [sym_variable_declarator] = STATE(47),
    [sym_identifier] = STATE(12),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(21),
    [sym_comment] = ACTIONS(19),
  },
  [29] = {
    [aux_sym_wire_declaration_repeat1] = STATE(49),
    [anon_sym_SEMI] = ACTIONS(141),
    [anon_sym_COMMA] = ACTIONS(67),
    [sym_comment] = ACTIONS(19),
  },
  [30] = {
    [sym_number] = ACTIONS(143),
    [sym_comment] = ACTIONS(19),
  },
  [31] = {
    [sym__register_expression_statement] = STATE(53),
    [sym_identifier] = STATE(52),
    [aux_sym_register_declaration_repeat1] = STATE(53),
    [anon_sym_RBRACE] = ACTIONS(145),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(21),
    [sym_comment] = ACTIONS(19),
  },
  [32] = {
    [sym__expression] = STATE(54),
    [sym_assignment_expression] = STATE(54),
    [sym_mux_expression] = STATE(54),
    [sym_unary_expression] = STATE(54),
    [sym_binary_expression] = STATE(54),
    [sym_identifier] = STATE(9),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(15),
    [sym_number] = ACTIONS(147),
    [sym_comment] = ACTIONS(19),
  },
  [33] = {
    [sym__expression] = STATE(55),
    [sym_assignment_expression] = STATE(55),
    [sym_mux_expression] = STATE(55),
    [sym_unary_expression] = STATE(55),
    [sym_binary_expression] = STATE(55),
    [sym_identifier] = STATE(16),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(29),
    [sym_number] = ACTIONS(149),
    [sym_comment] = ACTIONS(19),
  },
  [34] = {
    [sym__expression] = STATE(56),
    [sym_assignment_expression] = STATE(56),
    [sym_mux_expression] = STATE(56),
    [sym_unary_expression] = STATE(56),
    [sym_binary_expression] = STATE(56),
    [sym_identifier] = STATE(16),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(29),
    [sym_number] = ACTIONS(151),
    [sym_comment] = ACTIONS(19),
  },
  [35] = {
    [sym__expression] = STATE(57),
    [sym_assignment_expression] = STATE(57),
    [sym_mux_expression] = STATE(57),
    [sym_unary_expression] = STATE(57),
    [sym_binary_expression] = STATE(57),
    [sym_identifier] = STATE(16),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(29),
    [sym_number] = ACTIONS(153),
    [sym_comment] = ACTIONS(19),
  },
  [36] = {
    [sym__expression] = STATE(58),
    [sym_assignment_expression] = STATE(58),
    [sym_mux_expression] = STATE(58),
    [sym_unary_expression] = STATE(58),
    [sym_binary_expression] = STATE(58),
    [sym_identifier] = STATE(16),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(29),
    [sym_number] = ACTIONS(155),
    [sym_comment] = ACTIONS(19),
  },
  [37] = {
    [sym__expression] = STATE(45),
    [sym_assignment_expression] = STATE(45),
    [sym_mux_expression] = STATE(45),
    [sym_unary_expression] = STATE(45),
    [sym_binary_expression] = STATE(45),
    [sym_identifier] = STATE(16),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(29),
    [sym_number] = ACTIONS(113),
    [sym_comment] = ACTIONS(19),
  },
  [38] = {
    [sym__expression] = STATE(59),
    [sym_assignment_expression] = STATE(59),
    [sym_mux_expression] = STATE(59),
    [sym_unary_expression] = STATE(59),
    [sym_binary_expression] = STATE(59),
    [sym_identifier] = STATE(16),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(29),
    [sym_number] = ACTIONS(157),
    [sym_comment] = ACTIONS(19),
  },
  [39] = {
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
  [40] = {
    [sym__expression] = STATE(15),
    [sym_assignment_expression] = STATE(15),
    [sym_mux_expression] = STATE(15),
    [sym_unary_expression] = STATE(15),
    [sym_binary_expression] = STATE(15),
    [sym_identifier] = STATE(16),
    [aux_sym_mux_expression_repeat1] = STATE(40),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(166),
    [anon_sym_RBRACK] = ACTIONS(169),
    [anon_sym_BANG] = ACTIONS(171),
    [anon_sym_TILDE] = ACTIONS(171),
    [anon_sym_DASH] = ACTIONS(171),
    [anon_sym_PLUS] = ACTIONS(171),
    [sym_number] = ACTIONS(174),
    [sym_comment] = ACTIONS(19),
  },
  [41] = {
    [anon_sym_SEMI] = ACTIONS(177),
    [anon_sym_DASH] = ACTIONS(177),
    [anon_sym_PLUS] = ACTIONS(177),
    [anon_sym_EQ_EQ] = ACTIONS(41),
    [anon_sym_BANG_EQ] = ACTIONS(41),
    [anon_sym_GT_EQ] = ACTIONS(41),
    [anon_sym_LT_EQ] = ACTIONS(41),
    [anon_sym_GT] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_AMP_AMP] = ACTIONS(177),
    [anon_sym_PIPE_PIPE] = ACTIONS(177),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_SLASH] = ACTIONS(51),
    [anon_sym_AMP] = ACTIONS(179),
    [anon_sym_PIPE] = ACTIONS(179),
    [anon_sym_CARET] = ACTIONS(177),
    [sym_comment] = ACTIONS(19),
  },
  [42] = {
    [anon_sym_SEMI] = ACTIONS(177),
    [anon_sym_DASH] = ACTIONS(177),
    [anon_sym_PLUS] = ACTIONS(177),
    [anon_sym_EQ_EQ] = ACTIONS(177),
    [anon_sym_BANG_EQ] = ACTIONS(177),
    [anon_sym_GT_EQ] = ACTIONS(177),
    [anon_sym_LT_EQ] = ACTIONS(177),
    [anon_sym_GT] = ACTIONS(179),
    [anon_sym_LT] = ACTIONS(179),
    [anon_sym_AMP_AMP] = ACTIONS(177),
    [anon_sym_PIPE_PIPE] = ACTIONS(177),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_SLASH] = ACTIONS(51),
    [anon_sym_AMP] = ACTIONS(179),
    [anon_sym_PIPE] = ACTIONS(179),
    [anon_sym_CARET] = ACTIONS(177),
    [sym_comment] = ACTIONS(19),
  },
  [43] = {
    [anon_sym_SEMI] = ACTIONS(177),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_EQ_EQ] = ACTIONS(41),
    [anon_sym_BANG_EQ] = ACTIONS(41),
    [anon_sym_GT_EQ] = ACTIONS(41),
    [anon_sym_LT_EQ] = ACTIONS(41),
    [anon_sym_GT] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_AMP_AMP] = ACTIONS(177),
    [anon_sym_PIPE_PIPE] = ACTIONS(177),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_SLASH] = ACTIONS(51),
    [anon_sym_AMP] = ACTIONS(179),
    [anon_sym_PIPE] = ACTIONS(179),
    [anon_sym_CARET] = ACTIONS(177),
    [sym_comment] = ACTIONS(19),
  },
  [44] = {
    [anon_sym_SEMI] = ACTIONS(177),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_EQ_EQ] = ACTIONS(41),
    [anon_sym_BANG_EQ] = ACTIONS(41),
    [anon_sym_GT_EQ] = ACTIONS(41),
    [anon_sym_LT_EQ] = ACTIONS(41),
    [anon_sym_GT] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_AMP_AMP] = ACTIONS(45),
    [anon_sym_PIPE_PIPE] = ACTIONS(177),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_SLASH] = ACTIONS(51),
    [anon_sym_AMP] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(179),
    [anon_sym_CARET] = ACTIONS(177),
    [sym_comment] = ACTIONS(19),
  },
  [45] = {
    [anon_sym_SEMI] = ACTIONS(177),
    [anon_sym_COLON] = ACTIONS(177),
    [anon_sym_DASH] = ACTIONS(177),
    [anon_sym_PLUS] = ACTIONS(177),
    [anon_sym_EQ_EQ] = ACTIONS(177),
    [anon_sym_BANG_EQ] = ACTIONS(177),
    [anon_sym_GT_EQ] = ACTIONS(177),
    [anon_sym_LT_EQ] = ACTIONS(177),
    [anon_sym_GT] = ACTIONS(179),
    [anon_sym_LT] = ACTIONS(179),
    [anon_sym_AMP_AMP] = ACTIONS(177),
    [anon_sym_PIPE_PIPE] = ACTIONS(177),
    [anon_sym_STAR] = ACTIONS(177),
    [anon_sym_SLASH] = ACTIONS(179),
    [anon_sym_AMP] = ACTIONS(179),
    [anon_sym_PIPE] = ACTIONS(179),
    [anon_sym_CARET] = ACTIONS(177),
    [sym_comment] = ACTIONS(19),
  },
  [46] = {
    [anon_sym_SEMI] = ACTIONS(181),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_EQ_EQ] = ACTIONS(41),
    [anon_sym_BANG_EQ] = ACTIONS(41),
    [anon_sym_GT_EQ] = ACTIONS(41),
    [anon_sym_LT_EQ] = ACTIONS(41),
    [anon_sym_GT] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_AMP_AMP] = ACTIONS(45),
    [anon_sym_PIPE_PIPE] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_SLASH] = ACTIONS(51),
    [anon_sym_AMP] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(47),
    [sym_comment] = ACTIONS(19),
  },
  [47] = {
    [anon_sym_SEMI] = ACTIONS(183),
    [anon_sym_COMMA] = ACTIONS(183),
    [sym_comment] = ACTIONS(19),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(185),
    [anon_sym_wire] = ACTIONS(187),
    [anon_sym_register] = ACTIONS(187),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_BANG] = ACTIONS(185),
    [anon_sym_TILDE] = ACTIONS(185),
    [anon_sym_DASH] = ACTIONS(185),
    [anon_sym_PLUS] = ACTIONS(185),
    [sym_number] = ACTIONS(187),
    [sym_comment] = ACTIONS(19),
  },
  [49] = {
    [aux_sym_wire_declaration_repeat1] = STATE(49),
    [anon_sym_SEMI] = ACTIONS(183),
    [anon_sym_COMMA] = ACTIONS(189),
    [sym_comment] = ACTIONS(19),
  },
  [50] = {
    [anon_sym_SEMI] = ACTIONS(192),
    [anon_sym_COMMA] = ACTIONS(192),
    [sym_comment] = ACTIONS(19),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(194),
    [anon_sym_wire] = ACTIONS(196),
    [anon_sym_register] = ACTIONS(196),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(196),
    [anon_sym_LBRACK] = ACTIONS(194),
    [anon_sym_BANG] = ACTIONS(194),
    [anon_sym_TILDE] = ACTIONS(194),
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_PLUS] = ACTIONS(194),
    [sym_number] = ACTIONS(196),
    [sym_comment] = ACTIONS(19),
  },
  [52] = {
    [anon_sym_COLON] = ACTIONS(198),
    [sym_comment] = ACTIONS(19),
  },
  [53] = {
    [sym__register_expression_statement] = STATE(62),
    [sym_identifier] = STATE(52),
    [aux_sym_register_declaration_repeat1] = STATE(62),
    [anon_sym_RBRACE] = ACTIONS(200),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(21),
    [sym_comment] = ACTIONS(19),
  },
  [54] = {
    [anon_sym_SEMI] = ACTIONS(202),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_EQ_EQ] = ACTIONS(41),
    [anon_sym_BANG_EQ] = ACTIONS(41),
    [anon_sym_GT_EQ] = ACTIONS(41),
    [anon_sym_LT_EQ] = ACTIONS(41),
    [anon_sym_GT] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_AMP_AMP] = ACTIONS(45),
    [anon_sym_PIPE_PIPE] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_SLASH] = ACTIONS(51),
    [anon_sym_AMP] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(47),
    [sym_comment] = ACTIONS(19),
  },
  [55] = {
    [anon_sym_COLON] = ACTIONS(177),
    [anon_sym_DASH] = ACTIONS(177),
    [anon_sym_PLUS] = ACTIONS(177),
    [anon_sym_EQ_EQ] = ACTIONS(77),
    [anon_sym_BANG_EQ] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(77),
    [anon_sym_LT_EQ] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_AMP_AMP] = ACTIONS(177),
    [anon_sym_PIPE_PIPE] = ACTIONS(177),
    [anon_sym_STAR] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(87),
    [anon_sym_AMP] = ACTIONS(179),
    [anon_sym_PIPE] = ACTIONS(179),
    [anon_sym_CARET] = ACTIONS(177),
    [sym_comment] = ACTIONS(19),
  },
  [56] = {
    [anon_sym_COLON] = ACTIONS(177),
    [anon_sym_DASH] = ACTIONS(177),
    [anon_sym_PLUS] = ACTIONS(177),
    [anon_sym_EQ_EQ] = ACTIONS(177),
    [anon_sym_BANG_EQ] = ACTIONS(177),
    [anon_sym_GT_EQ] = ACTIONS(177),
    [anon_sym_LT_EQ] = ACTIONS(177),
    [anon_sym_GT] = ACTIONS(179),
    [anon_sym_LT] = ACTIONS(179),
    [anon_sym_AMP_AMP] = ACTIONS(177),
    [anon_sym_PIPE_PIPE] = ACTIONS(177),
    [anon_sym_STAR] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(87),
    [anon_sym_AMP] = ACTIONS(179),
    [anon_sym_PIPE] = ACTIONS(179),
    [anon_sym_CARET] = ACTIONS(177),
    [sym_comment] = ACTIONS(19),
  },
  [57] = {
    [anon_sym_COLON] = ACTIONS(177),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_EQ_EQ] = ACTIONS(77),
    [anon_sym_BANG_EQ] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(77),
    [anon_sym_LT_EQ] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_AMP_AMP] = ACTIONS(177),
    [anon_sym_PIPE_PIPE] = ACTIONS(177),
    [anon_sym_STAR] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(87),
    [anon_sym_AMP] = ACTIONS(179),
    [anon_sym_PIPE] = ACTIONS(179),
    [anon_sym_CARET] = ACTIONS(177),
    [sym_comment] = ACTIONS(19),
  },
  [58] = {
    [anon_sym_COLON] = ACTIONS(177),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_EQ_EQ] = ACTIONS(77),
    [anon_sym_BANG_EQ] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(77),
    [anon_sym_LT_EQ] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_AMP_AMP] = ACTIONS(81),
    [anon_sym_PIPE_PIPE] = ACTIONS(177),
    [anon_sym_STAR] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(87),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(179),
    [anon_sym_CARET] = ACTIONS(177),
    [sym_comment] = ACTIONS(19),
  },
  [59] = {
    [anon_sym_COLON] = ACTIONS(181),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_EQ_EQ] = ACTIONS(77),
    [anon_sym_BANG_EQ] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(77),
    [anon_sym_LT_EQ] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_AMP_AMP] = ACTIONS(81),
    [anon_sym_PIPE_PIPE] = ACTIONS(83),
    [anon_sym_STAR] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(87),
    [anon_sym_AMP] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_CARET] = ACTIONS(83),
    [sym_comment] = ACTIONS(19),
  },
  [60] = {
    [sym_number] = ACTIONS(204),
    [sym_comment] = ACTIONS(19),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(206),
    [anon_sym_wire] = ACTIONS(208),
    [anon_sym_register] = ACTIONS(208),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(208),
    [anon_sym_LBRACK] = ACTIONS(206),
    [anon_sym_BANG] = ACTIONS(206),
    [anon_sym_TILDE] = ACTIONS(206),
    [anon_sym_DASH] = ACTIONS(206),
    [anon_sym_PLUS] = ACTIONS(206),
    [sym_number] = ACTIONS(208),
    [sym_comment] = ACTIONS(19),
  },
  [62] = {
    [sym__register_expression_statement] = STATE(62),
    [sym_identifier] = STATE(52),
    [aux_sym_register_declaration_repeat1] = STATE(62),
    [anon_sym_RBRACE] = ACTIONS(210),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(212),
    [sym_comment] = ACTIONS(19),
  },
  [63] = {
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(215),
    [anon_sym_RBRACK] = ACTIONS(215),
    [anon_sym_BANG] = ACTIONS(215),
    [anon_sym_TILDE] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(215),
    [anon_sym_PLUS] = ACTIONS(215),
    [sym_number] = ACTIONS(217),
    [sym_comment] = ACTIONS(19),
  },
  [64] = {
    [anon_sym_EQ] = ACTIONS(219),
    [sym_comment] = ACTIONS(19),
  },
  [65] = {
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(221),
    [sym_comment] = ACTIONS(19),
  },
  [66] = {
    [anon_sym_SEMI] = ACTIONS(223),
    [sym_comment] = ACTIONS(19),
  },
  [67] = {
    [anon_sym_RBRACE] = ACTIONS(225),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(225),
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
  [11] = {.count = 1, .reusable = false}, SHIFT(4),
  [13] = {.count = 1, .reusable = true}, SHIFT(5),
  [15] = {.count = 1, .reusable = true}, SHIFT(6),
  [17] = {.count = 1, .reusable = false}, SHIFT(8),
  [19] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [21] = {.count = 1, .reusable = true}, SHIFT(4),
  [23] = {.count = 1, .reusable = true}, SHIFT(13),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 1),
  [27] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 1),
  [29] = {.count = 1, .reusable = true}, SHIFT(14),
  [31] = {.count = 1, .reusable = false}, SHIFT(15),
  [33] = {.count = 1, .reusable = false}, SHIFT(18),
  [35] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [37] = {.count = 1, .reusable = true}, SHIFT(19),
  [39] = {.count = 1, .reusable = true}, SHIFT(20),
  [41] = {.count = 1, .reusable = true}, SHIFT(21),
  [43] = {.count = 1, .reusable = false}, SHIFT(21),
  [45] = {.count = 1, .reusable = true}, SHIFT(22),
  [47] = {.count = 1, .reusable = true}, SHIFT(23),
  [49] = {.count = 1, .reusable = true}, SHIFT(24),
  [51] = {.count = 1, .reusable = false}, SHIFT(24),
  [53] = {.count = 1, .reusable = false}, SHIFT(22),
  [55] = {.count = 1, .reusable = false}, SHIFT(23),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym__expression, 1),
  [59] = {.count = 1, .reusable = false}, SHIFT(25),
  [61] = {.count = 1, .reusable = false}, REDUCE(sym__expression, 1),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [65] = {.count = 1, .reusable = true}, SHIFT(27),
  [67] = {.count = 1, .reusable = true}, SHIFT(28),
  [69] = {.count = 1, .reusable = true}, SHIFT(30),
  [71] = {.count = 1, .reusable = true}, SHIFT(31),
  [73] = {.count = 1, .reusable = true}, SHIFT(32),
  [75] = {.count = 1, .reusable = true}, SHIFT(33),
  [77] = {.count = 1, .reusable = true}, SHIFT(34),
  [79] = {.count = 1, .reusable = false}, SHIFT(34),
  [81] = {.count = 1, .reusable = true}, SHIFT(35),
  [83] = {.count = 1, .reusable = true}, SHIFT(36),
  [85] = {.count = 1, .reusable = true}, SHIFT(37),
  [87] = {.count = 1, .reusable = false}, SHIFT(37),
  [89] = {.count = 1, .reusable = false}, SHIFT(35),
  [91] = {.count = 1, .reusable = false}, SHIFT(36),
  [93] = {.count = 1, .reusable = false}, SHIFT(38),
  [95] = {.count = 1, .reusable = true}, SHIFT(39),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_unary_expression, 2),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym_unary_expression, 2),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym__statement, 2),
  [103] = {.count = 1, .reusable = false}, REDUCE(sym__statement, 2),
  [105] = {.count = 1, .reusable = false}, SHIFT(41),
  [107] = {.count = 1, .reusable = false}, SHIFT(42),
  [109] = {.count = 1, .reusable = false}, SHIFT(43),
  [111] = {.count = 1, .reusable = false}, SHIFT(44),
  [113] = {.count = 1, .reusable = false}, SHIFT(45),
  [115] = {.count = 1, .reusable = false}, SHIFT(46),
  [117] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [119] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [122] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [125] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [128] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [131] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [134] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_wire_declaration, 3),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym_wire_declaration, 3),
  [141] = {.count = 1, .reusable = true}, SHIFT(48),
  [143] = {.count = 1, .reusable = true}, SHIFT(50),
  [145] = {.count = 1, .reusable = true}, SHIFT(51),
  [147] = {.count = 1, .reusable = false}, SHIFT(54),
  [149] = {.count = 1, .reusable = false}, SHIFT(55),
  [151] = {.count = 1, .reusable = false}, SHIFT(56),
  [153] = {.count = 1, .reusable = false}, SHIFT(57),
  [155] = {.count = 1, .reusable = false}, SHIFT(58),
  [157] = {.count = 1, .reusable = false}, SHIFT(59),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_mux_expression, 3),
  [161] = {.count = 1, .reusable = false}, REDUCE(sym_mux_expression, 3),
  [163] = {.count = 2, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(4),
  [166] = {.count = 2, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(5),
  [169] = {.count = 1, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 2),
  [171] = {.count = 2, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(14),
  [174] = {.count = 2, .reusable = false}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(15),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [179] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 3),
  [183] = {.count = 1, .reusable = true}, REDUCE(aux_sym_wire_declaration_repeat1, 2),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_wire_declaration, 4),
  [187] = {.count = 1, .reusable = false}, REDUCE(sym_wire_declaration, 4),
  [189] = {.count = 2, .reusable = true}, REDUCE(aux_sym_wire_declaration_repeat1, 2), SHIFT_REPEAT(28),
  [192] = {.count = 1, .reusable = true}, REDUCE(sym_variable_declarator, 3),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym_register_declaration, 4),
  [196] = {.count = 1, .reusable = false}, REDUCE(sym_register_declaration, 4),
  [198] = {.count = 1, .reusable = true}, SHIFT(60),
  [200] = {.count = 1, .reusable = true}, SHIFT(61),
  [202] = {.count = 1, .reusable = true}, SHIFT(63),
  [204] = {.count = 1, .reusable = true}, SHIFT(64),
  [206] = {.count = 1, .reusable = true}, REDUCE(sym_register_declaration, 5),
  [208] = {.count = 1, .reusable = false}, REDUCE(sym_register_declaration, 5),
  [210] = {.count = 1, .reusable = true}, REDUCE(aux_sym_register_declaration_repeat1, 2),
  [212] = {.count = 2, .reusable = true}, REDUCE(aux_sym_register_declaration_repeat1, 2), SHIFT_REPEAT(4),
  [215] = {.count = 1, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 4),
  [217] = {.count = 1, .reusable = false}, REDUCE(aux_sym_mux_expression_repeat1, 4),
  [219] = {.count = 1, .reusable = true}, SHIFT(65),
  [221] = {.count = 1, .reusable = true}, SHIFT(66),
  [223] = {.count = 1, .reusable = true}, SHIFT(67),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym__register_expression_statement, 6),
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
