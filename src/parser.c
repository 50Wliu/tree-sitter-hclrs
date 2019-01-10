#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 162
#define SYMBOL_COUNT 116
#define ALIAS_COUNT 0
#define TOKEN_COUNT 93
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
  anon_sym_LPAREN = 13,
  anon_sym_RPAREN = 14,
  anon_sym_in = 15,
  anon_sym_DOT_DOT = 16,
  anon_sym_BANG = 17,
  anon_sym_TILDE = 18,
  anon_sym_DASH = 19,
  anon_sym_PLUS = 20,
  anon_sym_EQ_EQ = 21,
  anon_sym_BANG_EQ = 22,
  anon_sym_GT_EQ = 23,
  anon_sym_LT_EQ = 24,
  anon_sym_GT = 25,
  anon_sym_LT = 26,
  anon_sym_AMP_AMP = 27,
  anon_sym_PIPE_PIPE = 28,
  anon_sym_STAR = 29,
  anon_sym_SLASH = 30,
  anon_sym_GT_GT = 31,
  anon_sym_GT_GT_GT = 32,
  anon_sym_LT_LT = 33,
  anon_sym_AMP = 34,
  anon_sym_PIPE = 35,
  anon_sym_CARET = 36,
  anon_sym_STAT_BUB = 37,
  anon_sym_STAT_AOK = 38,
  anon_sym_STAT_HLT = 39,
  anon_sym_STAT_ADR = 40,
  anon_sym_STAT_INS = 41,
  anon_sym_STAT_PIP = 42,
  anon_sym_REG_RAX = 43,
  anon_sym_REG_RCX = 44,
  anon_sym_REG_RDX = 45,
  anon_sym_REG_RBX = 46,
  anon_sym_REG_RSP = 47,
  anon_sym_REG_RBP = 48,
  anon_sym_REG_RSI = 49,
  anon_sym_REG_RDI = 50,
  anon_sym_REG_R8 = 51,
  anon_sym_REG_R9 = 52,
  anon_sym_REG_R10 = 53,
  anon_sym_REG_R11 = 54,
  anon_sym_REG_R12 = 55,
  anon_sym_REG_R13 = 56,
  anon_sym_REG_R14 = 57,
  anon_sym_REG_NONE = 58,
  anon_sym_HALT = 59,
  anon_sym_NOP = 60,
  anon_sym_RRMOVQ = 61,
  anon_sym_IRMOVQ = 62,
  anon_sym_RMMOVQ = 63,
  anon_sym_MRMOVQ = 64,
  anon_sym_OPQ = 65,
  anon_sym_JXX = 66,
  anon_sym_CALL = 67,
  anon_sym_RET = 68,
  anon_sym_PUSHQ = 69,
  anon_sym_POPQ = 70,
  anon_sym_CMOVXX = 71,
  anon_sym_ALWAYS = 72,
  anon_sym_LE = 73,
  anon_sym_LT2 = 74,
  anon_sym_EQ2 = 75,
  anon_sym_NE = 76,
  anon_sym_GE = 77,
  anon_sym_GT2 = 78,
  anon_sym_ADDQ = 79,
  anon_sym_SUBQ = 80,
  anon_sym_ANDQ = 81,
  anon_sym_XORQ = 82,
  sym_identifier = 83,
  sym_number = 84,
  anon_sym_true = 85,
  anon_sym_TRUE = 86,
  anon_sym_false = 87,
  anon_sym_FALSE = 88,
  sym_comment = 89,
  sym_pound_comment = 90,
  sym_slash_comment = 91,
  anon_sym_SLASH_STAR = 92,
  sym_source_file = 93,
  sym__statement = 94,
  sym__declaration = 95,
  sym_wire_declaration = 96,
  sym_variable_declarator = 97,
  sym_register_declaration = 98,
  sym__register_expression_statement = 99,
  sym__expression = 100,
  sym_assignment_expression = 101,
  sym_mux_expression = 102,
  sym_parenthesized_expression = 103,
  sym_in_expression = 104,
  sym_slice_expression = 105,
  sym_unary_expression = 106,
  sym_binary_expression = 107,
  sym_predefined_constant = 108,
  sym_true = 109,
  sym_false = 110,
  aux_sym_source_file_repeat1 = 111,
  aux_sym_wire_declaration_repeat1 = 112,
  aux_sym_register_declaration_repeat1 = 113,
  aux_sym_mux_expression_repeat1 = 114,
  aux_sym_in_expression_repeat1 = 115,
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
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
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
  [sym_parenthesized_expression] = "parenthesized_expression",
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [sym_parenthesized_expression] = {
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
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == '0')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(27);
      if (lookahead == ';')
        ADVANCE(28);
      if (lookahead == '<')
        ADVANCE(29);
      if (lookahead == '=')
        ADVANCE(32);
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead == 'A')
        ADVANCE(38);
      if (lookahead == 'C')
        ADVANCE(51);
      if (lookahead == 'E')
        ADVANCE(60);
      if (lookahead == 'F')
        ADVANCE(62);
      if (lookahead == 'G')
        ADVANCE(67);
      if (lookahead == 'H')
        ADVANCE(70);
      if (lookahead == 'I')
        ADVANCE(74);
      if (lookahead == 'J')
        ADVANCE(80);
      if (lookahead == 'L')
        ADVANCE(83);
      if (lookahead == 'M')
        ADVANCE(86);
      if (lookahead == 'N')
        ADVANCE(92);
      if (lookahead == 'O')
        ADVANCE(96);
      if (lookahead == 'P')
        ADVANCE(99);
      if (lookahead == 'R')
        ADVANCE(107);
      if (lookahead == 'S')
        ADVANCE(148);
      if (lookahead == 'T')
        ADVANCE(173);
      if (lookahead == 'X')
        ADVANCE(177);
      if (lookahead == '[')
        ADVANCE(181);
      if (lookahead == ']')
        ADVANCE(182);
      if (lookahead == '^')
        ADVANCE(183);
      if (lookahead == 'c')
        ADVANCE(184);
      if (lookahead == 'f')
        ADVANCE(189);
      if (lookahead == 'i')
        ADVANCE(194);
      if (lookahead == 'r')
        ADVANCE(196);
      if (lookahead == 't')
        ADVANCE(204);
      if (lookahead == 'w')
        ADVANCE(208);
      if (lookahead == '{')
        ADVANCE(212);
      if (lookahead == '|')
        ADVANCE(213);
      if (lookahead == '}')
        ADVANCE(215);
      if (lookahead == '~')
        ADVANCE(216);
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
        ADVANCE(26);
      if ((lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > 'A') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`')
        ADVANCE(42);
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
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 13:
      if (lookahead == '.')
        ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(16);
      if (lookahead == '/')
        ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_slash_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'B')
        ADVANCE(19);
      if (lookahead == 'E')
        ADVANCE(21);
      if (lookahead == 'X')
        ADVANCE(24);
      if (lookahead == 'b')
        ADVANCE(19);
      if (lookahead == 'e')
        ADVANCE(21);
      if (lookahead == 'x')
        ADVANCE(24);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E')
        ADVANCE(21);
      if (lookahead == 'e')
        ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(30);
      if (lookahead == '=')
        ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LT_LT);
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
      if (lookahead == '>')
        ADVANCE(36);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '>')
        ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D')
        ADVANCE(39);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
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
        ADVANCE(42);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D')
        ADVANCE(40);
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
        ADVANCE(42);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q')
        ADVANCE(41);
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
        ADVANCE(42);
      END_STATE();
    case 41:
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
        ADVANCE(42);
      END_STATE();
    case 42:
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
        ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W')
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
        ADVANCE(42);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A')
        ADVANCE(45);
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
        ADVANCE(42);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y')
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
        ADVANCE(42);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S')
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
        ADVANCE(42);
      END_STATE();
    case 47:
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
        ADVANCE(42);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D')
        ADVANCE(49);
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
        ADVANCE(42);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q')
        ADVANCE(50);
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
        ADVANCE(42);
      END_STATE();
    case 50:
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
        ADVANCE(42);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A')
        ADVANCE(52);
      if (lookahead == 'M')
        ADVANCE(55);
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
        ADVANCE(42);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L')
        ADVANCE(53);
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
        ADVANCE(42);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L')
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
        ADVANCE(42);
      END_STATE();
    case 54:
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
        ADVANCE(42);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O')
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
        ADVANCE(42);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V')
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
        ADVANCE(42);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X')
        ADVANCE(58);
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
        ADVANCE(42);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X')
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
        ADVANCE(42);
      END_STATE();
    case 59:
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
        ADVANCE(42);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q')
        ADVANCE(61);
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
        ADVANCE(42);
      END_STATE();
    case 61:
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
        ADVANCE(42);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A')
        ADVANCE(63);
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
        ADVANCE(42);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L')
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
        ADVANCE(42);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S')
        ADVANCE(65);
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
        ADVANCE(42);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E')
        ADVANCE(66);
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
        ADVANCE(42);
      END_STATE();
    case 66:
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
        ADVANCE(42);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E')
        ADVANCE(68);
      if (lookahead == 'T')
        ADVANCE(69);
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
        ADVANCE(42);
      END_STATE();
    case 68:
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
        ADVANCE(42);
      END_STATE();
    case 69:
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
        ADVANCE(42);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A')
        ADVANCE(71);
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
        ADVANCE(42);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L')
        ADVANCE(72);
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
        ADVANCE(42);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T')
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
        ADVANCE(42);
      END_STATE();
    case 73:
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
        ADVANCE(42);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R')
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
        ADVANCE(42);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M')
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
        ADVANCE(42);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O')
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
        ADVANCE(42);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V')
        ADVANCE(78);
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
        ADVANCE(42);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q')
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
        ADVANCE(42);
      END_STATE();
    case 79:
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
        ADVANCE(42);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X')
        ADVANCE(81);
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
        ADVANCE(42);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X')
        ADVANCE(82);
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
        ADVANCE(42);
      END_STATE();
    case 82:
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
        ADVANCE(42);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E')
        ADVANCE(84);
      if (lookahead == 'T')
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
        ADVANCE(42);
      END_STATE();
    case 84:
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
        ADVANCE(42);
      END_STATE();
    case 85:
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
        ADVANCE(42);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R')
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
        ADVANCE(42);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M')
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
        ADVANCE(42);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O')
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
        ADVANCE(42);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V')
        ADVANCE(90);
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
        ADVANCE(42);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q')
        ADVANCE(91);
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
        ADVANCE(42);
      END_STATE();
    case 91:
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
        ADVANCE(42);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E')
        ADVANCE(93);
      if (lookahead == 'O')
        ADVANCE(94);
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
        ADVANCE(42);
      END_STATE();
    case 93:
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
        ADVANCE(42);
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
        ADVANCE(42);
      END_STATE();
    case 95:
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
        ADVANCE(42);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P')
        ADVANCE(97);
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
        ADVANCE(42);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q')
        ADVANCE(98);
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
        ADVANCE(42);
      END_STATE();
    case 98:
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
        ADVANCE(42);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O')
        ADVANCE(100);
      if (lookahead == 'U')
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
        ADVANCE(42);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P')
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
        ADVANCE(42);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q')
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
        ADVANCE(42);
      END_STATE();
    case 102:
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
        ADVANCE(42);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S')
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
        ADVANCE(42);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H')
        ADVANCE(105);
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
        ADVANCE(42);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q')
        ADVANCE(106);
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
        ADVANCE(42);
      END_STATE();
    case 106:
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
        ADVANCE(42);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E')
        ADVANCE(108);
      if (lookahead == 'M')
        ADVANCE(138);
      if (lookahead == 'R')
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
        ADVANCE(42);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G')
        ADVANCE(109);
      if (lookahead == 'T')
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
        ADVANCE(42);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_')
        ADVANCE(110);
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
        ADVANCE(42);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N')
        ADVANCE(111);
      if (lookahead == 'R')
        ADVANCE(115);
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
        ADVANCE(42);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O')
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
        ADVANCE(42);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N')
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
        ADVANCE(42);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E')
        ADVANCE(114);
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
        ADVANCE(42);
      END_STATE();
    case 114:
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
        ADVANCE(42);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(116);
      if (lookahead == '8')
        ADVANCE(122);
      if (lookahead == '9')
        ADVANCE(123);
      if (lookahead == 'A')
        ADVANCE(124);
      if (lookahead == 'B')
        ADVANCE(126);
      if (lookahead == 'C')
        ADVANCE(129);
      if (lookahead == 'D')
        ADVANCE(131);
      if (lookahead == 'S')
        ADVANCE(134);
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
        ADVANCE(42);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0')
        ADVANCE(117);
      if (lookahead == '1')
        ADVANCE(118);
      if (lookahead == '2')
        ADVANCE(119);
      if (lookahead == '3')
        ADVANCE(120);
      if (lookahead == '4')
        ADVANCE(121);
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
        ADVANCE(42);
      END_STATE();
    case 117:
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
        ADVANCE(42);
      END_STATE();
    case 118:
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
        ADVANCE(42);
      END_STATE();
    case 119:
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
        ADVANCE(42);
      END_STATE();
    case 120:
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
        ADVANCE(42);
      END_STATE();
    case 121:
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
        ADVANCE(42);
      END_STATE();
    case 122:
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
        ADVANCE(42);
      END_STATE();
    case 123:
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
        ADVANCE(42);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X')
        ADVANCE(125);
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
        ADVANCE(42);
      END_STATE();
    case 125:
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
        ADVANCE(42);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P')
        ADVANCE(127);
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
        ADVANCE(42);
      END_STATE();
    case 127:
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
        ADVANCE(42);
      END_STATE();
    case 128:
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
        ADVANCE(42);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X')
        ADVANCE(130);
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
        ADVANCE(42);
      END_STATE();
    case 130:
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
        ADVANCE(42);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I')
        ADVANCE(132);
      if (lookahead == 'X')
        ADVANCE(133);
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
        ADVANCE(42);
      END_STATE();
    case 132:
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
        ADVANCE(42);
      END_STATE();
    case 133:
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
        ADVANCE(42);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I')
        ADVANCE(135);
      if (lookahead == 'P')
        ADVANCE(136);
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
        ADVANCE(42);
      END_STATE();
    case 135:
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
        ADVANCE(42);
      END_STATE();
    case 136:
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
        ADVANCE(42);
      END_STATE();
    case 137:
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
        ADVANCE(42);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M')
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
        ADVANCE(42);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O')
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
        ADVANCE(42);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V')
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
        ADVANCE(42);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q')
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
        ADVANCE(42);
      END_STATE();
    case 142:
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
        ADVANCE(42);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M')
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
        ADVANCE(42);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O')
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
        ADVANCE(42);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V')
        ADVANCE(146);
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
        ADVANCE(42);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q')
        ADVANCE(147);
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
        ADVANCE(42);
      END_STATE();
    case 147:
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
        ADVANCE(42);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T')
        ADVANCE(149);
      if (lookahead == 'U')
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
        ADVANCE(42);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A')
        ADVANCE(150);
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
        ADVANCE(42);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T')
        ADVANCE(151);
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
        ADVANCE(42);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_')
        ADVANCE(152);
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
        ADVANCE(42);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A')
        ADVANCE(153);
      if (lookahead == 'B')
        ADVANCE(158);
      if (lookahead == 'H')
        ADVANCE(161);
      if (lookahead == 'I')
        ADVANCE(164);
      if (lookahead == 'P')
        ADVANCE(167);
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
        ADVANCE(42);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D')
        ADVANCE(154);
      if (lookahead == 'O')
        ADVANCE(156);
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
        ADVANCE(42);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R')
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
        ADVANCE(42);
      END_STATE();
    case 155:
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
        ADVANCE(42);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K')
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
        ADVANCE(42);
      END_STATE();
    case 157:
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
        ADVANCE(42);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U')
        ADVANCE(159);
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
        ADVANCE(42);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B')
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
        ADVANCE(42);
      END_STATE();
    case 160:
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
        ADVANCE(42);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L')
        ADVANCE(162);
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
        ADVANCE(42);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T')
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
        ADVANCE(42);
      END_STATE();
    case 163:
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
        ADVANCE(42);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N')
        ADVANCE(165);
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
        ADVANCE(42);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S')
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
        ADVANCE(42);
      END_STATE();
    case 166:
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
        ADVANCE(42);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I')
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
        ADVANCE(42);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P')
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
        ADVANCE(42);
      END_STATE();
    case 169:
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
        ADVANCE(42);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B')
        ADVANCE(171);
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
        ADVANCE(42);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q')
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
        ADVANCE(42);
      END_STATE();
    case 172:
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
        ADVANCE(42);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R')
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
        ADVANCE(42);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U')
        ADVANCE(175);
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
        ADVANCE(42);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E')
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
        ADVANCE(42);
      END_STATE();
    case 176:
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
        ADVANCE(42);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O')
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
        ADVANCE(42);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R')
        ADVANCE(179);
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
        ADVANCE(42);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q')
        ADVANCE(180);
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
        ADVANCE(42);
      END_STATE();
    case 180:
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
        ADVANCE(42);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(42);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
        ADVANCE(42);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(187);
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
        ADVANCE(42);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(42);
      END_STATE();
    case 188:
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
        ADVANCE(42);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
          lookahead != 'a' &&
          (lookahead < '{' || lookahead > '~') &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(42);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(42);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(192);
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
        ADVANCE(42);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(42);
      END_STATE();
    case 193:
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
        ADVANCE(42);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
        ADVANCE(42);
      END_STATE();
    case 195:
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
        ADVANCE(42);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(42);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g')
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
        ADVANCE(42);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(42);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
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
        ADVANCE(42);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(42);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(202);
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
        ADVANCE(42);
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
        ADVANCE(42);
      END_STATE();
    case 203:
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
        ADVANCE(42);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
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
        ADVANCE(42);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(206);
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
        ADVANCE(42);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(42);
      END_STATE();
    case 207:
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
        ADVANCE(42);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(42);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(210);
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
        ADVANCE(42);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(211);
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
        ADVANCE(42);
      END_STATE();
    case 211:
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
        ADVANCE(42);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|')
        ADVANCE(214);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 217:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(218);
      if (lookahead == '#')
        ADVANCE(219);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(220);
      if (lookahead == '0')
        ADVANCE(18);
      if (lookahead == 'A')
        ADVANCE(38);
      if (lookahead == 'C')
        ADVANCE(51);
      if (lookahead == 'E')
        ADVANCE(60);
      if (lookahead == 'F')
        ADVANCE(62);
      if (lookahead == 'G')
        ADVANCE(67);
      if (lookahead == 'H')
        ADVANCE(70);
      if (lookahead == 'I')
        ADVANCE(74);
      if (lookahead == 'J')
        ADVANCE(80);
      if (lookahead == 'L')
        ADVANCE(83);
      if (lookahead == 'M')
        ADVANCE(86);
      if (lookahead == 'N')
        ADVANCE(92);
      if (lookahead == 'O')
        ADVANCE(96);
      if (lookahead == 'P')
        ADVANCE(99);
      if (lookahead == 'R')
        ADVANCE(107);
      if (lookahead == 'S')
        ADVANCE(148);
      if (lookahead == 'T')
        ADVANCE(173);
      if (lookahead == 'X')
        ADVANCE(177);
      if (lookahead == '[')
        ADVANCE(181);
      if (lookahead == 'c')
        ADVANCE(184);
      if (lookahead == 'f')
        ADVANCE(189);
      if (lookahead == 'r')
        ADVANCE(196);
      if (lookahead == 't')
        ADVANCE(204);
      if (lookahead == 'w')
        ADVANCE(208);
      if (lookahead == '~')
        ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(217);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
      if ((lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > 'A') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~'))
        ADVANCE(42);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(219);
      END_STATE();
    case 220:
      if (lookahead == '*')
        ADVANCE(221);
      if (lookahead == '/')
        ADVANCE(219);
      END_STATE();
    case 221:
      if (lookahead == '*')
        ADVANCE(222);
      if (lookahead != 0)
        ADVANCE(221);
      END_STATE();
    case 222:
      if (lookahead == '*')
        ADVANCE(222);
      if (lookahead == '/')
        ADVANCE(223);
      if (lookahead != 0)
        ADVANCE(221);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 224:
      if (lookahead == '#')
        ADVANCE(219);
      if (lookahead == '/')
        ADVANCE(220);
      if (lookahead == '}')
        ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(224);
      if (lookahead != 0 &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > '@') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~'))
        ADVANCE(42);
      END_STATE();
    case 225:
      if (lookahead == '#')
        ADVANCE(219);
      if (lookahead == '/')
        ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(226);
      END_STATE();
    case 226:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_register_name);
      END_STATE();
    case 228:
      if (lookahead == '!')
        ADVANCE(218);
      if (lookahead == '#')
        ADVANCE(219);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(220);
      if (lookahead == '0')
        ADVANCE(18);
      if (lookahead == 'A')
        ADVANCE(38);
      if (lookahead == 'C')
        ADVANCE(51);
      if (lookahead == 'E')
        ADVANCE(60);
      if (lookahead == 'F')
        ADVANCE(62);
      if (lookahead == 'G')
        ADVANCE(67);
      if (lookahead == 'H')
        ADVANCE(70);
      if (lookahead == 'I')
        ADVANCE(74);
      if (lookahead == 'J')
        ADVANCE(80);
      if (lookahead == 'L')
        ADVANCE(83);
      if (lookahead == 'M')
        ADVANCE(86);
      if (lookahead == 'N')
        ADVANCE(92);
      if (lookahead == 'O')
        ADVANCE(96);
      if (lookahead == 'P')
        ADVANCE(99);
      if (lookahead == 'R')
        ADVANCE(107);
      if (lookahead == 'S')
        ADVANCE(148);
      if (lookahead == 'T')
        ADVANCE(173);
      if (lookahead == 'X')
        ADVANCE(177);
      if (lookahead == '[')
        ADVANCE(181);
      if (lookahead == ']')
        ADVANCE(182);
      if (lookahead == 'c')
        ADVANCE(184);
      if (lookahead == 'f')
        ADVANCE(189);
      if (lookahead == 't')
        ADVANCE(204);
      if (lookahead == '~')
        ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(228);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
      if (lookahead != 0 &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > 'A') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~'))
        ADVANCE(42);
      END_STATE();
    case 229:
      if (lookahead == '!')
        ADVANCE(230);
      if (lookahead == '#')
        ADVANCE(219);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(231);
      if (lookahead == ':')
        ADVANCE(27);
      if (lookahead == ';')
        ADVANCE(28);
      if (lookahead == '<')
        ADVANCE(29);
      if (lookahead == '=')
        ADVANCE(32);
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead == '[')
        ADVANCE(181);
      if (lookahead == ']')
        ADVANCE(182);
      if (lookahead == '^')
        ADVANCE(183);
      if (lookahead == 'i')
        ADVANCE(232);
      if (lookahead == '|')
        ADVANCE(213);
      if (lookahead == '}')
        ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(229);
      END_STATE();
    case 230:
      if (lookahead == '=')
        ADVANCE(3);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(221);
      if (lookahead == '/')
        ADVANCE(219);
      END_STATE();
    case 232:
      if (lookahead == 'n')
        ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 234:
      if (lookahead == '!')
        ADVANCE(230);
      if (lookahead == '#')
        ADVANCE(219);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(231);
      if (lookahead == ';')
        ADVANCE(28);
      if (lookahead == '<')
        ADVANCE(29);
      if (lookahead == '=')
        ADVANCE(32);
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead == '[')
        ADVANCE(181);
      if (lookahead == '^')
        ADVANCE(183);
      if (lookahead == 'i')
        ADVANCE(232);
      if (lookahead == '|')
        ADVANCE(213);
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
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(219);
      if (lookahead == '/')
        ADVANCE(220);
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
        ADVANCE(230);
      if (lookahead == '#')
        ADVANCE(219);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(231);
      if (lookahead == ':')
        ADVANCE(27);
      if (lookahead == '<')
        ADVANCE(29);
      if (lookahead == '=')
        ADVANCE(32);
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead == '[')
        ADVANCE(181);
      if (lookahead == '^')
        ADVANCE(183);
      if (lookahead == 'i')
        ADVANCE(232);
      if (lookahead == '|')
        ADVANCE(213);
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
      if (lookahead == '#')
        ADVANCE(219);
      if (lookahead == '/')
        ADVANCE(220);
      if (lookahead == '{')
        ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(237);
      END_STATE();
    case 238:
      if (lookahead == '!')
        ADVANCE(230);
      if (lookahead == '#')
        ADVANCE(219);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(231);
      if (lookahead == '<')
        ADVANCE(29);
      if (lookahead == '=')
        ADVANCE(32);
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead == '[')
        ADVANCE(181);
      if (lookahead == '^')
        ADVANCE(183);
      if (lookahead == 'i')
        ADVANCE(232);
      if (lookahead == '|')
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
        ADVANCE(230);
      if (lookahead == '#')
        ADVANCE(219);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(231);
      if (lookahead == '<')
        ADVANCE(29);
      if (lookahead == '=')
        ADVANCE(32);
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead == '[')
        ADVANCE(181);
      if (lookahead == '^')
        ADVANCE(183);
      if (lookahead == 'i')
        ADVANCE(232);
      if (lookahead == '|')
        ADVANCE(213);
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
    case 240:
      if (lookahead == '!')
        ADVANCE(218);
      if (lookahead == '#')
        ADVANCE(219);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(220);
      if (lookahead == '0')
        ADVANCE(18);
      if (lookahead == 'A')
        ADVANCE(38);
      if (lookahead == 'C')
        ADVANCE(51);
      if (lookahead == 'E')
        ADVANCE(60);
      if (lookahead == 'F')
        ADVANCE(62);
      if (lookahead == 'G')
        ADVANCE(67);
      if (lookahead == 'H')
        ADVANCE(70);
      if (lookahead == 'I')
        ADVANCE(74);
      if (lookahead == 'J')
        ADVANCE(80);
      if (lookahead == 'L')
        ADVANCE(83);
      if (lookahead == 'M')
        ADVANCE(86);
      if (lookahead == 'N')
        ADVANCE(92);
      if (lookahead == 'O')
        ADVANCE(96);
      if (lookahead == 'P')
        ADVANCE(99);
      if (lookahead == 'R')
        ADVANCE(107);
      if (lookahead == 'S')
        ADVANCE(148);
      if (lookahead == 'T')
        ADVANCE(173);
      if (lookahead == 'X')
        ADVANCE(177);
      if (lookahead == '[')
        ADVANCE(181);
      if (lookahead == 'c')
        ADVANCE(184);
      if (lookahead == 'f')
        ADVANCE(189);
      if (lookahead == 't')
        ADVANCE(204);
      if (lookahead == '}')
        ADVANCE(215);
      if (lookahead == '~')
        ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(240);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
      if (lookahead != 0 &&
          (lookahead < ' ' || lookahead > '#') &&
          (lookahead < '%' || lookahead > 'A') &&
          (lookahead < '[' || lookahead > '^') &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '~'))
        ADVANCE(42);
      END_STATE();
    case 241:
      if (lookahead == '!')
        ADVANCE(230);
      if (lookahead == '#')
        ADVANCE(219);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(231);
      if (lookahead == '<')
        ADVANCE(29);
      if (lookahead == '=')
        ADVANCE(32);
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead == '[')
        ADVANCE(181);
      if (lookahead == '^')
        ADVANCE(183);
      if (lookahead == 'i')
        ADVANCE(232);
      if (lookahead == '|')
        ADVANCE(213);
      if (lookahead == '}')
        ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(241);
      END_STATE();
    case 242:
      if (lookahead == '!')
        ADVANCE(230);
      if (lookahead == '#')
        ADVANCE(219);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(231);
      if (lookahead == '<')
        ADVANCE(29);
      if (lookahead == '=')
        ADVANCE(32);
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead == '[')
        ADVANCE(181);
      if (lookahead == ']')
        ADVANCE(182);
      if (lookahead == '^')
        ADVANCE(183);
      if (lookahead == 'i')
        ADVANCE(232);
      if (lookahead == '|')
        ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(242);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 217},
  [2] = {.lex_state = 224},
  [3] = {.lex_state = 225},
  [4] = {.lex_state = 224},
  [5] = {.lex_state = 228},
  [6] = {.lex_state = 228},
  [7] = {.lex_state = 228},
  [8] = {.lex_state = 229},
  [9] = {.lex_state = 234},
  [10] = {.lex_state = 229},
  [11] = {.lex_state = 229},
  [12] = {.lex_state = 235},
  [13] = {.lex_state = 234},
  [14] = {.lex_state = 217},
  [15] = {.lex_state = 236},
  [16] = {.lex_state = 234},
  [17] = {.lex_state = 237},
  [18] = {.lex_state = 229},
  [19] = {.lex_state = 224},
  [20] = {.lex_state = 228},
  [21] = {.lex_state = 236},
  [22] = {.lex_state = 236},
  [23] = {.lex_state = 228},
  [24] = {.lex_state = 224},
  [25] = {.lex_state = 228},
  [26] = {.lex_state = 238},
  [27] = {.lex_state = 238},
  [28] = {.lex_state = 229},
  [29] = {.lex_state = 228},
  [30] = {.lex_state = 217},
  [31] = {.lex_state = 228},
  [32] = {.lex_state = 237},
  [33] = {.lex_state = 228},
  [34] = {.lex_state = 228},
  [35] = {.lex_state = 228},
  [36] = {.lex_state = 228},
  [37] = {.lex_state = 228},
  [38] = {.lex_state = 217},
  [39] = {.lex_state = 217},
  [40] = {.lex_state = 217},
  [41] = {.lex_state = 224},
  [42] = {.lex_state = 234},
  [43] = {.lex_state = 224},
  [44] = {.lex_state = 228},
  [45] = {.lex_state = 229},
  [46] = {.lex_state = 228},
  [47] = {.lex_state = 228},
  [48] = {.lex_state = 228},
  [49] = {.lex_state = 228},
  [50] = {.lex_state = 228},
  [51] = {.lex_state = 228},
  [52] = {.lex_state = 228},
  [53] = {.lex_state = 229},
  [54] = {.lex_state = 228},
  [55] = {.lex_state = 229},
  [56] = {.lex_state = 228},
  [57] = {.lex_state = 229},
  [58] = {.lex_state = 228},
  [59] = {.lex_state = 228},
  [60] = {.lex_state = 228},
  [61] = {.lex_state = 228},
  [62] = {.lex_state = 228},
  [63] = {.lex_state = 234},
  [64] = {.lex_state = 224},
  [65] = {.lex_state = 228},
  [66] = {.lex_state = 239},
  [67] = {.lex_state = 239},
  [68] = {.lex_state = 240},
  [69] = {.lex_state = 234},
  [70] = {.lex_state = 234},
  [71] = {.lex_state = 234},
  [72] = {.lex_state = 234},
  [73] = {.lex_state = 229},
  [74] = {.lex_state = 234},
  [75] = {.lex_state = 234},
  [76] = {.lex_state = 217},
  [77] = {.lex_state = 234},
  [78] = {.lex_state = 217},
  [79] = {.lex_state = 229},
  [80] = {.lex_state = 224},
  [81] = {.lex_state = 234},
  [82] = {.lex_state = 228},
  [83] = {.lex_state = 236},
  [84] = {.lex_state = 234},
  [85] = {.lex_state = 236},
  [86] = {.lex_state = 236},
  [87] = {.lex_state = 236},
  [88] = {.lex_state = 236},
  [89] = {.lex_state = 228},
  [90] = {.lex_state = 238},
  [91] = {.lex_state = 238},
  [92] = {.lex_state = 238},
  [93] = {.lex_state = 238},
  [94] = {.lex_state = 238},
  [95] = {.lex_state = 229},
  [96] = {.lex_state = 228},
  [97] = {.lex_state = 228},
  [98] = {.lex_state = 228},
  [99] = {.lex_state = 228},
  [100] = {.lex_state = 228},
  [101] = {.lex_state = 228},
  [102] = {.lex_state = 228},
  [103] = {.lex_state = 229},
  [104] = {.lex_state = 224},
  [105] = {.lex_state = 228},
  [106] = {.lex_state = 241},
  [107] = {.lex_state = 241},
  [108] = {.lex_state = 228},
  [109] = {.lex_state = 217},
  [110] = {.lex_state = 224},
  [111] = {.lex_state = 236},
  [112] = {.lex_state = 228},
  [113] = {.lex_state = 238},
  [114] = {.lex_state = 228},
  [115] = {.lex_state = 239},
  [116] = {.lex_state = 224},
  [117] = {.lex_state = 228},
  [118] = {.lex_state = 242},
  [119] = {.lex_state = 242},
  [120] = {.lex_state = 239},
  [121] = {.lex_state = 239},
  [122] = {.lex_state = 239},
  [123] = {.lex_state = 239},
  [124] = {.lex_state = 229},
  [125] = {.lex_state = 228},
  [126] = {.lex_state = 228},
  [127] = {.lex_state = 229},
  [128] = {.lex_state = 228},
  [129] = {.lex_state = 228},
  [130] = {.lex_state = 228},
  [131] = {.lex_state = 228},
  [132] = {.lex_state = 228},
  [133] = {.lex_state = 241},
  [134] = {.lex_state = 234},
  [135] = {.lex_state = 239},
  [136] = {.lex_state = 229},
  [137] = {.lex_state = 228},
  [138] = {.lex_state = 229},
  [139] = {.lex_state = 228},
  [140] = {.lex_state = 228},
  [141] = {.lex_state = 228},
  [142] = {.lex_state = 228},
  [143] = {.lex_state = 228},
  [144] = {.lex_state = 228},
  [145] = {.lex_state = 241},
  [146] = {.lex_state = 241},
  [147] = {.lex_state = 241},
  [148] = {.lex_state = 241},
  [149] = {.lex_state = 241},
  [150] = {.lex_state = 241},
  [151] = {.lex_state = 229},
  [152] = {.lex_state = 241},
  [153] = {.lex_state = 224},
  [154] = {.lex_state = 228},
  [155] = {.lex_state = 242},
  [156] = {.lex_state = 242},
  [157] = {.lex_state = 242},
  [158] = {.lex_state = 242},
  [159] = {.lex_state = 242},
  [160] = {.lex_state = 241},
  [161] = {.lex_state = 242},
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [sym_source_file] = STATE(12),
    [sym__statement] = STATE(14),
    [sym__declaration] = STATE(14),
    [sym_wire_declaration] = STATE(14),
    [sym_register_declaration] = STATE(14),
    [sym__expression] = STATE(13),
    [sym_assignment_expression] = STATE(13),
    [sym_mux_expression] = STATE(13),
    [sym_parenthesized_expression] = STATE(13),
    [sym_in_expression] = STATE(13),
    [sym_slice_expression] = STATE(13),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_predefined_constant] = STATE(13),
    [sym_true] = STATE(13),
    [sym_false] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_wire] = ACTIONS(7),
    [anon_sym_register] = ACTIONS(9),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [2] = {
    [sym_variable_declarator] = STATE(16),
    [sym_identifier] = ACTIONS(31),
    [sym_comment] = ACTIONS(29),
  },
  [3] = {
    [sym_register_name] = ACTIONS(33),
    [sym_comment] = ACTIONS(29),
  },
  [4] = {
    [sym_identifier] = ACTIONS(35),
    [sym_comment] = ACTIONS(29),
  },
  [5] = {
    [sym__expression] = STATE(22),
    [sym_assignment_expression] = STATE(22),
    [sym_mux_expression] = STATE(22),
    [sym_parenthesized_expression] = STATE(22),
    [sym_in_expression] = STATE(22),
    [sym_slice_expression] = STATE(22),
    [sym_unary_expression] = STATE(22),
    [sym_binary_expression] = STATE(22),
    [sym_predefined_constant] = STATE(22),
    [sym_true] = STATE(22),
    [sym_false] = STATE(22),
    [aux_sym_mux_expression_repeat1] = STATE(23),
    [anon_sym_const] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(41),
    [sym_number] = ACTIONS(43),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [6] = {
    [sym__expression] = STATE(27),
    [sym_assignment_expression] = STATE(27),
    [sym_mux_expression] = STATE(27),
    [sym_parenthesized_expression] = STATE(27),
    [sym_in_expression] = STATE(27),
    [sym_slice_expression] = STATE(27),
    [sym_unary_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_predefined_constant] = STATE(27),
    [sym_true] = STATE(27),
    [sym_false] = STATE(27),
    [anon_sym_const] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(49),
    [sym_number] = ACTIONS(51),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [7] = {
    [sym__expression] = STATE(28),
    [sym_assignment_expression] = STATE(28),
    [sym_mux_expression] = STATE(28),
    [sym_parenthesized_expression] = STATE(28),
    [sym_in_expression] = STATE(28),
    [sym_slice_expression] = STATE(28),
    [sym_unary_expression] = STATE(28),
    [sym_binary_expression] = STATE(28),
    [sym_predefined_constant] = STATE(28),
    [sym_true] = STATE(28),
    [sym_false] = STATE(28),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [8] = {
    [anon_sym_SEMI] = ACTIONS(55),
    [anon_sym_COMMA] = ACTIONS(55),
    [anon_sym_COLON] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_RBRACK] = ACTIONS(55),
    [anon_sym_RPAREN] = ACTIONS(55),
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
    [sym_comment] = ACTIONS(29),
  },
  [9] = {
    [anon_sym_SEMI] = ACTIONS(59),
    [anon_sym_EQ] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_in] = ACTIONS(59),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(59),
    [anon_sym_EQ_EQ] = ACTIONS(59),
    [anon_sym_BANG_EQ] = ACTIONS(59),
    [anon_sym_GT_EQ] = ACTIONS(59),
    [anon_sym_LT_EQ] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(59),
    [anon_sym_PIPE_PIPE] = ACTIONS(59),
    [anon_sym_STAR] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_GT_GT] = ACTIONS(63),
    [anon_sym_GT_GT_GT] = ACTIONS(59),
    [anon_sym_LT_LT] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(63),
    [anon_sym_CARET] = ACTIONS(59),
    [sym_comment] = ACTIONS(29),
  },
  [10] = {
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(65),
    [anon_sym_RBRACK] = ACTIONS(65),
    [anon_sym_RPAREN] = ACTIONS(65),
    [anon_sym_in] = ACTIONS(65),
    [anon_sym_DOT_DOT] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_GT_EQ] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(67),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_GT_GT] = ACTIONS(67),
    [anon_sym_GT_GT_GT] = ACTIONS(65),
    [anon_sym_LT_LT] = ACTIONS(65),
    [anon_sym_AMP] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(67),
    [anon_sym_CARET] = ACTIONS(65),
    [sym_comment] = ACTIONS(29),
  },
  [11] = {
    [anon_sym_SEMI] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(69),
    [anon_sym_COLON] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(69),
    [anon_sym_in] = ACTIONS(69),
    [anon_sym_DOT_DOT] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_EQ_EQ] = ACTIONS(69),
    [anon_sym_BANG_EQ] = ACTIONS(69),
    [anon_sym_GT_EQ] = ACTIONS(69),
    [anon_sym_LT_EQ] = ACTIONS(69),
    [anon_sym_GT] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(71),
    [anon_sym_AMP_AMP] = ACTIONS(69),
    [anon_sym_PIPE_PIPE] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_GT_GT] = ACTIONS(71),
    [anon_sym_GT_GT_GT] = ACTIONS(69),
    [anon_sym_LT_LT] = ACTIONS(69),
    [anon_sym_AMP] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(71),
    [anon_sym_CARET] = ACTIONS(69),
    [sym_comment] = ACTIONS(29),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [sym_comment] = ACTIONS(29),
  },
  [13] = {
    [anon_sym_SEMI] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_in] = ACTIONS(79),
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
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_GT_GT_GT] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_CARET] = ACTIONS(89),
    [sym_comment] = ACTIONS(29),
  },
  [14] = {
    [sym__statement] = STATE(38),
    [sym__declaration] = STATE(38),
    [sym_wire_declaration] = STATE(38),
    [sym_register_declaration] = STATE(38),
    [sym__expression] = STATE(13),
    [sym_assignment_expression] = STATE(13),
    [sym_mux_expression] = STATE(13),
    [sym_parenthesized_expression] = STATE(13),
    [sym_in_expression] = STATE(13),
    [sym_slice_expression] = STATE(13),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_predefined_constant] = STATE(13),
    [sym_true] = STATE(13),
    [sym_false] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(99),
    [anon_sym_wire] = ACTIONS(7),
    [anon_sym_register] = ACTIONS(9),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [15] = {
    [anon_sym_COLON] = ACTIONS(101),
    [sym_comment] = ACTIONS(29),
  },
  [16] = {
    [aux_sym_wire_declaration_repeat1] = STATE(42),
    [anon_sym_SEMI] = ACTIONS(103),
    [anon_sym_COMMA] = ACTIONS(105),
    [sym_comment] = ACTIONS(29),
  },
  [17] = {
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_comment] = ACTIONS(29),
  },
  [18] = {
    [anon_sym_EQ] = ACTIONS(109),
    [sym_comment] = ACTIONS(29),
  },
  [19] = {
    [sym_identifier] = ACTIONS(111),
    [sym_comment] = ACTIONS(29),
  },
  [20] = {
    [sym__expression] = STATE(28),
    [sym_assignment_expression] = STATE(28),
    [sym_mux_expression] = STATE(28),
    [sym_parenthesized_expression] = STATE(28),
    [sym_in_expression] = STATE(28),
    [sym_slice_expression] = STATE(28),
    [sym_unary_expression] = STATE(28),
    [sym_binary_expression] = STATE(28),
    [sym_predefined_constant] = STATE(28),
    [sym_true] = STATE(28),
    [sym_false] = STATE(28),
    [anon_sym_const] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(41),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [21] = {
    [anon_sym_COLON] = ACTIONS(59),
    [anon_sym_EQ] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_in] = ACTIONS(59),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(59),
    [anon_sym_EQ_EQ] = ACTIONS(59),
    [anon_sym_BANG_EQ] = ACTIONS(59),
    [anon_sym_GT_EQ] = ACTIONS(59),
    [anon_sym_LT_EQ] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(59),
    [anon_sym_PIPE_PIPE] = ACTIONS(59),
    [anon_sym_STAR] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_GT_GT] = ACTIONS(63),
    [anon_sym_GT_GT_GT] = ACTIONS(59),
    [anon_sym_LT_LT] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(63),
    [anon_sym_CARET] = ACTIONS(59),
    [sym_comment] = ACTIONS(29),
  },
  [22] = {
    [anon_sym_COLON] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_in] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(119),
    [anon_sym_BANG_EQ] = ACTIONS(119),
    [anon_sym_GT_EQ] = ACTIONS(119),
    [anon_sym_LT_EQ] = ACTIONS(119),
    [anon_sym_GT] = ACTIONS(121),
    [anon_sym_LT] = ACTIONS(121),
    [anon_sym_AMP_AMP] = ACTIONS(123),
    [anon_sym_PIPE_PIPE] = ACTIONS(125),
    [anon_sym_STAR] = ACTIONS(127),
    [anon_sym_SLASH] = ACTIONS(129),
    [anon_sym_GT_GT] = ACTIONS(129),
    [anon_sym_GT_GT_GT] = ACTIONS(127),
    [anon_sym_LT_LT] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(131),
    [anon_sym_PIPE] = ACTIONS(133),
    [anon_sym_CARET] = ACTIONS(125),
    [sym_comment] = ACTIONS(29),
  },
  [23] = {
    [sym__expression] = STATE(22),
    [sym_assignment_expression] = STATE(22),
    [sym_mux_expression] = STATE(22),
    [sym_parenthesized_expression] = STATE(22),
    [sym_in_expression] = STATE(22),
    [sym_slice_expression] = STATE(22),
    [sym_unary_expression] = STATE(22),
    [sym_binary_expression] = STATE(22),
    [sym_predefined_constant] = STATE(22),
    [sym_true] = STATE(22),
    [sym_false] = STATE(22),
    [aux_sym_mux_expression_repeat1] = STATE(54),
    [anon_sym_const] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(135),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(41),
    [sym_number] = ACTIONS(43),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [24] = {
    [sym_identifier] = ACTIONS(137),
    [sym_comment] = ACTIONS(29),
  },
  [25] = {
    [sym__expression] = STATE(28),
    [sym_assignment_expression] = STATE(28),
    [sym_mux_expression] = STATE(28),
    [sym_parenthesized_expression] = STATE(28),
    [sym_in_expression] = STATE(28),
    [sym_slice_expression] = STATE(28),
    [sym_unary_expression] = STATE(28),
    [sym_binary_expression] = STATE(28),
    [sym_predefined_constant] = STATE(28),
    [sym_true] = STATE(28),
    [sym_false] = STATE(28),
    [anon_sym_const] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(49),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [26] = {
    [anon_sym_EQ] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(59),
    [anon_sym_in] = ACTIONS(59),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(59),
    [anon_sym_EQ_EQ] = ACTIONS(59),
    [anon_sym_BANG_EQ] = ACTIONS(59),
    [anon_sym_GT_EQ] = ACTIONS(59),
    [anon_sym_LT_EQ] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(59),
    [anon_sym_PIPE_PIPE] = ACTIONS(59),
    [anon_sym_STAR] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_GT_GT] = ACTIONS(63),
    [anon_sym_GT_GT_GT] = ACTIONS(59),
    [anon_sym_LT_LT] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(63),
    [anon_sym_CARET] = ACTIONS(59),
    [sym_comment] = ACTIONS(29),
  },
  [27] = {
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(141),
    [anon_sym_in] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_EQ_EQ] = ACTIONS(145),
    [anon_sym_BANG_EQ] = ACTIONS(145),
    [anon_sym_GT_EQ] = ACTIONS(145),
    [anon_sym_LT_EQ] = ACTIONS(145),
    [anon_sym_GT] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(149),
    [anon_sym_PIPE_PIPE] = ACTIONS(151),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_GT_GT] = ACTIONS(155),
    [anon_sym_GT_GT_GT] = ACTIONS(153),
    [anon_sym_LT_LT] = ACTIONS(153),
    [anon_sym_AMP] = ACTIONS(157),
    [anon_sym_PIPE] = ACTIONS(159),
    [anon_sym_CARET] = ACTIONS(151),
    [sym_comment] = ACTIONS(29),
  },
  [28] = {
    [anon_sym_SEMI] = ACTIONS(161),
    [anon_sym_COMMA] = ACTIONS(161),
    [anon_sym_COLON] = ACTIONS(161),
    [anon_sym_RBRACE] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(161),
    [anon_sym_RPAREN] = ACTIONS(161),
    [anon_sym_in] = ACTIONS(161),
    [anon_sym_DOT_DOT] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(161),
    [anon_sym_PLUS] = ACTIONS(161),
    [anon_sym_EQ_EQ] = ACTIONS(161),
    [anon_sym_BANG_EQ] = ACTIONS(161),
    [anon_sym_GT_EQ] = ACTIONS(161),
    [anon_sym_LT_EQ] = ACTIONS(161),
    [anon_sym_GT] = ACTIONS(163),
    [anon_sym_LT] = ACTIONS(163),
    [anon_sym_AMP_AMP] = ACTIONS(161),
    [anon_sym_PIPE_PIPE] = ACTIONS(161),
    [anon_sym_STAR] = ACTIONS(161),
    [anon_sym_SLASH] = ACTIONS(163),
    [anon_sym_GT_GT] = ACTIONS(163),
    [anon_sym_GT_GT_GT] = ACTIONS(161),
    [anon_sym_LT_LT] = ACTIONS(161),
    [anon_sym_AMP] = ACTIONS(163),
    [anon_sym_PIPE] = ACTIONS(163),
    [anon_sym_CARET] = ACTIONS(161),
    [sym_comment] = ACTIONS(29),
  },
  [29] = {
    [sym__expression] = STATE(63),
    [sym_assignment_expression] = STATE(63),
    [sym_mux_expression] = STATE(63),
    [sym_parenthesized_expression] = STATE(63),
    [sym_in_expression] = STATE(63),
    [sym_slice_expression] = STATE(63),
    [sym_unary_expression] = STATE(63),
    [sym_binary_expression] = STATE(63),
    [sym_predefined_constant] = STATE(63),
    [sym_true] = STATE(63),
    [sym_false] = STATE(63),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_number] = ACTIONS(165),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [anon_sym_wire] = ACTIONS(169),
    [anon_sym_register] = ACTIONS(169),
    [anon_sym_const] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(167),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_BANG] = ACTIONS(167),
    [anon_sym_TILDE] = ACTIONS(167),
    [anon_sym_DASH] = ACTIONS(167),
    [anon_sym_PLUS] = ACTIONS(167),
    [anon_sym_STAT_BUB] = ACTIONS(169),
    [anon_sym_STAT_AOK] = ACTIONS(169),
    [anon_sym_STAT_HLT] = ACTIONS(169),
    [anon_sym_STAT_ADR] = ACTIONS(169),
    [anon_sym_STAT_INS] = ACTIONS(169),
    [anon_sym_STAT_PIP] = ACTIONS(169),
    [anon_sym_REG_RAX] = ACTIONS(169),
    [anon_sym_REG_RCX] = ACTIONS(169),
    [anon_sym_REG_RDX] = ACTIONS(169),
    [anon_sym_REG_RBX] = ACTIONS(169),
    [anon_sym_REG_RSP] = ACTIONS(169),
    [anon_sym_REG_RBP] = ACTIONS(169),
    [anon_sym_REG_RSI] = ACTIONS(169),
    [anon_sym_REG_RDI] = ACTIONS(169),
    [anon_sym_REG_R8] = ACTIONS(169),
    [anon_sym_REG_R9] = ACTIONS(169),
    [anon_sym_REG_R10] = ACTIONS(169),
    [anon_sym_REG_R11] = ACTIONS(169),
    [anon_sym_REG_R12] = ACTIONS(169),
    [anon_sym_REG_R13] = ACTIONS(169),
    [anon_sym_REG_R14] = ACTIONS(169),
    [anon_sym_REG_NONE] = ACTIONS(169),
    [anon_sym_HALT] = ACTIONS(169),
    [anon_sym_NOP] = ACTIONS(169),
    [anon_sym_RRMOVQ] = ACTIONS(169),
    [anon_sym_IRMOVQ] = ACTIONS(169),
    [anon_sym_RMMOVQ] = ACTIONS(169),
    [anon_sym_MRMOVQ] = ACTIONS(169),
    [anon_sym_OPQ] = ACTIONS(169),
    [anon_sym_JXX] = ACTIONS(169),
    [anon_sym_CALL] = ACTIONS(169),
    [anon_sym_RET] = ACTIONS(169),
    [anon_sym_PUSHQ] = ACTIONS(169),
    [anon_sym_POPQ] = ACTIONS(169),
    [anon_sym_CMOVXX] = ACTIONS(169),
    [anon_sym_ALWAYS] = ACTIONS(169),
    [anon_sym_LE] = ACTIONS(169),
    [anon_sym_LT2] = ACTIONS(169),
    [anon_sym_EQ2] = ACTIONS(169),
    [anon_sym_NE] = ACTIONS(169),
    [anon_sym_GE] = ACTIONS(169),
    [anon_sym_GT2] = ACTIONS(169),
    [anon_sym_ADDQ] = ACTIONS(169),
    [anon_sym_SUBQ] = ACTIONS(169),
    [anon_sym_ANDQ] = ACTIONS(169),
    [anon_sym_XORQ] = ACTIONS(169),
    [sym_identifier] = ACTIONS(169),
    [sym_number] = ACTIONS(167),
    [anon_sym_true] = ACTIONS(169),
    [anon_sym_TRUE] = ACTIONS(169),
    [anon_sym_false] = ACTIONS(169),
    [anon_sym_FALSE] = ACTIONS(169),
    [sym_comment] = ACTIONS(29),
  },
  [31] = {
    [sym__expression] = STATE(67),
    [sym_assignment_expression] = STATE(67),
    [sym_mux_expression] = STATE(67),
    [sym_parenthesized_expression] = STATE(67),
    [sym_in_expression] = STATE(67),
    [sym_slice_expression] = STATE(67),
    [sym_unary_expression] = STATE(67),
    [sym_binary_expression] = STATE(67),
    [sym_predefined_constant] = STATE(67),
    [sym_true] = STATE(67),
    [sym_false] = STATE(67),
    [anon_sym_const] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(175),
    [sym_number] = ACTIONS(177),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [32] = {
    [anon_sym_LBRACE] = ACTIONS(179),
    [sym_comment] = ACTIONS(29),
  },
  [33] = {
    [sym__expression] = STATE(69),
    [sym_assignment_expression] = STATE(69),
    [sym_mux_expression] = STATE(69),
    [sym_parenthesized_expression] = STATE(69),
    [sym_in_expression] = STATE(69),
    [sym_slice_expression] = STATE(69),
    [sym_unary_expression] = STATE(69),
    [sym_binary_expression] = STATE(69),
    [sym_predefined_constant] = STATE(69),
    [sym_true] = STATE(69),
    [sym_false] = STATE(69),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_number] = ACTIONS(181),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [34] = {
    [sym__expression] = STATE(70),
    [sym_assignment_expression] = STATE(70),
    [sym_mux_expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_in_expression] = STATE(70),
    [sym_slice_expression] = STATE(70),
    [sym_unary_expression] = STATE(70),
    [sym_binary_expression] = STATE(70),
    [sym_predefined_constant] = STATE(70),
    [sym_true] = STATE(70),
    [sym_false] = STATE(70),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_number] = ACTIONS(183),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [35] = {
    [sym__expression] = STATE(71),
    [sym_assignment_expression] = STATE(71),
    [sym_mux_expression] = STATE(71),
    [sym_parenthesized_expression] = STATE(71),
    [sym_in_expression] = STATE(71),
    [sym_slice_expression] = STATE(71),
    [sym_unary_expression] = STATE(71),
    [sym_binary_expression] = STATE(71),
    [sym_predefined_constant] = STATE(71),
    [sym_true] = STATE(71),
    [sym_false] = STATE(71),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_number] = ACTIONS(185),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [36] = {
    [sym__expression] = STATE(72),
    [sym_assignment_expression] = STATE(72),
    [sym_mux_expression] = STATE(72),
    [sym_parenthesized_expression] = STATE(72),
    [sym_in_expression] = STATE(72),
    [sym_slice_expression] = STATE(72),
    [sym_unary_expression] = STATE(72),
    [sym_binary_expression] = STATE(72),
    [sym_predefined_constant] = STATE(72),
    [sym_true] = STATE(72),
    [sym_false] = STATE(72),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_number] = ACTIONS(187),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [37] = {
    [sym__expression] = STATE(73),
    [sym_assignment_expression] = STATE(73),
    [sym_mux_expression] = STATE(73),
    [sym_parenthesized_expression] = STATE(73),
    [sym_in_expression] = STATE(73),
    [sym_slice_expression] = STATE(73),
    [sym_unary_expression] = STATE(73),
    [sym_binary_expression] = STATE(73),
    [sym_predefined_constant] = STATE(73),
    [sym_true] = STATE(73),
    [sym_false] = STATE(73),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_number] = ACTIONS(189),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [38] = {
    [sym__statement] = STATE(38),
    [sym__declaration] = STATE(38),
    [sym_wire_declaration] = STATE(38),
    [sym_register_declaration] = STATE(38),
    [sym__expression] = STATE(13),
    [sym_assignment_expression] = STATE(13),
    [sym_mux_expression] = STATE(13),
    [sym_parenthesized_expression] = STATE(13),
    [sym_in_expression] = STATE(13),
    [sym_slice_expression] = STATE(13),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_predefined_constant] = STATE(13),
    [sym_true] = STATE(13),
    [sym_false] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(191),
    [anon_sym_wire] = ACTIONS(193),
    [anon_sym_register] = ACTIONS(196),
    [anon_sym_const] = ACTIONS(199),
    [anon_sym_LBRACK] = ACTIONS(202),
    [anon_sym_LPAREN] = ACTIONS(205),
    [anon_sym_BANG] = ACTIONS(208),
    [anon_sym_TILDE] = ACTIONS(208),
    [anon_sym_DASH] = ACTIONS(208),
    [anon_sym_PLUS] = ACTIONS(208),
    [anon_sym_STAT_BUB] = ACTIONS(211),
    [anon_sym_STAT_AOK] = ACTIONS(211),
    [anon_sym_STAT_HLT] = ACTIONS(211),
    [anon_sym_STAT_ADR] = ACTIONS(211),
    [anon_sym_STAT_INS] = ACTIONS(211),
    [anon_sym_STAT_PIP] = ACTIONS(211),
    [anon_sym_REG_RAX] = ACTIONS(211),
    [anon_sym_REG_RCX] = ACTIONS(211),
    [anon_sym_REG_RDX] = ACTIONS(211),
    [anon_sym_REG_RBX] = ACTIONS(211),
    [anon_sym_REG_RSP] = ACTIONS(211),
    [anon_sym_REG_RBP] = ACTIONS(211),
    [anon_sym_REG_RSI] = ACTIONS(211),
    [anon_sym_REG_RDI] = ACTIONS(211),
    [anon_sym_REG_R8] = ACTIONS(211),
    [anon_sym_REG_R9] = ACTIONS(211),
    [anon_sym_REG_R10] = ACTIONS(211),
    [anon_sym_REG_R11] = ACTIONS(211),
    [anon_sym_REG_R12] = ACTIONS(211),
    [anon_sym_REG_R13] = ACTIONS(211),
    [anon_sym_REG_R14] = ACTIONS(211),
    [anon_sym_REG_NONE] = ACTIONS(211),
    [anon_sym_HALT] = ACTIONS(211),
    [anon_sym_NOP] = ACTIONS(211),
    [anon_sym_RRMOVQ] = ACTIONS(211),
    [anon_sym_IRMOVQ] = ACTIONS(211),
    [anon_sym_RMMOVQ] = ACTIONS(211),
    [anon_sym_MRMOVQ] = ACTIONS(211),
    [anon_sym_OPQ] = ACTIONS(211),
    [anon_sym_JXX] = ACTIONS(211),
    [anon_sym_CALL] = ACTIONS(211),
    [anon_sym_RET] = ACTIONS(211),
    [anon_sym_PUSHQ] = ACTIONS(211),
    [anon_sym_POPQ] = ACTIONS(211),
    [anon_sym_CMOVXX] = ACTIONS(211),
    [anon_sym_ALWAYS] = ACTIONS(211),
    [anon_sym_LE] = ACTIONS(211),
    [anon_sym_LT2] = ACTIONS(211),
    [anon_sym_EQ2] = ACTIONS(211),
    [anon_sym_NE] = ACTIONS(211),
    [anon_sym_GE] = ACTIONS(211),
    [anon_sym_GT2] = ACTIONS(211),
    [anon_sym_ADDQ] = ACTIONS(211),
    [anon_sym_SUBQ] = ACTIONS(211),
    [anon_sym_ANDQ] = ACTIONS(211),
    [anon_sym_XORQ] = ACTIONS(211),
    [sym_identifier] = ACTIONS(214),
    [sym_number] = ACTIONS(217),
    [anon_sym_true] = ACTIONS(220),
    [anon_sym_TRUE] = ACTIONS(220),
    [anon_sym_false] = ACTIONS(223),
    [anon_sym_FALSE] = ACTIONS(223),
    [sym_comment] = ACTIONS(29),
  },
  [39] = {
    [sym_number] = ACTIONS(226),
    [sym_comment] = ACTIONS(29),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(228),
    [anon_sym_wire] = ACTIONS(230),
    [anon_sym_register] = ACTIONS(230),
    [anon_sym_const] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(228),
    [anon_sym_LPAREN] = ACTIONS(228),
    [anon_sym_BANG] = ACTIONS(228),
    [anon_sym_TILDE] = ACTIONS(228),
    [anon_sym_DASH] = ACTIONS(228),
    [anon_sym_PLUS] = ACTIONS(228),
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
    [sym_identifier] = ACTIONS(230),
    [sym_number] = ACTIONS(228),
    [anon_sym_true] = ACTIONS(230),
    [anon_sym_TRUE] = ACTIONS(230),
    [anon_sym_false] = ACTIONS(230),
    [anon_sym_FALSE] = ACTIONS(230),
    [sym_comment] = ACTIONS(29),
  },
  [41] = {
    [sym_variable_declarator] = STATE(75),
    [sym_identifier] = ACTIONS(31),
    [sym_comment] = ACTIONS(29),
  },
  [42] = {
    [aux_sym_wire_declaration_repeat1] = STATE(77),
    [anon_sym_SEMI] = ACTIONS(232),
    [anon_sym_COMMA] = ACTIONS(105),
    [sym_comment] = ACTIONS(29),
  },
  [43] = {
    [sym_variable_declarator] = STATE(79),
    [sym__register_expression_statement] = STATE(80),
    [aux_sym_register_declaration_repeat1] = STATE(80),
    [anon_sym_RBRACE] = ACTIONS(234),
    [sym_identifier] = ACTIONS(31),
    [sym_comment] = ACTIONS(29),
  },
  [44] = {
    [sym__expression] = STATE(81),
    [sym_assignment_expression] = STATE(81),
    [sym_mux_expression] = STATE(81),
    [sym_parenthesized_expression] = STATE(81),
    [sym_in_expression] = STATE(81),
    [sym_slice_expression] = STATE(81),
    [sym_unary_expression] = STATE(81),
    [sym_binary_expression] = STATE(81),
    [sym_predefined_constant] = STATE(81),
    [sym_true] = STATE(81),
    [sym_false] = STATE(81),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_number] = ACTIONS(236),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [45] = {
    [anon_sym_EQ] = ACTIONS(238),
    [sym_comment] = ACTIONS(29),
  },
  [46] = {
    [sym__expression] = STATE(83),
    [sym_assignment_expression] = STATE(83),
    [sym_mux_expression] = STATE(83),
    [sym_parenthesized_expression] = STATE(83),
    [sym_in_expression] = STATE(83),
    [sym_slice_expression] = STATE(83),
    [sym_unary_expression] = STATE(83),
    [sym_binary_expression] = STATE(83),
    [sym_predefined_constant] = STATE(83),
    [sym_true] = STATE(83),
    [sym_false] = STATE(83),
    [anon_sym_const] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(41),
    [sym_number] = ACTIONS(240),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [47] = {
    [sym__expression] = STATE(84),
    [sym_assignment_expression] = STATE(84),
    [sym_mux_expression] = STATE(84),
    [sym_parenthesized_expression] = STATE(84),
    [sym_in_expression] = STATE(84),
    [sym_slice_expression] = STATE(84),
    [sym_unary_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_predefined_constant] = STATE(84),
    [sym_true] = STATE(84),
    [sym_false] = STATE(84),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_number] = ACTIONS(242),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [48] = {
    [sym__expression] = STATE(85),
    [sym_assignment_expression] = STATE(85),
    [sym_mux_expression] = STATE(85),
    [sym_parenthesized_expression] = STATE(85),
    [sym_in_expression] = STATE(85),
    [sym_slice_expression] = STATE(85),
    [sym_unary_expression] = STATE(85),
    [sym_binary_expression] = STATE(85),
    [sym_predefined_constant] = STATE(85),
    [sym_true] = STATE(85),
    [sym_false] = STATE(85),
    [anon_sym_const] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(41),
    [sym_number] = ACTIONS(244),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [49] = {
    [sym__expression] = STATE(86),
    [sym_assignment_expression] = STATE(86),
    [sym_mux_expression] = STATE(86),
    [sym_parenthesized_expression] = STATE(86),
    [sym_in_expression] = STATE(86),
    [sym_slice_expression] = STATE(86),
    [sym_unary_expression] = STATE(86),
    [sym_binary_expression] = STATE(86),
    [sym_predefined_constant] = STATE(86),
    [sym_true] = STATE(86),
    [sym_false] = STATE(86),
    [anon_sym_const] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(41),
    [sym_number] = ACTIONS(246),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [50] = {
    [sym__expression] = STATE(87),
    [sym_assignment_expression] = STATE(87),
    [sym_mux_expression] = STATE(87),
    [sym_parenthesized_expression] = STATE(87),
    [sym_in_expression] = STATE(87),
    [sym_slice_expression] = STATE(87),
    [sym_unary_expression] = STATE(87),
    [sym_binary_expression] = STATE(87),
    [sym_predefined_constant] = STATE(87),
    [sym_true] = STATE(87),
    [sym_false] = STATE(87),
    [anon_sym_const] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(41),
    [sym_number] = ACTIONS(248),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [51] = {
    [sym__expression] = STATE(88),
    [sym_assignment_expression] = STATE(88),
    [sym_mux_expression] = STATE(88),
    [sym_parenthesized_expression] = STATE(88),
    [sym_in_expression] = STATE(88),
    [sym_slice_expression] = STATE(88),
    [sym_unary_expression] = STATE(88),
    [sym_binary_expression] = STATE(88),
    [sym_predefined_constant] = STATE(88),
    [sym_true] = STATE(88),
    [sym_false] = STATE(88),
    [anon_sym_const] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(41),
    [sym_number] = ACTIONS(250),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [52] = {
    [sym__expression] = STATE(73),
    [sym_assignment_expression] = STATE(73),
    [sym_mux_expression] = STATE(73),
    [sym_parenthesized_expression] = STATE(73),
    [sym_in_expression] = STATE(73),
    [sym_slice_expression] = STATE(73),
    [sym_unary_expression] = STATE(73),
    [sym_binary_expression] = STATE(73),
    [sym_predefined_constant] = STATE(73),
    [sym_true] = STATE(73),
    [sym_false] = STATE(73),
    [anon_sym_const] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(41),
    [sym_number] = ACTIONS(189),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [53] = {
    [anon_sym_SEMI] = ACTIONS(252),
    [anon_sym_COMMA] = ACTIONS(252),
    [anon_sym_COLON] = ACTIONS(252),
    [anon_sym_RBRACE] = ACTIONS(252),
    [anon_sym_LBRACK] = ACTIONS(252),
    [anon_sym_RBRACK] = ACTIONS(252),
    [anon_sym_RPAREN] = ACTIONS(252),
    [anon_sym_in] = ACTIONS(252),
    [anon_sym_DOT_DOT] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_EQ_EQ] = ACTIONS(252),
    [anon_sym_BANG_EQ] = ACTIONS(252),
    [anon_sym_GT_EQ] = ACTIONS(252),
    [anon_sym_LT_EQ] = ACTIONS(252),
    [anon_sym_GT] = ACTIONS(254),
    [anon_sym_LT] = ACTIONS(254),
    [anon_sym_AMP_AMP] = ACTIONS(252),
    [anon_sym_PIPE_PIPE] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(252),
    [anon_sym_SLASH] = ACTIONS(254),
    [anon_sym_GT_GT] = ACTIONS(254),
    [anon_sym_GT_GT_GT] = ACTIONS(252),
    [anon_sym_LT_LT] = ACTIONS(252),
    [anon_sym_AMP] = ACTIONS(254),
    [anon_sym_PIPE] = ACTIONS(254),
    [anon_sym_CARET] = ACTIONS(252),
    [sym_comment] = ACTIONS(29),
  },
  [54] = {
    [sym__expression] = STATE(22),
    [sym_assignment_expression] = STATE(22),
    [sym_mux_expression] = STATE(22),
    [sym_parenthesized_expression] = STATE(22),
    [sym_in_expression] = STATE(22),
    [sym_slice_expression] = STATE(22),
    [sym_unary_expression] = STATE(22),
    [sym_binary_expression] = STATE(22),
    [sym_predefined_constant] = STATE(22),
    [sym_true] = STATE(22),
    [sym_false] = STATE(22),
    [aux_sym_mux_expression_repeat1] = STATE(54),
    [anon_sym_const] = ACTIONS(256),
    [anon_sym_LBRACK] = ACTIONS(259),
    [anon_sym_RBRACK] = ACTIONS(262),
    [anon_sym_LPAREN] = ACTIONS(264),
    [anon_sym_BANG] = ACTIONS(267),
    [anon_sym_TILDE] = ACTIONS(267),
    [anon_sym_DASH] = ACTIONS(267),
    [anon_sym_PLUS] = ACTIONS(267),
    [anon_sym_STAT_BUB] = ACTIONS(270),
    [anon_sym_STAT_AOK] = ACTIONS(270),
    [anon_sym_STAT_HLT] = ACTIONS(270),
    [anon_sym_STAT_ADR] = ACTIONS(270),
    [anon_sym_STAT_INS] = ACTIONS(270),
    [anon_sym_STAT_PIP] = ACTIONS(270),
    [anon_sym_REG_RAX] = ACTIONS(270),
    [anon_sym_REG_RCX] = ACTIONS(270),
    [anon_sym_REG_RDX] = ACTIONS(270),
    [anon_sym_REG_RBX] = ACTIONS(270),
    [anon_sym_REG_RSP] = ACTIONS(270),
    [anon_sym_REG_RBP] = ACTIONS(270),
    [anon_sym_REG_RSI] = ACTIONS(270),
    [anon_sym_REG_RDI] = ACTIONS(270),
    [anon_sym_REG_R8] = ACTIONS(270),
    [anon_sym_REG_R9] = ACTIONS(270),
    [anon_sym_REG_R10] = ACTIONS(270),
    [anon_sym_REG_R11] = ACTIONS(270),
    [anon_sym_REG_R12] = ACTIONS(270),
    [anon_sym_REG_R13] = ACTIONS(270),
    [anon_sym_REG_R14] = ACTIONS(270),
    [anon_sym_REG_NONE] = ACTIONS(270),
    [anon_sym_HALT] = ACTIONS(270),
    [anon_sym_NOP] = ACTIONS(270),
    [anon_sym_RRMOVQ] = ACTIONS(270),
    [anon_sym_IRMOVQ] = ACTIONS(270),
    [anon_sym_RMMOVQ] = ACTIONS(270),
    [anon_sym_MRMOVQ] = ACTIONS(270),
    [anon_sym_OPQ] = ACTIONS(270),
    [anon_sym_JXX] = ACTIONS(270),
    [anon_sym_CALL] = ACTIONS(270),
    [anon_sym_RET] = ACTIONS(270),
    [anon_sym_PUSHQ] = ACTIONS(270),
    [anon_sym_POPQ] = ACTIONS(270),
    [anon_sym_CMOVXX] = ACTIONS(270),
    [anon_sym_ALWAYS] = ACTIONS(270),
    [anon_sym_LE] = ACTIONS(270),
    [anon_sym_LT2] = ACTIONS(270),
    [anon_sym_EQ2] = ACTIONS(270),
    [anon_sym_NE] = ACTIONS(270),
    [anon_sym_GE] = ACTIONS(270),
    [anon_sym_GT2] = ACTIONS(270),
    [anon_sym_ADDQ] = ACTIONS(270),
    [anon_sym_SUBQ] = ACTIONS(270),
    [anon_sym_ANDQ] = ACTIONS(270),
    [anon_sym_XORQ] = ACTIONS(270),
    [sym_identifier] = ACTIONS(273),
    [sym_number] = ACTIONS(276),
    [anon_sym_true] = ACTIONS(279),
    [anon_sym_TRUE] = ACTIONS(279),
    [anon_sym_false] = ACTIONS(282),
    [anon_sym_FALSE] = ACTIONS(282),
    [sym_comment] = ACTIONS(29),
  },
  [55] = {
    [anon_sym_EQ] = ACTIONS(285),
    [sym_comment] = ACTIONS(29),
  },
  [56] = {
    [sym__expression] = STATE(90),
    [sym_assignment_expression] = STATE(90),
    [sym_mux_expression] = STATE(90),
    [sym_parenthesized_expression] = STATE(90),
    [sym_in_expression] = STATE(90),
    [sym_slice_expression] = STATE(90),
    [sym_unary_expression] = STATE(90),
    [sym_binary_expression] = STATE(90),
    [sym_predefined_constant] = STATE(90),
    [sym_true] = STATE(90),
    [sym_false] = STATE(90),
    [anon_sym_const] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(49),
    [sym_number] = ACTIONS(287),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [57] = {
    [anon_sym_SEMI] = ACTIONS(289),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_COLON] = ACTIONS(289),
    [anon_sym_RBRACE] = ACTIONS(289),
    [anon_sym_LBRACK] = ACTIONS(289),
    [anon_sym_RBRACK] = ACTIONS(289),
    [anon_sym_RPAREN] = ACTIONS(289),
    [anon_sym_in] = ACTIONS(289),
    [anon_sym_DOT_DOT] = ACTIONS(289),
    [anon_sym_DASH] = ACTIONS(289),
    [anon_sym_PLUS] = ACTIONS(289),
    [anon_sym_EQ_EQ] = ACTIONS(289),
    [anon_sym_BANG_EQ] = ACTIONS(289),
    [anon_sym_GT_EQ] = ACTIONS(289),
    [anon_sym_LT_EQ] = ACTIONS(289),
    [anon_sym_GT] = ACTIONS(291),
    [anon_sym_LT] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(289),
    [anon_sym_PIPE_PIPE] = ACTIONS(289),
    [anon_sym_STAR] = ACTIONS(289),
    [anon_sym_SLASH] = ACTIONS(291),
    [anon_sym_GT_GT] = ACTIONS(291),
    [anon_sym_GT_GT_GT] = ACTIONS(289),
    [anon_sym_LT_LT] = ACTIONS(289),
    [anon_sym_AMP] = ACTIONS(291),
    [anon_sym_PIPE] = ACTIONS(291),
    [anon_sym_CARET] = ACTIONS(289),
    [sym_comment] = ACTIONS(29),
  },
  [58] = {
    [sym__expression] = STATE(91),
    [sym_assignment_expression] = STATE(91),
    [sym_mux_expression] = STATE(91),
    [sym_parenthesized_expression] = STATE(91),
    [sym_in_expression] = STATE(91),
    [sym_slice_expression] = STATE(91),
    [sym_unary_expression] = STATE(91),
    [sym_binary_expression] = STATE(91),
    [sym_predefined_constant] = STATE(91),
    [sym_true] = STATE(91),
    [sym_false] = STATE(91),
    [anon_sym_const] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(49),
    [sym_number] = ACTIONS(293),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [59] = {
    [sym__expression] = STATE(92),
    [sym_assignment_expression] = STATE(92),
    [sym_mux_expression] = STATE(92),
    [sym_parenthesized_expression] = STATE(92),
    [sym_in_expression] = STATE(92),
    [sym_slice_expression] = STATE(92),
    [sym_unary_expression] = STATE(92),
    [sym_binary_expression] = STATE(92),
    [sym_predefined_constant] = STATE(92),
    [sym_true] = STATE(92),
    [sym_false] = STATE(92),
    [anon_sym_const] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(49),
    [sym_number] = ACTIONS(295),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [60] = {
    [sym__expression] = STATE(93),
    [sym_assignment_expression] = STATE(93),
    [sym_mux_expression] = STATE(93),
    [sym_parenthesized_expression] = STATE(93),
    [sym_in_expression] = STATE(93),
    [sym_slice_expression] = STATE(93),
    [sym_unary_expression] = STATE(93),
    [sym_binary_expression] = STATE(93),
    [sym_predefined_constant] = STATE(93),
    [sym_true] = STATE(93),
    [sym_false] = STATE(93),
    [anon_sym_const] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(49),
    [sym_number] = ACTIONS(297),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [61] = {
    [sym__expression] = STATE(94),
    [sym_assignment_expression] = STATE(94),
    [sym_mux_expression] = STATE(94),
    [sym_parenthesized_expression] = STATE(94),
    [sym_in_expression] = STATE(94),
    [sym_slice_expression] = STATE(94),
    [sym_unary_expression] = STATE(94),
    [sym_binary_expression] = STATE(94),
    [sym_predefined_constant] = STATE(94),
    [sym_true] = STATE(94),
    [sym_false] = STATE(94),
    [anon_sym_const] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(49),
    [sym_number] = ACTIONS(299),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [62] = {
    [sym__expression] = STATE(73),
    [sym_assignment_expression] = STATE(73),
    [sym_mux_expression] = STATE(73),
    [sym_parenthesized_expression] = STATE(73),
    [sym_in_expression] = STATE(73),
    [sym_slice_expression] = STATE(73),
    [sym_unary_expression] = STATE(73),
    [sym_binary_expression] = STATE(73),
    [sym_predefined_constant] = STATE(73),
    [sym_true] = STATE(73),
    [sym_false] = STATE(73),
    [anon_sym_const] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(49),
    [sym_number] = ACTIONS(189),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [63] = {
    [anon_sym_SEMI] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_in] = ACTIONS(79),
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
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_GT_GT_GT] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_CARET] = ACTIONS(89),
    [sym_comment] = ACTIONS(29),
  },
  [64] = {
    [sym_identifier] = ACTIONS(303),
    [sym_comment] = ACTIONS(29),
  },
  [65] = {
    [sym__expression] = STATE(28),
    [sym_assignment_expression] = STATE(28),
    [sym_mux_expression] = STATE(28),
    [sym_parenthesized_expression] = STATE(28),
    [sym_in_expression] = STATE(28),
    [sym_slice_expression] = STATE(28),
    [sym_unary_expression] = STATE(28),
    [sym_binary_expression] = STATE(28),
    [sym_predefined_constant] = STATE(28),
    [sym_true] = STATE(28),
    [sym_false] = STATE(28),
    [anon_sym_const] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(175),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [66] = {
    [anon_sym_EQ] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_in] = ACTIONS(59),
    [anon_sym_DOT_DOT] = ACTIONS(59),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(59),
    [anon_sym_EQ_EQ] = ACTIONS(59),
    [anon_sym_BANG_EQ] = ACTIONS(59),
    [anon_sym_GT_EQ] = ACTIONS(59),
    [anon_sym_LT_EQ] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(59),
    [anon_sym_PIPE_PIPE] = ACTIONS(59),
    [anon_sym_STAR] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_GT_GT] = ACTIONS(63),
    [anon_sym_GT_GT_GT] = ACTIONS(59),
    [anon_sym_LT_LT] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(63),
    [anon_sym_CARET] = ACTIONS(59),
    [sym_comment] = ACTIONS(29),
  },
  [67] = {
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_in] = ACTIONS(79),
    [anon_sym_DOT_DOT] = ACTIONS(307),
    [anon_sym_DASH] = ACTIONS(309),
    [anon_sym_PLUS] = ACTIONS(309),
    [anon_sym_EQ_EQ] = ACTIONS(311),
    [anon_sym_BANG_EQ] = ACTIONS(311),
    [anon_sym_GT_EQ] = ACTIONS(311),
    [anon_sym_LT_EQ] = ACTIONS(311),
    [anon_sym_GT] = ACTIONS(313),
    [anon_sym_LT] = ACTIONS(313),
    [anon_sym_AMP_AMP] = ACTIONS(315),
    [anon_sym_PIPE_PIPE] = ACTIONS(317),
    [anon_sym_STAR] = ACTIONS(319),
    [anon_sym_SLASH] = ACTIONS(321),
    [anon_sym_GT_GT] = ACTIONS(321),
    [anon_sym_GT_GT_GT] = ACTIONS(319),
    [anon_sym_LT_LT] = ACTIONS(319),
    [anon_sym_AMP] = ACTIONS(323),
    [anon_sym_PIPE] = ACTIONS(325),
    [anon_sym_CARET] = ACTIONS(317),
    [sym_comment] = ACTIONS(29),
  },
  [68] = {
    [sym__expression] = STATE(107),
    [sym_assignment_expression] = STATE(107),
    [sym_mux_expression] = STATE(107),
    [sym_parenthesized_expression] = STATE(107),
    [sym_in_expression] = STATE(107),
    [sym_slice_expression] = STATE(107),
    [sym_unary_expression] = STATE(107),
    [sym_binary_expression] = STATE(107),
    [sym_predefined_constant] = STATE(107),
    [sym_true] = STATE(107),
    [sym_false] = STATE(107),
    [anon_sym_RBRACE] = ACTIONS(327),
    [anon_sym_const] = ACTIONS(329),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(331),
    [anon_sym_TILDE] = ACTIONS(331),
    [anon_sym_DASH] = ACTIONS(331),
    [anon_sym_PLUS] = ACTIONS(331),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(333),
    [sym_number] = ACTIONS(335),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [69] = {
    [anon_sym_SEMI] = ACTIONS(337),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_in] = ACTIONS(337),
    [anon_sym_DASH] = ACTIONS(337),
    [anon_sym_PLUS] = ACTIONS(337),
    [anon_sym_EQ_EQ] = ACTIONS(83),
    [anon_sym_BANG_EQ] = ACTIONS(83),
    [anon_sym_GT_EQ] = ACTIONS(83),
    [anon_sym_LT_EQ] = ACTIONS(83),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_AMP_AMP] = ACTIONS(337),
    [anon_sym_PIPE_PIPE] = ACTIONS(337),
    [anon_sym_STAR] = ACTIONS(91),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_GT_GT_GT] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(339),
    [anon_sym_PIPE] = ACTIONS(339),
    [anon_sym_CARET] = ACTIONS(337),
    [sym_comment] = ACTIONS(29),
  },
  [70] = {
    [anon_sym_SEMI] = ACTIONS(337),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_in] = ACTIONS(337),
    [anon_sym_DASH] = ACTIONS(337),
    [anon_sym_PLUS] = ACTIONS(337),
    [anon_sym_EQ_EQ] = ACTIONS(337),
    [anon_sym_BANG_EQ] = ACTIONS(337),
    [anon_sym_GT_EQ] = ACTIONS(337),
    [anon_sym_LT_EQ] = ACTIONS(337),
    [anon_sym_GT] = ACTIONS(339),
    [anon_sym_LT] = ACTIONS(339),
    [anon_sym_AMP_AMP] = ACTIONS(337),
    [anon_sym_PIPE_PIPE] = ACTIONS(337),
    [anon_sym_STAR] = ACTIONS(91),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_GT_GT_GT] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(339),
    [anon_sym_PIPE] = ACTIONS(339),
    [anon_sym_CARET] = ACTIONS(337),
    [sym_comment] = ACTIONS(29),
  },
  [71] = {
    [anon_sym_SEMI] = ACTIONS(337),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_in] = ACTIONS(337),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_EQ_EQ] = ACTIONS(83),
    [anon_sym_BANG_EQ] = ACTIONS(83),
    [anon_sym_GT_EQ] = ACTIONS(83),
    [anon_sym_LT_EQ] = ACTIONS(83),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_AMP_AMP] = ACTIONS(337),
    [anon_sym_PIPE_PIPE] = ACTIONS(337),
    [anon_sym_STAR] = ACTIONS(91),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_GT_GT_GT] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(339),
    [anon_sym_PIPE] = ACTIONS(339),
    [anon_sym_CARET] = ACTIONS(337),
    [sym_comment] = ACTIONS(29),
  },
  [72] = {
    [anon_sym_SEMI] = ACTIONS(337),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_in] = ACTIONS(337),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_EQ_EQ] = ACTIONS(83),
    [anon_sym_BANG_EQ] = ACTIONS(83),
    [anon_sym_GT_EQ] = ACTIONS(83),
    [anon_sym_LT_EQ] = ACTIONS(83),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_AMP_AMP] = ACTIONS(87),
    [anon_sym_PIPE_PIPE] = ACTIONS(337),
    [anon_sym_STAR] = ACTIONS(91),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_GT_GT_GT] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(339),
    [anon_sym_CARET] = ACTIONS(337),
    [sym_comment] = ACTIONS(29),
  },
  [73] = {
    [anon_sym_SEMI] = ACTIONS(337),
    [anon_sym_COMMA] = ACTIONS(337),
    [anon_sym_COLON] = ACTIONS(337),
    [anon_sym_RBRACE] = ACTIONS(337),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(337),
    [anon_sym_RPAREN] = ACTIONS(337),
    [anon_sym_in] = ACTIONS(337),
    [anon_sym_DOT_DOT] = ACTIONS(337),
    [anon_sym_DASH] = ACTIONS(337),
    [anon_sym_PLUS] = ACTIONS(337),
    [anon_sym_EQ_EQ] = ACTIONS(337),
    [anon_sym_BANG_EQ] = ACTIONS(337),
    [anon_sym_GT_EQ] = ACTIONS(337),
    [anon_sym_LT_EQ] = ACTIONS(337),
    [anon_sym_GT] = ACTIONS(339),
    [anon_sym_LT] = ACTIONS(339),
    [anon_sym_AMP_AMP] = ACTIONS(337),
    [anon_sym_PIPE_PIPE] = ACTIONS(337),
    [anon_sym_STAR] = ACTIONS(337),
    [anon_sym_SLASH] = ACTIONS(339),
    [anon_sym_GT_GT] = ACTIONS(339),
    [anon_sym_GT_GT_GT] = ACTIONS(337),
    [anon_sym_LT_LT] = ACTIONS(337),
    [anon_sym_AMP] = ACTIONS(339),
    [anon_sym_PIPE] = ACTIONS(339),
    [anon_sym_CARET] = ACTIONS(337),
    [sym_comment] = ACTIONS(29),
  },
  [74] = {
    [anon_sym_SEMI] = ACTIONS(341),
    [anon_sym_COMMA] = ACTIONS(341),
    [anon_sym_EQ] = ACTIONS(341),
    [sym_comment] = ACTIONS(29),
  },
  [75] = {
    [anon_sym_SEMI] = ACTIONS(343),
    [anon_sym_COMMA] = ACTIONS(343),
    [sym_comment] = ACTIONS(29),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(345),
    [anon_sym_wire] = ACTIONS(347),
    [anon_sym_register] = ACTIONS(347),
    [anon_sym_const] = ACTIONS(347),
    [anon_sym_LBRACK] = ACTIONS(345),
    [anon_sym_LPAREN] = ACTIONS(345),
    [anon_sym_BANG] = ACTIONS(345),
    [anon_sym_TILDE] = ACTIONS(345),
    [anon_sym_DASH] = ACTIONS(345),
    [anon_sym_PLUS] = ACTIONS(345),
    [anon_sym_STAT_BUB] = ACTIONS(347),
    [anon_sym_STAT_AOK] = ACTIONS(347),
    [anon_sym_STAT_HLT] = ACTIONS(347),
    [anon_sym_STAT_ADR] = ACTIONS(347),
    [anon_sym_STAT_INS] = ACTIONS(347),
    [anon_sym_STAT_PIP] = ACTIONS(347),
    [anon_sym_REG_RAX] = ACTIONS(347),
    [anon_sym_REG_RCX] = ACTIONS(347),
    [anon_sym_REG_RDX] = ACTIONS(347),
    [anon_sym_REG_RBX] = ACTIONS(347),
    [anon_sym_REG_RSP] = ACTIONS(347),
    [anon_sym_REG_RBP] = ACTIONS(347),
    [anon_sym_REG_RSI] = ACTIONS(347),
    [anon_sym_REG_RDI] = ACTIONS(347),
    [anon_sym_REG_R8] = ACTIONS(347),
    [anon_sym_REG_R9] = ACTIONS(347),
    [anon_sym_REG_R10] = ACTIONS(347),
    [anon_sym_REG_R11] = ACTIONS(347),
    [anon_sym_REG_R12] = ACTIONS(347),
    [anon_sym_REG_R13] = ACTIONS(347),
    [anon_sym_REG_R14] = ACTIONS(347),
    [anon_sym_REG_NONE] = ACTIONS(347),
    [anon_sym_HALT] = ACTIONS(347),
    [anon_sym_NOP] = ACTIONS(347),
    [anon_sym_RRMOVQ] = ACTIONS(347),
    [anon_sym_IRMOVQ] = ACTIONS(347),
    [anon_sym_RMMOVQ] = ACTIONS(347),
    [anon_sym_MRMOVQ] = ACTIONS(347),
    [anon_sym_OPQ] = ACTIONS(347),
    [anon_sym_JXX] = ACTIONS(347),
    [anon_sym_CALL] = ACTIONS(347),
    [anon_sym_RET] = ACTIONS(347),
    [anon_sym_PUSHQ] = ACTIONS(347),
    [anon_sym_POPQ] = ACTIONS(347),
    [anon_sym_CMOVXX] = ACTIONS(347),
    [anon_sym_ALWAYS] = ACTIONS(347),
    [anon_sym_LE] = ACTIONS(347),
    [anon_sym_LT2] = ACTIONS(347),
    [anon_sym_EQ2] = ACTIONS(347),
    [anon_sym_NE] = ACTIONS(347),
    [anon_sym_GE] = ACTIONS(347),
    [anon_sym_GT2] = ACTIONS(347),
    [anon_sym_ADDQ] = ACTIONS(347),
    [anon_sym_SUBQ] = ACTIONS(347),
    [anon_sym_ANDQ] = ACTIONS(347),
    [anon_sym_XORQ] = ACTIONS(347),
    [sym_identifier] = ACTIONS(347),
    [sym_number] = ACTIONS(345),
    [anon_sym_true] = ACTIONS(347),
    [anon_sym_TRUE] = ACTIONS(347),
    [anon_sym_false] = ACTIONS(347),
    [anon_sym_FALSE] = ACTIONS(347),
    [sym_comment] = ACTIONS(29),
  },
  [77] = {
    [aux_sym_wire_declaration_repeat1] = STATE(77),
    [anon_sym_SEMI] = ACTIONS(343),
    [anon_sym_COMMA] = ACTIONS(349),
    [sym_comment] = ACTIONS(29),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(352),
    [anon_sym_wire] = ACTIONS(354),
    [anon_sym_register] = ACTIONS(354),
    [anon_sym_const] = ACTIONS(354),
    [anon_sym_LBRACK] = ACTIONS(352),
    [anon_sym_LPAREN] = ACTIONS(352),
    [anon_sym_BANG] = ACTIONS(352),
    [anon_sym_TILDE] = ACTIONS(352),
    [anon_sym_DASH] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(352),
    [anon_sym_STAT_BUB] = ACTIONS(354),
    [anon_sym_STAT_AOK] = ACTIONS(354),
    [anon_sym_STAT_HLT] = ACTIONS(354),
    [anon_sym_STAT_ADR] = ACTIONS(354),
    [anon_sym_STAT_INS] = ACTIONS(354),
    [anon_sym_STAT_PIP] = ACTIONS(354),
    [anon_sym_REG_RAX] = ACTIONS(354),
    [anon_sym_REG_RCX] = ACTIONS(354),
    [anon_sym_REG_RDX] = ACTIONS(354),
    [anon_sym_REG_RBX] = ACTIONS(354),
    [anon_sym_REG_RSP] = ACTIONS(354),
    [anon_sym_REG_RBP] = ACTIONS(354),
    [anon_sym_REG_RSI] = ACTIONS(354),
    [anon_sym_REG_RDI] = ACTIONS(354),
    [anon_sym_REG_R8] = ACTIONS(354),
    [anon_sym_REG_R9] = ACTIONS(354),
    [anon_sym_REG_R10] = ACTIONS(354),
    [anon_sym_REG_R11] = ACTIONS(354),
    [anon_sym_REG_R12] = ACTIONS(354),
    [anon_sym_REG_R13] = ACTIONS(354),
    [anon_sym_REG_R14] = ACTIONS(354),
    [anon_sym_REG_NONE] = ACTIONS(354),
    [anon_sym_HALT] = ACTIONS(354),
    [anon_sym_NOP] = ACTIONS(354),
    [anon_sym_RRMOVQ] = ACTIONS(354),
    [anon_sym_IRMOVQ] = ACTIONS(354),
    [anon_sym_RMMOVQ] = ACTIONS(354),
    [anon_sym_MRMOVQ] = ACTIONS(354),
    [anon_sym_OPQ] = ACTIONS(354),
    [anon_sym_JXX] = ACTIONS(354),
    [anon_sym_CALL] = ACTIONS(354),
    [anon_sym_RET] = ACTIONS(354),
    [anon_sym_PUSHQ] = ACTIONS(354),
    [anon_sym_POPQ] = ACTIONS(354),
    [anon_sym_CMOVXX] = ACTIONS(354),
    [anon_sym_ALWAYS] = ACTIONS(354),
    [anon_sym_LE] = ACTIONS(354),
    [anon_sym_LT2] = ACTIONS(354),
    [anon_sym_EQ2] = ACTIONS(354),
    [anon_sym_NE] = ACTIONS(354),
    [anon_sym_GE] = ACTIONS(354),
    [anon_sym_GT2] = ACTIONS(354),
    [anon_sym_ADDQ] = ACTIONS(354),
    [anon_sym_SUBQ] = ACTIONS(354),
    [anon_sym_ANDQ] = ACTIONS(354),
    [anon_sym_XORQ] = ACTIONS(354),
    [sym_identifier] = ACTIONS(354),
    [sym_number] = ACTIONS(352),
    [anon_sym_true] = ACTIONS(354),
    [anon_sym_TRUE] = ACTIONS(354),
    [anon_sym_false] = ACTIONS(354),
    [anon_sym_FALSE] = ACTIONS(354),
    [sym_comment] = ACTIONS(29),
  },
  [79] = {
    [anon_sym_EQ] = ACTIONS(356),
    [sym_comment] = ACTIONS(29),
  },
  [80] = {
    [sym_variable_declarator] = STATE(79),
    [sym__register_expression_statement] = STATE(110),
    [aux_sym_register_declaration_repeat1] = STATE(110),
    [anon_sym_RBRACE] = ACTIONS(358),
    [sym_identifier] = ACTIONS(31),
    [sym_comment] = ACTIONS(29),
  },
  [81] = {
    [anon_sym_SEMI] = ACTIONS(360),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_in] = ACTIONS(79),
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
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_GT_GT_GT] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_CARET] = ACTIONS(89),
    [sym_comment] = ACTIONS(29),
  },
  [82] = {
    [sym__expression] = STATE(111),
    [sym_assignment_expression] = STATE(111),
    [sym_mux_expression] = STATE(111),
    [sym_parenthesized_expression] = STATE(111),
    [sym_in_expression] = STATE(111),
    [sym_slice_expression] = STATE(111),
    [sym_unary_expression] = STATE(111),
    [sym_binary_expression] = STATE(111),
    [sym_predefined_constant] = STATE(111),
    [sym_true] = STATE(111),
    [sym_false] = STATE(111),
    [anon_sym_const] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(41),
    [sym_number] = ACTIONS(362),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [83] = {
    [anon_sym_COLON] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_in] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(119),
    [anon_sym_BANG_EQ] = ACTIONS(119),
    [anon_sym_GT_EQ] = ACTIONS(119),
    [anon_sym_LT_EQ] = ACTIONS(119),
    [anon_sym_GT] = ACTIONS(121),
    [anon_sym_LT] = ACTIONS(121),
    [anon_sym_AMP_AMP] = ACTIONS(123),
    [anon_sym_PIPE_PIPE] = ACTIONS(125),
    [anon_sym_STAR] = ACTIONS(127),
    [anon_sym_SLASH] = ACTIONS(129),
    [anon_sym_GT_GT] = ACTIONS(129),
    [anon_sym_GT_GT_GT] = ACTIONS(127),
    [anon_sym_LT_LT] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(131),
    [anon_sym_PIPE] = ACTIONS(133),
    [anon_sym_CARET] = ACTIONS(125),
    [sym_comment] = ACTIONS(29),
  },
  [84] = {
    [anon_sym_SEMI] = ACTIONS(364),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_in] = ACTIONS(79),
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
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_GT_GT_GT] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_CARET] = ACTIONS(89),
    [sym_comment] = ACTIONS(29),
  },
  [85] = {
    [anon_sym_COLON] = ACTIONS(337),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_in] = ACTIONS(337),
    [anon_sym_DASH] = ACTIONS(337),
    [anon_sym_PLUS] = ACTIONS(337),
    [anon_sym_EQ_EQ] = ACTIONS(119),
    [anon_sym_BANG_EQ] = ACTIONS(119),
    [anon_sym_GT_EQ] = ACTIONS(119),
    [anon_sym_LT_EQ] = ACTIONS(119),
    [anon_sym_GT] = ACTIONS(121),
    [anon_sym_LT] = ACTIONS(121),
    [anon_sym_AMP_AMP] = ACTIONS(337),
    [anon_sym_PIPE_PIPE] = ACTIONS(337),
    [anon_sym_STAR] = ACTIONS(127),
    [anon_sym_SLASH] = ACTIONS(129),
    [anon_sym_GT_GT] = ACTIONS(129),
    [anon_sym_GT_GT_GT] = ACTIONS(127),
    [anon_sym_LT_LT] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(339),
    [anon_sym_PIPE] = ACTIONS(339),
    [anon_sym_CARET] = ACTIONS(337),
    [sym_comment] = ACTIONS(29),
  },
  [86] = {
    [anon_sym_COLON] = ACTIONS(337),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_in] = ACTIONS(337),
    [anon_sym_DASH] = ACTIONS(337),
    [anon_sym_PLUS] = ACTIONS(337),
    [anon_sym_EQ_EQ] = ACTIONS(337),
    [anon_sym_BANG_EQ] = ACTIONS(337),
    [anon_sym_GT_EQ] = ACTIONS(337),
    [anon_sym_LT_EQ] = ACTIONS(337),
    [anon_sym_GT] = ACTIONS(339),
    [anon_sym_LT] = ACTIONS(339),
    [anon_sym_AMP_AMP] = ACTIONS(337),
    [anon_sym_PIPE_PIPE] = ACTIONS(337),
    [anon_sym_STAR] = ACTIONS(127),
    [anon_sym_SLASH] = ACTIONS(129),
    [anon_sym_GT_GT] = ACTIONS(129),
    [anon_sym_GT_GT_GT] = ACTIONS(127),
    [anon_sym_LT_LT] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(339),
    [anon_sym_PIPE] = ACTIONS(339),
    [anon_sym_CARET] = ACTIONS(337),
    [sym_comment] = ACTIONS(29),
  },
  [87] = {
    [anon_sym_COLON] = ACTIONS(337),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_in] = ACTIONS(337),
    [anon_sym_DASH] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(119),
    [anon_sym_BANG_EQ] = ACTIONS(119),
    [anon_sym_GT_EQ] = ACTIONS(119),
    [anon_sym_LT_EQ] = ACTIONS(119),
    [anon_sym_GT] = ACTIONS(121),
    [anon_sym_LT] = ACTIONS(121),
    [anon_sym_AMP_AMP] = ACTIONS(337),
    [anon_sym_PIPE_PIPE] = ACTIONS(337),
    [anon_sym_STAR] = ACTIONS(127),
    [anon_sym_SLASH] = ACTIONS(129),
    [anon_sym_GT_GT] = ACTIONS(129),
    [anon_sym_GT_GT_GT] = ACTIONS(127),
    [anon_sym_LT_LT] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(339),
    [anon_sym_PIPE] = ACTIONS(339),
    [anon_sym_CARET] = ACTIONS(337),
    [sym_comment] = ACTIONS(29),
  },
  [88] = {
    [anon_sym_COLON] = ACTIONS(337),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_in] = ACTIONS(337),
    [anon_sym_DASH] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(119),
    [anon_sym_BANG_EQ] = ACTIONS(119),
    [anon_sym_GT_EQ] = ACTIONS(119),
    [anon_sym_LT_EQ] = ACTIONS(119),
    [anon_sym_GT] = ACTIONS(121),
    [anon_sym_LT] = ACTIONS(121),
    [anon_sym_AMP_AMP] = ACTIONS(123),
    [anon_sym_PIPE_PIPE] = ACTIONS(337),
    [anon_sym_STAR] = ACTIONS(127),
    [anon_sym_SLASH] = ACTIONS(129),
    [anon_sym_GT_GT] = ACTIONS(129),
    [anon_sym_GT_GT_GT] = ACTIONS(127),
    [anon_sym_LT_LT] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(131),
    [anon_sym_PIPE] = ACTIONS(339),
    [anon_sym_CARET] = ACTIONS(337),
    [sym_comment] = ACTIONS(29),
  },
  [89] = {
    [sym__expression] = STATE(113),
    [sym_assignment_expression] = STATE(113),
    [sym_mux_expression] = STATE(113),
    [sym_parenthesized_expression] = STATE(113),
    [sym_in_expression] = STATE(113),
    [sym_slice_expression] = STATE(113),
    [sym_unary_expression] = STATE(113),
    [sym_binary_expression] = STATE(113),
    [sym_predefined_constant] = STATE(113),
    [sym_true] = STATE(113),
    [sym_false] = STATE(113),
    [anon_sym_const] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(49),
    [sym_number] = ACTIONS(366),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [90] = {
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(301),
    [anon_sym_in] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_EQ_EQ] = ACTIONS(145),
    [anon_sym_BANG_EQ] = ACTIONS(145),
    [anon_sym_GT_EQ] = ACTIONS(145),
    [anon_sym_LT_EQ] = ACTIONS(145),
    [anon_sym_GT] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(149),
    [anon_sym_PIPE_PIPE] = ACTIONS(151),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_GT_GT] = ACTIONS(155),
    [anon_sym_GT_GT_GT] = ACTIONS(153),
    [anon_sym_LT_LT] = ACTIONS(153),
    [anon_sym_AMP] = ACTIONS(157),
    [anon_sym_PIPE] = ACTIONS(159),
    [anon_sym_CARET] = ACTIONS(151),
    [sym_comment] = ACTIONS(29),
  },
  [91] = {
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(337),
    [anon_sym_in] = ACTIONS(337),
    [anon_sym_DASH] = ACTIONS(337),
    [anon_sym_PLUS] = ACTIONS(337),
    [anon_sym_EQ_EQ] = ACTIONS(145),
    [anon_sym_BANG_EQ] = ACTIONS(145),
    [anon_sym_GT_EQ] = ACTIONS(145),
    [anon_sym_LT_EQ] = ACTIONS(145),
    [anon_sym_GT] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(337),
    [anon_sym_PIPE_PIPE] = ACTIONS(337),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_GT_GT] = ACTIONS(155),
    [anon_sym_GT_GT_GT] = ACTIONS(153),
    [anon_sym_LT_LT] = ACTIONS(153),
    [anon_sym_AMP] = ACTIONS(339),
    [anon_sym_PIPE] = ACTIONS(339),
    [anon_sym_CARET] = ACTIONS(337),
    [sym_comment] = ACTIONS(29),
  },
  [92] = {
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(337),
    [anon_sym_in] = ACTIONS(337),
    [anon_sym_DASH] = ACTIONS(337),
    [anon_sym_PLUS] = ACTIONS(337),
    [anon_sym_EQ_EQ] = ACTIONS(337),
    [anon_sym_BANG_EQ] = ACTIONS(337),
    [anon_sym_GT_EQ] = ACTIONS(337),
    [anon_sym_LT_EQ] = ACTIONS(337),
    [anon_sym_GT] = ACTIONS(339),
    [anon_sym_LT] = ACTIONS(339),
    [anon_sym_AMP_AMP] = ACTIONS(337),
    [anon_sym_PIPE_PIPE] = ACTIONS(337),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_GT_GT] = ACTIONS(155),
    [anon_sym_GT_GT_GT] = ACTIONS(153),
    [anon_sym_LT_LT] = ACTIONS(153),
    [anon_sym_AMP] = ACTIONS(339),
    [anon_sym_PIPE] = ACTIONS(339),
    [anon_sym_CARET] = ACTIONS(337),
    [sym_comment] = ACTIONS(29),
  },
  [93] = {
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(337),
    [anon_sym_in] = ACTIONS(337),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_EQ_EQ] = ACTIONS(145),
    [anon_sym_BANG_EQ] = ACTIONS(145),
    [anon_sym_GT_EQ] = ACTIONS(145),
    [anon_sym_LT_EQ] = ACTIONS(145),
    [anon_sym_GT] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(337),
    [anon_sym_PIPE_PIPE] = ACTIONS(337),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_GT_GT] = ACTIONS(155),
    [anon_sym_GT_GT_GT] = ACTIONS(153),
    [anon_sym_LT_LT] = ACTIONS(153),
    [anon_sym_AMP] = ACTIONS(339),
    [anon_sym_PIPE] = ACTIONS(339),
    [anon_sym_CARET] = ACTIONS(337),
    [sym_comment] = ACTIONS(29),
  },
  [94] = {
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(337),
    [anon_sym_in] = ACTIONS(337),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_EQ_EQ] = ACTIONS(145),
    [anon_sym_BANG_EQ] = ACTIONS(145),
    [anon_sym_GT_EQ] = ACTIONS(145),
    [anon_sym_LT_EQ] = ACTIONS(145),
    [anon_sym_GT] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(149),
    [anon_sym_PIPE_PIPE] = ACTIONS(337),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_GT_GT] = ACTIONS(155),
    [anon_sym_GT_GT_GT] = ACTIONS(153),
    [anon_sym_LT_LT] = ACTIONS(153),
    [anon_sym_AMP] = ACTIONS(157),
    [anon_sym_PIPE] = ACTIONS(339),
    [anon_sym_CARET] = ACTIONS(337),
    [sym_comment] = ACTIONS(29),
  },
  [95] = {
    [anon_sym_EQ] = ACTIONS(368),
    [sym_comment] = ACTIONS(29),
  },
  [96] = {
    [sym__expression] = STATE(115),
    [sym_assignment_expression] = STATE(115),
    [sym_mux_expression] = STATE(115),
    [sym_parenthesized_expression] = STATE(115),
    [sym_in_expression] = STATE(115),
    [sym_slice_expression] = STATE(115),
    [sym_unary_expression] = STATE(115),
    [sym_binary_expression] = STATE(115),
    [sym_predefined_constant] = STATE(115),
    [sym_true] = STATE(115),
    [sym_false] = STATE(115),
    [anon_sym_const] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(175),
    [sym_number] = ACTIONS(370),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [97] = {
    [sym__expression] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_mux_expression] = STATE(119),
    [sym_parenthesized_expression] = STATE(119),
    [sym_in_expression] = STATE(119),
    [sym_slice_expression] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym_predefined_constant] = STATE(119),
    [sym_true] = STATE(119),
    [sym_false] = STATE(119),
    [anon_sym_const] = ACTIONS(372),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(374),
    [anon_sym_TILDE] = ACTIONS(374),
    [anon_sym_DASH] = ACTIONS(374),
    [anon_sym_PLUS] = ACTIONS(374),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(376),
    [sym_number] = ACTIONS(378),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [98] = {
    [sym__expression] = STATE(120),
    [sym_assignment_expression] = STATE(120),
    [sym_mux_expression] = STATE(120),
    [sym_parenthesized_expression] = STATE(120),
    [sym_in_expression] = STATE(120),
    [sym_slice_expression] = STATE(120),
    [sym_unary_expression] = STATE(120),
    [sym_binary_expression] = STATE(120),
    [sym_predefined_constant] = STATE(120),
    [sym_true] = STATE(120),
    [sym_false] = STATE(120),
    [anon_sym_const] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(175),
    [sym_number] = ACTIONS(380),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [99] = {
    [sym__expression] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_mux_expression] = STATE(121),
    [sym_parenthesized_expression] = STATE(121),
    [sym_in_expression] = STATE(121),
    [sym_slice_expression] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym_predefined_constant] = STATE(121),
    [sym_true] = STATE(121),
    [sym_false] = STATE(121),
    [anon_sym_const] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(175),
    [sym_number] = ACTIONS(382),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [100] = {
    [sym__expression] = STATE(122),
    [sym_assignment_expression] = STATE(122),
    [sym_mux_expression] = STATE(122),
    [sym_parenthesized_expression] = STATE(122),
    [sym_in_expression] = STATE(122),
    [sym_slice_expression] = STATE(122),
    [sym_unary_expression] = STATE(122),
    [sym_binary_expression] = STATE(122),
    [sym_predefined_constant] = STATE(122),
    [sym_true] = STATE(122),
    [sym_false] = STATE(122),
    [anon_sym_const] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(175),
    [sym_number] = ACTIONS(384),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [101] = {
    [sym__expression] = STATE(123),
    [sym_assignment_expression] = STATE(123),
    [sym_mux_expression] = STATE(123),
    [sym_parenthesized_expression] = STATE(123),
    [sym_in_expression] = STATE(123),
    [sym_slice_expression] = STATE(123),
    [sym_unary_expression] = STATE(123),
    [sym_binary_expression] = STATE(123),
    [sym_predefined_constant] = STATE(123),
    [sym_true] = STATE(123),
    [sym_false] = STATE(123),
    [anon_sym_const] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(175),
    [sym_number] = ACTIONS(386),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [102] = {
    [sym__expression] = STATE(73),
    [sym_assignment_expression] = STATE(73),
    [sym_mux_expression] = STATE(73),
    [sym_parenthesized_expression] = STATE(73),
    [sym_in_expression] = STATE(73),
    [sym_slice_expression] = STATE(73),
    [sym_unary_expression] = STATE(73),
    [sym_binary_expression] = STATE(73),
    [sym_predefined_constant] = STATE(73),
    [sym_true] = STATE(73),
    [sym_false] = STATE(73),
    [anon_sym_const] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(175),
    [sym_number] = ACTIONS(189),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [103] = {
    [anon_sym_SEMI] = ACTIONS(388),
    [anon_sym_COMMA] = ACTIONS(388),
    [anon_sym_COLON] = ACTIONS(388),
    [anon_sym_RBRACE] = ACTIONS(388),
    [anon_sym_LBRACK] = ACTIONS(388),
    [anon_sym_RBRACK] = ACTIONS(388),
    [anon_sym_RPAREN] = ACTIONS(388),
    [anon_sym_in] = ACTIONS(388),
    [anon_sym_DOT_DOT] = ACTIONS(388),
    [anon_sym_DASH] = ACTIONS(388),
    [anon_sym_PLUS] = ACTIONS(388),
    [anon_sym_EQ_EQ] = ACTIONS(388),
    [anon_sym_BANG_EQ] = ACTIONS(388),
    [anon_sym_GT_EQ] = ACTIONS(388),
    [anon_sym_LT_EQ] = ACTIONS(388),
    [anon_sym_GT] = ACTIONS(390),
    [anon_sym_LT] = ACTIONS(390),
    [anon_sym_AMP_AMP] = ACTIONS(388),
    [anon_sym_PIPE_PIPE] = ACTIONS(388),
    [anon_sym_STAR] = ACTIONS(388),
    [anon_sym_SLASH] = ACTIONS(390),
    [anon_sym_GT_GT] = ACTIONS(390),
    [anon_sym_GT_GT_GT] = ACTIONS(388),
    [anon_sym_LT_LT] = ACTIONS(388),
    [anon_sym_AMP] = ACTIONS(390),
    [anon_sym_PIPE] = ACTIONS(390),
    [anon_sym_CARET] = ACTIONS(388),
    [sym_comment] = ACTIONS(29),
  },
  [104] = {
    [sym_identifier] = ACTIONS(392),
    [sym_comment] = ACTIONS(29),
  },
  [105] = {
    [sym__expression] = STATE(28),
    [sym_assignment_expression] = STATE(28),
    [sym_mux_expression] = STATE(28),
    [sym_parenthesized_expression] = STATE(28),
    [sym_in_expression] = STATE(28),
    [sym_slice_expression] = STATE(28),
    [sym_unary_expression] = STATE(28),
    [sym_binary_expression] = STATE(28),
    [sym_predefined_constant] = STATE(28),
    [sym_true] = STATE(28),
    [sym_false] = STATE(28),
    [anon_sym_const] = ACTIONS(329),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(331),
    [anon_sym_TILDE] = ACTIONS(331),
    [anon_sym_DASH] = ACTIONS(331),
    [anon_sym_PLUS] = ACTIONS(331),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(333),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [106] = {
    [anon_sym_COMMA] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(59),
    [anon_sym_EQ] = ACTIONS(394),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_in] = ACTIONS(59),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(59),
    [anon_sym_EQ_EQ] = ACTIONS(59),
    [anon_sym_BANG_EQ] = ACTIONS(59),
    [anon_sym_GT_EQ] = ACTIONS(59),
    [anon_sym_LT_EQ] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(59),
    [anon_sym_PIPE_PIPE] = ACTIONS(59),
    [anon_sym_STAR] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_GT_GT] = ACTIONS(63),
    [anon_sym_GT_GT_GT] = ACTIONS(59),
    [anon_sym_LT_LT] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(63),
    [anon_sym_CARET] = ACTIONS(59),
    [sym_comment] = ACTIONS(29),
  },
  [107] = {
    [aux_sym_in_expression_repeat1] = STATE(133),
    [anon_sym_COMMA] = ACTIONS(396),
    [anon_sym_RBRACE] = ACTIONS(398),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_in] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(400),
    [anon_sym_PLUS] = ACTIONS(400),
    [anon_sym_EQ_EQ] = ACTIONS(402),
    [anon_sym_BANG_EQ] = ACTIONS(402),
    [anon_sym_GT_EQ] = ACTIONS(402),
    [anon_sym_LT_EQ] = ACTIONS(402),
    [anon_sym_GT] = ACTIONS(404),
    [anon_sym_LT] = ACTIONS(404),
    [anon_sym_AMP_AMP] = ACTIONS(406),
    [anon_sym_PIPE_PIPE] = ACTIONS(408),
    [anon_sym_STAR] = ACTIONS(410),
    [anon_sym_SLASH] = ACTIONS(412),
    [anon_sym_GT_GT] = ACTIONS(412),
    [anon_sym_GT_GT_GT] = ACTIONS(410),
    [anon_sym_LT_LT] = ACTIONS(410),
    [anon_sym_AMP] = ACTIONS(414),
    [anon_sym_PIPE] = ACTIONS(416),
    [anon_sym_CARET] = ACTIONS(408),
    [sym_comment] = ACTIONS(29),
  },
  [108] = {
    [sym__expression] = STATE(134),
    [sym_assignment_expression] = STATE(134),
    [sym_mux_expression] = STATE(134),
    [sym_parenthesized_expression] = STATE(134),
    [sym_in_expression] = STATE(134),
    [sym_slice_expression] = STATE(134),
    [sym_unary_expression] = STATE(134),
    [sym_binary_expression] = STATE(134),
    [sym_predefined_constant] = STATE(134),
    [sym_true] = STATE(134),
    [sym_false] = STATE(134),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_number] = ACTIONS(418),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [109] = {
    [ts_builtin_sym_end] = ACTIONS(420),
    [anon_sym_wire] = ACTIONS(422),
    [anon_sym_register] = ACTIONS(422),
    [anon_sym_const] = ACTIONS(422),
    [anon_sym_LBRACK] = ACTIONS(420),
    [anon_sym_LPAREN] = ACTIONS(420),
    [anon_sym_BANG] = ACTIONS(420),
    [anon_sym_TILDE] = ACTIONS(420),
    [anon_sym_DASH] = ACTIONS(420),
    [anon_sym_PLUS] = ACTIONS(420),
    [anon_sym_STAT_BUB] = ACTIONS(422),
    [anon_sym_STAT_AOK] = ACTIONS(422),
    [anon_sym_STAT_HLT] = ACTIONS(422),
    [anon_sym_STAT_ADR] = ACTIONS(422),
    [anon_sym_STAT_INS] = ACTIONS(422),
    [anon_sym_STAT_PIP] = ACTIONS(422),
    [anon_sym_REG_RAX] = ACTIONS(422),
    [anon_sym_REG_RCX] = ACTIONS(422),
    [anon_sym_REG_RDX] = ACTIONS(422),
    [anon_sym_REG_RBX] = ACTIONS(422),
    [anon_sym_REG_RSP] = ACTIONS(422),
    [anon_sym_REG_RBP] = ACTIONS(422),
    [anon_sym_REG_RSI] = ACTIONS(422),
    [anon_sym_REG_RDI] = ACTIONS(422),
    [anon_sym_REG_R8] = ACTIONS(422),
    [anon_sym_REG_R9] = ACTIONS(422),
    [anon_sym_REG_R10] = ACTIONS(422),
    [anon_sym_REG_R11] = ACTIONS(422),
    [anon_sym_REG_R12] = ACTIONS(422),
    [anon_sym_REG_R13] = ACTIONS(422),
    [anon_sym_REG_R14] = ACTIONS(422),
    [anon_sym_REG_NONE] = ACTIONS(422),
    [anon_sym_HALT] = ACTIONS(422),
    [anon_sym_NOP] = ACTIONS(422),
    [anon_sym_RRMOVQ] = ACTIONS(422),
    [anon_sym_IRMOVQ] = ACTIONS(422),
    [anon_sym_RMMOVQ] = ACTIONS(422),
    [anon_sym_MRMOVQ] = ACTIONS(422),
    [anon_sym_OPQ] = ACTIONS(422),
    [anon_sym_JXX] = ACTIONS(422),
    [anon_sym_CALL] = ACTIONS(422),
    [anon_sym_RET] = ACTIONS(422),
    [anon_sym_PUSHQ] = ACTIONS(422),
    [anon_sym_POPQ] = ACTIONS(422),
    [anon_sym_CMOVXX] = ACTIONS(422),
    [anon_sym_ALWAYS] = ACTIONS(422),
    [anon_sym_LE] = ACTIONS(422),
    [anon_sym_LT2] = ACTIONS(422),
    [anon_sym_EQ2] = ACTIONS(422),
    [anon_sym_NE] = ACTIONS(422),
    [anon_sym_GE] = ACTIONS(422),
    [anon_sym_GT2] = ACTIONS(422),
    [anon_sym_ADDQ] = ACTIONS(422),
    [anon_sym_SUBQ] = ACTIONS(422),
    [anon_sym_ANDQ] = ACTIONS(422),
    [anon_sym_XORQ] = ACTIONS(422),
    [sym_identifier] = ACTIONS(422),
    [sym_number] = ACTIONS(420),
    [anon_sym_true] = ACTIONS(422),
    [anon_sym_TRUE] = ACTIONS(422),
    [anon_sym_false] = ACTIONS(422),
    [anon_sym_FALSE] = ACTIONS(422),
    [sym_comment] = ACTIONS(29),
  },
  [110] = {
    [sym_variable_declarator] = STATE(79),
    [sym__register_expression_statement] = STATE(110),
    [aux_sym_register_declaration_repeat1] = STATE(110),
    [anon_sym_RBRACE] = ACTIONS(424),
    [sym_identifier] = ACTIONS(426),
    [sym_comment] = ACTIONS(29),
  },
  [111] = {
    [anon_sym_COLON] = ACTIONS(360),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_in] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(119),
    [anon_sym_BANG_EQ] = ACTIONS(119),
    [anon_sym_GT_EQ] = ACTIONS(119),
    [anon_sym_LT_EQ] = ACTIONS(119),
    [anon_sym_GT] = ACTIONS(121),
    [anon_sym_LT] = ACTIONS(121),
    [anon_sym_AMP_AMP] = ACTIONS(123),
    [anon_sym_PIPE_PIPE] = ACTIONS(125),
    [anon_sym_STAR] = ACTIONS(127),
    [anon_sym_SLASH] = ACTIONS(129),
    [anon_sym_GT_GT] = ACTIONS(129),
    [anon_sym_GT_GT_GT] = ACTIONS(127),
    [anon_sym_LT_LT] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(131),
    [anon_sym_PIPE] = ACTIONS(133),
    [anon_sym_CARET] = ACTIONS(125),
    [sym_comment] = ACTIONS(29),
  },
  [112] = {
    [anon_sym_const] = ACTIONS(429),
    [anon_sym_LBRACK] = ACTIONS(431),
    [anon_sym_RBRACK] = ACTIONS(431),
    [anon_sym_LPAREN] = ACTIONS(431),
    [anon_sym_BANG] = ACTIONS(431),
    [anon_sym_TILDE] = ACTIONS(431),
    [anon_sym_DASH] = ACTIONS(431),
    [anon_sym_PLUS] = ACTIONS(431),
    [anon_sym_STAT_BUB] = ACTIONS(429),
    [anon_sym_STAT_AOK] = ACTIONS(429),
    [anon_sym_STAT_HLT] = ACTIONS(429),
    [anon_sym_STAT_ADR] = ACTIONS(429),
    [anon_sym_STAT_INS] = ACTIONS(429),
    [anon_sym_STAT_PIP] = ACTIONS(429),
    [anon_sym_REG_RAX] = ACTIONS(429),
    [anon_sym_REG_RCX] = ACTIONS(429),
    [anon_sym_REG_RDX] = ACTIONS(429),
    [anon_sym_REG_RBX] = ACTIONS(429),
    [anon_sym_REG_RSP] = ACTIONS(429),
    [anon_sym_REG_RBP] = ACTIONS(429),
    [anon_sym_REG_RSI] = ACTIONS(429),
    [anon_sym_REG_RDI] = ACTIONS(429),
    [anon_sym_REG_R8] = ACTIONS(429),
    [anon_sym_REG_R9] = ACTIONS(429),
    [anon_sym_REG_R10] = ACTIONS(429),
    [anon_sym_REG_R11] = ACTIONS(429),
    [anon_sym_REG_R12] = ACTIONS(429),
    [anon_sym_REG_R13] = ACTIONS(429),
    [anon_sym_REG_R14] = ACTIONS(429),
    [anon_sym_REG_NONE] = ACTIONS(429),
    [anon_sym_HALT] = ACTIONS(429),
    [anon_sym_NOP] = ACTIONS(429),
    [anon_sym_RRMOVQ] = ACTIONS(429),
    [anon_sym_IRMOVQ] = ACTIONS(429),
    [anon_sym_RMMOVQ] = ACTIONS(429),
    [anon_sym_MRMOVQ] = ACTIONS(429),
    [anon_sym_OPQ] = ACTIONS(429),
    [anon_sym_JXX] = ACTIONS(429),
    [anon_sym_CALL] = ACTIONS(429),
    [anon_sym_RET] = ACTIONS(429),
    [anon_sym_PUSHQ] = ACTIONS(429),
    [anon_sym_POPQ] = ACTIONS(429),
    [anon_sym_CMOVXX] = ACTIONS(429),
    [anon_sym_ALWAYS] = ACTIONS(429),
    [anon_sym_LE] = ACTIONS(429),
    [anon_sym_LT2] = ACTIONS(429),
    [anon_sym_EQ2] = ACTIONS(429),
    [anon_sym_NE] = ACTIONS(429),
    [anon_sym_GE] = ACTIONS(429),
    [anon_sym_GT2] = ACTIONS(429),
    [anon_sym_ADDQ] = ACTIONS(429),
    [anon_sym_SUBQ] = ACTIONS(429),
    [anon_sym_ANDQ] = ACTIONS(429),
    [anon_sym_XORQ] = ACTIONS(429),
    [sym_identifier] = ACTIONS(429),
    [sym_number] = ACTIONS(431),
    [anon_sym_true] = ACTIONS(429),
    [anon_sym_TRUE] = ACTIONS(429),
    [anon_sym_false] = ACTIONS(429),
    [anon_sym_FALSE] = ACTIONS(429),
    [sym_comment] = ACTIONS(29),
  },
  [113] = {
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(360),
    [anon_sym_in] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_EQ_EQ] = ACTIONS(145),
    [anon_sym_BANG_EQ] = ACTIONS(145),
    [anon_sym_GT_EQ] = ACTIONS(145),
    [anon_sym_LT_EQ] = ACTIONS(145),
    [anon_sym_GT] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(149),
    [anon_sym_PIPE_PIPE] = ACTIONS(151),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_GT_GT] = ACTIONS(155),
    [anon_sym_GT_GT_GT] = ACTIONS(153),
    [anon_sym_LT_LT] = ACTIONS(153),
    [anon_sym_AMP] = ACTIONS(157),
    [anon_sym_PIPE] = ACTIONS(159),
    [anon_sym_CARET] = ACTIONS(151),
    [sym_comment] = ACTIONS(29),
  },
  [114] = {
    [sym__expression] = STATE(135),
    [sym_assignment_expression] = STATE(135),
    [sym_mux_expression] = STATE(135),
    [sym_parenthesized_expression] = STATE(135),
    [sym_in_expression] = STATE(135),
    [sym_slice_expression] = STATE(135),
    [sym_unary_expression] = STATE(135),
    [sym_binary_expression] = STATE(135),
    [sym_predefined_constant] = STATE(135),
    [sym_true] = STATE(135),
    [sym_false] = STATE(135),
    [anon_sym_const] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(175),
    [sym_number] = ACTIONS(433),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [115] = {
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_in] = ACTIONS(79),
    [anon_sym_DOT_DOT] = ACTIONS(301),
    [anon_sym_DASH] = ACTIONS(309),
    [anon_sym_PLUS] = ACTIONS(309),
    [anon_sym_EQ_EQ] = ACTIONS(311),
    [anon_sym_BANG_EQ] = ACTIONS(311),
    [anon_sym_GT_EQ] = ACTIONS(311),
    [anon_sym_LT_EQ] = ACTIONS(311),
    [anon_sym_GT] = ACTIONS(313),
    [anon_sym_LT] = ACTIONS(313),
    [anon_sym_AMP_AMP] = ACTIONS(315),
    [anon_sym_PIPE_PIPE] = ACTIONS(317),
    [anon_sym_STAR] = ACTIONS(319),
    [anon_sym_SLASH] = ACTIONS(321),
    [anon_sym_GT_GT] = ACTIONS(321),
    [anon_sym_GT_GT_GT] = ACTIONS(319),
    [anon_sym_LT_LT] = ACTIONS(319),
    [anon_sym_AMP] = ACTIONS(323),
    [anon_sym_PIPE] = ACTIONS(325),
    [anon_sym_CARET] = ACTIONS(317),
    [sym_comment] = ACTIONS(29),
  },
  [116] = {
    [sym_identifier] = ACTIONS(435),
    [sym_comment] = ACTIONS(29),
  },
  [117] = {
    [sym__expression] = STATE(28),
    [sym_assignment_expression] = STATE(28),
    [sym_mux_expression] = STATE(28),
    [sym_parenthesized_expression] = STATE(28),
    [sym_in_expression] = STATE(28),
    [sym_slice_expression] = STATE(28),
    [sym_unary_expression] = STATE(28),
    [sym_binary_expression] = STATE(28),
    [sym_predefined_constant] = STATE(28),
    [sym_true] = STATE(28),
    [sym_false] = STATE(28),
    [anon_sym_const] = ACTIONS(372),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(374),
    [anon_sym_TILDE] = ACTIONS(374),
    [anon_sym_DASH] = ACTIONS(374),
    [anon_sym_PLUS] = ACTIONS(374),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(376),
    [sym_number] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [118] = {
    [anon_sym_EQ] = ACTIONS(437),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_RBRACK] = ACTIONS(59),
    [anon_sym_in] = ACTIONS(59),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(59),
    [anon_sym_EQ_EQ] = ACTIONS(59),
    [anon_sym_BANG_EQ] = ACTIONS(59),
    [anon_sym_GT_EQ] = ACTIONS(59),
    [anon_sym_LT_EQ] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(59),
    [anon_sym_PIPE_PIPE] = ACTIONS(59),
    [anon_sym_STAR] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_GT_GT] = ACTIONS(63),
    [anon_sym_GT_GT_GT] = ACTIONS(59),
    [anon_sym_LT_LT] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(63),
    [anon_sym_CARET] = ACTIONS(59),
    [sym_comment] = ACTIONS(29),
  },
  [119] = {
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(439),
    [anon_sym_in] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(441),
    [anon_sym_PLUS] = ACTIONS(441),
    [anon_sym_EQ_EQ] = ACTIONS(443),
    [anon_sym_BANG_EQ] = ACTIONS(443),
    [anon_sym_GT_EQ] = ACTIONS(443),
    [anon_sym_LT_EQ] = ACTIONS(443),
    [anon_sym_GT] = ACTIONS(445),
    [anon_sym_LT] = ACTIONS(445),
    [anon_sym_AMP_AMP] = ACTIONS(447),
    [anon_sym_PIPE_PIPE] = ACTIONS(449),
    [anon_sym_STAR] = ACTIONS(451),
    [anon_sym_SLASH] = ACTIONS(453),
    [anon_sym_GT_GT] = ACTIONS(453),
    [anon_sym_GT_GT_GT] = ACTIONS(451),
    [anon_sym_LT_LT] = ACTIONS(451),
    [anon_sym_AMP] = ACTIONS(455),
    [anon_sym_PIPE] = ACTIONS(457),
    [anon_sym_CARET] = ACTIONS(449),
    [sym_comment] = ACTIONS(29),
  },
  [120] = {
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_in] = ACTIONS(337),
    [anon_sym_DOT_DOT] = ACTIONS(337),
    [anon_sym_DASH] = ACTIONS(337),
    [anon_sym_PLUS] = ACTIONS(337),
    [anon_sym_EQ_EQ] = ACTIONS(311),
    [anon_sym_BANG_EQ] = ACTIONS(311),
    [anon_sym_GT_EQ] = ACTIONS(311),
    [anon_sym_LT_EQ] = ACTIONS(311),
    [anon_sym_GT] = ACTIONS(313),
    [anon_sym_LT] = ACTIONS(313),
    [anon_sym_AMP_AMP] = ACTIONS(337),
    [anon_sym_PIPE_PIPE] = ACTIONS(337),
    [anon_sym_STAR] = ACTIONS(319),
    [anon_sym_SLASH] = ACTIONS(321),
    [anon_sym_GT_GT] = ACTIONS(321),
    [anon_sym_GT_GT_GT] = ACTIONS(319),
    [anon_sym_LT_LT] = ACTIONS(319),
    [anon_sym_AMP] = ACTIONS(339),
    [anon_sym_PIPE] = ACTIONS(339),
    [anon_sym_CARET] = ACTIONS(337),
    [sym_comment] = ACTIONS(29),
  },
  [121] = {
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_in] = ACTIONS(337),
    [anon_sym_DOT_DOT] = ACTIONS(337),
    [anon_sym_DASH] = ACTIONS(337),
    [anon_sym_PLUS] = ACTIONS(337),
    [anon_sym_EQ_EQ] = ACTIONS(337),
    [anon_sym_BANG_EQ] = ACTIONS(337),
    [anon_sym_GT_EQ] = ACTIONS(337),
    [anon_sym_LT_EQ] = ACTIONS(337),
    [anon_sym_GT] = ACTIONS(339),
    [anon_sym_LT] = ACTIONS(339),
    [anon_sym_AMP_AMP] = ACTIONS(337),
    [anon_sym_PIPE_PIPE] = ACTIONS(337),
    [anon_sym_STAR] = ACTIONS(319),
    [anon_sym_SLASH] = ACTIONS(321),
    [anon_sym_GT_GT] = ACTIONS(321),
    [anon_sym_GT_GT_GT] = ACTIONS(319),
    [anon_sym_LT_LT] = ACTIONS(319),
    [anon_sym_AMP] = ACTIONS(339),
    [anon_sym_PIPE] = ACTIONS(339),
    [anon_sym_CARET] = ACTIONS(337),
    [sym_comment] = ACTIONS(29),
  },
  [122] = {
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_in] = ACTIONS(337),
    [anon_sym_DOT_DOT] = ACTIONS(337),
    [anon_sym_DASH] = ACTIONS(309),
    [anon_sym_PLUS] = ACTIONS(309),
    [anon_sym_EQ_EQ] = ACTIONS(311),
    [anon_sym_BANG_EQ] = ACTIONS(311),
    [anon_sym_GT_EQ] = ACTIONS(311),
    [anon_sym_LT_EQ] = ACTIONS(311),
    [anon_sym_GT] = ACTIONS(313),
    [anon_sym_LT] = ACTIONS(313),
    [anon_sym_AMP_AMP] = ACTIONS(337),
    [anon_sym_PIPE_PIPE] = ACTIONS(337),
    [anon_sym_STAR] = ACTIONS(319),
    [anon_sym_SLASH] = ACTIONS(321),
    [anon_sym_GT_GT] = ACTIONS(321),
    [anon_sym_GT_GT_GT] = ACTIONS(319),
    [anon_sym_LT_LT] = ACTIONS(319),
    [anon_sym_AMP] = ACTIONS(339),
    [anon_sym_PIPE] = ACTIONS(339),
    [anon_sym_CARET] = ACTIONS(337),
    [sym_comment] = ACTIONS(29),
  },
  [123] = {
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_in] = ACTIONS(337),
    [anon_sym_DOT_DOT] = ACTIONS(337),
    [anon_sym_DASH] = ACTIONS(309),
    [anon_sym_PLUS] = ACTIONS(309),
    [anon_sym_EQ_EQ] = ACTIONS(311),
    [anon_sym_BANG_EQ] = ACTIONS(311),
    [anon_sym_GT_EQ] = ACTIONS(311),
    [anon_sym_LT_EQ] = ACTIONS(311),
    [anon_sym_GT] = ACTIONS(313),
    [anon_sym_LT] = ACTIONS(313),
    [anon_sym_AMP_AMP] = ACTIONS(315),
    [anon_sym_PIPE_PIPE] = ACTIONS(337),
    [anon_sym_STAR] = ACTIONS(319),
    [anon_sym_SLASH] = ACTIONS(321),
    [anon_sym_GT_GT] = ACTIONS(321),
    [anon_sym_GT_GT_GT] = ACTIONS(319),
    [anon_sym_LT_LT] = ACTIONS(319),
    [anon_sym_AMP] = ACTIONS(323),
    [anon_sym_PIPE] = ACTIONS(339),
    [anon_sym_CARET] = ACTIONS(337),
    [sym_comment] = ACTIONS(29),
  },
  [124] = {
    [anon_sym_EQ] = ACTIONS(459),
    [sym_comment] = ACTIONS(29),
  },
  [125] = {
    [sym__expression] = STATE(145),
    [sym_assignment_expression] = STATE(145),
    [sym_mux_expression] = STATE(145),
    [sym_parenthesized_expression] = STATE(145),
    [sym_in_expression] = STATE(145),
    [sym_slice_expression] = STATE(145),
    [sym_unary_expression] = STATE(145),
    [sym_binary_expression] = STATE(145),
    [sym_predefined_constant] = STATE(145),
    [sym_true] = STATE(145),
    [sym_false] = STATE(145),
    [anon_sym_const] = ACTIONS(329),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(331),
    [anon_sym_TILDE] = ACTIONS(331),
    [anon_sym_DASH] = ACTIONS(331),
    [anon_sym_PLUS] = ACTIONS(331),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(333),
    [sym_number] = ACTIONS(461),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [126] = {
    [sym__expression] = STATE(146),
    [sym_assignment_expression] = STATE(146),
    [sym_mux_expression] = STATE(146),
    [sym_parenthesized_expression] = STATE(146),
    [sym_in_expression] = STATE(146),
    [sym_slice_expression] = STATE(146),
    [sym_unary_expression] = STATE(146),
    [sym_binary_expression] = STATE(146),
    [sym_predefined_constant] = STATE(146),
    [sym_true] = STATE(146),
    [sym_false] = STATE(146),
    [anon_sym_const] = ACTIONS(329),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(331),
    [anon_sym_TILDE] = ACTIONS(331),
    [anon_sym_DASH] = ACTIONS(331),
    [anon_sym_PLUS] = ACTIONS(331),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(333),
    [sym_number] = ACTIONS(463),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [127] = {
    [anon_sym_SEMI] = ACTIONS(465),
    [anon_sym_COMMA] = ACTIONS(465),
    [anon_sym_COLON] = ACTIONS(465),
    [anon_sym_RBRACE] = ACTIONS(465),
    [anon_sym_LBRACK] = ACTIONS(465),
    [anon_sym_RBRACK] = ACTIONS(465),
    [anon_sym_RPAREN] = ACTIONS(465),
    [anon_sym_in] = ACTIONS(465),
    [anon_sym_DOT_DOT] = ACTIONS(465),
    [anon_sym_DASH] = ACTIONS(465),
    [anon_sym_PLUS] = ACTIONS(465),
    [anon_sym_EQ_EQ] = ACTIONS(465),
    [anon_sym_BANG_EQ] = ACTIONS(465),
    [anon_sym_GT_EQ] = ACTIONS(465),
    [anon_sym_LT_EQ] = ACTIONS(465),
    [anon_sym_GT] = ACTIONS(467),
    [anon_sym_LT] = ACTIONS(467),
    [anon_sym_AMP_AMP] = ACTIONS(465),
    [anon_sym_PIPE_PIPE] = ACTIONS(465),
    [anon_sym_STAR] = ACTIONS(465),
    [anon_sym_SLASH] = ACTIONS(467),
    [anon_sym_GT_GT] = ACTIONS(467),
    [anon_sym_GT_GT_GT] = ACTIONS(465),
    [anon_sym_LT_LT] = ACTIONS(465),
    [anon_sym_AMP] = ACTIONS(467),
    [anon_sym_PIPE] = ACTIONS(467),
    [anon_sym_CARET] = ACTIONS(465),
    [sym_comment] = ACTIONS(29),
  },
  [128] = {
    [sym__expression] = STATE(147),
    [sym_assignment_expression] = STATE(147),
    [sym_mux_expression] = STATE(147),
    [sym_parenthesized_expression] = STATE(147),
    [sym_in_expression] = STATE(147),
    [sym_slice_expression] = STATE(147),
    [sym_unary_expression] = STATE(147),
    [sym_binary_expression] = STATE(147),
    [sym_predefined_constant] = STATE(147),
    [sym_true] = STATE(147),
    [sym_false] = STATE(147),
    [anon_sym_const] = ACTIONS(329),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(331),
    [anon_sym_TILDE] = ACTIONS(331),
    [anon_sym_DASH] = ACTIONS(331),
    [anon_sym_PLUS] = ACTIONS(331),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(333),
    [sym_number] = ACTIONS(469),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [129] = {
    [sym__expression] = STATE(148),
    [sym_assignment_expression] = STATE(148),
    [sym_mux_expression] = STATE(148),
    [sym_parenthesized_expression] = STATE(148),
    [sym_in_expression] = STATE(148),
    [sym_slice_expression] = STATE(148),
    [sym_unary_expression] = STATE(148),
    [sym_binary_expression] = STATE(148),
    [sym_predefined_constant] = STATE(148),
    [sym_true] = STATE(148),
    [sym_false] = STATE(148),
    [anon_sym_const] = ACTIONS(329),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(331),
    [anon_sym_TILDE] = ACTIONS(331),
    [anon_sym_DASH] = ACTIONS(331),
    [anon_sym_PLUS] = ACTIONS(331),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(333),
    [sym_number] = ACTIONS(471),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [130] = {
    [sym__expression] = STATE(149),
    [sym_assignment_expression] = STATE(149),
    [sym_mux_expression] = STATE(149),
    [sym_parenthesized_expression] = STATE(149),
    [sym_in_expression] = STATE(149),
    [sym_slice_expression] = STATE(149),
    [sym_unary_expression] = STATE(149),
    [sym_binary_expression] = STATE(149),
    [sym_predefined_constant] = STATE(149),
    [sym_true] = STATE(149),
    [sym_false] = STATE(149),
    [anon_sym_const] = ACTIONS(329),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(331),
    [anon_sym_TILDE] = ACTIONS(331),
    [anon_sym_DASH] = ACTIONS(331),
    [anon_sym_PLUS] = ACTIONS(331),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(333),
    [sym_number] = ACTIONS(473),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [131] = {
    [sym__expression] = STATE(150),
    [sym_assignment_expression] = STATE(150),
    [sym_mux_expression] = STATE(150),
    [sym_parenthesized_expression] = STATE(150),
    [sym_in_expression] = STATE(150),
    [sym_slice_expression] = STATE(150),
    [sym_unary_expression] = STATE(150),
    [sym_binary_expression] = STATE(150),
    [sym_predefined_constant] = STATE(150),
    [sym_true] = STATE(150),
    [sym_false] = STATE(150),
    [anon_sym_const] = ACTIONS(329),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(331),
    [anon_sym_TILDE] = ACTIONS(331),
    [anon_sym_DASH] = ACTIONS(331),
    [anon_sym_PLUS] = ACTIONS(331),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(333),
    [sym_number] = ACTIONS(475),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [132] = {
    [sym__expression] = STATE(73),
    [sym_assignment_expression] = STATE(73),
    [sym_mux_expression] = STATE(73),
    [sym_parenthesized_expression] = STATE(73),
    [sym_in_expression] = STATE(73),
    [sym_slice_expression] = STATE(73),
    [sym_unary_expression] = STATE(73),
    [sym_binary_expression] = STATE(73),
    [sym_predefined_constant] = STATE(73),
    [sym_true] = STATE(73),
    [sym_false] = STATE(73),
    [anon_sym_const] = ACTIONS(329),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(331),
    [anon_sym_TILDE] = ACTIONS(331),
    [anon_sym_DASH] = ACTIONS(331),
    [anon_sym_PLUS] = ACTIONS(331),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(333),
    [sym_number] = ACTIONS(189),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [133] = {
    [aux_sym_in_expression_repeat1] = STATE(152),
    [anon_sym_COMMA] = ACTIONS(396),
    [anon_sym_RBRACE] = ACTIONS(477),
    [sym_comment] = ACTIONS(29),
  },
  [134] = {
    [anon_sym_SEMI] = ACTIONS(479),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_in] = ACTIONS(79),
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
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_GT_GT_GT] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_CARET] = ACTIONS(89),
    [sym_comment] = ACTIONS(29),
  },
  [135] = {
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_in] = ACTIONS(79),
    [anon_sym_DOT_DOT] = ACTIONS(360),
    [anon_sym_DASH] = ACTIONS(309),
    [anon_sym_PLUS] = ACTIONS(309),
    [anon_sym_EQ_EQ] = ACTIONS(311),
    [anon_sym_BANG_EQ] = ACTIONS(311),
    [anon_sym_GT_EQ] = ACTIONS(311),
    [anon_sym_LT_EQ] = ACTIONS(311),
    [anon_sym_GT] = ACTIONS(313),
    [anon_sym_LT] = ACTIONS(313),
    [anon_sym_AMP_AMP] = ACTIONS(315),
    [anon_sym_PIPE_PIPE] = ACTIONS(317),
    [anon_sym_STAR] = ACTIONS(319),
    [anon_sym_SLASH] = ACTIONS(321),
    [anon_sym_GT_GT] = ACTIONS(321),
    [anon_sym_GT_GT_GT] = ACTIONS(319),
    [anon_sym_LT_LT] = ACTIONS(319),
    [anon_sym_AMP] = ACTIONS(323),
    [anon_sym_PIPE] = ACTIONS(325),
    [anon_sym_CARET] = ACTIONS(317),
    [sym_comment] = ACTIONS(29),
  },
  [136] = {
    [anon_sym_EQ] = ACTIONS(481),
    [sym_comment] = ACTIONS(29),
  },
  [137] = {
    [sym__expression] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_mux_expression] = STATE(155),
    [sym_parenthesized_expression] = STATE(155),
    [sym_in_expression] = STATE(155),
    [sym_slice_expression] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym_predefined_constant] = STATE(155),
    [sym_true] = STATE(155),
    [sym_false] = STATE(155),
    [anon_sym_const] = ACTIONS(372),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(374),
    [anon_sym_TILDE] = ACTIONS(374),
    [anon_sym_DASH] = ACTIONS(374),
    [anon_sym_PLUS] = ACTIONS(374),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(376),
    [sym_number] = ACTIONS(483),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [138] = {
    [anon_sym_SEMI] = ACTIONS(485),
    [anon_sym_COMMA] = ACTIONS(485),
    [anon_sym_COLON] = ACTIONS(485),
    [anon_sym_RBRACE] = ACTIONS(485),
    [anon_sym_LBRACK] = ACTIONS(485),
    [anon_sym_RBRACK] = ACTIONS(485),
    [anon_sym_RPAREN] = ACTIONS(485),
    [anon_sym_in] = ACTIONS(485),
    [anon_sym_DOT_DOT] = ACTIONS(485),
    [anon_sym_DASH] = ACTIONS(485),
    [anon_sym_PLUS] = ACTIONS(485),
    [anon_sym_EQ_EQ] = ACTIONS(485),
    [anon_sym_BANG_EQ] = ACTIONS(485),
    [anon_sym_GT_EQ] = ACTIONS(485),
    [anon_sym_LT_EQ] = ACTIONS(485),
    [anon_sym_GT] = ACTIONS(487),
    [anon_sym_LT] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(485),
    [anon_sym_PIPE_PIPE] = ACTIONS(485),
    [anon_sym_STAR] = ACTIONS(485),
    [anon_sym_SLASH] = ACTIONS(487),
    [anon_sym_GT_GT] = ACTIONS(487),
    [anon_sym_GT_GT_GT] = ACTIONS(485),
    [anon_sym_LT_LT] = ACTIONS(485),
    [anon_sym_AMP] = ACTIONS(487),
    [anon_sym_PIPE] = ACTIONS(487),
    [anon_sym_CARET] = ACTIONS(485),
    [sym_comment] = ACTIONS(29),
  },
  [139] = {
    [sym__expression] = STATE(156),
    [sym_assignment_expression] = STATE(156),
    [sym_mux_expression] = STATE(156),
    [sym_parenthesized_expression] = STATE(156),
    [sym_in_expression] = STATE(156),
    [sym_slice_expression] = STATE(156),
    [sym_unary_expression] = STATE(156),
    [sym_binary_expression] = STATE(156),
    [sym_predefined_constant] = STATE(156),
    [sym_true] = STATE(156),
    [sym_false] = STATE(156),
    [anon_sym_const] = ACTIONS(372),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(374),
    [anon_sym_TILDE] = ACTIONS(374),
    [anon_sym_DASH] = ACTIONS(374),
    [anon_sym_PLUS] = ACTIONS(374),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(376),
    [sym_number] = ACTIONS(489),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [140] = {
    [sym__expression] = STATE(157),
    [sym_assignment_expression] = STATE(157),
    [sym_mux_expression] = STATE(157),
    [sym_parenthesized_expression] = STATE(157),
    [sym_in_expression] = STATE(157),
    [sym_slice_expression] = STATE(157),
    [sym_unary_expression] = STATE(157),
    [sym_binary_expression] = STATE(157),
    [sym_predefined_constant] = STATE(157),
    [sym_true] = STATE(157),
    [sym_false] = STATE(157),
    [anon_sym_const] = ACTIONS(372),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(374),
    [anon_sym_TILDE] = ACTIONS(374),
    [anon_sym_DASH] = ACTIONS(374),
    [anon_sym_PLUS] = ACTIONS(374),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(376),
    [sym_number] = ACTIONS(491),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [141] = {
    [sym__expression] = STATE(158),
    [sym_assignment_expression] = STATE(158),
    [sym_mux_expression] = STATE(158),
    [sym_parenthesized_expression] = STATE(158),
    [sym_in_expression] = STATE(158),
    [sym_slice_expression] = STATE(158),
    [sym_unary_expression] = STATE(158),
    [sym_binary_expression] = STATE(158),
    [sym_predefined_constant] = STATE(158),
    [sym_true] = STATE(158),
    [sym_false] = STATE(158),
    [anon_sym_const] = ACTIONS(372),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(374),
    [anon_sym_TILDE] = ACTIONS(374),
    [anon_sym_DASH] = ACTIONS(374),
    [anon_sym_PLUS] = ACTIONS(374),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(376),
    [sym_number] = ACTIONS(493),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [142] = {
    [sym__expression] = STATE(159),
    [sym_assignment_expression] = STATE(159),
    [sym_mux_expression] = STATE(159),
    [sym_parenthesized_expression] = STATE(159),
    [sym_in_expression] = STATE(159),
    [sym_slice_expression] = STATE(159),
    [sym_unary_expression] = STATE(159),
    [sym_binary_expression] = STATE(159),
    [sym_predefined_constant] = STATE(159),
    [sym_true] = STATE(159),
    [sym_false] = STATE(159),
    [anon_sym_const] = ACTIONS(372),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(374),
    [anon_sym_TILDE] = ACTIONS(374),
    [anon_sym_DASH] = ACTIONS(374),
    [anon_sym_PLUS] = ACTIONS(374),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(376),
    [sym_number] = ACTIONS(495),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [143] = {
    [sym__expression] = STATE(73),
    [sym_assignment_expression] = STATE(73),
    [sym_mux_expression] = STATE(73),
    [sym_parenthesized_expression] = STATE(73),
    [sym_in_expression] = STATE(73),
    [sym_slice_expression] = STATE(73),
    [sym_unary_expression] = STATE(73),
    [sym_binary_expression] = STATE(73),
    [sym_predefined_constant] = STATE(73),
    [sym_true] = STATE(73),
    [sym_false] = STATE(73),
    [anon_sym_const] = ACTIONS(372),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(374),
    [anon_sym_TILDE] = ACTIONS(374),
    [anon_sym_DASH] = ACTIONS(374),
    [anon_sym_PLUS] = ACTIONS(374),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(376),
    [sym_number] = ACTIONS(189),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [144] = {
    [sym__expression] = STATE(160),
    [sym_assignment_expression] = STATE(160),
    [sym_mux_expression] = STATE(160),
    [sym_parenthesized_expression] = STATE(160),
    [sym_in_expression] = STATE(160),
    [sym_slice_expression] = STATE(160),
    [sym_unary_expression] = STATE(160),
    [sym_binary_expression] = STATE(160),
    [sym_predefined_constant] = STATE(160),
    [sym_true] = STATE(160),
    [sym_false] = STATE(160),
    [anon_sym_const] = ACTIONS(329),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(331),
    [anon_sym_TILDE] = ACTIONS(331),
    [anon_sym_DASH] = ACTIONS(331),
    [anon_sym_PLUS] = ACTIONS(331),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(333),
    [sym_number] = ACTIONS(497),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [145] = {
    [anon_sym_COMMA] = ACTIONS(301),
    [anon_sym_RBRACE] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_in] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(400),
    [anon_sym_PLUS] = ACTIONS(400),
    [anon_sym_EQ_EQ] = ACTIONS(402),
    [anon_sym_BANG_EQ] = ACTIONS(402),
    [anon_sym_GT_EQ] = ACTIONS(402),
    [anon_sym_LT_EQ] = ACTIONS(402),
    [anon_sym_GT] = ACTIONS(404),
    [anon_sym_LT] = ACTIONS(404),
    [anon_sym_AMP_AMP] = ACTIONS(406),
    [anon_sym_PIPE_PIPE] = ACTIONS(408),
    [anon_sym_STAR] = ACTIONS(410),
    [anon_sym_SLASH] = ACTIONS(412),
    [anon_sym_GT_GT] = ACTIONS(412),
    [anon_sym_GT_GT_GT] = ACTIONS(410),
    [anon_sym_LT_LT] = ACTIONS(410),
    [anon_sym_AMP] = ACTIONS(414),
    [anon_sym_PIPE] = ACTIONS(416),
    [anon_sym_CARET] = ACTIONS(408),
    [sym_comment] = ACTIONS(29),
  },
  [146] = {
    [anon_sym_COMMA] = ACTIONS(499),
    [anon_sym_RBRACE] = ACTIONS(499),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_in] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(400),
    [anon_sym_PLUS] = ACTIONS(400),
    [anon_sym_EQ_EQ] = ACTIONS(402),
    [anon_sym_BANG_EQ] = ACTIONS(402),
    [anon_sym_GT_EQ] = ACTIONS(402),
    [anon_sym_LT_EQ] = ACTIONS(402),
    [anon_sym_GT] = ACTIONS(404),
    [anon_sym_LT] = ACTIONS(404),
    [anon_sym_AMP_AMP] = ACTIONS(406),
    [anon_sym_PIPE_PIPE] = ACTIONS(408),
    [anon_sym_STAR] = ACTIONS(410),
    [anon_sym_SLASH] = ACTIONS(412),
    [anon_sym_GT_GT] = ACTIONS(412),
    [anon_sym_GT_GT_GT] = ACTIONS(410),
    [anon_sym_LT_LT] = ACTIONS(410),
    [anon_sym_AMP] = ACTIONS(414),
    [anon_sym_PIPE] = ACTIONS(416),
    [anon_sym_CARET] = ACTIONS(408),
    [sym_comment] = ACTIONS(29),
  },
  [147] = {
    [anon_sym_COMMA] = ACTIONS(337),
    [anon_sym_RBRACE] = ACTIONS(337),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_in] = ACTIONS(337),
    [anon_sym_DASH] = ACTIONS(337),
    [anon_sym_PLUS] = ACTIONS(337),
    [anon_sym_EQ_EQ] = ACTIONS(402),
    [anon_sym_BANG_EQ] = ACTIONS(402),
    [anon_sym_GT_EQ] = ACTIONS(402),
    [anon_sym_LT_EQ] = ACTIONS(402),
    [anon_sym_GT] = ACTIONS(404),
    [anon_sym_LT] = ACTIONS(404),
    [anon_sym_AMP_AMP] = ACTIONS(337),
    [anon_sym_PIPE_PIPE] = ACTIONS(337),
    [anon_sym_STAR] = ACTIONS(410),
    [anon_sym_SLASH] = ACTIONS(412),
    [anon_sym_GT_GT] = ACTIONS(412),
    [anon_sym_GT_GT_GT] = ACTIONS(410),
    [anon_sym_LT_LT] = ACTIONS(410),
    [anon_sym_AMP] = ACTIONS(339),
    [anon_sym_PIPE] = ACTIONS(339),
    [anon_sym_CARET] = ACTIONS(337),
    [sym_comment] = ACTIONS(29),
  },
  [148] = {
    [anon_sym_COMMA] = ACTIONS(337),
    [anon_sym_RBRACE] = ACTIONS(337),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_in] = ACTIONS(337),
    [anon_sym_DASH] = ACTIONS(337),
    [anon_sym_PLUS] = ACTIONS(337),
    [anon_sym_EQ_EQ] = ACTIONS(337),
    [anon_sym_BANG_EQ] = ACTIONS(337),
    [anon_sym_GT_EQ] = ACTIONS(337),
    [anon_sym_LT_EQ] = ACTIONS(337),
    [anon_sym_GT] = ACTIONS(339),
    [anon_sym_LT] = ACTIONS(339),
    [anon_sym_AMP_AMP] = ACTIONS(337),
    [anon_sym_PIPE_PIPE] = ACTIONS(337),
    [anon_sym_STAR] = ACTIONS(410),
    [anon_sym_SLASH] = ACTIONS(412),
    [anon_sym_GT_GT] = ACTIONS(412),
    [anon_sym_GT_GT_GT] = ACTIONS(410),
    [anon_sym_LT_LT] = ACTIONS(410),
    [anon_sym_AMP] = ACTIONS(339),
    [anon_sym_PIPE] = ACTIONS(339),
    [anon_sym_CARET] = ACTIONS(337),
    [sym_comment] = ACTIONS(29),
  },
  [149] = {
    [anon_sym_COMMA] = ACTIONS(337),
    [anon_sym_RBRACE] = ACTIONS(337),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_in] = ACTIONS(337),
    [anon_sym_DASH] = ACTIONS(400),
    [anon_sym_PLUS] = ACTIONS(400),
    [anon_sym_EQ_EQ] = ACTIONS(402),
    [anon_sym_BANG_EQ] = ACTIONS(402),
    [anon_sym_GT_EQ] = ACTIONS(402),
    [anon_sym_LT_EQ] = ACTIONS(402),
    [anon_sym_GT] = ACTIONS(404),
    [anon_sym_LT] = ACTIONS(404),
    [anon_sym_AMP_AMP] = ACTIONS(337),
    [anon_sym_PIPE_PIPE] = ACTIONS(337),
    [anon_sym_STAR] = ACTIONS(410),
    [anon_sym_SLASH] = ACTIONS(412),
    [anon_sym_GT_GT] = ACTIONS(412),
    [anon_sym_GT_GT_GT] = ACTIONS(410),
    [anon_sym_LT_LT] = ACTIONS(410),
    [anon_sym_AMP] = ACTIONS(339),
    [anon_sym_PIPE] = ACTIONS(339),
    [anon_sym_CARET] = ACTIONS(337),
    [sym_comment] = ACTIONS(29),
  },
  [150] = {
    [anon_sym_COMMA] = ACTIONS(337),
    [anon_sym_RBRACE] = ACTIONS(337),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_in] = ACTIONS(337),
    [anon_sym_DASH] = ACTIONS(400),
    [anon_sym_PLUS] = ACTIONS(400),
    [anon_sym_EQ_EQ] = ACTIONS(402),
    [anon_sym_BANG_EQ] = ACTIONS(402),
    [anon_sym_GT_EQ] = ACTIONS(402),
    [anon_sym_LT_EQ] = ACTIONS(402),
    [anon_sym_GT] = ACTIONS(404),
    [anon_sym_LT] = ACTIONS(404),
    [anon_sym_AMP_AMP] = ACTIONS(406),
    [anon_sym_PIPE_PIPE] = ACTIONS(337),
    [anon_sym_STAR] = ACTIONS(410),
    [anon_sym_SLASH] = ACTIONS(412),
    [anon_sym_GT_GT] = ACTIONS(412),
    [anon_sym_GT_GT_GT] = ACTIONS(410),
    [anon_sym_LT_LT] = ACTIONS(410),
    [anon_sym_AMP] = ACTIONS(414),
    [anon_sym_PIPE] = ACTIONS(339),
    [anon_sym_CARET] = ACTIONS(337),
    [sym_comment] = ACTIONS(29),
  },
  [151] = {
    [anon_sym_SEMI] = ACTIONS(501),
    [anon_sym_COMMA] = ACTIONS(501),
    [anon_sym_COLON] = ACTIONS(501),
    [anon_sym_RBRACE] = ACTIONS(501),
    [anon_sym_LBRACK] = ACTIONS(501),
    [anon_sym_RBRACK] = ACTIONS(501),
    [anon_sym_RPAREN] = ACTIONS(501),
    [anon_sym_in] = ACTIONS(501),
    [anon_sym_DOT_DOT] = ACTIONS(501),
    [anon_sym_DASH] = ACTIONS(501),
    [anon_sym_PLUS] = ACTIONS(501),
    [anon_sym_EQ_EQ] = ACTIONS(501),
    [anon_sym_BANG_EQ] = ACTIONS(501),
    [anon_sym_GT_EQ] = ACTIONS(501),
    [anon_sym_LT_EQ] = ACTIONS(501),
    [anon_sym_GT] = ACTIONS(503),
    [anon_sym_LT] = ACTIONS(503),
    [anon_sym_AMP_AMP] = ACTIONS(501),
    [anon_sym_PIPE_PIPE] = ACTIONS(501),
    [anon_sym_STAR] = ACTIONS(501),
    [anon_sym_SLASH] = ACTIONS(503),
    [anon_sym_GT_GT] = ACTIONS(503),
    [anon_sym_GT_GT_GT] = ACTIONS(501),
    [anon_sym_LT_LT] = ACTIONS(501),
    [anon_sym_AMP] = ACTIONS(503),
    [anon_sym_PIPE] = ACTIONS(503),
    [anon_sym_CARET] = ACTIONS(501),
    [sym_comment] = ACTIONS(29),
  },
  [152] = {
    [aux_sym_in_expression_repeat1] = STATE(152),
    [anon_sym_COMMA] = ACTIONS(505),
    [anon_sym_RBRACE] = ACTIONS(499),
    [sym_comment] = ACTIONS(29),
  },
  [153] = {
    [anon_sym_RBRACE] = ACTIONS(508),
    [sym_identifier] = ACTIONS(508),
    [sym_comment] = ACTIONS(29),
  },
  [154] = {
    [sym__expression] = STATE(161),
    [sym_assignment_expression] = STATE(161),
    [sym_mux_expression] = STATE(161),
    [sym_parenthesized_expression] = STATE(161),
    [sym_in_expression] = STATE(161),
    [sym_slice_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_predefined_constant] = STATE(161),
    [sym_true] = STATE(161),
    [sym_false] = STATE(161),
    [anon_sym_const] = ACTIONS(372),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(374),
    [anon_sym_TILDE] = ACTIONS(374),
    [anon_sym_DASH] = ACTIONS(374),
    [anon_sym_PLUS] = ACTIONS(374),
    [anon_sym_STAT_BUB] = ACTIONS(19),
    [anon_sym_STAT_AOK] = ACTIONS(19),
    [anon_sym_STAT_HLT] = ACTIONS(19),
    [anon_sym_STAT_ADR] = ACTIONS(19),
    [anon_sym_STAT_INS] = ACTIONS(19),
    [anon_sym_STAT_PIP] = ACTIONS(19),
    [anon_sym_REG_RAX] = ACTIONS(19),
    [anon_sym_REG_RCX] = ACTIONS(19),
    [anon_sym_REG_RDX] = ACTIONS(19),
    [anon_sym_REG_RBX] = ACTIONS(19),
    [anon_sym_REG_RSP] = ACTIONS(19),
    [anon_sym_REG_RBP] = ACTIONS(19),
    [anon_sym_REG_RSI] = ACTIONS(19),
    [anon_sym_REG_RDI] = ACTIONS(19),
    [anon_sym_REG_R8] = ACTIONS(19),
    [anon_sym_REG_R9] = ACTIONS(19),
    [anon_sym_REG_R10] = ACTIONS(19),
    [anon_sym_REG_R11] = ACTIONS(19),
    [anon_sym_REG_R12] = ACTIONS(19),
    [anon_sym_REG_R13] = ACTIONS(19),
    [anon_sym_REG_R14] = ACTIONS(19),
    [anon_sym_REG_NONE] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_NOP] = ACTIONS(19),
    [anon_sym_RRMOVQ] = ACTIONS(19),
    [anon_sym_IRMOVQ] = ACTIONS(19),
    [anon_sym_RMMOVQ] = ACTIONS(19),
    [anon_sym_MRMOVQ] = ACTIONS(19),
    [anon_sym_OPQ] = ACTIONS(19),
    [anon_sym_JXX] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(19),
    [anon_sym_RET] = ACTIONS(19),
    [anon_sym_PUSHQ] = ACTIONS(19),
    [anon_sym_POPQ] = ACTIONS(19),
    [anon_sym_CMOVXX] = ACTIONS(19),
    [anon_sym_ALWAYS] = ACTIONS(19),
    [anon_sym_LE] = ACTIONS(19),
    [anon_sym_LT2] = ACTIONS(19),
    [anon_sym_EQ2] = ACTIONS(19),
    [anon_sym_NE] = ACTIONS(19),
    [anon_sym_GE] = ACTIONS(19),
    [anon_sym_GT2] = ACTIONS(19),
    [anon_sym_ADDQ] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(19),
    [anon_sym_ANDQ] = ACTIONS(19),
    [anon_sym_XORQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(376),
    [sym_number] = ACTIONS(510),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [155] = {
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(301),
    [anon_sym_in] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(441),
    [anon_sym_PLUS] = ACTIONS(441),
    [anon_sym_EQ_EQ] = ACTIONS(443),
    [anon_sym_BANG_EQ] = ACTIONS(443),
    [anon_sym_GT_EQ] = ACTIONS(443),
    [anon_sym_LT_EQ] = ACTIONS(443),
    [anon_sym_GT] = ACTIONS(445),
    [anon_sym_LT] = ACTIONS(445),
    [anon_sym_AMP_AMP] = ACTIONS(447),
    [anon_sym_PIPE_PIPE] = ACTIONS(449),
    [anon_sym_STAR] = ACTIONS(451),
    [anon_sym_SLASH] = ACTIONS(453),
    [anon_sym_GT_GT] = ACTIONS(453),
    [anon_sym_GT_GT_GT] = ACTIONS(451),
    [anon_sym_LT_LT] = ACTIONS(451),
    [anon_sym_AMP] = ACTIONS(455),
    [anon_sym_PIPE] = ACTIONS(457),
    [anon_sym_CARET] = ACTIONS(449),
    [sym_comment] = ACTIONS(29),
  },
  [156] = {
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(337),
    [anon_sym_in] = ACTIONS(337),
    [anon_sym_DASH] = ACTIONS(337),
    [anon_sym_PLUS] = ACTIONS(337),
    [anon_sym_EQ_EQ] = ACTIONS(443),
    [anon_sym_BANG_EQ] = ACTIONS(443),
    [anon_sym_GT_EQ] = ACTIONS(443),
    [anon_sym_LT_EQ] = ACTIONS(443),
    [anon_sym_GT] = ACTIONS(445),
    [anon_sym_LT] = ACTIONS(445),
    [anon_sym_AMP_AMP] = ACTIONS(337),
    [anon_sym_PIPE_PIPE] = ACTIONS(337),
    [anon_sym_STAR] = ACTIONS(451),
    [anon_sym_SLASH] = ACTIONS(453),
    [anon_sym_GT_GT] = ACTIONS(453),
    [anon_sym_GT_GT_GT] = ACTIONS(451),
    [anon_sym_LT_LT] = ACTIONS(451),
    [anon_sym_AMP] = ACTIONS(339),
    [anon_sym_PIPE] = ACTIONS(339),
    [anon_sym_CARET] = ACTIONS(337),
    [sym_comment] = ACTIONS(29),
  },
  [157] = {
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(337),
    [anon_sym_in] = ACTIONS(337),
    [anon_sym_DASH] = ACTIONS(337),
    [anon_sym_PLUS] = ACTIONS(337),
    [anon_sym_EQ_EQ] = ACTIONS(337),
    [anon_sym_BANG_EQ] = ACTIONS(337),
    [anon_sym_GT_EQ] = ACTIONS(337),
    [anon_sym_LT_EQ] = ACTIONS(337),
    [anon_sym_GT] = ACTIONS(339),
    [anon_sym_LT] = ACTIONS(339),
    [anon_sym_AMP_AMP] = ACTIONS(337),
    [anon_sym_PIPE_PIPE] = ACTIONS(337),
    [anon_sym_STAR] = ACTIONS(451),
    [anon_sym_SLASH] = ACTIONS(453),
    [anon_sym_GT_GT] = ACTIONS(453),
    [anon_sym_GT_GT_GT] = ACTIONS(451),
    [anon_sym_LT_LT] = ACTIONS(451),
    [anon_sym_AMP] = ACTIONS(339),
    [anon_sym_PIPE] = ACTIONS(339),
    [anon_sym_CARET] = ACTIONS(337),
    [sym_comment] = ACTIONS(29),
  },
  [158] = {
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(337),
    [anon_sym_in] = ACTIONS(337),
    [anon_sym_DASH] = ACTIONS(441),
    [anon_sym_PLUS] = ACTIONS(441),
    [anon_sym_EQ_EQ] = ACTIONS(443),
    [anon_sym_BANG_EQ] = ACTIONS(443),
    [anon_sym_GT_EQ] = ACTIONS(443),
    [anon_sym_LT_EQ] = ACTIONS(443),
    [anon_sym_GT] = ACTIONS(445),
    [anon_sym_LT] = ACTIONS(445),
    [anon_sym_AMP_AMP] = ACTIONS(337),
    [anon_sym_PIPE_PIPE] = ACTIONS(337),
    [anon_sym_STAR] = ACTIONS(451),
    [anon_sym_SLASH] = ACTIONS(453),
    [anon_sym_GT_GT] = ACTIONS(453),
    [anon_sym_GT_GT_GT] = ACTIONS(451),
    [anon_sym_LT_LT] = ACTIONS(451),
    [anon_sym_AMP] = ACTIONS(339),
    [anon_sym_PIPE] = ACTIONS(339),
    [anon_sym_CARET] = ACTIONS(337),
    [sym_comment] = ACTIONS(29),
  },
  [159] = {
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(337),
    [anon_sym_in] = ACTIONS(337),
    [anon_sym_DASH] = ACTIONS(441),
    [anon_sym_PLUS] = ACTIONS(441),
    [anon_sym_EQ_EQ] = ACTIONS(443),
    [anon_sym_BANG_EQ] = ACTIONS(443),
    [anon_sym_GT_EQ] = ACTIONS(443),
    [anon_sym_LT_EQ] = ACTIONS(443),
    [anon_sym_GT] = ACTIONS(445),
    [anon_sym_LT] = ACTIONS(445),
    [anon_sym_AMP_AMP] = ACTIONS(447),
    [anon_sym_PIPE_PIPE] = ACTIONS(337),
    [anon_sym_STAR] = ACTIONS(451),
    [anon_sym_SLASH] = ACTIONS(453),
    [anon_sym_GT_GT] = ACTIONS(453),
    [anon_sym_GT_GT_GT] = ACTIONS(451),
    [anon_sym_LT_LT] = ACTIONS(451),
    [anon_sym_AMP] = ACTIONS(455),
    [anon_sym_PIPE] = ACTIONS(339),
    [anon_sym_CARET] = ACTIONS(337),
    [sym_comment] = ACTIONS(29),
  },
  [160] = {
    [anon_sym_COMMA] = ACTIONS(360),
    [anon_sym_RBRACE] = ACTIONS(360),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_in] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(400),
    [anon_sym_PLUS] = ACTIONS(400),
    [anon_sym_EQ_EQ] = ACTIONS(402),
    [anon_sym_BANG_EQ] = ACTIONS(402),
    [anon_sym_GT_EQ] = ACTIONS(402),
    [anon_sym_LT_EQ] = ACTIONS(402),
    [anon_sym_GT] = ACTIONS(404),
    [anon_sym_LT] = ACTIONS(404),
    [anon_sym_AMP_AMP] = ACTIONS(406),
    [anon_sym_PIPE_PIPE] = ACTIONS(408),
    [anon_sym_STAR] = ACTIONS(410),
    [anon_sym_SLASH] = ACTIONS(412),
    [anon_sym_GT_GT] = ACTIONS(412),
    [anon_sym_GT_GT_GT] = ACTIONS(410),
    [anon_sym_LT_LT] = ACTIONS(410),
    [anon_sym_AMP] = ACTIONS(414),
    [anon_sym_PIPE] = ACTIONS(416),
    [anon_sym_CARET] = ACTIONS(408),
    [sym_comment] = ACTIONS(29),
  },
  [161] = {
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(360),
    [anon_sym_in] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(441),
    [anon_sym_PLUS] = ACTIONS(441),
    [anon_sym_EQ_EQ] = ACTIONS(443),
    [anon_sym_BANG_EQ] = ACTIONS(443),
    [anon_sym_GT_EQ] = ACTIONS(443),
    [anon_sym_LT_EQ] = ACTIONS(443),
    [anon_sym_GT] = ACTIONS(445),
    [anon_sym_LT] = ACTIONS(445),
    [anon_sym_AMP_AMP] = ACTIONS(447),
    [anon_sym_PIPE_PIPE] = ACTIONS(449),
    [anon_sym_STAR] = ACTIONS(451),
    [anon_sym_SLASH] = ACTIONS(453),
    [anon_sym_GT_GT] = ACTIONS(453),
    [anon_sym_GT_GT_GT] = ACTIONS(451),
    [anon_sym_LT_LT] = ACTIONS(451),
    [anon_sym_AMP] = ACTIONS(455),
    [anon_sym_PIPE] = ACTIONS(457),
    [anon_sym_CARET] = ACTIONS(449),
    [sym_comment] = ACTIONS(29),
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
  [17] = {.count = 1, .reusable = true}, SHIFT(7),
  [19] = {.count = 1, .reusable = false}, SHIFT(8),
  [21] = {.count = 1, .reusable = false}, SHIFT(9),
  [23] = {.count = 1, .reusable = true}, SHIFT(13),
  [25] = {.count = 1, .reusable = false}, SHIFT(10),
  [27] = {.count = 1, .reusable = false}, SHIFT(11),
  [29] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [31] = {.count = 1, .reusable = true}, SHIFT(15),
  [33] = {.count = 1, .reusable = true}, SHIFT(17),
  [35] = {.count = 1, .reusable = true}, SHIFT(18),
  [37] = {.count = 1, .reusable = false}, SHIFT(19),
  [39] = {.count = 1, .reusable = true}, SHIFT(20),
  [41] = {.count = 1, .reusable = false}, SHIFT(21),
  [43] = {.count = 1, .reusable = true}, SHIFT(22),
  [45] = {.count = 1, .reusable = false}, SHIFT(24),
  [47] = {.count = 1, .reusable = true}, SHIFT(25),
  [49] = {.count = 1, .reusable = false}, SHIFT(26),
  [51] = {.count = 1, .reusable = true}, SHIFT(27),
  [53] = {.count = 1, .reusable = true}, SHIFT(28),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_predefined_constant, 1),
  [57] = {.count = 1, .reusable = false}, REDUCE(sym_predefined_constant, 1),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym__expression, 1),
  [61] = {.count = 1, .reusable = false}, SHIFT(29),
  [63] = {.count = 1, .reusable = false}, REDUCE(sym__expression, 1),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_true, 1),
  [67] = {.count = 1, .reusable = false}, REDUCE(sym_true, 1),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_false, 1),
  [71] = {.count = 1, .reusable = false}, REDUCE(sym_false, 1),
  [73] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [75] = {.count = 1, .reusable = true}, SHIFT(30),
  [77] = {.count = 1, .reusable = true}, SHIFT(31),
  [79] = {.count = 1, .reusable = true}, SHIFT(32),
  [81] = {.count = 1, .reusable = true}, SHIFT(33),
  [83] = {.count = 1, .reusable = true}, SHIFT(34),
  [85] = {.count = 1, .reusable = false}, SHIFT(34),
  [87] = {.count = 1, .reusable = true}, SHIFT(35),
  [89] = {.count = 1, .reusable = true}, SHIFT(36),
  [91] = {.count = 1, .reusable = true}, SHIFT(37),
  [93] = {.count = 1, .reusable = false}, SHIFT(37),
  [95] = {.count = 1, .reusable = false}, SHIFT(35),
  [97] = {.count = 1, .reusable = false}, SHIFT(36),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [101] = {.count = 1, .reusable = true}, SHIFT(39),
  [103] = {.count = 1, .reusable = true}, SHIFT(40),
  [105] = {.count = 1, .reusable = true}, SHIFT(41),
  [107] = {.count = 1, .reusable = true}, SHIFT(43),
  [109] = {.count = 1, .reusable = true}, SHIFT(44),
  [111] = {.count = 1, .reusable = true}, SHIFT(45),
  [113] = {.count = 1, .reusable = false}, SHIFT(46),
  [115] = {.count = 1, .reusable = true}, SHIFT(47),
  [117] = {.count = 1, .reusable = true}, SHIFT(48),
  [119] = {.count = 1, .reusable = true}, SHIFT(49),
  [121] = {.count = 1, .reusable = false}, SHIFT(49),
  [123] = {.count = 1, .reusable = true}, SHIFT(50),
  [125] = {.count = 1, .reusable = true}, SHIFT(51),
  [127] = {.count = 1, .reusable = true}, SHIFT(52),
  [129] = {.count = 1, .reusable = false}, SHIFT(52),
  [131] = {.count = 1, .reusable = false}, SHIFT(50),
  [133] = {.count = 1, .reusable = false}, SHIFT(51),
  [135] = {.count = 1, .reusable = true}, SHIFT(53),
  [137] = {.count = 1, .reusable = true}, SHIFT(55),
  [139] = {.count = 1, .reusable = false}, SHIFT(56),
  [141] = {.count = 1, .reusable = true}, SHIFT(57),
  [143] = {.count = 1, .reusable = true}, SHIFT(58),
  [145] = {.count = 1, .reusable = true}, SHIFT(59),
  [147] = {.count = 1, .reusable = false}, SHIFT(59),
  [149] = {.count = 1, .reusable = true}, SHIFT(60),
  [151] = {.count = 1, .reusable = true}, SHIFT(61),
  [153] = {.count = 1, .reusable = true}, SHIFT(62),
  [155] = {.count = 1, .reusable = false}, SHIFT(62),
  [157] = {.count = 1, .reusable = false}, SHIFT(60),
  [159] = {.count = 1, .reusable = false}, SHIFT(61),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_unary_expression, 2),
  [163] = {.count = 1, .reusable = false}, REDUCE(sym_unary_expression, 2),
  [165] = {.count = 1, .reusable = true}, SHIFT(63),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym__statement, 2),
  [169] = {.count = 1, .reusable = false}, REDUCE(sym__statement, 2),
  [171] = {.count = 1, .reusable = false}, SHIFT(64),
  [173] = {.count = 1, .reusable = true}, SHIFT(65),
  [175] = {.count = 1, .reusable = false}, SHIFT(66),
  [177] = {.count = 1, .reusable = true}, SHIFT(67),
  [179] = {.count = 1, .reusable = true}, SHIFT(68),
  [181] = {.count = 1, .reusable = true}, SHIFT(69),
  [183] = {.count = 1, .reusable = true}, SHIFT(70),
  [185] = {.count = 1, .reusable = true}, SHIFT(71),
  [187] = {.count = 1, .reusable = true}, SHIFT(72),
  [189] = {.count = 1, .reusable = true}, SHIFT(73),
  [191] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [193] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [196] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [199] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [202] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [205] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [208] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [211] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [214] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [217] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [220] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [223] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [226] = {.count = 1, .reusable = true}, SHIFT(74),
  [228] = {.count = 1, .reusable = true}, REDUCE(sym_wire_declaration, 3),
  [230] = {.count = 1, .reusable = false}, REDUCE(sym_wire_declaration, 3),
  [232] = {.count = 1, .reusable = true}, SHIFT(76),
  [234] = {.count = 1, .reusable = true}, SHIFT(78),
  [236] = {.count = 1, .reusable = true}, SHIFT(81),
  [238] = {.count = 1, .reusable = true}, SHIFT(82),
  [240] = {.count = 1, .reusable = true}, SHIFT(83),
  [242] = {.count = 1, .reusable = true}, SHIFT(84),
  [244] = {.count = 1, .reusable = true}, SHIFT(85),
  [246] = {.count = 1, .reusable = true}, SHIFT(86),
  [248] = {.count = 1, .reusable = true}, SHIFT(87),
  [250] = {.count = 1, .reusable = true}, SHIFT(88),
  [252] = {.count = 1, .reusable = true}, REDUCE(sym_mux_expression, 3),
  [254] = {.count = 1, .reusable = false}, REDUCE(sym_mux_expression, 3),
  [256] = {.count = 2, .reusable = false}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(19),
  [259] = {.count = 2, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(5),
  [262] = {.count = 1, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 2),
  [264] = {.count = 2, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(6),
  [267] = {.count = 2, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(20),
  [270] = {.count = 2, .reusable = false}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(8),
  [273] = {.count = 2, .reusable = false}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(21),
  [276] = {.count = 2, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(22),
  [279] = {.count = 2, .reusable = false}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(10),
  [282] = {.count = 2, .reusable = false}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(11),
  [285] = {.count = 1, .reusable = true}, SHIFT(89),
  [287] = {.count = 1, .reusable = true}, SHIFT(90),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym_parenthesized_expression, 3),
  [291] = {.count = 1, .reusable = false}, REDUCE(sym_parenthesized_expression, 3),
  [293] = {.count = 1, .reusable = true}, SHIFT(91),
  [295] = {.count = 1, .reusable = true}, SHIFT(92),
  [297] = {.count = 1, .reusable = true}, SHIFT(93),
  [299] = {.count = 1, .reusable = true}, SHIFT(94),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 3),
  [303] = {.count = 1, .reusable = true}, SHIFT(95),
  [305] = {.count = 1, .reusable = false}, SHIFT(96),
  [307] = {.count = 1, .reusable = true}, SHIFT(97),
  [309] = {.count = 1, .reusable = true}, SHIFT(98),
  [311] = {.count = 1, .reusable = true}, SHIFT(99),
  [313] = {.count = 1, .reusable = false}, SHIFT(99),
  [315] = {.count = 1, .reusable = true}, SHIFT(100),
  [317] = {.count = 1, .reusable = true}, SHIFT(101),
  [319] = {.count = 1, .reusable = true}, SHIFT(102),
  [321] = {.count = 1, .reusable = false}, SHIFT(102),
  [323] = {.count = 1, .reusable = false}, SHIFT(100),
  [325] = {.count = 1, .reusable = false}, SHIFT(101),
  [327] = {.count = 1, .reusable = true}, SHIFT(103),
  [329] = {.count = 1, .reusable = false}, SHIFT(104),
  [331] = {.count = 1, .reusable = true}, SHIFT(105),
  [333] = {.count = 1, .reusable = false}, SHIFT(106),
  [335] = {.count = 1, .reusable = true}, SHIFT(107),
  [337] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [339] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_variable_declarator, 3),
  [343] = {.count = 1, .reusable = true}, REDUCE(aux_sym_wire_declaration_repeat1, 2),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym_wire_declaration, 4),
  [347] = {.count = 1, .reusable = false}, REDUCE(sym_wire_declaration, 4),
  [349] = {.count = 2, .reusable = true}, REDUCE(aux_sym_wire_declaration_repeat1, 2), SHIFT_REPEAT(41),
  [352] = {.count = 1, .reusable = true}, REDUCE(sym_register_declaration, 4),
  [354] = {.count = 1, .reusable = false}, REDUCE(sym_register_declaration, 4),
  [356] = {.count = 1, .reusable = true}, SHIFT(108),
  [358] = {.count = 1, .reusable = true}, SHIFT(109),
  [360] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 4),
  [362] = {.count = 1, .reusable = true}, SHIFT(111),
  [364] = {.count = 1, .reusable = true}, SHIFT(112),
  [366] = {.count = 1, .reusable = true}, SHIFT(113),
  [368] = {.count = 1, .reusable = true}, SHIFT(114),
  [370] = {.count = 1, .reusable = true}, SHIFT(115),
  [372] = {.count = 1, .reusable = false}, SHIFT(116),
  [374] = {.count = 1, .reusable = true}, SHIFT(117),
  [376] = {.count = 1, .reusable = false}, SHIFT(118),
  [378] = {.count = 1, .reusable = true}, SHIFT(119),
  [380] = {.count = 1, .reusable = true}, SHIFT(120),
  [382] = {.count = 1, .reusable = true}, SHIFT(121),
  [384] = {.count = 1, .reusable = true}, SHIFT(122),
  [386] = {.count = 1, .reusable = true}, SHIFT(123),
  [388] = {.count = 1, .reusable = true}, REDUCE(sym_in_expression, 4),
  [390] = {.count = 1, .reusable = false}, REDUCE(sym_in_expression, 4),
  [392] = {.count = 1, .reusable = true}, SHIFT(124),
  [394] = {.count = 1, .reusable = false}, SHIFT(125),
  [396] = {.count = 1, .reusable = true}, SHIFT(126),
  [398] = {.count = 1, .reusable = true}, SHIFT(127),
  [400] = {.count = 1, .reusable = true}, SHIFT(128),
  [402] = {.count = 1, .reusable = true}, SHIFT(129),
  [404] = {.count = 1, .reusable = false}, SHIFT(129),
  [406] = {.count = 1, .reusable = true}, SHIFT(130),
  [408] = {.count = 1, .reusable = true}, SHIFT(131),
  [410] = {.count = 1, .reusable = true}, SHIFT(132),
  [412] = {.count = 1, .reusable = false}, SHIFT(132),
  [414] = {.count = 1, .reusable = false}, SHIFT(130),
  [416] = {.count = 1, .reusable = false}, SHIFT(131),
  [418] = {.count = 1, .reusable = true}, SHIFT(134),
  [420] = {.count = 1, .reusable = true}, REDUCE(sym_register_declaration, 5),
  [422] = {.count = 1, .reusable = false}, REDUCE(sym_register_declaration, 5),
  [424] = {.count = 1, .reusable = true}, REDUCE(aux_sym_register_declaration_repeat1, 2),
  [426] = {.count = 2, .reusable = true}, REDUCE(aux_sym_register_declaration_repeat1, 2), SHIFT_REPEAT(15),
  [429] = {.count = 1, .reusable = false}, REDUCE(aux_sym_mux_expression_repeat1, 4),
  [431] = {.count = 1, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 4),
  [433] = {.count = 1, .reusable = true}, SHIFT(135),
  [435] = {.count = 1, .reusable = true}, SHIFT(136),
  [437] = {.count = 1, .reusable = false}, SHIFT(137),
  [439] = {.count = 1, .reusable = true}, SHIFT(138),
  [441] = {.count = 1, .reusable = true}, SHIFT(139),
  [443] = {.count = 1, .reusable = true}, SHIFT(140),
  [445] = {.count = 1, .reusable = false}, SHIFT(140),
  [447] = {.count = 1, .reusable = true}, SHIFT(141),
  [449] = {.count = 1, .reusable = true}, SHIFT(142),
  [451] = {.count = 1, .reusable = true}, SHIFT(143),
  [453] = {.count = 1, .reusable = false}, SHIFT(143),
  [455] = {.count = 1, .reusable = false}, SHIFT(141),
  [457] = {.count = 1, .reusable = false}, SHIFT(142),
  [459] = {.count = 1, .reusable = true}, SHIFT(144),
  [461] = {.count = 1, .reusable = true}, SHIFT(145),
  [463] = {.count = 1, .reusable = true}, SHIFT(146),
  [465] = {.count = 1, .reusable = true}, REDUCE(sym_in_expression, 5),
  [467] = {.count = 1, .reusable = false}, REDUCE(sym_in_expression, 5),
  [469] = {.count = 1, .reusable = true}, SHIFT(147),
  [471] = {.count = 1, .reusable = true}, SHIFT(148),
  [473] = {.count = 1, .reusable = true}, SHIFT(149),
  [475] = {.count = 1, .reusable = true}, SHIFT(150),
  [477] = {.count = 1, .reusable = true}, SHIFT(151),
  [479] = {.count = 1, .reusable = true}, SHIFT(153),
  [481] = {.count = 1, .reusable = true}, SHIFT(154),
  [483] = {.count = 1, .reusable = true}, SHIFT(155),
  [485] = {.count = 1, .reusable = true}, REDUCE(sym_slice_expression, 6),
  [487] = {.count = 1, .reusable = false}, REDUCE(sym_slice_expression, 6),
  [489] = {.count = 1, .reusable = true}, SHIFT(156),
  [491] = {.count = 1, .reusable = true}, SHIFT(157),
  [493] = {.count = 1, .reusable = true}, SHIFT(158),
  [495] = {.count = 1, .reusable = true}, SHIFT(159),
  [497] = {.count = 1, .reusable = true}, SHIFT(160),
  [499] = {.count = 1, .reusable = true}, REDUCE(aux_sym_in_expression_repeat1, 2),
  [501] = {.count = 1, .reusable = true}, REDUCE(sym_in_expression, 6),
  [503] = {.count = 1, .reusable = false}, REDUCE(sym_in_expression, 6),
  [505] = {.count = 2, .reusable = true}, REDUCE(aux_sym_in_expression_repeat1, 2), SHIFT_REPEAT(126),
  [508] = {.count = 1, .reusable = true}, REDUCE(sym__register_expression_statement, 4),
  [510] = {.count = 1, .reusable = true}, SHIFT(161),
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
