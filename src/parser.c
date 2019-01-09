#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 106
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
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
  anon_sym_DOT_DOT = 13,
  anon_sym_BANG = 14,
  anon_sym_TILDE = 15,
  anon_sym_DASH = 16,
  anon_sym_PLUS = 17,
  anon_sym_EQ_EQ = 18,
  anon_sym_BANG_EQ = 19,
  anon_sym_GT_EQ = 20,
  anon_sym_LT_EQ = 21,
  anon_sym_GT = 22,
  anon_sym_LT = 23,
  anon_sym_AMP_AMP = 24,
  anon_sym_PIPE_PIPE = 25,
  anon_sym_STAR = 26,
  anon_sym_SLASH = 27,
  anon_sym_AMP = 28,
  anon_sym_PIPE = 29,
  anon_sym_CARET = 30,
  sym_identifier = 31,
  sym_number = 32,
  sym_comment = 33,
  sym_pound_comment = 34,
  sym_slash_comment = 35,
  anon_sym_SLASH_STAR = 36,
  sym_source_file = 37,
  sym__statement = 38,
  sym__declaration = 39,
  sym_wire_declaration = 40,
  sym_variable_declarator = 41,
  sym_register_declaration = 42,
  sym__register_expression_statement = 43,
  sym__expression = 44,
  sym_assignment_expression = 45,
  sym_mux_expression = 46,
  sym_in_expression = 47,
  sym_slice_expression = 48,
  sym_unary_expression = 49,
  sym_binary_expression = 50,
  aux_sym_source_file_repeat1 = 51,
  aux_sym_wire_declaration_repeat1 = 52,
  aux_sym_register_declaration_repeat1 = 53,
  aux_sym_mux_expression_repeat1 = 54,
  aux_sym_in_expression_repeat1 = 55,
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
  [anon_sym_DOT_DOT] = "..",
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
  [sym_slice_expression] = "slice_expression",
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
  [anon_sym_DOT_DOT] = {
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
  [sym_slice_expression] = {
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
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == '0')
        ADVANCE(16);
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
      if (lookahead == '.')
        ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(15);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_slash_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'B')
        ADVANCE(17);
      if (lookahead == 'E')
        ADVANCE(19);
      if (lookahead == 'X')
        ADVANCE(22);
      if (lookahead == 'b')
        ADVANCE(17);
      if (lookahead == 'e')
        ADVANCE(19);
      if (lookahead == 'x')
        ADVANCE(22);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '+')
        ADVANCE(20);
      if (lookahead == '-')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(21);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
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
        ADVANCE(19);
      if (lookahead == 'e')
        ADVANCE(19);
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
        ADVANCE(16);
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
        ADVANCE(16);
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
      if (lookahead == '[')
        ADVANCE(33);
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
      if (lookahead == '[')
        ADVANCE(33);
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
      if (lookahead == '.')
        ADVANCE(11);
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
      if (lookahead == '[')
        ADVANCE(33);
      if (lookahead == ']')
        ADVANCE(34);
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
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(69);
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(29);
      if (lookahead == '>')
        ADVANCE(31);
      if (lookahead == '[')
        ADVANCE(33);
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
        SKIP(79);
      END_STATE();
    case 80:
      if (lookahead == '#')
        ADVANCE(58);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(59);
      if (lookahead == ';')
        ADVANCE(26);
      if (lookahead == '=')
        ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 82:
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
        SKIP(82);
      END_STATE();
    case 83:
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
        SKIP(83);
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
  [20] = {.lex_state = 63},
  [21] = {.lex_state = 75},
  [22] = {.lex_state = 63},
  [23] = {.lex_state = 63},
  [24] = {.lex_state = 63},
  [25] = {.lex_state = 63},
  [26] = {.lex_state = 63},
  [27] = {.lex_state = 56},
  [28] = {.lex_state = 56},
  [29] = {.lex_state = 56},
  [30] = {.lex_state = 63},
  [31] = {.lex_state = 74},
  [32] = {.lex_state = 78},
  [33] = {.lex_state = 63},
  [34] = {.lex_state = 63},
  [35] = {.lex_state = 63},
  [36] = {.lex_state = 63},
  [37] = {.lex_state = 63},
  [38] = {.lex_state = 63},
  [39] = {.lex_state = 63},
  [40] = {.lex_state = 76},
  [41] = {.lex_state = 63},
  [42] = {.lex_state = 67},
  [43] = {.lex_state = 63},
  [44] = {.lex_state = 79},
  [45] = {.lex_state = 79},
  [46] = {.lex_state = 78},
  [47] = {.lex_state = 67},
  [48] = {.lex_state = 67},
  [49] = {.lex_state = 67},
  [50] = {.lex_state = 67},
  [51] = {.lex_state = 76},
  [52] = {.lex_state = 80},
  [53] = {.lex_state = 74},
  [54] = {.lex_state = 56},
  [55] = {.lex_state = 74},
  [56] = {.lex_state = 56},
  [57] = {.lex_state = 67},
  [58] = {.lex_state = 78},
  [59] = {.lex_state = 73},
  [60] = {.lex_state = 67},
  [61] = {.lex_state = 73},
  [62] = {.lex_state = 73},
  [63] = {.lex_state = 73},
  [64] = {.lex_state = 73},
  [65] = {.lex_state = 63},
  [66] = {.lex_state = 63},
  [67] = {.lex_state = 63},
  [68] = {.lex_state = 63},
  [69] = {.lex_state = 63},
  [70] = {.lex_state = 63},
  [71] = {.lex_state = 63},
  [72] = {.lex_state = 76},
  [73] = {.lex_state = 82},
  [74] = {.lex_state = 63},
  [75] = {.lex_state = 56},
  [76] = {.lex_state = 78},
  [77] = {.lex_state = 63},
  [78] = {.lex_state = 79},
  [79] = {.lex_state = 63},
  [80] = {.lex_state = 83},
  [81] = {.lex_state = 83},
  [82] = {.lex_state = 79},
  [83] = {.lex_state = 79},
  [84] = {.lex_state = 79},
  [85] = {.lex_state = 79},
  [86] = {.lex_state = 63},
  [87] = {.lex_state = 76},
  [88] = {.lex_state = 82},
  [89] = {.lex_state = 67},
  [90] = {.lex_state = 63},
  [91] = {.lex_state = 76},
  [92] = {.lex_state = 63},
  [93] = {.lex_state = 63},
  [94] = {.lex_state = 63},
  [95] = {.lex_state = 63},
  [96] = {.lex_state = 63},
  [97] = {.lex_state = 82},
  [98] = {.lex_state = 76},
  [99] = {.lex_state = 82},
  [100] = {.lex_state = 78},
  [101] = {.lex_state = 83},
  [102] = {.lex_state = 83},
  [103] = {.lex_state = 83},
  [104] = {.lex_state = 83},
  [105] = {.lex_state = 83},
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
    [anon_sym_DOT_DOT] = ACTIONS(1),
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
    [sym_slice_expression] = STATE(8),
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
    [sym_slice_expression] = STATE(15),
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
    [sym_slice_expression] = STATE(17),
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
    [anon_sym_LBRACK] = ACTIONS(35),
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
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_in] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_EQ_EQ] = ACTIONS(51),
    [anon_sym_BANG_EQ] = ACTIONS(51),
    [anon_sym_GT_EQ] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_AMP_AMP] = ACTIONS(55),
    [anon_sym_PIPE_PIPE] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(61),
    [anon_sym_AMP] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_CARET] = ACTIONS(57),
    [sym_comment] = ACTIONS(19),
  },
  [9] = {
    [sym__statement] = STATE(27),
    [sym__declaration] = STATE(27),
    [sym_wire_declaration] = STATE(27),
    [sym_register_declaration] = STATE(27),
    [sym__expression] = STATE(8),
    [sym_assignment_expression] = STATE(8),
    [sym_mux_expression] = STATE(8),
    [sym_in_expression] = STATE(8),
    [sym_slice_expression] = STATE(8),
    [sym_unary_expression] = STATE(8),
    [sym_binary_expression] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(67),
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
    [anon_sym_COLON] = ACTIONS(69),
    [sym_comment] = ACTIONS(19),
  },
  [11] = {
    [aux_sym_wire_declaration_repeat1] = STATE(31),
    [anon_sym_SEMI] = ACTIONS(71),
    [anon_sym_COMMA] = ACTIONS(73),
    [sym_comment] = ACTIONS(19),
  },
  [12] = {
    [anon_sym_LBRACE] = ACTIONS(75),
    [sym_comment] = ACTIONS(19),
  },
  [13] = {
    [sym__expression] = STATE(17),
    [sym_assignment_expression] = STATE(17),
    [sym_mux_expression] = STATE(17),
    [sym_in_expression] = STATE(17),
    [sym_slice_expression] = STATE(17),
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
    [anon_sym_EQ] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(35),
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
    [anon_sym_COLON] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_in] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_EQ_EQ] = ACTIONS(83),
    [anon_sym_BANG_EQ] = ACTIONS(83),
    [anon_sym_GT_EQ] = ACTIONS(83),
    [anon_sym_LT_EQ] = ACTIONS(83),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_AMP_AMP] = ACTIONS(87),
    [anon_sym_PIPE_PIPE] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(91),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_AMP] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_CARET] = ACTIONS(89),
    [sym_comment] = ACTIONS(19),
  },
  [16] = {
    [sym__expression] = STATE(15),
    [sym_assignment_expression] = STATE(15),
    [sym_mux_expression] = STATE(15),
    [sym_in_expression] = STATE(15),
    [sym_slice_expression] = STATE(15),
    [sym_unary_expression] = STATE(15),
    [sym_binary_expression] = STATE(15),
    [aux_sym_mux_expression_repeat1] = STATE(41),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(99),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [sym_number] = ACTIONS(29),
    [sym_comment] = ACTIONS(19),
  },
  [17] = {
    [anon_sym_SEMI] = ACTIONS(101),
    [anon_sym_COLON] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_RBRACK] = ACTIONS(101),
    [anon_sym_in] = ACTIONS(101),
    [anon_sym_DOT_DOT] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(101),
    [anon_sym_PLUS] = ACTIONS(101),
    [anon_sym_EQ_EQ] = ACTIONS(101),
    [anon_sym_BANG_EQ] = ACTIONS(101),
    [anon_sym_GT_EQ] = ACTIONS(101),
    [anon_sym_LT_EQ] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(103),
    [anon_sym_LT] = ACTIONS(103),
    [anon_sym_AMP_AMP] = ACTIONS(101),
    [anon_sym_PIPE_PIPE] = ACTIONS(101),
    [anon_sym_STAR] = ACTIONS(101),
    [anon_sym_SLASH] = ACTIONS(103),
    [anon_sym_AMP] = ACTIONS(103),
    [anon_sym_PIPE] = ACTIONS(103),
    [anon_sym_CARET] = ACTIONS(101),
    [sym_comment] = ACTIONS(19),
  },
  [18] = {
    [sym__expression] = STATE(42),
    [sym_assignment_expression] = STATE(42),
    [sym_mux_expression] = STATE(42),
    [sym_in_expression] = STATE(42),
    [sym_slice_expression] = STATE(42),
    [sym_unary_expression] = STATE(42),
    [sym_binary_expression] = STATE(42),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(13),
    [sym_identifier] = ACTIONS(31),
    [sym_number] = ACTIONS(105),
    [sym_comment] = ACTIONS(19),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_wire] = ACTIONS(109),
    [anon_sym_register] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_PLUS] = ACTIONS(107),
    [sym_identifier] = ACTIONS(109),
    [sym_number] = ACTIONS(107),
    [sym_comment] = ACTIONS(19),
  },
  [20] = {
    [sym__expression] = STATE(45),
    [sym_assignment_expression] = STATE(45),
    [sym_mux_expression] = STATE(45),
    [sym_in_expression] = STATE(45),
    [sym_slice_expression] = STATE(45),
    [sym_unary_expression] = STATE(45),
    [sym_binary_expression] = STATE(45),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(111),
    [anon_sym_TILDE] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_PLUS] = ACTIONS(111),
    [sym_identifier] = ACTIONS(113),
    [sym_number] = ACTIONS(115),
    [sym_comment] = ACTIONS(19),
  },
  [21] = {
    [anon_sym_LBRACE] = ACTIONS(117),
    [sym_comment] = ACTIONS(19),
  },
  [22] = {
    [sym__expression] = STATE(47),
    [sym_assignment_expression] = STATE(47),
    [sym_mux_expression] = STATE(47),
    [sym_in_expression] = STATE(47),
    [sym_slice_expression] = STATE(47),
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
  [23] = {
    [sym__expression] = STATE(48),
    [sym_assignment_expression] = STATE(48),
    [sym_mux_expression] = STATE(48),
    [sym_in_expression] = STATE(48),
    [sym_slice_expression] = STATE(48),
    [sym_unary_expression] = STATE(48),
    [sym_binary_expression] = STATE(48),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(13),
    [sym_identifier] = ACTIONS(31),
    [sym_number] = ACTIONS(121),
    [sym_comment] = ACTIONS(19),
  },
  [24] = {
    [sym__expression] = STATE(49),
    [sym_assignment_expression] = STATE(49),
    [sym_mux_expression] = STATE(49),
    [sym_in_expression] = STATE(49),
    [sym_slice_expression] = STATE(49),
    [sym_unary_expression] = STATE(49),
    [sym_binary_expression] = STATE(49),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(13),
    [sym_identifier] = ACTIONS(31),
    [sym_number] = ACTIONS(123),
    [sym_comment] = ACTIONS(19),
  },
  [25] = {
    [sym__expression] = STATE(50),
    [sym_assignment_expression] = STATE(50),
    [sym_mux_expression] = STATE(50),
    [sym_in_expression] = STATE(50),
    [sym_slice_expression] = STATE(50),
    [sym_unary_expression] = STATE(50),
    [sym_binary_expression] = STATE(50),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(13),
    [sym_identifier] = ACTIONS(31),
    [sym_number] = ACTIONS(125),
    [sym_comment] = ACTIONS(19),
  },
  [26] = {
    [sym__expression] = STATE(51),
    [sym_assignment_expression] = STATE(51),
    [sym_mux_expression] = STATE(51),
    [sym_in_expression] = STATE(51),
    [sym_slice_expression] = STATE(51),
    [sym_unary_expression] = STATE(51),
    [sym_binary_expression] = STATE(51),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(13),
    [sym_identifier] = ACTIONS(31),
    [sym_number] = ACTIONS(127),
    [sym_comment] = ACTIONS(19),
  },
  [27] = {
    [sym__statement] = STATE(27),
    [sym__declaration] = STATE(27),
    [sym_wire_declaration] = STATE(27),
    [sym_register_declaration] = STATE(27),
    [sym__expression] = STATE(8),
    [sym_assignment_expression] = STATE(8),
    [sym_mux_expression] = STATE(8),
    [sym_in_expression] = STATE(8),
    [sym_slice_expression] = STATE(8),
    [sym_unary_expression] = STATE(8),
    [sym_binary_expression] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(129),
    [anon_sym_wire] = ACTIONS(131),
    [anon_sym_register] = ACTIONS(134),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_BANG] = ACTIONS(140),
    [anon_sym_TILDE] = ACTIONS(140),
    [anon_sym_DASH] = ACTIONS(140),
    [anon_sym_PLUS] = ACTIONS(140),
    [sym_identifier] = ACTIONS(143),
    [sym_number] = ACTIONS(146),
    [sym_comment] = ACTIONS(19),
  },
  [28] = {
    [sym_number] = ACTIONS(149),
    [sym_comment] = ACTIONS(19),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(151),
    [anon_sym_wire] = ACTIONS(153),
    [anon_sym_register] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_BANG] = ACTIONS(151),
    [anon_sym_TILDE] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(151),
    [anon_sym_PLUS] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [sym_number] = ACTIONS(151),
    [sym_comment] = ACTIONS(19),
  },
  [30] = {
    [sym_variable_declarator] = STATE(53),
    [sym_identifier] = ACTIONS(21),
    [sym_comment] = ACTIONS(19),
  },
  [31] = {
    [aux_sym_wire_declaration_repeat1] = STATE(55),
    [anon_sym_SEMI] = ACTIONS(155),
    [anon_sym_COMMA] = ACTIONS(73),
    [sym_comment] = ACTIONS(19),
  },
  [32] = {
    [sym_variable_declarator] = STATE(57),
    [sym__register_expression_statement] = STATE(58),
    [aux_sym_register_declaration_repeat1] = STATE(58),
    [anon_sym_RBRACE] = ACTIONS(157),
    [sym_identifier] = ACTIONS(21),
    [sym_comment] = ACTIONS(19),
  },
  [33] = {
    [sym__expression] = STATE(59),
    [sym_assignment_expression] = STATE(59),
    [sym_mux_expression] = STATE(59),
    [sym_in_expression] = STATE(59),
    [sym_slice_expression] = STATE(59),
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
  [34] = {
    [sym__expression] = STATE(60),
    [sym_assignment_expression] = STATE(60),
    [sym_mux_expression] = STATE(60),
    [sym_in_expression] = STATE(60),
    [sym_slice_expression] = STATE(60),
    [sym_unary_expression] = STATE(60),
    [sym_binary_expression] = STATE(60),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(13),
    [sym_identifier] = ACTIONS(31),
    [sym_number] = ACTIONS(161),
    [sym_comment] = ACTIONS(19),
  },
  [35] = {
    [sym__expression] = STATE(61),
    [sym_assignment_expression] = STATE(61),
    [sym_mux_expression] = STATE(61),
    [sym_in_expression] = STATE(61),
    [sym_slice_expression] = STATE(61),
    [sym_unary_expression] = STATE(61),
    [sym_binary_expression] = STATE(61),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [sym_number] = ACTIONS(163),
    [sym_comment] = ACTIONS(19),
  },
  [36] = {
    [sym__expression] = STATE(62),
    [sym_assignment_expression] = STATE(62),
    [sym_mux_expression] = STATE(62),
    [sym_in_expression] = STATE(62),
    [sym_slice_expression] = STATE(62),
    [sym_unary_expression] = STATE(62),
    [sym_binary_expression] = STATE(62),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [sym_number] = ACTIONS(165),
    [sym_comment] = ACTIONS(19),
  },
  [37] = {
    [sym__expression] = STATE(63),
    [sym_assignment_expression] = STATE(63),
    [sym_mux_expression] = STATE(63),
    [sym_in_expression] = STATE(63),
    [sym_slice_expression] = STATE(63),
    [sym_unary_expression] = STATE(63),
    [sym_binary_expression] = STATE(63),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [sym_number] = ACTIONS(167),
    [sym_comment] = ACTIONS(19),
  },
  [38] = {
    [sym__expression] = STATE(64),
    [sym_assignment_expression] = STATE(64),
    [sym_mux_expression] = STATE(64),
    [sym_in_expression] = STATE(64),
    [sym_slice_expression] = STATE(64),
    [sym_unary_expression] = STATE(64),
    [sym_binary_expression] = STATE(64),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [sym_number] = ACTIONS(169),
    [sym_comment] = ACTIONS(19),
  },
  [39] = {
    [sym__expression] = STATE(51),
    [sym_assignment_expression] = STATE(51),
    [sym_mux_expression] = STATE(51),
    [sym_in_expression] = STATE(51),
    [sym_slice_expression] = STATE(51),
    [sym_unary_expression] = STATE(51),
    [sym_binary_expression] = STATE(51),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [sym_number] = ACTIONS(127),
    [sym_comment] = ACTIONS(19),
  },
  [40] = {
    [anon_sym_SEMI] = ACTIONS(171),
    [anon_sym_COLON] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_RBRACK] = ACTIONS(171),
    [anon_sym_in] = ACTIONS(171),
    [anon_sym_DOT_DOT] = ACTIONS(171),
    [anon_sym_DASH] = ACTIONS(171),
    [anon_sym_PLUS] = ACTIONS(171),
    [anon_sym_EQ_EQ] = ACTIONS(171),
    [anon_sym_BANG_EQ] = ACTIONS(171),
    [anon_sym_GT_EQ] = ACTIONS(171),
    [anon_sym_LT_EQ] = ACTIONS(171),
    [anon_sym_GT] = ACTIONS(173),
    [anon_sym_LT] = ACTIONS(173),
    [anon_sym_AMP_AMP] = ACTIONS(171),
    [anon_sym_PIPE_PIPE] = ACTIONS(171),
    [anon_sym_STAR] = ACTIONS(171),
    [anon_sym_SLASH] = ACTIONS(173),
    [anon_sym_AMP] = ACTIONS(173),
    [anon_sym_PIPE] = ACTIONS(173),
    [anon_sym_CARET] = ACTIONS(171),
    [sym_comment] = ACTIONS(19),
  },
  [41] = {
    [sym__expression] = STATE(15),
    [sym_assignment_expression] = STATE(15),
    [sym_mux_expression] = STATE(15),
    [sym_in_expression] = STATE(15),
    [sym_slice_expression] = STATE(15),
    [sym_unary_expression] = STATE(15),
    [sym_binary_expression] = STATE(15),
    [aux_sym_mux_expression_repeat1] = STATE(41),
    [anon_sym_LBRACK] = ACTIONS(175),
    [anon_sym_RBRACK] = ACTIONS(178),
    [anon_sym_BANG] = ACTIONS(180),
    [anon_sym_TILDE] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [anon_sym_PLUS] = ACTIONS(180),
    [sym_identifier] = ACTIONS(183),
    [sym_number] = ACTIONS(186),
    [sym_comment] = ACTIONS(19),
  },
  [42] = {
    [anon_sym_SEMI] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_in] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_EQ_EQ] = ACTIONS(51),
    [anon_sym_BANG_EQ] = ACTIONS(51),
    [anon_sym_GT_EQ] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_AMP_AMP] = ACTIONS(55),
    [anon_sym_PIPE_PIPE] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(61),
    [anon_sym_AMP] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_CARET] = ACTIONS(57),
    [sym_comment] = ACTIONS(19),
  },
  [43] = {
    [sym__expression] = STATE(17),
    [sym_assignment_expression] = STATE(17),
    [sym_mux_expression] = STATE(17),
    [sym_in_expression] = STATE(17),
    [sym_slice_expression] = STATE(17),
    [sym_unary_expression] = STATE(17),
    [sym_binary_expression] = STATE(17),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(111),
    [anon_sym_TILDE] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_PLUS] = ACTIONS(111),
    [sym_identifier] = ACTIONS(113),
    [sym_number] = ACTIONS(33),
    [sym_comment] = ACTIONS(19),
  },
  [44] = {
    [anon_sym_EQ] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_in] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
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
  [45] = {
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_in] = ACTIONS(47),
    [anon_sym_DOT_DOT] = ACTIONS(193),
    [anon_sym_DASH] = ACTIONS(195),
    [anon_sym_PLUS] = ACTIONS(195),
    [anon_sym_EQ_EQ] = ACTIONS(197),
    [anon_sym_BANG_EQ] = ACTIONS(197),
    [anon_sym_GT_EQ] = ACTIONS(197),
    [anon_sym_LT_EQ] = ACTIONS(197),
    [anon_sym_GT] = ACTIONS(199),
    [anon_sym_LT] = ACTIONS(199),
    [anon_sym_AMP_AMP] = ACTIONS(201),
    [anon_sym_PIPE_PIPE] = ACTIONS(203),
    [anon_sym_STAR] = ACTIONS(205),
    [anon_sym_SLASH] = ACTIONS(207),
    [anon_sym_AMP] = ACTIONS(209),
    [anon_sym_PIPE] = ACTIONS(211),
    [anon_sym_CARET] = ACTIONS(203),
    [sym_comment] = ACTIONS(19),
  },
  [46] = {
    [anon_sym_RBRACE] = ACTIONS(213),
    [sym_identifier] = ACTIONS(215),
    [sym_comment] = ACTIONS(19),
  },
  [47] = {
    [anon_sym_SEMI] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_in] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_PLUS] = ACTIONS(217),
    [anon_sym_EQ_EQ] = ACTIONS(51),
    [anon_sym_BANG_EQ] = ACTIONS(51),
    [anon_sym_GT_EQ] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_AMP_AMP] = ACTIONS(217),
    [anon_sym_PIPE_PIPE] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(61),
    [anon_sym_AMP] = ACTIONS(219),
    [anon_sym_PIPE] = ACTIONS(219),
    [anon_sym_CARET] = ACTIONS(217),
    [sym_comment] = ACTIONS(19),
  },
  [48] = {
    [anon_sym_SEMI] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_in] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_PLUS] = ACTIONS(217),
    [anon_sym_EQ_EQ] = ACTIONS(217),
    [anon_sym_BANG_EQ] = ACTIONS(217),
    [anon_sym_GT_EQ] = ACTIONS(217),
    [anon_sym_LT_EQ] = ACTIONS(217),
    [anon_sym_GT] = ACTIONS(219),
    [anon_sym_LT] = ACTIONS(219),
    [anon_sym_AMP_AMP] = ACTIONS(217),
    [anon_sym_PIPE_PIPE] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(61),
    [anon_sym_AMP] = ACTIONS(219),
    [anon_sym_PIPE] = ACTIONS(219),
    [anon_sym_CARET] = ACTIONS(217),
    [sym_comment] = ACTIONS(19),
  },
  [49] = {
    [anon_sym_SEMI] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_in] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_EQ_EQ] = ACTIONS(51),
    [anon_sym_BANG_EQ] = ACTIONS(51),
    [anon_sym_GT_EQ] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_AMP_AMP] = ACTIONS(217),
    [anon_sym_PIPE_PIPE] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(61),
    [anon_sym_AMP] = ACTIONS(219),
    [anon_sym_PIPE] = ACTIONS(219),
    [anon_sym_CARET] = ACTIONS(217),
    [sym_comment] = ACTIONS(19),
  },
  [50] = {
    [anon_sym_SEMI] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_in] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_EQ_EQ] = ACTIONS(51),
    [anon_sym_BANG_EQ] = ACTIONS(51),
    [anon_sym_GT_EQ] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_AMP_AMP] = ACTIONS(55),
    [anon_sym_PIPE_PIPE] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(61),
    [anon_sym_AMP] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(219),
    [anon_sym_CARET] = ACTIONS(217),
    [sym_comment] = ACTIONS(19),
  },
  [51] = {
    [anon_sym_SEMI] = ACTIONS(217),
    [anon_sym_COLON] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_RBRACK] = ACTIONS(217),
    [anon_sym_in] = ACTIONS(217),
    [anon_sym_DOT_DOT] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_PLUS] = ACTIONS(217),
    [anon_sym_EQ_EQ] = ACTIONS(217),
    [anon_sym_BANG_EQ] = ACTIONS(217),
    [anon_sym_GT_EQ] = ACTIONS(217),
    [anon_sym_LT_EQ] = ACTIONS(217),
    [anon_sym_GT] = ACTIONS(219),
    [anon_sym_LT] = ACTIONS(219),
    [anon_sym_AMP_AMP] = ACTIONS(217),
    [anon_sym_PIPE_PIPE] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(217),
    [anon_sym_SLASH] = ACTIONS(219),
    [anon_sym_AMP] = ACTIONS(219),
    [anon_sym_PIPE] = ACTIONS(219),
    [anon_sym_CARET] = ACTIONS(217),
    [sym_comment] = ACTIONS(19),
  },
  [52] = {
    [anon_sym_SEMI] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_EQ] = ACTIONS(221),
    [sym_comment] = ACTIONS(19),
  },
  [53] = {
    [anon_sym_SEMI] = ACTIONS(223),
    [anon_sym_COMMA] = ACTIONS(223),
    [sym_comment] = ACTIONS(19),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(225),
    [anon_sym_wire] = ACTIONS(227),
    [anon_sym_register] = ACTIONS(227),
    [anon_sym_LBRACK] = ACTIONS(225),
    [anon_sym_BANG] = ACTIONS(225),
    [anon_sym_TILDE] = ACTIONS(225),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_PLUS] = ACTIONS(225),
    [sym_identifier] = ACTIONS(227),
    [sym_number] = ACTIONS(225),
    [sym_comment] = ACTIONS(19),
  },
  [55] = {
    [aux_sym_wire_declaration_repeat1] = STATE(55),
    [anon_sym_SEMI] = ACTIONS(223),
    [anon_sym_COMMA] = ACTIONS(229),
    [sym_comment] = ACTIONS(19),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(232),
    [anon_sym_wire] = ACTIONS(234),
    [anon_sym_register] = ACTIONS(234),
    [anon_sym_LBRACK] = ACTIONS(232),
    [anon_sym_BANG] = ACTIONS(232),
    [anon_sym_TILDE] = ACTIONS(232),
    [anon_sym_DASH] = ACTIONS(232),
    [anon_sym_PLUS] = ACTIONS(232),
    [sym_identifier] = ACTIONS(234),
    [sym_number] = ACTIONS(232),
    [sym_comment] = ACTIONS(19),
  },
  [57] = {
    [anon_sym_EQ] = ACTIONS(236),
    [sym_comment] = ACTIONS(19),
  },
  [58] = {
    [sym_variable_declarator] = STATE(57),
    [sym__register_expression_statement] = STATE(76),
    [aux_sym_register_declaration_repeat1] = STATE(76),
    [anon_sym_RBRACE] = ACTIONS(238),
    [sym_identifier] = ACTIONS(21),
    [sym_comment] = ACTIONS(19),
  },
  [59] = {
    [anon_sym_COLON] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_in] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_EQ_EQ] = ACTIONS(83),
    [anon_sym_BANG_EQ] = ACTIONS(83),
    [anon_sym_GT_EQ] = ACTIONS(83),
    [anon_sym_LT_EQ] = ACTIONS(83),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_AMP_AMP] = ACTIONS(87),
    [anon_sym_PIPE_PIPE] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(91),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_AMP] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_CARET] = ACTIONS(89),
    [sym_comment] = ACTIONS(19),
  },
  [60] = {
    [anon_sym_SEMI] = ACTIONS(240),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_in] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_EQ_EQ] = ACTIONS(51),
    [anon_sym_BANG_EQ] = ACTIONS(51),
    [anon_sym_GT_EQ] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_AMP_AMP] = ACTIONS(55),
    [anon_sym_PIPE_PIPE] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(61),
    [anon_sym_AMP] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_CARET] = ACTIONS(57),
    [sym_comment] = ACTIONS(19),
  },
  [61] = {
    [anon_sym_COLON] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_in] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_PLUS] = ACTIONS(217),
    [anon_sym_EQ_EQ] = ACTIONS(83),
    [anon_sym_BANG_EQ] = ACTIONS(83),
    [anon_sym_GT_EQ] = ACTIONS(83),
    [anon_sym_LT_EQ] = ACTIONS(83),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_AMP_AMP] = ACTIONS(217),
    [anon_sym_PIPE_PIPE] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(91),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_AMP] = ACTIONS(219),
    [anon_sym_PIPE] = ACTIONS(219),
    [anon_sym_CARET] = ACTIONS(217),
    [sym_comment] = ACTIONS(19),
  },
  [62] = {
    [anon_sym_COLON] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_in] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_PLUS] = ACTIONS(217),
    [anon_sym_EQ_EQ] = ACTIONS(217),
    [anon_sym_BANG_EQ] = ACTIONS(217),
    [anon_sym_GT_EQ] = ACTIONS(217),
    [anon_sym_LT_EQ] = ACTIONS(217),
    [anon_sym_GT] = ACTIONS(219),
    [anon_sym_LT] = ACTIONS(219),
    [anon_sym_AMP_AMP] = ACTIONS(217),
    [anon_sym_PIPE_PIPE] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(91),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_AMP] = ACTIONS(219),
    [anon_sym_PIPE] = ACTIONS(219),
    [anon_sym_CARET] = ACTIONS(217),
    [sym_comment] = ACTIONS(19),
  },
  [63] = {
    [anon_sym_COLON] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_in] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_EQ_EQ] = ACTIONS(83),
    [anon_sym_BANG_EQ] = ACTIONS(83),
    [anon_sym_GT_EQ] = ACTIONS(83),
    [anon_sym_LT_EQ] = ACTIONS(83),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_AMP_AMP] = ACTIONS(217),
    [anon_sym_PIPE_PIPE] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(91),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_AMP] = ACTIONS(219),
    [anon_sym_PIPE] = ACTIONS(219),
    [anon_sym_CARET] = ACTIONS(217),
    [sym_comment] = ACTIONS(19),
  },
  [64] = {
    [anon_sym_COLON] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_in] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_EQ_EQ] = ACTIONS(83),
    [anon_sym_BANG_EQ] = ACTIONS(83),
    [anon_sym_GT_EQ] = ACTIONS(83),
    [anon_sym_LT_EQ] = ACTIONS(83),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_AMP_AMP] = ACTIONS(87),
    [anon_sym_PIPE_PIPE] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(91),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_AMP] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(219),
    [anon_sym_CARET] = ACTIONS(217),
    [sym_comment] = ACTIONS(19),
  },
  [65] = {
    [sym__expression] = STATE(78),
    [sym_assignment_expression] = STATE(78),
    [sym_mux_expression] = STATE(78),
    [sym_in_expression] = STATE(78),
    [sym_slice_expression] = STATE(78),
    [sym_unary_expression] = STATE(78),
    [sym_binary_expression] = STATE(78),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(111),
    [anon_sym_TILDE] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_PLUS] = ACTIONS(111),
    [sym_identifier] = ACTIONS(113),
    [sym_number] = ACTIONS(242),
    [sym_comment] = ACTIONS(19),
  },
  [66] = {
    [sym__expression] = STATE(81),
    [sym_assignment_expression] = STATE(81),
    [sym_mux_expression] = STATE(81),
    [sym_in_expression] = STATE(81),
    [sym_slice_expression] = STATE(81),
    [sym_unary_expression] = STATE(81),
    [sym_binary_expression] = STATE(81),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(244),
    [anon_sym_TILDE] = ACTIONS(244),
    [anon_sym_DASH] = ACTIONS(244),
    [anon_sym_PLUS] = ACTIONS(244),
    [sym_identifier] = ACTIONS(246),
    [sym_number] = ACTIONS(248),
    [sym_comment] = ACTIONS(19),
  },
  [67] = {
    [sym__expression] = STATE(82),
    [sym_assignment_expression] = STATE(82),
    [sym_mux_expression] = STATE(82),
    [sym_in_expression] = STATE(82),
    [sym_slice_expression] = STATE(82),
    [sym_unary_expression] = STATE(82),
    [sym_binary_expression] = STATE(82),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(111),
    [anon_sym_TILDE] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_PLUS] = ACTIONS(111),
    [sym_identifier] = ACTIONS(113),
    [sym_number] = ACTIONS(250),
    [sym_comment] = ACTIONS(19),
  },
  [68] = {
    [sym__expression] = STATE(83),
    [sym_assignment_expression] = STATE(83),
    [sym_mux_expression] = STATE(83),
    [sym_in_expression] = STATE(83),
    [sym_slice_expression] = STATE(83),
    [sym_unary_expression] = STATE(83),
    [sym_binary_expression] = STATE(83),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(111),
    [anon_sym_TILDE] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_PLUS] = ACTIONS(111),
    [sym_identifier] = ACTIONS(113),
    [sym_number] = ACTIONS(252),
    [sym_comment] = ACTIONS(19),
  },
  [69] = {
    [sym__expression] = STATE(84),
    [sym_assignment_expression] = STATE(84),
    [sym_mux_expression] = STATE(84),
    [sym_in_expression] = STATE(84),
    [sym_slice_expression] = STATE(84),
    [sym_unary_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(111),
    [anon_sym_TILDE] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_PLUS] = ACTIONS(111),
    [sym_identifier] = ACTIONS(113),
    [sym_number] = ACTIONS(254),
    [sym_comment] = ACTIONS(19),
  },
  [70] = {
    [sym__expression] = STATE(85),
    [sym_assignment_expression] = STATE(85),
    [sym_mux_expression] = STATE(85),
    [sym_in_expression] = STATE(85),
    [sym_slice_expression] = STATE(85),
    [sym_unary_expression] = STATE(85),
    [sym_binary_expression] = STATE(85),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(111),
    [anon_sym_TILDE] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_PLUS] = ACTIONS(111),
    [sym_identifier] = ACTIONS(113),
    [sym_number] = ACTIONS(256),
    [sym_comment] = ACTIONS(19),
  },
  [71] = {
    [sym__expression] = STATE(51),
    [sym_assignment_expression] = STATE(51),
    [sym_mux_expression] = STATE(51),
    [sym_in_expression] = STATE(51),
    [sym_slice_expression] = STATE(51),
    [sym_unary_expression] = STATE(51),
    [sym_binary_expression] = STATE(51),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(111),
    [anon_sym_TILDE] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_PLUS] = ACTIONS(111),
    [sym_identifier] = ACTIONS(113),
    [sym_number] = ACTIONS(127),
    [sym_comment] = ACTIONS(19),
  },
  [72] = {
    [anon_sym_SEMI] = ACTIONS(258),
    [anon_sym_COLON] = ACTIONS(258),
    [anon_sym_LBRACK] = ACTIONS(258),
    [anon_sym_RBRACK] = ACTIONS(258),
    [anon_sym_in] = ACTIONS(258),
    [anon_sym_DOT_DOT] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(258),
    [anon_sym_EQ_EQ] = ACTIONS(258),
    [anon_sym_BANG_EQ] = ACTIONS(258),
    [anon_sym_GT_EQ] = ACTIONS(258),
    [anon_sym_LT_EQ] = ACTIONS(258),
    [anon_sym_GT] = ACTIONS(260),
    [anon_sym_LT] = ACTIONS(260),
    [anon_sym_AMP_AMP] = ACTIONS(258),
    [anon_sym_PIPE_PIPE] = ACTIONS(258),
    [anon_sym_STAR] = ACTIONS(258),
    [anon_sym_SLASH] = ACTIONS(260),
    [anon_sym_AMP] = ACTIONS(260),
    [anon_sym_PIPE] = ACTIONS(260),
    [anon_sym_CARET] = ACTIONS(258),
    [sym_comment] = ACTIONS(19),
  },
  [73] = {
    [aux_sym_in_expression_repeat1] = STATE(88),
    [anon_sym_COMMA] = ACTIONS(262),
    [anon_sym_RBRACE] = ACTIONS(264),
    [sym_comment] = ACTIONS(19),
  },
  [74] = {
    [sym__expression] = STATE(89),
    [sym_assignment_expression] = STATE(89),
    [sym_mux_expression] = STATE(89),
    [sym_in_expression] = STATE(89),
    [sym_slice_expression] = STATE(89),
    [sym_unary_expression] = STATE(89),
    [sym_binary_expression] = STATE(89),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(13),
    [sym_identifier] = ACTIONS(31),
    [sym_number] = ACTIONS(266),
    [sym_comment] = ACTIONS(19),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(268),
    [anon_sym_wire] = ACTIONS(270),
    [anon_sym_register] = ACTIONS(270),
    [anon_sym_LBRACK] = ACTIONS(268),
    [anon_sym_BANG] = ACTIONS(268),
    [anon_sym_TILDE] = ACTIONS(268),
    [anon_sym_DASH] = ACTIONS(268),
    [anon_sym_PLUS] = ACTIONS(268),
    [sym_identifier] = ACTIONS(270),
    [sym_number] = ACTIONS(268),
    [sym_comment] = ACTIONS(19),
  },
  [76] = {
    [sym_variable_declarator] = STATE(57),
    [sym__register_expression_statement] = STATE(76),
    [aux_sym_register_declaration_repeat1] = STATE(76),
    [anon_sym_RBRACE] = ACTIONS(272),
    [sym_identifier] = ACTIONS(274),
    [sym_comment] = ACTIONS(19),
  },
  [77] = {
    [anon_sym_LBRACK] = ACTIONS(277),
    [anon_sym_RBRACK] = ACTIONS(277),
    [anon_sym_BANG] = ACTIONS(277),
    [anon_sym_TILDE] = ACTIONS(277),
    [anon_sym_DASH] = ACTIONS(277),
    [anon_sym_PLUS] = ACTIONS(277),
    [sym_identifier] = ACTIONS(277),
    [sym_number] = ACTIONS(277),
    [sym_comment] = ACTIONS(19),
  },
  [78] = {
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_in] = ACTIONS(47),
    [anon_sym_DOT_DOT] = ACTIONS(189),
    [anon_sym_DASH] = ACTIONS(195),
    [anon_sym_PLUS] = ACTIONS(195),
    [anon_sym_EQ_EQ] = ACTIONS(197),
    [anon_sym_BANG_EQ] = ACTIONS(197),
    [anon_sym_GT_EQ] = ACTIONS(197),
    [anon_sym_LT_EQ] = ACTIONS(197),
    [anon_sym_GT] = ACTIONS(199),
    [anon_sym_LT] = ACTIONS(199),
    [anon_sym_AMP_AMP] = ACTIONS(201),
    [anon_sym_PIPE_PIPE] = ACTIONS(203),
    [anon_sym_STAR] = ACTIONS(205),
    [anon_sym_SLASH] = ACTIONS(207),
    [anon_sym_AMP] = ACTIONS(209),
    [anon_sym_PIPE] = ACTIONS(211),
    [anon_sym_CARET] = ACTIONS(203),
    [sym_comment] = ACTIONS(19),
  },
  [79] = {
    [sym__expression] = STATE(17),
    [sym_assignment_expression] = STATE(17),
    [sym_mux_expression] = STATE(17),
    [sym_in_expression] = STATE(17),
    [sym_slice_expression] = STATE(17),
    [sym_unary_expression] = STATE(17),
    [sym_binary_expression] = STATE(17),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(244),
    [anon_sym_TILDE] = ACTIONS(244),
    [anon_sym_DASH] = ACTIONS(244),
    [anon_sym_PLUS] = ACTIONS(244),
    [sym_identifier] = ACTIONS(246),
    [sym_number] = ACTIONS(33),
    [sym_comment] = ACTIONS(19),
  },
  [80] = {
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(35),
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
  [81] = {
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_RBRACK] = ACTIONS(281),
    [anon_sym_in] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(283),
    [anon_sym_PLUS] = ACTIONS(283),
    [anon_sym_EQ_EQ] = ACTIONS(285),
    [anon_sym_BANG_EQ] = ACTIONS(285),
    [anon_sym_GT_EQ] = ACTIONS(285),
    [anon_sym_LT_EQ] = ACTIONS(285),
    [anon_sym_GT] = ACTIONS(287),
    [anon_sym_LT] = ACTIONS(287),
    [anon_sym_AMP_AMP] = ACTIONS(289),
    [anon_sym_PIPE_PIPE] = ACTIONS(291),
    [anon_sym_STAR] = ACTIONS(293),
    [anon_sym_SLASH] = ACTIONS(295),
    [anon_sym_AMP] = ACTIONS(297),
    [anon_sym_PIPE] = ACTIONS(299),
    [anon_sym_CARET] = ACTIONS(291),
    [sym_comment] = ACTIONS(19),
  },
  [82] = {
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_in] = ACTIONS(217),
    [anon_sym_DOT_DOT] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_PLUS] = ACTIONS(217),
    [anon_sym_EQ_EQ] = ACTIONS(197),
    [anon_sym_BANG_EQ] = ACTIONS(197),
    [anon_sym_GT_EQ] = ACTIONS(197),
    [anon_sym_LT_EQ] = ACTIONS(197),
    [anon_sym_GT] = ACTIONS(199),
    [anon_sym_LT] = ACTIONS(199),
    [anon_sym_AMP_AMP] = ACTIONS(217),
    [anon_sym_PIPE_PIPE] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(205),
    [anon_sym_SLASH] = ACTIONS(207),
    [anon_sym_AMP] = ACTIONS(219),
    [anon_sym_PIPE] = ACTIONS(219),
    [anon_sym_CARET] = ACTIONS(217),
    [sym_comment] = ACTIONS(19),
  },
  [83] = {
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_in] = ACTIONS(217),
    [anon_sym_DOT_DOT] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_PLUS] = ACTIONS(217),
    [anon_sym_EQ_EQ] = ACTIONS(217),
    [anon_sym_BANG_EQ] = ACTIONS(217),
    [anon_sym_GT_EQ] = ACTIONS(217),
    [anon_sym_LT_EQ] = ACTIONS(217),
    [anon_sym_GT] = ACTIONS(219),
    [anon_sym_LT] = ACTIONS(219),
    [anon_sym_AMP_AMP] = ACTIONS(217),
    [anon_sym_PIPE_PIPE] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(205),
    [anon_sym_SLASH] = ACTIONS(207),
    [anon_sym_AMP] = ACTIONS(219),
    [anon_sym_PIPE] = ACTIONS(219),
    [anon_sym_CARET] = ACTIONS(217),
    [sym_comment] = ACTIONS(19),
  },
  [84] = {
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_in] = ACTIONS(217),
    [anon_sym_DOT_DOT] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(195),
    [anon_sym_PLUS] = ACTIONS(195),
    [anon_sym_EQ_EQ] = ACTIONS(197),
    [anon_sym_BANG_EQ] = ACTIONS(197),
    [anon_sym_GT_EQ] = ACTIONS(197),
    [anon_sym_LT_EQ] = ACTIONS(197),
    [anon_sym_GT] = ACTIONS(199),
    [anon_sym_LT] = ACTIONS(199),
    [anon_sym_AMP_AMP] = ACTIONS(217),
    [anon_sym_PIPE_PIPE] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(205),
    [anon_sym_SLASH] = ACTIONS(207),
    [anon_sym_AMP] = ACTIONS(219),
    [anon_sym_PIPE] = ACTIONS(219),
    [anon_sym_CARET] = ACTIONS(217),
    [sym_comment] = ACTIONS(19),
  },
  [85] = {
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_in] = ACTIONS(217),
    [anon_sym_DOT_DOT] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(195),
    [anon_sym_PLUS] = ACTIONS(195),
    [anon_sym_EQ_EQ] = ACTIONS(197),
    [anon_sym_BANG_EQ] = ACTIONS(197),
    [anon_sym_GT_EQ] = ACTIONS(197),
    [anon_sym_LT_EQ] = ACTIONS(197),
    [anon_sym_GT] = ACTIONS(199),
    [anon_sym_LT] = ACTIONS(199),
    [anon_sym_AMP_AMP] = ACTIONS(201),
    [anon_sym_PIPE_PIPE] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(205),
    [anon_sym_SLASH] = ACTIONS(207),
    [anon_sym_AMP] = ACTIONS(209),
    [anon_sym_PIPE] = ACTIONS(219),
    [anon_sym_CARET] = ACTIONS(217),
    [sym_comment] = ACTIONS(19),
  },
  [86] = {
    [sym_identifier] = ACTIONS(301),
    [sym_comment] = ACTIONS(19),
  },
  [87] = {
    [anon_sym_SEMI] = ACTIONS(303),
    [anon_sym_COLON] = ACTIONS(303),
    [anon_sym_LBRACK] = ACTIONS(303),
    [anon_sym_RBRACK] = ACTIONS(303),
    [anon_sym_in] = ACTIONS(303),
    [anon_sym_DOT_DOT] = ACTIONS(303),
    [anon_sym_DASH] = ACTIONS(303),
    [anon_sym_PLUS] = ACTIONS(303),
    [anon_sym_EQ_EQ] = ACTIONS(303),
    [anon_sym_BANG_EQ] = ACTIONS(303),
    [anon_sym_GT_EQ] = ACTIONS(303),
    [anon_sym_LT_EQ] = ACTIONS(303),
    [anon_sym_GT] = ACTIONS(305),
    [anon_sym_LT] = ACTIONS(305),
    [anon_sym_AMP_AMP] = ACTIONS(303),
    [anon_sym_PIPE_PIPE] = ACTIONS(303),
    [anon_sym_STAR] = ACTIONS(303),
    [anon_sym_SLASH] = ACTIONS(305),
    [anon_sym_AMP] = ACTIONS(305),
    [anon_sym_PIPE] = ACTIONS(305),
    [anon_sym_CARET] = ACTIONS(303),
    [sym_comment] = ACTIONS(19),
  },
  [88] = {
    [aux_sym_in_expression_repeat1] = STATE(99),
    [anon_sym_COMMA] = ACTIONS(262),
    [anon_sym_RBRACE] = ACTIONS(307),
    [sym_comment] = ACTIONS(19),
  },
  [89] = {
    [anon_sym_SEMI] = ACTIONS(309),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_in] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_EQ_EQ] = ACTIONS(51),
    [anon_sym_BANG_EQ] = ACTIONS(51),
    [anon_sym_GT_EQ] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_AMP_AMP] = ACTIONS(55),
    [anon_sym_PIPE_PIPE] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(61),
    [anon_sym_AMP] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_CARET] = ACTIONS(57),
    [sym_comment] = ACTIONS(19),
  },
  [90] = {
    [sym__expression] = STATE(101),
    [sym_assignment_expression] = STATE(101),
    [sym_mux_expression] = STATE(101),
    [sym_in_expression] = STATE(101),
    [sym_slice_expression] = STATE(101),
    [sym_unary_expression] = STATE(101),
    [sym_binary_expression] = STATE(101),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(244),
    [anon_sym_TILDE] = ACTIONS(244),
    [anon_sym_DASH] = ACTIONS(244),
    [anon_sym_PLUS] = ACTIONS(244),
    [sym_identifier] = ACTIONS(246),
    [sym_number] = ACTIONS(311),
    [sym_comment] = ACTIONS(19),
  },
  [91] = {
    [anon_sym_SEMI] = ACTIONS(313),
    [anon_sym_COLON] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(313),
    [anon_sym_RBRACK] = ACTIONS(313),
    [anon_sym_in] = ACTIONS(313),
    [anon_sym_DOT_DOT] = ACTIONS(313),
    [anon_sym_DASH] = ACTIONS(313),
    [anon_sym_PLUS] = ACTIONS(313),
    [anon_sym_EQ_EQ] = ACTIONS(313),
    [anon_sym_BANG_EQ] = ACTIONS(313),
    [anon_sym_GT_EQ] = ACTIONS(313),
    [anon_sym_LT_EQ] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(315),
    [anon_sym_LT] = ACTIONS(315),
    [anon_sym_AMP_AMP] = ACTIONS(313),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_STAR] = ACTIONS(313),
    [anon_sym_SLASH] = ACTIONS(315),
    [anon_sym_AMP] = ACTIONS(315),
    [anon_sym_PIPE] = ACTIONS(315),
    [anon_sym_CARET] = ACTIONS(313),
    [sym_comment] = ACTIONS(19),
  },
  [92] = {
    [sym__expression] = STATE(102),
    [sym_assignment_expression] = STATE(102),
    [sym_mux_expression] = STATE(102),
    [sym_in_expression] = STATE(102),
    [sym_slice_expression] = STATE(102),
    [sym_unary_expression] = STATE(102),
    [sym_binary_expression] = STATE(102),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(244),
    [anon_sym_TILDE] = ACTIONS(244),
    [anon_sym_DASH] = ACTIONS(244),
    [anon_sym_PLUS] = ACTIONS(244),
    [sym_identifier] = ACTIONS(246),
    [sym_number] = ACTIONS(317),
    [sym_comment] = ACTIONS(19),
  },
  [93] = {
    [sym__expression] = STATE(103),
    [sym_assignment_expression] = STATE(103),
    [sym_mux_expression] = STATE(103),
    [sym_in_expression] = STATE(103),
    [sym_slice_expression] = STATE(103),
    [sym_unary_expression] = STATE(103),
    [sym_binary_expression] = STATE(103),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(244),
    [anon_sym_TILDE] = ACTIONS(244),
    [anon_sym_DASH] = ACTIONS(244),
    [anon_sym_PLUS] = ACTIONS(244),
    [sym_identifier] = ACTIONS(246),
    [sym_number] = ACTIONS(319),
    [sym_comment] = ACTIONS(19),
  },
  [94] = {
    [sym__expression] = STATE(104),
    [sym_assignment_expression] = STATE(104),
    [sym_mux_expression] = STATE(104),
    [sym_in_expression] = STATE(104),
    [sym_slice_expression] = STATE(104),
    [sym_unary_expression] = STATE(104),
    [sym_binary_expression] = STATE(104),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(244),
    [anon_sym_TILDE] = ACTIONS(244),
    [anon_sym_DASH] = ACTIONS(244),
    [anon_sym_PLUS] = ACTIONS(244),
    [sym_identifier] = ACTIONS(246),
    [sym_number] = ACTIONS(321),
    [sym_comment] = ACTIONS(19),
  },
  [95] = {
    [sym__expression] = STATE(105),
    [sym_assignment_expression] = STATE(105),
    [sym_mux_expression] = STATE(105),
    [sym_in_expression] = STATE(105),
    [sym_slice_expression] = STATE(105),
    [sym_unary_expression] = STATE(105),
    [sym_binary_expression] = STATE(105),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(244),
    [anon_sym_TILDE] = ACTIONS(244),
    [anon_sym_DASH] = ACTIONS(244),
    [anon_sym_PLUS] = ACTIONS(244),
    [sym_identifier] = ACTIONS(246),
    [sym_number] = ACTIONS(323),
    [sym_comment] = ACTIONS(19),
  },
  [96] = {
    [sym__expression] = STATE(51),
    [sym_assignment_expression] = STATE(51),
    [sym_mux_expression] = STATE(51),
    [sym_in_expression] = STATE(51),
    [sym_slice_expression] = STATE(51),
    [sym_unary_expression] = STATE(51),
    [sym_binary_expression] = STATE(51),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(244),
    [anon_sym_TILDE] = ACTIONS(244),
    [anon_sym_DASH] = ACTIONS(244),
    [anon_sym_PLUS] = ACTIONS(244),
    [sym_identifier] = ACTIONS(246),
    [sym_number] = ACTIONS(127),
    [sym_comment] = ACTIONS(19),
  },
  [97] = {
    [anon_sym_COMMA] = ACTIONS(325),
    [anon_sym_RBRACE] = ACTIONS(325),
    [sym_comment] = ACTIONS(19),
  },
  [98] = {
    [anon_sym_SEMI] = ACTIONS(327),
    [anon_sym_COLON] = ACTIONS(327),
    [anon_sym_LBRACK] = ACTIONS(327),
    [anon_sym_RBRACK] = ACTIONS(327),
    [anon_sym_in] = ACTIONS(327),
    [anon_sym_DOT_DOT] = ACTIONS(327),
    [anon_sym_DASH] = ACTIONS(327),
    [anon_sym_PLUS] = ACTIONS(327),
    [anon_sym_EQ_EQ] = ACTIONS(327),
    [anon_sym_BANG_EQ] = ACTIONS(327),
    [anon_sym_GT_EQ] = ACTIONS(327),
    [anon_sym_LT_EQ] = ACTIONS(327),
    [anon_sym_GT] = ACTIONS(329),
    [anon_sym_LT] = ACTIONS(329),
    [anon_sym_AMP_AMP] = ACTIONS(327),
    [anon_sym_PIPE_PIPE] = ACTIONS(327),
    [anon_sym_STAR] = ACTIONS(327),
    [anon_sym_SLASH] = ACTIONS(329),
    [anon_sym_AMP] = ACTIONS(329),
    [anon_sym_PIPE] = ACTIONS(329),
    [anon_sym_CARET] = ACTIONS(327),
    [sym_comment] = ACTIONS(19),
  },
  [99] = {
    [aux_sym_in_expression_repeat1] = STATE(99),
    [anon_sym_COMMA] = ACTIONS(331),
    [anon_sym_RBRACE] = ACTIONS(325),
    [sym_comment] = ACTIONS(19),
  },
  [100] = {
    [anon_sym_RBRACE] = ACTIONS(334),
    [sym_identifier] = ACTIONS(334),
    [sym_comment] = ACTIONS(19),
  },
  [101] = {
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_RBRACK] = ACTIONS(189),
    [anon_sym_in] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(283),
    [anon_sym_PLUS] = ACTIONS(283),
    [anon_sym_EQ_EQ] = ACTIONS(285),
    [anon_sym_BANG_EQ] = ACTIONS(285),
    [anon_sym_GT_EQ] = ACTIONS(285),
    [anon_sym_LT_EQ] = ACTIONS(285),
    [anon_sym_GT] = ACTIONS(287),
    [anon_sym_LT] = ACTIONS(287),
    [anon_sym_AMP_AMP] = ACTIONS(289),
    [anon_sym_PIPE_PIPE] = ACTIONS(291),
    [anon_sym_STAR] = ACTIONS(293),
    [anon_sym_SLASH] = ACTIONS(295),
    [anon_sym_AMP] = ACTIONS(297),
    [anon_sym_PIPE] = ACTIONS(299),
    [anon_sym_CARET] = ACTIONS(291),
    [sym_comment] = ACTIONS(19),
  },
  [102] = {
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_RBRACK] = ACTIONS(217),
    [anon_sym_in] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_PLUS] = ACTIONS(217),
    [anon_sym_EQ_EQ] = ACTIONS(285),
    [anon_sym_BANG_EQ] = ACTIONS(285),
    [anon_sym_GT_EQ] = ACTIONS(285),
    [anon_sym_LT_EQ] = ACTIONS(285),
    [anon_sym_GT] = ACTIONS(287),
    [anon_sym_LT] = ACTIONS(287),
    [anon_sym_AMP_AMP] = ACTIONS(217),
    [anon_sym_PIPE_PIPE] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(293),
    [anon_sym_SLASH] = ACTIONS(295),
    [anon_sym_AMP] = ACTIONS(219),
    [anon_sym_PIPE] = ACTIONS(219),
    [anon_sym_CARET] = ACTIONS(217),
    [sym_comment] = ACTIONS(19),
  },
  [103] = {
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_RBRACK] = ACTIONS(217),
    [anon_sym_in] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_PLUS] = ACTIONS(217),
    [anon_sym_EQ_EQ] = ACTIONS(217),
    [anon_sym_BANG_EQ] = ACTIONS(217),
    [anon_sym_GT_EQ] = ACTIONS(217),
    [anon_sym_LT_EQ] = ACTIONS(217),
    [anon_sym_GT] = ACTIONS(219),
    [anon_sym_LT] = ACTIONS(219),
    [anon_sym_AMP_AMP] = ACTIONS(217),
    [anon_sym_PIPE_PIPE] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(293),
    [anon_sym_SLASH] = ACTIONS(295),
    [anon_sym_AMP] = ACTIONS(219),
    [anon_sym_PIPE] = ACTIONS(219),
    [anon_sym_CARET] = ACTIONS(217),
    [sym_comment] = ACTIONS(19),
  },
  [104] = {
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_RBRACK] = ACTIONS(217),
    [anon_sym_in] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(283),
    [anon_sym_PLUS] = ACTIONS(283),
    [anon_sym_EQ_EQ] = ACTIONS(285),
    [anon_sym_BANG_EQ] = ACTIONS(285),
    [anon_sym_GT_EQ] = ACTIONS(285),
    [anon_sym_LT_EQ] = ACTIONS(285),
    [anon_sym_GT] = ACTIONS(287),
    [anon_sym_LT] = ACTIONS(287),
    [anon_sym_AMP_AMP] = ACTIONS(217),
    [anon_sym_PIPE_PIPE] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(293),
    [anon_sym_SLASH] = ACTIONS(295),
    [anon_sym_AMP] = ACTIONS(219),
    [anon_sym_PIPE] = ACTIONS(219),
    [anon_sym_CARET] = ACTIONS(217),
    [sym_comment] = ACTIONS(19),
  },
  [105] = {
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_RBRACK] = ACTIONS(217),
    [anon_sym_in] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(283),
    [anon_sym_PLUS] = ACTIONS(283),
    [anon_sym_EQ_EQ] = ACTIONS(285),
    [anon_sym_BANG_EQ] = ACTIONS(285),
    [anon_sym_GT_EQ] = ACTIONS(285),
    [anon_sym_LT_EQ] = ACTIONS(285),
    [anon_sym_GT] = ACTIONS(287),
    [anon_sym_LT] = ACTIONS(287),
    [anon_sym_AMP_AMP] = ACTIONS(289),
    [anon_sym_PIPE_PIPE] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(293),
    [anon_sym_SLASH] = ACTIONS(295),
    [anon_sym_AMP] = ACTIONS(297),
    [anon_sym_PIPE] = ACTIONS(219),
    [anon_sym_CARET] = ACTIONS(217),
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
  [51] = {.count = 1, .reusable = true}, SHIFT(23),
  [53] = {.count = 1, .reusable = false}, SHIFT(23),
  [55] = {.count = 1, .reusable = true}, SHIFT(24),
  [57] = {.count = 1, .reusable = true}, SHIFT(25),
  [59] = {.count = 1, .reusable = true}, SHIFT(26),
  [61] = {.count = 1, .reusable = false}, SHIFT(26),
  [63] = {.count = 1, .reusable = false}, SHIFT(24),
  [65] = {.count = 1, .reusable = false}, SHIFT(25),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [69] = {.count = 1, .reusable = true}, SHIFT(28),
  [71] = {.count = 1, .reusable = true}, SHIFT(29),
  [73] = {.count = 1, .reusable = true}, SHIFT(30),
  [75] = {.count = 1, .reusable = true}, SHIFT(32),
  [77] = {.count = 1, .reusable = false}, SHIFT(33),
  [79] = {.count = 1, .reusable = true}, SHIFT(34),
  [81] = {.count = 1, .reusable = true}, SHIFT(35),
  [83] = {.count = 1, .reusable = true}, SHIFT(36),
  [85] = {.count = 1, .reusable = false}, SHIFT(36),
  [87] = {.count = 1, .reusable = true}, SHIFT(37),
  [89] = {.count = 1, .reusable = true}, SHIFT(38),
  [91] = {.count = 1, .reusable = true}, SHIFT(39),
  [93] = {.count = 1, .reusable = false}, SHIFT(39),
  [95] = {.count = 1, .reusable = false}, SHIFT(37),
  [97] = {.count = 1, .reusable = false}, SHIFT(38),
  [99] = {.count = 1, .reusable = true}, SHIFT(40),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_unary_expression, 2),
  [103] = {.count = 1, .reusable = false}, REDUCE(sym_unary_expression, 2),
  [105] = {.count = 1, .reusable = true}, SHIFT(42),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym__statement, 2),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym__statement, 2),
  [111] = {.count = 1, .reusable = true}, SHIFT(43),
  [113] = {.count = 1, .reusable = true}, SHIFT(44),
  [115] = {.count = 1, .reusable = true}, SHIFT(45),
  [117] = {.count = 1, .reusable = true}, SHIFT(46),
  [119] = {.count = 1, .reusable = true}, SHIFT(47),
  [121] = {.count = 1, .reusable = true}, SHIFT(48),
  [123] = {.count = 1, .reusable = true}, SHIFT(49),
  [125] = {.count = 1, .reusable = true}, SHIFT(50),
  [127] = {.count = 1, .reusable = true}, SHIFT(51),
  [129] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [131] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [134] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [137] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [140] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [143] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [146] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [149] = {.count = 1, .reusable = true}, SHIFT(52),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_wire_declaration, 3),
  [153] = {.count = 1, .reusable = false}, REDUCE(sym_wire_declaration, 3),
  [155] = {.count = 1, .reusable = true}, SHIFT(54),
  [157] = {.count = 1, .reusable = true}, SHIFT(56),
  [159] = {.count = 1, .reusable = true}, SHIFT(59),
  [161] = {.count = 1, .reusable = true}, SHIFT(60),
  [163] = {.count = 1, .reusable = true}, SHIFT(61),
  [165] = {.count = 1, .reusable = true}, SHIFT(62),
  [167] = {.count = 1, .reusable = true}, SHIFT(63),
  [169] = {.count = 1, .reusable = true}, SHIFT(64),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_mux_expression, 3),
  [173] = {.count = 1, .reusable = false}, REDUCE(sym_mux_expression, 3),
  [175] = {.count = 2, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(4),
  [178] = {.count = 1, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 2),
  [180] = {.count = 2, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(13),
  [183] = {.count = 2, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(14),
  [186] = {.count = 2, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(15),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 3),
  [191] = {.count = 1, .reusable = false}, SHIFT(65),
  [193] = {.count = 1, .reusable = true}, SHIFT(66),
  [195] = {.count = 1, .reusable = true}, SHIFT(67),
  [197] = {.count = 1, .reusable = true}, SHIFT(68),
  [199] = {.count = 1, .reusable = false}, SHIFT(68),
  [201] = {.count = 1, .reusable = true}, SHIFT(69),
  [203] = {.count = 1, .reusable = true}, SHIFT(70),
  [205] = {.count = 1, .reusable = true}, SHIFT(71),
  [207] = {.count = 1, .reusable = false}, SHIFT(71),
  [209] = {.count = 1, .reusable = false}, SHIFT(69),
  [211] = {.count = 1, .reusable = false}, SHIFT(70),
  [213] = {.count = 1, .reusable = true}, SHIFT(72),
  [215] = {.count = 1, .reusable = true}, SHIFT(73),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [219] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_variable_declarator, 3),
  [223] = {.count = 1, .reusable = true}, REDUCE(aux_sym_wire_declaration_repeat1, 2),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_wire_declaration, 4),
  [227] = {.count = 1, .reusable = false}, REDUCE(sym_wire_declaration, 4),
  [229] = {.count = 2, .reusable = true}, REDUCE(aux_sym_wire_declaration_repeat1, 2), SHIFT_REPEAT(30),
  [232] = {.count = 1, .reusable = true}, REDUCE(sym_register_declaration, 4),
  [234] = {.count = 1, .reusable = false}, REDUCE(sym_register_declaration, 4),
  [236] = {.count = 1, .reusable = true}, SHIFT(74),
  [238] = {.count = 1, .reusable = true}, SHIFT(75),
  [240] = {.count = 1, .reusable = true}, SHIFT(77),
  [242] = {.count = 1, .reusable = true}, SHIFT(78),
  [244] = {.count = 1, .reusable = true}, SHIFT(79),
  [246] = {.count = 1, .reusable = true}, SHIFT(80),
  [248] = {.count = 1, .reusable = true}, SHIFT(81),
  [250] = {.count = 1, .reusable = true}, SHIFT(82),
  [252] = {.count = 1, .reusable = true}, SHIFT(83),
  [254] = {.count = 1, .reusable = true}, SHIFT(84),
  [256] = {.count = 1, .reusable = true}, SHIFT(85),
  [258] = {.count = 1, .reusable = true}, REDUCE(sym_in_expression, 4),
  [260] = {.count = 1, .reusable = false}, REDUCE(sym_in_expression, 4),
  [262] = {.count = 1, .reusable = true}, SHIFT(86),
  [264] = {.count = 1, .reusable = true}, SHIFT(87),
  [266] = {.count = 1, .reusable = true}, SHIFT(89),
  [268] = {.count = 1, .reusable = true}, REDUCE(sym_register_declaration, 5),
  [270] = {.count = 1, .reusable = false}, REDUCE(sym_register_declaration, 5),
  [272] = {.count = 1, .reusable = true}, REDUCE(aux_sym_register_declaration_repeat1, 2),
  [274] = {.count = 2, .reusable = true}, REDUCE(aux_sym_register_declaration_repeat1, 2), SHIFT_REPEAT(10),
  [277] = {.count = 1, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 4),
  [279] = {.count = 1, .reusable = false}, SHIFT(90),
  [281] = {.count = 1, .reusable = true}, SHIFT(91),
  [283] = {.count = 1, .reusable = true}, SHIFT(92),
  [285] = {.count = 1, .reusable = true}, SHIFT(93),
  [287] = {.count = 1, .reusable = false}, SHIFT(93),
  [289] = {.count = 1, .reusable = true}, SHIFT(94),
  [291] = {.count = 1, .reusable = true}, SHIFT(95),
  [293] = {.count = 1, .reusable = true}, SHIFT(96),
  [295] = {.count = 1, .reusable = false}, SHIFT(96),
  [297] = {.count = 1, .reusable = false}, SHIFT(94),
  [299] = {.count = 1, .reusable = false}, SHIFT(95),
  [301] = {.count = 1, .reusable = true}, SHIFT(97),
  [303] = {.count = 1, .reusable = true}, REDUCE(sym_in_expression, 5),
  [305] = {.count = 1, .reusable = false}, REDUCE(sym_in_expression, 5),
  [307] = {.count = 1, .reusable = true}, SHIFT(98),
  [309] = {.count = 1, .reusable = true}, SHIFT(100),
  [311] = {.count = 1, .reusable = true}, SHIFT(101),
  [313] = {.count = 1, .reusable = true}, REDUCE(sym_slice_expression, 6),
  [315] = {.count = 1, .reusable = false}, REDUCE(sym_slice_expression, 6),
  [317] = {.count = 1, .reusable = true}, SHIFT(102),
  [319] = {.count = 1, .reusable = true}, SHIFT(103),
  [321] = {.count = 1, .reusable = true}, SHIFT(104),
  [323] = {.count = 1, .reusable = true}, SHIFT(105),
  [325] = {.count = 1, .reusable = true}, REDUCE(aux_sym_in_expression_repeat1, 2),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym_in_expression, 6),
  [329] = {.count = 1, .reusable = false}, REDUCE(sym_in_expression, 6),
  [331] = {.count = 2, .reusable = true}, REDUCE(aux_sym_in_expression_repeat1, 2), SHIFT_REPEAT(86),
  [334] = {.count = 1, .reusable = true}, REDUCE(sym__register_expression_statement, 4),
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
