#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 122
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
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
  anon_sym_const = 10,
  anon_sym_LBRACK = 11,
  anon_sym_RBRACK = 12,
  anon_sym_in = 13,
  anon_sym_DOT_DOT = 14,
  anon_sym_BANG = 15,
  anon_sym_TILDE = 16,
  anon_sym_DASH = 17,
  anon_sym_PLUS = 18,
  anon_sym_EQ_EQ = 19,
  anon_sym_BANG_EQ = 20,
  anon_sym_GT_EQ = 21,
  anon_sym_LT_EQ = 22,
  anon_sym_GT = 23,
  anon_sym_LT = 24,
  anon_sym_AMP_AMP = 25,
  anon_sym_PIPE_PIPE = 26,
  anon_sym_STAR = 27,
  anon_sym_SLASH = 28,
  anon_sym_AMP = 29,
  anon_sym_PIPE = 30,
  anon_sym_CARET = 31,
  sym_identifier = 32,
  sym_number = 33,
  sym_comment = 34,
  sym_pound_comment = 35,
  sym_slash_comment = 36,
  anon_sym_SLASH_STAR = 37,
  sym_source_file = 38,
  sym__statement = 39,
  sym__declaration = 40,
  sym_wire_declaration = 41,
  sym_variable_declarator = 42,
  sym_register_declaration = 43,
  sym__register_expression_statement = 44,
  sym__expression = 45,
  sym_assignment_expression = 46,
  sym_mux_expression = 47,
  sym_in_expression = 48,
  sym_slice_expression = 49,
  sym_unary_expression = 50,
  sym_binary_expression = 51,
  aux_sym_source_file_repeat1 = 52,
  aux_sym_wire_declaration_repeat1 = 53,
  aux_sym_register_declaration_repeat1 = 54,
  aux_sym_mux_expression_repeat1 = 55,
  aux_sym_in_expression_repeat1 = 56,
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
  [anon_sym_const] = "const",
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
  [anon_sym_const] = {
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
      if (lookahead == 'c')
        ADVANCE(36);
      if (lookahead == 'i')
        ADVANCE(42);
      if (lookahead == 'r')
        ADVANCE(44);
      if (lookahead == 'w')
        ADVANCE(52);
      if (lookahead == '{')
        ADVANCE(56);
      if (lookahead == '|')
        ADVANCE(57);
      if (lookahead == '}')
        ADVANCE(59);
      if (lookahead == '~')
        ADVANCE(60);
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
        ADVANCE(41);
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
      if (lookahead == 'o')
        ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(41);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(41);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(41);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(41);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(41);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(41);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(41);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g')
        ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(41);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(41);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(41);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(41);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(41);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(41);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_register);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(41);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(41);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(41);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(41);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_wire);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(41);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|')
        ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_TILDE);
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
        ADVANCE(16);
      if (lookahead == '[')
        ADVANCE(33);
      if (lookahead == 'c')
        ADVANCE(36);
      if (lookahead == 'r')
        ADVANCE(44);
      if (lookahead == 'w')
        ADVANCE(52);
      if (lookahead == '~')
        ADVANCE(60);
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
        ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(41);
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
      if (lookahead == '#')
        ADVANCE(63);
      if (lookahead == '/')
        ADVANCE(64);
      if (lookahead == '}')
        ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(41);
      END_STATE();
    case 69:
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
        SKIP(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_register_name);
      END_STATE();
    case 72:
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
        ADVANCE(16);
      if (lookahead == '[')
        ADVANCE(33);
      if (lookahead == ']')
        ADVANCE(34);
      if (lookahead == 'c')
        ADVANCE(36);
      if (lookahead == '~')
        ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(72);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(41);
      END_STATE();
    case 73:
      if (lookahead == '!')
        ADVANCE(74);
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
        ADVANCE(75);
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
        ADVANCE(76);
      if (lookahead == '|')
        ADVANCE(57);
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
      if (lookahead == '=')
        ADVANCE(3);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(65);
      if (lookahead == '/')
        ADVANCE(63);
      END_STATE();
    case 76:
      if (lookahead == 'n')
        ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 78:
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
        SKIP(78);
      END_STATE();
    case 79:
      if (lookahead == '!')
        ADVANCE(74);
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
        ADVANCE(75);
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
        ADVANCE(76);
      if (lookahead == '|')
        ADVANCE(57);
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
        ADVANCE(63);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(64);
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
        SKIP(80);
      END_STATE();
    case 81:
      if (lookahead == '#')
        ADVANCE(63);
      if (lookahead == '/')
        ADVANCE(64);
      if (lookahead == '{')
        ADVANCE(56);
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
        ADVANCE(74);
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
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(75);
      if (lookahead == ':')
        ADVANCE(25);
      if (lookahead == ';')
        ADVANCE(26);
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(83);
      if (lookahead == '>')
        ADVANCE(31);
      if (lookahead == '[')
        ADVANCE(33);
      if (lookahead == ']')
        ADVANCE(34);
      if (lookahead == '^')
        ADVANCE(35);
      if (lookahead == 'i')
        ADVANCE(76);
      if (lookahead == '|')
        ADVANCE(57);
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
      if (lookahead == '=')
        ADVANCE(30);
      END_STATE();
    case 84:
      if (lookahead == '!')
        ADVANCE(74);
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
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(75);
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
        ADVANCE(76);
      if (lookahead == '|')
        ADVANCE(57);
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
      if (lookahead == '#')
        ADVANCE(63);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(64);
      if (lookahead == ';')
        ADVANCE(26);
      if (lookahead == '=')
        ADVANCE(86);
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
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 87:
      if (lookahead == '#')
        ADVANCE(63);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(64);
      if (lookahead == '}')
        ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(87);
      END_STATE();
    case 88:
      if (lookahead == '!')
        ADVANCE(74);
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
        ADVANCE(75);
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
        ADVANCE(76);
      if (lookahead == '|')
        ADVANCE(57);
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
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 61},
  [2] = {.lex_state = 68},
  [3] = {.lex_state = 69},
  [4] = {.lex_state = 68},
  [5] = {.lex_state = 72},
  [6] = {.lex_state = 72},
  [7] = {.lex_state = 73},
  [8] = {.lex_state = 78},
  [9] = {.lex_state = 73},
  [10] = {.lex_state = 61},
  [11] = {.lex_state = 79},
  [12] = {.lex_state = 80},
  [13] = {.lex_state = 81},
  [14] = {.lex_state = 73},
  [15] = {.lex_state = 68},
  [16] = {.lex_state = 72},
  [17] = {.lex_state = 79},
  [18] = {.lex_state = 79},
  [19] = {.lex_state = 72},
  [20] = {.lex_state = 82},
  [21] = {.lex_state = 72},
  [22] = {.lex_state = 61},
  [23] = {.lex_state = 72},
  [24] = {.lex_state = 81},
  [25] = {.lex_state = 72},
  [26] = {.lex_state = 72},
  [27] = {.lex_state = 72},
  [28] = {.lex_state = 72},
  [29] = {.lex_state = 72},
  [30] = {.lex_state = 61},
  [31] = {.lex_state = 61},
  [32] = {.lex_state = 61},
  [33] = {.lex_state = 68},
  [34] = {.lex_state = 80},
  [35] = {.lex_state = 68},
  [36] = {.lex_state = 72},
  [37] = {.lex_state = 73},
  [38] = {.lex_state = 72},
  [39] = {.lex_state = 72},
  [40] = {.lex_state = 72},
  [41] = {.lex_state = 72},
  [42] = {.lex_state = 72},
  [43] = {.lex_state = 72},
  [44] = {.lex_state = 72},
  [45] = {.lex_state = 82},
  [46] = {.lex_state = 72},
  [47] = {.lex_state = 73},
  [48] = {.lex_state = 68},
  [49] = {.lex_state = 72},
  [50] = {.lex_state = 84},
  [51] = {.lex_state = 84},
  [52] = {.lex_state = 68},
  [53] = {.lex_state = 73},
  [54] = {.lex_state = 73},
  [55] = {.lex_state = 73},
  [56] = {.lex_state = 73},
  [57] = {.lex_state = 82},
  [58] = {.lex_state = 85},
  [59] = {.lex_state = 80},
  [60] = {.lex_state = 61},
  [61] = {.lex_state = 80},
  [62] = {.lex_state = 61},
  [63] = {.lex_state = 73},
  [64] = {.lex_state = 68},
  [65] = {.lex_state = 73},
  [66] = {.lex_state = 72},
  [67] = {.lex_state = 79},
  [68] = {.lex_state = 73},
  [69] = {.lex_state = 79},
  [70] = {.lex_state = 79},
  [71] = {.lex_state = 79},
  [72] = {.lex_state = 79},
  [73] = {.lex_state = 73},
  [74] = {.lex_state = 72},
  [75] = {.lex_state = 72},
  [76] = {.lex_state = 72},
  [77] = {.lex_state = 72},
  [78] = {.lex_state = 72},
  [79] = {.lex_state = 72},
  [80] = {.lex_state = 72},
  [81] = {.lex_state = 82},
  [82] = {.lex_state = 87},
  [83] = {.lex_state = 72},
  [84] = {.lex_state = 61},
  [85] = {.lex_state = 68},
  [86] = {.lex_state = 79},
  [87] = {.lex_state = 72},
  [88] = {.lex_state = 72},
  [89] = {.lex_state = 84},
  [90] = {.lex_state = 68},
  [91] = {.lex_state = 72},
  [92] = {.lex_state = 88},
  [93] = {.lex_state = 88},
  [94] = {.lex_state = 84},
  [95] = {.lex_state = 84},
  [96] = {.lex_state = 84},
  [97] = {.lex_state = 84},
  [98] = {.lex_state = 68},
  [99] = {.lex_state = 82},
  [100] = {.lex_state = 87},
  [101] = {.lex_state = 73},
  [102] = {.lex_state = 84},
  [103] = {.lex_state = 73},
  [104] = {.lex_state = 72},
  [105] = {.lex_state = 82},
  [106] = {.lex_state = 72},
  [107] = {.lex_state = 72},
  [108] = {.lex_state = 72},
  [109] = {.lex_state = 72},
  [110] = {.lex_state = 72},
  [111] = {.lex_state = 87},
  [112] = {.lex_state = 82},
  [113] = {.lex_state = 87},
  [114] = {.lex_state = 68},
  [115] = {.lex_state = 72},
  [116] = {.lex_state = 88},
  [117] = {.lex_state = 88},
  [118] = {.lex_state = 88},
  [119] = {.lex_state = 88},
  [120] = {.lex_state = 88},
  [121] = {.lex_state = 88},
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
    [anon_sym_const] = ACTIONS(3),
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
    [sym_source_file] = STATE(8),
    [sym__statement] = STATE(10),
    [sym__declaration] = STATE(10),
    [sym_wire_declaration] = STATE(10),
    [sym_register_declaration] = STATE(10),
    [sym__expression] = STATE(9),
    [sym_assignment_expression] = STATE(9),
    [sym_mux_expression] = STATE(9),
    [sym_in_expression] = STATE(9),
    [sym_slice_expression] = STATE(9),
    [sym_unary_expression] = STATE(9),
    [sym_binary_expression] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_wire] = ACTIONS(7),
    [anon_sym_register] = ACTIONS(9),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_comment] = ACTIONS(21),
  },
  [2] = {
    [sym_variable_declarator] = STATE(12),
    [sym_identifier] = ACTIONS(23),
    [sym_comment] = ACTIONS(21),
  },
  [3] = {
    [sym_register_name] = ACTIONS(25),
    [sym_comment] = ACTIONS(21),
  },
  [4] = {
    [sym_identifier] = ACTIONS(27),
    [sym_comment] = ACTIONS(21),
  },
  [5] = {
    [sym__expression] = STATE(18),
    [sym_assignment_expression] = STATE(18),
    [sym_mux_expression] = STATE(18),
    [sym_in_expression] = STATE(18),
    [sym_slice_expression] = STATE(18),
    [sym_unary_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [aux_sym_mux_expression_repeat1] = STATE(19),
    [anon_sym_const] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [sym_number] = ACTIONS(35),
    [sym_comment] = ACTIONS(21),
  },
  [6] = {
    [sym__expression] = STATE(20),
    [sym_assignment_expression] = STATE(20),
    [sym_mux_expression] = STATE(20),
    [sym_in_expression] = STATE(20),
    [sym_slice_expression] = STATE(20),
    [sym_unary_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym_number] = ACTIONS(37),
    [sym_comment] = ACTIONS(21),
  },
  [7] = {
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_EQ] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_EQ_EQ] = ACTIONS(39),
    [anon_sym_BANG_EQ] = ACTIONS(39),
    [anon_sym_GT_EQ] = ACTIONS(39),
    [anon_sym_LT_EQ] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_AMP_AMP] = ACTIONS(39),
    [anon_sym_PIPE_PIPE] = ACTIONS(39),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(43),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_PIPE] = ACTIONS(43),
    [anon_sym_CARET] = ACTIONS(39),
    [sym_comment] = ACTIONS(21),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym_comment] = ACTIONS(21),
  },
  [9] = {
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_in] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(53),
    [anon_sym_EQ_EQ] = ACTIONS(55),
    [anon_sym_BANG_EQ] = ACTIONS(55),
    [anon_sym_GT_EQ] = ACTIONS(55),
    [anon_sym_LT_EQ] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_AMP_AMP] = ACTIONS(59),
    [anon_sym_PIPE_PIPE] = ACTIONS(61),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_AMP] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_CARET] = ACTIONS(61),
    [sym_comment] = ACTIONS(21),
  },
  [10] = {
    [sym__statement] = STATE(30),
    [sym__declaration] = STATE(30),
    [sym_wire_declaration] = STATE(30),
    [sym_register_declaration] = STATE(30),
    [sym__expression] = STATE(9),
    [sym_assignment_expression] = STATE(9),
    [sym_mux_expression] = STATE(9),
    [sym_in_expression] = STATE(9),
    [sym_slice_expression] = STATE(9),
    [sym_unary_expression] = STATE(9),
    [sym_binary_expression] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_wire] = ACTIONS(7),
    [anon_sym_register] = ACTIONS(9),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_comment] = ACTIONS(21),
  },
  [11] = {
    [anon_sym_COLON] = ACTIONS(73),
    [sym_comment] = ACTIONS(21),
  },
  [12] = {
    [aux_sym_wire_declaration_repeat1] = STATE(34),
    [anon_sym_SEMI] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(77),
    [sym_comment] = ACTIONS(21),
  },
  [13] = {
    [anon_sym_LBRACE] = ACTIONS(79),
    [sym_comment] = ACTIONS(21),
  },
  [14] = {
    [anon_sym_EQ] = ACTIONS(81),
    [sym_comment] = ACTIONS(21),
  },
  [15] = {
    [sym_identifier] = ACTIONS(83),
    [sym_comment] = ACTIONS(21),
  },
  [16] = {
    [sym__expression] = STATE(20),
    [sym_assignment_expression] = STATE(20),
    [sym_mux_expression] = STATE(20),
    [sym_in_expression] = STATE(20),
    [sym_slice_expression] = STATE(20),
    [sym_unary_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [anon_sym_const] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [sym_number] = ACTIONS(37),
    [sym_comment] = ACTIONS(21),
  },
  [17] = {
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_EQ_EQ] = ACTIONS(39),
    [anon_sym_BANG_EQ] = ACTIONS(39),
    [anon_sym_GT_EQ] = ACTIONS(39),
    [anon_sym_LT_EQ] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_AMP_AMP] = ACTIONS(39),
    [anon_sym_PIPE_PIPE] = ACTIONS(39),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(43),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_PIPE] = ACTIONS(43),
    [anon_sym_CARET] = ACTIONS(39),
    [sym_comment] = ACTIONS(21),
  },
  [18] = {
    [anon_sym_COLON] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_in] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_EQ_EQ] = ACTIONS(91),
    [anon_sym_BANG_EQ] = ACTIONS(91),
    [anon_sym_GT_EQ] = ACTIONS(91),
    [anon_sym_LT_EQ] = ACTIONS(91),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_AMP_AMP] = ACTIONS(95),
    [anon_sym_PIPE_PIPE] = ACTIONS(97),
    [anon_sym_STAR] = ACTIONS(99),
    [anon_sym_SLASH] = ACTIONS(101),
    [anon_sym_AMP] = ACTIONS(103),
    [anon_sym_PIPE] = ACTIONS(105),
    [anon_sym_CARET] = ACTIONS(97),
    [sym_comment] = ACTIONS(21),
  },
  [19] = {
    [sym__expression] = STATE(18),
    [sym_assignment_expression] = STATE(18),
    [sym_mux_expression] = STATE(18),
    [sym_in_expression] = STATE(18),
    [sym_slice_expression] = STATE(18),
    [sym_unary_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [aux_sym_mux_expression_repeat1] = STATE(46),
    [anon_sym_const] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(107),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [sym_number] = ACTIONS(35),
    [sym_comment] = ACTIONS(21),
  },
  [20] = {
    [anon_sym_SEMI] = ACTIONS(109),
    [anon_sym_COLON] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_RBRACK] = ACTIONS(109),
    [anon_sym_in] = ACTIONS(109),
    [anon_sym_DOT_DOT] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_EQ_EQ] = ACTIONS(109),
    [anon_sym_BANG_EQ] = ACTIONS(109),
    [anon_sym_GT_EQ] = ACTIONS(109),
    [anon_sym_LT_EQ] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(111),
    [anon_sym_LT] = ACTIONS(111),
    [anon_sym_AMP_AMP] = ACTIONS(109),
    [anon_sym_PIPE_PIPE] = ACTIONS(109),
    [anon_sym_STAR] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(111),
    [anon_sym_AMP] = ACTIONS(111),
    [anon_sym_PIPE] = ACTIONS(111),
    [anon_sym_CARET] = ACTIONS(109),
    [sym_comment] = ACTIONS(21),
  },
  [21] = {
    [sym__expression] = STATE(47),
    [sym_assignment_expression] = STATE(47),
    [sym_mux_expression] = STATE(47),
    [sym_in_expression] = STATE(47),
    [sym_slice_expression] = STATE(47),
    [sym_unary_expression] = STATE(47),
    [sym_binary_expression] = STATE(47),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym_number] = ACTIONS(113),
    [sym_comment] = ACTIONS(21),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [anon_sym_wire] = ACTIONS(117),
    [anon_sym_register] = ACTIONS(117),
    [anon_sym_const] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_BANG] = ACTIONS(115),
    [anon_sym_TILDE] = ACTIONS(115),
    [anon_sym_DASH] = ACTIONS(115),
    [anon_sym_PLUS] = ACTIONS(115),
    [sym_identifier] = ACTIONS(117),
    [sym_number] = ACTIONS(115),
    [sym_comment] = ACTIONS(21),
  },
  [23] = {
    [sym__expression] = STATE(51),
    [sym_assignment_expression] = STATE(51),
    [sym_mux_expression] = STATE(51),
    [sym_in_expression] = STATE(51),
    [sym_slice_expression] = STATE(51),
    [sym_unary_expression] = STATE(51),
    [sym_binary_expression] = STATE(51),
    [anon_sym_const] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(121),
    [anon_sym_TILDE] = ACTIONS(121),
    [anon_sym_DASH] = ACTIONS(121),
    [anon_sym_PLUS] = ACTIONS(121),
    [sym_identifier] = ACTIONS(123),
    [sym_number] = ACTIONS(125),
    [sym_comment] = ACTIONS(21),
  },
  [24] = {
    [anon_sym_LBRACE] = ACTIONS(127),
    [sym_comment] = ACTIONS(21),
  },
  [25] = {
    [sym__expression] = STATE(53),
    [sym_assignment_expression] = STATE(53),
    [sym_mux_expression] = STATE(53),
    [sym_in_expression] = STATE(53),
    [sym_slice_expression] = STATE(53),
    [sym_unary_expression] = STATE(53),
    [sym_binary_expression] = STATE(53),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym_number] = ACTIONS(129),
    [sym_comment] = ACTIONS(21),
  },
  [26] = {
    [sym__expression] = STATE(54),
    [sym_assignment_expression] = STATE(54),
    [sym_mux_expression] = STATE(54),
    [sym_in_expression] = STATE(54),
    [sym_slice_expression] = STATE(54),
    [sym_unary_expression] = STATE(54),
    [sym_binary_expression] = STATE(54),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym_number] = ACTIONS(131),
    [sym_comment] = ACTIONS(21),
  },
  [27] = {
    [sym__expression] = STATE(55),
    [sym_assignment_expression] = STATE(55),
    [sym_mux_expression] = STATE(55),
    [sym_in_expression] = STATE(55),
    [sym_slice_expression] = STATE(55),
    [sym_unary_expression] = STATE(55),
    [sym_binary_expression] = STATE(55),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym_number] = ACTIONS(133),
    [sym_comment] = ACTIONS(21),
  },
  [28] = {
    [sym__expression] = STATE(56),
    [sym_assignment_expression] = STATE(56),
    [sym_mux_expression] = STATE(56),
    [sym_in_expression] = STATE(56),
    [sym_slice_expression] = STATE(56),
    [sym_unary_expression] = STATE(56),
    [sym_binary_expression] = STATE(56),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym_number] = ACTIONS(135),
    [sym_comment] = ACTIONS(21),
  },
  [29] = {
    [sym__expression] = STATE(57),
    [sym_assignment_expression] = STATE(57),
    [sym_mux_expression] = STATE(57),
    [sym_in_expression] = STATE(57),
    [sym_slice_expression] = STATE(57),
    [sym_unary_expression] = STATE(57),
    [sym_binary_expression] = STATE(57),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym_number] = ACTIONS(137),
    [sym_comment] = ACTIONS(21),
  },
  [30] = {
    [sym__statement] = STATE(30),
    [sym__declaration] = STATE(30),
    [sym_wire_declaration] = STATE(30),
    [sym_register_declaration] = STATE(30),
    [sym__expression] = STATE(9),
    [sym_assignment_expression] = STATE(9),
    [sym_mux_expression] = STATE(9),
    [sym_in_expression] = STATE(9),
    [sym_slice_expression] = STATE(9),
    [sym_unary_expression] = STATE(9),
    [sym_binary_expression] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(139),
    [anon_sym_wire] = ACTIONS(141),
    [anon_sym_register] = ACTIONS(144),
    [anon_sym_const] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(150),
    [anon_sym_BANG] = ACTIONS(153),
    [anon_sym_TILDE] = ACTIONS(153),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_PLUS] = ACTIONS(153),
    [sym_identifier] = ACTIONS(156),
    [sym_number] = ACTIONS(159),
    [sym_comment] = ACTIONS(21),
  },
  [31] = {
    [sym_number] = ACTIONS(162),
    [sym_comment] = ACTIONS(21),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(164),
    [anon_sym_wire] = ACTIONS(166),
    [anon_sym_register] = ACTIONS(166),
    [anon_sym_const] = ACTIONS(166),
    [anon_sym_LBRACK] = ACTIONS(164),
    [anon_sym_BANG] = ACTIONS(164),
    [anon_sym_TILDE] = ACTIONS(164),
    [anon_sym_DASH] = ACTIONS(164),
    [anon_sym_PLUS] = ACTIONS(164),
    [sym_identifier] = ACTIONS(166),
    [sym_number] = ACTIONS(164),
    [sym_comment] = ACTIONS(21),
  },
  [33] = {
    [sym_variable_declarator] = STATE(59),
    [sym_identifier] = ACTIONS(23),
    [sym_comment] = ACTIONS(21),
  },
  [34] = {
    [aux_sym_wire_declaration_repeat1] = STATE(61),
    [anon_sym_SEMI] = ACTIONS(168),
    [anon_sym_COMMA] = ACTIONS(77),
    [sym_comment] = ACTIONS(21),
  },
  [35] = {
    [sym_variable_declarator] = STATE(63),
    [sym__register_expression_statement] = STATE(64),
    [aux_sym_register_declaration_repeat1] = STATE(64),
    [anon_sym_RBRACE] = ACTIONS(170),
    [sym_identifier] = ACTIONS(23),
    [sym_comment] = ACTIONS(21),
  },
  [36] = {
    [sym__expression] = STATE(65),
    [sym_assignment_expression] = STATE(65),
    [sym_mux_expression] = STATE(65),
    [sym_in_expression] = STATE(65),
    [sym_slice_expression] = STATE(65),
    [sym_unary_expression] = STATE(65),
    [sym_binary_expression] = STATE(65),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym_number] = ACTIONS(172),
    [sym_comment] = ACTIONS(21),
  },
  [37] = {
    [anon_sym_EQ] = ACTIONS(174),
    [sym_comment] = ACTIONS(21),
  },
  [38] = {
    [sym__expression] = STATE(67),
    [sym_assignment_expression] = STATE(67),
    [sym_mux_expression] = STATE(67),
    [sym_in_expression] = STATE(67),
    [sym_slice_expression] = STATE(67),
    [sym_unary_expression] = STATE(67),
    [sym_binary_expression] = STATE(67),
    [anon_sym_const] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [sym_number] = ACTIONS(176),
    [sym_comment] = ACTIONS(21),
  },
  [39] = {
    [sym__expression] = STATE(68),
    [sym_assignment_expression] = STATE(68),
    [sym_mux_expression] = STATE(68),
    [sym_in_expression] = STATE(68),
    [sym_slice_expression] = STATE(68),
    [sym_unary_expression] = STATE(68),
    [sym_binary_expression] = STATE(68),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym_number] = ACTIONS(178),
    [sym_comment] = ACTIONS(21),
  },
  [40] = {
    [sym__expression] = STATE(69),
    [sym_assignment_expression] = STATE(69),
    [sym_mux_expression] = STATE(69),
    [sym_in_expression] = STATE(69),
    [sym_slice_expression] = STATE(69),
    [sym_unary_expression] = STATE(69),
    [sym_binary_expression] = STATE(69),
    [anon_sym_const] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [sym_number] = ACTIONS(180),
    [sym_comment] = ACTIONS(21),
  },
  [41] = {
    [sym__expression] = STATE(70),
    [sym_assignment_expression] = STATE(70),
    [sym_mux_expression] = STATE(70),
    [sym_in_expression] = STATE(70),
    [sym_slice_expression] = STATE(70),
    [sym_unary_expression] = STATE(70),
    [sym_binary_expression] = STATE(70),
    [anon_sym_const] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [sym_number] = ACTIONS(182),
    [sym_comment] = ACTIONS(21),
  },
  [42] = {
    [sym__expression] = STATE(71),
    [sym_assignment_expression] = STATE(71),
    [sym_mux_expression] = STATE(71),
    [sym_in_expression] = STATE(71),
    [sym_slice_expression] = STATE(71),
    [sym_unary_expression] = STATE(71),
    [sym_binary_expression] = STATE(71),
    [anon_sym_const] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [sym_number] = ACTIONS(184),
    [sym_comment] = ACTIONS(21),
  },
  [43] = {
    [sym__expression] = STATE(72),
    [sym_assignment_expression] = STATE(72),
    [sym_mux_expression] = STATE(72),
    [sym_in_expression] = STATE(72),
    [sym_slice_expression] = STATE(72),
    [sym_unary_expression] = STATE(72),
    [sym_binary_expression] = STATE(72),
    [anon_sym_const] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [sym_number] = ACTIONS(186),
    [sym_comment] = ACTIONS(21),
  },
  [44] = {
    [sym__expression] = STATE(57),
    [sym_assignment_expression] = STATE(57),
    [sym_mux_expression] = STATE(57),
    [sym_in_expression] = STATE(57),
    [sym_slice_expression] = STATE(57),
    [sym_unary_expression] = STATE(57),
    [sym_binary_expression] = STATE(57),
    [anon_sym_const] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [sym_number] = ACTIONS(137),
    [sym_comment] = ACTIONS(21),
  },
  [45] = {
    [anon_sym_SEMI] = ACTIONS(188),
    [anon_sym_COLON] = ACTIONS(188),
    [anon_sym_LBRACK] = ACTIONS(188),
    [anon_sym_RBRACK] = ACTIONS(188),
    [anon_sym_in] = ACTIONS(188),
    [anon_sym_DOT_DOT] = ACTIONS(188),
    [anon_sym_DASH] = ACTIONS(188),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_EQ_EQ] = ACTIONS(188),
    [anon_sym_BANG_EQ] = ACTIONS(188),
    [anon_sym_GT_EQ] = ACTIONS(188),
    [anon_sym_LT_EQ] = ACTIONS(188),
    [anon_sym_GT] = ACTIONS(190),
    [anon_sym_LT] = ACTIONS(190),
    [anon_sym_AMP_AMP] = ACTIONS(188),
    [anon_sym_PIPE_PIPE] = ACTIONS(188),
    [anon_sym_STAR] = ACTIONS(188),
    [anon_sym_SLASH] = ACTIONS(190),
    [anon_sym_AMP] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(190),
    [anon_sym_CARET] = ACTIONS(188),
    [sym_comment] = ACTIONS(21),
  },
  [46] = {
    [sym__expression] = STATE(18),
    [sym_assignment_expression] = STATE(18),
    [sym_mux_expression] = STATE(18),
    [sym_in_expression] = STATE(18),
    [sym_slice_expression] = STATE(18),
    [sym_unary_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [aux_sym_mux_expression_repeat1] = STATE(46),
    [anon_sym_const] = ACTIONS(192),
    [anon_sym_LBRACK] = ACTIONS(195),
    [anon_sym_RBRACK] = ACTIONS(198),
    [anon_sym_BANG] = ACTIONS(200),
    [anon_sym_TILDE] = ACTIONS(200),
    [anon_sym_DASH] = ACTIONS(200),
    [anon_sym_PLUS] = ACTIONS(200),
    [sym_identifier] = ACTIONS(203),
    [sym_number] = ACTIONS(206),
    [sym_comment] = ACTIONS(21),
  },
  [47] = {
    [anon_sym_SEMI] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_in] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(53),
    [anon_sym_EQ_EQ] = ACTIONS(55),
    [anon_sym_BANG_EQ] = ACTIONS(55),
    [anon_sym_GT_EQ] = ACTIONS(55),
    [anon_sym_LT_EQ] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_AMP_AMP] = ACTIONS(59),
    [anon_sym_PIPE_PIPE] = ACTIONS(61),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_AMP] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_CARET] = ACTIONS(61),
    [sym_comment] = ACTIONS(21),
  },
  [48] = {
    [sym_identifier] = ACTIONS(211),
    [sym_comment] = ACTIONS(21),
  },
  [49] = {
    [sym__expression] = STATE(20),
    [sym_assignment_expression] = STATE(20),
    [sym_mux_expression] = STATE(20),
    [sym_in_expression] = STATE(20),
    [sym_slice_expression] = STATE(20),
    [sym_unary_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [anon_sym_const] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(121),
    [anon_sym_TILDE] = ACTIONS(121),
    [anon_sym_DASH] = ACTIONS(121),
    [anon_sym_PLUS] = ACTIONS(121),
    [sym_identifier] = ACTIONS(123),
    [sym_number] = ACTIONS(37),
    [sym_comment] = ACTIONS(21),
  },
  [50] = {
    [anon_sym_EQ] = ACTIONS(213),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_EQ_EQ] = ACTIONS(39),
    [anon_sym_BANG_EQ] = ACTIONS(39),
    [anon_sym_GT_EQ] = ACTIONS(39),
    [anon_sym_LT_EQ] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_AMP_AMP] = ACTIONS(39),
    [anon_sym_PIPE_PIPE] = ACTIONS(39),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(43),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_PIPE] = ACTIONS(43),
    [anon_sym_CARET] = ACTIONS(39),
    [sym_comment] = ACTIONS(21),
  },
  [51] = {
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_in] = ACTIONS(51),
    [anon_sym_DOT_DOT] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_PLUS] = ACTIONS(217),
    [anon_sym_EQ_EQ] = ACTIONS(219),
    [anon_sym_BANG_EQ] = ACTIONS(219),
    [anon_sym_GT_EQ] = ACTIONS(219),
    [anon_sym_LT_EQ] = ACTIONS(219),
    [anon_sym_GT] = ACTIONS(221),
    [anon_sym_LT] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(223),
    [anon_sym_PIPE_PIPE] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(227),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(231),
    [anon_sym_PIPE] = ACTIONS(233),
    [anon_sym_CARET] = ACTIONS(225),
    [sym_comment] = ACTIONS(21),
  },
  [52] = {
    [anon_sym_RBRACE] = ACTIONS(235),
    [sym_identifier] = ACTIONS(237),
    [sym_comment] = ACTIONS(21),
  },
  [53] = {
    [anon_sym_SEMI] = ACTIONS(239),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_in] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(239),
    [anon_sym_PLUS] = ACTIONS(239),
    [anon_sym_EQ_EQ] = ACTIONS(55),
    [anon_sym_BANG_EQ] = ACTIONS(55),
    [anon_sym_GT_EQ] = ACTIONS(55),
    [anon_sym_LT_EQ] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_AMP_AMP] = ACTIONS(239),
    [anon_sym_PIPE_PIPE] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_AMP] = ACTIONS(241),
    [anon_sym_PIPE] = ACTIONS(241),
    [anon_sym_CARET] = ACTIONS(239),
    [sym_comment] = ACTIONS(21),
  },
  [54] = {
    [anon_sym_SEMI] = ACTIONS(239),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_in] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(239),
    [anon_sym_PLUS] = ACTIONS(239),
    [anon_sym_EQ_EQ] = ACTIONS(239),
    [anon_sym_BANG_EQ] = ACTIONS(239),
    [anon_sym_GT_EQ] = ACTIONS(239),
    [anon_sym_LT_EQ] = ACTIONS(239),
    [anon_sym_GT] = ACTIONS(241),
    [anon_sym_LT] = ACTIONS(241),
    [anon_sym_AMP_AMP] = ACTIONS(239),
    [anon_sym_PIPE_PIPE] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_AMP] = ACTIONS(241),
    [anon_sym_PIPE] = ACTIONS(241),
    [anon_sym_CARET] = ACTIONS(239),
    [sym_comment] = ACTIONS(21),
  },
  [55] = {
    [anon_sym_SEMI] = ACTIONS(239),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_in] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(53),
    [anon_sym_EQ_EQ] = ACTIONS(55),
    [anon_sym_BANG_EQ] = ACTIONS(55),
    [anon_sym_GT_EQ] = ACTIONS(55),
    [anon_sym_LT_EQ] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_AMP_AMP] = ACTIONS(239),
    [anon_sym_PIPE_PIPE] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_AMP] = ACTIONS(241),
    [anon_sym_PIPE] = ACTIONS(241),
    [anon_sym_CARET] = ACTIONS(239),
    [sym_comment] = ACTIONS(21),
  },
  [56] = {
    [anon_sym_SEMI] = ACTIONS(239),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_in] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(53),
    [anon_sym_EQ_EQ] = ACTIONS(55),
    [anon_sym_BANG_EQ] = ACTIONS(55),
    [anon_sym_GT_EQ] = ACTIONS(55),
    [anon_sym_LT_EQ] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_AMP_AMP] = ACTIONS(59),
    [anon_sym_PIPE_PIPE] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_AMP] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(241),
    [anon_sym_CARET] = ACTIONS(239),
    [sym_comment] = ACTIONS(21),
  },
  [57] = {
    [anon_sym_SEMI] = ACTIONS(239),
    [anon_sym_COLON] = ACTIONS(239),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_RBRACK] = ACTIONS(239),
    [anon_sym_in] = ACTIONS(239),
    [anon_sym_DOT_DOT] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(239),
    [anon_sym_PLUS] = ACTIONS(239),
    [anon_sym_EQ_EQ] = ACTIONS(239),
    [anon_sym_BANG_EQ] = ACTIONS(239),
    [anon_sym_GT_EQ] = ACTIONS(239),
    [anon_sym_LT_EQ] = ACTIONS(239),
    [anon_sym_GT] = ACTIONS(241),
    [anon_sym_LT] = ACTIONS(241),
    [anon_sym_AMP_AMP] = ACTIONS(239),
    [anon_sym_PIPE_PIPE] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(239),
    [anon_sym_SLASH] = ACTIONS(241),
    [anon_sym_AMP] = ACTIONS(241),
    [anon_sym_PIPE] = ACTIONS(241),
    [anon_sym_CARET] = ACTIONS(239),
    [sym_comment] = ACTIONS(21),
  },
  [58] = {
    [anon_sym_SEMI] = ACTIONS(243),
    [anon_sym_COMMA] = ACTIONS(243),
    [anon_sym_EQ] = ACTIONS(243),
    [sym_comment] = ACTIONS(21),
  },
  [59] = {
    [anon_sym_SEMI] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(245),
    [sym_comment] = ACTIONS(21),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(247),
    [anon_sym_wire] = ACTIONS(249),
    [anon_sym_register] = ACTIONS(249),
    [anon_sym_const] = ACTIONS(249),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_BANG] = ACTIONS(247),
    [anon_sym_TILDE] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(247),
    [anon_sym_PLUS] = ACTIONS(247),
    [sym_identifier] = ACTIONS(249),
    [sym_number] = ACTIONS(247),
    [sym_comment] = ACTIONS(21),
  },
  [61] = {
    [aux_sym_wire_declaration_repeat1] = STATE(61),
    [anon_sym_SEMI] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(251),
    [sym_comment] = ACTIONS(21),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(254),
    [anon_sym_wire] = ACTIONS(256),
    [anon_sym_register] = ACTIONS(256),
    [anon_sym_const] = ACTIONS(256),
    [anon_sym_LBRACK] = ACTIONS(254),
    [anon_sym_BANG] = ACTIONS(254),
    [anon_sym_TILDE] = ACTIONS(254),
    [anon_sym_DASH] = ACTIONS(254),
    [anon_sym_PLUS] = ACTIONS(254),
    [sym_identifier] = ACTIONS(256),
    [sym_number] = ACTIONS(254),
    [sym_comment] = ACTIONS(21),
  },
  [63] = {
    [anon_sym_EQ] = ACTIONS(258),
    [sym_comment] = ACTIONS(21),
  },
  [64] = {
    [sym_variable_declarator] = STATE(63),
    [sym__register_expression_statement] = STATE(85),
    [aux_sym_register_declaration_repeat1] = STATE(85),
    [anon_sym_RBRACE] = ACTIONS(260),
    [sym_identifier] = ACTIONS(23),
    [sym_comment] = ACTIONS(21),
  },
  [65] = {
    [anon_sym_SEMI] = ACTIONS(262),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_in] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(53),
    [anon_sym_EQ_EQ] = ACTIONS(55),
    [anon_sym_BANG_EQ] = ACTIONS(55),
    [anon_sym_GT_EQ] = ACTIONS(55),
    [anon_sym_LT_EQ] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_AMP_AMP] = ACTIONS(59),
    [anon_sym_PIPE_PIPE] = ACTIONS(61),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_AMP] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_CARET] = ACTIONS(61),
    [sym_comment] = ACTIONS(21),
  },
  [66] = {
    [sym__expression] = STATE(86),
    [sym_assignment_expression] = STATE(86),
    [sym_mux_expression] = STATE(86),
    [sym_in_expression] = STATE(86),
    [sym_slice_expression] = STATE(86),
    [sym_unary_expression] = STATE(86),
    [sym_binary_expression] = STATE(86),
    [anon_sym_const] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [sym_number] = ACTIONS(264),
    [sym_comment] = ACTIONS(21),
  },
  [67] = {
    [anon_sym_COLON] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_in] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_EQ_EQ] = ACTIONS(91),
    [anon_sym_BANG_EQ] = ACTIONS(91),
    [anon_sym_GT_EQ] = ACTIONS(91),
    [anon_sym_LT_EQ] = ACTIONS(91),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_AMP_AMP] = ACTIONS(95),
    [anon_sym_PIPE_PIPE] = ACTIONS(97),
    [anon_sym_STAR] = ACTIONS(99),
    [anon_sym_SLASH] = ACTIONS(101),
    [anon_sym_AMP] = ACTIONS(103),
    [anon_sym_PIPE] = ACTIONS(105),
    [anon_sym_CARET] = ACTIONS(97),
    [sym_comment] = ACTIONS(21),
  },
  [68] = {
    [anon_sym_SEMI] = ACTIONS(266),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_in] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(53),
    [anon_sym_EQ_EQ] = ACTIONS(55),
    [anon_sym_BANG_EQ] = ACTIONS(55),
    [anon_sym_GT_EQ] = ACTIONS(55),
    [anon_sym_LT_EQ] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_AMP_AMP] = ACTIONS(59),
    [anon_sym_PIPE_PIPE] = ACTIONS(61),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_AMP] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_CARET] = ACTIONS(61),
    [sym_comment] = ACTIONS(21),
  },
  [69] = {
    [anon_sym_COLON] = ACTIONS(239),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_in] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(239),
    [anon_sym_PLUS] = ACTIONS(239),
    [anon_sym_EQ_EQ] = ACTIONS(91),
    [anon_sym_BANG_EQ] = ACTIONS(91),
    [anon_sym_GT_EQ] = ACTIONS(91),
    [anon_sym_LT_EQ] = ACTIONS(91),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_AMP_AMP] = ACTIONS(239),
    [anon_sym_PIPE_PIPE] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(99),
    [anon_sym_SLASH] = ACTIONS(101),
    [anon_sym_AMP] = ACTIONS(241),
    [anon_sym_PIPE] = ACTIONS(241),
    [anon_sym_CARET] = ACTIONS(239),
    [sym_comment] = ACTIONS(21),
  },
  [70] = {
    [anon_sym_COLON] = ACTIONS(239),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_in] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(239),
    [anon_sym_PLUS] = ACTIONS(239),
    [anon_sym_EQ_EQ] = ACTIONS(239),
    [anon_sym_BANG_EQ] = ACTIONS(239),
    [anon_sym_GT_EQ] = ACTIONS(239),
    [anon_sym_LT_EQ] = ACTIONS(239),
    [anon_sym_GT] = ACTIONS(241),
    [anon_sym_LT] = ACTIONS(241),
    [anon_sym_AMP_AMP] = ACTIONS(239),
    [anon_sym_PIPE_PIPE] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(99),
    [anon_sym_SLASH] = ACTIONS(101),
    [anon_sym_AMP] = ACTIONS(241),
    [anon_sym_PIPE] = ACTIONS(241),
    [anon_sym_CARET] = ACTIONS(239),
    [sym_comment] = ACTIONS(21),
  },
  [71] = {
    [anon_sym_COLON] = ACTIONS(239),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_in] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_EQ_EQ] = ACTIONS(91),
    [anon_sym_BANG_EQ] = ACTIONS(91),
    [anon_sym_GT_EQ] = ACTIONS(91),
    [anon_sym_LT_EQ] = ACTIONS(91),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_AMP_AMP] = ACTIONS(239),
    [anon_sym_PIPE_PIPE] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(99),
    [anon_sym_SLASH] = ACTIONS(101),
    [anon_sym_AMP] = ACTIONS(241),
    [anon_sym_PIPE] = ACTIONS(241),
    [anon_sym_CARET] = ACTIONS(239),
    [sym_comment] = ACTIONS(21),
  },
  [72] = {
    [anon_sym_COLON] = ACTIONS(239),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_in] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_EQ_EQ] = ACTIONS(91),
    [anon_sym_BANG_EQ] = ACTIONS(91),
    [anon_sym_GT_EQ] = ACTIONS(91),
    [anon_sym_LT_EQ] = ACTIONS(91),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_AMP_AMP] = ACTIONS(95),
    [anon_sym_PIPE_PIPE] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(99),
    [anon_sym_SLASH] = ACTIONS(101),
    [anon_sym_AMP] = ACTIONS(103),
    [anon_sym_PIPE] = ACTIONS(241),
    [anon_sym_CARET] = ACTIONS(239),
    [sym_comment] = ACTIONS(21),
  },
  [73] = {
    [anon_sym_EQ] = ACTIONS(268),
    [sym_comment] = ACTIONS(21),
  },
  [74] = {
    [sym__expression] = STATE(89),
    [sym_assignment_expression] = STATE(89),
    [sym_mux_expression] = STATE(89),
    [sym_in_expression] = STATE(89),
    [sym_slice_expression] = STATE(89),
    [sym_unary_expression] = STATE(89),
    [sym_binary_expression] = STATE(89),
    [anon_sym_const] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(121),
    [anon_sym_TILDE] = ACTIONS(121),
    [anon_sym_DASH] = ACTIONS(121),
    [anon_sym_PLUS] = ACTIONS(121),
    [sym_identifier] = ACTIONS(123),
    [sym_number] = ACTIONS(270),
    [sym_comment] = ACTIONS(21),
  },
  [75] = {
    [sym__expression] = STATE(93),
    [sym_assignment_expression] = STATE(93),
    [sym_mux_expression] = STATE(93),
    [sym_in_expression] = STATE(93),
    [sym_slice_expression] = STATE(93),
    [sym_unary_expression] = STATE(93),
    [sym_binary_expression] = STATE(93),
    [anon_sym_const] = ACTIONS(272),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(274),
    [anon_sym_TILDE] = ACTIONS(274),
    [anon_sym_DASH] = ACTIONS(274),
    [anon_sym_PLUS] = ACTIONS(274),
    [sym_identifier] = ACTIONS(276),
    [sym_number] = ACTIONS(278),
    [sym_comment] = ACTIONS(21),
  },
  [76] = {
    [sym__expression] = STATE(94),
    [sym_assignment_expression] = STATE(94),
    [sym_mux_expression] = STATE(94),
    [sym_in_expression] = STATE(94),
    [sym_slice_expression] = STATE(94),
    [sym_unary_expression] = STATE(94),
    [sym_binary_expression] = STATE(94),
    [anon_sym_const] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(121),
    [anon_sym_TILDE] = ACTIONS(121),
    [anon_sym_DASH] = ACTIONS(121),
    [anon_sym_PLUS] = ACTIONS(121),
    [sym_identifier] = ACTIONS(123),
    [sym_number] = ACTIONS(280),
    [sym_comment] = ACTIONS(21),
  },
  [77] = {
    [sym__expression] = STATE(95),
    [sym_assignment_expression] = STATE(95),
    [sym_mux_expression] = STATE(95),
    [sym_in_expression] = STATE(95),
    [sym_slice_expression] = STATE(95),
    [sym_unary_expression] = STATE(95),
    [sym_binary_expression] = STATE(95),
    [anon_sym_const] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(121),
    [anon_sym_TILDE] = ACTIONS(121),
    [anon_sym_DASH] = ACTIONS(121),
    [anon_sym_PLUS] = ACTIONS(121),
    [sym_identifier] = ACTIONS(123),
    [sym_number] = ACTIONS(282),
    [sym_comment] = ACTIONS(21),
  },
  [78] = {
    [sym__expression] = STATE(96),
    [sym_assignment_expression] = STATE(96),
    [sym_mux_expression] = STATE(96),
    [sym_in_expression] = STATE(96),
    [sym_slice_expression] = STATE(96),
    [sym_unary_expression] = STATE(96),
    [sym_binary_expression] = STATE(96),
    [anon_sym_const] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(121),
    [anon_sym_TILDE] = ACTIONS(121),
    [anon_sym_DASH] = ACTIONS(121),
    [anon_sym_PLUS] = ACTIONS(121),
    [sym_identifier] = ACTIONS(123),
    [sym_number] = ACTIONS(284),
    [sym_comment] = ACTIONS(21),
  },
  [79] = {
    [sym__expression] = STATE(97),
    [sym_assignment_expression] = STATE(97),
    [sym_mux_expression] = STATE(97),
    [sym_in_expression] = STATE(97),
    [sym_slice_expression] = STATE(97),
    [sym_unary_expression] = STATE(97),
    [sym_binary_expression] = STATE(97),
    [anon_sym_const] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(121),
    [anon_sym_TILDE] = ACTIONS(121),
    [anon_sym_DASH] = ACTIONS(121),
    [anon_sym_PLUS] = ACTIONS(121),
    [sym_identifier] = ACTIONS(123),
    [sym_number] = ACTIONS(286),
    [sym_comment] = ACTIONS(21),
  },
  [80] = {
    [sym__expression] = STATE(57),
    [sym_assignment_expression] = STATE(57),
    [sym_mux_expression] = STATE(57),
    [sym_in_expression] = STATE(57),
    [sym_slice_expression] = STATE(57),
    [sym_unary_expression] = STATE(57),
    [sym_binary_expression] = STATE(57),
    [anon_sym_const] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(121),
    [anon_sym_TILDE] = ACTIONS(121),
    [anon_sym_DASH] = ACTIONS(121),
    [anon_sym_PLUS] = ACTIONS(121),
    [sym_identifier] = ACTIONS(123),
    [sym_number] = ACTIONS(137),
    [sym_comment] = ACTIONS(21),
  },
  [81] = {
    [anon_sym_SEMI] = ACTIONS(288),
    [anon_sym_COLON] = ACTIONS(288),
    [anon_sym_LBRACK] = ACTIONS(288),
    [anon_sym_RBRACK] = ACTIONS(288),
    [anon_sym_in] = ACTIONS(288),
    [anon_sym_DOT_DOT] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_EQ_EQ] = ACTIONS(288),
    [anon_sym_BANG_EQ] = ACTIONS(288),
    [anon_sym_GT_EQ] = ACTIONS(288),
    [anon_sym_LT_EQ] = ACTIONS(288),
    [anon_sym_GT] = ACTIONS(290),
    [anon_sym_LT] = ACTIONS(290),
    [anon_sym_AMP_AMP] = ACTIONS(288),
    [anon_sym_PIPE_PIPE] = ACTIONS(288),
    [anon_sym_STAR] = ACTIONS(288),
    [anon_sym_SLASH] = ACTIONS(290),
    [anon_sym_AMP] = ACTIONS(290),
    [anon_sym_PIPE] = ACTIONS(290),
    [anon_sym_CARET] = ACTIONS(288),
    [sym_comment] = ACTIONS(21),
  },
  [82] = {
    [aux_sym_in_expression_repeat1] = STATE(100),
    [anon_sym_COMMA] = ACTIONS(292),
    [anon_sym_RBRACE] = ACTIONS(294),
    [sym_comment] = ACTIONS(21),
  },
  [83] = {
    [sym__expression] = STATE(101),
    [sym_assignment_expression] = STATE(101),
    [sym_mux_expression] = STATE(101),
    [sym_in_expression] = STATE(101),
    [sym_slice_expression] = STATE(101),
    [sym_unary_expression] = STATE(101),
    [sym_binary_expression] = STATE(101),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym_number] = ACTIONS(296),
    [sym_comment] = ACTIONS(21),
  },
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(298),
    [anon_sym_wire] = ACTIONS(300),
    [anon_sym_register] = ACTIONS(300),
    [anon_sym_const] = ACTIONS(300),
    [anon_sym_LBRACK] = ACTIONS(298),
    [anon_sym_BANG] = ACTIONS(298),
    [anon_sym_TILDE] = ACTIONS(298),
    [anon_sym_DASH] = ACTIONS(298),
    [anon_sym_PLUS] = ACTIONS(298),
    [sym_identifier] = ACTIONS(300),
    [sym_number] = ACTIONS(298),
    [sym_comment] = ACTIONS(21),
  },
  [85] = {
    [sym_variable_declarator] = STATE(63),
    [sym__register_expression_statement] = STATE(85),
    [aux_sym_register_declaration_repeat1] = STATE(85),
    [anon_sym_RBRACE] = ACTIONS(302),
    [sym_identifier] = ACTIONS(304),
    [sym_comment] = ACTIONS(21),
  },
  [86] = {
    [anon_sym_COLON] = ACTIONS(262),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_in] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_EQ_EQ] = ACTIONS(91),
    [anon_sym_BANG_EQ] = ACTIONS(91),
    [anon_sym_GT_EQ] = ACTIONS(91),
    [anon_sym_LT_EQ] = ACTIONS(91),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_AMP_AMP] = ACTIONS(95),
    [anon_sym_PIPE_PIPE] = ACTIONS(97),
    [anon_sym_STAR] = ACTIONS(99),
    [anon_sym_SLASH] = ACTIONS(101),
    [anon_sym_AMP] = ACTIONS(103),
    [anon_sym_PIPE] = ACTIONS(105),
    [anon_sym_CARET] = ACTIONS(97),
    [sym_comment] = ACTIONS(21),
  },
  [87] = {
    [anon_sym_const] = ACTIONS(307),
    [anon_sym_LBRACK] = ACTIONS(309),
    [anon_sym_RBRACK] = ACTIONS(309),
    [anon_sym_BANG] = ACTIONS(309),
    [anon_sym_TILDE] = ACTIONS(309),
    [anon_sym_DASH] = ACTIONS(309),
    [anon_sym_PLUS] = ACTIONS(309),
    [sym_identifier] = ACTIONS(307),
    [sym_number] = ACTIONS(309),
    [sym_comment] = ACTIONS(21),
  },
  [88] = {
    [sym__expression] = STATE(102),
    [sym_assignment_expression] = STATE(102),
    [sym_mux_expression] = STATE(102),
    [sym_in_expression] = STATE(102),
    [sym_slice_expression] = STATE(102),
    [sym_unary_expression] = STATE(102),
    [sym_binary_expression] = STATE(102),
    [anon_sym_const] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(121),
    [anon_sym_TILDE] = ACTIONS(121),
    [anon_sym_DASH] = ACTIONS(121),
    [anon_sym_PLUS] = ACTIONS(121),
    [sym_identifier] = ACTIONS(123),
    [sym_number] = ACTIONS(311),
    [sym_comment] = ACTIONS(21),
  },
  [89] = {
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_in] = ACTIONS(51),
    [anon_sym_DOT_DOT] = ACTIONS(209),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_PLUS] = ACTIONS(217),
    [anon_sym_EQ_EQ] = ACTIONS(219),
    [anon_sym_BANG_EQ] = ACTIONS(219),
    [anon_sym_GT_EQ] = ACTIONS(219),
    [anon_sym_LT_EQ] = ACTIONS(219),
    [anon_sym_GT] = ACTIONS(221),
    [anon_sym_LT] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(223),
    [anon_sym_PIPE_PIPE] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(227),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(231),
    [anon_sym_PIPE] = ACTIONS(233),
    [anon_sym_CARET] = ACTIONS(225),
    [sym_comment] = ACTIONS(21),
  },
  [90] = {
    [sym_identifier] = ACTIONS(313),
    [sym_comment] = ACTIONS(21),
  },
  [91] = {
    [sym__expression] = STATE(20),
    [sym_assignment_expression] = STATE(20),
    [sym_mux_expression] = STATE(20),
    [sym_in_expression] = STATE(20),
    [sym_slice_expression] = STATE(20),
    [sym_unary_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [anon_sym_const] = ACTIONS(272),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(274),
    [anon_sym_TILDE] = ACTIONS(274),
    [anon_sym_DASH] = ACTIONS(274),
    [anon_sym_PLUS] = ACTIONS(274),
    [sym_identifier] = ACTIONS(276),
    [sym_number] = ACTIONS(37),
    [sym_comment] = ACTIONS(21),
  },
  [92] = {
    [anon_sym_EQ] = ACTIONS(315),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_RBRACK] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_EQ_EQ] = ACTIONS(39),
    [anon_sym_BANG_EQ] = ACTIONS(39),
    [anon_sym_GT_EQ] = ACTIONS(39),
    [anon_sym_LT_EQ] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_AMP_AMP] = ACTIONS(39),
    [anon_sym_PIPE_PIPE] = ACTIONS(39),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(43),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_PIPE] = ACTIONS(43),
    [anon_sym_CARET] = ACTIONS(39),
    [sym_comment] = ACTIONS(21),
  },
  [93] = {
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_RBRACK] = ACTIONS(317),
    [anon_sym_in] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(319),
    [anon_sym_PLUS] = ACTIONS(319),
    [anon_sym_EQ_EQ] = ACTIONS(321),
    [anon_sym_BANG_EQ] = ACTIONS(321),
    [anon_sym_GT_EQ] = ACTIONS(321),
    [anon_sym_LT_EQ] = ACTIONS(321),
    [anon_sym_GT] = ACTIONS(323),
    [anon_sym_LT] = ACTIONS(323),
    [anon_sym_AMP_AMP] = ACTIONS(325),
    [anon_sym_PIPE_PIPE] = ACTIONS(327),
    [anon_sym_STAR] = ACTIONS(329),
    [anon_sym_SLASH] = ACTIONS(331),
    [anon_sym_AMP] = ACTIONS(333),
    [anon_sym_PIPE] = ACTIONS(335),
    [anon_sym_CARET] = ACTIONS(327),
    [sym_comment] = ACTIONS(21),
  },
  [94] = {
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_in] = ACTIONS(239),
    [anon_sym_DOT_DOT] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(239),
    [anon_sym_PLUS] = ACTIONS(239),
    [anon_sym_EQ_EQ] = ACTIONS(219),
    [anon_sym_BANG_EQ] = ACTIONS(219),
    [anon_sym_GT_EQ] = ACTIONS(219),
    [anon_sym_LT_EQ] = ACTIONS(219),
    [anon_sym_GT] = ACTIONS(221),
    [anon_sym_LT] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(239),
    [anon_sym_PIPE_PIPE] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(227),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(241),
    [anon_sym_PIPE] = ACTIONS(241),
    [anon_sym_CARET] = ACTIONS(239),
    [sym_comment] = ACTIONS(21),
  },
  [95] = {
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_in] = ACTIONS(239),
    [anon_sym_DOT_DOT] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(239),
    [anon_sym_PLUS] = ACTIONS(239),
    [anon_sym_EQ_EQ] = ACTIONS(239),
    [anon_sym_BANG_EQ] = ACTIONS(239),
    [anon_sym_GT_EQ] = ACTIONS(239),
    [anon_sym_LT_EQ] = ACTIONS(239),
    [anon_sym_GT] = ACTIONS(241),
    [anon_sym_LT] = ACTIONS(241),
    [anon_sym_AMP_AMP] = ACTIONS(239),
    [anon_sym_PIPE_PIPE] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(227),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(241),
    [anon_sym_PIPE] = ACTIONS(241),
    [anon_sym_CARET] = ACTIONS(239),
    [sym_comment] = ACTIONS(21),
  },
  [96] = {
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_in] = ACTIONS(239),
    [anon_sym_DOT_DOT] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_PLUS] = ACTIONS(217),
    [anon_sym_EQ_EQ] = ACTIONS(219),
    [anon_sym_BANG_EQ] = ACTIONS(219),
    [anon_sym_GT_EQ] = ACTIONS(219),
    [anon_sym_LT_EQ] = ACTIONS(219),
    [anon_sym_GT] = ACTIONS(221),
    [anon_sym_LT] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(239),
    [anon_sym_PIPE_PIPE] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(227),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(241),
    [anon_sym_PIPE] = ACTIONS(241),
    [anon_sym_CARET] = ACTIONS(239),
    [sym_comment] = ACTIONS(21),
  },
  [97] = {
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_in] = ACTIONS(239),
    [anon_sym_DOT_DOT] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_PLUS] = ACTIONS(217),
    [anon_sym_EQ_EQ] = ACTIONS(219),
    [anon_sym_BANG_EQ] = ACTIONS(219),
    [anon_sym_GT_EQ] = ACTIONS(219),
    [anon_sym_LT_EQ] = ACTIONS(219),
    [anon_sym_GT] = ACTIONS(221),
    [anon_sym_LT] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(223),
    [anon_sym_PIPE_PIPE] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(227),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(231),
    [anon_sym_PIPE] = ACTIONS(241),
    [anon_sym_CARET] = ACTIONS(239),
    [sym_comment] = ACTIONS(21),
  },
  [98] = {
    [sym_identifier] = ACTIONS(337),
    [sym_comment] = ACTIONS(21),
  },
  [99] = {
    [anon_sym_SEMI] = ACTIONS(339),
    [anon_sym_COLON] = ACTIONS(339),
    [anon_sym_LBRACK] = ACTIONS(339),
    [anon_sym_RBRACK] = ACTIONS(339),
    [anon_sym_in] = ACTIONS(339),
    [anon_sym_DOT_DOT] = ACTIONS(339),
    [anon_sym_DASH] = ACTIONS(339),
    [anon_sym_PLUS] = ACTIONS(339),
    [anon_sym_EQ_EQ] = ACTIONS(339),
    [anon_sym_BANG_EQ] = ACTIONS(339),
    [anon_sym_GT_EQ] = ACTIONS(339),
    [anon_sym_LT_EQ] = ACTIONS(339),
    [anon_sym_GT] = ACTIONS(341),
    [anon_sym_LT] = ACTIONS(341),
    [anon_sym_AMP_AMP] = ACTIONS(339),
    [anon_sym_PIPE_PIPE] = ACTIONS(339),
    [anon_sym_STAR] = ACTIONS(339),
    [anon_sym_SLASH] = ACTIONS(341),
    [anon_sym_AMP] = ACTIONS(341),
    [anon_sym_PIPE] = ACTIONS(341),
    [anon_sym_CARET] = ACTIONS(339),
    [sym_comment] = ACTIONS(21),
  },
  [100] = {
    [aux_sym_in_expression_repeat1] = STATE(113),
    [anon_sym_COMMA] = ACTIONS(292),
    [anon_sym_RBRACE] = ACTIONS(343),
    [sym_comment] = ACTIONS(21),
  },
  [101] = {
    [anon_sym_SEMI] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_in] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(53),
    [anon_sym_EQ_EQ] = ACTIONS(55),
    [anon_sym_BANG_EQ] = ACTIONS(55),
    [anon_sym_GT_EQ] = ACTIONS(55),
    [anon_sym_LT_EQ] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_AMP_AMP] = ACTIONS(59),
    [anon_sym_PIPE_PIPE] = ACTIONS(61),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_AMP] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_CARET] = ACTIONS(61),
    [sym_comment] = ACTIONS(21),
  },
  [102] = {
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_in] = ACTIONS(51),
    [anon_sym_DOT_DOT] = ACTIONS(262),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_PLUS] = ACTIONS(217),
    [anon_sym_EQ_EQ] = ACTIONS(219),
    [anon_sym_BANG_EQ] = ACTIONS(219),
    [anon_sym_GT_EQ] = ACTIONS(219),
    [anon_sym_LT_EQ] = ACTIONS(219),
    [anon_sym_GT] = ACTIONS(221),
    [anon_sym_LT] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(223),
    [anon_sym_PIPE_PIPE] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(227),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(231),
    [anon_sym_PIPE] = ACTIONS(233),
    [anon_sym_CARET] = ACTIONS(225),
    [sym_comment] = ACTIONS(21),
  },
  [103] = {
    [anon_sym_EQ] = ACTIONS(347),
    [sym_comment] = ACTIONS(21),
  },
  [104] = {
    [sym__expression] = STATE(116),
    [sym_assignment_expression] = STATE(116),
    [sym_mux_expression] = STATE(116),
    [sym_in_expression] = STATE(116),
    [sym_slice_expression] = STATE(116),
    [sym_unary_expression] = STATE(116),
    [sym_binary_expression] = STATE(116),
    [anon_sym_const] = ACTIONS(272),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(274),
    [anon_sym_TILDE] = ACTIONS(274),
    [anon_sym_DASH] = ACTIONS(274),
    [anon_sym_PLUS] = ACTIONS(274),
    [sym_identifier] = ACTIONS(276),
    [sym_number] = ACTIONS(349),
    [sym_comment] = ACTIONS(21),
  },
  [105] = {
    [anon_sym_SEMI] = ACTIONS(351),
    [anon_sym_COLON] = ACTIONS(351),
    [anon_sym_LBRACK] = ACTIONS(351),
    [anon_sym_RBRACK] = ACTIONS(351),
    [anon_sym_in] = ACTIONS(351),
    [anon_sym_DOT_DOT] = ACTIONS(351),
    [anon_sym_DASH] = ACTIONS(351),
    [anon_sym_PLUS] = ACTIONS(351),
    [anon_sym_EQ_EQ] = ACTIONS(351),
    [anon_sym_BANG_EQ] = ACTIONS(351),
    [anon_sym_GT_EQ] = ACTIONS(351),
    [anon_sym_LT_EQ] = ACTIONS(351),
    [anon_sym_GT] = ACTIONS(353),
    [anon_sym_LT] = ACTIONS(353),
    [anon_sym_AMP_AMP] = ACTIONS(351),
    [anon_sym_PIPE_PIPE] = ACTIONS(351),
    [anon_sym_STAR] = ACTIONS(351),
    [anon_sym_SLASH] = ACTIONS(353),
    [anon_sym_AMP] = ACTIONS(353),
    [anon_sym_PIPE] = ACTIONS(353),
    [anon_sym_CARET] = ACTIONS(351),
    [sym_comment] = ACTIONS(21),
  },
  [106] = {
    [sym__expression] = STATE(117),
    [sym_assignment_expression] = STATE(117),
    [sym_mux_expression] = STATE(117),
    [sym_in_expression] = STATE(117),
    [sym_slice_expression] = STATE(117),
    [sym_unary_expression] = STATE(117),
    [sym_binary_expression] = STATE(117),
    [anon_sym_const] = ACTIONS(272),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(274),
    [anon_sym_TILDE] = ACTIONS(274),
    [anon_sym_DASH] = ACTIONS(274),
    [anon_sym_PLUS] = ACTIONS(274),
    [sym_identifier] = ACTIONS(276),
    [sym_number] = ACTIONS(355),
    [sym_comment] = ACTIONS(21),
  },
  [107] = {
    [sym__expression] = STATE(118),
    [sym_assignment_expression] = STATE(118),
    [sym_mux_expression] = STATE(118),
    [sym_in_expression] = STATE(118),
    [sym_slice_expression] = STATE(118),
    [sym_unary_expression] = STATE(118),
    [sym_binary_expression] = STATE(118),
    [anon_sym_const] = ACTIONS(272),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(274),
    [anon_sym_TILDE] = ACTIONS(274),
    [anon_sym_DASH] = ACTIONS(274),
    [anon_sym_PLUS] = ACTIONS(274),
    [sym_identifier] = ACTIONS(276),
    [sym_number] = ACTIONS(357),
    [sym_comment] = ACTIONS(21),
  },
  [108] = {
    [sym__expression] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_mux_expression] = STATE(119),
    [sym_in_expression] = STATE(119),
    [sym_slice_expression] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [anon_sym_const] = ACTIONS(272),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(274),
    [anon_sym_TILDE] = ACTIONS(274),
    [anon_sym_DASH] = ACTIONS(274),
    [anon_sym_PLUS] = ACTIONS(274),
    [sym_identifier] = ACTIONS(276),
    [sym_number] = ACTIONS(359),
    [sym_comment] = ACTIONS(21),
  },
  [109] = {
    [sym__expression] = STATE(120),
    [sym_assignment_expression] = STATE(120),
    [sym_mux_expression] = STATE(120),
    [sym_in_expression] = STATE(120),
    [sym_slice_expression] = STATE(120),
    [sym_unary_expression] = STATE(120),
    [sym_binary_expression] = STATE(120),
    [anon_sym_const] = ACTIONS(272),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(274),
    [anon_sym_TILDE] = ACTIONS(274),
    [anon_sym_DASH] = ACTIONS(274),
    [anon_sym_PLUS] = ACTIONS(274),
    [sym_identifier] = ACTIONS(276),
    [sym_number] = ACTIONS(361),
    [sym_comment] = ACTIONS(21),
  },
  [110] = {
    [sym__expression] = STATE(57),
    [sym_assignment_expression] = STATE(57),
    [sym_mux_expression] = STATE(57),
    [sym_in_expression] = STATE(57),
    [sym_slice_expression] = STATE(57),
    [sym_unary_expression] = STATE(57),
    [sym_binary_expression] = STATE(57),
    [anon_sym_const] = ACTIONS(272),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(274),
    [anon_sym_TILDE] = ACTIONS(274),
    [anon_sym_DASH] = ACTIONS(274),
    [anon_sym_PLUS] = ACTIONS(274),
    [sym_identifier] = ACTIONS(276),
    [sym_number] = ACTIONS(137),
    [sym_comment] = ACTIONS(21),
  },
  [111] = {
    [anon_sym_COMMA] = ACTIONS(363),
    [anon_sym_RBRACE] = ACTIONS(363),
    [sym_comment] = ACTIONS(21),
  },
  [112] = {
    [anon_sym_SEMI] = ACTIONS(365),
    [anon_sym_COLON] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(365),
    [anon_sym_RBRACK] = ACTIONS(365),
    [anon_sym_in] = ACTIONS(365),
    [anon_sym_DOT_DOT] = ACTIONS(365),
    [anon_sym_DASH] = ACTIONS(365),
    [anon_sym_PLUS] = ACTIONS(365),
    [anon_sym_EQ_EQ] = ACTIONS(365),
    [anon_sym_BANG_EQ] = ACTIONS(365),
    [anon_sym_GT_EQ] = ACTIONS(365),
    [anon_sym_LT_EQ] = ACTIONS(365),
    [anon_sym_GT] = ACTIONS(367),
    [anon_sym_LT] = ACTIONS(367),
    [anon_sym_AMP_AMP] = ACTIONS(365),
    [anon_sym_PIPE_PIPE] = ACTIONS(365),
    [anon_sym_STAR] = ACTIONS(365),
    [anon_sym_SLASH] = ACTIONS(367),
    [anon_sym_AMP] = ACTIONS(367),
    [anon_sym_PIPE] = ACTIONS(367),
    [anon_sym_CARET] = ACTIONS(365),
    [sym_comment] = ACTIONS(21),
  },
  [113] = {
    [aux_sym_in_expression_repeat1] = STATE(113),
    [anon_sym_COMMA] = ACTIONS(369),
    [anon_sym_RBRACE] = ACTIONS(363),
    [sym_comment] = ACTIONS(21),
  },
  [114] = {
    [anon_sym_RBRACE] = ACTIONS(372),
    [sym_identifier] = ACTIONS(372),
    [sym_comment] = ACTIONS(21),
  },
  [115] = {
    [sym__expression] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_mux_expression] = STATE(121),
    [sym_in_expression] = STATE(121),
    [sym_slice_expression] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [anon_sym_const] = ACTIONS(272),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(274),
    [anon_sym_TILDE] = ACTIONS(274),
    [anon_sym_DASH] = ACTIONS(274),
    [anon_sym_PLUS] = ACTIONS(274),
    [sym_identifier] = ACTIONS(276),
    [sym_number] = ACTIONS(374),
    [sym_comment] = ACTIONS(21),
  },
  [116] = {
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_RBRACK] = ACTIONS(209),
    [anon_sym_in] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(319),
    [anon_sym_PLUS] = ACTIONS(319),
    [anon_sym_EQ_EQ] = ACTIONS(321),
    [anon_sym_BANG_EQ] = ACTIONS(321),
    [anon_sym_GT_EQ] = ACTIONS(321),
    [anon_sym_LT_EQ] = ACTIONS(321),
    [anon_sym_GT] = ACTIONS(323),
    [anon_sym_LT] = ACTIONS(323),
    [anon_sym_AMP_AMP] = ACTIONS(325),
    [anon_sym_PIPE_PIPE] = ACTIONS(327),
    [anon_sym_STAR] = ACTIONS(329),
    [anon_sym_SLASH] = ACTIONS(331),
    [anon_sym_AMP] = ACTIONS(333),
    [anon_sym_PIPE] = ACTIONS(335),
    [anon_sym_CARET] = ACTIONS(327),
    [sym_comment] = ACTIONS(21),
  },
  [117] = {
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_RBRACK] = ACTIONS(239),
    [anon_sym_in] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(239),
    [anon_sym_PLUS] = ACTIONS(239),
    [anon_sym_EQ_EQ] = ACTIONS(321),
    [anon_sym_BANG_EQ] = ACTIONS(321),
    [anon_sym_GT_EQ] = ACTIONS(321),
    [anon_sym_LT_EQ] = ACTIONS(321),
    [anon_sym_GT] = ACTIONS(323),
    [anon_sym_LT] = ACTIONS(323),
    [anon_sym_AMP_AMP] = ACTIONS(239),
    [anon_sym_PIPE_PIPE] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(329),
    [anon_sym_SLASH] = ACTIONS(331),
    [anon_sym_AMP] = ACTIONS(241),
    [anon_sym_PIPE] = ACTIONS(241),
    [anon_sym_CARET] = ACTIONS(239),
    [sym_comment] = ACTIONS(21),
  },
  [118] = {
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_RBRACK] = ACTIONS(239),
    [anon_sym_in] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(239),
    [anon_sym_PLUS] = ACTIONS(239),
    [anon_sym_EQ_EQ] = ACTIONS(239),
    [anon_sym_BANG_EQ] = ACTIONS(239),
    [anon_sym_GT_EQ] = ACTIONS(239),
    [anon_sym_LT_EQ] = ACTIONS(239),
    [anon_sym_GT] = ACTIONS(241),
    [anon_sym_LT] = ACTIONS(241),
    [anon_sym_AMP_AMP] = ACTIONS(239),
    [anon_sym_PIPE_PIPE] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(329),
    [anon_sym_SLASH] = ACTIONS(331),
    [anon_sym_AMP] = ACTIONS(241),
    [anon_sym_PIPE] = ACTIONS(241),
    [anon_sym_CARET] = ACTIONS(239),
    [sym_comment] = ACTIONS(21),
  },
  [119] = {
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_RBRACK] = ACTIONS(239),
    [anon_sym_in] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(319),
    [anon_sym_PLUS] = ACTIONS(319),
    [anon_sym_EQ_EQ] = ACTIONS(321),
    [anon_sym_BANG_EQ] = ACTIONS(321),
    [anon_sym_GT_EQ] = ACTIONS(321),
    [anon_sym_LT_EQ] = ACTIONS(321),
    [anon_sym_GT] = ACTIONS(323),
    [anon_sym_LT] = ACTIONS(323),
    [anon_sym_AMP_AMP] = ACTIONS(239),
    [anon_sym_PIPE_PIPE] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(329),
    [anon_sym_SLASH] = ACTIONS(331),
    [anon_sym_AMP] = ACTIONS(241),
    [anon_sym_PIPE] = ACTIONS(241),
    [anon_sym_CARET] = ACTIONS(239),
    [sym_comment] = ACTIONS(21),
  },
  [120] = {
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_RBRACK] = ACTIONS(239),
    [anon_sym_in] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(319),
    [anon_sym_PLUS] = ACTIONS(319),
    [anon_sym_EQ_EQ] = ACTIONS(321),
    [anon_sym_BANG_EQ] = ACTIONS(321),
    [anon_sym_GT_EQ] = ACTIONS(321),
    [anon_sym_LT_EQ] = ACTIONS(321),
    [anon_sym_GT] = ACTIONS(323),
    [anon_sym_LT] = ACTIONS(323),
    [anon_sym_AMP_AMP] = ACTIONS(325),
    [anon_sym_PIPE_PIPE] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(329),
    [anon_sym_SLASH] = ACTIONS(331),
    [anon_sym_AMP] = ACTIONS(333),
    [anon_sym_PIPE] = ACTIONS(241),
    [anon_sym_CARET] = ACTIONS(239),
    [sym_comment] = ACTIONS(21),
  },
  [121] = {
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_RBRACK] = ACTIONS(262),
    [anon_sym_in] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(319),
    [anon_sym_PLUS] = ACTIONS(319),
    [anon_sym_EQ_EQ] = ACTIONS(321),
    [anon_sym_BANG_EQ] = ACTIONS(321),
    [anon_sym_GT_EQ] = ACTIONS(321),
    [anon_sym_LT_EQ] = ACTIONS(321),
    [anon_sym_GT] = ACTIONS(323),
    [anon_sym_LT] = ACTIONS(323),
    [anon_sym_AMP_AMP] = ACTIONS(325),
    [anon_sym_PIPE_PIPE] = ACTIONS(327),
    [anon_sym_STAR] = ACTIONS(329),
    [anon_sym_SLASH] = ACTIONS(331),
    [anon_sym_AMP] = ACTIONS(333),
    [anon_sym_PIPE] = ACTIONS(335),
    [anon_sym_CARET] = ACTIONS(327),
    [sym_comment] = ACTIONS(21),
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
  [17] = {.count = 1, .reusable = false}, SHIFT(7),
  [19] = {.count = 1, .reusable = true}, SHIFT(9),
  [21] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [23] = {.count = 1, .reusable = true}, SHIFT(11),
  [25] = {.count = 1, .reusable = true}, SHIFT(13),
  [27] = {.count = 1, .reusable = true}, SHIFT(14),
  [29] = {.count = 1, .reusable = false}, SHIFT(15),
  [31] = {.count = 1, .reusable = true}, SHIFT(16),
  [33] = {.count = 1, .reusable = false}, SHIFT(17),
  [35] = {.count = 1, .reusable = true}, SHIFT(18),
  [37] = {.count = 1, .reusable = true}, SHIFT(20),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym__expression, 1),
  [41] = {.count = 1, .reusable = false}, SHIFT(21),
  [43] = {.count = 1, .reusable = false}, REDUCE(sym__expression, 1),
  [45] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [47] = {.count = 1, .reusable = true}, SHIFT(22),
  [49] = {.count = 1, .reusable = true}, SHIFT(23),
  [51] = {.count = 1, .reusable = true}, SHIFT(24),
  [53] = {.count = 1, .reusable = true}, SHIFT(25),
  [55] = {.count = 1, .reusable = true}, SHIFT(26),
  [57] = {.count = 1, .reusable = false}, SHIFT(26),
  [59] = {.count = 1, .reusable = true}, SHIFT(27),
  [61] = {.count = 1, .reusable = true}, SHIFT(28),
  [63] = {.count = 1, .reusable = true}, SHIFT(29),
  [65] = {.count = 1, .reusable = false}, SHIFT(29),
  [67] = {.count = 1, .reusable = false}, SHIFT(27),
  [69] = {.count = 1, .reusable = false}, SHIFT(28),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [73] = {.count = 1, .reusable = true}, SHIFT(31),
  [75] = {.count = 1, .reusable = true}, SHIFT(32),
  [77] = {.count = 1, .reusable = true}, SHIFT(33),
  [79] = {.count = 1, .reusable = true}, SHIFT(35),
  [81] = {.count = 1, .reusable = true}, SHIFT(36),
  [83] = {.count = 1, .reusable = true}, SHIFT(37),
  [85] = {.count = 1, .reusable = false}, SHIFT(38),
  [87] = {.count = 1, .reusable = true}, SHIFT(39),
  [89] = {.count = 1, .reusable = true}, SHIFT(40),
  [91] = {.count = 1, .reusable = true}, SHIFT(41),
  [93] = {.count = 1, .reusable = false}, SHIFT(41),
  [95] = {.count = 1, .reusable = true}, SHIFT(42),
  [97] = {.count = 1, .reusable = true}, SHIFT(43),
  [99] = {.count = 1, .reusable = true}, SHIFT(44),
  [101] = {.count = 1, .reusable = false}, SHIFT(44),
  [103] = {.count = 1, .reusable = false}, SHIFT(42),
  [105] = {.count = 1, .reusable = false}, SHIFT(43),
  [107] = {.count = 1, .reusable = true}, SHIFT(45),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_unary_expression, 2),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym_unary_expression, 2),
  [113] = {.count = 1, .reusable = true}, SHIFT(47),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym__statement, 2),
  [117] = {.count = 1, .reusable = false}, REDUCE(sym__statement, 2),
  [119] = {.count = 1, .reusable = false}, SHIFT(48),
  [121] = {.count = 1, .reusable = true}, SHIFT(49),
  [123] = {.count = 1, .reusable = false}, SHIFT(50),
  [125] = {.count = 1, .reusable = true}, SHIFT(51),
  [127] = {.count = 1, .reusable = true}, SHIFT(52),
  [129] = {.count = 1, .reusable = true}, SHIFT(53),
  [131] = {.count = 1, .reusable = true}, SHIFT(54),
  [133] = {.count = 1, .reusable = true}, SHIFT(55),
  [135] = {.count = 1, .reusable = true}, SHIFT(56),
  [137] = {.count = 1, .reusable = true}, SHIFT(57),
  [139] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [141] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [144] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [147] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [150] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [153] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [156] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [159] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [162] = {.count = 1, .reusable = true}, SHIFT(58),
  [164] = {.count = 1, .reusable = true}, REDUCE(sym_wire_declaration, 3),
  [166] = {.count = 1, .reusable = false}, REDUCE(sym_wire_declaration, 3),
  [168] = {.count = 1, .reusable = true}, SHIFT(60),
  [170] = {.count = 1, .reusable = true}, SHIFT(62),
  [172] = {.count = 1, .reusable = true}, SHIFT(65),
  [174] = {.count = 1, .reusable = true}, SHIFT(66),
  [176] = {.count = 1, .reusable = true}, SHIFT(67),
  [178] = {.count = 1, .reusable = true}, SHIFT(68),
  [180] = {.count = 1, .reusable = true}, SHIFT(69),
  [182] = {.count = 1, .reusable = true}, SHIFT(70),
  [184] = {.count = 1, .reusable = true}, SHIFT(71),
  [186] = {.count = 1, .reusable = true}, SHIFT(72),
  [188] = {.count = 1, .reusable = true}, REDUCE(sym_mux_expression, 3),
  [190] = {.count = 1, .reusable = false}, REDUCE(sym_mux_expression, 3),
  [192] = {.count = 2, .reusable = false}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(15),
  [195] = {.count = 2, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(5),
  [198] = {.count = 1, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 2),
  [200] = {.count = 2, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(16),
  [203] = {.count = 2, .reusable = false}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(17),
  [206] = {.count = 2, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(18),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 3),
  [211] = {.count = 1, .reusable = true}, SHIFT(73),
  [213] = {.count = 1, .reusable = false}, SHIFT(74),
  [215] = {.count = 1, .reusable = true}, SHIFT(75),
  [217] = {.count = 1, .reusable = true}, SHIFT(76),
  [219] = {.count = 1, .reusable = true}, SHIFT(77),
  [221] = {.count = 1, .reusable = false}, SHIFT(77),
  [223] = {.count = 1, .reusable = true}, SHIFT(78),
  [225] = {.count = 1, .reusable = true}, SHIFT(79),
  [227] = {.count = 1, .reusable = true}, SHIFT(80),
  [229] = {.count = 1, .reusable = false}, SHIFT(80),
  [231] = {.count = 1, .reusable = false}, SHIFT(78),
  [233] = {.count = 1, .reusable = false}, SHIFT(79),
  [235] = {.count = 1, .reusable = true}, SHIFT(81),
  [237] = {.count = 1, .reusable = true}, SHIFT(82),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [241] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_variable_declarator, 3),
  [245] = {.count = 1, .reusable = true}, REDUCE(aux_sym_wire_declaration_repeat1, 2),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym_wire_declaration, 4),
  [249] = {.count = 1, .reusable = false}, REDUCE(sym_wire_declaration, 4),
  [251] = {.count = 2, .reusable = true}, REDUCE(aux_sym_wire_declaration_repeat1, 2), SHIFT_REPEAT(33),
  [254] = {.count = 1, .reusable = true}, REDUCE(sym_register_declaration, 4),
  [256] = {.count = 1, .reusable = false}, REDUCE(sym_register_declaration, 4),
  [258] = {.count = 1, .reusable = true}, SHIFT(83),
  [260] = {.count = 1, .reusable = true}, SHIFT(84),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 4),
  [264] = {.count = 1, .reusable = true}, SHIFT(86),
  [266] = {.count = 1, .reusable = true}, SHIFT(87),
  [268] = {.count = 1, .reusable = true}, SHIFT(88),
  [270] = {.count = 1, .reusable = true}, SHIFT(89),
  [272] = {.count = 1, .reusable = false}, SHIFT(90),
  [274] = {.count = 1, .reusable = true}, SHIFT(91),
  [276] = {.count = 1, .reusable = false}, SHIFT(92),
  [278] = {.count = 1, .reusable = true}, SHIFT(93),
  [280] = {.count = 1, .reusable = true}, SHIFT(94),
  [282] = {.count = 1, .reusable = true}, SHIFT(95),
  [284] = {.count = 1, .reusable = true}, SHIFT(96),
  [286] = {.count = 1, .reusable = true}, SHIFT(97),
  [288] = {.count = 1, .reusable = true}, REDUCE(sym_in_expression, 4),
  [290] = {.count = 1, .reusable = false}, REDUCE(sym_in_expression, 4),
  [292] = {.count = 1, .reusable = true}, SHIFT(98),
  [294] = {.count = 1, .reusable = true}, SHIFT(99),
  [296] = {.count = 1, .reusable = true}, SHIFT(101),
  [298] = {.count = 1, .reusable = true}, REDUCE(sym_register_declaration, 5),
  [300] = {.count = 1, .reusable = false}, REDUCE(sym_register_declaration, 5),
  [302] = {.count = 1, .reusable = true}, REDUCE(aux_sym_register_declaration_repeat1, 2),
  [304] = {.count = 2, .reusable = true}, REDUCE(aux_sym_register_declaration_repeat1, 2), SHIFT_REPEAT(11),
  [307] = {.count = 1, .reusable = false}, REDUCE(aux_sym_mux_expression_repeat1, 4),
  [309] = {.count = 1, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 4),
  [311] = {.count = 1, .reusable = true}, SHIFT(102),
  [313] = {.count = 1, .reusable = true}, SHIFT(103),
  [315] = {.count = 1, .reusable = false}, SHIFT(104),
  [317] = {.count = 1, .reusable = true}, SHIFT(105),
  [319] = {.count = 1, .reusable = true}, SHIFT(106),
  [321] = {.count = 1, .reusable = true}, SHIFT(107),
  [323] = {.count = 1, .reusable = false}, SHIFT(107),
  [325] = {.count = 1, .reusable = true}, SHIFT(108),
  [327] = {.count = 1, .reusable = true}, SHIFT(109),
  [329] = {.count = 1, .reusable = true}, SHIFT(110),
  [331] = {.count = 1, .reusable = false}, SHIFT(110),
  [333] = {.count = 1, .reusable = false}, SHIFT(108),
  [335] = {.count = 1, .reusable = false}, SHIFT(109),
  [337] = {.count = 1, .reusable = true}, SHIFT(111),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym_in_expression, 5),
  [341] = {.count = 1, .reusable = false}, REDUCE(sym_in_expression, 5),
  [343] = {.count = 1, .reusable = true}, SHIFT(112),
  [345] = {.count = 1, .reusable = true}, SHIFT(114),
  [347] = {.count = 1, .reusable = true}, SHIFT(115),
  [349] = {.count = 1, .reusable = true}, SHIFT(116),
  [351] = {.count = 1, .reusable = true}, REDUCE(sym_slice_expression, 6),
  [353] = {.count = 1, .reusable = false}, REDUCE(sym_slice_expression, 6),
  [355] = {.count = 1, .reusable = true}, SHIFT(117),
  [357] = {.count = 1, .reusable = true}, SHIFT(118),
  [359] = {.count = 1, .reusable = true}, SHIFT(119),
  [361] = {.count = 1, .reusable = true}, SHIFT(120),
  [363] = {.count = 1, .reusable = true}, REDUCE(aux_sym_in_expression_repeat1, 2),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym_in_expression, 6),
  [367] = {.count = 1, .reusable = false}, REDUCE(sym_in_expression, 6),
  [369] = {.count = 2, .reusable = true}, REDUCE(aux_sym_in_expression_repeat1, 2), SHIFT_REPEAT(98),
  [372] = {.count = 1, .reusable = true}, REDUCE(sym__register_expression_statement, 4),
  [374] = {.count = 1, .reusable = true}, SHIFT(121),
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
