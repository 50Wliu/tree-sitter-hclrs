#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 142
#define SYMBOL_COUNT 113
#define ALIAS_COUNT 0
#define TOKEN_COUNT 91
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
  anon_sym_GT_GT = 29,
  anon_sym_GT_GT_GT = 30,
  anon_sym_LT_LT = 31,
  anon_sym_AMP = 32,
  anon_sym_PIPE = 33,
  anon_sym_CARET = 34,
  anon_sym_STAT_BUB = 35,
  anon_sym_STAT_AOK = 36,
  anon_sym_STAT_HLT = 37,
  anon_sym_STAT_ADR = 38,
  anon_sym_STAT_INS = 39,
  anon_sym_STAT_PIP = 40,
  anon_sym_REG_RAX = 41,
  anon_sym_REG_RCX = 42,
  anon_sym_REG_RDX = 43,
  anon_sym_REG_RBX = 44,
  anon_sym_REG_RSP = 45,
  anon_sym_REG_RBP = 46,
  anon_sym_REG_RSI = 47,
  anon_sym_REG_RDI = 48,
  anon_sym_REG_R8 = 49,
  anon_sym_REG_R9 = 50,
  anon_sym_REG_R10 = 51,
  anon_sym_REG_R11 = 52,
  anon_sym_REG_R12 = 53,
  anon_sym_REG_R13 = 54,
  anon_sym_REG_R14 = 55,
  anon_sym_REG_NONE = 56,
  anon_sym_HALT = 57,
  anon_sym_NOP = 58,
  anon_sym_RRMOVQ = 59,
  anon_sym_IRMOVQ = 60,
  anon_sym_RMMOVQ = 61,
  anon_sym_MRMOVQ = 62,
  anon_sym_OPQ = 63,
  anon_sym_JXX = 64,
  anon_sym_CALL = 65,
  anon_sym_RET = 66,
  anon_sym_PUSHQ = 67,
  anon_sym_POPQ = 68,
  anon_sym_CMOVXX = 69,
  anon_sym_ALWAYS = 70,
  anon_sym_LE = 71,
  anon_sym_LT2 = 72,
  anon_sym_EQ2 = 73,
  anon_sym_NE = 74,
  anon_sym_GE = 75,
  anon_sym_GT2 = 76,
  anon_sym_ADDQ = 77,
  anon_sym_SUBQ = 78,
  anon_sym_ANDQ = 79,
  anon_sym_XORQ = 80,
  sym_identifier = 81,
  sym_number = 82,
  anon_sym_true = 83,
  anon_sym_TRUE = 84,
  anon_sym_false = 85,
  anon_sym_FALSE = 86,
  sym_comment = 87,
  sym_pound_comment = 88,
  sym_slash_comment = 89,
  anon_sym_SLASH_STAR = 90,
  sym_source_file = 91,
  sym__statement = 92,
  sym__declaration = 93,
  sym_wire_declaration = 94,
  sym_variable_declarator = 95,
  sym_register_declaration = 96,
  sym__register_expression_statement = 97,
  sym__expression = 98,
  sym_assignment_expression = 99,
  sym_mux_expression = 100,
  sym_in_expression = 101,
  sym_slice_expression = 102,
  sym_unary_expression = 103,
  sym_binary_expression = 104,
  sym_predefined_constant = 105,
  sym_true = 106,
  sym_false = 107,
  aux_sym_source_file_repeat1 = 108,
  aux_sym_wire_declaration_repeat1 = 109,
  aux_sym_register_declaration_repeat1 = 110,
  aux_sym_mux_expression_repeat1 = 111,
  aux_sym_in_expression_repeat1 = 112,
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
  [anon_sym_GT_GT] = ">>",
  [anon_sym_GT_GT_GT] = ">>>",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_STAT_BUB] = "STAT_BUB",
  [anon_sym_STAT_AOK] = "STAT_AOK",
  [anon_sym_STAT_HLT] = "STAT_HLT",
  [anon_sym_STAT_ADR] = "STAT_ADR",
  [anon_sym_STAT_INS] = "STAT_INS",
  [anon_sym_STAT_PIP] = "STAT_PIP",
  [anon_sym_REG_RAX] = "REG_RAX",
  [anon_sym_REG_RCX] = "REG_RCX",
  [anon_sym_REG_RDX] = "REG_RDX",
  [anon_sym_REG_RBX] = "REG_RBX",
  [anon_sym_REG_RSP] = "REG_RSP",
  [anon_sym_REG_RBP] = "REG_RBP",
  [anon_sym_REG_RSI] = "REG_RSI",
  [anon_sym_REG_RDI] = "REG_RDI",
  [anon_sym_REG_R8] = "REG_R8",
  [anon_sym_REG_R9] = "REG_R9",
  [anon_sym_REG_R10] = "REG_R10",
  [anon_sym_REG_R11] = "REG_R11",
  [anon_sym_REG_R12] = "REG_R12",
  [anon_sym_REG_R13] = "REG_R13",
  [anon_sym_REG_R14] = "REG_R14",
  [anon_sym_REG_NONE] = "REG_NONE",
  [anon_sym_HALT] = "HALT",
  [anon_sym_NOP] = "NOP",
  [anon_sym_RRMOVQ] = "RRMOVQ",
  [anon_sym_IRMOVQ] = "IRMOVQ",
  [anon_sym_RMMOVQ] = "RMMOVQ",
  [anon_sym_MRMOVQ] = "MRMOVQ",
  [anon_sym_OPQ] = "OPQ",
  [anon_sym_JXX] = "JXX",
  [anon_sym_CALL] = "CALL",
  [anon_sym_RET] = "RET",
  [anon_sym_PUSHQ] = "PUSHQ",
  [anon_sym_POPQ] = "POPQ",
  [anon_sym_CMOVXX] = "CMOVXX",
  [anon_sym_ALWAYS] = "ALWAYS",
  [anon_sym_LE] = "LE",
  [anon_sym_LT2] = "LT",
  [anon_sym_EQ2] = "EQ",
  [anon_sym_NE] = "NE",
  [anon_sym_GE] = "GE",
  [anon_sym_GT2] = "GT",
  [anon_sym_ADDQ] = "ADDQ",
  [anon_sym_SUBQ] = "SUBQ",
  [anon_sym_ANDQ] = "ANDQ",
  [anon_sym_XORQ] = "XORQ",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_TRUE] = "TRUE",
  [anon_sym_false] = "false",
  [anon_sym_FALSE] = "FALSE",
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
  [sym_predefined_constant] = "predefined_constant",
  [sym_true] = "true",
  [sym_false] = "false",
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
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
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
  [anon_sym_STAT_BUB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAT_AOK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAT_HLT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAT_ADR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAT_INS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAT_PIP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REG_RAX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REG_RCX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REG_RDX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REG_RBX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REG_RSP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REG_RBP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REG_RSI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REG_RDI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REG_R8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REG_R9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REG_R10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REG_R11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REG_R12] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REG_R13] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REG_R14] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REG_NONE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HALT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RRMOVQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IRMOVQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RMMOVQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MRMOVQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OPQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JXX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CALL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PUSHQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POPQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CMOVXX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ALWAYS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ADDQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SUBQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ANDQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_XORQ] = {
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
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TRUE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FALSE] = {
    .visible = true,
    .named = false,
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
  [sym_predefined_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
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
        ADVANCE(30);
      if (lookahead == '>')
        ADVANCE(32);
      if (lookahead == 'A')
        ADVANCE(36);
      if (lookahead == 'C')
        ADVANCE(49);
      if (lookahead == 'E')
        ADVANCE(58);
      if (lookahead == 'F')
        ADVANCE(60);
      if (lookahead == 'G')
        ADVANCE(65);
      if (lookahead == 'H')
        ADVANCE(68);
      if (lookahead == 'I')
        ADVANCE(72);
      if (lookahead == 'J')
        ADVANCE(78);
      if (lookahead == 'L')
        ADVANCE(81);
      if (lookahead == 'M')
        ADVANCE(84);
      if (lookahead == 'N')
        ADVANCE(90);
      if (lookahead == 'O')
        ADVANCE(94);
      if (lookahead == 'P')
        ADVANCE(97);
      if (lookahead == 'R')
        ADVANCE(105);
      if (lookahead == 'S')
        ADVANCE(146);
      if (lookahead == 'T')
        ADVANCE(171);
      if (lookahead == 'X')
        ADVANCE(175);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == ']')
        ADVANCE(180);
      if (lookahead == '^')
        ADVANCE(181);
      if (lookahead == 'c')
        ADVANCE(182);
      if (lookahead == 'f')
        ADVANCE(187);
      if (lookahead == 'i')
        ADVANCE(192);
      if (lookahead == 'r')
        ADVANCE(194);
      if (lookahead == 't')
        ADVANCE(202);
      if (lookahead == 'w')
        ADVANCE(206);
      if (lookahead == '{')
        ADVANCE(210);
      if (lookahead == '|')
        ADVANCE(211);
      if (lookahead == '}')
        ADVANCE(213);
      if (lookahead == '~')
        ADVANCE(214);
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
      if ((lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > 'A') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`')
        ADVANCE(40);
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
      if (lookahead == '<')
        ADVANCE(28);
      if (lookahead == '=')
        ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '>')
        ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D')
        ADVANCE(37);
      if (lookahead == 'L')
        ADVANCE(41);
      if (lookahead == 'N')
        ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D')
        ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q')
        ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_ADDQ);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W')
        ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A')
        ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > 'A') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y')
        ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S')
        ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_ALWAYS);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D')
        ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q')
        ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_ANDQ);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A')
        ADVANCE(50);
      if (lookahead == 'M')
        ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > 'A') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L')
        ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L')
        ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_CALL);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O')
        ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V')
        ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X')
        ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X')
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_CMOVXX);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q')
        ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_EQ2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A')
        ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > 'A') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L')
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S')
        ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E')
        ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E')
        ADVANCE(66);
      if (lookahead == 'T')
        ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_GE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_GT2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A')
        ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > 'A') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L')
        ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T')
        ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_HALT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R')
        ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M')
        ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O')
        ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V')
        ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q')
        ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_IRMOVQ);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X')
        ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X')
        ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_JXX);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E')
        ADVANCE(82);
      if (lookahead == 'T')
        ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LT2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R')
        ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M')
        ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O')
        ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V')
        ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q')
        ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_MRMOVQ);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E')
        ADVANCE(91);
      if (lookahead == 'O')
        ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_NE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P')
        ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_NOP);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P')
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q')
        ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_OPQ);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O')
        ADVANCE(98);
      if (lookahead == 'U')
        ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P')
        ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q')
        ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_POPQ);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S')
        ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H')
        ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q')
        ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_PUSHQ);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E')
        ADVANCE(106);
      if (lookahead == 'M')
        ADVANCE(136);
      if (lookahead == 'R')
        ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G')
        ADVANCE(107);
      if (lookahead == 'T')
        ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_')
        ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '`') &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N')
        ADVANCE(109);
      if (lookahead == 'R')
        ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O')
        ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N')
        ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E')
        ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_REG_NONE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(114);
      if (lookahead == '8')
        ADVANCE(120);
      if (lookahead == '9')
        ADVANCE(121);
      if (lookahead == 'A')
        ADVANCE(122);
      if (lookahead == 'B')
        ADVANCE(124);
      if (lookahead == 'C')
        ADVANCE(127);
      if (lookahead == 'D')
        ADVANCE(129);
      if (lookahead == 'S')
        ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < '8' || lookahead > 'D') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0')
        ADVANCE(115);
      if (lookahead == '1')
        ADVANCE(116);
      if (lookahead == '2')
        ADVANCE(117);
      if (lookahead == '3')
        ADVANCE(118);
      if (lookahead == '4')
        ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '4') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_REG_R10);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_REG_R11);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_REG_R12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_REG_R13);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_REG_R14);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_REG_R8);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_REG_R9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X')
        ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_REG_RAX);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P')
        ADVANCE(125);
      if (lookahead == 'X')
        ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_REG_RBP);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_REG_RBX);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X')
        ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_REG_RCX);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I')
        ADVANCE(130);
      if (lookahead == 'X')
        ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_REG_RDI);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_REG_RDX);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I')
        ADVANCE(133);
      if (lookahead == 'P')
        ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_REG_RSI);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_REG_RSP);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_RET);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M')
        ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O')
        ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V')
        ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q')
        ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_RMMOVQ);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M')
        ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O')
        ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V')
        ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q')
        ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_RRMOVQ);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T')
        ADVANCE(147);
      if (lookahead == 'U')
        ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A')
        ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > 'A') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T')
        ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '`') &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A')
        ADVANCE(151);
      if (lookahead == 'B')
        ADVANCE(156);
      if (lookahead == 'H')
        ADVANCE(159);
      if (lookahead == 'I')
        ADVANCE(162);
      if (lookahead == 'P')
        ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > 'B') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D')
        ADVANCE(152);
      if (lookahead == 'O')
        ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R')
        ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_STAT_ADR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K')
        ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_STAT_AOK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U')
        ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B')
        ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_STAT_BUB);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L')
        ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T')
        ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_STAT_HLT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N')
        ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S')
        ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_STAT_INS);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I')
        ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P')
        ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_STAT_PIP);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B')
        ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q')
        ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_SUBQ);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R')
        ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U')
        ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E')
        ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O')
        ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R')
        ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q')
        ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_XORQ);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          lookahead != 'a' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g')
        ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_register);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_wire);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '/') &&
          (lookahead < ':' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(40);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|')
        ADVANCE(212);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 215:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(216);
      if (lookahead == '#')
        ADVANCE(217);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(218);
      if (lookahead == '0')
        ADVANCE(16);
      if (lookahead == 'A')
        ADVANCE(36);
      if (lookahead == 'C')
        ADVANCE(49);
      if (lookahead == 'E')
        ADVANCE(58);
      if (lookahead == 'F')
        ADVANCE(60);
      if (lookahead == 'G')
        ADVANCE(65);
      if (lookahead == 'H')
        ADVANCE(68);
      if (lookahead == 'I')
        ADVANCE(72);
      if (lookahead == 'J')
        ADVANCE(78);
      if (lookahead == 'L')
        ADVANCE(81);
      if (lookahead == 'M')
        ADVANCE(84);
      if (lookahead == 'N')
        ADVANCE(90);
      if (lookahead == 'O')
        ADVANCE(94);
      if (lookahead == 'P')
        ADVANCE(97);
      if (lookahead == 'R')
        ADVANCE(105);
      if (lookahead == 'S')
        ADVANCE(146);
      if (lookahead == 'T')
        ADVANCE(171);
      if (lookahead == 'X')
        ADVANCE(175);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == 'c')
        ADVANCE(182);
      if (lookahead == 'f')
        ADVANCE(187);
      if (lookahead == 'r')
        ADVANCE(194);
      if (lookahead == 't')
        ADVANCE(202);
      if (lookahead == 'w')
        ADVANCE(206);
      if (lookahead == '~')
        ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(215);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if ((lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > 'A') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~'))
        ADVANCE(40);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(217);
      END_STATE();
    case 218:
      if (lookahead == '*')
        ADVANCE(219);
      if (lookahead == '/')
        ADVANCE(217);
      END_STATE();
    case 219:
      if (lookahead == '*')
        ADVANCE(220);
      if (lookahead != 0)
        ADVANCE(219);
      END_STATE();
    case 220:
      if (lookahead == '*')
        ADVANCE(220);
      if (lookahead == '/')
        ADVANCE(221);
      if (lookahead != 0)
        ADVANCE(219);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 222:
      if (lookahead == '#')
        ADVANCE(217);
      if (lookahead == '/')
        ADVANCE(218);
      if (lookahead == '}')
        ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(222);
      if (lookahead != 0 &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~'))
        ADVANCE(40);
      END_STATE();
    case 223:
      if (lookahead == '#')
        ADVANCE(217);
      if (lookahead == '/')
        ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(224);
      END_STATE();
    case 224:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_register_name);
      END_STATE();
    case 226:
      if (lookahead == '!')
        ADVANCE(216);
      if (lookahead == '#')
        ADVANCE(217);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(218);
      if (lookahead == '0')
        ADVANCE(16);
      if (lookahead == 'A')
        ADVANCE(36);
      if (lookahead == 'C')
        ADVANCE(49);
      if (lookahead == 'E')
        ADVANCE(58);
      if (lookahead == 'F')
        ADVANCE(60);
      if (lookahead == 'G')
        ADVANCE(65);
      if (lookahead == 'H')
        ADVANCE(68);
      if (lookahead == 'I')
        ADVANCE(72);
      if (lookahead == 'J')
        ADVANCE(78);
      if (lookahead == 'L')
        ADVANCE(81);
      if (lookahead == 'M')
        ADVANCE(84);
      if (lookahead == 'N')
        ADVANCE(90);
      if (lookahead == 'O')
        ADVANCE(94);
      if (lookahead == 'P')
        ADVANCE(97);
      if (lookahead == 'R')
        ADVANCE(105);
      if (lookahead == 'S')
        ADVANCE(146);
      if (lookahead == 'T')
        ADVANCE(171);
      if (lookahead == 'X')
        ADVANCE(175);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == ']')
        ADVANCE(180);
      if (lookahead == 'c')
        ADVANCE(182);
      if (lookahead == 'f')
        ADVANCE(187);
      if (lookahead == 't')
        ADVANCE(202);
      if (lookahead == '~')
        ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(226);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (lookahead != 0 &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > 'A') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~'))
        ADVANCE(40);
      END_STATE();
    case 227:
      if (lookahead == '!')
        ADVANCE(228);
      if (lookahead == '#')
        ADVANCE(217);
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
        ADVANCE(229);
      if (lookahead == ':')
        ADVANCE(25);
      if (lookahead == ';')
        ADVANCE(26);
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(30);
      if (lookahead == '>')
        ADVANCE(32);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == ']')
        ADVANCE(180);
      if (lookahead == '^')
        ADVANCE(181);
      if (lookahead == 'i')
        ADVANCE(230);
      if (lookahead == '|')
        ADVANCE(211);
      if (lookahead == '}')
        ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(227);
      END_STATE();
    case 228:
      if (lookahead == '=')
        ADVANCE(3);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(219);
      if (lookahead == '/')
        ADVANCE(217);
      END_STATE();
    case 230:
      if (lookahead == 'n')
        ADVANCE(231);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 232:
      if (lookahead == '!')
        ADVANCE(228);
      if (lookahead == '#')
        ADVANCE(217);
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
        ADVANCE(229);
      if (lookahead == ';')
        ADVANCE(26);
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(30);
      if (lookahead == '>')
        ADVANCE(32);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '^')
        ADVANCE(181);
      if (lookahead == 'i')
        ADVANCE(230);
      if (lookahead == '|')
        ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(232);
      END_STATE();
    case 233:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(217);
      if (lookahead == '/')
        ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(233);
      END_STATE();
    case 234:
      if (lookahead == '!')
        ADVANCE(228);
      if (lookahead == '#')
        ADVANCE(217);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(229);
      if (lookahead == ':')
        ADVANCE(25);
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(30);
      if (lookahead == '>')
        ADVANCE(32);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '^')
        ADVANCE(181);
      if (lookahead == 'i')
        ADVANCE(230);
      if (lookahead == '|')
        ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(234);
      END_STATE();
    case 235:
      if (lookahead == '#')
        ADVANCE(217);
      if (lookahead == '/')
        ADVANCE(218);
      if (lookahead == '{')
        ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(235);
      END_STATE();
    case 236:
      if (lookahead == '!')
        ADVANCE(228);
      if (lookahead == '#')
        ADVANCE(217);
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
        ADVANCE(229);
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(30);
      if (lookahead == '>')
        ADVANCE(32);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '^')
        ADVANCE(181);
      if (lookahead == 'i')
        ADVANCE(230);
      if (lookahead == '|')
        ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(236);
      END_STATE();
    case 237:
      if (lookahead == '!')
        ADVANCE(216);
      if (lookahead == '#')
        ADVANCE(217);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(218);
      if (lookahead == '0')
        ADVANCE(16);
      if (lookahead == 'A')
        ADVANCE(36);
      if (lookahead == 'C')
        ADVANCE(49);
      if (lookahead == 'E')
        ADVANCE(58);
      if (lookahead == 'F')
        ADVANCE(60);
      if (lookahead == 'G')
        ADVANCE(65);
      if (lookahead == 'H')
        ADVANCE(68);
      if (lookahead == 'I')
        ADVANCE(72);
      if (lookahead == 'J')
        ADVANCE(78);
      if (lookahead == 'L')
        ADVANCE(81);
      if (lookahead == 'M')
        ADVANCE(84);
      if (lookahead == 'N')
        ADVANCE(90);
      if (lookahead == 'O')
        ADVANCE(94);
      if (lookahead == 'P')
        ADVANCE(97);
      if (lookahead == 'R')
        ADVANCE(105);
      if (lookahead == 'S')
        ADVANCE(146);
      if (lookahead == 'T')
        ADVANCE(171);
      if (lookahead == 'X')
        ADVANCE(175);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == 'c')
        ADVANCE(182);
      if (lookahead == 'f')
        ADVANCE(187);
      if (lookahead == 't')
        ADVANCE(202);
      if (lookahead == '}')
        ADVANCE(213);
      if (lookahead == '~')
        ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(237);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (lookahead != 0 &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > 'A') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~'))
        ADVANCE(40);
      END_STATE();
    case 238:
      if (lookahead == '!')
        ADVANCE(228);
      if (lookahead == '#')
        ADVANCE(217);
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
        ADVANCE(229);
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(30);
      if (lookahead == '>')
        ADVANCE(32);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '^')
        ADVANCE(181);
      if (lookahead == 'i')
        ADVANCE(230);
      if (lookahead == '|')
        ADVANCE(211);
      if (lookahead == '}')
        ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(238);
      END_STATE();
    case 239:
      if (lookahead == '!')
        ADVANCE(228);
      if (lookahead == '#')
        ADVANCE(217);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(229);
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(30);
      if (lookahead == '>')
        ADVANCE(32);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == ']')
        ADVANCE(180);
      if (lookahead == '^')
        ADVANCE(181);
      if (lookahead == 'i')
        ADVANCE(230);
      if (lookahead == '|')
        ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(239);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 215},
  [2] = {.lex_state = 222},
  [3] = {.lex_state = 223},
  [4] = {.lex_state = 222},
  [5] = {.lex_state = 226},
  [6] = {.lex_state = 226},
  [7] = {.lex_state = 227},
  [8] = {.lex_state = 232},
  [9] = {.lex_state = 227},
  [10] = {.lex_state = 227},
  [11] = {.lex_state = 233},
  [12] = {.lex_state = 232},
  [13] = {.lex_state = 215},
  [14] = {.lex_state = 234},
  [15] = {.lex_state = 232},
  [16] = {.lex_state = 235},
  [17] = {.lex_state = 227},
  [18] = {.lex_state = 222},
  [19] = {.lex_state = 226},
  [20] = {.lex_state = 234},
  [21] = {.lex_state = 234},
  [22] = {.lex_state = 226},
  [23] = {.lex_state = 227},
  [24] = {.lex_state = 226},
  [25] = {.lex_state = 215},
  [26] = {.lex_state = 226},
  [27] = {.lex_state = 235},
  [28] = {.lex_state = 226},
  [29] = {.lex_state = 226},
  [30] = {.lex_state = 226},
  [31] = {.lex_state = 226},
  [32] = {.lex_state = 226},
  [33] = {.lex_state = 215},
  [34] = {.lex_state = 215},
  [35] = {.lex_state = 215},
  [36] = {.lex_state = 222},
  [37] = {.lex_state = 232},
  [38] = {.lex_state = 222},
  [39] = {.lex_state = 226},
  [40] = {.lex_state = 227},
  [41] = {.lex_state = 226},
  [42] = {.lex_state = 226},
  [43] = {.lex_state = 226},
  [44] = {.lex_state = 226},
  [45] = {.lex_state = 226},
  [46] = {.lex_state = 226},
  [47] = {.lex_state = 226},
  [48] = {.lex_state = 227},
  [49] = {.lex_state = 226},
  [50] = {.lex_state = 232},
  [51] = {.lex_state = 222},
  [52] = {.lex_state = 226},
  [53] = {.lex_state = 236},
  [54] = {.lex_state = 236},
  [55] = {.lex_state = 237},
  [56] = {.lex_state = 232},
  [57] = {.lex_state = 232},
  [58] = {.lex_state = 232},
  [59] = {.lex_state = 232},
  [60] = {.lex_state = 227},
  [61] = {.lex_state = 232},
  [62] = {.lex_state = 232},
  [63] = {.lex_state = 215},
  [64] = {.lex_state = 232},
  [65] = {.lex_state = 215},
  [66] = {.lex_state = 227},
  [67] = {.lex_state = 222},
  [68] = {.lex_state = 232},
  [69] = {.lex_state = 226},
  [70] = {.lex_state = 234},
  [71] = {.lex_state = 232},
  [72] = {.lex_state = 234},
  [73] = {.lex_state = 234},
  [74] = {.lex_state = 234},
  [75] = {.lex_state = 234},
  [76] = {.lex_state = 227},
  [77] = {.lex_state = 226},
  [78] = {.lex_state = 226},
  [79] = {.lex_state = 226},
  [80] = {.lex_state = 226},
  [81] = {.lex_state = 226},
  [82] = {.lex_state = 226},
  [83] = {.lex_state = 226},
  [84] = {.lex_state = 227},
  [85] = {.lex_state = 222},
  [86] = {.lex_state = 226},
  [87] = {.lex_state = 238},
  [88] = {.lex_state = 238},
  [89] = {.lex_state = 226},
  [90] = {.lex_state = 215},
  [91] = {.lex_state = 222},
  [92] = {.lex_state = 234},
  [93] = {.lex_state = 226},
  [94] = {.lex_state = 226},
  [95] = {.lex_state = 236},
  [96] = {.lex_state = 222},
  [97] = {.lex_state = 226},
  [98] = {.lex_state = 239},
  [99] = {.lex_state = 239},
  [100] = {.lex_state = 236},
  [101] = {.lex_state = 236},
  [102] = {.lex_state = 236},
  [103] = {.lex_state = 236},
  [104] = {.lex_state = 227},
  [105] = {.lex_state = 226},
  [106] = {.lex_state = 226},
  [107] = {.lex_state = 227},
  [108] = {.lex_state = 226},
  [109] = {.lex_state = 226},
  [110] = {.lex_state = 226},
  [111] = {.lex_state = 226},
  [112] = {.lex_state = 226},
  [113] = {.lex_state = 238},
  [114] = {.lex_state = 232},
  [115] = {.lex_state = 236},
  [116] = {.lex_state = 227},
  [117] = {.lex_state = 226},
  [118] = {.lex_state = 227},
  [119] = {.lex_state = 226},
  [120] = {.lex_state = 226},
  [121] = {.lex_state = 226},
  [122] = {.lex_state = 226},
  [123] = {.lex_state = 226},
  [124] = {.lex_state = 226},
  [125] = {.lex_state = 238},
  [126] = {.lex_state = 238},
  [127] = {.lex_state = 238},
  [128] = {.lex_state = 238},
  [129] = {.lex_state = 238},
  [130] = {.lex_state = 238},
  [131] = {.lex_state = 227},
  [132] = {.lex_state = 238},
  [133] = {.lex_state = 222},
  [134] = {.lex_state = 226},
  [135] = {.lex_state = 239},
  [136] = {.lex_state = 239},
  [137] = {.lex_state = 239},
  [138] = {.lex_state = 239},
  [139] = {.lex_state = 239},
  [140] = {.lex_state = 238},
  [141] = {.lex_state = 239},
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
    [anon_sym_GT_GT] = ACTIONS(3),
    [anon_sym_GT_GT_GT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(3),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_STAT_BUB] = ACTIONS(3),
    [anon_sym_STAT_AOK] = ACTIONS(3),
    [anon_sym_STAT_HLT] = ACTIONS(3),
    [anon_sym_STAT_ADR] = ACTIONS(3),
    [anon_sym_STAT_INS] = ACTIONS(3),
    [anon_sym_STAT_PIP] = ACTIONS(3),
    [anon_sym_REG_RAX] = ACTIONS(3),
    [anon_sym_REG_RCX] = ACTIONS(3),
    [anon_sym_REG_RDX] = ACTIONS(3),
    [anon_sym_REG_RBX] = ACTIONS(3),
    [anon_sym_REG_RSP] = ACTIONS(3),
    [anon_sym_REG_RBP] = ACTIONS(3),
    [anon_sym_REG_RSI] = ACTIONS(3),
    [anon_sym_REG_RDI] = ACTIONS(3),
    [anon_sym_REG_R8] = ACTIONS(3),
    [anon_sym_REG_R9] = ACTIONS(3),
    [anon_sym_REG_R10] = ACTIONS(3),
    [anon_sym_REG_R11] = ACTIONS(3),
    [anon_sym_REG_R12] = ACTIONS(3),
    [anon_sym_REG_R13] = ACTIONS(3),
    [anon_sym_REG_R14] = ACTIONS(3),
    [anon_sym_REG_NONE] = ACTIONS(3),
    [anon_sym_HALT] = ACTIONS(3),
    [anon_sym_NOP] = ACTIONS(3),
    [anon_sym_RRMOVQ] = ACTIONS(3),
    [anon_sym_IRMOVQ] = ACTIONS(3),
    [anon_sym_RMMOVQ] = ACTIONS(3),
    [anon_sym_MRMOVQ] = ACTIONS(3),
    [anon_sym_OPQ] = ACTIONS(3),
    [anon_sym_JXX] = ACTIONS(3),
    [anon_sym_CALL] = ACTIONS(3),
    [anon_sym_RET] = ACTIONS(3),
    [anon_sym_PUSHQ] = ACTIONS(3),
    [anon_sym_POPQ] = ACTIONS(3),
    [anon_sym_CMOVXX] = ACTIONS(3),
    [anon_sym_ALWAYS] = ACTIONS(3),
    [anon_sym_LE] = ACTIONS(3),
    [anon_sym_LT2] = ACTIONS(3),
    [anon_sym_EQ2] = ACTIONS(3),
    [anon_sym_NE] = ACTIONS(3),
    [anon_sym_GE] = ACTIONS(3),
    [anon_sym_GT2] = ACTIONS(3),
    [anon_sym_ADDQ] = ACTIONS(3),
    [anon_sym_SUBQ] = ACTIONS(3),
    [anon_sym_ANDQ] = ACTIONS(3),
    [anon_sym_XORQ] = ACTIONS(3),
    [sym_identifier] = ACTIONS(3),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(3),
    [anon_sym_TRUE] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(3),
    [anon_sym_FALSE] = ACTIONS(3),
    [sym_pound_comment] = ACTIONS(1),
    [sym_slash_comment] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(11),
    [sym__statement] = STATE(13),
    [sym__declaration] = STATE(13),
    [sym_wire_declaration] = STATE(13),
    [sym_register_declaration] = STATE(13),
    [sym__expression] = STATE(12),
    [sym_assignment_expression] = STATE(12),
    [sym_mux_expression] = STATE(12),
    [sym_in_expression] = STATE(12),
    [sym_slice_expression] = STATE(12),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_predefined_constant] = STATE(12),
    [sym_true] = STATE(12),
    [sym_false] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_wire] = ACTIONS(7),
    [anon_sym_register] = ACTIONS(9),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [2] = {
    [sym_variable_declarator] = STATE(15),
    [sym_identifier] = ACTIONS(29),
    [sym_comment] = ACTIONS(27),
  },
  [3] = {
    [sym_register_name] = ACTIONS(31),
    [sym_comment] = ACTIONS(27),
  },
  [4] = {
    [sym_identifier] = ACTIONS(33),
    [sym_comment] = ACTIONS(27),
  },
  [5] = {
    [sym__expression] = STATE(21),
    [sym_assignment_expression] = STATE(21),
    [sym_mux_expression] = STATE(21),
    [sym_in_expression] = STATE(21),
    [sym_slice_expression] = STATE(21),
    [sym_unary_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_predefined_constant] = STATE(21),
    [sym_true] = STATE(21),
    [sym_false] = STATE(21),
    [aux_sym_mux_expression_repeat1] = STATE(22),
    [anon_sym_const] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(39),
    [sym_number] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [6] = {
    [sym__expression] = STATE(23),
    [sym_assignment_expression] = STATE(23),
    [sym_mux_expression] = STATE(23),
    [sym_in_expression] = STATE(23),
    [sym_slice_expression] = STATE(23),
    [sym_unary_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_predefined_constant] = STATE(23),
    [sym_true] = STATE(23),
    [sym_false] = STATE(23),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_number] = ACTIONS(43),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [7] = {
    [anon_sym_SEMI] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_COLON] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_RBRACK] = ACTIONS(45),
    [anon_sym_in] = ACTIONS(45),
    [anon_sym_DOT_DOT] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_EQ_EQ] = ACTIONS(45),
    [anon_sym_BANG_EQ] = ACTIONS(45),
    [anon_sym_GT_EQ] = ACTIONS(45),
    [anon_sym_LT_EQ] = ACTIONS(45),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(45),
    [anon_sym_PIPE_PIPE] = ACTIONS(45),
    [anon_sym_STAR] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_GT_GT] = ACTIONS(47),
    [anon_sym_GT_GT_GT] = ACTIONS(45),
    [anon_sym_LT_LT] = ACTIONS(45),
    [anon_sym_AMP] = ACTIONS(47),
    [anon_sym_PIPE] = ACTIONS(47),
    [anon_sym_CARET] = ACTIONS(45),
    [sym_comment] = ACTIONS(27),
  },
  [8] = {
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_in] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_SLASH] = ACTIONS(53),
    [anon_sym_GT_GT] = ACTIONS(53),
    [anon_sym_GT_GT_GT] = ACTIONS(49),
    [anon_sym_LT_LT] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(53),
    [anon_sym_CARET] = ACTIONS(49),
    [sym_comment] = ACTIONS(27),
  },
  [9] = {
    [anon_sym_SEMI] = ACTIONS(55),
    [anon_sym_COMMA] = ACTIONS(55),
    [anon_sym_COLON] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_RBRACK] = ACTIONS(55),
    [anon_sym_in] = ACTIONS(55),
    [anon_sym_DOT_DOT] = ACTIONS(55),
    [anon_sym_DASH] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(55),
    [anon_sym_EQ_EQ] = ACTIONS(55),
    [anon_sym_BANG_EQ] = ACTIONS(55),
    [anon_sym_GT_EQ] = ACTIONS(55),
    [anon_sym_LT_EQ] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_AMP_AMP] = ACTIONS(55),
    [anon_sym_PIPE_PIPE] = ACTIONS(55),
    [anon_sym_STAR] = ACTIONS(55),
    [anon_sym_SLASH] = ACTIONS(57),
    [anon_sym_GT_GT] = ACTIONS(57),
    [anon_sym_GT_GT_GT] = ACTIONS(55),
    [anon_sym_LT_LT] = ACTIONS(55),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_PIPE] = ACTIONS(57),
    [anon_sym_CARET] = ACTIONS(55),
    [sym_comment] = ACTIONS(27),
  },
  [10] = {
    [anon_sym_SEMI] = ACTIONS(59),
    [anon_sym_COMMA] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_RBRACK] = ACTIONS(59),
    [anon_sym_in] = ACTIONS(59),
    [anon_sym_DOT_DOT] = ACTIONS(59),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(59),
    [anon_sym_EQ_EQ] = ACTIONS(59),
    [anon_sym_BANG_EQ] = ACTIONS(59),
    [anon_sym_GT_EQ] = ACTIONS(59),
    [anon_sym_LT_EQ] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_AMP_AMP] = ACTIONS(59),
    [anon_sym_PIPE_PIPE] = ACTIONS(59),
    [anon_sym_STAR] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(61),
    [anon_sym_GT_GT] = ACTIONS(61),
    [anon_sym_GT_GT_GT] = ACTIONS(59),
    [anon_sym_LT_LT] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(61),
    [anon_sym_PIPE] = ACTIONS(61),
    [anon_sym_CARET] = ACTIONS(59),
    [sym_comment] = ACTIONS(27),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(63),
    [sym_comment] = ACTIONS(27),
  },
  [12] = {
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_in] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_EQ_EQ] = ACTIONS(73),
    [anon_sym_BANG_EQ] = ACTIONS(73),
    [anon_sym_GT_EQ] = ACTIONS(73),
    [anon_sym_LT_EQ] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(75),
    [anon_sym_AMP_AMP] = ACTIONS(77),
    [anon_sym_PIPE_PIPE] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym_GT_GT] = ACTIONS(83),
    [anon_sym_GT_GT_GT] = ACTIONS(81),
    [anon_sym_LT_LT] = ACTIONS(81),
    [anon_sym_AMP] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(87),
    [anon_sym_CARET] = ACTIONS(79),
    [sym_comment] = ACTIONS(27),
  },
  [13] = {
    [sym__statement] = STATE(33),
    [sym__declaration] = STATE(33),
    [sym_wire_declaration] = STATE(33),
    [sym_register_declaration] = STATE(33),
    [sym__expression] = STATE(12),
    [sym_assignment_expression] = STATE(12),
    [sym_mux_expression] = STATE(12),
    [sym_in_expression] = STATE(12),
    [sym_slice_expression] = STATE(12),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_predefined_constant] = STATE(12),
    [sym_true] = STATE(12),
    [sym_false] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_wire] = ACTIONS(7),
    [anon_sym_register] = ACTIONS(9),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [14] = {
    [anon_sym_COLON] = ACTIONS(91),
    [sym_comment] = ACTIONS(27),
  },
  [15] = {
    [aux_sym_wire_declaration_repeat1] = STATE(37),
    [anon_sym_SEMI] = ACTIONS(93),
    [anon_sym_COMMA] = ACTIONS(95),
    [sym_comment] = ACTIONS(27),
  },
  [16] = {
    [anon_sym_LBRACE] = ACTIONS(97),
    [sym_comment] = ACTIONS(27),
  },
  [17] = {
    [anon_sym_EQ] = ACTIONS(99),
    [sym_comment] = ACTIONS(27),
  },
  [18] = {
    [sym_identifier] = ACTIONS(101),
    [sym_comment] = ACTIONS(27),
  },
  [19] = {
    [sym__expression] = STATE(23),
    [sym_assignment_expression] = STATE(23),
    [sym_mux_expression] = STATE(23),
    [sym_in_expression] = STATE(23),
    [sym_slice_expression] = STATE(23),
    [sym_unary_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_predefined_constant] = STATE(23),
    [sym_true] = STATE(23),
    [sym_false] = STATE(23),
    [anon_sym_const] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(39),
    [sym_number] = ACTIONS(43),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [20] = {
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_in] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_SLASH] = ACTIONS(53),
    [anon_sym_GT_GT] = ACTIONS(53),
    [anon_sym_GT_GT_GT] = ACTIONS(49),
    [anon_sym_LT_LT] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(53),
    [anon_sym_CARET] = ACTIONS(49),
    [sym_comment] = ACTIONS(27),
  },
  [21] = {
    [anon_sym_COLON] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_in] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_EQ_EQ] = ACTIONS(109),
    [anon_sym_BANG_EQ] = ACTIONS(109),
    [anon_sym_GT_EQ] = ACTIONS(109),
    [anon_sym_LT_EQ] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(111),
    [anon_sym_LT] = ACTIONS(111),
    [anon_sym_AMP_AMP] = ACTIONS(113),
    [anon_sym_PIPE_PIPE] = ACTIONS(115),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(119),
    [anon_sym_GT_GT] = ACTIONS(119),
    [anon_sym_GT_GT_GT] = ACTIONS(117),
    [anon_sym_LT_LT] = ACTIONS(117),
    [anon_sym_AMP] = ACTIONS(121),
    [anon_sym_PIPE] = ACTIONS(123),
    [anon_sym_CARET] = ACTIONS(115),
    [sym_comment] = ACTIONS(27),
  },
  [22] = {
    [sym__expression] = STATE(21),
    [sym_assignment_expression] = STATE(21),
    [sym_mux_expression] = STATE(21),
    [sym_in_expression] = STATE(21),
    [sym_slice_expression] = STATE(21),
    [sym_unary_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_predefined_constant] = STATE(21),
    [sym_true] = STATE(21),
    [sym_false] = STATE(21),
    [aux_sym_mux_expression_repeat1] = STATE(49),
    [anon_sym_const] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(39),
    [sym_number] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [23] = {
    [anon_sym_SEMI] = ACTIONS(127),
    [anon_sym_COMMA] = ACTIONS(127),
    [anon_sym_COLON] = ACTIONS(127),
    [anon_sym_RBRACE] = ACTIONS(127),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_RBRACK] = ACTIONS(127),
    [anon_sym_in] = ACTIONS(127),
    [anon_sym_DOT_DOT] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_EQ_EQ] = ACTIONS(127),
    [anon_sym_BANG_EQ] = ACTIONS(127),
    [anon_sym_GT_EQ] = ACTIONS(127),
    [anon_sym_LT_EQ] = ACTIONS(127),
    [anon_sym_GT] = ACTIONS(129),
    [anon_sym_LT] = ACTIONS(129),
    [anon_sym_AMP_AMP] = ACTIONS(127),
    [anon_sym_PIPE_PIPE] = ACTIONS(127),
    [anon_sym_STAR] = ACTIONS(127),
    [anon_sym_SLASH] = ACTIONS(129),
    [anon_sym_GT_GT] = ACTIONS(129),
    [anon_sym_GT_GT_GT] = ACTIONS(127),
    [anon_sym_LT_LT] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(129),
    [anon_sym_PIPE] = ACTIONS(129),
    [anon_sym_CARET] = ACTIONS(127),
    [sym_comment] = ACTIONS(27),
  },
  [24] = {
    [sym__expression] = STATE(50),
    [sym_assignment_expression] = STATE(50),
    [sym_mux_expression] = STATE(50),
    [sym_in_expression] = STATE(50),
    [sym_slice_expression] = STATE(50),
    [sym_unary_expression] = STATE(50),
    [sym_binary_expression] = STATE(50),
    [sym_predefined_constant] = STATE(50),
    [sym_true] = STATE(50),
    [sym_false] = STATE(50),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_number] = ACTIONS(131),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(133),
    [anon_sym_wire] = ACTIONS(135),
    [anon_sym_register] = ACTIONS(135),
    [anon_sym_const] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_BANG] = ACTIONS(133),
    [anon_sym_TILDE] = ACTIONS(133),
    [anon_sym_DASH] = ACTIONS(133),
    [anon_sym_PLUS] = ACTIONS(133),
    [anon_sym_STAT_BUB] = ACTIONS(135),
    [anon_sym_STAT_AOK] = ACTIONS(135),
    [anon_sym_STAT_HLT] = ACTIONS(135),
    [anon_sym_STAT_ADR] = ACTIONS(135),
    [anon_sym_STAT_INS] = ACTIONS(135),
    [anon_sym_STAT_PIP] = ACTIONS(135),
    [anon_sym_REG_RAX] = ACTIONS(135),
    [anon_sym_REG_RCX] = ACTIONS(135),
    [anon_sym_REG_RDX] = ACTIONS(135),
    [anon_sym_REG_RBX] = ACTIONS(135),
    [anon_sym_REG_RSP] = ACTIONS(135),
    [anon_sym_REG_RBP] = ACTIONS(135),
    [anon_sym_REG_RSI] = ACTIONS(135),
    [anon_sym_REG_RDI] = ACTIONS(135),
    [anon_sym_REG_R8] = ACTIONS(135),
    [anon_sym_REG_R9] = ACTIONS(135),
    [anon_sym_REG_R10] = ACTIONS(135),
    [anon_sym_REG_R11] = ACTIONS(135),
    [anon_sym_REG_R12] = ACTIONS(135),
    [anon_sym_REG_R13] = ACTIONS(135),
    [anon_sym_REG_R14] = ACTIONS(135),
    [anon_sym_REG_NONE] = ACTIONS(135),
    [anon_sym_HALT] = ACTIONS(135),
    [anon_sym_NOP] = ACTIONS(135),
    [anon_sym_RRMOVQ] = ACTIONS(135),
    [anon_sym_IRMOVQ] = ACTIONS(135),
    [anon_sym_RMMOVQ] = ACTIONS(135),
    [anon_sym_MRMOVQ] = ACTIONS(135),
    [anon_sym_OPQ] = ACTIONS(135),
    [anon_sym_JXX] = ACTIONS(135),
    [anon_sym_CALL] = ACTIONS(135),
    [anon_sym_RET] = ACTIONS(135),
    [anon_sym_PUSHQ] = ACTIONS(135),
    [anon_sym_POPQ] = ACTIONS(135),
    [anon_sym_CMOVXX] = ACTIONS(135),
    [anon_sym_ALWAYS] = ACTIONS(135),
    [anon_sym_LE] = ACTIONS(135),
    [anon_sym_LT2] = ACTIONS(135),
    [anon_sym_EQ2] = ACTIONS(135),
    [anon_sym_NE] = ACTIONS(135),
    [anon_sym_GE] = ACTIONS(135),
    [anon_sym_GT2] = ACTIONS(135),
    [anon_sym_ADDQ] = ACTIONS(135),
    [anon_sym_SUBQ] = ACTIONS(135),
    [anon_sym_ANDQ] = ACTIONS(135),
    [anon_sym_XORQ] = ACTIONS(135),
    [sym_identifier] = ACTIONS(135),
    [sym_number] = ACTIONS(133),
    [anon_sym_true] = ACTIONS(135),
    [anon_sym_TRUE] = ACTIONS(135),
    [anon_sym_false] = ACTIONS(135),
    [anon_sym_FALSE] = ACTIONS(135),
    [sym_comment] = ACTIONS(27),
  },
  [26] = {
    [sym__expression] = STATE(54),
    [sym_assignment_expression] = STATE(54),
    [sym_mux_expression] = STATE(54),
    [sym_in_expression] = STATE(54),
    [sym_slice_expression] = STATE(54),
    [sym_unary_expression] = STATE(54),
    [sym_binary_expression] = STATE(54),
    [sym_predefined_constant] = STATE(54),
    [sym_true] = STATE(54),
    [sym_false] = STATE(54),
    [anon_sym_const] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(139),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(141),
    [sym_number] = ACTIONS(143),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [27] = {
    [anon_sym_LBRACE] = ACTIONS(145),
    [sym_comment] = ACTIONS(27),
  },
  [28] = {
    [sym__expression] = STATE(56),
    [sym_assignment_expression] = STATE(56),
    [sym_mux_expression] = STATE(56),
    [sym_in_expression] = STATE(56),
    [sym_slice_expression] = STATE(56),
    [sym_unary_expression] = STATE(56),
    [sym_binary_expression] = STATE(56),
    [sym_predefined_constant] = STATE(56),
    [sym_true] = STATE(56),
    [sym_false] = STATE(56),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_number] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [29] = {
    [sym__expression] = STATE(57),
    [sym_assignment_expression] = STATE(57),
    [sym_mux_expression] = STATE(57),
    [sym_in_expression] = STATE(57),
    [sym_slice_expression] = STATE(57),
    [sym_unary_expression] = STATE(57),
    [sym_binary_expression] = STATE(57),
    [sym_predefined_constant] = STATE(57),
    [sym_true] = STATE(57),
    [sym_false] = STATE(57),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_number] = ACTIONS(149),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [30] = {
    [sym__expression] = STATE(58),
    [sym_assignment_expression] = STATE(58),
    [sym_mux_expression] = STATE(58),
    [sym_in_expression] = STATE(58),
    [sym_slice_expression] = STATE(58),
    [sym_unary_expression] = STATE(58),
    [sym_binary_expression] = STATE(58),
    [sym_predefined_constant] = STATE(58),
    [sym_true] = STATE(58),
    [sym_false] = STATE(58),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_number] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [31] = {
    [sym__expression] = STATE(59),
    [sym_assignment_expression] = STATE(59),
    [sym_mux_expression] = STATE(59),
    [sym_in_expression] = STATE(59),
    [sym_slice_expression] = STATE(59),
    [sym_unary_expression] = STATE(59),
    [sym_binary_expression] = STATE(59),
    [sym_predefined_constant] = STATE(59),
    [sym_true] = STATE(59),
    [sym_false] = STATE(59),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_number] = ACTIONS(153),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [32] = {
    [sym__expression] = STATE(60),
    [sym_assignment_expression] = STATE(60),
    [sym_mux_expression] = STATE(60),
    [sym_in_expression] = STATE(60),
    [sym_slice_expression] = STATE(60),
    [sym_unary_expression] = STATE(60),
    [sym_binary_expression] = STATE(60),
    [sym_predefined_constant] = STATE(60),
    [sym_true] = STATE(60),
    [sym_false] = STATE(60),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_number] = ACTIONS(155),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [33] = {
    [sym__statement] = STATE(33),
    [sym__declaration] = STATE(33),
    [sym_wire_declaration] = STATE(33),
    [sym_register_declaration] = STATE(33),
    [sym__expression] = STATE(12),
    [sym_assignment_expression] = STATE(12),
    [sym_mux_expression] = STATE(12),
    [sym_in_expression] = STATE(12),
    [sym_slice_expression] = STATE(12),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_predefined_constant] = STATE(12),
    [sym_true] = STATE(12),
    [sym_false] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(157),
    [anon_sym_wire] = ACTIONS(159),
    [anon_sym_register] = ACTIONS(162),
    [anon_sym_const] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(168),
    [anon_sym_BANG] = ACTIONS(171),
    [anon_sym_TILDE] = ACTIONS(171),
    [anon_sym_DASH] = ACTIONS(171),
    [anon_sym_PLUS] = ACTIONS(171),
    [anon_sym_STAT_BUB] = ACTIONS(174),
    [anon_sym_STAT_AOK] = ACTIONS(174),
    [anon_sym_STAT_HLT] = ACTIONS(174),
    [anon_sym_STAT_ADR] = ACTIONS(174),
    [anon_sym_STAT_INS] = ACTIONS(174),
    [anon_sym_STAT_PIP] = ACTIONS(174),
    [anon_sym_REG_RAX] = ACTIONS(174),
    [anon_sym_REG_RCX] = ACTIONS(174),
    [anon_sym_REG_RDX] = ACTIONS(174),
    [anon_sym_REG_RBX] = ACTIONS(174),
    [anon_sym_REG_RSP] = ACTIONS(174),
    [anon_sym_REG_RBP] = ACTIONS(174),
    [anon_sym_REG_RSI] = ACTIONS(174),
    [anon_sym_REG_RDI] = ACTIONS(174),
    [anon_sym_REG_R8] = ACTIONS(174),
    [anon_sym_REG_R9] = ACTIONS(174),
    [anon_sym_REG_R10] = ACTIONS(174),
    [anon_sym_REG_R11] = ACTIONS(174),
    [anon_sym_REG_R12] = ACTIONS(174),
    [anon_sym_REG_R13] = ACTIONS(174),
    [anon_sym_REG_R14] = ACTIONS(174),
    [anon_sym_REG_NONE] = ACTIONS(174),
    [anon_sym_HALT] = ACTIONS(174),
    [anon_sym_NOP] = ACTIONS(174),
    [anon_sym_RRMOVQ] = ACTIONS(174),
    [anon_sym_IRMOVQ] = ACTIONS(174),
    [anon_sym_RMMOVQ] = ACTIONS(174),
    [anon_sym_MRMOVQ] = ACTIONS(174),
    [anon_sym_OPQ] = ACTIONS(174),
    [anon_sym_JXX] = ACTIONS(174),
    [anon_sym_CALL] = ACTIONS(174),
    [anon_sym_RET] = ACTIONS(174),
    [anon_sym_PUSHQ] = ACTIONS(174),
    [anon_sym_POPQ] = ACTIONS(174),
    [anon_sym_CMOVXX] = ACTIONS(174),
    [anon_sym_ALWAYS] = ACTIONS(174),
    [anon_sym_LE] = ACTIONS(174),
    [anon_sym_LT2] = ACTIONS(174),
    [anon_sym_EQ2] = ACTIONS(174),
    [anon_sym_NE] = ACTIONS(174),
    [anon_sym_GE] = ACTIONS(174),
    [anon_sym_GT2] = ACTIONS(174),
    [anon_sym_ADDQ] = ACTIONS(174),
    [anon_sym_SUBQ] = ACTIONS(174),
    [anon_sym_ANDQ] = ACTIONS(174),
    [anon_sym_XORQ] = ACTIONS(174),
    [sym_identifier] = ACTIONS(177),
    [sym_number] = ACTIONS(180),
    [anon_sym_true] = ACTIONS(183),
    [anon_sym_TRUE] = ACTIONS(183),
    [anon_sym_false] = ACTIONS(186),
    [anon_sym_FALSE] = ACTIONS(186),
    [sym_comment] = ACTIONS(27),
  },
  [34] = {
    [sym_number] = ACTIONS(189),
    [sym_comment] = ACTIONS(27),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [anon_sym_wire] = ACTIONS(193),
    [anon_sym_register] = ACTIONS(193),
    [anon_sym_const] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(191),
    [anon_sym_BANG] = ACTIONS(191),
    [anon_sym_TILDE] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(191),
    [anon_sym_PLUS] = ACTIONS(191),
    [anon_sym_STAT_BUB] = ACTIONS(193),
    [anon_sym_STAT_AOK] = ACTIONS(193),
    [anon_sym_STAT_HLT] = ACTIONS(193),
    [anon_sym_STAT_ADR] = ACTIONS(193),
    [anon_sym_STAT_INS] = ACTIONS(193),
    [anon_sym_STAT_PIP] = ACTIONS(193),
    [anon_sym_REG_RAX] = ACTIONS(193),
    [anon_sym_REG_RCX] = ACTIONS(193),
    [anon_sym_REG_RDX] = ACTIONS(193),
    [anon_sym_REG_RBX] = ACTIONS(193),
    [anon_sym_REG_RSP] = ACTIONS(193),
    [anon_sym_REG_RBP] = ACTIONS(193),
    [anon_sym_REG_RSI] = ACTIONS(193),
    [anon_sym_REG_RDI] = ACTIONS(193),
    [anon_sym_REG_R8] = ACTIONS(193),
    [anon_sym_REG_R9] = ACTIONS(193),
    [anon_sym_REG_R10] = ACTIONS(193),
    [anon_sym_REG_R11] = ACTIONS(193),
    [anon_sym_REG_R12] = ACTIONS(193),
    [anon_sym_REG_R13] = ACTIONS(193),
    [anon_sym_REG_R14] = ACTIONS(193),
    [anon_sym_REG_NONE] = ACTIONS(193),
    [anon_sym_HALT] = ACTIONS(193),
    [anon_sym_NOP] = ACTIONS(193),
    [anon_sym_RRMOVQ] = ACTIONS(193),
    [anon_sym_IRMOVQ] = ACTIONS(193),
    [anon_sym_RMMOVQ] = ACTIONS(193),
    [anon_sym_MRMOVQ] = ACTIONS(193),
    [anon_sym_OPQ] = ACTIONS(193),
    [anon_sym_JXX] = ACTIONS(193),
    [anon_sym_CALL] = ACTIONS(193),
    [anon_sym_RET] = ACTIONS(193),
    [anon_sym_PUSHQ] = ACTIONS(193),
    [anon_sym_POPQ] = ACTIONS(193),
    [anon_sym_CMOVXX] = ACTIONS(193),
    [anon_sym_ALWAYS] = ACTIONS(193),
    [anon_sym_LE] = ACTIONS(193),
    [anon_sym_LT2] = ACTIONS(193),
    [anon_sym_EQ2] = ACTIONS(193),
    [anon_sym_NE] = ACTIONS(193),
    [anon_sym_GE] = ACTIONS(193),
    [anon_sym_GT2] = ACTIONS(193),
    [anon_sym_ADDQ] = ACTIONS(193),
    [anon_sym_SUBQ] = ACTIONS(193),
    [anon_sym_ANDQ] = ACTIONS(193),
    [anon_sym_XORQ] = ACTIONS(193),
    [sym_identifier] = ACTIONS(193),
    [sym_number] = ACTIONS(191),
    [anon_sym_true] = ACTIONS(193),
    [anon_sym_TRUE] = ACTIONS(193),
    [anon_sym_false] = ACTIONS(193),
    [anon_sym_FALSE] = ACTIONS(193),
    [sym_comment] = ACTIONS(27),
  },
  [36] = {
    [sym_variable_declarator] = STATE(62),
    [sym_identifier] = ACTIONS(29),
    [sym_comment] = ACTIONS(27),
  },
  [37] = {
    [aux_sym_wire_declaration_repeat1] = STATE(64),
    [anon_sym_SEMI] = ACTIONS(195),
    [anon_sym_COMMA] = ACTIONS(95),
    [sym_comment] = ACTIONS(27),
  },
  [38] = {
    [sym_variable_declarator] = STATE(66),
    [sym__register_expression_statement] = STATE(67),
    [aux_sym_register_declaration_repeat1] = STATE(67),
    [anon_sym_RBRACE] = ACTIONS(197),
    [sym_identifier] = ACTIONS(29),
    [sym_comment] = ACTIONS(27),
  },
  [39] = {
    [sym__expression] = STATE(68),
    [sym_assignment_expression] = STATE(68),
    [sym_mux_expression] = STATE(68),
    [sym_in_expression] = STATE(68),
    [sym_slice_expression] = STATE(68),
    [sym_unary_expression] = STATE(68),
    [sym_binary_expression] = STATE(68),
    [sym_predefined_constant] = STATE(68),
    [sym_true] = STATE(68),
    [sym_false] = STATE(68),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_number] = ACTIONS(199),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [40] = {
    [anon_sym_EQ] = ACTIONS(201),
    [sym_comment] = ACTIONS(27),
  },
  [41] = {
    [sym__expression] = STATE(70),
    [sym_assignment_expression] = STATE(70),
    [sym_mux_expression] = STATE(70),
    [sym_in_expression] = STATE(70),
    [sym_slice_expression] = STATE(70),
    [sym_unary_expression] = STATE(70),
    [sym_binary_expression] = STATE(70),
    [sym_predefined_constant] = STATE(70),
    [sym_true] = STATE(70),
    [sym_false] = STATE(70),
    [anon_sym_const] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(39),
    [sym_number] = ACTIONS(203),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [42] = {
    [sym__expression] = STATE(71),
    [sym_assignment_expression] = STATE(71),
    [sym_mux_expression] = STATE(71),
    [sym_in_expression] = STATE(71),
    [sym_slice_expression] = STATE(71),
    [sym_unary_expression] = STATE(71),
    [sym_binary_expression] = STATE(71),
    [sym_predefined_constant] = STATE(71),
    [sym_true] = STATE(71),
    [sym_false] = STATE(71),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_number] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [43] = {
    [sym__expression] = STATE(72),
    [sym_assignment_expression] = STATE(72),
    [sym_mux_expression] = STATE(72),
    [sym_in_expression] = STATE(72),
    [sym_slice_expression] = STATE(72),
    [sym_unary_expression] = STATE(72),
    [sym_binary_expression] = STATE(72),
    [sym_predefined_constant] = STATE(72),
    [sym_true] = STATE(72),
    [sym_false] = STATE(72),
    [anon_sym_const] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(39),
    [sym_number] = ACTIONS(207),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [44] = {
    [sym__expression] = STATE(73),
    [sym_assignment_expression] = STATE(73),
    [sym_mux_expression] = STATE(73),
    [sym_in_expression] = STATE(73),
    [sym_slice_expression] = STATE(73),
    [sym_unary_expression] = STATE(73),
    [sym_binary_expression] = STATE(73),
    [sym_predefined_constant] = STATE(73),
    [sym_true] = STATE(73),
    [sym_false] = STATE(73),
    [anon_sym_const] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(39),
    [sym_number] = ACTIONS(209),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [45] = {
    [sym__expression] = STATE(74),
    [sym_assignment_expression] = STATE(74),
    [sym_mux_expression] = STATE(74),
    [sym_in_expression] = STATE(74),
    [sym_slice_expression] = STATE(74),
    [sym_unary_expression] = STATE(74),
    [sym_binary_expression] = STATE(74),
    [sym_predefined_constant] = STATE(74),
    [sym_true] = STATE(74),
    [sym_false] = STATE(74),
    [anon_sym_const] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(39),
    [sym_number] = ACTIONS(211),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [46] = {
    [sym__expression] = STATE(75),
    [sym_assignment_expression] = STATE(75),
    [sym_mux_expression] = STATE(75),
    [sym_in_expression] = STATE(75),
    [sym_slice_expression] = STATE(75),
    [sym_unary_expression] = STATE(75),
    [sym_binary_expression] = STATE(75),
    [sym_predefined_constant] = STATE(75),
    [sym_true] = STATE(75),
    [sym_false] = STATE(75),
    [anon_sym_const] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(39),
    [sym_number] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [47] = {
    [sym__expression] = STATE(60),
    [sym_assignment_expression] = STATE(60),
    [sym_mux_expression] = STATE(60),
    [sym_in_expression] = STATE(60),
    [sym_slice_expression] = STATE(60),
    [sym_unary_expression] = STATE(60),
    [sym_binary_expression] = STATE(60),
    [sym_predefined_constant] = STATE(60),
    [sym_true] = STATE(60),
    [sym_false] = STATE(60),
    [anon_sym_const] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(39),
    [sym_number] = ACTIONS(155),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [48] = {
    [anon_sym_SEMI] = ACTIONS(215),
    [anon_sym_COMMA] = ACTIONS(215),
    [anon_sym_COLON] = ACTIONS(215),
    [anon_sym_RBRACE] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(215),
    [anon_sym_RBRACK] = ACTIONS(215),
    [anon_sym_in] = ACTIONS(215),
    [anon_sym_DOT_DOT] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(215),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_EQ_EQ] = ACTIONS(215),
    [anon_sym_BANG_EQ] = ACTIONS(215),
    [anon_sym_GT_EQ] = ACTIONS(215),
    [anon_sym_LT_EQ] = ACTIONS(215),
    [anon_sym_GT] = ACTIONS(217),
    [anon_sym_LT] = ACTIONS(217),
    [anon_sym_AMP_AMP] = ACTIONS(215),
    [anon_sym_PIPE_PIPE] = ACTIONS(215),
    [anon_sym_STAR] = ACTIONS(215),
    [anon_sym_SLASH] = ACTIONS(217),
    [anon_sym_GT_GT] = ACTIONS(217),
    [anon_sym_GT_GT_GT] = ACTIONS(215),
    [anon_sym_LT_LT] = ACTIONS(215),
    [anon_sym_AMP] = ACTIONS(217),
    [anon_sym_PIPE] = ACTIONS(217),
    [anon_sym_CARET] = ACTIONS(215),
    [sym_comment] = ACTIONS(27),
  },
  [49] = {
    [sym__expression] = STATE(21),
    [sym_assignment_expression] = STATE(21),
    [sym_mux_expression] = STATE(21),
    [sym_in_expression] = STATE(21),
    [sym_slice_expression] = STATE(21),
    [sym_unary_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_predefined_constant] = STATE(21),
    [sym_true] = STATE(21),
    [sym_false] = STATE(21),
    [aux_sym_mux_expression_repeat1] = STATE(49),
    [anon_sym_const] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(222),
    [anon_sym_RBRACK] = ACTIONS(225),
    [anon_sym_BANG] = ACTIONS(227),
    [anon_sym_TILDE] = ACTIONS(227),
    [anon_sym_DASH] = ACTIONS(227),
    [anon_sym_PLUS] = ACTIONS(227),
    [anon_sym_STAT_BUB] = ACTIONS(230),
    [anon_sym_STAT_AOK] = ACTIONS(230),
    [anon_sym_STAT_HLT] = ACTIONS(230),
    [anon_sym_STAT_ADR] = ACTIONS(230),
    [anon_sym_STAT_INS] = ACTIONS(230),
    [anon_sym_STAT_PIP] = ACTIONS(230),
    [anon_sym_REG_RAX] = ACTIONS(230),
    [anon_sym_REG_RCX] = ACTIONS(230),
    [anon_sym_REG_RDX] = ACTIONS(230),
    [anon_sym_REG_RBX] = ACTIONS(230),
    [anon_sym_REG_RSP] = ACTIONS(230),
    [anon_sym_REG_RBP] = ACTIONS(230),
    [anon_sym_REG_RSI] = ACTIONS(230),
    [anon_sym_REG_RDI] = ACTIONS(230),
    [anon_sym_REG_R8] = ACTIONS(230),
    [anon_sym_REG_R9] = ACTIONS(230),
    [anon_sym_REG_R10] = ACTIONS(230),
    [anon_sym_REG_R11] = ACTIONS(230),
    [anon_sym_REG_R12] = ACTIONS(230),
    [anon_sym_REG_R13] = ACTIONS(230),
    [anon_sym_REG_R14] = ACTIONS(230),
    [anon_sym_REG_NONE] = ACTIONS(230),
    [anon_sym_HALT] = ACTIONS(230),
    [anon_sym_NOP] = ACTIONS(230),
    [anon_sym_RRMOVQ] = ACTIONS(230),
    [anon_sym_IRMOVQ] = ACTIONS(230),
    [anon_sym_RMMOVQ] = ACTIONS(230),
    [anon_sym_MRMOVQ] = ACTIONS(230),
    [anon_sym_OPQ] = ACTIONS(230),
    [anon_sym_JXX] = ACTIONS(230),
    [anon_sym_CALL] = ACTIONS(230),
    [anon_sym_RET] = ACTIONS(230),
    [anon_sym_PUSHQ] = ACTIONS(230),
    [anon_sym_POPQ] = ACTIONS(230),
    [anon_sym_CMOVXX] = ACTIONS(230),
    [anon_sym_ALWAYS] = ACTIONS(230),
    [anon_sym_LE] = ACTIONS(230),
    [anon_sym_LT2] = ACTIONS(230),
    [anon_sym_EQ2] = ACTIONS(230),
    [anon_sym_NE] = ACTIONS(230),
    [anon_sym_GE] = ACTIONS(230),
    [anon_sym_GT2] = ACTIONS(230),
    [anon_sym_ADDQ] = ACTIONS(230),
    [anon_sym_SUBQ] = ACTIONS(230),
    [anon_sym_ANDQ] = ACTIONS(230),
    [anon_sym_XORQ] = ACTIONS(230),
    [sym_identifier] = ACTIONS(233),
    [sym_number] = ACTIONS(236),
    [anon_sym_true] = ACTIONS(239),
    [anon_sym_TRUE] = ACTIONS(239),
    [anon_sym_false] = ACTIONS(242),
    [anon_sym_FALSE] = ACTIONS(242),
    [sym_comment] = ACTIONS(27),
  },
  [50] = {
    [anon_sym_SEMI] = ACTIONS(245),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_in] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_EQ_EQ] = ACTIONS(73),
    [anon_sym_BANG_EQ] = ACTIONS(73),
    [anon_sym_GT_EQ] = ACTIONS(73),
    [anon_sym_LT_EQ] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(75),
    [anon_sym_AMP_AMP] = ACTIONS(77),
    [anon_sym_PIPE_PIPE] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym_GT_GT] = ACTIONS(83),
    [anon_sym_GT_GT_GT] = ACTIONS(81),
    [anon_sym_LT_LT] = ACTIONS(81),
    [anon_sym_AMP] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(87),
    [anon_sym_CARET] = ACTIONS(79),
    [sym_comment] = ACTIONS(27),
  },
  [51] = {
    [sym_identifier] = ACTIONS(247),
    [sym_comment] = ACTIONS(27),
  },
  [52] = {
    [sym__expression] = STATE(23),
    [sym_assignment_expression] = STATE(23),
    [sym_mux_expression] = STATE(23),
    [sym_in_expression] = STATE(23),
    [sym_slice_expression] = STATE(23),
    [sym_unary_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_predefined_constant] = STATE(23),
    [sym_true] = STATE(23),
    [sym_false] = STATE(23),
    [anon_sym_const] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(139),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(141),
    [sym_number] = ACTIONS(43),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [53] = {
    [anon_sym_EQ] = ACTIONS(249),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_in] = ACTIONS(49),
    [anon_sym_DOT_DOT] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_SLASH] = ACTIONS(53),
    [anon_sym_GT_GT] = ACTIONS(53),
    [anon_sym_GT_GT_GT] = ACTIONS(49),
    [anon_sym_LT_LT] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(53),
    [anon_sym_CARET] = ACTIONS(49),
    [sym_comment] = ACTIONS(27),
  },
  [54] = {
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_in] = ACTIONS(69),
    [anon_sym_DOT_DOT] = ACTIONS(251),
    [anon_sym_DASH] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_EQ_EQ] = ACTIONS(255),
    [anon_sym_BANG_EQ] = ACTIONS(255),
    [anon_sym_GT_EQ] = ACTIONS(255),
    [anon_sym_LT_EQ] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(257),
    [anon_sym_LT] = ACTIONS(257),
    [anon_sym_AMP_AMP] = ACTIONS(259),
    [anon_sym_PIPE_PIPE] = ACTIONS(261),
    [anon_sym_STAR] = ACTIONS(263),
    [anon_sym_SLASH] = ACTIONS(265),
    [anon_sym_GT_GT] = ACTIONS(265),
    [anon_sym_GT_GT_GT] = ACTIONS(263),
    [anon_sym_LT_LT] = ACTIONS(263),
    [anon_sym_AMP] = ACTIONS(267),
    [anon_sym_PIPE] = ACTIONS(269),
    [anon_sym_CARET] = ACTIONS(261),
    [sym_comment] = ACTIONS(27),
  },
  [55] = {
    [sym__expression] = STATE(88),
    [sym_assignment_expression] = STATE(88),
    [sym_mux_expression] = STATE(88),
    [sym_in_expression] = STATE(88),
    [sym_slice_expression] = STATE(88),
    [sym_unary_expression] = STATE(88),
    [sym_binary_expression] = STATE(88),
    [sym_predefined_constant] = STATE(88),
    [sym_true] = STATE(88),
    [sym_false] = STATE(88),
    [anon_sym_RBRACE] = ACTIONS(271),
    [anon_sym_const] = ACTIONS(273),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(275),
    [anon_sym_TILDE] = ACTIONS(275),
    [anon_sym_DASH] = ACTIONS(275),
    [anon_sym_PLUS] = ACTIONS(275),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(277),
    [sym_number] = ACTIONS(279),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [56] = {
    [anon_sym_SEMI] = ACTIONS(281),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_in] = ACTIONS(281),
    [anon_sym_DASH] = ACTIONS(281),
    [anon_sym_PLUS] = ACTIONS(281),
    [anon_sym_EQ_EQ] = ACTIONS(73),
    [anon_sym_BANG_EQ] = ACTIONS(73),
    [anon_sym_GT_EQ] = ACTIONS(73),
    [anon_sym_LT_EQ] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(75),
    [anon_sym_AMP_AMP] = ACTIONS(281),
    [anon_sym_PIPE_PIPE] = ACTIONS(281),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym_GT_GT] = ACTIONS(83),
    [anon_sym_GT_GT_GT] = ACTIONS(81),
    [anon_sym_LT_LT] = ACTIONS(81),
    [anon_sym_AMP] = ACTIONS(283),
    [anon_sym_PIPE] = ACTIONS(283),
    [anon_sym_CARET] = ACTIONS(281),
    [sym_comment] = ACTIONS(27),
  },
  [57] = {
    [anon_sym_SEMI] = ACTIONS(281),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_in] = ACTIONS(281),
    [anon_sym_DASH] = ACTIONS(281),
    [anon_sym_PLUS] = ACTIONS(281),
    [anon_sym_EQ_EQ] = ACTIONS(281),
    [anon_sym_BANG_EQ] = ACTIONS(281),
    [anon_sym_GT_EQ] = ACTIONS(281),
    [anon_sym_LT_EQ] = ACTIONS(281),
    [anon_sym_GT] = ACTIONS(283),
    [anon_sym_LT] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(281),
    [anon_sym_PIPE_PIPE] = ACTIONS(281),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym_GT_GT] = ACTIONS(83),
    [anon_sym_GT_GT_GT] = ACTIONS(81),
    [anon_sym_LT_LT] = ACTIONS(81),
    [anon_sym_AMP] = ACTIONS(283),
    [anon_sym_PIPE] = ACTIONS(283),
    [anon_sym_CARET] = ACTIONS(281),
    [sym_comment] = ACTIONS(27),
  },
  [58] = {
    [anon_sym_SEMI] = ACTIONS(281),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_in] = ACTIONS(281),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_EQ_EQ] = ACTIONS(73),
    [anon_sym_BANG_EQ] = ACTIONS(73),
    [anon_sym_GT_EQ] = ACTIONS(73),
    [anon_sym_LT_EQ] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(75),
    [anon_sym_AMP_AMP] = ACTIONS(281),
    [anon_sym_PIPE_PIPE] = ACTIONS(281),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym_GT_GT] = ACTIONS(83),
    [anon_sym_GT_GT_GT] = ACTIONS(81),
    [anon_sym_LT_LT] = ACTIONS(81),
    [anon_sym_AMP] = ACTIONS(283),
    [anon_sym_PIPE] = ACTIONS(283),
    [anon_sym_CARET] = ACTIONS(281),
    [sym_comment] = ACTIONS(27),
  },
  [59] = {
    [anon_sym_SEMI] = ACTIONS(281),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_in] = ACTIONS(281),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_EQ_EQ] = ACTIONS(73),
    [anon_sym_BANG_EQ] = ACTIONS(73),
    [anon_sym_GT_EQ] = ACTIONS(73),
    [anon_sym_LT_EQ] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(75),
    [anon_sym_AMP_AMP] = ACTIONS(77),
    [anon_sym_PIPE_PIPE] = ACTIONS(281),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym_GT_GT] = ACTIONS(83),
    [anon_sym_GT_GT_GT] = ACTIONS(81),
    [anon_sym_LT_LT] = ACTIONS(81),
    [anon_sym_AMP] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(283),
    [anon_sym_CARET] = ACTIONS(281),
    [sym_comment] = ACTIONS(27),
  },
  [60] = {
    [anon_sym_SEMI] = ACTIONS(281),
    [anon_sym_COMMA] = ACTIONS(281),
    [anon_sym_COLON] = ACTIONS(281),
    [anon_sym_RBRACE] = ACTIONS(281),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_RBRACK] = ACTIONS(281),
    [anon_sym_in] = ACTIONS(281),
    [anon_sym_DOT_DOT] = ACTIONS(281),
    [anon_sym_DASH] = ACTIONS(281),
    [anon_sym_PLUS] = ACTIONS(281),
    [anon_sym_EQ_EQ] = ACTIONS(281),
    [anon_sym_BANG_EQ] = ACTIONS(281),
    [anon_sym_GT_EQ] = ACTIONS(281),
    [anon_sym_LT_EQ] = ACTIONS(281),
    [anon_sym_GT] = ACTIONS(283),
    [anon_sym_LT] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(281),
    [anon_sym_PIPE_PIPE] = ACTIONS(281),
    [anon_sym_STAR] = ACTIONS(281),
    [anon_sym_SLASH] = ACTIONS(283),
    [anon_sym_GT_GT] = ACTIONS(283),
    [anon_sym_GT_GT_GT] = ACTIONS(281),
    [anon_sym_LT_LT] = ACTIONS(281),
    [anon_sym_AMP] = ACTIONS(283),
    [anon_sym_PIPE] = ACTIONS(283),
    [anon_sym_CARET] = ACTIONS(281),
    [sym_comment] = ACTIONS(27),
  },
  [61] = {
    [anon_sym_SEMI] = ACTIONS(285),
    [anon_sym_COMMA] = ACTIONS(285),
    [anon_sym_EQ] = ACTIONS(285),
    [sym_comment] = ACTIONS(27),
  },
  [62] = {
    [anon_sym_SEMI] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(287),
    [sym_comment] = ACTIONS(27),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(289),
    [anon_sym_wire] = ACTIONS(291),
    [anon_sym_register] = ACTIONS(291),
    [anon_sym_const] = ACTIONS(291),
    [anon_sym_LBRACK] = ACTIONS(289),
    [anon_sym_BANG] = ACTIONS(289),
    [anon_sym_TILDE] = ACTIONS(289),
    [anon_sym_DASH] = ACTIONS(289),
    [anon_sym_PLUS] = ACTIONS(289),
    [anon_sym_STAT_BUB] = ACTIONS(291),
    [anon_sym_STAT_AOK] = ACTIONS(291),
    [anon_sym_STAT_HLT] = ACTIONS(291),
    [anon_sym_STAT_ADR] = ACTIONS(291),
    [anon_sym_STAT_INS] = ACTIONS(291),
    [anon_sym_STAT_PIP] = ACTIONS(291),
    [anon_sym_REG_RAX] = ACTIONS(291),
    [anon_sym_REG_RCX] = ACTIONS(291),
    [anon_sym_REG_RDX] = ACTIONS(291),
    [anon_sym_REG_RBX] = ACTIONS(291),
    [anon_sym_REG_RSP] = ACTIONS(291),
    [anon_sym_REG_RBP] = ACTIONS(291),
    [anon_sym_REG_RSI] = ACTIONS(291),
    [anon_sym_REG_RDI] = ACTIONS(291),
    [anon_sym_REG_R8] = ACTIONS(291),
    [anon_sym_REG_R9] = ACTIONS(291),
    [anon_sym_REG_R10] = ACTIONS(291),
    [anon_sym_REG_R11] = ACTIONS(291),
    [anon_sym_REG_R12] = ACTIONS(291),
    [anon_sym_REG_R13] = ACTIONS(291),
    [anon_sym_REG_R14] = ACTIONS(291),
    [anon_sym_REG_NONE] = ACTIONS(291),
    [anon_sym_HALT] = ACTIONS(291),
    [anon_sym_NOP] = ACTIONS(291),
    [anon_sym_RRMOVQ] = ACTIONS(291),
    [anon_sym_IRMOVQ] = ACTIONS(291),
    [anon_sym_RMMOVQ] = ACTIONS(291),
    [anon_sym_MRMOVQ] = ACTIONS(291),
    [anon_sym_OPQ] = ACTIONS(291),
    [anon_sym_JXX] = ACTIONS(291),
    [anon_sym_CALL] = ACTIONS(291),
    [anon_sym_RET] = ACTIONS(291),
    [anon_sym_PUSHQ] = ACTIONS(291),
    [anon_sym_POPQ] = ACTIONS(291),
    [anon_sym_CMOVXX] = ACTIONS(291),
    [anon_sym_ALWAYS] = ACTIONS(291),
    [anon_sym_LE] = ACTIONS(291),
    [anon_sym_LT2] = ACTIONS(291),
    [anon_sym_EQ2] = ACTIONS(291),
    [anon_sym_NE] = ACTIONS(291),
    [anon_sym_GE] = ACTIONS(291),
    [anon_sym_GT2] = ACTIONS(291),
    [anon_sym_ADDQ] = ACTIONS(291),
    [anon_sym_SUBQ] = ACTIONS(291),
    [anon_sym_ANDQ] = ACTIONS(291),
    [anon_sym_XORQ] = ACTIONS(291),
    [sym_identifier] = ACTIONS(291),
    [sym_number] = ACTIONS(289),
    [anon_sym_true] = ACTIONS(291),
    [anon_sym_TRUE] = ACTIONS(291),
    [anon_sym_false] = ACTIONS(291),
    [anon_sym_FALSE] = ACTIONS(291),
    [sym_comment] = ACTIONS(27),
  },
  [64] = {
    [aux_sym_wire_declaration_repeat1] = STATE(64),
    [anon_sym_SEMI] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(293),
    [sym_comment] = ACTIONS(27),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(296),
    [anon_sym_wire] = ACTIONS(298),
    [anon_sym_register] = ACTIONS(298),
    [anon_sym_const] = ACTIONS(298),
    [anon_sym_LBRACK] = ACTIONS(296),
    [anon_sym_BANG] = ACTIONS(296),
    [anon_sym_TILDE] = ACTIONS(296),
    [anon_sym_DASH] = ACTIONS(296),
    [anon_sym_PLUS] = ACTIONS(296),
    [anon_sym_STAT_BUB] = ACTIONS(298),
    [anon_sym_STAT_AOK] = ACTIONS(298),
    [anon_sym_STAT_HLT] = ACTIONS(298),
    [anon_sym_STAT_ADR] = ACTIONS(298),
    [anon_sym_STAT_INS] = ACTIONS(298),
    [anon_sym_STAT_PIP] = ACTIONS(298),
    [anon_sym_REG_RAX] = ACTIONS(298),
    [anon_sym_REG_RCX] = ACTIONS(298),
    [anon_sym_REG_RDX] = ACTIONS(298),
    [anon_sym_REG_RBX] = ACTIONS(298),
    [anon_sym_REG_RSP] = ACTIONS(298),
    [anon_sym_REG_RBP] = ACTIONS(298),
    [anon_sym_REG_RSI] = ACTIONS(298),
    [anon_sym_REG_RDI] = ACTIONS(298),
    [anon_sym_REG_R8] = ACTIONS(298),
    [anon_sym_REG_R9] = ACTIONS(298),
    [anon_sym_REG_R10] = ACTIONS(298),
    [anon_sym_REG_R11] = ACTIONS(298),
    [anon_sym_REG_R12] = ACTIONS(298),
    [anon_sym_REG_R13] = ACTIONS(298),
    [anon_sym_REG_R14] = ACTIONS(298),
    [anon_sym_REG_NONE] = ACTIONS(298),
    [anon_sym_HALT] = ACTIONS(298),
    [anon_sym_NOP] = ACTIONS(298),
    [anon_sym_RRMOVQ] = ACTIONS(298),
    [anon_sym_IRMOVQ] = ACTIONS(298),
    [anon_sym_RMMOVQ] = ACTIONS(298),
    [anon_sym_MRMOVQ] = ACTIONS(298),
    [anon_sym_OPQ] = ACTIONS(298),
    [anon_sym_JXX] = ACTIONS(298),
    [anon_sym_CALL] = ACTIONS(298),
    [anon_sym_RET] = ACTIONS(298),
    [anon_sym_PUSHQ] = ACTIONS(298),
    [anon_sym_POPQ] = ACTIONS(298),
    [anon_sym_CMOVXX] = ACTIONS(298),
    [anon_sym_ALWAYS] = ACTIONS(298),
    [anon_sym_LE] = ACTIONS(298),
    [anon_sym_LT2] = ACTIONS(298),
    [anon_sym_EQ2] = ACTIONS(298),
    [anon_sym_NE] = ACTIONS(298),
    [anon_sym_GE] = ACTIONS(298),
    [anon_sym_GT2] = ACTIONS(298),
    [anon_sym_ADDQ] = ACTIONS(298),
    [anon_sym_SUBQ] = ACTIONS(298),
    [anon_sym_ANDQ] = ACTIONS(298),
    [anon_sym_XORQ] = ACTIONS(298),
    [sym_identifier] = ACTIONS(298),
    [sym_number] = ACTIONS(296),
    [anon_sym_true] = ACTIONS(298),
    [anon_sym_TRUE] = ACTIONS(298),
    [anon_sym_false] = ACTIONS(298),
    [anon_sym_FALSE] = ACTIONS(298),
    [sym_comment] = ACTIONS(27),
  },
  [66] = {
    [anon_sym_EQ] = ACTIONS(300),
    [sym_comment] = ACTIONS(27),
  },
  [67] = {
    [sym_variable_declarator] = STATE(66),
    [sym__register_expression_statement] = STATE(91),
    [aux_sym_register_declaration_repeat1] = STATE(91),
    [anon_sym_RBRACE] = ACTIONS(302),
    [sym_identifier] = ACTIONS(29),
    [sym_comment] = ACTIONS(27),
  },
  [68] = {
    [anon_sym_SEMI] = ACTIONS(304),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_in] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_EQ_EQ] = ACTIONS(73),
    [anon_sym_BANG_EQ] = ACTIONS(73),
    [anon_sym_GT_EQ] = ACTIONS(73),
    [anon_sym_LT_EQ] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(75),
    [anon_sym_AMP_AMP] = ACTIONS(77),
    [anon_sym_PIPE_PIPE] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym_GT_GT] = ACTIONS(83),
    [anon_sym_GT_GT_GT] = ACTIONS(81),
    [anon_sym_LT_LT] = ACTIONS(81),
    [anon_sym_AMP] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(87),
    [anon_sym_CARET] = ACTIONS(79),
    [sym_comment] = ACTIONS(27),
  },
  [69] = {
    [sym__expression] = STATE(92),
    [sym_assignment_expression] = STATE(92),
    [sym_mux_expression] = STATE(92),
    [sym_in_expression] = STATE(92),
    [sym_slice_expression] = STATE(92),
    [sym_unary_expression] = STATE(92),
    [sym_binary_expression] = STATE(92),
    [sym_predefined_constant] = STATE(92),
    [sym_true] = STATE(92),
    [sym_false] = STATE(92),
    [anon_sym_const] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(39),
    [sym_number] = ACTIONS(306),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [70] = {
    [anon_sym_COLON] = ACTIONS(245),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_in] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_EQ_EQ] = ACTIONS(109),
    [anon_sym_BANG_EQ] = ACTIONS(109),
    [anon_sym_GT_EQ] = ACTIONS(109),
    [anon_sym_LT_EQ] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(111),
    [anon_sym_LT] = ACTIONS(111),
    [anon_sym_AMP_AMP] = ACTIONS(113),
    [anon_sym_PIPE_PIPE] = ACTIONS(115),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(119),
    [anon_sym_GT_GT] = ACTIONS(119),
    [anon_sym_GT_GT_GT] = ACTIONS(117),
    [anon_sym_LT_LT] = ACTIONS(117),
    [anon_sym_AMP] = ACTIONS(121),
    [anon_sym_PIPE] = ACTIONS(123),
    [anon_sym_CARET] = ACTIONS(115),
    [sym_comment] = ACTIONS(27),
  },
  [71] = {
    [anon_sym_SEMI] = ACTIONS(308),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_in] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_EQ_EQ] = ACTIONS(73),
    [anon_sym_BANG_EQ] = ACTIONS(73),
    [anon_sym_GT_EQ] = ACTIONS(73),
    [anon_sym_LT_EQ] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(75),
    [anon_sym_AMP_AMP] = ACTIONS(77),
    [anon_sym_PIPE_PIPE] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym_GT_GT] = ACTIONS(83),
    [anon_sym_GT_GT_GT] = ACTIONS(81),
    [anon_sym_LT_LT] = ACTIONS(81),
    [anon_sym_AMP] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(87),
    [anon_sym_CARET] = ACTIONS(79),
    [sym_comment] = ACTIONS(27),
  },
  [72] = {
    [anon_sym_COLON] = ACTIONS(281),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_in] = ACTIONS(281),
    [anon_sym_DASH] = ACTIONS(281),
    [anon_sym_PLUS] = ACTIONS(281),
    [anon_sym_EQ_EQ] = ACTIONS(109),
    [anon_sym_BANG_EQ] = ACTIONS(109),
    [anon_sym_GT_EQ] = ACTIONS(109),
    [anon_sym_LT_EQ] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(111),
    [anon_sym_LT] = ACTIONS(111),
    [anon_sym_AMP_AMP] = ACTIONS(281),
    [anon_sym_PIPE_PIPE] = ACTIONS(281),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(119),
    [anon_sym_GT_GT] = ACTIONS(119),
    [anon_sym_GT_GT_GT] = ACTIONS(117),
    [anon_sym_LT_LT] = ACTIONS(117),
    [anon_sym_AMP] = ACTIONS(283),
    [anon_sym_PIPE] = ACTIONS(283),
    [anon_sym_CARET] = ACTIONS(281),
    [sym_comment] = ACTIONS(27),
  },
  [73] = {
    [anon_sym_COLON] = ACTIONS(281),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_in] = ACTIONS(281),
    [anon_sym_DASH] = ACTIONS(281),
    [anon_sym_PLUS] = ACTIONS(281),
    [anon_sym_EQ_EQ] = ACTIONS(281),
    [anon_sym_BANG_EQ] = ACTIONS(281),
    [anon_sym_GT_EQ] = ACTIONS(281),
    [anon_sym_LT_EQ] = ACTIONS(281),
    [anon_sym_GT] = ACTIONS(283),
    [anon_sym_LT] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(281),
    [anon_sym_PIPE_PIPE] = ACTIONS(281),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(119),
    [anon_sym_GT_GT] = ACTIONS(119),
    [anon_sym_GT_GT_GT] = ACTIONS(117),
    [anon_sym_LT_LT] = ACTIONS(117),
    [anon_sym_AMP] = ACTIONS(283),
    [anon_sym_PIPE] = ACTIONS(283),
    [anon_sym_CARET] = ACTIONS(281),
    [sym_comment] = ACTIONS(27),
  },
  [74] = {
    [anon_sym_COLON] = ACTIONS(281),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_in] = ACTIONS(281),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_EQ_EQ] = ACTIONS(109),
    [anon_sym_BANG_EQ] = ACTIONS(109),
    [anon_sym_GT_EQ] = ACTIONS(109),
    [anon_sym_LT_EQ] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(111),
    [anon_sym_LT] = ACTIONS(111),
    [anon_sym_AMP_AMP] = ACTIONS(281),
    [anon_sym_PIPE_PIPE] = ACTIONS(281),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(119),
    [anon_sym_GT_GT] = ACTIONS(119),
    [anon_sym_GT_GT_GT] = ACTIONS(117),
    [anon_sym_LT_LT] = ACTIONS(117),
    [anon_sym_AMP] = ACTIONS(283),
    [anon_sym_PIPE] = ACTIONS(283),
    [anon_sym_CARET] = ACTIONS(281),
    [sym_comment] = ACTIONS(27),
  },
  [75] = {
    [anon_sym_COLON] = ACTIONS(281),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_in] = ACTIONS(281),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_EQ_EQ] = ACTIONS(109),
    [anon_sym_BANG_EQ] = ACTIONS(109),
    [anon_sym_GT_EQ] = ACTIONS(109),
    [anon_sym_LT_EQ] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(111),
    [anon_sym_LT] = ACTIONS(111),
    [anon_sym_AMP_AMP] = ACTIONS(113),
    [anon_sym_PIPE_PIPE] = ACTIONS(281),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(119),
    [anon_sym_GT_GT] = ACTIONS(119),
    [anon_sym_GT_GT_GT] = ACTIONS(117),
    [anon_sym_LT_LT] = ACTIONS(117),
    [anon_sym_AMP] = ACTIONS(121),
    [anon_sym_PIPE] = ACTIONS(283),
    [anon_sym_CARET] = ACTIONS(281),
    [sym_comment] = ACTIONS(27),
  },
  [76] = {
    [anon_sym_EQ] = ACTIONS(310),
    [sym_comment] = ACTIONS(27),
  },
  [77] = {
    [sym__expression] = STATE(95),
    [sym_assignment_expression] = STATE(95),
    [sym_mux_expression] = STATE(95),
    [sym_in_expression] = STATE(95),
    [sym_slice_expression] = STATE(95),
    [sym_unary_expression] = STATE(95),
    [sym_binary_expression] = STATE(95),
    [sym_predefined_constant] = STATE(95),
    [sym_true] = STATE(95),
    [sym_false] = STATE(95),
    [anon_sym_const] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(139),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(141),
    [sym_number] = ACTIONS(312),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [78] = {
    [sym__expression] = STATE(99),
    [sym_assignment_expression] = STATE(99),
    [sym_mux_expression] = STATE(99),
    [sym_in_expression] = STATE(99),
    [sym_slice_expression] = STATE(99),
    [sym_unary_expression] = STATE(99),
    [sym_binary_expression] = STATE(99),
    [sym_predefined_constant] = STATE(99),
    [sym_true] = STATE(99),
    [sym_false] = STATE(99),
    [anon_sym_const] = ACTIONS(314),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(316),
    [anon_sym_TILDE] = ACTIONS(316),
    [anon_sym_DASH] = ACTIONS(316),
    [anon_sym_PLUS] = ACTIONS(316),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(318),
    [sym_number] = ACTIONS(320),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [79] = {
    [sym__expression] = STATE(100),
    [sym_assignment_expression] = STATE(100),
    [sym_mux_expression] = STATE(100),
    [sym_in_expression] = STATE(100),
    [sym_slice_expression] = STATE(100),
    [sym_unary_expression] = STATE(100),
    [sym_binary_expression] = STATE(100),
    [sym_predefined_constant] = STATE(100),
    [sym_true] = STATE(100),
    [sym_false] = STATE(100),
    [anon_sym_const] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(139),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(141),
    [sym_number] = ACTIONS(322),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [80] = {
    [sym__expression] = STATE(101),
    [sym_assignment_expression] = STATE(101),
    [sym_mux_expression] = STATE(101),
    [sym_in_expression] = STATE(101),
    [sym_slice_expression] = STATE(101),
    [sym_unary_expression] = STATE(101),
    [sym_binary_expression] = STATE(101),
    [sym_predefined_constant] = STATE(101),
    [sym_true] = STATE(101),
    [sym_false] = STATE(101),
    [anon_sym_const] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(139),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(141),
    [sym_number] = ACTIONS(324),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [81] = {
    [sym__expression] = STATE(102),
    [sym_assignment_expression] = STATE(102),
    [sym_mux_expression] = STATE(102),
    [sym_in_expression] = STATE(102),
    [sym_slice_expression] = STATE(102),
    [sym_unary_expression] = STATE(102),
    [sym_binary_expression] = STATE(102),
    [sym_predefined_constant] = STATE(102),
    [sym_true] = STATE(102),
    [sym_false] = STATE(102),
    [anon_sym_const] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(139),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(141),
    [sym_number] = ACTIONS(326),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [82] = {
    [sym__expression] = STATE(103),
    [sym_assignment_expression] = STATE(103),
    [sym_mux_expression] = STATE(103),
    [sym_in_expression] = STATE(103),
    [sym_slice_expression] = STATE(103),
    [sym_unary_expression] = STATE(103),
    [sym_binary_expression] = STATE(103),
    [sym_predefined_constant] = STATE(103),
    [sym_true] = STATE(103),
    [sym_false] = STATE(103),
    [anon_sym_const] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(139),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(141),
    [sym_number] = ACTIONS(328),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [83] = {
    [sym__expression] = STATE(60),
    [sym_assignment_expression] = STATE(60),
    [sym_mux_expression] = STATE(60),
    [sym_in_expression] = STATE(60),
    [sym_slice_expression] = STATE(60),
    [sym_unary_expression] = STATE(60),
    [sym_binary_expression] = STATE(60),
    [sym_predefined_constant] = STATE(60),
    [sym_true] = STATE(60),
    [sym_false] = STATE(60),
    [anon_sym_const] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(139),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(141),
    [sym_number] = ACTIONS(155),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [84] = {
    [anon_sym_SEMI] = ACTIONS(330),
    [anon_sym_COMMA] = ACTIONS(330),
    [anon_sym_COLON] = ACTIONS(330),
    [anon_sym_RBRACE] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_RBRACK] = ACTIONS(330),
    [anon_sym_in] = ACTIONS(330),
    [anon_sym_DOT_DOT] = ACTIONS(330),
    [anon_sym_DASH] = ACTIONS(330),
    [anon_sym_PLUS] = ACTIONS(330),
    [anon_sym_EQ_EQ] = ACTIONS(330),
    [anon_sym_BANG_EQ] = ACTIONS(330),
    [anon_sym_GT_EQ] = ACTIONS(330),
    [anon_sym_LT_EQ] = ACTIONS(330),
    [anon_sym_GT] = ACTIONS(332),
    [anon_sym_LT] = ACTIONS(332),
    [anon_sym_AMP_AMP] = ACTIONS(330),
    [anon_sym_PIPE_PIPE] = ACTIONS(330),
    [anon_sym_STAR] = ACTIONS(330),
    [anon_sym_SLASH] = ACTIONS(332),
    [anon_sym_GT_GT] = ACTIONS(332),
    [anon_sym_GT_GT_GT] = ACTIONS(330),
    [anon_sym_LT_LT] = ACTIONS(330),
    [anon_sym_AMP] = ACTIONS(332),
    [anon_sym_PIPE] = ACTIONS(332),
    [anon_sym_CARET] = ACTIONS(330),
    [sym_comment] = ACTIONS(27),
  },
  [85] = {
    [sym_identifier] = ACTIONS(334),
    [sym_comment] = ACTIONS(27),
  },
  [86] = {
    [sym__expression] = STATE(23),
    [sym_assignment_expression] = STATE(23),
    [sym_mux_expression] = STATE(23),
    [sym_in_expression] = STATE(23),
    [sym_slice_expression] = STATE(23),
    [sym_unary_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_predefined_constant] = STATE(23),
    [sym_true] = STATE(23),
    [sym_false] = STATE(23),
    [anon_sym_const] = ACTIONS(273),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(275),
    [anon_sym_TILDE] = ACTIONS(275),
    [anon_sym_DASH] = ACTIONS(275),
    [anon_sym_PLUS] = ACTIONS(275),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(277),
    [sym_number] = ACTIONS(43),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [87] = {
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(336),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_in] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_SLASH] = ACTIONS(53),
    [anon_sym_GT_GT] = ACTIONS(53),
    [anon_sym_GT_GT_GT] = ACTIONS(49),
    [anon_sym_LT_LT] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(53),
    [anon_sym_CARET] = ACTIONS(49),
    [sym_comment] = ACTIONS(27),
  },
  [88] = {
    [aux_sym_in_expression_repeat1] = STATE(113),
    [anon_sym_COMMA] = ACTIONS(338),
    [anon_sym_RBRACE] = ACTIONS(340),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_in] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(342),
    [anon_sym_PLUS] = ACTIONS(342),
    [anon_sym_EQ_EQ] = ACTIONS(344),
    [anon_sym_BANG_EQ] = ACTIONS(344),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_GT] = ACTIONS(346),
    [anon_sym_LT] = ACTIONS(346),
    [anon_sym_AMP_AMP] = ACTIONS(348),
    [anon_sym_PIPE_PIPE] = ACTIONS(350),
    [anon_sym_STAR] = ACTIONS(352),
    [anon_sym_SLASH] = ACTIONS(354),
    [anon_sym_GT_GT] = ACTIONS(354),
    [anon_sym_GT_GT_GT] = ACTIONS(352),
    [anon_sym_LT_LT] = ACTIONS(352),
    [anon_sym_AMP] = ACTIONS(356),
    [anon_sym_PIPE] = ACTIONS(358),
    [anon_sym_CARET] = ACTIONS(350),
    [sym_comment] = ACTIONS(27),
  },
  [89] = {
    [sym__expression] = STATE(114),
    [sym_assignment_expression] = STATE(114),
    [sym_mux_expression] = STATE(114),
    [sym_in_expression] = STATE(114),
    [sym_slice_expression] = STATE(114),
    [sym_unary_expression] = STATE(114),
    [sym_binary_expression] = STATE(114),
    [sym_predefined_constant] = STATE(114),
    [sym_true] = STATE(114),
    [sym_false] = STATE(114),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_number] = ACTIONS(360),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [90] = {
    [ts_builtin_sym_end] = ACTIONS(362),
    [anon_sym_wire] = ACTIONS(364),
    [anon_sym_register] = ACTIONS(364),
    [anon_sym_const] = ACTIONS(364),
    [anon_sym_LBRACK] = ACTIONS(362),
    [anon_sym_BANG] = ACTIONS(362),
    [anon_sym_TILDE] = ACTIONS(362),
    [anon_sym_DASH] = ACTIONS(362),
    [anon_sym_PLUS] = ACTIONS(362),
    [anon_sym_STAT_BUB] = ACTIONS(364),
    [anon_sym_STAT_AOK] = ACTIONS(364),
    [anon_sym_STAT_HLT] = ACTIONS(364),
    [anon_sym_STAT_ADR] = ACTIONS(364),
    [anon_sym_STAT_INS] = ACTIONS(364),
    [anon_sym_STAT_PIP] = ACTIONS(364),
    [anon_sym_REG_RAX] = ACTIONS(364),
    [anon_sym_REG_RCX] = ACTIONS(364),
    [anon_sym_REG_RDX] = ACTIONS(364),
    [anon_sym_REG_RBX] = ACTIONS(364),
    [anon_sym_REG_RSP] = ACTIONS(364),
    [anon_sym_REG_RBP] = ACTIONS(364),
    [anon_sym_REG_RSI] = ACTIONS(364),
    [anon_sym_REG_RDI] = ACTIONS(364),
    [anon_sym_REG_R8] = ACTIONS(364),
    [anon_sym_REG_R9] = ACTIONS(364),
    [anon_sym_REG_R10] = ACTIONS(364),
    [anon_sym_REG_R11] = ACTIONS(364),
    [anon_sym_REG_R12] = ACTIONS(364),
    [anon_sym_REG_R13] = ACTIONS(364),
    [anon_sym_REG_R14] = ACTIONS(364),
    [anon_sym_REG_NONE] = ACTIONS(364),
    [anon_sym_HALT] = ACTIONS(364),
    [anon_sym_NOP] = ACTIONS(364),
    [anon_sym_RRMOVQ] = ACTIONS(364),
    [anon_sym_IRMOVQ] = ACTIONS(364),
    [anon_sym_RMMOVQ] = ACTIONS(364),
    [anon_sym_MRMOVQ] = ACTIONS(364),
    [anon_sym_OPQ] = ACTIONS(364),
    [anon_sym_JXX] = ACTIONS(364),
    [anon_sym_CALL] = ACTIONS(364),
    [anon_sym_RET] = ACTIONS(364),
    [anon_sym_PUSHQ] = ACTIONS(364),
    [anon_sym_POPQ] = ACTIONS(364),
    [anon_sym_CMOVXX] = ACTIONS(364),
    [anon_sym_ALWAYS] = ACTIONS(364),
    [anon_sym_LE] = ACTIONS(364),
    [anon_sym_LT2] = ACTIONS(364),
    [anon_sym_EQ2] = ACTIONS(364),
    [anon_sym_NE] = ACTIONS(364),
    [anon_sym_GE] = ACTIONS(364),
    [anon_sym_GT2] = ACTIONS(364),
    [anon_sym_ADDQ] = ACTIONS(364),
    [anon_sym_SUBQ] = ACTIONS(364),
    [anon_sym_ANDQ] = ACTIONS(364),
    [anon_sym_XORQ] = ACTIONS(364),
    [sym_identifier] = ACTIONS(364),
    [sym_number] = ACTIONS(362),
    [anon_sym_true] = ACTIONS(364),
    [anon_sym_TRUE] = ACTIONS(364),
    [anon_sym_false] = ACTIONS(364),
    [anon_sym_FALSE] = ACTIONS(364),
    [sym_comment] = ACTIONS(27),
  },
  [91] = {
    [sym_variable_declarator] = STATE(66),
    [sym__register_expression_statement] = STATE(91),
    [aux_sym_register_declaration_repeat1] = STATE(91),
    [anon_sym_RBRACE] = ACTIONS(366),
    [sym_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(27),
  },
  [92] = {
    [anon_sym_COLON] = ACTIONS(304),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_in] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_EQ_EQ] = ACTIONS(109),
    [anon_sym_BANG_EQ] = ACTIONS(109),
    [anon_sym_GT_EQ] = ACTIONS(109),
    [anon_sym_LT_EQ] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(111),
    [anon_sym_LT] = ACTIONS(111),
    [anon_sym_AMP_AMP] = ACTIONS(113),
    [anon_sym_PIPE_PIPE] = ACTIONS(115),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(119),
    [anon_sym_GT_GT] = ACTIONS(119),
    [anon_sym_GT_GT_GT] = ACTIONS(117),
    [anon_sym_LT_LT] = ACTIONS(117),
    [anon_sym_AMP] = ACTIONS(121),
    [anon_sym_PIPE] = ACTIONS(123),
    [anon_sym_CARET] = ACTIONS(115),
    [sym_comment] = ACTIONS(27),
  },
  [93] = {
    [anon_sym_const] = ACTIONS(371),
    [anon_sym_LBRACK] = ACTIONS(373),
    [anon_sym_RBRACK] = ACTIONS(373),
    [anon_sym_BANG] = ACTIONS(373),
    [anon_sym_TILDE] = ACTIONS(373),
    [anon_sym_DASH] = ACTIONS(373),
    [anon_sym_PLUS] = ACTIONS(373),
    [anon_sym_STAT_BUB] = ACTIONS(371),
    [anon_sym_STAT_AOK] = ACTIONS(371),
    [anon_sym_STAT_HLT] = ACTIONS(371),
    [anon_sym_STAT_ADR] = ACTIONS(371),
    [anon_sym_STAT_INS] = ACTIONS(371),
    [anon_sym_STAT_PIP] = ACTIONS(371),
    [anon_sym_REG_RAX] = ACTIONS(371),
    [anon_sym_REG_RCX] = ACTIONS(371),
    [anon_sym_REG_RDX] = ACTIONS(371),
    [anon_sym_REG_RBX] = ACTIONS(371),
    [anon_sym_REG_RSP] = ACTIONS(371),
    [anon_sym_REG_RBP] = ACTIONS(371),
    [anon_sym_REG_RSI] = ACTIONS(371),
    [anon_sym_REG_RDI] = ACTIONS(371),
    [anon_sym_REG_R8] = ACTIONS(371),
    [anon_sym_REG_R9] = ACTIONS(371),
    [anon_sym_REG_R10] = ACTIONS(371),
    [anon_sym_REG_R11] = ACTIONS(371),
    [anon_sym_REG_R12] = ACTIONS(371),
    [anon_sym_REG_R13] = ACTIONS(371),
    [anon_sym_REG_R14] = ACTIONS(371),
    [anon_sym_REG_NONE] = ACTIONS(371),
    [anon_sym_HALT] = ACTIONS(371),
    [anon_sym_NOP] = ACTIONS(371),
    [anon_sym_RRMOVQ] = ACTIONS(371),
    [anon_sym_IRMOVQ] = ACTIONS(371),
    [anon_sym_RMMOVQ] = ACTIONS(371),
    [anon_sym_MRMOVQ] = ACTIONS(371),
    [anon_sym_OPQ] = ACTIONS(371),
    [anon_sym_JXX] = ACTIONS(371),
    [anon_sym_CALL] = ACTIONS(371),
    [anon_sym_RET] = ACTIONS(371),
    [anon_sym_PUSHQ] = ACTIONS(371),
    [anon_sym_POPQ] = ACTIONS(371),
    [anon_sym_CMOVXX] = ACTIONS(371),
    [anon_sym_ALWAYS] = ACTIONS(371),
    [anon_sym_LE] = ACTIONS(371),
    [anon_sym_LT2] = ACTIONS(371),
    [anon_sym_EQ2] = ACTIONS(371),
    [anon_sym_NE] = ACTIONS(371),
    [anon_sym_GE] = ACTIONS(371),
    [anon_sym_GT2] = ACTIONS(371),
    [anon_sym_ADDQ] = ACTIONS(371),
    [anon_sym_SUBQ] = ACTIONS(371),
    [anon_sym_ANDQ] = ACTIONS(371),
    [anon_sym_XORQ] = ACTIONS(371),
    [sym_identifier] = ACTIONS(371),
    [sym_number] = ACTIONS(373),
    [anon_sym_true] = ACTIONS(371),
    [anon_sym_TRUE] = ACTIONS(371),
    [anon_sym_false] = ACTIONS(371),
    [anon_sym_FALSE] = ACTIONS(371),
    [sym_comment] = ACTIONS(27),
  },
  [94] = {
    [sym__expression] = STATE(115),
    [sym_assignment_expression] = STATE(115),
    [sym_mux_expression] = STATE(115),
    [sym_in_expression] = STATE(115),
    [sym_slice_expression] = STATE(115),
    [sym_unary_expression] = STATE(115),
    [sym_binary_expression] = STATE(115),
    [sym_predefined_constant] = STATE(115),
    [sym_true] = STATE(115),
    [sym_false] = STATE(115),
    [anon_sym_const] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(139),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(141),
    [sym_number] = ACTIONS(375),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [95] = {
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_in] = ACTIONS(69),
    [anon_sym_DOT_DOT] = ACTIONS(245),
    [anon_sym_DASH] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_EQ_EQ] = ACTIONS(255),
    [anon_sym_BANG_EQ] = ACTIONS(255),
    [anon_sym_GT_EQ] = ACTIONS(255),
    [anon_sym_LT_EQ] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(257),
    [anon_sym_LT] = ACTIONS(257),
    [anon_sym_AMP_AMP] = ACTIONS(259),
    [anon_sym_PIPE_PIPE] = ACTIONS(261),
    [anon_sym_STAR] = ACTIONS(263),
    [anon_sym_SLASH] = ACTIONS(265),
    [anon_sym_GT_GT] = ACTIONS(265),
    [anon_sym_GT_GT_GT] = ACTIONS(263),
    [anon_sym_LT_LT] = ACTIONS(263),
    [anon_sym_AMP] = ACTIONS(267),
    [anon_sym_PIPE] = ACTIONS(269),
    [anon_sym_CARET] = ACTIONS(261),
    [sym_comment] = ACTIONS(27),
  },
  [96] = {
    [sym_identifier] = ACTIONS(377),
    [sym_comment] = ACTIONS(27),
  },
  [97] = {
    [sym__expression] = STATE(23),
    [sym_assignment_expression] = STATE(23),
    [sym_mux_expression] = STATE(23),
    [sym_in_expression] = STATE(23),
    [sym_slice_expression] = STATE(23),
    [sym_unary_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_predefined_constant] = STATE(23),
    [sym_true] = STATE(23),
    [sym_false] = STATE(23),
    [anon_sym_const] = ACTIONS(314),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(316),
    [anon_sym_TILDE] = ACTIONS(316),
    [anon_sym_DASH] = ACTIONS(316),
    [anon_sym_PLUS] = ACTIONS(316),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(318),
    [sym_number] = ACTIONS(43),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [98] = {
    [anon_sym_EQ] = ACTIONS(379),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_RBRACK] = ACTIONS(49),
    [anon_sym_in] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_SLASH] = ACTIONS(53),
    [anon_sym_GT_GT] = ACTIONS(53),
    [anon_sym_GT_GT_GT] = ACTIONS(49),
    [anon_sym_LT_LT] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(53),
    [anon_sym_CARET] = ACTIONS(49),
    [sym_comment] = ACTIONS(27),
  },
  [99] = {
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_RBRACK] = ACTIONS(381),
    [anon_sym_in] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(383),
    [anon_sym_PLUS] = ACTIONS(383),
    [anon_sym_EQ_EQ] = ACTIONS(385),
    [anon_sym_BANG_EQ] = ACTIONS(385),
    [anon_sym_GT_EQ] = ACTIONS(385),
    [anon_sym_LT_EQ] = ACTIONS(385),
    [anon_sym_GT] = ACTIONS(387),
    [anon_sym_LT] = ACTIONS(387),
    [anon_sym_AMP_AMP] = ACTIONS(389),
    [anon_sym_PIPE_PIPE] = ACTIONS(391),
    [anon_sym_STAR] = ACTIONS(393),
    [anon_sym_SLASH] = ACTIONS(395),
    [anon_sym_GT_GT] = ACTIONS(395),
    [anon_sym_GT_GT_GT] = ACTIONS(393),
    [anon_sym_LT_LT] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(397),
    [anon_sym_PIPE] = ACTIONS(399),
    [anon_sym_CARET] = ACTIONS(391),
    [sym_comment] = ACTIONS(27),
  },
  [100] = {
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_in] = ACTIONS(281),
    [anon_sym_DOT_DOT] = ACTIONS(281),
    [anon_sym_DASH] = ACTIONS(281),
    [anon_sym_PLUS] = ACTIONS(281),
    [anon_sym_EQ_EQ] = ACTIONS(255),
    [anon_sym_BANG_EQ] = ACTIONS(255),
    [anon_sym_GT_EQ] = ACTIONS(255),
    [anon_sym_LT_EQ] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(257),
    [anon_sym_LT] = ACTIONS(257),
    [anon_sym_AMP_AMP] = ACTIONS(281),
    [anon_sym_PIPE_PIPE] = ACTIONS(281),
    [anon_sym_STAR] = ACTIONS(263),
    [anon_sym_SLASH] = ACTIONS(265),
    [anon_sym_GT_GT] = ACTIONS(265),
    [anon_sym_GT_GT_GT] = ACTIONS(263),
    [anon_sym_LT_LT] = ACTIONS(263),
    [anon_sym_AMP] = ACTIONS(283),
    [anon_sym_PIPE] = ACTIONS(283),
    [anon_sym_CARET] = ACTIONS(281),
    [sym_comment] = ACTIONS(27),
  },
  [101] = {
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_in] = ACTIONS(281),
    [anon_sym_DOT_DOT] = ACTIONS(281),
    [anon_sym_DASH] = ACTIONS(281),
    [anon_sym_PLUS] = ACTIONS(281),
    [anon_sym_EQ_EQ] = ACTIONS(281),
    [anon_sym_BANG_EQ] = ACTIONS(281),
    [anon_sym_GT_EQ] = ACTIONS(281),
    [anon_sym_LT_EQ] = ACTIONS(281),
    [anon_sym_GT] = ACTIONS(283),
    [anon_sym_LT] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(281),
    [anon_sym_PIPE_PIPE] = ACTIONS(281),
    [anon_sym_STAR] = ACTIONS(263),
    [anon_sym_SLASH] = ACTIONS(265),
    [anon_sym_GT_GT] = ACTIONS(265),
    [anon_sym_GT_GT_GT] = ACTIONS(263),
    [anon_sym_LT_LT] = ACTIONS(263),
    [anon_sym_AMP] = ACTIONS(283),
    [anon_sym_PIPE] = ACTIONS(283),
    [anon_sym_CARET] = ACTIONS(281),
    [sym_comment] = ACTIONS(27),
  },
  [102] = {
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_in] = ACTIONS(281),
    [anon_sym_DOT_DOT] = ACTIONS(281),
    [anon_sym_DASH] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_EQ_EQ] = ACTIONS(255),
    [anon_sym_BANG_EQ] = ACTIONS(255),
    [anon_sym_GT_EQ] = ACTIONS(255),
    [anon_sym_LT_EQ] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(257),
    [anon_sym_LT] = ACTIONS(257),
    [anon_sym_AMP_AMP] = ACTIONS(281),
    [anon_sym_PIPE_PIPE] = ACTIONS(281),
    [anon_sym_STAR] = ACTIONS(263),
    [anon_sym_SLASH] = ACTIONS(265),
    [anon_sym_GT_GT] = ACTIONS(265),
    [anon_sym_GT_GT_GT] = ACTIONS(263),
    [anon_sym_LT_LT] = ACTIONS(263),
    [anon_sym_AMP] = ACTIONS(283),
    [anon_sym_PIPE] = ACTIONS(283),
    [anon_sym_CARET] = ACTIONS(281),
    [sym_comment] = ACTIONS(27),
  },
  [103] = {
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_in] = ACTIONS(281),
    [anon_sym_DOT_DOT] = ACTIONS(281),
    [anon_sym_DASH] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_EQ_EQ] = ACTIONS(255),
    [anon_sym_BANG_EQ] = ACTIONS(255),
    [anon_sym_GT_EQ] = ACTIONS(255),
    [anon_sym_LT_EQ] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(257),
    [anon_sym_LT] = ACTIONS(257),
    [anon_sym_AMP_AMP] = ACTIONS(259),
    [anon_sym_PIPE_PIPE] = ACTIONS(281),
    [anon_sym_STAR] = ACTIONS(263),
    [anon_sym_SLASH] = ACTIONS(265),
    [anon_sym_GT_GT] = ACTIONS(265),
    [anon_sym_GT_GT_GT] = ACTIONS(263),
    [anon_sym_LT_LT] = ACTIONS(263),
    [anon_sym_AMP] = ACTIONS(267),
    [anon_sym_PIPE] = ACTIONS(283),
    [anon_sym_CARET] = ACTIONS(281),
    [sym_comment] = ACTIONS(27),
  },
  [104] = {
    [anon_sym_EQ] = ACTIONS(401),
    [sym_comment] = ACTIONS(27),
  },
  [105] = {
    [sym__expression] = STATE(125),
    [sym_assignment_expression] = STATE(125),
    [sym_mux_expression] = STATE(125),
    [sym_in_expression] = STATE(125),
    [sym_slice_expression] = STATE(125),
    [sym_unary_expression] = STATE(125),
    [sym_binary_expression] = STATE(125),
    [sym_predefined_constant] = STATE(125),
    [sym_true] = STATE(125),
    [sym_false] = STATE(125),
    [anon_sym_const] = ACTIONS(273),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(275),
    [anon_sym_TILDE] = ACTIONS(275),
    [anon_sym_DASH] = ACTIONS(275),
    [anon_sym_PLUS] = ACTIONS(275),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(277),
    [sym_number] = ACTIONS(403),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [106] = {
    [sym__expression] = STATE(126),
    [sym_assignment_expression] = STATE(126),
    [sym_mux_expression] = STATE(126),
    [sym_in_expression] = STATE(126),
    [sym_slice_expression] = STATE(126),
    [sym_unary_expression] = STATE(126),
    [sym_binary_expression] = STATE(126),
    [sym_predefined_constant] = STATE(126),
    [sym_true] = STATE(126),
    [sym_false] = STATE(126),
    [anon_sym_const] = ACTIONS(273),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(275),
    [anon_sym_TILDE] = ACTIONS(275),
    [anon_sym_DASH] = ACTIONS(275),
    [anon_sym_PLUS] = ACTIONS(275),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(277),
    [sym_number] = ACTIONS(405),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [107] = {
    [anon_sym_SEMI] = ACTIONS(407),
    [anon_sym_COMMA] = ACTIONS(407),
    [anon_sym_COLON] = ACTIONS(407),
    [anon_sym_RBRACE] = ACTIONS(407),
    [anon_sym_LBRACK] = ACTIONS(407),
    [anon_sym_RBRACK] = ACTIONS(407),
    [anon_sym_in] = ACTIONS(407),
    [anon_sym_DOT_DOT] = ACTIONS(407),
    [anon_sym_DASH] = ACTIONS(407),
    [anon_sym_PLUS] = ACTIONS(407),
    [anon_sym_EQ_EQ] = ACTIONS(407),
    [anon_sym_BANG_EQ] = ACTIONS(407),
    [anon_sym_GT_EQ] = ACTIONS(407),
    [anon_sym_LT_EQ] = ACTIONS(407),
    [anon_sym_GT] = ACTIONS(409),
    [anon_sym_LT] = ACTIONS(409),
    [anon_sym_AMP_AMP] = ACTIONS(407),
    [anon_sym_PIPE_PIPE] = ACTIONS(407),
    [anon_sym_STAR] = ACTIONS(407),
    [anon_sym_SLASH] = ACTIONS(409),
    [anon_sym_GT_GT] = ACTIONS(409),
    [anon_sym_GT_GT_GT] = ACTIONS(407),
    [anon_sym_LT_LT] = ACTIONS(407),
    [anon_sym_AMP] = ACTIONS(409),
    [anon_sym_PIPE] = ACTIONS(409),
    [anon_sym_CARET] = ACTIONS(407),
    [sym_comment] = ACTIONS(27),
  },
  [108] = {
    [sym__expression] = STATE(127),
    [sym_assignment_expression] = STATE(127),
    [sym_mux_expression] = STATE(127),
    [sym_in_expression] = STATE(127),
    [sym_slice_expression] = STATE(127),
    [sym_unary_expression] = STATE(127),
    [sym_binary_expression] = STATE(127),
    [sym_predefined_constant] = STATE(127),
    [sym_true] = STATE(127),
    [sym_false] = STATE(127),
    [anon_sym_const] = ACTIONS(273),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(275),
    [anon_sym_TILDE] = ACTIONS(275),
    [anon_sym_DASH] = ACTIONS(275),
    [anon_sym_PLUS] = ACTIONS(275),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(277),
    [sym_number] = ACTIONS(411),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [109] = {
    [sym__expression] = STATE(128),
    [sym_assignment_expression] = STATE(128),
    [sym_mux_expression] = STATE(128),
    [sym_in_expression] = STATE(128),
    [sym_slice_expression] = STATE(128),
    [sym_unary_expression] = STATE(128),
    [sym_binary_expression] = STATE(128),
    [sym_predefined_constant] = STATE(128),
    [sym_true] = STATE(128),
    [sym_false] = STATE(128),
    [anon_sym_const] = ACTIONS(273),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(275),
    [anon_sym_TILDE] = ACTIONS(275),
    [anon_sym_DASH] = ACTIONS(275),
    [anon_sym_PLUS] = ACTIONS(275),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(277),
    [sym_number] = ACTIONS(413),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [110] = {
    [sym__expression] = STATE(129),
    [sym_assignment_expression] = STATE(129),
    [sym_mux_expression] = STATE(129),
    [sym_in_expression] = STATE(129),
    [sym_slice_expression] = STATE(129),
    [sym_unary_expression] = STATE(129),
    [sym_binary_expression] = STATE(129),
    [sym_predefined_constant] = STATE(129),
    [sym_true] = STATE(129),
    [sym_false] = STATE(129),
    [anon_sym_const] = ACTIONS(273),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(275),
    [anon_sym_TILDE] = ACTIONS(275),
    [anon_sym_DASH] = ACTIONS(275),
    [anon_sym_PLUS] = ACTIONS(275),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(277),
    [sym_number] = ACTIONS(415),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [111] = {
    [sym__expression] = STATE(130),
    [sym_assignment_expression] = STATE(130),
    [sym_mux_expression] = STATE(130),
    [sym_in_expression] = STATE(130),
    [sym_slice_expression] = STATE(130),
    [sym_unary_expression] = STATE(130),
    [sym_binary_expression] = STATE(130),
    [sym_predefined_constant] = STATE(130),
    [sym_true] = STATE(130),
    [sym_false] = STATE(130),
    [anon_sym_const] = ACTIONS(273),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(275),
    [anon_sym_TILDE] = ACTIONS(275),
    [anon_sym_DASH] = ACTIONS(275),
    [anon_sym_PLUS] = ACTIONS(275),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(277),
    [sym_number] = ACTIONS(417),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [112] = {
    [sym__expression] = STATE(60),
    [sym_assignment_expression] = STATE(60),
    [sym_mux_expression] = STATE(60),
    [sym_in_expression] = STATE(60),
    [sym_slice_expression] = STATE(60),
    [sym_unary_expression] = STATE(60),
    [sym_binary_expression] = STATE(60),
    [sym_predefined_constant] = STATE(60),
    [sym_true] = STATE(60),
    [sym_false] = STATE(60),
    [anon_sym_const] = ACTIONS(273),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(275),
    [anon_sym_TILDE] = ACTIONS(275),
    [anon_sym_DASH] = ACTIONS(275),
    [anon_sym_PLUS] = ACTIONS(275),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(277),
    [sym_number] = ACTIONS(155),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [113] = {
    [aux_sym_in_expression_repeat1] = STATE(132),
    [anon_sym_COMMA] = ACTIONS(338),
    [anon_sym_RBRACE] = ACTIONS(419),
    [sym_comment] = ACTIONS(27),
  },
  [114] = {
    [anon_sym_SEMI] = ACTIONS(421),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_in] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_EQ_EQ] = ACTIONS(73),
    [anon_sym_BANG_EQ] = ACTIONS(73),
    [anon_sym_GT_EQ] = ACTIONS(73),
    [anon_sym_LT_EQ] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(75),
    [anon_sym_AMP_AMP] = ACTIONS(77),
    [anon_sym_PIPE_PIPE] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym_GT_GT] = ACTIONS(83),
    [anon_sym_GT_GT_GT] = ACTIONS(81),
    [anon_sym_LT_LT] = ACTIONS(81),
    [anon_sym_AMP] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(87),
    [anon_sym_CARET] = ACTIONS(79),
    [sym_comment] = ACTIONS(27),
  },
  [115] = {
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_in] = ACTIONS(69),
    [anon_sym_DOT_DOT] = ACTIONS(304),
    [anon_sym_DASH] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_EQ_EQ] = ACTIONS(255),
    [anon_sym_BANG_EQ] = ACTIONS(255),
    [anon_sym_GT_EQ] = ACTIONS(255),
    [anon_sym_LT_EQ] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(257),
    [anon_sym_LT] = ACTIONS(257),
    [anon_sym_AMP_AMP] = ACTIONS(259),
    [anon_sym_PIPE_PIPE] = ACTIONS(261),
    [anon_sym_STAR] = ACTIONS(263),
    [anon_sym_SLASH] = ACTIONS(265),
    [anon_sym_GT_GT] = ACTIONS(265),
    [anon_sym_GT_GT_GT] = ACTIONS(263),
    [anon_sym_LT_LT] = ACTIONS(263),
    [anon_sym_AMP] = ACTIONS(267),
    [anon_sym_PIPE] = ACTIONS(269),
    [anon_sym_CARET] = ACTIONS(261),
    [sym_comment] = ACTIONS(27),
  },
  [116] = {
    [anon_sym_EQ] = ACTIONS(423),
    [sym_comment] = ACTIONS(27),
  },
  [117] = {
    [sym__expression] = STATE(135),
    [sym_assignment_expression] = STATE(135),
    [sym_mux_expression] = STATE(135),
    [sym_in_expression] = STATE(135),
    [sym_slice_expression] = STATE(135),
    [sym_unary_expression] = STATE(135),
    [sym_binary_expression] = STATE(135),
    [sym_predefined_constant] = STATE(135),
    [sym_true] = STATE(135),
    [sym_false] = STATE(135),
    [anon_sym_const] = ACTIONS(314),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(316),
    [anon_sym_TILDE] = ACTIONS(316),
    [anon_sym_DASH] = ACTIONS(316),
    [anon_sym_PLUS] = ACTIONS(316),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(318),
    [sym_number] = ACTIONS(425),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [118] = {
    [anon_sym_SEMI] = ACTIONS(427),
    [anon_sym_COMMA] = ACTIONS(427),
    [anon_sym_COLON] = ACTIONS(427),
    [anon_sym_RBRACE] = ACTIONS(427),
    [anon_sym_LBRACK] = ACTIONS(427),
    [anon_sym_RBRACK] = ACTIONS(427),
    [anon_sym_in] = ACTIONS(427),
    [anon_sym_DOT_DOT] = ACTIONS(427),
    [anon_sym_DASH] = ACTIONS(427),
    [anon_sym_PLUS] = ACTIONS(427),
    [anon_sym_EQ_EQ] = ACTIONS(427),
    [anon_sym_BANG_EQ] = ACTIONS(427),
    [anon_sym_GT_EQ] = ACTIONS(427),
    [anon_sym_LT_EQ] = ACTIONS(427),
    [anon_sym_GT] = ACTIONS(429),
    [anon_sym_LT] = ACTIONS(429),
    [anon_sym_AMP_AMP] = ACTIONS(427),
    [anon_sym_PIPE_PIPE] = ACTIONS(427),
    [anon_sym_STAR] = ACTIONS(427),
    [anon_sym_SLASH] = ACTIONS(429),
    [anon_sym_GT_GT] = ACTIONS(429),
    [anon_sym_GT_GT_GT] = ACTIONS(427),
    [anon_sym_LT_LT] = ACTIONS(427),
    [anon_sym_AMP] = ACTIONS(429),
    [anon_sym_PIPE] = ACTIONS(429),
    [anon_sym_CARET] = ACTIONS(427),
    [sym_comment] = ACTIONS(27),
  },
  [119] = {
    [sym__expression] = STATE(136),
    [sym_assignment_expression] = STATE(136),
    [sym_mux_expression] = STATE(136),
    [sym_in_expression] = STATE(136),
    [sym_slice_expression] = STATE(136),
    [sym_unary_expression] = STATE(136),
    [sym_binary_expression] = STATE(136),
    [sym_predefined_constant] = STATE(136),
    [sym_true] = STATE(136),
    [sym_false] = STATE(136),
    [anon_sym_const] = ACTIONS(314),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(316),
    [anon_sym_TILDE] = ACTIONS(316),
    [anon_sym_DASH] = ACTIONS(316),
    [anon_sym_PLUS] = ACTIONS(316),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(318),
    [sym_number] = ACTIONS(431),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [120] = {
    [sym__expression] = STATE(137),
    [sym_assignment_expression] = STATE(137),
    [sym_mux_expression] = STATE(137),
    [sym_in_expression] = STATE(137),
    [sym_slice_expression] = STATE(137),
    [sym_unary_expression] = STATE(137),
    [sym_binary_expression] = STATE(137),
    [sym_predefined_constant] = STATE(137),
    [sym_true] = STATE(137),
    [sym_false] = STATE(137),
    [anon_sym_const] = ACTIONS(314),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(316),
    [anon_sym_TILDE] = ACTIONS(316),
    [anon_sym_DASH] = ACTIONS(316),
    [anon_sym_PLUS] = ACTIONS(316),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(318),
    [sym_number] = ACTIONS(433),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [121] = {
    [sym__expression] = STATE(138),
    [sym_assignment_expression] = STATE(138),
    [sym_mux_expression] = STATE(138),
    [sym_in_expression] = STATE(138),
    [sym_slice_expression] = STATE(138),
    [sym_unary_expression] = STATE(138),
    [sym_binary_expression] = STATE(138),
    [sym_predefined_constant] = STATE(138),
    [sym_true] = STATE(138),
    [sym_false] = STATE(138),
    [anon_sym_const] = ACTIONS(314),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(316),
    [anon_sym_TILDE] = ACTIONS(316),
    [anon_sym_DASH] = ACTIONS(316),
    [anon_sym_PLUS] = ACTIONS(316),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(318),
    [sym_number] = ACTIONS(435),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [122] = {
    [sym__expression] = STATE(139),
    [sym_assignment_expression] = STATE(139),
    [sym_mux_expression] = STATE(139),
    [sym_in_expression] = STATE(139),
    [sym_slice_expression] = STATE(139),
    [sym_unary_expression] = STATE(139),
    [sym_binary_expression] = STATE(139),
    [sym_predefined_constant] = STATE(139),
    [sym_true] = STATE(139),
    [sym_false] = STATE(139),
    [anon_sym_const] = ACTIONS(314),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(316),
    [anon_sym_TILDE] = ACTIONS(316),
    [anon_sym_DASH] = ACTIONS(316),
    [anon_sym_PLUS] = ACTIONS(316),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(318),
    [sym_number] = ACTIONS(437),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [123] = {
    [sym__expression] = STATE(60),
    [sym_assignment_expression] = STATE(60),
    [sym_mux_expression] = STATE(60),
    [sym_in_expression] = STATE(60),
    [sym_slice_expression] = STATE(60),
    [sym_unary_expression] = STATE(60),
    [sym_binary_expression] = STATE(60),
    [sym_predefined_constant] = STATE(60),
    [sym_true] = STATE(60),
    [sym_false] = STATE(60),
    [anon_sym_const] = ACTIONS(314),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(316),
    [anon_sym_TILDE] = ACTIONS(316),
    [anon_sym_DASH] = ACTIONS(316),
    [anon_sym_PLUS] = ACTIONS(316),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(318),
    [sym_number] = ACTIONS(155),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [124] = {
    [sym__expression] = STATE(140),
    [sym_assignment_expression] = STATE(140),
    [sym_mux_expression] = STATE(140),
    [sym_in_expression] = STATE(140),
    [sym_slice_expression] = STATE(140),
    [sym_unary_expression] = STATE(140),
    [sym_binary_expression] = STATE(140),
    [sym_predefined_constant] = STATE(140),
    [sym_true] = STATE(140),
    [sym_false] = STATE(140),
    [anon_sym_const] = ACTIONS(273),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(275),
    [anon_sym_TILDE] = ACTIONS(275),
    [anon_sym_DASH] = ACTIONS(275),
    [anon_sym_PLUS] = ACTIONS(275),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(277),
    [sym_number] = ACTIONS(439),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [125] = {
    [anon_sym_COMMA] = ACTIONS(245),
    [anon_sym_RBRACE] = ACTIONS(245),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_in] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(342),
    [anon_sym_PLUS] = ACTIONS(342),
    [anon_sym_EQ_EQ] = ACTIONS(344),
    [anon_sym_BANG_EQ] = ACTIONS(344),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_GT] = ACTIONS(346),
    [anon_sym_LT] = ACTIONS(346),
    [anon_sym_AMP_AMP] = ACTIONS(348),
    [anon_sym_PIPE_PIPE] = ACTIONS(350),
    [anon_sym_STAR] = ACTIONS(352),
    [anon_sym_SLASH] = ACTIONS(354),
    [anon_sym_GT_GT] = ACTIONS(354),
    [anon_sym_GT_GT_GT] = ACTIONS(352),
    [anon_sym_LT_LT] = ACTIONS(352),
    [anon_sym_AMP] = ACTIONS(356),
    [anon_sym_PIPE] = ACTIONS(358),
    [anon_sym_CARET] = ACTIONS(350),
    [sym_comment] = ACTIONS(27),
  },
  [126] = {
    [anon_sym_COMMA] = ACTIONS(441),
    [anon_sym_RBRACE] = ACTIONS(441),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_in] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(342),
    [anon_sym_PLUS] = ACTIONS(342),
    [anon_sym_EQ_EQ] = ACTIONS(344),
    [anon_sym_BANG_EQ] = ACTIONS(344),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_GT] = ACTIONS(346),
    [anon_sym_LT] = ACTIONS(346),
    [anon_sym_AMP_AMP] = ACTIONS(348),
    [anon_sym_PIPE_PIPE] = ACTIONS(350),
    [anon_sym_STAR] = ACTIONS(352),
    [anon_sym_SLASH] = ACTIONS(354),
    [anon_sym_GT_GT] = ACTIONS(354),
    [anon_sym_GT_GT_GT] = ACTIONS(352),
    [anon_sym_LT_LT] = ACTIONS(352),
    [anon_sym_AMP] = ACTIONS(356),
    [anon_sym_PIPE] = ACTIONS(358),
    [anon_sym_CARET] = ACTIONS(350),
    [sym_comment] = ACTIONS(27),
  },
  [127] = {
    [anon_sym_COMMA] = ACTIONS(281),
    [anon_sym_RBRACE] = ACTIONS(281),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_in] = ACTIONS(281),
    [anon_sym_DASH] = ACTIONS(281),
    [anon_sym_PLUS] = ACTIONS(281),
    [anon_sym_EQ_EQ] = ACTIONS(344),
    [anon_sym_BANG_EQ] = ACTIONS(344),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_GT] = ACTIONS(346),
    [anon_sym_LT] = ACTIONS(346),
    [anon_sym_AMP_AMP] = ACTIONS(281),
    [anon_sym_PIPE_PIPE] = ACTIONS(281),
    [anon_sym_STAR] = ACTIONS(352),
    [anon_sym_SLASH] = ACTIONS(354),
    [anon_sym_GT_GT] = ACTIONS(354),
    [anon_sym_GT_GT_GT] = ACTIONS(352),
    [anon_sym_LT_LT] = ACTIONS(352),
    [anon_sym_AMP] = ACTIONS(283),
    [anon_sym_PIPE] = ACTIONS(283),
    [anon_sym_CARET] = ACTIONS(281),
    [sym_comment] = ACTIONS(27),
  },
  [128] = {
    [anon_sym_COMMA] = ACTIONS(281),
    [anon_sym_RBRACE] = ACTIONS(281),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_in] = ACTIONS(281),
    [anon_sym_DASH] = ACTIONS(281),
    [anon_sym_PLUS] = ACTIONS(281),
    [anon_sym_EQ_EQ] = ACTIONS(281),
    [anon_sym_BANG_EQ] = ACTIONS(281),
    [anon_sym_GT_EQ] = ACTIONS(281),
    [anon_sym_LT_EQ] = ACTIONS(281),
    [anon_sym_GT] = ACTIONS(283),
    [anon_sym_LT] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(281),
    [anon_sym_PIPE_PIPE] = ACTIONS(281),
    [anon_sym_STAR] = ACTIONS(352),
    [anon_sym_SLASH] = ACTIONS(354),
    [anon_sym_GT_GT] = ACTIONS(354),
    [anon_sym_GT_GT_GT] = ACTIONS(352),
    [anon_sym_LT_LT] = ACTIONS(352),
    [anon_sym_AMP] = ACTIONS(283),
    [anon_sym_PIPE] = ACTIONS(283),
    [anon_sym_CARET] = ACTIONS(281),
    [sym_comment] = ACTIONS(27),
  },
  [129] = {
    [anon_sym_COMMA] = ACTIONS(281),
    [anon_sym_RBRACE] = ACTIONS(281),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_in] = ACTIONS(281),
    [anon_sym_DASH] = ACTIONS(342),
    [anon_sym_PLUS] = ACTIONS(342),
    [anon_sym_EQ_EQ] = ACTIONS(344),
    [anon_sym_BANG_EQ] = ACTIONS(344),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_GT] = ACTIONS(346),
    [anon_sym_LT] = ACTIONS(346),
    [anon_sym_AMP_AMP] = ACTIONS(281),
    [anon_sym_PIPE_PIPE] = ACTIONS(281),
    [anon_sym_STAR] = ACTIONS(352),
    [anon_sym_SLASH] = ACTIONS(354),
    [anon_sym_GT_GT] = ACTIONS(354),
    [anon_sym_GT_GT_GT] = ACTIONS(352),
    [anon_sym_LT_LT] = ACTIONS(352),
    [anon_sym_AMP] = ACTIONS(283),
    [anon_sym_PIPE] = ACTIONS(283),
    [anon_sym_CARET] = ACTIONS(281),
    [sym_comment] = ACTIONS(27),
  },
  [130] = {
    [anon_sym_COMMA] = ACTIONS(281),
    [anon_sym_RBRACE] = ACTIONS(281),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_in] = ACTIONS(281),
    [anon_sym_DASH] = ACTIONS(342),
    [anon_sym_PLUS] = ACTIONS(342),
    [anon_sym_EQ_EQ] = ACTIONS(344),
    [anon_sym_BANG_EQ] = ACTIONS(344),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_GT] = ACTIONS(346),
    [anon_sym_LT] = ACTIONS(346),
    [anon_sym_AMP_AMP] = ACTIONS(348),
    [anon_sym_PIPE_PIPE] = ACTIONS(281),
    [anon_sym_STAR] = ACTIONS(352),
    [anon_sym_SLASH] = ACTIONS(354),
    [anon_sym_GT_GT] = ACTIONS(354),
    [anon_sym_GT_GT_GT] = ACTIONS(352),
    [anon_sym_LT_LT] = ACTIONS(352),
    [anon_sym_AMP] = ACTIONS(356),
    [anon_sym_PIPE] = ACTIONS(283),
    [anon_sym_CARET] = ACTIONS(281),
    [sym_comment] = ACTIONS(27),
  },
  [131] = {
    [anon_sym_SEMI] = ACTIONS(443),
    [anon_sym_COMMA] = ACTIONS(443),
    [anon_sym_COLON] = ACTIONS(443),
    [anon_sym_RBRACE] = ACTIONS(443),
    [anon_sym_LBRACK] = ACTIONS(443),
    [anon_sym_RBRACK] = ACTIONS(443),
    [anon_sym_in] = ACTIONS(443),
    [anon_sym_DOT_DOT] = ACTIONS(443),
    [anon_sym_DASH] = ACTIONS(443),
    [anon_sym_PLUS] = ACTIONS(443),
    [anon_sym_EQ_EQ] = ACTIONS(443),
    [anon_sym_BANG_EQ] = ACTIONS(443),
    [anon_sym_GT_EQ] = ACTIONS(443),
    [anon_sym_LT_EQ] = ACTIONS(443),
    [anon_sym_GT] = ACTIONS(445),
    [anon_sym_LT] = ACTIONS(445),
    [anon_sym_AMP_AMP] = ACTIONS(443),
    [anon_sym_PIPE_PIPE] = ACTIONS(443),
    [anon_sym_STAR] = ACTIONS(443),
    [anon_sym_SLASH] = ACTIONS(445),
    [anon_sym_GT_GT] = ACTIONS(445),
    [anon_sym_GT_GT_GT] = ACTIONS(443),
    [anon_sym_LT_LT] = ACTIONS(443),
    [anon_sym_AMP] = ACTIONS(445),
    [anon_sym_PIPE] = ACTIONS(445),
    [anon_sym_CARET] = ACTIONS(443),
    [sym_comment] = ACTIONS(27),
  },
  [132] = {
    [aux_sym_in_expression_repeat1] = STATE(132),
    [anon_sym_COMMA] = ACTIONS(447),
    [anon_sym_RBRACE] = ACTIONS(441),
    [sym_comment] = ACTIONS(27),
  },
  [133] = {
    [anon_sym_RBRACE] = ACTIONS(450),
    [sym_identifier] = ACTIONS(450),
    [sym_comment] = ACTIONS(27),
  },
  [134] = {
    [sym__expression] = STATE(141),
    [sym_assignment_expression] = STATE(141),
    [sym_mux_expression] = STATE(141),
    [sym_in_expression] = STATE(141),
    [sym_slice_expression] = STATE(141),
    [sym_unary_expression] = STATE(141),
    [sym_binary_expression] = STATE(141),
    [sym_predefined_constant] = STATE(141),
    [sym_true] = STATE(141),
    [sym_false] = STATE(141),
    [anon_sym_const] = ACTIONS(314),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(316),
    [anon_sym_TILDE] = ACTIONS(316),
    [anon_sym_DASH] = ACTIONS(316),
    [anon_sym_PLUS] = ACTIONS(316),
    [anon_sym_STAT_BUB] = ACTIONS(17),
    [anon_sym_STAT_AOK] = ACTIONS(17),
    [anon_sym_STAT_HLT] = ACTIONS(17),
    [anon_sym_STAT_ADR] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(17),
    [anon_sym_REG_RAX] = ACTIONS(17),
    [anon_sym_REG_RCX] = ACTIONS(17),
    [anon_sym_REG_RDX] = ACTIONS(17),
    [anon_sym_REG_RBX] = ACTIONS(17),
    [anon_sym_REG_RSP] = ACTIONS(17),
    [anon_sym_REG_RBP] = ACTIONS(17),
    [anon_sym_REG_RSI] = ACTIONS(17),
    [anon_sym_REG_RDI] = ACTIONS(17),
    [anon_sym_REG_R8] = ACTIONS(17),
    [anon_sym_REG_R9] = ACTIONS(17),
    [anon_sym_REG_R10] = ACTIONS(17),
    [anon_sym_REG_R11] = ACTIONS(17),
    [anon_sym_REG_R12] = ACTIONS(17),
    [anon_sym_REG_R13] = ACTIONS(17),
    [anon_sym_REG_R14] = ACTIONS(17),
    [anon_sym_REG_NONE] = ACTIONS(17),
    [anon_sym_HALT] = ACTIONS(17),
    [anon_sym_NOP] = ACTIONS(17),
    [anon_sym_RRMOVQ] = ACTIONS(17),
    [anon_sym_IRMOVQ] = ACTIONS(17),
    [anon_sym_RMMOVQ] = ACTIONS(17),
    [anon_sym_MRMOVQ] = ACTIONS(17),
    [anon_sym_OPQ] = ACTIONS(17),
    [anon_sym_JXX] = ACTIONS(17),
    [anon_sym_CALL] = ACTIONS(17),
    [anon_sym_RET] = ACTIONS(17),
    [anon_sym_PUSHQ] = ACTIONS(17),
    [anon_sym_POPQ] = ACTIONS(17),
    [anon_sym_CMOVXX] = ACTIONS(17),
    [anon_sym_ALWAYS] = ACTIONS(17),
    [anon_sym_LE] = ACTIONS(17),
    [anon_sym_LT2] = ACTIONS(17),
    [anon_sym_EQ2] = ACTIONS(17),
    [anon_sym_NE] = ACTIONS(17),
    [anon_sym_GE] = ACTIONS(17),
    [anon_sym_GT2] = ACTIONS(17),
    [anon_sym_ADDQ] = ACTIONS(17),
    [anon_sym_SUBQ] = ACTIONS(17),
    [anon_sym_ANDQ] = ACTIONS(17),
    [anon_sym_XORQ] = ACTIONS(17),
    [sym_identifier] = ACTIONS(318),
    [sym_number] = ACTIONS(452),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_TRUE] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [135] = {
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_RBRACK] = ACTIONS(245),
    [anon_sym_in] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(383),
    [anon_sym_PLUS] = ACTIONS(383),
    [anon_sym_EQ_EQ] = ACTIONS(385),
    [anon_sym_BANG_EQ] = ACTIONS(385),
    [anon_sym_GT_EQ] = ACTIONS(385),
    [anon_sym_LT_EQ] = ACTIONS(385),
    [anon_sym_GT] = ACTIONS(387),
    [anon_sym_LT] = ACTIONS(387),
    [anon_sym_AMP_AMP] = ACTIONS(389),
    [anon_sym_PIPE_PIPE] = ACTIONS(391),
    [anon_sym_STAR] = ACTIONS(393),
    [anon_sym_SLASH] = ACTIONS(395),
    [anon_sym_GT_GT] = ACTIONS(395),
    [anon_sym_GT_GT_GT] = ACTIONS(393),
    [anon_sym_LT_LT] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(397),
    [anon_sym_PIPE] = ACTIONS(399),
    [anon_sym_CARET] = ACTIONS(391),
    [sym_comment] = ACTIONS(27),
  },
  [136] = {
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_RBRACK] = ACTIONS(281),
    [anon_sym_in] = ACTIONS(281),
    [anon_sym_DASH] = ACTIONS(281),
    [anon_sym_PLUS] = ACTIONS(281),
    [anon_sym_EQ_EQ] = ACTIONS(385),
    [anon_sym_BANG_EQ] = ACTIONS(385),
    [anon_sym_GT_EQ] = ACTIONS(385),
    [anon_sym_LT_EQ] = ACTIONS(385),
    [anon_sym_GT] = ACTIONS(387),
    [anon_sym_LT] = ACTIONS(387),
    [anon_sym_AMP_AMP] = ACTIONS(281),
    [anon_sym_PIPE_PIPE] = ACTIONS(281),
    [anon_sym_STAR] = ACTIONS(393),
    [anon_sym_SLASH] = ACTIONS(395),
    [anon_sym_GT_GT] = ACTIONS(395),
    [anon_sym_GT_GT_GT] = ACTIONS(393),
    [anon_sym_LT_LT] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(283),
    [anon_sym_PIPE] = ACTIONS(283),
    [anon_sym_CARET] = ACTIONS(281),
    [sym_comment] = ACTIONS(27),
  },
  [137] = {
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_RBRACK] = ACTIONS(281),
    [anon_sym_in] = ACTIONS(281),
    [anon_sym_DASH] = ACTIONS(281),
    [anon_sym_PLUS] = ACTIONS(281),
    [anon_sym_EQ_EQ] = ACTIONS(281),
    [anon_sym_BANG_EQ] = ACTIONS(281),
    [anon_sym_GT_EQ] = ACTIONS(281),
    [anon_sym_LT_EQ] = ACTIONS(281),
    [anon_sym_GT] = ACTIONS(283),
    [anon_sym_LT] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(281),
    [anon_sym_PIPE_PIPE] = ACTIONS(281),
    [anon_sym_STAR] = ACTIONS(393),
    [anon_sym_SLASH] = ACTIONS(395),
    [anon_sym_GT_GT] = ACTIONS(395),
    [anon_sym_GT_GT_GT] = ACTIONS(393),
    [anon_sym_LT_LT] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(283),
    [anon_sym_PIPE] = ACTIONS(283),
    [anon_sym_CARET] = ACTIONS(281),
    [sym_comment] = ACTIONS(27),
  },
  [138] = {
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_RBRACK] = ACTIONS(281),
    [anon_sym_in] = ACTIONS(281),
    [anon_sym_DASH] = ACTIONS(383),
    [anon_sym_PLUS] = ACTIONS(383),
    [anon_sym_EQ_EQ] = ACTIONS(385),
    [anon_sym_BANG_EQ] = ACTIONS(385),
    [anon_sym_GT_EQ] = ACTIONS(385),
    [anon_sym_LT_EQ] = ACTIONS(385),
    [anon_sym_GT] = ACTIONS(387),
    [anon_sym_LT] = ACTIONS(387),
    [anon_sym_AMP_AMP] = ACTIONS(281),
    [anon_sym_PIPE_PIPE] = ACTIONS(281),
    [anon_sym_STAR] = ACTIONS(393),
    [anon_sym_SLASH] = ACTIONS(395),
    [anon_sym_GT_GT] = ACTIONS(395),
    [anon_sym_GT_GT_GT] = ACTIONS(393),
    [anon_sym_LT_LT] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(283),
    [anon_sym_PIPE] = ACTIONS(283),
    [anon_sym_CARET] = ACTIONS(281),
    [sym_comment] = ACTIONS(27),
  },
  [139] = {
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_RBRACK] = ACTIONS(281),
    [anon_sym_in] = ACTIONS(281),
    [anon_sym_DASH] = ACTIONS(383),
    [anon_sym_PLUS] = ACTIONS(383),
    [anon_sym_EQ_EQ] = ACTIONS(385),
    [anon_sym_BANG_EQ] = ACTIONS(385),
    [anon_sym_GT_EQ] = ACTIONS(385),
    [anon_sym_LT_EQ] = ACTIONS(385),
    [anon_sym_GT] = ACTIONS(387),
    [anon_sym_LT] = ACTIONS(387),
    [anon_sym_AMP_AMP] = ACTIONS(389),
    [anon_sym_PIPE_PIPE] = ACTIONS(281),
    [anon_sym_STAR] = ACTIONS(393),
    [anon_sym_SLASH] = ACTIONS(395),
    [anon_sym_GT_GT] = ACTIONS(395),
    [anon_sym_GT_GT_GT] = ACTIONS(393),
    [anon_sym_LT_LT] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(397),
    [anon_sym_PIPE] = ACTIONS(283),
    [anon_sym_CARET] = ACTIONS(281),
    [sym_comment] = ACTIONS(27),
  },
  [140] = {
    [anon_sym_COMMA] = ACTIONS(304),
    [anon_sym_RBRACE] = ACTIONS(304),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_in] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(342),
    [anon_sym_PLUS] = ACTIONS(342),
    [anon_sym_EQ_EQ] = ACTIONS(344),
    [anon_sym_BANG_EQ] = ACTIONS(344),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_GT] = ACTIONS(346),
    [anon_sym_LT] = ACTIONS(346),
    [anon_sym_AMP_AMP] = ACTIONS(348),
    [anon_sym_PIPE_PIPE] = ACTIONS(350),
    [anon_sym_STAR] = ACTIONS(352),
    [anon_sym_SLASH] = ACTIONS(354),
    [anon_sym_GT_GT] = ACTIONS(354),
    [anon_sym_GT_GT_GT] = ACTIONS(352),
    [anon_sym_LT_LT] = ACTIONS(352),
    [anon_sym_AMP] = ACTIONS(356),
    [anon_sym_PIPE] = ACTIONS(358),
    [anon_sym_CARET] = ACTIONS(350),
    [sym_comment] = ACTIONS(27),
  },
  [141] = {
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_RBRACK] = ACTIONS(304),
    [anon_sym_in] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(383),
    [anon_sym_PLUS] = ACTIONS(383),
    [anon_sym_EQ_EQ] = ACTIONS(385),
    [anon_sym_BANG_EQ] = ACTIONS(385),
    [anon_sym_GT_EQ] = ACTIONS(385),
    [anon_sym_LT_EQ] = ACTIONS(385),
    [anon_sym_GT] = ACTIONS(387),
    [anon_sym_LT] = ACTIONS(387),
    [anon_sym_AMP_AMP] = ACTIONS(389),
    [anon_sym_PIPE_PIPE] = ACTIONS(391),
    [anon_sym_STAR] = ACTIONS(393),
    [anon_sym_SLASH] = ACTIONS(395),
    [anon_sym_GT_GT] = ACTIONS(395),
    [anon_sym_GT_GT_GT] = ACTIONS(393),
    [anon_sym_LT_LT] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(397),
    [anon_sym_PIPE] = ACTIONS(399),
    [anon_sym_CARET] = ACTIONS(391),
    [sym_comment] = ACTIONS(27),
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
  [19] = {.count = 1, .reusable = false}, SHIFT(8),
  [21] = {.count = 1, .reusable = true}, SHIFT(12),
  [23] = {.count = 1, .reusable = false}, SHIFT(9),
  [25] = {.count = 1, .reusable = false}, SHIFT(10),
  [27] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [29] = {.count = 1, .reusable = true}, SHIFT(14),
  [31] = {.count = 1, .reusable = true}, SHIFT(16),
  [33] = {.count = 1, .reusable = true}, SHIFT(17),
  [35] = {.count = 1, .reusable = false}, SHIFT(18),
  [37] = {.count = 1, .reusable = true}, SHIFT(19),
  [39] = {.count = 1, .reusable = false}, SHIFT(20),
  [41] = {.count = 1, .reusable = true}, SHIFT(21),
  [43] = {.count = 1, .reusable = true}, SHIFT(23),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_predefined_constant, 1),
  [47] = {.count = 1, .reusable = false}, REDUCE(sym_predefined_constant, 1),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym__expression, 1),
  [51] = {.count = 1, .reusable = false}, SHIFT(24),
  [53] = {.count = 1, .reusable = false}, REDUCE(sym__expression, 1),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_true, 1),
  [57] = {.count = 1, .reusable = false}, REDUCE(sym_true, 1),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_false, 1),
  [61] = {.count = 1, .reusable = false}, REDUCE(sym_false, 1),
  [63] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [65] = {.count = 1, .reusable = true}, SHIFT(25),
  [67] = {.count = 1, .reusable = true}, SHIFT(26),
  [69] = {.count = 1, .reusable = true}, SHIFT(27),
  [71] = {.count = 1, .reusable = true}, SHIFT(28),
  [73] = {.count = 1, .reusable = true}, SHIFT(29),
  [75] = {.count = 1, .reusable = false}, SHIFT(29),
  [77] = {.count = 1, .reusable = true}, SHIFT(30),
  [79] = {.count = 1, .reusable = true}, SHIFT(31),
  [81] = {.count = 1, .reusable = true}, SHIFT(32),
  [83] = {.count = 1, .reusable = false}, SHIFT(32),
  [85] = {.count = 1, .reusable = false}, SHIFT(30),
  [87] = {.count = 1, .reusable = false}, SHIFT(31),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [91] = {.count = 1, .reusable = true}, SHIFT(34),
  [93] = {.count = 1, .reusable = true}, SHIFT(35),
  [95] = {.count = 1, .reusable = true}, SHIFT(36),
  [97] = {.count = 1, .reusable = true}, SHIFT(38),
  [99] = {.count = 1, .reusable = true}, SHIFT(39),
  [101] = {.count = 1, .reusable = true}, SHIFT(40),
  [103] = {.count = 1, .reusable = false}, SHIFT(41),
  [105] = {.count = 1, .reusable = true}, SHIFT(42),
  [107] = {.count = 1, .reusable = true}, SHIFT(43),
  [109] = {.count = 1, .reusable = true}, SHIFT(44),
  [111] = {.count = 1, .reusable = false}, SHIFT(44),
  [113] = {.count = 1, .reusable = true}, SHIFT(45),
  [115] = {.count = 1, .reusable = true}, SHIFT(46),
  [117] = {.count = 1, .reusable = true}, SHIFT(47),
  [119] = {.count = 1, .reusable = false}, SHIFT(47),
  [121] = {.count = 1, .reusable = false}, SHIFT(45),
  [123] = {.count = 1, .reusable = false}, SHIFT(46),
  [125] = {.count = 1, .reusable = true}, SHIFT(48),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_unary_expression, 2),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym_unary_expression, 2),
  [131] = {.count = 1, .reusable = true}, SHIFT(50),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym__statement, 2),
  [135] = {.count = 1, .reusable = false}, REDUCE(sym__statement, 2),
  [137] = {.count = 1, .reusable = false}, SHIFT(51),
  [139] = {.count = 1, .reusable = true}, SHIFT(52),
  [141] = {.count = 1, .reusable = false}, SHIFT(53),
  [143] = {.count = 1, .reusable = true}, SHIFT(54),
  [145] = {.count = 1, .reusable = true}, SHIFT(55),
  [147] = {.count = 1, .reusable = true}, SHIFT(56),
  [149] = {.count = 1, .reusable = true}, SHIFT(57),
  [151] = {.count = 1, .reusable = true}, SHIFT(58),
  [153] = {.count = 1, .reusable = true}, SHIFT(59),
  [155] = {.count = 1, .reusable = true}, SHIFT(60),
  [157] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [159] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [162] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [165] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [168] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [171] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [174] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [177] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [180] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [183] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [186] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [189] = {.count = 1, .reusable = true}, SHIFT(61),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_wire_declaration, 3),
  [193] = {.count = 1, .reusable = false}, REDUCE(sym_wire_declaration, 3),
  [195] = {.count = 1, .reusable = true}, SHIFT(63),
  [197] = {.count = 1, .reusable = true}, SHIFT(65),
  [199] = {.count = 1, .reusable = true}, SHIFT(68),
  [201] = {.count = 1, .reusable = true}, SHIFT(69),
  [203] = {.count = 1, .reusable = true}, SHIFT(70),
  [205] = {.count = 1, .reusable = true}, SHIFT(71),
  [207] = {.count = 1, .reusable = true}, SHIFT(72),
  [209] = {.count = 1, .reusable = true}, SHIFT(73),
  [211] = {.count = 1, .reusable = true}, SHIFT(74),
  [213] = {.count = 1, .reusable = true}, SHIFT(75),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_mux_expression, 3),
  [217] = {.count = 1, .reusable = false}, REDUCE(sym_mux_expression, 3),
  [219] = {.count = 2, .reusable = false}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(18),
  [222] = {.count = 2, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(5),
  [225] = {.count = 1, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 2),
  [227] = {.count = 2, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(19),
  [230] = {.count = 2, .reusable = false}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(7),
  [233] = {.count = 2, .reusable = false}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(20),
  [236] = {.count = 2, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(21),
  [239] = {.count = 2, .reusable = false}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(9),
  [242] = {.count = 2, .reusable = false}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(10),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 3),
  [247] = {.count = 1, .reusable = true}, SHIFT(76),
  [249] = {.count = 1, .reusable = false}, SHIFT(77),
  [251] = {.count = 1, .reusable = true}, SHIFT(78),
  [253] = {.count = 1, .reusable = true}, SHIFT(79),
  [255] = {.count = 1, .reusable = true}, SHIFT(80),
  [257] = {.count = 1, .reusable = false}, SHIFT(80),
  [259] = {.count = 1, .reusable = true}, SHIFT(81),
  [261] = {.count = 1, .reusable = true}, SHIFT(82),
  [263] = {.count = 1, .reusable = true}, SHIFT(83),
  [265] = {.count = 1, .reusable = false}, SHIFT(83),
  [267] = {.count = 1, .reusable = false}, SHIFT(81),
  [269] = {.count = 1, .reusable = false}, SHIFT(82),
  [271] = {.count = 1, .reusable = true}, SHIFT(84),
  [273] = {.count = 1, .reusable = false}, SHIFT(85),
  [275] = {.count = 1, .reusable = true}, SHIFT(86),
  [277] = {.count = 1, .reusable = false}, SHIFT(87),
  [279] = {.count = 1, .reusable = true}, SHIFT(88),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [283] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_variable_declarator, 3),
  [287] = {.count = 1, .reusable = true}, REDUCE(aux_sym_wire_declaration_repeat1, 2),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym_wire_declaration, 4),
  [291] = {.count = 1, .reusable = false}, REDUCE(sym_wire_declaration, 4),
  [293] = {.count = 2, .reusable = true}, REDUCE(aux_sym_wire_declaration_repeat1, 2), SHIFT_REPEAT(36),
  [296] = {.count = 1, .reusable = true}, REDUCE(sym_register_declaration, 4),
  [298] = {.count = 1, .reusable = false}, REDUCE(sym_register_declaration, 4),
  [300] = {.count = 1, .reusable = true}, SHIFT(89),
  [302] = {.count = 1, .reusable = true}, SHIFT(90),
  [304] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 4),
  [306] = {.count = 1, .reusable = true}, SHIFT(92),
  [308] = {.count = 1, .reusable = true}, SHIFT(93),
  [310] = {.count = 1, .reusable = true}, SHIFT(94),
  [312] = {.count = 1, .reusable = true}, SHIFT(95),
  [314] = {.count = 1, .reusable = false}, SHIFT(96),
  [316] = {.count = 1, .reusable = true}, SHIFT(97),
  [318] = {.count = 1, .reusable = false}, SHIFT(98),
  [320] = {.count = 1, .reusable = true}, SHIFT(99),
  [322] = {.count = 1, .reusable = true}, SHIFT(100),
  [324] = {.count = 1, .reusable = true}, SHIFT(101),
  [326] = {.count = 1, .reusable = true}, SHIFT(102),
  [328] = {.count = 1, .reusable = true}, SHIFT(103),
  [330] = {.count = 1, .reusable = true}, REDUCE(sym_in_expression, 4),
  [332] = {.count = 1, .reusable = false}, REDUCE(sym_in_expression, 4),
  [334] = {.count = 1, .reusable = true}, SHIFT(104),
  [336] = {.count = 1, .reusable = false}, SHIFT(105),
  [338] = {.count = 1, .reusable = true}, SHIFT(106),
  [340] = {.count = 1, .reusable = true}, SHIFT(107),
  [342] = {.count = 1, .reusable = true}, SHIFT(108),
  [344] = {.count = 1, .reusable = true}, SHIFT(109),
  [346] = {.count = 1, .reusable = false}, SHIFT(109),
  [348] = {.count = 1, .reusable = true}, SHIFT(110),
  [350] = {.count = 1, .reusable = true}, SHIFT(111),
  [352] = {.count = 1, .reusable = true}, SHIFT(112),
  [354] = {.count = 1, .reusable = false}, SHIFT(112),
  [356] = {.count = 1, .reusable = false}, SHIFT(110),
  [358] = {.count = 1, .reusable = false}, SHIFT(111),
  [360] = {.count = 1, .reusable = true}, SHIFT(114),
  [362] = {.count = 1, .reusable = true}, REDUCE(sym_register_declaration, 5),
  [364] = {.count = 1, .reusable = false}, REDUCE(sym_register_declaration, 5),
  [366] = {.count = 1, .reusable = true}, REDUCE(aux_sym_register_declaration_repeat1, 2),
  [368] = {.count = 2, .reusable = true}, REDUCE(aux_sym_register_declaration_repeat1, 2), SHIFT_REPEAT(14),
  [371] = {.count = 1, .reusable = false}, REDUCE(aux_sym_mux_expression_repeat1, 4),
  [373] = {.count = 1, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 4),
  [375] = {.count = 1, .reusable = true}, SHIFT(115),
  [377] = {.count = 1, .reusable = true}, SHIFT(116),
  [379] = {.count = 1, .reusable = false}, SHIFT(117),
  [381] = {.count = 1, .reusable = true}, SHIFT(118),
  [383] = {.count = 1, .reusable = true}, SHIFT(119),
  [385] = {.count = 1, .reusable = true}, SHIFT(120),
  [387] = {.count = 1, .reusable = false}, SHIFT(120),
  [389] = {.count = 1, .reusable = true}, SHIFT(121),
  [391] = {.count = 1, .reusable = true}, SHIFT(122),
  [393] = {.count = 1, .reusable = true}, SHIFT(123),
  [395] = {.count = 1, .reusable = false}, SHIFT(123),
  [397] = {.count = 1, .reusable = false}, SHIFT(121),
  [399] = {.count = 1, .reusable = false}, SHIFT(122),
  [401] = {.count = 1, .reusable = true}, SHIFT(124),
  [403] = {.count = 1, .reusable = true}, SHIFT(125),
  [405] = {.count = 1, .reusable = true}, SHIFT(126),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym_in_expression, 5),
  [409] = {.count = 1, .reusable = false}, REDUCE(sym_in_expression, 5),
  [411] = {.count = 1, .reusable = true}, SHIFT(127),
  [413] = {.count = 1, .reusable = true}, SHIFT(128),
  [415] = {.count = 1, .reusable = true}, SHIFT(129),
  [417] = {.count = 1, .reusable = true}, SHIFT(130),
  [419] = {.count = 1, .reusable = true}, SHIFT(131),
  [421] = {.count = 1, .reusable = true}, SHIFT(133),
  [423] = {.count = 1, .reusable = true}, SHIFT(134),
  [425] = {.count = 1, .reusable = true}, SHIFT(135),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym_slice_expression, 6),
  [429] = {.count = 1, .reusable = false}, REDUCE(sym_slice_expression, 6),
  [431] = {.count = 1, .reusable = true}, SHIFT(136),
  [433] = {.count = 1, .reusable = true}, SHIFT(137),
  [435] = {.count = 1, .reusable = true}, SHIFT(138),
  [437] = {.count = 1, .reusable = true}, SHIFT(139),
  [439] = {.count = 1, .reusable = true}, SHIFT(140),
  [441] = {.count = 1, .reusable = true}, REDUCE(aux_sym_in_expression_repeat1, 2),
  [443] = {.count = 1, .reusable = true}, REDUCE(sym_in_expression, 6),
  [445] = {.count = 1, .reusable = false}, REDUCE(sym_in_expression, 6),
  [447] = {.count = 2, .reusable = true}, REDUCE(aux_sym_in_expression_repeat1, 2), SHIFT_REPEAT(106),
  [450] = {.count = 1, .reusable = true}, REDUCE(sym__register_expression_statement, 4),
  [452] = {.count = 1, .reusable = true}, SHIFT(141),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hclrs() {
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
