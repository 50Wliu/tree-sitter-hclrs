#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 162
#define SYMBOL_COUNT 116
#define ALIAS_COUNT 0
#define TOKEN_COUNT 93
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

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
  [ts_builtin_sym_end] = "end",
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
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(6);
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
        ADVANCE(12);
      if (lookahead == '0')
        ADVANCE(13);
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '<')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(17);
      if (lookahead == '>')
        ADVANCE(18);
      if (lookahead == 'A')
        ADVANCE(19);
      if (lookahead == 'C')
        ADVANCE(20);
      if (lookahead == 'E')
        ADVANCE(21);
      if (lookahead == 'F')
        ADVANCE(22);
      if (lookahead == 'G')
        ADVANCE(23);
      if (lookahead == 'H')
        ADVANCE(24);
      if (lookahead == 'I')
        ADVANCE(25);
      if (lookahead == 'J')
        ADVANCE(26);
      if (lookahead == 'L')
        ADVANCE(27);
      if (lookahead == 'M')
        ADVANCE(28);
      if (lookahead == 'N')
        ADVANCE(29);
      if (lookahead == 'O')
        ADVANCE(30);
      if (lookahead == 'P')
        ADVANCE(31);
      if (lookahead == 'R')
        ADVANCE(32);
      if (lookahead == 'S')
        ADVANCE(33);
      if (lookahead == 'T')
        ADVANCE(34);
      if (lookahead == 'X')
        ADVANCE(35);
      if (lookahead == '[')
        ADVANCE(36);
      if (lookahead == ']')
        ADVANCE(37);
      if (lookahead == '^')
        ADVANCE(38);
      if (lookahead == 'c')
        ADVANCE(39);
      if (lookahead == 'f')
        ADVANCE(40);
      if (lookahead == 'i')
        ADVANCE(41);
      if (lookahead == 'r')
        ADVANCE(42);
      if (lookahead == 't')
        ADVANCE(43);
      if (lookahead == 'w')
        ADVANCE(44);
      if (lookahead == '{')
        ADVANCE(45);
      if (lookahead == '|')
        ADVANCE(46);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '~')
        ADVANCE(48);
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
        ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '%' || '@' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '`')
        ADVANCE(50);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=')
        ADVANCE(51);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&')
        ADVANCE(52);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_RPAREN);
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
        ADVANCE(53);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(54);
      if (lookahead == '/')
        ADVANCE(3);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'B')
        ADVANCE(55);
      if (lookahead == 'E')
        ADVANCE(56);
      if (lookahead == 'X')
        ADVANCE(57);
      if (lookahead == 'b')
        ADVANCE(55);
      if (lookahead == 'e')
        ADVANCE(56);
      if (lookahead == 'x')
        ADVANCE(57);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(49);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(58);
      if (lookahead == '=')
        ADVANCE(59);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(60);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(61);
      if (lookahead == '>')
        ADVANCE(62);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D')
        ADVANCE(63);
      if (lookahead == 'L')
        ADVANCE(64);
      if (lookahead == 'N')
        ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A')
        ADVANCE(66);
      if (lookahead == 'M')
        ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q')
        ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A')
        ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E')
        ADVANCE(70);
      if (lookahead == 'T')
        ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A')
        ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R')
        ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X')
        ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E')
        ADVANCE(75);
      if (lookahead == 'T')
        ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R')
        ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E')
        ADVANCE(78);
      if (lookahead == 'O')
        ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P')
        ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O')
        ADVANCE(81);
      if (lookahead == 'U')
        ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E')
        ADVANCE(83);
      if (lookahead == 'M')
        ADVANCE(84);
      if (lookahead == 'R')
        ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T')
        ADVANCE(86);
      if (lookahead == 'U')
        ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R')
        ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O')
        ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
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
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|')
        ADVANCE(96);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E')
        ADVANCE(56);
      if (lookahead == 'e')
        ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*')
        ADVANCE(97);
      if (lookahead != 0)
        ADVANCE(98);
      END_STATE();
    case 55:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(99);
      END_STATE();
    case 56:
      if (lookahead == '+')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(101);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(102);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '>')
        ADVANCE(103);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D')
        ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W')
        ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D')
        ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L')
        ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O')
        ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_EQ2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L')
        ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_GE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_GT2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L')
        ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M')
        ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X')
        ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LT2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M')
        ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_NE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P')
        ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q')
        ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P')
        ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S')
        ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G')
        ADVANCE(118);
      if (lookahead == 'T')
        ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M')
        ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M')
        ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A')
        ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B')
        ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U')
        ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R')
        ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g')
        ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 97:
      if (lookahead == '*')
        ADVANCE(97);
      if (lookahead == '/')
        ADVANCE(131);
      if (lookahead != 0)
        ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == '*')
        ADVANCE(97);
      if (lookahead != 0)
        ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(99);
      END_STATE();
    case 100:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q')
        ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A')
        ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q')
        ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L')
        ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V')
        ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S')
        ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T')
        ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O')
        ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_JXX);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O')
        ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_NOP);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_OPQ);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q')
        ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H')
        ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_')
        ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_RET);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O')
        ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O')
        ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T')
        ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q')
        ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E')
        ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q')
        ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_ADDQ);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y')
        ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_ANDQ);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_CALL);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X')
        ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E')
        ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_HALT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V')
        ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V')
        ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_POPQ);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q')
        ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N')
        ADVANCE(161);
      if (lookahead == 'R')
        ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V')
        ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V')
        ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_')
        ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_SUBQ);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_XORQ);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_wire);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S')
        ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X')
        ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q')
        ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q')
        ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_PUSHQ);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O')
        ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(174);
      if (lookahead == '8')
        ADVANCE(175);
      if (lookahead == '9')
        ADVANCE(176);
      if (lookahead == 'A')
        ADVANCE(177);
      if (lookahead == 'B')
        ADVANCE(178);
      if (lookahead == 'C')
        ADVANCE(179);
      if (lookahead == 'D')
        ADVANCE(180);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q')
        ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q')
        ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A')
        ADVANCE(184);
      if (lookahead == 'B')
        ADVANCE(185);
      if (lookahead == 'H')
        ADVANCE(186);
      if (lookahead == 'I')
        ADVANCE(187);
      if (lookahead == 'P')
        ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_ALWAYS);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_CMOVXX);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_IRMOVQ);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_MRMOVQ);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N')
        ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0')
        ADVANCE(191);
      if (lookahead == '1')
        ADVANCE(192);
      if (lookahead == '2')
        ADVANCE(193);
      if (lookahead == '3')
        ADVANCE(194);
      if (lookahead == '4')
        ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_REG_R8);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_REG_R9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X')
        ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P')
        ADVANCE(197);
      if (lookahead == 'X')
        ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X')
        ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I')
        ADVANCE(200);
      if (lookahead == 'X')
        ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I')
        ADVANCE(202);
      if (lookahead == 'P')
        ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_RMMOVQ);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_RRMOVQ);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D')
        ADVANCE(204);
      if (lookahead == 'O')
        ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U')
        ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L')
        ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N')
        ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I')
        ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E')
        ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_REG_R10);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_REG_R11);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_REG_R12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_REG_R13);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_REG_R14);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_REG_RAX);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_REG_RBP);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_REG_RBX);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_REG_RCX);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_REG_RDI);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_REG_RDX);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_REG_RSI);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_REG_RSP);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R')
        ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K')
        ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B')
        ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T')
        ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S')
        ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P')
        ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_REG_NONE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_STAT_ADR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_STAT_AOK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_STAT_BUB);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_STAT_HLT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_STAT_INS);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_STAT_PIP);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_register);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279)
        ADVANCE(50);
      END_STATE();
    case 219:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(220);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(221);
      if (lookahead == '0')
        ADVANCE(13);
      if (lookahead == 'A')
        ADVANCE(19);
      if (lookahead == 'C')
        ADVANCE(20);
      if (lookahead == 'E')
        ADVANCE(21);
      if (lookahead == 'F')
        ADVANCE(22);
      if (lookahead == 'G')
        ADVANCE(23);
      if (lookahead == 'H')
        ADVANCE(24);
      if (lookahead == 'I')
        ADVANCE(25);
      if (lookahead == 'J')
        ADVANCE(26);
      if (lookahead == 'L')
        ADVANCE(27);
      if (lookahead == 'M')
        ADVANCE(28);
      if (lookahead == 'N')
        ADVANCE(29);
      if (lookahead == 'O')
        ADVANCE(30);
      if (lookahead == 'P')
        ADVANCE(31);
      if (lookahead == 'R')
        ADVANCE(32);
      if (lookahead == 'S')
        ADVANCE(33);
      if (lookahead == 'T')
        ADVANCE(34);
      if (lookahead == 'X')
        ADVANCE(35);
      if (lookahead == '[')
        ADVANCE(36);
      if (lookahead == 'c')
        ADVANCE(39);
      if (lookahead == 'f')
        ADVANCE(40);
      if (lookahead == 'r')
        ADVANCE(42);
      if (lookahead == 't')
        ADVANCE(43);
      if (lookahead == 'w')
        ADVANCE(44);
      if (lookahead == '~')
        ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(219);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '%' || '@' < lookahead) &&
          (lookahead < '\\' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead))
        ADVANCE(50);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 221:
      if (lookahead == '*')
        ADVANCE(98);
      if (lookahead == '/')
        ADVANCE(3);
      END_STATE();
    case 222:
      if (lookahead == '!')
        ADVANCE(223);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(4);
      if (lookahead == ')')
        ADVANCE(6);
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
        ADVANCE(224);
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '<')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(17);
      if (lookahead == '>')
        ADVANCE(18);
      if (lookahead == '[')
        ADVANCE(36);
      if (lookahead == ']')
        ADVANCE(37);
      if (lookahead == '^')
        ADVANCE(38);
      if (lookahead == 'i')
        ADVANCE(225);
      if (lookahead == '|')
        ADVANCE(46);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(222);
      END_STATE();
    case 223:
      if (lookahead == '=')
        ADVANCE(51);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(98);
      if (lookahead == '/')
        ADVANCE(3);
      END_STATE();
    case 225:
      if (lookahead == 'n')
        ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 227:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(228);
      END_STATE();
    case 228:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_register_name);
      END_STATE();
    case 230:
      if (lookahead == '!')
        ADVANCE(220);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(221);
      if (lookahead == '0')
        ADVANCE(13);
      if (lookahead == 'A')
        ADVANCE(19);
      if (lookahead == 'C')
        ADVANCE(20);
      if (lookahead == 'E')
        ADVANCE(21);
      if (lookahead == 'F')
        ADVANCE(22);
      if (lookahead == 'G')
        ADVANCE(23);
      if (lookahead == 'H')
        ADVANCE(24);
      if (lookahead == 'I')
        ADVANCE(25);
      if (lookahead == 'J')
        ADVANCE(26);
      if (lookahead == 'L')
        ADVANCE(27);
      if (lookahead == 'M')
        ADVANCE(28);
      if (lookahead == 'N')
        ADVANCE(29);
      if (lookahead == 'O')
        ADVANCE(30);
      if (lookahead == 'P')
        ADVANCE(31);
      if (lookahead == 'R')
        ADVANCE(32);
      if (lookahead == 'S')
        ADVANCE(33);
      if (lookahead == 'T')
        ADVANCE(34);
      if (lookahead == 'X')
        ADVANCE(35);
      if (lookahead == '[')
        ADVANCE(36);
      if (lookahead == ']')
        ADVANCE(37);
      if (lookahead == 'c')
        ADVANCE(39);
      if (lookahead == 'f')
        ADVANCE(40);
      if (lookahead == 't')
        ADVANCE(43);
      if (lookahead == '~')
        ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(230);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '%' || '@' < lookahead) &&
          (lookahead < '\\' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead))
        ADVANCE(50);
      END_STATE();
    case 231:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(221);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(231);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          (lookahead < '%' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead))
        ADVANCE(50);
      END_STATE();
    case 232:
      if (lookahead == '!')
        ADVANCE(223);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(224);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '<')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(17);
      if (lookahead == '>')
        ADVANCE(18);
      if (lookahead == '[')
        ADVANCE(36);
      if (lookahead == '^')
        ADVANCE(38);
      if (lookahead == 'i')
        ADVANCE(225);
      if (lookahead == '|')
        ADVANCE(46);
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
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(221);
      if (lookahead == '{')
        ADVANCE(45);
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
        ADVANCE(223);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(224);
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == '<')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(17);
      if (lookahead == '>')
        ADVANCE(18);
      if (lookahead == '[')
        ADVANCE(36);
      if (lookahead == '^')
        ADVANCE(38);
      if (lookahead == 'i')
        ADVANCE(225);
      if (lookahead == '|')
        ADVANCE(46);
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
      if (lookahead == '!')
        ADVANCE(223);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(4);
      if (lookahead == ')')
        ADVANCE(6);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(224);
      if (lookahead == '<')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(17);
      if (lookahead == '>')
        ADVANCE(18);
      if (lookahead == '[')
        ADVANCE(36);
      if (lookahead == '^')
        ADVANCE(38);
      if (lookahead == 'i')
        ADVANCE(225);
      if (lookahead == '|')
        ADVANCE(46);
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
        ADVANCE(220);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(221);
      if (lookahead == '0')
        ADVANCE(13);
      if (lookahead == 'A')
        ADVANCE(19);
      if (lookahead == 'C')
        ADVANCE(20);
      if (lookahead == 'E')
        ADVANCE(21);
      if (lookahead == 'F')
        ADVANCE(22);
      if (lookahead == 'G')
        ADVANCE(23);
      if (lookahead == 'H')
        ADVANCE(24);
      if (lookahead == 'I')
        ADVANCE(25);
      if (lookahead == 'J')
        ADVANCE(26);
      if (lookahead == 'L')
        ADVANCE(27);
      if (lookahead == 'M')
        ADVANCE(28);
      if (lookahead == 'N')
        ADVANCE(29);
      if (lookahead == 'O')
        ADVANCE(30);
      if (lookahead == 'P')
        ADVANCE(31);
      if (lookahead == 'R')
        ADVANCE(32);
      if (lookahead == 'S')
        ADVANCE(33);
      if (lookahead == 'T')
        ADVANCE(34);
      if (lookahead == 'X')
        ADVANCE(35);
      if (lookahead == '[')
        ADVANCE(36);
      if (lookahead == 'c')
        ADVANCE(39);
      if (lookahead == 'f')
        ADVANCE(40);
      if (lookahead == 't')
        ADVANCE(43);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '~')
        ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(236);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '%' || '@' < lookahead) &&
          (lookahead < '\\' || '^' < lookahead) &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '|')
        ADVANCE(50);
      END_STATE();
    case 237:
      if (lookahead == '!')
        ADVANCE(223);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(224);
      if (lookahead == '<')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(17);
      if (lookahead == '>')
        ADVANCE(18);
      if (lookahead == '[')
        ADVANCE(36);
      if (lookahead == '^')
        ADVANCE(38);
      if (lookahead == 'i')
        ADVANCE(225);
      if (lookahead == '|')
        ADVANCE(46);
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
        ADVANCE(223);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(224);
      if (lookahead == '<')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(17);
      if (lookahead == '>')
        ADVANCE(18);
      if (lookahead == '[')
        ADVANCE(36);
      if (lookahead == '^')
        ADVANCE(38);
      if (lookahead == 'i')
        ADVANCE(225);
      if (lookahead == '|')
        ADVANCE(46);
      if (lookahead == '}')
        ADVANCE(47);
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
        ADVANCE(223);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(224);
      if (lookahead == '<')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(17);
      if (lookahead == '>')
        ADVANCE(18);
      if (lookahead == '[')
        ADVANCE(36);
      if (lookahead == ']')
        ADVANCE(37);
      if (lookahead == '^')
        ADVANCE(38);
      if (lookahead == 'i')
        ADVANCE(225);
      if (lookahead == '|')
        ADVANCE(46);
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
  [1] = {.lex_state = 219},
  [2] = {.lex_state = 222},
  [3] = {.lex_state = 222},
  [4] = {.lex_state = 227},
  [5] = {.lex_state = 230},
  [6] = {.lex_state = 231},
  [7] = {.lex_state = 222},
  [8] = {.lex_state = 230},
  [9] = {.lex_state = 230},
  [10] = {.lex_state = 231},
  [11] = {.lex_state = 232},
  [12] = {.lex_state = 232},
  [13] = {.lex_state = 219},
  [14] = {.lex_state = 219},
  [15] = {.lex_state = 233},
  [16] = {.lex_state = 222},
  [17] = {.lex_state = 222},
  [18] = {.lex_state = 230},
  [19] = {.lex_state = 231},
  [20] = {.lex_state = 234},
  [21] = {.lex_state = 230},
  [22] = {.lex_state = 234},
  [23] = {.lex_state = 230},
  [24] = {.lex_state = 231},
  [25] = {.lex_state = 235},
  [26] = {.lex_state = 235},
  [27] = {.lex_state = 234},
  [28] = {.lex_state = 232},
  [29] = {.lex_state = 230},
  [30] = {.lex_state = 230},
  [31] = {.lex_state = 233},
  [32] = {.lex_state = 230},
  [33] = {.lex_state = 219},
  [34] = {.lex_state = 230},
  [35] = {.lex_state = 230},
  [36] = {.lex_state = 230},
  [37] = {.lex_state = 230},
  [38] = {.lex_state = 219},
  [39] = {.lex_state = 231},
  [40] = {.lex_state = 230},
  [41] = {.lex_state = 222},
  [42] = {.lex_state = 230},
  [43] = {.lex_state = 222},
  [44] = {.lex_state = 230},
  [45] = {.lex_state = 230},
  [46] = {.lex_state = 230},
  [47] = {.lex_state = 230},
  [48] = {.lex_state = 230},
  [49] = {.lex_state = 230},
  [50] = {.lex_state = 230},
  [51] = {.lex_state = 222},
  [52] = {.lex_state = 230},
  [53] = {.lex_state = 230},
  [54] = {.lex_state = 230},
  [55] = {.lex_state = 230},
  [56] = {.lex_state = 230},
  [57] = {.lex_state = 222},
  [58] = {.lex_state = 230},
  [59] = {.lex_state = 219},
  [60] = {.lex_state = 219},
  [61] = {.lex_state = 231},
  [62] = {.lex_state = 232},
  [63] = {.lex_state = 232},
  [64] = {.lex_state = 232},
  [65] = {.lex_state = 236},
  [66] = {.lex_state = 232},
  [67] = {.lex_state = 222},
  [68] = {.lex_state = 232},
  [69] = {.lex_state = 232},
  [70] = {.lex_state = 230},
  [71] = {.lex_state = 231},
  [72] = {.lex_state = 237},
  [73] = {.lex_state = 237},
  [74] = {.lex_state = 219},
  [75] = {.lex_state = 222},
  [76] = {.lex_state = 231},
  [77] = {.lex_state = 232},
  [78] = {.lex_state = 230},
  [79] = {.lex_state = 234},
  [80] = {.lex_state = 234},
  [81] = {.lex_state = 234},
  [82] = {.lex_state = 232},
  [83] = {.lex_state = 234},
  [84] = {.lex_state = 234},
  [85] = {.lex_state = 230},
  [86] = {.lex_state = 235},
  [87] = {.lex_state = 235},
  [88] = {.lex_state = 235},
  [89] = {.lex_state = 235},
  [90] = {.lex_state = 235},
  [91] = {.lex_state = 232},
  [92] = {.lex_state = 232},
  [93] = {.lex_state = 219},
  [94] = {.lex_state = 232},
  [95] = {.lex_state = 230},
  [96] = {.lex_state = 231},
  [97] = {.lex_state = 222},
  [98] = {.lex_state = 238},
  [99] = {.lex_state = 238},
  [100] = {.lex_state = 222},
  [101] = {.lex_state = 230},
  [102] = {.lex_state = 230},
  [103] = {.lex_state = 230},
  [104] = {.lex_state = 230},
  [105] = {.lex_state = 230},
  [106] = {.lex_state = 230},
  [107] = {.lex_state = 230},
  [108] = {.lex_state = 230},
  [109] = {.lex_state = 219},
  [110] = {.lex_state = 231},
  [111] = {.lex_state = 234},
  [112] = {.lex_state = 230},
  [113] = {.lex_state = 235},
  [114] = {.lex_state = 222},
  [115] = {.lex_state = 230},
  [116] = {.lex_state = 230},
  [117] = {.lex_state = 230},
  [118] = {.lex_state = 230},
  [119] = {.lex_state = 230},
  [120] = {.lex_state = 230},
  [121] = {.lex_state = 230},
  [122] = {.lex_state = 222},
  [123] = {.lex_state = 238},
  [124] = {.lex_state = 230},
  [125] = {.lex_state = 237},
  [126] = {.lex_state = 237},
  [127] = {.lex_state = 237},
  [128] = {.lex_state = 237},
  [129] = {.lex_state = 237},
  [130] = {.lex_state = 230},
  [131] = {.lex_state = 231},
  [132] = {.lex_state = 239},
  [133] = {.lex_state = 239},
  [134] = {.lex_state = 232},
  [135] = {.lex_state = 230},
  [136] = {.lex_state = 238},
  [137] = {.lex_state = 238},
  [138] = {.lex_state = 238},
  [139] = {.lex_state = 238},
  [140] = {.lex_state = 238},
  [141] = {.lex_state = 238},
  [142] = {.lex_state = 222},
  [143] = {.lex_state = 238},
  [144] = {.lex_state = 237},
  [145] = {.lex_state = 222},
  [146] = {.lex_state = 230},
  [147] = {.lex_state = 230},
  [148] = {.lex_state = 230},
  [149] = {.lex_state = 230},
  [150] = {.lex_state = 230},
  [151] = {.lex_state = 222},
  [152] = {.lex_state = 230},
  [153] = {.lex_state = 231},
  [154] = {.lex_state = 238},
  [155] = {.lex_state = 230},
  [156] = {.lex_state = 239},
  [157] = {.lex_state = 239},
  [158] = {.lex_state = 239},
  [159] = {.lex_state = 239},
  [160] = {.lex_state = 239},
  [161] = {.lex_state = 239},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_REG_RSP] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_HALT] = ACTIONS(1),
    [anon_sym_RRMOVQ] = ACTIONS(1),
    [anon_sym_REG_R12] = ACTIONS(1),
    [anon_sym_NE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_GT2] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_ALWAYS] = ACTIONS(1),
    [anon_sym_register] = ACTIONS(1),
    [sym_pound_comment] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_TRUE] = ACTIONS(1),
    [anon_sym_REG_RBP] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_NOP] = ACTIONS(1),
    [anon_sym_IRMOVQ] = ACTIONS(1),
    [anon_sym_REG_R13] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_ADDQ] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_OPQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [sym_slash_comment] = ACTIONS(1),
    [anon_sym_GT_GT_GT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_STAT_INS] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_STAT_BUB] = ACTIONS(1),
    [anon_sym_RMMOVQ] = ACTIONS(1),
    [anon_sym_REG_RSI] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_SUBQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_JXX] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_FALSE] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_STAT_PIP] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_STAT_AOK] = ACTIONS(1),
    [anon_sym_MRMOVQ] = ACTIONS(1),
    [anon_sym_REG_RDI] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LE] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_CALL] = ACTIONS(1),
    [anon_sym_PUSHQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_ANDQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_REG_RAX] = ACTIONS(1),
    [anon_sym_REG_RDX] = ACTIONS(1),
    [anon_sym_STAT_HLT] = ACTIONS(1),
    [anon_sym_REG_R14] = ACTIONS(1),
    [anon_sym_REG_R8] = ACTIONS(1),
    [anon_sym_REG_R10] = ACTIONS(1),
    [anon_sym_LT2] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_RET] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_POPQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_XORQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_REG_RCX] = ACTIONS(1),
    [anon_sym_REG_RBX] = ACTIONS(1),
    [anon_sym_STAT_ADR] = ACTIONS(1),
    [anon_sym_REG_NONE] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_REG_R9] = ACTIONS(1),
    [anon_sym_REG_R11] = ACTIONS(1),
    [anon_sym_EQ2] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_GE] = ACTIONS(1),
    [anon_sym_wire] = ACTIONS(1),
    [anon_sym_CMOVXX] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_wire_declaration] = STATE(13),
    [sym_mux_expression] = STATE(12),
    [sym_parenthesized_expression] = STATE(12),
    [sym_predefined_constant] = STATE(12),
    [sym_true] = STATE(12),
    [sym__statement] = STATE(13),
    [sym__declaration] = STATE(13),
    [sym__expression] = STATE(12),
    [sym_assignment_expression] = STATE(12),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(13),
    [sym_source_file] = STATE(14),
    [sym_register_declaration] = STATE(13),
    [sym_in_expression] = STATE(12),
    [sym_slice_expression] = STATE(12),
    [sym_false] = STATE(12),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [anon_sym_register] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_wire] = ACTIONS(25),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(27),
  },
  [2] = {
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_CARET] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(29),
    [anon_sym_LT_LT] = ACTIONS(29),
    [anon_sym_AMP_AMP] = ACTIONS(29),
    [anon_sym_GT_GT_GT] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_COLON] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(31),
    [anon_sym_GT_GT] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(29),
    [anon_sym_PIPE_PIPE] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(31),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
  },
  [3] = {
    [anon_sym_EQ_EQ] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(33),
    [anon_sym_CARET] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(33),
    [anon_sym_LT_LT] = ACTIONS(33),
    [anon_sym_AMP_AMP] = ACTIONS(33),
    [anon_sym_GT_GT_GT] = ACTIONS(33),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_COLON] = ACTIONS(33),
    [anon_sym_GT_EQ] = ACTIONS(33),
    [anon_sym_RBRACK] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(33),
    [anon_sym_PIPE] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_GT_GT] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_BANG_EQ] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(33),
    [anon_sym_PIPE_PIPE] = ACTIONS(33),
    [anon_sym_GT] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(35),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LT_EQ] = ACTIONS(33),
  },
  [4] = {
    [sym_comment] = ACTIONS(3),
    [sym_register_name] = ACTIONS(37),
  },
  [5] = {
    [sym_binary_expression] = STATE(16),
    [sym_mux_expression] = STATE(16),
    [sym_parenthesized_expression] = STATE(16),
    [sym_predefined_constant] = STATE(16),
    [sym_true] = STATE(16),
    [sym_in_expression] = STATE(16),
    [sym_slice_expression] = STATE(16),
    [sym_false] = STATE(16),
    [sym__expression] = STATE(16),
    [sym_assignment_expression] = STATE(16),
    [sym_unary_expression] = STATE(16),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(39),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(27),
  },
  [6] = {
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(41),
  },
  [7] = {
    [anon_sym_EQ_EQ] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(43),
    [anon_sym_CARET] = ACTIONS(43),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_LT_LT] = ACTIONS(43),
    [anon_sym_AMP_AMP] = ACTIONS(43),
    [anon_sym_GT_GT_GT] = ACTIONS(43),
    [anon_sym_STAR] = ACTIONS(43),
    [anon_sym_COLON] = ACTIONS(43),
    [anon_sym_GT_EQ] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(43),
    [anon_sym_PIPE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(45),
    [anon_sym_GT_GT] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_BANG_EQ] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_AMP] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(43),
    [anon_sym_PIPE_PIPE] = ACTIONS(43),
    [anon_sym_GT] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_LT_EQ] = ACTIONS(43),
  },
  [8] = {
    [sym_binary_expression] = STATE(22),
    [sym_mux_expression] = STATE(22),
    [sym_parenthesized_expression] = STATE(22),
    [sym_predefined_constant] = STATE(22),
    [sym_true] = STATE(22),
    [aux_sym_mux_expression_repeat1] = STATE(21),
    [sym_in_expression] = STATE(22),
    [sym_slice_expression] = STATE(22),
    [sym_false] = STATE(22),
    [sym__expression] = STATE(22),
    [sym_assignment_expression] = STATE(22),
    [sym_unary_expression] = STATE(22),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(49),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(51),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(53),
  },
  [9] = {
    [sym_binary_expression] = STATE(26),
    [sym_mux_expression] = STATE(26),
    [sym_parenthesized_expression] = STATE(26),
    [sym_predefined_constant] = STATE(26),
    [sym_true] = STATE(26),
    [sym_in_expression] = STATE(26),
    [sym_slice_expression] = STATE(26),
    [sym_false] = STATE(26),
    [sym__expression] = STATE(26),
    [sym_assignment_expression] = STATE(26),
    [sym_unary_expression] = STATE(26),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(55),
    [anon_sym_BANG] = ACTIONS(57),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(59),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(61),
  },
  [10] = {
    [sym_variable_declarator] = STATE(28),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(63),
  },
  [11] = {
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(65),
    [anon_sym_CARET] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_LT_LT] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_GT_GT_GT] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_GT_EQ] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_LT] = ACTIONS(69),
    [anon_sym_GT_GT] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(65),
    [anon_sym_AMP] = ACTIONS(69),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(65),
  },
  [12] = {
    [anon_sym_EQ_EQ] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(73),
    [anon_sym_CARET] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(77),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_AMP_AMP] = ACTIONS(81),
    [anon_sym_GT_GT_GT] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_GT_EQ] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT_GT] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_BANG_EQ] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(93),
    [anon_sym_PIPE_PIPE] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_LT_EQ] = ACTIONS(71),
  },
  [13] = {
    [sym_wire_declaration] = STATE(38),
    [sym_mux_expression] = STATE(12),
    [sym_parenthesized_expression] = STATE(12),
    [sym_predefined_constant] = STATE(12),
    [sym_true] = STATE(12),
    [sym__statement] = STATE(38),
    [sym__declaration] = STATE(38),
    [sym__expression] = STATE(12),
    [sym_assignment_expression] = STATE(12),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(38),
    [sym_register_declaration] = STATE(38),
    [sym_in_expression] = STATE(12),
    [sym_slice_expression] = STATE(12),
    [sym_false] = STATE(12),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [anon_sym_register] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(95),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_wire] = ACTIONS(25),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(27),
  },
  [14] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(97),
  },
  [15] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(99),
  },
  [16] = {
    [anon_sym_EQ_EQ] = ACTIONS(101),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(101),
    [anon_sym_CARET] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(101),
    [anon_sym_LT_LT] = ACTIONS(101),
    [anon_sym_AMP_AMP] = ACTIONS(101),
    [anon_sym_GT_GT_GT] = ACTIONS(101),
    [anon_sym_STAR] = ACTIONS(101),
    [anon_sym_COLON] = ACTIONS(101),
    [anon_sym_GT_EQ] = ACTIONS(101),
    [anon_sym_RBRACK] = ACTIONS(101),
    [anon_sym_RPAREN] = ACTIONS(101),
    [anon_sym_PIPE] = ACTIONS(103),
    [anon_sym_COMMA] = ACTIONS(101),
    [anon_sym_LT] = ACTIONS(103),
    [anon_sym_GT_GT] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(101),
    [anon_sym_BANG_EQ] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_DOT_DOT] = ACTIONS(101),
    [anon_sym_AMP] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(101),
    [anon_sym_PIPE_PIPE] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(103),
    [anon_sym_SLASH] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(101),
    [anon_sym_LT_EQ] = ACTIONS(101),
  },
  [17] = {
    [anon_sym_EQ] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym_binary_expression] = STATE(16),
    [sym_mux_expression] = STATE(16),
    [sym_parenthesized_expression] = STATE(16),
    [sym_predefined_constant] = STATE(16),
    [sym_true] = STATE(16),
    [sym_in_expression] = STATE(16),
    [sym_slice_expression] = STATE(16),
    [sym_false] = STATE(16),
    [sym__expression] = STATE(16),
    [sym_assignment_expression] = STATE(16),
    [sym_unary_expression] = STATE(16),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(39),
    [anon_sym_BANG] = ACTIONS(49),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(51),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(53),
  },
  [19] = {
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(107),
  },
  [20] = {
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_LT_LT] = ACTIONS(65),
    [anon_sym_CARET] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_GT_GT_GT] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_GT_EQ] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_LT] = ACTIONS(69),
    [anon_sym_GT_GT] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(65),
    [anon_sym_AMP] = ACTIONS(69),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(65),
  },
  [21] = {
    [sym_binary_expression] = STATE(22),
    [sym_mux_expression] = STATE(22),
    [sym_parenthesized_expression] = STATE(22),
    [sym_predefined_constant] = STATE(22),
    [sym_true] = STATE(22),
    [aux_sym_mux_expression_repeat1] = STATE(44),
    [sym_in_expression] = STATE(22),
    [sym_slice_expression] = STATE(22),
    [sym_false] = STATE(22),
    [sym__expression] = STATE(22),
    [sym_assignment_expression] = STATE(22),
    [sym_unary_expression] = STATE(22),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(49),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(51),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(53),
  },
  [22] = {
    [anon_sym_EQ_EQ] = ACTIONS(113),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(73),
    [anon_sym_CARET] = ACTIONS(115),
    [anon_sym_LT_LT] = ACTIONS(117),
    [anon_sym_COLON] = ACTIONS(119),
    [anon_sym_AMP_AMP] = ACTIONS(121),
    [anon_sym_GT_GT_GT] = ACTIONS(117),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_GT_EQ] = ACTIONS(113),
    [anon_sym_PIPE] = ACTIONS(123),
    [anon_sym_LT] = ACTIONS(125),
    [anon_sym_GT_GT] = ACTIONS(127),
    [anon_sym_PLUS] = ACTIONS(129),
    [anon_sym_BANG_EQ] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(131),
    [anon_sym_PIPE_PIPE] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(125),
    [anon_sym_SLASH] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(129),
    [anon_sym_LT_EQ] = ACTIONS(113),
  },
  [23] = {
    [sym_binary_expression] = STATE(16),
    [sym_mux_expression] = STATE(16),
    [sym_parenthesized_expression] = STATE(16),
    [sym_predefined_constant] = STATE(16),
    [sym_true] = STATE(16),
    [sym_in_expression] = STATE(16),
    [sym_slice_expression] = STATE(16),
    [sym_false] = STATE(16),
    [sym__expression] = STATE(16),
    [sym_assignment_expression] = STATE(16),
    [sym_unary_expression] = STATE(16),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(39),
    [anon_sym_BANG] = ACTIONS(57),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(59),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(61),
  },
  [24] = {
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(133),
  },
  [25] = {
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(65),
    [anon_sym_CARET] = ACTIONS(65),
    [anon_sym_LT_LT] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_GT_GT_GT] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_GT_EQ] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(135),
    [anon_sym_RPAREN] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_LT] = ACTIONS(69),
    [anon_sym_GT_GT] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(65),
    [anon_sym_AMP] = ACTIONS(69),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(65),
  },
  [26] = {
    [anon_sym_EQ_EQ] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(73),
    [anon_sym_CARET] = ACTIONS(139),
    [anon_sym_LT_LT] = ACTIONS(141),
    [anon_sym_AMP_AMP] = ACTIONS(143),
    [anon_sym_GT_GT_GT] = ACTIONS(141),
    [anon_sym_STAR] = ACTIONS(141),
    [anon_sym_GT_EQ] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(145),
    [anon_sym_PIPE] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(149),
    [anon_sym_GT_GT] = ACTIONS(151),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_BANG_EQ] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(155),
    [anon_sym_PIPE_PIPE] = ACTIONS(139),
    [anon_sym_GT] = ACTIONS(149),
    [anon_sym_SLASH] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_LT_EQ] = ACTIONS(137),
  },
  [27] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(157),
  },
  [28] = {
    [aux_sym_wire_declaration_repeat1] = STATE(62),
    [anon_sym_SEMI] = ACTIONS(159),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(161),
  },
  [29] = {
    [sym_binary_expression] = STATE(63),
    [sym_mux_expression] = STATE(63),
    [sym_parenthesized_expression] = STATE(63),
    [sym_predefined_constant] = STATE(63),
    [sym_true] = STATE(63),
    [sym_in_expression] = STATE(63),
    [sym_slice_expression] = STATE(63),
    [sym_false] = STATE(63),
    [sym__expression] = STATE(63),
    [sym_assignment_expression] = STATE(63),
    [sym_unary_expression] = STATE(63),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(163),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(27),
  },
  [30] = {
    [sym_binary_expression] = STATE(64),
    [sym_mux_expression] = STATE(64),
    [sym_parenthesized_expression] = STATE(64),
    [sym_predefined_constant] = STATE(64),
    [sym_true] = STATE(64),
    [sym_in_expression] = STATE(64),
    [sym_slice_expression] = STATE(64),
    [sym_false] = STATE(64),
    [sym__expression] = STATE(64),
    [sym_assignment_expression] = STATE(64),
    [sym_unary_expression] = STATE(64),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(165),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(27),
  },
  [31] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(167),
  },
  [32] = {
    [sym_binary_expression] = STATE(66),
    [sym_mux_expression] = STATE(66),
    [sym_parenthesized_expression] = STATE(66),
    [sym_predefined_constant] = STATE(66),
    [sym_true] = STATE(66),
    [sym_in_expression] = STATE(66),
    [sym_slice_expression] = STATE(66),
    [sym_false] = STATE(66),
    [sym__expression] = STATE(66),
    [sym_assignment_expression] = STATE(66),
    [sym_unary_expression] = STATE(66),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(169),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(27),
  },
  [33] = {
    [anon_sym_true] = ACTIONS(171),
    [anon_sym_REG_RSP] = ACTIONS(171),
    [anon_sym_HALT] = ACTIONS(171),
    [anon_sym_RRMOVQ] = ACTIONS(171),
    [anon_sym_REG_R12] = ACTIONS(171),
    [anon_sym_NE] = ACTIONS(171),
    [anon_sym_GT2] = ACTIONS(171),
    [anon_sym_ALWAYS] = ACTIONS(171),
    [anon_sym_register] = ACTIONS(171),
    [sym_number] = ACTIONS(173),
    [anon_sym_BANG] = ACTIONS(173),
    [anon_sym_TRUE] = ACTIONS(171),
    [anon_sym_REG_RBP] = ACTIONS(171),
    [anon_sym_NOP] = ACTIONS(171),
    [anon_sym_IRMOVQ] = ACTIONS(171),
    [anon_sym_REG_R13] = ACTIONS(171),
    [anon_sym_const] = ACTIONS(171),
    [anon_sym_ADDQ] = ACTIONS(171),
    [anon_sym_OPQ] = ACTIONS(171),
    [anon_sym_TILDE] = ACTIONS(173),
    [anon_sym_false] = ACTIONS(171),
    [anon_sym_STAT_INS] = ACTIONS(171),
    [anon_sym_STAT_BUB] = ACTIONS(171),
    [anon_sym_RMMOVQ] = ACTIONS(171),
    [anon_sym_REG_RSI] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(173),
    [anon_sym_SUBQ] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(173),
    [anon_sym_JXX] = ACTIONS(171),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_FALSE] = ACTIONS(171),
    [anon_sym_STAT_PIP] = ACTIONS(171),
    [anon_sym_STAT_AOK] = ACTIONS(171),
    [anon_sym_MRMOVQ] = ACTIONS(171),
    [anon_sym_REG_RDI] = ACTIONS(171),
    [anon_sym_LE] = ACTIONS(171),
    [anon_sym_CALL] = ACTIONS(171),
    [anon_sym_PUSHQ] = ACTIONS(171),
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_ANDQ] = ACTIONS(171),
    [anon_sym_REG_RAX] = ACTIONS(171),
    [anon_sym_REG_RDX] = ACTIONS(171),
    [anon_sym_STAT_HLT] = ACTIONS(171),
    [anon_sym_REG_R14] = ACTIONS(171),
    [anon_sym_REG_R8] = ACTIONS(171),
    [anon_sym_REG_R10] = ACTIONS(171),
    [anon_sym_LT2] = ACTIONS(171),
    [anon_sym_RET] = ACTIONS(171),
    [anon_sym_POPQ] = ACTIONS(171),
    [anon_sym_XORQ] = ACTIONS(171),
    [anon_sym_REG_RCX] = ACTIONS(171),
    [anon_sym_REG_RBX] = ACTIONS(171),
    [anon_sym_STAT_ADR] = ACTIONS(171),
    [anon_sym_REG_NONE] = ACTIONS(171),
    [ts_builtin_sym_end] = ACTIONS(173),
    [anon_sym_REG_R9] = ACTIONS(171),
    [anon_sym_REG_R11] = ACTIONS(171),
    [anon_sym_EQ2] = ACTIONS(171),
    [anon_sym_GE] = ACTIONS(171),
    [anon_sym_wire] = ACTIONS(171),
    [anon_sym_CMOVXX] = ACTIONS(171),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(171),
  },
  [34] = {
    [sym_binary_expression] = STATE(67),
    [sym_mux_expression] = STATE(67),
    [sym_parenthesized_expression] = STATE(67),
    [sym_predefined_constant] = STATE(67),
    [sym_true] = STATE(67),
    [sym_in_expression] = STATE(67),
    [sym_slice_expression] = STATE(67),
    [sym_false] = STATE(67),
    [sym__expression] = STATE(67),
    [sym_assignment_expression] = STATE(67),
    [sym_unary_expression] = STATE(67),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(175),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(27),
  },
  [35] = {
    [sym_binary_expression] = STATE(68),
    [sym_mux_expression] = STATE(68),
    [sym_parenthesized_expression] = STATE(68),
    [sym_predefined_constant] = STATE(68),
    [sym_true] = STATE(68),
    [sym_in_expression] = STATE(68),
    [sym_slice_expression] = STATE(68),
    [sym_false] = STATE(68),
    [sym__expression] = STATE(68),
    [sym_assignment_expression] = STATE(68),
    [sym_unary_expression] = STATE(68),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(177),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(27),
  },
  [36] = {
    [sym_binary_expression] = STATE(69),
    [sym_mux_expression] = STATE(69),
    [sym_parenthesized_expression] = STATE(69),
    [sym_predefined_constant] = STATE(69),
    [sym_true] = STATE(69),
    [sym_in_expression] = STATE(69),
    [sym_slice_expression] = STATE(69),
    [sym_false] = STATE(69),
    [sym__expression] = STATE(69),
    [sym_assignment_expression] = STATE(69),
    [sym_unary_expression] = STATE(69),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(179),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(27),
  },
  [37] = {
    [sym_binary_expression] = STATE(73),
    [sym_mux_expression] = STATE(73),
    [sym_parenthesized_expression] = STATE(73),
    [sym_predefined_constant] = STATE(73),
    [sym_true] = STATE(73),
    [sym_in_expression] = STATE(73),
    [sym_slice_expression] = STATE(73),
    [sym_false] = STATE(73),
    [sym__expression] = STATE(73),
    [sym_assignment_expression] = STATE(73),
    [sym_unary_expression] = STATE(73),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(181),
    [anon_sym_BANG] = ACTIONS(183),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(185),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(183),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(183),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(183),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(187),
  },
  [38] = {
    [sym_wire_declaration] = STATE(38),
    [sym_mux_expression] = STATE(12),
    [sym_parenthesized_expression] = STATE(12),
    [sym_predefined_constant] = STATE(12),
    [sym_true] = STATE(12),
    [sym__statement] = STATE(38),
    [sym__declaration] = STATE(38),
    [sym__expression] = STATE(12),
    [sym_assignment_expression] = STATE(12),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(38),
    [sym_register_declaration] = STATE(38),
    [sym_in_expression] = STATE(12),
    [sym_slice_expression] = STATE(12),
    [sym_false] = STATE(12),
    [anon_sym_true] = ACTIONS(189),
    [anon_sym_REG_RSP] = ACTIONS(192),
    [anon_sym_HALT] = ACTIONS(192),
    [anon_sym_RRMOVQ] = ACTIONS(192),
    [anon_sym_REG_R12] = ACTIONS(192),
    [anon_sym_NE] = ACTIONS(192),
    [anon_sym_GT2] = ACTIONS(192),
    [anon_sym_ALWAYS] = ACTIONS(192),
    [anon_sym_register] = ACTIONS(195),
    [sym_number] = ACTIONS(198),
    [anon_sym_BANG] = ACTIONS(201),
    [anon_sym_TRUE] = ACTIONS(189),
    [anon_sym_REG_RBP] = ACTIONS(192),
    [anon_sym_NOP] = ACTIONS(192),
    [anon_sym_IRMOVQ] = ACTIONS(192),
    [anon_sym_REG_R13] = ACTIONS(192),
    [anon_sym_const] = ACTIONS(204),
    [anon_sym_ADDQ] = ACTIONS(192),
    [anon_sym_OPQ] = ACTIONS(192),
    [anon_sym_TILDE] = ACTIONS(201),
    [anon_sym_false] = ACTIONS(207),
    [anon_sym_STAT_INS] = ACTIONS(192),
    [anon_sym_STAT_BUB] = ACTIONS(192),
    [anon_sym_RMMOVQ] = ACTIONS(192),
    [anon_sym_REG_RSI] = ACTIONS(192),
    [anon_sym_LBRACK] = ACTIONS(210),
    [anon_sym_SUBQ] = ACTIONS(192),
    [anon_sym_LPAREN] = ACTIONS(213),
    [anon_sym_JXX] = ACTIONS(192),
    [anon_sym_DASH] = ACTIONS(201),
    [anon_sym_FALSE] = ACTIONS(207),
    [anon_sym_STAT_PIP] = ACTIONS(192),
    [anon_sym_STAT_AOK] = ACTIONS(192),
    [anon_sym_MRMOVQ] = ACTIONS(192),
    [anon_sym_REG_RDI] = ACTIONS(192),
    [anon_sym_LE] = ACTIONS(192),
    [anon_sym_CALL] = ACTIONS(192),
    [anon_sym_PUSHQ] = ACTIONS(192),
    [anon_sym_PLUS] = ACTIONS(201),
    [anon_sym_ANDQ] = ACTIONS(192),
    [anon_sym_REG_RAX] = ACTIONS(192),
    [anon_sym_REG_RDX] = ACTIONS(192),
    [anon_sym_STAT_HLT] = ACTIONS(192),
    [anon_sym_REG_R14] = ACTIONS(192),
    [anon_sym_REG_R8] = ACTIONS(192),
    [anon_sym_REG_R10] = ACTIONS(192),
    [anon_sym_LT2] = ACTIONS(192),
    [anon_sym_RET] = ACTIONS(192),
    [anon_sym_POPQ] = ACTIONS(192),
    [anon_sym_XORQ] = ACTIONS(192),
    [anon_sym_REG_RCX] = ACTIONS(192),
    [anon_sym_REG_RBX] = ACTIONS(192),
    [anon_sym_STAT_ADR] = ACTIONS(192),
    [anon_sym_REG_NONE] = ACTIONS(192),
    [ts_builtin_sym_end] = ACTIONS(216),
    [anon_sym_REG_R9] = ACTIONS(192),
    [anon_sym_REG_R11] = ACTIONS(192),
    [anon_sym_EQ2] = ACTIONS(192),
    [anon_sym_GE] = ACTIONS(192),
    [anon_sym_wire] = ACTIONS(218),
    [anon_sym_CMOVXX] = ACTIONS(192),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(221),
  },
  [39] = {
    [sym__register_expression_statement] = STATE(76),
    [sym_variable_declarator] = STATE(75),
    [aux_sym_register_declaration_repeat1] = STATE(76),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(63),
    [anon_sym_RBRACE] = ACTIONS(224),
  },
  [40] = {
    [sym_binary_expression] = STATE(77),
    [sym_mux_expression] = STATE(77),
    [sym_parenthesized_expression] = STATE(77),
    [sym_predefined_constant] = STATE(77),
    [sym_true] = STATE(77),
    [sym_in_expression] = STATE(77),
    [sym_slice_expression] = STATE(77),
    [sym_false] = STATE(77),
    [sym__expression] = STATE(77),
    [sym_assignment_expression] = STATE(77),
    [sym_unary_expression] = STATE(77),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(226),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(27),
  },
  [41] = {
    [anon_sym_EQ] = ACTIONS(228),
    [sym_comment] = ACTIONS(3),
  },
  [42] = {
    [sym_binary_expression] = STATE(79),
    [sym_mux_expression] = STATE(79),
    [sym_parenthesized_expression] = STATE(79),
    [sym_predefined_constant] = STATE(79),
    [sym_true] = STATE(79),
    [sym_in_expression] = STATE(79),
    [sym_slice_expression] = STATE(79),
    [sym_false] = STATE(79),
    [sym__expression] = STATE(79),
    [sym_assignment_expression] = STATE(79),
    [sym_unary_expression] = STATE(79),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(230),
    [anon_sym_BANG] = ACTIONS(49),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(51),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(53),
  },
  [43] = {
    [anon_sym_EQ_EQ] = ACTIONS(232),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(232),
    [anon_sym_CARET] = ACTIONS(232),
    [anon_sym_SEMI] = ACTIONS(232),
    [anon_sym_LT_LT] = ACTIONS(232),
    [anon_sym_AMP_AMP] = ACTIONS(232),
    [anon_sym_GT_GT_GT] = ACTIONS(232),
    [anon_sym_STAR] = ACTIONS(232),
    [anon_sym_COLON] = ACTIONS(232),
    [anon_sym_GT_EQ] = ACTIONS(232),
    [anon_sym_RBRACK] = ACTIONS(232),
    [anon_sym_RPAREN] = ACTIONS(232),
    [anon_sym_PIPE] = ACTIONS(234),
    [anon_sym_COMMA] = ACTIONS(232),
    [anon_sym_LT] = ACTIONS(234),
    [anon_sym_GT_GT] = ACTIONS(234),
    [anon_sym_PLUS] = ACTIONS(232),
    [anon_sym_BANG_EQ] = ACTIONS(232),
    [anon_sym_LBRACK] = ACTIONS(232),
    [anon_sym_DOT_DOT] = ACTIONS(232),
    [anon_sym_AMP] = ACTIONS(234),
    [anon_sym_RBRACE] = ACTIONS(232),
    [anon_sym_PIPE_PIPE] = ACTIONS(232),
    [anon_sym_GT] = ACTIONS(234),
    [anon_sym_SLASH] = ACTIONS(234),
    [anon_sym_DASH] = ACTIONS(232),
    [anon_sym_LT_EQ] = ACTIONS(232),
  },
  [44] = {
    [sym_binary_expression] = STATE(22),
    [sym_mux_expression] = STATE(22),
    [sym_parenthesized_expression] = STATE(22),
    [sym_predefined_constant] = STATE(22),
    [sym_true] = STATE(22),
    [aux_sym_mux_expression_repeat1] = STATE(44),
    [sym_in_expression] = STATE(22),
    [sym_slice_expression] = STATE(22),
    [sym_false] = STATE(22),
    [sym__expression] = STATE(22),
    [sym_assignment_expression] = STATE(22),
    [sym_unary_expression] = STATE(22),
    [anon_sym_true] = ACTIONS(236),
    [anon_sym_REG_RSP] = ACTIONS(239),
    [anon_sym_HALT] = ACTIONS(239),
    [anon_sym_RRMOVQ] = ACTIONS(239),
    [anon_sym_REG_R12] = ACTIONS(239),
    [anon_sym_NE] = ACTIONS(239),
    [anon_sym_GT2] = ACTIONS(239),
    [anon_sym_ALWAYS] = ACTIONS(239),
    [sym_number] = ACTIONS(242),
    [anon_sym_BANG] = ACTIONS(245),
    [anon_sym_TRUE] = ACTIONS(236),
    [anon_sym_REG_RBP] = ACTIONS(239),
    [anon_sym_NOP] = ACTIONS(239),
    [anon_sym_IRMOVQ] = ACTIONS(239),
    [anon_sym_REG_R13] = ACTIONS(239),
    [anon_sym_const] = ACTIONS(248),
    [anon_sym_ADDQ] = ACTIONS(239),
    [anon_sym_OPQ] = ACTIONS(239),
    [anon_sym_TILDE] = ACTIONS(245),
    [anon_sym_false] = ACTIONS(251),
    [anon_sym_STAT_INS] = ACTIONS(239),
    [anon_sym_STAT_BUB] = ACTIONS(239),
    [anon_sym_RMMOVQ] = ACTIONS(239),
    [anon_sym_REG_RSI] = ACTIONS(239),
    [anon_sym_LBRACK] = ACTIONS(254),
    [anon_sym_SUBQ] = ACTIONS(239),
    [anon_sym_LPAREN] = ACTIONS(257),
    [anon_sym_JXX] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(245),
    [anon_sym_FALSE] = ACTIONS(251),
    [anon_sym_STAT_PIP] = ACTIONS(239),
    [anon_sym_STAT_AOK] = ACTIONS(239),
    [anon_sym_MRMOVQ] = ACTIONS(239),
    [anon_sym_REG_RDI] = ACTIONS(239),
    [anon_sym_RBRACK] = ACTIONS(260),
    [anon_sym_LE] = ACTIONS(239),
    [anon_sym_CALL] = ACTIONS(239),
    [anon_sym_PUSHQ] = ACTIONS(239),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_ANDQ] = ACTIONS(239),
    [anon_sym_REG_RAX] = ACTIONS(239),
    [anon_sym_REG_RDX] = ACTIONS(239),
    [anon_sym_STAT_HLT] = ACTIONS(239),
    [anon_sym_REG_R14] = ACTIONS(239),
    [anon_sym_REG_R8] = ACTIONS(239),
    [anon_sym_REG_R10] = ACTIONS(239),
    [anon_sym_LT2] = ACTIONS(239),
    [anon_sym_RET] = ACTIONS(239),
    [anon_sym_POPQ] = ACTIONS(239),
    [anon_sym_XORQ] = ACTIONS(239),
    [anon_sym_REG_RCX] = ACTIONS(239),
    [anon_sym_REG_RBX] = ACTIONS(239),
    [anon_sym_STAT_ADR] = ACTIONS(239),
    [anon_sym_REG_NONE] = ACTIONS(239),
    [anon_sym_REG_R9] = ACTIONS(239),
    [anon_sym_REG_R11] = ACTIONS(239),
    [anon_sym_EQ2] = ACTIONS(239),
    [anon_sym_GE] = ACTIONS(239),
    [anon_sym_CMOVXX] = ACTIONS(239),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(262),
  },
  [45] = {
    [sym_binary_expression] = STATE(80),
    [sym_mux_expression] = STATE(80),
    [sym_parenthesized_expression] = STATE(80),
    [sym_predefined_constant] = STATE(80),
    [sym_true] = STATE(80),
    [sym_in_expression] = STATE(80),
    [sym_slice_expression] = STATE(80),
    [sym_false] = STATE(80),
    [sym__expression] = STATE(80),
    [sym_assignment_expression] = STATE(80),
    [sym_unary_expression] = STATE(80),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(265),
    [anon_sym_BANG] = ACTIONS(49),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(51),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(53),
  },
  [46] = {
    [sym_binary_expression] = STATE(81),
    [sym_mux_expression] = STATE(81),
    [sym_parenthesized_expression] = STATE(81),
    [sym_predefined_constant] = STATE(81),
    [sym_true] = STATE(81),
    [sym_in_expression] = STATE(81),
    [sym_slice_expression] = STATE(81),
    [sym_false] = STATE(81),
    [sym__expression] = STATE(81),
    [sym_assignment_expression] = STATE(81),
    [sym_unary_expression] = STATE(81),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(267),
    [anon_sym_BANG] = ACTIONS(49),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(51),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(53),
  },
  [47] = {
    [sym_binary_expression] = STATE(67),
    [sym_mux_expression] = STATE(67),
    [sym_parenthesized_expression] = STATE(67),
    [sym_predefined_constant] = STATE(67),
    [sym_true] = STATE(67),
    [sym_in_expression] = STATE(67),
    [sym_slice_expression] = STATE(67),
    [sym_false] = STATE(67),
    [sym__expression] = STATE(67),
    [sym_assignment_expression] = STATE(67),
    [sym_unary_expression] = STATE(67),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(175),
    [anon_sym_BANG] = ACTIONS(49),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(51),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(53),
  },
  [48] = {
    [sym_binary_expression] = STATE(82),
    [sym_mux_expression] = STATE(82),
    [sym_parenthesized_expression] = STATE(82),
    [sym_predefined_constant] = STATE(82),
    [sym_true] = STATE(82),
    [sym_in_expression] = STATE(82),
    [sym_slice_expression] = STATE(82),
    [sym_false] = STATE(82),
    [sym__expression] = STATE(82),
    [sym_assignment_expression] = STATE(82),
    [sym_unary_expression] = STATE(82),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(269),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(27),
  },
  [49] = {
    [sym_binary_expression] = STATE(83),
    [sym_mux_expression] = STATE(83),
    [sym_parenthesized_expression] = STATE(83),
    [sym_predefined_constant] = STATE(83),
    [sym_true] = STATE(83),
    [sym_in_expression] = STATE(83),
    [sym_slice_expression] = STATE(83),
    [sym_false] = STATE(83),
    [sym__expression] = STATE(83),
    [sym_assignment_expression] = STATE(83),
    [sym_unary_expression] = STATE(83),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(271),
    [anon_sym_BANG] = ACTIONS(49),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(51),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(53),
  },
  [50] = {
    [sym_binary_expression] = STATE(84),
    [sym_mux_expression] = STATE(84),
    [sym_parenthesized_expression] = STATE(84),
    [sym_predefined_constant] = STATE(84),
    [sym_true] = STATE(84),
    [sym_in_expression] = STATE(84),
    [sym_slice_expression] = STATE(84),
    [sym_false] = STATE(84),
    [sym__expression] = STATE(84),
    [sym_assignment_expression] = STATE(84),
    [sym_unary_expression] = STATE(84),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(273),
    [anon_sym_BANG] = ACTIONS(49),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(51),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(53),
  },
  [51] = {
    [anon_sym_EQ] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
  },
  [52] = {
    [sym_binary_expression] = STATE(86),
    [sym_mux_expression] = STATE(86),
    [sym_parenthesized_expression] = STATE(86),
    [sym_predefined_constant] = STATE(86),
    [sym_true] = STATE(86),
    [sym_in_expression] = STATE(86),
    [sym_slice_expression] = STATE(86),
    [sym_false] = STATE(86),
    [sym__expression] = STATE(86),
    [sym_assignment_expression] = STATE(86),
    [sym_unary_expression] = STATE(86),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(277),
    [anon_sym_BANG] = ACTIONS(57),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(59),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(61),
  },
  [53] = {
    [sym_binary_expression] = STATE(87),
    [sym_mux_expression] = STATE(87),
    [sym_parenthesized_expression] = STATE(87),
    [sym_predefined_constant] = STATE(87),
    [sym_true] = STATE(87),
    [sym_in_expression] = STATE(87),
    [sym_slice_expression] = STATE(87),
    [sym_false] = STATE(87),
    [sym__expression] = STATE(87),
    [sym_assignment_expression] = STATE(87),
    [sym_unary_expression] = STATE(87),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(279),
    [anon_sym_BANG] = ACTIONS(57),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(59),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(61),
  },
  [54] = {
    [sym_binary_expression] = STATE(88),
    [sym_mux_expression] = STATE(88),
    [sym_parenthesized_expression] = STATE(88),
    [sym_predefined_constant] = STATE(88),
    [sym_true] = STATE(88),
    [sym_in_expression] = STATE(88),
    [sym_slice_expression] = STATE(88),
    [sym_false] = STATE(88),
    [sym__expression] = STATE(88),
    [sym_assignment_expression] = STATE(88),
    [sym_unary_expression] = STATE(88),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(281),
    [anon_sym_BANG] = ACTIONS(57),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(59),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(61),
  },
  [55] = {
    [sym_binary_expression] = STATE(67),
    [sym_mux_expression] = STATE(67),
    [sym_parenthesized_expression] = STATE(67),
    [sym_predefined_constant] = STATE(67),
    [sym_true] = STATE(67),
    [sym_in_expression] = STATE(67),
    [sym_slice_expression] = STATE(67),
    [sym_false] = STATE(67),
    [sym__expression] = STATE(67),
    [sym_assignment_expression] = STATE(67),
    [sym_unary_expression] = STATE(67),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(175),
    [anon_sym_BANG] = ACTIONS(57),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(59),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(61),
  },
  [56] = {
    [sym_binary_expression] = STATE(89),
    [sym_mux_expression] = STATE(89),
    [sym_parenthesized_expression] = STATE(89),
    [sym_predefined_constant] = STATE(89),
    [sym_true] = STATE(89),
    [sym_in_expression] = STATE(89),
    [sym_slice_expression] = STATE(89),
    [sym_false] = STATE(89),
    [sym__expression] = STATE(89),
    [sym_assignment_expression] = STATE(89),
    [sym_unary_expression] = STATE(89),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(283),
    [anon_sym_BANG] = ACTIONS(57),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(59),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(61),
  },
  [57] = {
    [anon_sym_EQ_EQ] = ACTIONS(285),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(285),
    [anon_sym_CARET] = ACTIONS(285),
    [anon_sym_SEMI] = ACTIONS(285),
    [anon_sym_LT_LT] = ACTIONS(285),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_GT_GT_GT] = ACTIONS(285),
    [anon_sym_STAR] = ACTIONS(285),
    [anon_sym_COLON] = ACTIONS(285),
    [anon_sym_GT_EQ] = ACTIONS(285),
    [anon_sym_RBRACK] = ACTIONS(285),
    [anon_sym_RPAREN] = ACTIONS(285),
    [anon_sym_PIPE] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(285),
    [anon_sym_LT] = ACTIONS(287),
    [anon_sym_GT_GT] = ACTIONS(287),
    [anon_sym_PLUS] = ACTIONS(285),
    [anon_sym_BANG_EQ] = ACTIONS(285),
    [anon_sym_LBRACK] = ACTIONS(285),
    [anon_sym_DOT_DOT] = ACTIONS(285),
    [anon_sym_AMP] = ACTIONS(287),
    [anon_sym_RBRACE] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(285),
    [anon_sym_GT] = ACTIONS(287),
    [anon_sym_SLASH] = ACTIONS(287),
    [anon_sym_DASH] = ACTIONS(285),
    [anon_sym_LT_EQ] = ACTIONS(285),
  },
  [58] = {
    [sym_binary_expression] = STATE(90),
    [sym_mux_expression] = STATE(90),
    [sym_parenthesized_expression] = STATE(90),
    [sym_predefined_constant] = STATE(90),
    [sym_true] = STATE(90),
    [sym_in_expression] = STATE(90),
    [sym_slice_expression] = STATE(90),
    [sym_false] = STATE(90),
    [sym__expression] = STATE(90),
    [sym_assignment_expression] = STATE(90),
    [sym_unary_expression] = STATE(90),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(289),
    [anon_sym_BANG] = ACTIONS(57),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(59),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(61),
  },
  [59] = {
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(291),
  },
  [60] = {
    [anon_sym_true] = ACTIONS(293),
    [anon_sym_REG_RSP] = ACTIONS(293),
    [anon_sym_HALT] = ACTIONS(293),
    [anon_sym_RRMOVQ] = ACTIONS(293),
    [anon_sym_REG_R12] = ACTIONS(293),
    [anon_sym_NE] = ACTIONS(293),
    [anon_sym_GT2] = ACTIONS(293),
    [anon_sym_ALWAYS] = ACTIONS(293),
    [anon_sym_register] = ACTIONS(293),
    [sym_number] = ACTIONS(295),
    [anon_sym_BANG] = ACTIONS(295),
    [anon_sym_TRUE] = ACTIONS(293),
    [anon_sym_REG_RBP] = ACTIONS(293),
    [anon_sym_NOP] = ACTIONS(293),
    [anon_sym_IRMOVQ] = ACTIONS(293),
    [anon_sym_REG_R13] = ACTIONS(293),
    [anon_sym_const] = ACTIONS(293),
    [anon_sym_ADDQ] = ACTIONS(293),
    [anon_sym_OPQ] = ACTIONS(293),
    [anon_sym_TILDE] = ACTIONS(295),
    [anon_sym_false] = ACTIONS(293),
    [anon_sym_STAT_INS] = ACTIONS(293),
    [anon_sym_STAT_BUB] = ACTIONS(293),
    [anon_sym_RMMOVQ] = ACTIONS(293),
    [anon_sym_REG_RSI] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(295),
    [anon_sym_SUBQ] = ACTIONS(293),
    [anon_sym_LPAREN] = ACTIONS(295),
    [anon_sym_JXX] = ACTIONS(293),
    [anon_sym_DASH] = ACTIONS(295),
    [anon_sym_FALSE] = ACTIONS(293),
    [anon_sym_STAT_PIP] = ACTIONS(293),
    [anon_sym_STAT_AOK] = ACTIONS(293),
    [anon_sym_MRMOVQ] = ACTIONS(293),
    [anon_sym_REG_RDI] = ACTIONS(293),
    [anon_sym_LE] = ACTIONS(293),
    [anon_sym_CALL] = ACTIONS(293),
    [anon_sym_PUSHQ] = ACTIONS(293),
    [anon_sym_PLUS] = ACTIONS(295),
    [anon_sym_ANDQ] = ACTIONS(293),
    [anon_sym_REG_RAX] = ACTIONS(293),
    [anon_sym_REG_RDX] = ACTIONS(293),
    [anon_sym_STAT_HLT] = ACTIONS(293),
    [anon_sym_REG_R14] = ACTIONS(293),
    [anon_sym_REG_R8] = ACTIONS(293),
    [anon_sym_REG_R10] = ACTIONS(293),
    [anon_sym_LT2] = ACTIONS(293),
    [anon_sym_RET] = ACTIONS(293),
    [anon_sym_POPQ] = ACTIONS(293),
    [anon_sym_XORQ] = ACTIONS(293),
    [anon_sym_REG_RCX] = ACTIONS(293),
    [anon_sym_REG_RBX] = ACTIONS(293),
    [anon_sym_STAT_ADR] = ACTIONS(293),
    [anon_sym_REG_NONE] = ACTIONS(293),
    [ts_builtin_sym_end] = ACTIONS(295),
    [anon_sym_REG_R9] = ACTIONS(293),
    [anon_sym_REG_R11] = ACTIONS(293),
    [anon_sym_EQ2] = ACTIONS(293),
    [anon_sym_GE] = ACTIONS(293),
    [anon_sym_wire] = ACTIONS(293),
    [anon_sym_CMOVXX] = ACTIONS(293),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(293),
  },
  [61] = {
    [sym_variable_declarator] = STATE(92),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(63),
  },
  [62] = {
    [aux_sym_wire_declaration_repeat1] = STATE(94),
    [anon_sym_SEMI] = ACTIONS(297),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(161),
  },
  [63] = {
    [anon_sym_EQ_EQ] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(73),
    [anon_sym_CARET] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_AMP_AMP] = ACTIONS(81),
    [anon_sym_GT_GT_GT] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_GT_EQ] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT_GT] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_BANG_EQ] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(93),
    [anon_sym_PIPE_PIPE] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_LT_EQ] = ACTIONS(71),
  },
  [64] = {
    [anon_sym_EQ_EQ] = ACTIONS(301),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(301),
    [anon_sym_CARET] = ACTIONS(301),
    [anon_sym_SEMI] = ACTIONS(301),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_AMP_AMP] = ACTIONS(301),
    [anon_sym_GT_GT_GT] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_GT_EQ] = ACTIONS(301),
    [anon_sym_PIPE] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(303),
    [anon_sym_GT_GT] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(301),
    [anon_sym_BANG_EQ] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(303),
    [anon_sym_PIPE_PIPE] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(303),
    [anon_sym_SLASH] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(301),
    [anon_sym_LT_EQ] = ACTIONS(301),
  },
  [65] = {
    [sym_binary_expression] = STATE(99),
    [sym_mux_expression] = STATE(99),
    [sym_parenthesized_expression] = STATE(99),
    [sym_predefined_constant] = STATE(99),
    [sym_true] = STATE(99),
    [sym_in_expression] = STATE(99),
    [sym_slice_expression] = STATE(99),
    [sym_false] = STATE(99),
    [sym__expression] = STATE(99),
    [sym_assignment_expression] = STATE(99),
    [sym_unary_expression] = STATE(99),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(305),
    [anon_sym_BANG] = ACTIONS(307),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(309),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(307),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(311),
    [anon_sym_DASH] = ACTIONS(307),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(307),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(313),
  },
  [66] = {
    [anon_sym_EQ_EQ] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(301),
    [anon_sym_CARET] = ACTIONS(301),
    [anon_sym_SEMI] = ACTIONS(301),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_AMP_AMP] = ACTIONS(81),
    [anon_sym_GT_GT_GT] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_GT_EQ] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT_GT] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_BANG_EQ] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(93),
    [anon_sym_PIPE_PIPE] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_LT_EQ] = ACTIONS(71),
  },
  [67] = {
    [anon_sym_EQ_EQ] = ACTIONS(301),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(301),
    [anon_sym_CARET] = ACTIONS(301),
    [anon_sym_SEMI] = ACTIONS(301),
    [anon_sym_LT_LT] = ACTIONS(301),
    [anon_sym_AMP_AMP] = ACTIONS(301),
    [anon_sym_GT_GT_GT] = ACTIONS(301),
    [anon_sym_STAR] = ACTIONS(301),
    [anon_sym_COLON] = ACTIONS(301),
    [anon_sym_GT_EQ] = ACTIONS(301),
    [anon_sym_RBRACK] = ACTIONS(301),
    [anon_sym_RPAREN] = ACTIONS(301),
    [anon_sym_PIPE] = ACTIONS(303),
    [anon_sym_COMMA] = ACTIONS(301),
    [anon_sym_LT] = ACTIONS(303),
    [anon_sym_GT_GT] = ACTIONS(303),
    [anon_sym_PLUS] = ACTIONS(301),
    [anon_sym_BANG_EQ] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_DOT_DOT] = ACTIONS(301),
    [anon_sym_AMP] = ACTIONS(303),
    [anon_sym_RBRACE] = ACTIONS(301),
    [anon_sym_PIPE_PIPE] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(303),
    [anon_sym_SLASH] = ACTIONS(303),
    [anon_sym_DASH] = ACTIONS(301),
    [anon_sym_LT_EQ] = ACTIONS(301),
  },
  [68] = {
    [anon_sym_EQ_EQ] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(301),
    [anon_sym_CARET] = ACTIONS(301),
    [anon_sym_SEMI] = ACTIONS(301),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_AMP_AMP] = ACTIONS(301),
    [anon_sym_GT_GT_GT] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_GT_EQ] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT_GT] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_BANG_EQ] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(303),
    [anon_sym_PIPE_PIPE] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_LT_EQ] = ACTIONS(71),
  },
  [69] = {
    [anon_sym_EQ_EQ] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(301),
    [anon_sym_CARET] = ACTIONS(301),
    [anon_sym_SEMI] = ACTIONS(301),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_AMP_AMP] = ACTIONS(301),
    [anon_sym_GT_GT_GT] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_GT_EQ] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT_GT] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(301),
    [anon_sym_BANG_EQ] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(303),
    [anon_sym_PIPE_PIPE] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(301),
    [anon_sym_LT_EQ] = ACTIONS(71),
  },
  [70] = {
    [sym_binary_expression] = STATE(16),
    [sym_mux_expression] = STATE(16),
    [sym_parenthesized_expression] = STATE(16),
    [sym_predefined_constant] = STATE(16),
    [sym_true] = STATE(16),
    [sym_in_expression] = STATE(16),
    [sym_slice_expression] = STATE(16),
    [sym_false] = STATE(16),
    [sym__expression] = STATE(16),
    [sym_assignment_expression] = STATE(16),
    [sym_unary_expression] = STATE(16),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(39),
    [anon_sym_BANG] = ACTIONS(183),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(185),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(183),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(183),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(183),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(187),
  },
  [71] = {
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(315),
  },
  [72] = {
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(65),
    [anon_sym_CARET] = ACTIONS(65),
    [anon_sym_LT_LT] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_GT_GT_GT] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_GT_EQ] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_LT] = ACTIONS(69),
    [anon_sym_GT_GT] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(65),
    [anon_sym_DOT_DOT] = ACTIONS(65),
    [anon_sym_AMP] = ACTIONS(69),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(65),
  },
  [73] = {
    [anon_sym_EQ_EQ] = ACTIONS(319),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(73),
    [anon_sym_CARET] = ACTIONS(321),
    [anon_sym_LT_LT] = ACTIONS(323),
    [anon_sym_AMP_AMP] = ACTIONS(325),
    [anon_sym_GT_GT_GT] = ACTIONS(323),
    [anon_sym_STAR] = ACTIONS(323),
    [anon_sym_GT_EQ] = ACTIONS(319),
    [anon_sym_PIPE] = ACTIONS(327),
    [anon_sym_LT] = ACTIONS(329),
    [anon_sym_GT_GT] = ACTIONS(331),
    [anon_sym_PLUS] = ACTIONS(333),
    [anon_sym_BANG_EQ] = ACTIONS(319),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_DOT_DOT] = ACTIONS(335),
    [anon_sym_AMP] = ACTIONS(337),
    [anon_sym_PIPE_PIPE] = ACTIONS(321),
    [anon_sym_GT] = ACTIONS(329),
    [anon_sym_SLASH] = ACTIONS(331),
    [anon_sym_DASH] = ACTIONS(333),
    [anon_sym_LT_EQ] = ACTIONS(319),
  },
  [74] = {
    [anon_sym_true] = ACTIONS(339),
    [anon_sym_REG_RSP] = ACTIONS(339),
    [anon_sym_HALT] = ACTIONS(339),
    [anon_sym_RRMOVQ] = ACTIONS(339),
    [anon_sym_REG_R12] = ACTIONS(339),
    [anon_sym_NE] = ACTIONS(339),
    [anon_sym_GT2] = ACTIONS(339),
    [anon_sym_ALWAYS] = ACTIONS(339),
    [anon_sym_register] = ACTIONS(339),
    [sym_number] = ACTIONS(341),
    [anon_sym_BANG] = ACTIONS(341),
    [anon_sym_TRUE] = ACTIONS(339),
    [anon_sym_REG_RBP] = ACTIONS(339),
    [anon_sym_NOP] = ACTIONS(339),
    [anon_sym_IRMOVQ] = ACTIONS(339),
    [anon_sym_REG_R13] = ACTIONS(339),
    [anon_sym_const] = ACTIONS(339),
    [anon_sym_ADDQ] = ACTIONS(339),
    [anon_sym_OPQ] = ACTIONS(339),
    [anon_sym_TILDE] = ACTIONS(341),
    [anon_sym_false] = ACTIONS(339),
    [anon_sym_STAT_INS] = ACTIONS(339),
    [anon_sym_STAT_BUB] = ACTIONS(339),
    [anon_sym_RMMOVQ] = ACTIONS(339),
    [anon_sym_REG_RSI] = ACTIONS(339),
    [anon_sym_LBRACK] = ACTIONS(341),
    [anon_sym_SUBQ] = ACTIONS(339),
    [anon_sym_LPAREN] = ACTIONS(341),
    [anon_sym_JXX] = ACTIONS(339),
    [anon_sym_DASH] = ACTIONS(341),
    [anon_sym_FALSE] = ACTIONS(339),
    [anon_sym_STAT_PIP] = ACTIONS(339),
    [anon_sym_STAT_AOK] = ACTIONS(339),
    [anon_sym_MRMOVQ] = ACTIONS(339),
    [anon_sym_REG_RDI] = ACTIONS(339),
    [anon_sym_LE] = ACTIONS(339),
    [anon_sym_CALL] = ACTIONS(339),
    [anon_sym_PUSHQ] = ACTIONS(339),
    [anon_sym_PLUS] = ACTIONS(341),
    [anon_sym_ANDQ] = ACTIONS(339),
    [anon_sym_REG_RAX] = ACTIONS(339),
    [anon_sym_REG_RDX] = ACTIONS(339),
    [anon_sym_STAT_HLT] = ACTIONS(339),
    [anon_sym_REG_R14] = ACTIONS(339),
    [anon_sym_REG_R8] = ACTIONS(339),
    [anon_sym_REG_R10] = ACTIONS(339),
    [anon_sym_LT2] = ACTIONS(339),
    [anon_sym_RET] = ACTIONS(339),
    [anon_sym_POPQ] = ACTIONS(339),
    [anon_sym_XORQ] = ACTIONS(339),
    [anon_sym_REG_RCX] = ACTIONS(339),
    [anon_sym_REG_RBX] = ACTIONS(339),
    [anon_sym_STAT_ADR] = ACTIONS(339),
    [anon_sym_REG_NONE] = ACTIONS(339),
    [ts_builtin_sym_end] = ACTIONS(341),
    [anon_sym_REG_R9] = ACTIONS(339),
    [anon_sym_REG_R11] = ACTIONS(339),
    [anon_sym_EQ2] = ACTIONS(339),
    [anon_sym_GE] = ACTIONS(339),
    [anon_sym_wire] = ACTIONS(339),
    [anon_sym_CMOVXX] = ACTIONS(339),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(339),
  },
  [75] = {
    [anon_sym_EQ] = ACTIONS(343),
    [sym_comment] = ACTIONS(3),
  },
  [76] = {
    [sym__register_expression_statement] = STATE(110),
    [sym_variable_declarator] = STATE(75),
    [aux_sym_register_declaration_repeat1] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(63),
    [anon_sym_RBRACE] = ACTIONS(345),
  },
  [77] = {
    [anon_sym_EQ_EQ] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(73),
    [anon_sym_CARET] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(347),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_AMP_AMP] = ACTIONS(81),
    [anon_sym_GT_GT_GT] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_GT_EQ] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT_GT] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_BANG_EQ] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(93),
    [anon_sym_PIPE_PIPE] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_LT_EQ] = ACTIONS(71),
  },
  [78] = {
    [sym_binary_expression] = STATE(111),
    [sym_mux_expression] = STATE(111),
    [sym_parenthesized_expression] = STATE(111),
    [sym_predefined_constant] = STATE(111),
    [sym_true] = STATE(111),
    [sym_in_expression] = STATE(111),
    [sym_slice_expression] = STATE(111),
    [sym_false] = STATE(111),
    [sym__expression] = STATE(111),
    [sym_assignment_expression] = STATE(111),
    [sym_unary_expression] = STATE(111),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(349),
    [anon_sym_BANG] = ACTIONS(49),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(51),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(53),
  },
  [79] = {
    [anon_sym_EQ_EQ] = ACTIONS(113),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(299),
    [anon_sym_LT_LT] = ACTIONS(117),
    [anon_sym_CARET] = ACTIONS(115),
    [anon_sym_AMP_AMP] = ACTIONS(121),
    [anon_sym_GT_GT_GT] = ACTIONS(117),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_GT_EQ] = ACTIONS(113),
    [anon_sym_PIPE] = ACTIONS(123),
    [anon_sym_LT] = ACTIONS(125),
    [anon_sym_GT_GT] = ACTIONS(127),
    [anon_sym_PLUS] = ACTIONS(129),
    [anon_sym_BANG_EQ] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(131),
    [anon_sym_PIPE_PIPE] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(125),
    [anon_sym_SLASH] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(129),
    [anon_sym_LT_EQ] = ACTIONS(113),
  },
  [80] = {
    [anon_sym_EQ_EQ] = ACTIONS(301),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(301),
    [anon_sym_COLON] = ACTIONS(301),
    [anon_sym_LT_LT] = ACTIONS(117),
    [anon_sym_CARET] = ACTIONS(301),
    [anon_sym_AMP_AMP] = ACTIONS(301),
    [anon_sym_GT_GT_GT] = ACTIONS(117),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_GT_EQ] = ACTIONS(301),
    [anon_sym_PIPE] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(303),
    [anon_sym_GT_GT] = ACTIONS(127),
    [anon_sym_PLUS] = ACTIONS(301),
    [anon_sym_BANG_EQ] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(303),
    [anon_sym_PIPE_PIPE] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(303),
    [anon_sym_SLASH] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(301),
    [anon_sym_LT_EQ] = ACTIONS(301),
  },
  [81] = {
    [anon_sym_EQ_EQ] = ACTIONS(113),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(301),
    [anon_sym_COLON] = ACTIONS(301),
    [anon_sym_LT_LT] = ACTIONS(117),
    [anon_sym_CARET] = ACTIONS(301),
    [anon_sym_AMP_AMP] = ACTIONS(121),
    [anon_sym_GT_GT_GT] = ACTIONS(117),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_GT_EQ] = ACTIONS(113),
    [anon_sym_PIPE] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(125),
    [anon_sym_GT_GT] = ACTIONS(127),
    [anon_sym_PLUS] = ACTIONS(129),
    [anon_sym_BANG_EQ] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(131),
    [anon_sym_PIPE_PIPE] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(125),
    [anon_sym_SLASH] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(129),
    [anon_sym_LT_EQ] = ACTIONS(113),
  },
  [82] = {
    [anon_sym_EQ_EQ] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(73),
    [anon_sym_CARET] = ACTIONS(75),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(351),
    [anon_sym_AMP_AMP] = ACTIONS(81),
    [anon_sym_GT_GT_GT] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_GT_EQ] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT_GT] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_BANG_EQ] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(93),
    [anon_sym_PIPE_PIPE] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_LT_EQ] = ACTIONS(71),
  },
  [83] = {
    [anon_sym_EQ_EQ] = ACTIONS(113),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(301),
    [anon_sym_COLON] = ACTIONS(301),
    [anon_sym_LT_LT] = ACTIONS(117),
    [anon_sym_CARET] = ACTIONS(301),
    [anon_sym_AMP_AMP] = ACTIONS(301),
    [anon_sym_GT_GT_GT] = ACTIONS(117),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_GT_EQ] = ACTIONS(113),
    [anon_sym_PIPE] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(125),
    [anon_sym_GT_GT] = ACTIONS(127),
    [anon_sym_PLUS] = ACTIONS(129),
    [anon_sym_BANG_EQ] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(303),
    [anon_sym_PIPE_PIPE] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(125),
    [anon_sym_SLASH] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(129),
    [anon_sym_LT_EQ] = ACTIONS(113),
  },
  [84] = {
    [anon_sym_EQ_EQ] = ACTIONS(113),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(301),
    [anon_sym_COLON] = ACTIONS(301),
    [anon_sym_LT_LT] = ACTIONS(117),
    [anon_sym_CARET] = ACTIONS(301),
    [anon_sym_AMP_AMP] = ACTIONS(301),
    [anon_sym_GT_GT_GT] = ACTIONS(117),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_GT_EQ] = ACTIONS(113),
    [anon_sym_PIPE] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(125),
    [anon_sym_GT_GT] = ACTIONS(127),
    [anon_sym_PLUS] = ACTIONS(301),
    [anon_sym_BANG_EQ] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(303),
    [anon_sym_PIPE_PIPE] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(125),
    [anon_sym_SLASH] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(301),
    [anon_sym_LT_EQ] = ACTIONS(113),
  },
  [85] = {
    [sym_binary_expression] = STATE(113),
    [sym_mux_expression] = STATE(113),
    [sym_parenthesized_expression] = STATE(113),
    [sym_predefined_constant] = STATE(113),
    [sym_true] = STATE(113),
    [sym_in_expression] = STATE(113),
    [sym_slice_expression] = STATE(113),
    [sym_false] = STATE(113),
    [sym__expression] = STATE(113),
    [sym_assignment_expression] = STATE(113),
    [sym_unary_expression] = STATE(113),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(353),
    [anon_sym_BANG] = ACTIONS(57),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(59),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(61),
  },
  [86] = {
    [anon_sym_EQ_EQ] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(73),
    [anon_sym_CARET] = ACTIONS(139),
    [anon_sym_LT_LT] = ACTIONS(141),
    [anon_sym_AMP_AMP] = ACTIONS(143),
    [anon_sym_GT_GT_GT] = ACTIONS(141),
    [anon_sym_STAR] = ACTIONS(141),
    [anon_sym_GT_EQ] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(299),
    [anon_sym_PIPE] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(149),
    [anon_sym_GT_GT] = ACTIONS(151),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_BANG_EQ] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(155),
    [anon_sym_PIPE_PIPE] = ACTIONS(139),
    [anon_sym_GT] = ACTIONS(149),
    [anon_sym_SLASH] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_LT_EQ] = ACTIONS(137),
  },
  [87] = {
    [anon_sym_EQ_EQ] = ACTIONS(301),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(301),
    [anon_sym_CARET] = ACTIONS(301),
    [anon_sym_LT_LT] = ACTIONS(141),
    [anon_sym_AMP_AMP] = ACTIONS(301),
    [anon_sym_GT_GT_GT] = ACTIONS(141),
    [anon_sym_STAR] = ACTIONS(141),
    [anon_sym_GT_EQ] = ACTIONS(301),
    [anon_sym_RPAREN] = ACTIONS(301),
    [anon_sym_PIPE] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(303),
    [anon_sym_GT_GT] = ACTIONS(151),
    [anon_sym_PLUS] = ACTIONS(301),
    [anon_sym_BANG_EQ] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(303),
    [anon_sym_PIPE_PIPE] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(303),
    [anon_sym_SLASH] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(301),
    [anon_sym_LT_EQ] = ACTIONS(301),
  },
  [88] = {
    [anon_sym_EQ_EQ] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(301),
    [anon_sym_CARET] = ACTIONS(301),
    [anon_sym_LT_LT] = ACTIONS(141),
    [anon_sym_AMP_AMP] = ACTIONS(143),
    [anon_sym_GT_GT_GT] = ACTIONS(141),
    [anon_sym_STAR] = ACTIONS(141),
    [anon_sym_GT_EQ] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(301),
    [anon_sym_PIPE] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(149),
    [anon_sym_GT_GT] = ACTIONS(151),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_BANG_EQ] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(155),
    [anon_sym_PIPE_PIPE] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(149),
    [anon_sym_SLASH] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_LT_EQ] = ACTIONS(137),
  },
  [89] = {
    [anon_sym_EQ_EQ] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(301),
    [anon_sym_CARET] = ACTIONS(301),
    [anon_sym_LT_LT] = ACTIONS(141),
    [anon_sym_AMP_AMP] = ACTIONS(301),
    [anon_sym_GT_GT_GT] = ACTIONS(141),
    [anon_sym_STAR] = ACTIONS(141),
    [anon_sym_GT_EQ] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(301),
    [anon_sym_PIPE] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(149),
    [anon_sym_GT_GT] = ACTIONS(151),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_BANG_EQ] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(303),
    [anon_sym_PIPE_PIPE] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(149),
    [anon_sym_SLASH] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_LT_EQ] = ACTIONS(137),
  },
  [90] = {
    [anon_sym_EQ_EQ] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(301),
    [anon_sym_CARET] = ACTIONS(301),
    [anon_sym_LT_LT] = ACTIONS(141),
    [anon_sym_AMP_AMP] = ACTIONS(301),
    [anon_sym_GT_GT_GT] = ACTIONS(141),
    [anon_sym_STAR] = ACTIONS(141),
    [anon_sym_GT_EQ] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(301),
    [anon_sym_PIPE] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(149),
    [anon_sym_GT_GT] = ACTIONS(151),
    [anon_sym_PLUS] = ACTIONS(301),
    [anon_sym_BANG_EQ] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(303),
    [anon_sym_PIPE_PIPE] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(149),
    [anon_sym_SLASH] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(301),
    [anon_sym_LT_EQ] = ACTIONS(137),
  },
  [91] = {
    [anon_sym_SEMI] = ACTIONS(355),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(355),
    [anon_sym_EQ] = ACTIONS(355),
  },
  [92] = {
    [anon_sym_SEMI] = ACTIONS(357),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(357),
  },
  [93] = {
    [anon_sym_true] = ACTIONS(359),
    [anon_sym_REG_RSP] = ACTIONS(359),
    [anon_sym_HALT] = ACTIONS(359),
    [anon_sym_RRMOVQ] = ACTIONS(359),
    [anon_sym_REG_R12] = ACTIONS(359),
    [anon_sym_NE] = ACTIONS(359),
    [anon_sym_GT2] = ACTIONS(359),
    [anon_sym_ALWAYS] = ACTIONS(359),
    [anon_sym_register] = ACTIONS(359),
    [sym_number] = ACTIONS(361),
    [anon_sym_BANG] = ACTIONS(361),
    [anon_sym_TRUE] = ACTIONS(359),
    [anon_sym_REG_RBP] = ACTIONS(359),
    [anon_sym_NOP] = ACTIONS(359),
    [anon_sym_IRMOVQ] = ACTIONS(359),
    [anon_sym_REG_R13] = ACTIONS(359),
    [anon_sym_const] = ACTIONS(359),
    [anon_sym_ADDQ] = ACTIONS(359),
    [anon_sym_OPQ] = ACTIONS(359),
    [anon_sym_TILDE] = ACTIONS(361),
    [anon_sym_false] = ACTIONS(359),
    [anon_sym_STAT_INS] = ACTIONS(359),
    [anon_sym_STAT_BUB] = ACTIONS(359),
    [anon_sym_RMMOVQ] = ACTIONS(359),
    [anon_sym_REG_RSI] = ACTIONS(359),
    [anon_sym_LBRACK] = ACTIONS(361),
    [anon_sym_SUBQ] = ACTIONS(359),
    [anon_sym_LPAREN] = ACTIONS(361),
    [anon_sym_JXX] = ACTIONS(359),
    [anon_sym_DASH] = ACTIONS(361),
    [anon_sym_FALSE] = ACTIONS(359),
    [anon_sym_STAT_PIP] = ACTIONS(359),
    [anon_sym_STAT_AOK] = ACTIONS(359),
    [anon_sym_MRMOVQ] = ACTIONS(359),
    [anon_sym_REG_RDI] = ACTIONS(359),
    [anon_sym_LE] = ACTIONS(359),
    [anon_sym_CALL] = ACTIONS(359),
    [anon_sym_PUSHQ] = ACTIONS(359),
    [anon_sym_PLUS] = ACTIONS(361),
    [anon_sym_ANDQ] = ACTIONS(359),
    [anon_sym_REG_RAX] = ACTIONS(359),
    [anon_sym_REG_RDX] = ACTIONS(359),
    [anon_sym_STAT_HLT] = ACTIONS(359),
    [anon_sym_REG_R14] = ACTIONS(359),
    [anon_sym_REG_R8] = ACTIONS(359),
    [anon_sym_REG_R10] = ACTIONS(359),
    [anon_sym_LT2] = ACTIONS(359),
    [anon_sym_RET] = ACTIONS(359),
    [anon_sym_POPQ] = ACTIONS(359),
    [anon_sym_XORQ] = ACTIONS(359),
    [anon_sym_REG_RCX] = ACTIONS(359),
    [anon_sym_REG_RBX] = ACTIONS(359),
    [anon_sym_STAT_ADR] = ACTIONS(359),
    [anon_sym_REG_NONE] = ACTIONS(359),
    [ts_builtin_sym_end] = ACTIONS(361),
    [anon_sym_REG_R9] = ACTIONS(359),
    [anon_sym_REG_R11] = ACTIONS(359),
    [anon_sym_EQ2] = ACTIONS(359),
    [anon_sym_GE] = ACTIONS(359),
    [anon_sym_wire] = ACTIONS(359),
    [anon_sym_CMOVXX] = ACTIONS(359),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(359),
  },
  [94] = {
    [aux_sym_wire_declaration_repeat1] = STATE(94),
    [anon_sym_SEMI] = ACTIONS(357),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(363),
  },
  [95] = {
    [sym_binary_expression] = STATE(16),
    [sym_mux_expression] = STATE(16),
    [sym_parenthesized_expression] = STATE(16),
    [sym_predefined_constant] = STATE(16),
    [sym_true] = STATE(16),
    [sym_in_expression] = STATE(16),
    [sym_slice_expression] = STATE(16),
    [sym_false] = STATE(16),
    [sym__expression] = STATE(16),
    [sym_assignment_expression] = STATE(16),
    [sym_unary_expression] = STATE(16),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(39),
    [anon_sym_BANG] = ACTIONS(307),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(309),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(307),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(307),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(307),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(313),
  },
  [96] = {
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(366),
  },
  [97] = {
    [anon_sym_EQ_EQ] = ACTIONS(368),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(368),
    [anon_sym_CARET] = ACTIONS(368),
    [anon_sym_SEMI] = ACTIONS(368),
    [anon_sym_LT_LT] = ACTIONS(368),
    [anon_sym_AMP_AMP] = ACTIONS(368),
    [anon_sym_GT_GT_GT] = ACTIONS(368),
    [anon_sym_STAR] = ACTIONS(368),
    [anon_sym_COLON] = ACTIONS(368),
    [anon_sym_GT_EQ] = ACTIONS(368),
    [anon_sym_RBRACK] = ACTIONS(368),
    [anon_sym_RPAREN] = ACTIONS(368),
    [anon_sym_PIPE] = ACTIONS(370),
    [anon_sym_COMMA] = ACTIONS(368),
    [anon_sym_LT] = ACTIONS(370),
    [anon_sym_GT_GT] = ACTIONS(370),
    [anon_sym_PLUS] = ACTIONS(368),
    [anon_sym_BANG_EQ] = ACTIONS(368),
    [anon_sym_LBRACK] = ACTIONS(368),
    [anon_sym_DOT_DOT] = ACTIONS(368),
    [anon_sym_AMP] = ACTIONS(370),
    [anon_sym_RBRACE] = ACTIONS(368),
    [anon_sym_PIPE_PIPE] = ACTIONS(368),
    [anon_sym_GT] = ACTIONS(370),
    [anon_sym_SLASH] = ACTIONS(370),
    [anon_sym_DASH] = ACTIONS(368),
    [anon_sym_LT_EQ] = ACTIONS(368),
  },
  [98] = {
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(65),
    [anon_sym_CARET] = ACTIONS(65),
    [anon_sym_LT_LT] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_GT_GT_GT] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_GT_EQ] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(372),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_LT] = ACTIONS(69),
    [anon_sym_GT_GT] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(65),
    [anon_sym_AMP] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(65),
  },
  [99] = {
    [aux_sym_in_expression_repeat1] = STATE(123),
    [anon_sym_EQ_EQ] = ACTIONS(374),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(73),
    [anon_sym_CARET] = ACTIONS(376),
    [anon_sym_LT_LT] = ACTIONS(378),
    [anon_sym_AMP_AMP] = ACTIONS(380),
    [anon_sym_GT_GT_GT] = ACTIONS(378),
    [anon_sym_STAR] = ACTIONS(378),
    [anon_sym_GT_EQ] = ACTIONS(374),
    [anon_sym_PIPE] = ACTIONS(382),
    [anon_sym_COMMA] = ACTIONS(384),
    [anon_sym_LT] = ACTIONS(386),
    [anon_sym_GT_GT] = ACTIONS(388),
    [anon_sym_PLUS] = ACTIONS(390),
    [anon_sym_BANG_EQ] = ACTIONS(374),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(392),
    [anon_sym_RBRACE] = ACTIONS(394),
    [anon_sym_PIPE_PIPE] = ACTIONS(376),
    [anon_sym_GT] = ACTIONS(386),
    [anon_sym_SLASH] = ACTIONS(388),
    [anon_sym_DASH] = ACTIONS(390),
    [anon_sym_LT_EQ] = ACTIONS(374),
  },
  [100] = {
    [anon_sym_EQ] = ACTIONS(396),
    [sym_comment] = ACTIONS(3),
  },
  [101] = {
    [sym_binary_expression] = STATE(125),
    [sym_mux_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(125),
    [sym_predefined_constant] = STATE(125),
    [sym_true] = STATE(125),
    [sym_in_expression] = STATE(125),
    [sym_slice_expression] = STATE(125),
    [sym_false] = STATE(125),
    [sym__expression] = STATE(125),
    [sym_assignment_expression] = STATE(125),
    [sym_unary_expression] = STATE(125),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(398),
    [anon_sym_BANG] = ACTIONS(183),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(185),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(183),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(183),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(183),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(187),
  },
  [102] = {
    [sym_binary_expression] = STATE(126),
    [sym_mux_expression] = STATE(126),
    [sym_parenthesized_expression] = STATE(126),
    [sym_predefined_constant] = STATE(126),
    [sym_true] = STATE(126),
    [sym_in_expression] = STATE(126),
    [sym_slice_expression] = STATE(126),
    [sym_false] = STATE(126),
    [sym__expression] = STATE(126),
    [sym_assignment_expression] = STATE(126),
    [sym_unary_expression] = STATE(126),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(400),
    [anon_sym_BANG] = ACTIONS(183),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(185),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(183),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(183),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(183),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(187),
  },
  [103] = {
    [sym_binary_expression] = STATE(127),
    [sym_mux_expression] = STATE(127),
    [sym_parenthesized_expression] = STATE(127),
    [sym_predefined_constant] = STATE(127),
    [sym_true] = STATE(127),
    [sym_in_expression] = STATE(127),
    [sym_slice_expression] = STATE(127),
    [sym_false] = STATE(127),
    [sym__expression] = STATE(127),
    [sym_assignment_expression] = STATE(127),
    [sym_unary_expression] = STATE(127),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(402),
    [anon_sym_BANG] = ACTIONS(183),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(185),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(183),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(183),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(183),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(187),
  },
  [104] = {
    [sym_binary_expression] = STATE(67),
    [sym_mux_expression] = STATE(67),
    [sym_parenthesized_expression] = STATE(67),
    [sym_predefined_constant] = STATE(67),
    [sym_true] = STATE(67),
    [sym_in_expression] = STATE(67),
    [sym_slice_expression] = STATE(67),
    [sym_false] = STATE(67),
    [sym__expression] = STATE(67),
    [sym_assignment_expression] = STATE(67),
    [sym_unary_expression] = STATE(67),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(175),
    [anon_sym_BANG] = ACTIONS(183),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(185),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(183),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(183),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(183),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(187),
  },
  [105] = {
    [sym_binary_expression] = STATE(128),
    [sym_mux_expression] = STATE(128),
    [sym_parenthesized_expression] = STATE(128),
    [sym_predefined_constant] = STATE(128),
    [sym_true] = STATE(128),
    [sym_in_expression] = STATE(128),
    [sym_slice_expression] = STATE(128),
    [sym_false] = STATE(128),
    [sym__expression] = STATE(128),
    [sym_assignment_expression] = STATE(128),
    [sym_unary_expression] = STATE(128),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(404),
    [anon_sym_BANG] = ACTIONS(183),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(185),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(183),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(183),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(183),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(187),
  },
  [106] = {
    [sym_binary_expression] = STATE(129),
    [sym_mux_expression] = STATE(129),
    [sym_parenthesized_expression] = STATE(129),
    [sym_predefined_constant] = STATE(129),
    [sym_true] = STATE(129),
    [sym_in_expression] = STATE(129),
    [sym_slice_expression] = STATE(129),
    [sym_false] = STATE(129),
    [sym__expression] = STATE(129),
    [sym_assignment_expression] = STATE(129),
    [sym_unary_expression] = STATE(129),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(406),
    [anon_sym_BANG] = ACTIONS(183),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(185),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(183),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(183),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(183),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(187),
  },
  [107] = {
    [sym_binary_expression] = STATE(133),
    [sym_mux_expression] = STATE(133),
    [sym_parenthesized_expression] = STATE(133),
    [sym_predefined_constant] = STATE(133),
    [sym_true] = STATE(133),
    [sym_in_expression] = STATE(133),
    [sym_slice_expression] = STATE(133),
    [sym_false] = STATE(133),
    [sym__expression] = STATE(133),
    [sym_assignment_expression] = STATE(133),
    [sym_unary_expression] = STATE(133),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(408),
    [anon_sym_BANG] = ACTIONS(410),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(412),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(410),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(410),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(410),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(414),
  },
  [108] = {
    [sym_binary_expression] = STATE(134),
    [sym_mux_expression] = STATE(134),
    [sym_parenthesized_expression] = STATE(134),
    [sym_predefined_constant] = STATE(134),
    [sym_true] = STATE(134),
    [sym_in_expression] = STATE(134),
    [sym_slice_expression] = STATE(134),
    [sym_false] = STATE(134),
    [sym__expression] = STATE(134),
    [sym_assignment_expression] = STATE(134),
    [sym_unary_expression] = STATE(134),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(416),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(27),
  },
  [109] = {
    [anon_sym_true] = ACTIONS(418),
    [anon_sym_REG_RSP] = ACTIONS(418),
    [anon_sym_HALT] = ACTIONS(418),
    [anon_sym_RRMOVQ] = ACTIONS(418),
    [anon_sym_REG_R12] = ACTIONS(418),
    [anon_sym_NE] = ACTIONS(418),
    [anon_sym_GT2] = ACTIONS(418),
    [anon_sym_ALWAYS] = ACTIONS(418),
    [anon_sym_register] = ACTIONS(418),
    [sym_number] = ACTIONS(420),
    [anon_sym_BANG] = ACTIONS(420),
    [anon_sym_TRUE] = ACTIONS(418),
    [anon_sym_REG_RBP] = ACTIONS(418),
    [anon_sym_NOP] = ACTIONS(418),
    [anon_sym_IRMOVQ] = ACTIONS(418),
    [anon_sym_REG_R13] = ACTIONS(418),
    [anon_sym_const] = ACTIONS(418),
    [anon_sym_ADDQ] = ACTIONS(418),
    [anon_sym_OPQ] = ACTIONS(418),
    [anon_sym_TILDE] = ACTIONS(420),
    [anon_sym_false] = ACTIONS(418),
    [anon_sym_STAT_INS] = ACTIONS(418),
    [anon_sym_STAT_BUB] = ACTIONS(418),
    [anon_sym_RMMOVQ] = ACTIONS(418),
    [anon_sym_REG_RSI] = ACTIONS(418),
    [anon_sym_LBRACK] = ACTIONS(420),
    [anon_sym_SUBQ] = ACTIONS(418),
    [anon_sym_LPAREN] = ACTIONS(420),
    [anon_sym_JXX] = ACTIONS(418),
    [anon_sym_DASH] = ACTIONS(420),
    [anon_sym_FALSE] = ACTIONS(418),
    [anon_sym_STAT_PIP] = ACTIONS(418),
    [anon_sym_STAT_AOK] = ACTIONS(418),
    [anon_sym_MRMOVQ] = ACTIONS(418),
    [anon_sym_REG_RDI] = ACTIONS(418),
    [anon_sym_LE] = ACTIONS(418),
    [anon_sym_CALL] = ACTIONS(418),
    [anon_sym_PUSHQ] = ACTIONS(418),
    [anon_sym_PLUS] = ACTIONS(420),
    [anon_sym_ANDQ] = ACTIONS(418),
    [anon_sym_REG_RAX] = ACTIONS(418),
    [anon_sym_REG_RDX] = ACTIONS(418),
    [anon_sym_STAT_HLT] = ACTIONS(418),
    [anon_sym_REG_R14] = ACTIONS(418),
    [anon_sym_REG_R8] = ACTIONS(418),
    [anon_sym_REG_R10] = ACTIONS(418),
    [anon_sym_LT2] = ACTIONS(418),
    [anon_sym_RET] = ACTIONS(418),
    [anon_sym_POPQ] = ACTIONS(418),
    [anon_sym_XORQ] = ACTIONS(418),
    [anon_sym_REG_RCX] = ACTIONS(418),
    [anon_sym_REG_RBX] = ACTIONS(418),
    [anon_sym_STAT_ADR] = ACTIONS(418),
    [anon_sym_REG_NONE] = ACTIONS(418),
    [ts_builtin_sym_end] = ACTIONS(420),
    [anon_sym_REG_R9] = ACTIONS(418),
    [anon_sym_REG_R11] = ACTIONS(418),
    [anon_sym_EQ2] = ACTIONS(418),
    [anon_sym_GE] = ACTIONS(418),
    [anon_sym_wire] = ACTIONS(418),
    [anon_sym_CMOVXX] = ACTIONS(418),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(418),
  },
  [110] = {
    [sym__register_expression_statement] = STATE(110),
    [sym_variable_declarator] = STATE(75),
    [aux_sym_register_declaration_repeat1] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(422),
    [sym_identifier] = ACTIONS(424),
  },
  [111] = {
    [anon_sym_EQ_EQ] = ACTIONS(113),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(347),
    [anon_sym_LT_LT] = ACTIONS(117),
    [anon_sym_CARET] = ACTIONS(115),
    [anon_sym_AMP_AMP] = ACTIONS(121),
    [anon_sym_GT_GT_GT] = ACTIONS(117),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_GT_EQ] = ACTIONS(113),
    [anon_sym_PIPE] = ACTIONS(123),
    [anon_sym_LT] = ACTIONS(125),
    [anon_sym_GT_GT] = ACTIONS(127),
    [anon_sym_PLUS] = ACTIONS(129),
    [anon_sym_BANG_EQ] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(131),
    [anon_sym_PIPE_PIPE] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(125),
    [anon_sym_SLASH] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(129),
    [anon_sym_LT_EQ] = ACTIONS(113),
  },
  [112] = {
    [anon_sym_true] = ACTIONS(427),
    [anon_sym_REG_RSP] = ACTIONS(427),
    [anon_sym_HALT] = ACTIONS(427),
    [anon_sym_RRMOVQ] = ACTIONS(427),
    [anon_sym_REG_R12] = ACTIONS(427),
    [anon_sym_NE] = ACTIONS(427),
    [anon_sym_GT2] = ACTIONS(427),
    [anon_sym_ALWAYS] = ACTIONS(427),
    [sym_number] = ACTIONS(429),
    [anon_sym_BANG] = ACTIONS(429),
    [anon_sym_TRUE] = ACTIONS(427),
    [anon_sym_REG_RBP] = ACTIONS(427),
    [anon_sym_NOP] = ACTIONS(427),
    [anon_sym_IRMOVQ] = ACTIONS(427),
    [anon_sym_REG_R13] = ACTIONS(427),
    [anon_sym_const] = ACTIONS(427),
    [anon_sym_ADDQ] = ACTIONS(427),
    [anon_sym_OPQ] = ACTIONS(427),
    [anon_sym_TILDE] = ACTIONS(429),
    [anon_sym_false] = ACTIONS(427),
    [anon_sym_STAT_INS] = ACTIONS(427),
    [anon_sym_STAT_BUB] = ACTIONS(427),
    [anon_sym_RMMOVQ] = ACTIONS(427),
    [anon_sym_REG_RSI] = ACTIONS(427),
    [anon_sym_LBRACK] = ACTIONS(429),
    [anon_sym_SUBQ] = ACTIONS(427),
    [anon_sym_LPAREN] = ACTIONS(429),
    [anon_sym_JXX] = ACTIONS(427),
    [anon_sym_DASH] = ACTIONS(429),
    [anon_sym_FALSE] = ACTIONS(427),
    [anon_sym_STAT_PIP] = ACTIONS(427),
    [anon_sym_STAT_AOK] = ACTIONS(427),
    [anon_sym_MRMOVQ] = ACTIONS(427),
    [anon_sym_REG_RDI] = ACTIONS(427),
    [anon_sym_RBRACK] = ACTIONS(429),
    [anon_sym_LE] = ACTIONS(427),
    [anon_sym_CALL] = ACTIONS(427),
    [anon_sym_PUSHQ] = ACTIONS(427),
    [anon_sym_PLUS] = ACTIONS(429),
    [anon_sym_ANDQ] = ACTIONS(427),
    [anon_sym_REG_RAX] = ACTIONS(427),
    [anon_sym_REG_RDX] = ACTIONS(427),
    [anon_sym_STAT_HLT] = ACTIONS(427),
    [anon_sym_REG_R14] = ACTIONS(427),
    [anon_sym_REG_R8] = ACTIONS(427),
    [anon_sym_REG_R10] = ACTIONS(427),
    [anon_sym_LT2] = ACTIONS(427),
    [anon_sym_RET] = ACTIONS(427),
    [anon_sym_POPQ] = ACTIONS(427),
    [anon_sym_XORQ] = ACTIONS(427),
    [anon_sym_REG_RCX] = ACTIONS(427),
    [anon_sym_REG_RBX] = ACTIONS(427),
    [anon_sym_STAT_ADR] = ACTIONS(427),
    [anon_sym_REG_NONE] = ACTIONS(427),
    [anon_sym_REG_R9] = ACTIONS(427),
    [anon_sym_REG_R11] = ACTIONS(427),
    [anon_sym_EQ2] = ACTIONS(427),
    [anon_sym_GE] = ACTIONS(427),
    [anon_sym_CMOVXX] = ACTIONS(427),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(427),
  },
  [113] = {
    [anon_sym_EQ_EQ] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(73),
    [anon_sym_CARET] = ACTIONS(139),
    [anon_sym_LT_LT] = ACTIONS(141),
    [anon_sym_AMP_AMP] = ACTIONS(143),
    [anon_sym_GT_GT_GT] = ACTIONS(141),
    [anon_sym_STAR] = ACTIONS(141),
    [anon_sym_GT_EQ] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(347),
    [anon_sym_PIPE] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(149),
    [anon_sym_GT_GT] = ACTIONS(151),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_BANG_EQ] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(155),
    [anon_sym_PIPE_PIPE] = ACTIONS(139),
    [anon_sym_GT] = ACTIONS(149),
    [anon_sym_SLASH] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_LT_EQ] = ACTIONS(137),
  },
  [114] = {
    [anon_sym_EQ] = ACTIONS(431),
    [sym_comment] = ACTIONS(3),
  },
  [115] = {
    [sym_binary_expression] = STATE(136),
    [sym_mux_expression] = STATE(136),
    [sym_parenthesized_expression] = STATE(136),
    [sym_predefined_constant] = STATE(136),
    [sym_true] = STATE(136),
    [sym_in_expression] = STATE(136),
    [sym_slice_expression] = STATE(136),
    [sym_false] = STATE(136),
    [sym__expression] = STATE(136),
    [sym_assignment_expression] = STATE(136),
    [sym_unary_expression] = STATE(136),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(433),
    [anon_sym_BANG] = ACTIONS(307),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(309),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(307),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(307),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(307),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(313),
  },
  [116] = {
    [sym_binary_expression] = STATE(137),
    [sym_mux_expression] = STATE(137),
    [sym_parenthesized_expression] = STATE(137),
    [sym_predefined_constant] = STATE(137),
    [sym_true] = STATE(137),
    [sym_in_expression] = STATE(137),
    [sym_slice_expression] = STATE(137),
    [sym_false] = STATE(137),
    [sym__expression] = STATE(137),
    [sym_assignment_expression] = STATE(137),
    [sym_unary_expression] = STATE(137),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(435),
    [anon_sym_BANG] = ACTIONS(307),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(309),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(307),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(307),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(307),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(313),
  },
  [117] = {
    [sym_binary_expression] = STATE(138),
    [sym_mux_expression] = STATE(138),
    [sym_parenthesized_expression] = STATE(138),
    [sym_predefined_constant] = STATE(138),
    [sym_true] = STATE(138),
    [sym_in_expression] = STATE(138),
    [sym_slice_expression] = STATE(138),
    [sym_false] = STATE(138),
    [sym__expression] = STATE(138),
    [sym_assignment_expression] = STATE(138),
    [sym_unary_expression] = STATE(138),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(437),
    [anon_sym_BANG] = ACTIONS(307),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(309),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(307),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(307),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(307),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(313),
  },
  [118] = {
    [sym_binary_expression] = STATE(67),
    [sym_mux_expression] = STATE(67),
    [sym_parenthesized_expression] = STATE(67),
    [sym_predefined_constant] = STATE(67),
    [sym_true] = STATE(67),
    [sym_in_expression] = STATE(67),
    [sym_slice_expression] = STATE(67),
    [sym_false] = STATE(67),
    [sym__expression] = STATE(67),
    [sym_assignment_expression] = STATE(67),
    [sym_unary_expression] = STATE(67),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(175),
    [anon_sym_BANG] = ACTIONS(307),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(309),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(307),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(307),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(307),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(313),
  },
  [119] = {
    [sym_binary_expression] = STATE(139),
    [sym_mux_expression] = STATE(139),
    [sym_parenthesized_expression] = STATE(139),
    [sym_predefined_constant] = STATE(139),
    [sym_true] = STATE(139),
    [sym_in_expression] = STATE(139),
    [sym_slice_expression] = STATE(139),
    [sym_false] = STATE(139),
    [sym__expression] = STATE(139),
    [sym_assignment_expression] = STATE(139),
    [sym_unary_expression] = STATE(139),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(439),
    [anon_sym_BANG] = ACTIONS(307),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(309),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(307),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(307),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(307),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(313),
  },
  [120] = {
    [sym_binary_expression] = STATE(140),
    [sym_mux_expression] = STATE(140),
    [sym_parenthesized_expression] = STATE(140),
    [sym_predefined_constant] = STATE(140),
    [sym_true] = STATE(140),
    [sym_in_expression] = STATE(140),
    [sym_slice_expression] = STATE(140),
    [sym_false] = STATE(140),
    [sym__expression] = STATE(140),
    [sym_assignment_expression] = STATE(140),
    [sym_unary_expression] = STATE(140),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(441),
    [anon_sym_BANG] = ACTIONS(307),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(309),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(307),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(307),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(307),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(313),
  },
  [121] = {
    [sym_binary_expression] = STATE(141),
    [sym_mux_expression] = STATE(141),
    [sym_parenthesized_expression] = STATE(141),
    [sym_predefined_constant] = STATE(141),
    [sym_true] = STATE(141),
    [sym_in_expression] = STATE(141),
    [sym_slice_expression] = STATE(141),
    [sym_false] = STATE(141),
    [sym__expression] = STATE(141),
    [sym_assignment_expression] = STATE(141),
    [sym_unary_expression] = STATE(141),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(443),
    [anon_sym_BANG] = ACTIONS(307),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(309),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(307),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(307),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(307),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(313),
  },
  [122] = {
    [anon_sym_EQ_EQ] = ACTIONS(445),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(445),
    [anon_sym_CARET] = ACTIONS(445),
    [anon_sym_SEMI] = ACTIONS(445),
    [anon_sym_LT_LT] = ACTIONS(445),
    [anon_sym_AMP_AMP] = ACTIONS(445),
    [anon_sym_GT_GT_GT] = ACTIONS(445),
    [anon_sym_STAR] = ACTIONS(445),
    [anon_sym_COLON] = ACTIONS(445),
    [anon_sym_GT_EQ] = ACTIONS(445),
    [anon_sym_RBRACK] = ACTIONS(445),
    [anon_sym_RPAREN] = ACTIONS(445),
    [anon_sym_PIPE] = ACTIONS(447),
    [anon_sym_COMMA] = ACTIONS(445),
    [anon_sym_LT] = ACTIONS(447),
    [anon_sym_GT_GT] = ACTIONS(447),
    [anon_sym_PLUS] = ACTIONS(445),
    [anon_sym_BANG_EQ] = ACTIONS(445),
    [anon_sym_LBRACK] = ACTIONS(445),
    [anon_sym_DOT_DOT] = ACTIONS(445),
    [anon_sym_AMP] = ACTIONS(447),
    [anon_sym_RBRACE] = ACTIONS(445),
    [anon_sym_PIPE_PIPE] = ACTIONS(445),
    [anon_sym_GT] = ACTIONS(447),
    [anon_sym_SLASH] = ACTIONS(447),
    [anon_sym_DASH] = ACTIONS(445),
    [anon_sym_LT_EQ] = ACTIONS(445),
  },
  [123] = {
    [aux_sym_in_expression_repeat1] = STATE(143),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(384),
    [anon_sym_RBRACE] = ACTIONS(449),
  },
  [124] = {
    [sym_binary_expression] = STATE(144),
    [sym_mux_expression] = STATE(144),
    [sym_parenthesized_expression] = STATE(144),
    [sym_predefined_constant] = STATE(144),
    [sym_true] = STATE(144),
    [sym_in_expression] = STATE(144),
    [sym_slice_expression] = STATE(144),
    [sym_false] = STATE(144),
    [sym__expression] = STATE(144),
    [sym_assignment_expression] = STATE(144),
    [sym_unary_expression] = STATE(144),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(451),
    [anon_sym_BANG] = ACTIONS(183),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(185),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(183),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(183),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(183),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(187),
  },
  [125] = {
    [anon_sym_EQ_EQ] = ACTIONS(319),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(73),
    [anon_sym_CARET] = ACTIONS(321),
    [anon_sym_LT_LT] = ACTIONS(323),
    [anon_sym_AMP_AMP] = ACTIONS(325),
    [anon_sym_GT_GT_GT] = ACTIONS(323),
    [anon_sym_STAR] = ACTIONS(323),
    [anon_sym_GT_EQ] = ACTIONS(319),
    [anon_sym_PIPE] = ACTIONS(327),
    [anon_sym_LT] = ACTIONS(329),
    [anon_sym_GT_GT] = ACTIONS(331),
    [anon_sym_PLUS] = ACTIONS(333),
    [anon_sym_BANG_EQ] = ACTIONS(319),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_DOT_DOT] = ACTIONS(299),
    [anon_sym_AMP] = ACTIONS(337),
    [anon_sym_PIPE_PIPE] = ACTIONS(321),
    [anon_sym_GT] = ACTIONS(329),
    [anon_sym_SLASH] = ACTIONS(331),
    [anon_sym_DASH] = ACTIONS(333),
    [anon_sym_LT_EQ] = ACTIONS(319),
  },
  [126] = {
    [anon_sym_EQ_EQ] = ACTIONS(301),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(301),
    [anon_sym_CARET] = ACTIONS(301),
    [anon_sym_LT_LT] = ACTIONS(323),
    [anon_sym_AMP_AMP] = ACTIONS(301),
    [anon_sym_GT_GT_GT] = ACTIONS(323),
    [anon_sym_STAR] = ACTIONS(323),
    [anon_sym_GT_EQ] = ACTIONS(301),
    [anon_sym_PIPE] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(303),
    [anon_sym_GT_GT] = ACTIONS(331),
    [anon_sym_PLUS] = ACTIONS(301),
    [anon_sym_BANG_EQ] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_DOT_DOT] = ACTIONS(301),
    [anon_sym_AMP] = ACTIONS(303),
    [anon_sym_PIPE_PIPE] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(303),
    [anon_sym_SLASH] = ACTIONS(331),
    [anon_sym_DASH] = ACTIONS(301),
    [anon_sym_LT_EQ] = ACTIONS(301),
  },
  [127] = {
    [anon_sym_EQ_EQ] = ACTIONS(319),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(301),
    [anon_sym_CARET] = ACTIONS(301),
    [anon_sym_LT_LT] = ACTIONS(323),
    [anon_sym_AMP_AMP] = ACTIONS(325),
    [anon_sym_GT_GT_GT] = ACTIONS(323),
    [anon_sym_STAR] = ACTIONS(323),
    [anon_sym_GT_EQ] = ACTIONS(319),
    [anon_sym_PIPE] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(329),
    [anon_sym_GT_GT] = ACTIONS(331),
    [anon_sym_PLUS] = ACTIONS(333),
    [anon_sym_BANG_EQ] = ACTIONS(319),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_DOT_DOT] = ACTIONS(301),
    [anon_sym_AMP] = ACTIONS(337),
    [anon_sym_PIPE_PIPE] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(329),
    [anon_sym_SLASH] = ACTIONS(331),
    [anon_sym_DASH] = ACTIONS(333),
    [anon_sym_LT_EQ] = ACTIONS(319),
  },
  [128] = {
    [anon_sym_EQ_EQ] = ACTIONS(319),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(301),
    [anon_sym_CARET] = ACTIONS(301),
    [anon_sym_LT_LT] = ACTIONS(323),
    [anon_sym_AMP_AMP] = ACTIONS(301),
    [anon_sym_GT_GT_GT] = ACTIONS(323),
    [anon_sym_STAR] = ACTIONS(323),
    [anon_sym_GT_EQ] = ACTIONS(319),
    [anon_sym_PIPE] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(329),
    [anon_sym_GT_GT] = ACTIONS(331),
    [anon_sym_PLUS] = ACTIONS(333),
    [anon_sym_BANG_EQ] = ACTIONS(319),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_DOT_DOT] = ACTIONS(301),
    [anon_sym_AMP] = ACTIONS(303),
    [anon_sym_PIPE_PIPE] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(329),
    [anon_sym_SLASH] = ACTIONS(331),
    [anon_sym_DASH] = ACTIONS(333),
    [anon_sym_LT_EQ] = ACTIONS(319),
  },
  [129] = {
    [anon_sym_EQ_EQ] = ACTIONS(319),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(301),
    [anon_sym_CARET] = ACTIONS(301),
    [anon_sym_LT_LT] = ACTIONS(323),
    [anon_sym_AMP_AMP] = ACTIONS(301),
    [anon_sym_GT_GT_GT] = ACTIONS(323),
    [anon_sym_STAR] = ACTIONS(323),
    [anon_sym_GT_EQ] = ACTIONS(319),
    [anon_sym_PIPE] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(329),
    [anon_sym_GT_GT] = ACTIONS(331),
    [anon_sym_PLUS] = ACTIONS(301),
    [anon_sym_BANG_EQ] = ACTIONS(319),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_DOT_DOT] = ACTIONS(301),
    [anon_sym_AMP] = ACTIONS(303),
    [anon_sym_PIPE_PIPE] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(329),
    [anon_sym_SLASH] = ACTIONS(331),
    [anon_sym_DASH] = ACTIONS(301),
    [anon_sym_LT_EQ] = ACTIONS(319),
  },
  [130] = {
    [sym_binary_expression] = STATE(16),
    [sym_mux_expression] = STATE(16),
    [sym_parenthesized_expression] = STATE(16),
    [sym_predefined_constant] = STATE(16),
    [sym_true] = STATE(16),
    [sym_in_expression] = STATE(16),
    [sym_slice_expression] = STATE(16),
    [sym_false] = STATE(16),
    [sym__expression] = STATE(16),
    [sym_assignment_expression] = STATE(16),
    [sym_unary_expression] = STATE(16),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(39),
    [anon_sym_BANG] = ACTIONS(410),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(412),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(410),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(410),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(410),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(414),
  },
  [131] = {
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(453),
  },
  [132] = {
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(65),
    [anon_sym_CARET] = ACTIONS(65),
    [anon_sym_LT_LT] = ACTIONS(65),
    [anon_sym_AMP_AMP] = ACTIONS(65),
    [anon_sym_GT_GT_GT] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_GT_EQ] = ACTIONS(65),
    [anon_sym_RBRACK] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(455),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_LT] = ACTIONS(69),
    [anon_sym_GT_GT] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_BANG_EQ] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(65),
    [anon_sym_AMP] = ACTIONS(69),
    [anon_sym_PIPE_PIPE] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(65),
  },
  [133] = {
    [anon_sym_EQ_EQ] = ACTIONS(457),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(73),
    [anon_sym_CARET] = ACTIONS(459),
    [anon_sym_LT_LT] = ACTIONS(461),
    [anon_sym_AMP_AMP] = ACTIONS(463),
    [anon_sym_GT_GT_GT] = ACTIONS(461),
    [anon_sym_STAR] = ACTIONS(461),
    [anon_sym_GT_EQ] = ACTIONS(457),
    [anon_sym_RBRACK] = ACTIONS(465),
    [anon_sym_PIPE] = ACTIONS(467),
    [anon_sym_LT] = ACTIONS(469),
    [anon_sym_GT_GT] = ACTIONS(471),
    [anon_sym_PLUS] = ACTIONS(473),
    [anon_sym_BANG_EQ] = ACTIONS(457),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(475),
    [anon_sym_PIPE_PIPE] = ACTIONS(459),
    [anon_sym_GT] = ACTIONS(469),
    [anon_sym_SLASH] = ACTIONS(471),
    [anon_sym_DASH] = ACTIONS(473),
    [anon_sym_LT_EQ] = ACTIONS(457),
  },
  [134] = {
    [anon_sym_EQ_EQ] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(73),
    [anon_sym_CARET] = ACTIONS(75),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(477),
    [anon_sym_AMP_AMP] = ACTIONS(81),
    [anon_sym_GT_GT_GT] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_GT_EQ] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT_GT] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_BANG_EQ] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(93),
    [anon_sym_PIPE_PIPE] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_LT_EQ] = ACTIONS(71),
  },
  [135] = {
    [sym_binary_expression] = STATE(154),
    [sym_mux_expression] = STATE(154),
    [sym_parenthesized_expression] = STATE(154),
    [sym_predefined_constant] = STATE(154),
    [sym_true] = STATE(154),
    [sym_in_expression] = STATE(154),
    [sym_slice_expression] = STATE(154),
    [sym_false] = STATE(154),
    [sym__expression] = STATE(154),
    [sym_assignment_expression] = STATE(154),
    [sym_unary_expression] = STATE(154),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(479),
    [anon_sym_BANG] = ACTIONS(307),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(309),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(307),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(307),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(307),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(313),
  },
  [136] = {
    [anon_sym_EQ_EQ] = ACTIONS(374),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(73),
    [anon_sym_CARET] = ACTIONS(376),
    [anon_sym_LT_LT] = ACTIONS(378),
    [anon_sym_AMP_AMP] = ACTIONS(380),
    [anon_sym_GT_GT_GT] = ACTIONS(378),
    [anon_sym_STAR] = ACTIONS(378),
    [anon_sym_GT_EQ] = ACTIONS(374),
    [anon_sym_COMMA] = ACTIONS(299),
    [anon_sym_PIPE] = ACTIONS(382),
    [anon_sym_LT] = ACTIONS(386),
    [anon_sym_GT_GT] = ACTIONS(388),
    [anon_sym_PLUS] = ACTIONS(390),
    [anon_sym_BANG_EQ] = ACTIONS(374),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(392),
    [anon_sym_RBRACE] = ACTIONS(299),
    [anon_sym_PIPE_PIPE] = ACTIONS(376),
    [anon_sym_GT] = ACTIONS(386),
    [anon_sym_SLASH] = ACTIONS(388),
    [anon_sym_DASH] = ACTIONS(390),
    [anon_sym_LT_EQ] = ACTIONS(374),
  },
  [137] = {
    [anon_sym_EQ_EQ] = ACTIONS(301),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(301),
    [anon_sym_CARET] = ACTIONS(301),
    [anon_sym_LT_LT] = ACTIONS(378),
    [anon_sym_AMP_AMP] = ACTIONS(301),
    [anon_sym_GT_GT_GT] = ACTIONS(378),
    [anon_sym_STAR] = ACTIONS(378),
    [anon_sym_GT_EQ] = ACTIONS(301),
    [anon_sym_COMMA] = ACTIONS(301),
    [anon_sym_PIPE] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(303),
    [anon_sym_GT_GT] = ACTIONS(388),
    [anon_sym_PLUS] = ACTIONS(301),
    [anon_sym_BANG_EQ] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(303),
    [anon_sym_RBRACE] = ACTIONS(301),
    [anon_sym_PIPE_PIPE] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(303),
    [anon_sym_SLASH] = ACTIONS(388),
    [anon_sym_DASH] = ACTIONS(301),
    [anon_sym_LT_EQ] = ACTIONS(301),
  },
  [138] = {
    [anon_sym_EQ_EQ] = ACTIONS(374),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(301),
    [anon_sym_CARET] = ACTIONS(301),
    [anon_sym_LT_LT] = ACTIONS(378),
    [anon_sym_AMP_AMP] = ACTIONS(380),
    [anon_sym_GT_GT_GT] = ACTIONS(378),
    [anon_sym_STAR] = ACTIONS(378),
    [anon_sym_GT_EQ] = ACTIONS(374),
    [anon_sym_COMMA] = ACTIONS(301),
    [anon_sym_PIPE] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(386),
    [anon_sym_GT_GT] = ACTIONS(388),
    [anon_sym_PLUS] = ACTIONS(390),
    [anon_sym_BANG_EQ] = ACTIONS(374),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(392),
    [anon_sym_RBRACE] = ACTIONS(301),
    [anon_sym_PIPE_PIPE] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(386),
    [anon_sym_SLASH] = ACTIONS(388),
    [anon_sym_DASH] = ACTIONS(390),
    [anon_sym_LT_EQ] = ACTIONS(374),
  },
  [139] = {
    [anon_sym_EQ_EQ] = ACTIONS(374),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(301),
    [anon_sym_CARET] = ACTIONS(301),
    [anon_sym_LT_LT] = ACTIONS(378),
    [anon_sym_AMP_AMP] = ACTIONS(301),
    [anon_sym_GT_GT_GT] = ACTIONS(378),
    [anon_sym_STAR] = ACTIONS(378),
    [anon_sym_GT_EQ] = ACTIONS(374),
    [anon_sym_COMMA] = ACTIONS(301),
    [anon_sym_PIPE] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(386),
    [anon_sym_GT_GT] = ACTIONS(388),
    [anon_sym_PLUS] = ACTIONS(390),
    [anon_sym_BANG_EQ] = ACTIONS(374),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(303),
    [anon_sym_RBRACE] = ACTIONS(301),
    [anon_sym_PIPE_PIPE] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(386),
    [anon_sym_SLASH] = ACTIONS(388),
    [anon_sym_DASH] = ACTIONS(390),
    [anon_sym_LT_EQ] = ACTIONS(374),
  },
  [140] = {
    [anon_sym_EQ_EQ] = ACTIONS(374),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(73),
    [anon_sym_CARET] = ACTIONS(376),
    [anon_sym_LT_LT] = ACTIONS(378),
    [anon_sym_AMP_AMP] = ACTIONS(380),
    [anon_sym_GT_GT_GT] = ACTIONS(378),
    [anon_sym_STAR] = ACTIONS(378),
    [anon_sym_GT_EQ] = ACTIONS(374),
    [anon_sym_COMMA] = ACTIONS(481),
    [anon_sym_PIPE] = ACTIONS(382),
    [anon_sym_LT] = ACTIONS(386),
    [anon_sym_GT_GT] = ACTIONS(388),
    [anon_sym_PLUS] = ACTIONS(390),
    [anon_sym_BANG_EQ] = ACTIONS(374),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(392),
    [anon_sym_RBRACE] = ACTIONS(481),
    [anon_sym_PIPE_PIPE] = ACTIONS(376),
    [anon_sym_GT] = ACTIONS(386),
    [anon_sym_SLASH] = ACTIONS(388),
    [anon_sym_DASH] = ACTIONS(390),
    [anon_sym_LT_EQ] = ACTIONS(374),
  },
  [141] = {
    [anon_sym_EQ_EQ] = ACTIONS(374),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(301),
    [anon_sym_CARET] = ACTIONS(301),
    [anon_sym_LT_LT] = ACTIONS(378),
    [anon_sym_AMP_AMP] = ACTIONS(301),
    [anon_sym_GT_GT_GT] = ACTIONS(378),
    [anon_sym_STAR] = ACTIONS(378),
    [anon_sym_GT_EQ] = ACTIONS(374),
    [anon_sym_COMMA] = ACTIONS(301),
    [anon_sym_PIPE] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(386),
    [anon_sym_GT_GT] = ACTIONS(388),
    [anon_sym_PLUS] = ACTIONS(301),
    [anon_sym_BANG_EQ] = ACTIONS(374),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(303),
    [anon_sym_RBRACE] = ACTIONS(301),
    [anon_sym_PIPE_PIPE] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(386),
    [anon_sym_SLASH] = ACTIONS(388),
    [anon_sym_DASH] = ACTIONS(301),
    [anon_sym_LT_EQ] = ACTIONS(374),
  },
  [142] = {
    [anon_sym_EQ_EQ] = ACTIONS(483),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(483),
    [anon_sym_CARET] = ACTIONS(483),
    [anon_sym_SEMI] = ACTIONS(483),
    [anon_sym_LT_LT] = ACTIONS(483),
    [anon_sym_AMP_AMP] = ACTIONS(483),
    [anon_sym_GT_GT_GT] = ACTIONS(483),
    [anon_sym_STAR] = ACTIONS(483),
    [anon_sym_COLON] = ACTIONS(483),
    [anon_sym_GT_EQ] = ACTIONS(483),
    [anon_sym_RBRACK] = ACTIONS(483),
    [anon_sym_RPAREN] = ACTIONS(483),
    [anon_sym_PIPE] = ACTIONS(485),
    [anon_sym_COMMA] = ACTIONS(483),
    [anon_sym_LT] = ACTIONS(485),
    [anon_sym_GT_GT] = ACTIONS(485),
    [anon_sym_PLUS] = ACTIONS(483),
    [anon_sym_BANG_EQ] = ACTIONS(483),
    [anon_sym_LBRACK] = ACTIONS(483),
    [anon_sym_DOT_DOT] = ACTIONS(483),
    [anon_sym_AMP] = ACTIONS(485),
    [anon_sym_RBRACE] = ACTIONS(483),
    [anon_sym_PIPE_PIPE] = ACTIONS(483),
    [anon_sym_GT] = ACTIONS(485),
    [anon_sym_SLASH] = ACTIONS(485),
    [anon_sym_DASH] = ACTIONS(483),
    [anon_sym_LT_EQ] = ACTIONS(483),
  },
  [143] = {
    [aux_sym_in_expression_repeat1] = STATE(143),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(487),
    [anon_sym_RBRACE] = ACTIONS(481),
  },
  [144] = {
    [anon_sym_EQ_EQ] = ACTIONS(319),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(73),
    [anon_sym_CARET] = ACTIONS(321),
    [anon_sym_LT_LT] = ACTIONS(323),
    [anon_sym_AMP_AMP] = ACTIONS(325),
    [anon_sym_GT_GT_GT] = ACTIONS(323),
    [anon_sym_STAR] = ACTIONS(323),
    [anon_sym_GT_EQ] = ACTIONS(319),
    [anon_sym_PIPE] = ACTIONS(327),
    [anon_sym_LT] = ACTIONS(329),
    [anon_sym_GT_GT] = ACTIONS(331),
    [anon_sym_PLUS] = ACTIONS(333),
    [anon_sym_BANG_EQ] = ACTIONS(319),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_DOT_DOT] = ACTIONS(347),
    [anon_sym_AMP] = ACTIONS(337),
    [anon_sym_PIPE_PIPE] = ACTIONS(321),
    [anon_sym_GT] = ACTIONS(329),
    [anon_sym_SLASH] = ACTIONS(331),
    [anon_sym_DASH] = ACTIONS(333),
    [anon_sym_LT_EQ] = ACTIONS(319),
  },
  [145] = {
    [anon_sym_EQ] = ACTIONS(490),
    [sym_comment] = ACTIONS(3),
  },
  [146] = {
    [sym_binary_expression] = STATE(156),
    [sym_mux_expression] = STATE(156),
    [sym_parenthesized_expression] = STATE(156),
    [sym_predefined_constant] = STATE(156),
    [sym_true] = STATE(156),
    [sym_in_expression] = STATE(156),
    [sym_slice_expression] = STATE(156),
    [sym_false] = STATE(156),
    [sym__expression] = STATE(156),
    [sym_assignment_expression] = STATE(156),
    [sym_unary_expression] = STATE(156),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(492),
    [anon_sym_BANG] = ACTIONS(410),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(412),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(410),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(410),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(410),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(414),
  },
  [147] = {
    [sym_binary_expression] = STATE(157),
    [sym_mux_expression] = STATE(157),
    [sym_parenthesized_expression] = STATE(157),
    [sym_predefined_constant] = STATE(157),
    [sym_true] = STATE(157),
    [sym_in_expression] = STATE(157),
    [sym_slice_expression] = STATE(157),
    [sym_false] = STATE(157),
    [sym__expression] = STATE(157),
    [sym_assignment_expression] = STATE(157),
    [sym_unary_expression] = STATE(157),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(494),
    [anon_sym_BANG] = ACTIONS(410),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(412),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(410),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(410),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(410),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(414),
  },
  [148] = {
    [sym_binary_expression] = STATE(158),
    [sym_mux_expression] = STATE(158),
    [sym_parenthesized_expression] = STATE(158),
    [sym_predefined_constant] = STATE(158),
    [sym_true] = STATE(158),
    [sym_in_expression] = STATE(158),
    [sym_slice_expression] = STATE(158),
    [sym_false] = STATE(158),
    [sym__expression] = STATE(158),
    [sym_assignment_expression] = STATE(158),
    [sym_unary_expression] = STATE(158),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(496),
    [anon_sym_BANG] = ACTIONS(410),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(412),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(410),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(410),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(410),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(414),
  },
  [149] = {
    [sym_binary_expression] = STATE(67),
    [sym_mux_expression] = STATE(67),
    [sym_parenthesized_expression] = STATE(67),
    [sym_predefined_constant] = STATE(67),
    [sym_true] = STATE(67),
    [sym_in_expression] = STATE(67),
    [sym_slice_expression] = STATE(67),
    [sym_false] = STATE(67),
    [sym__expression] = STATE(67),
    [sym_assignment_expression] = STATE(67),
    [sym_unary_expression] = STATE(67),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(175),
    [anon_sym_BANG] = ACTIONS(410),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(412),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(410),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(410),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(410),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(414),
  },
  [150] = {
    [sym_binary_expression] = STATE(159),
    [sym_mux_expression] = STATE(159),
    [sym_parenthesized_expression] = STATE(159),
    [sym_predefined_constant] = STATE(159),
    [sym_true] = STATE(159),
    [sym_in_expression] = STATE(159),
    [sym_slice_expression] = STATE(159),
    [sym_false] = STATE(159),
    [sym__expression] = STATE(159),
    [sym_assignment_expression] = STATE(159),
    [sym_unary_expression] = STATE(159),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(498),
    [anon_sym_BANG] = ACTIONS(410),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(412),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(410),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(410),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(410),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(414),
  },
  [151] = {
    [anon_sym_EQ_EQ] = ACTIONS(500),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(500),
    [anon_sym_CARET] = ACTIONS(500),
    [anon_sym_SEMI] = ACTIONS(500),
    [anon_sym_LT_LT] = ACTIONS(500),
    [anon_sym_AMP_AMP] = ACTIONS(500),
    [anon_sym_GT_GT_GT] = ACTIONS(500),
    [anon_sym_STAR] = ACTIONS(500),
    [anon_sym_COLON] = ACTIONS(500),
    [anon_sym_GT_EQ] = ACTIONS(500),
    [anon_sym_RBRACK] = ACTIONS(500),
    [anon_sym_RPAREN] = ACTIONS(500),
    [anon_sym_PIPE] = ACTIONS(502),
    [anon_sym_COMMA] = ACTIONS(500),
    [anon_sym_LT] = ACTIONS(502),
    [anon_sym_GT_GT] = ACTIONS(502),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_BANG_EQ] = ACTIONS(500),
    [anon_sym_LBRACK] = ACTIONS(500),
    [anon_sym_DOT_DOT] = ACTIONS(500),
    [anon_sym_AMP] = ACTIONS(502),
    [anon_sym_RBRACE] = ACTIONS(500),
    [anon_sym_PIPE_PIPE] = ACTIONS(500),
    [anon_sym_GT] = ACTIONS(502),
    [anon_sym_SLASH] = ACTIONS(502),
    [anon_sym_DASH] = ACTIONS(500),
    [anon_sym_LT_EQ] = ACTIONS(500),
  },
  [152] = {
    [sym_binary_expression] = STATE(160),
    [sym_mux_expression] = STATE(160),
    [sym_parenthesized_expression] = STATE(160),
    [sym_predefined_constant] = STATE(160),
    [sym_true] = STATE(160),
    [sym_in_expression] = STATE(160),
    [sym_slice_expression] = STATE(160),
    [sym_false] = STATE(160),
    [sym__expression] = STATE(160),
    [sym_assignment_expression] = STATE(160),
    [sym_unary_expression] = STATE(160),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(504),
    [anon_sym_BANG] = ACTIONS(410),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(412),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(410),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(410),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(410),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(414),
  },
  [153] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(506),
    [sym_identifier] = ACTIONS(506),
  },
  [154] = {
    [anon_sym_EQ_EQ] = ACTIONS(374),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(73),
    [anon_sym_CARET] = ACTIONS(376),
    [anon_sym_LT_LT] = ACTIONS(378),
    [anon_sym_AMP_AMP] = ACTIONS(380),
    [anon_sym_GT_GT_GT] = ACTIONS(378),
    [anon_sym_STAR] = ACTIONS(378),
    [anon_sym_GT_EQ] = ACTIONS(374),
    [anon_sym_COMMA] = ACTIONS(347),
    [anon_sym_PIPE] = ACTIONS(382),
    [anon_sym_LT] = ACTIONS(386),
    [anon_sym_GT_GT] = ACTIONS(388),
    [anon_sym_PLUS] = ACTIONS(390),
    [anon_sym_BANG_EQ] = ACTIONS(374),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(392),
    [anon_sym_RBRACE] = ACTIONS(347),
    [anon_sym_PIPE_PIPE] = ACTIONS(376),
    [anon_sym_GT] = ACTIONS(386),
    [anon_sym_SLASH] = ACTIONS(388),
    [anon_sym_DASH] = ACTIONS(390),
    [anon_sym_LT_EQ] = ACTIONS(374),
  },
  [155] = {
    [sym_binary_expression] = STATE(161),
    [sym_mux_expression] = STATE(161),
    [sym_parenthesized_expression] = STATE(161),
    [sym_predefined_constant] = STATE(161),
    [sym_true] = STATE(161),
    [sym_in_expression] = STATE(161),
    [sym_slice_expression] = STATE(161),
    [sym_false] = STATE(161),
    [sym__expression] = STATE(161),
    [sym_assignment_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_REG_RSP] = ACTIONS(7),
    [anon_sym_HALT] = ACTIONS(7),
    [anon_sym_RRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R12] = ACTIONS(7),
    [anon_sym_NE] = ACTIONS(7),
    [anon_sym_GT2] = ACTIONS(7),
    [anon_sym_ALWAYS] = ACTIONS(7),
    [sym_number] = ACTIONS(508),
    [anon_sym_BANG] = ACTIONS(410),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_REG_RBP] = ACTIONS(7),
    [anon_sym_NOP] = ACTIONS(7),
    [anon_sym_IRMOVQ] = ACTIONS(7),
    [anon_sym_REG_R13] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(412),
    [anon_sym_ADDQ] = ACTIONS(7),
    [anon_sym_OPQ] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(410),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_STAT_INS] = ACTIONS(7),
    [anon_sym_STAT_BUB] = ACTIONS(7),
    [anon_sym_RMMOVQ] = ACTIONS(7),
    [anon_sym_REG_RSI] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_SUBQ] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(410),
    [anon_sym_FALSE] = ACTIONS(17),
    [anon_sym_STAT_PIP] = ACTIONS(7),
    [anon_sym_STAT_AOK] = ACTIONS(7),
    [anon_sym_MRMOVQ] = ACTIONS(7),
    [anon_sym_REG_RDI] = ACTIONS(7),
    [anon_sym_LE] = ACTIONS(7),
    [anon_sym_CALL] = ACTIONS(7),
    [anon_sym_PUSHQ] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(410),
    [anon_sym_ANDQ] = ACTIONS(7),
    [anon_sym_REG_RAX] = ACTIONS(7),
    [anon_sym_REG_RDX] = ACTIONS(7),
    [anon_sym_STAT_HLT] = ACTIONS(7),
    [anon_sym_REG_R14] = ACTIONS(7),
    [anon_sym_REG_R8] = ACTIONS(7),
    [anon_sym_REG_R10] = ACTIONS(7),
    [anon_sym_LT2] = ACTIONS(7),
    [anon_sym_RET] = ACTIONS(7),
    [anon_sym_POPQ] = ACTIONS(7),
    [anon_sym_XORQ] = ACTIONS(7),
    [anon_sym_REG_RCX] = ACTIONS(7),
    [anon_sym_REG_RBX] = ACTIONS(7),
    [anon_sym_STAT_ADR] = ACTIONS(7),
    [anon_sym_REG_NONE] = ACTIONS(7),
    [anon_sym_REG_R9] = ACTIONS(7),
    [anon_sym_REG_R11] = ACTIONS(7),
    [anon_sym_EQ2] = ACTIONS(7),
    [anon_sym_GE] = ACTIONS(7),
    [anon_sym_CMOVXX] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(414),
  },
  [156] = {
    [anon_sym_EQ_EQ] = ACTIONS(457),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(73),
    [anon_sym_CARET] = ACTIONS(459),
    [anon_sym_LT_LT] = ACTIONS(461),
    [anon_sym_AMP_AMP] = ACTIONS(463),
    [anon_sym_GT_GT_GT] = ACTIONS(461),
    [anon_sym_STAR] = ACTIONS(461),
    [anon_sym_GT_EQ] = ACTIONS(457),
    [anon_sym_RBRACK] = ACTIONS(299),
    [anon_sym_PIPE] = ACTIONS(467),
    [anon_sym_LT] = ACTIONS(469),
    [anon_sym_GT_GT] = ACTIONS(471),
    [anon_sym_PLUS] = ACTIONS(473),
    [anon_sym_BANG_EQ] = ACTIONS(457),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(475),
    [anon_sym_PIPE_PIPE] = ACTIONS(459),
    [anon_sym_GT] = ACTIONS(469),
    [anon_sym_SLASH] = ACTIONS(471),
    [anon_sym_DASH] = ACTIONS(473),
    [anon_sym_LT_EQ] = ACTIONS(457),
  },
  [157] = {
    [anon_sym_EQ_EQ] = ACTIONS(301),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(301),
    [anon_sym_CARET] = ACTIONS(301),
    [anon_sym_LT_LT] = ACTIONS(461),
    [anon_sym_AMP_AMP] = ACTIONS(301),
    [anon_sym_GT_GT_GT] = ACTIONS(461),
    [anon_sym_STAR] = ACTIONS(461),
    [anon_sym_GT_EQ] = ACTIONS(301),
    [anon_sym_RBRACK] = ACTIONS(301),
    [anon_sym_PIPE] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(303),
    [anon_sym_GT_GT] = ACTIONS(471),
    [anon_sym_PLUS] = ACTIONS(301),
    [anon_sym_BANG_EQ] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(303),
    [anon_sym_PIPE_PIPE] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(303),
    [anon_sym_SLASH] = ACTIONS(471),
    [anon_sym_DASH] = ACTIONS(301),
    [anon_sym_LT_EQ] = ACTIONS(301),
  },
  [158] = {
    [anon_sym_EQ_EQ] = ACTIONS(457),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(301),
    [anon_sym_CARET] = ACTIONS(301),
    [anon_sym_LT_LT] = ACTIONS(461),
    [anon_sym_AMP_AMP] = ACTIONS(463),
    [anon_sym_GT_GT_GT] = ACTIONS(461),
    [anon_sym_STAR] = ACTIONS(461),
    [anon_sym_GT_EQ] = ACTIONS(457),
    [anon_sym_RBRACK] = ACTIONS(301),
    [anon_sym_PIPE] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(469),
    [anon_sym_GT_GT] = ACTIONS(471),
    [anon_sym_PLUS] = ACTIONS(473),
    [anon_sym_BANG_EQ] = ACTIONS(457),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(475),
    [anon_sym_PIPE_PIPE] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(469),
    [anon_sym_SLASH] = ACTIONS(471),
    [anon_sym_DASH] = ACTIONS(473),
    [anon_sym_LT_EQ] = ACTIONS(457),
  },
  [159] = {
    [anon_sym_EQ_EQ] = ACTIONS(457),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(301),
    [anon_sym_CARET] = ACTIONS(301),
    [anon_sym_LT_LT] = ACTIONS(461),
    [anon_sym_AMP_AMP] = ACTIONS(301),
    [anon_sym_GT_GT_GT] = ACTIONS(461),
    [anon_sym_STAR] = ACTIONS(461),
    [anon_sym_GT_EQ] = ACTIONS(457),
    [anon_sym_RBRACK] = ACTIONS(301),
    [anon_sym_PIPE] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(469),
    [anon_sym_GT_GT] = ACTIONS(471),
    [anon_sym_PLUS] = ACTIONS(473),
    [anon_sym_BANG_EQ] = ACTIONS(457),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(303),
    [anon_sym_PIPE_PIPE] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(469),
    [anon_sym_SLASH] = ACTIONS(471),
    [anon_sym_DASH] = ACTIONS(473),
    [anon_sym_LT_EQ] = ACTIONS(457),
  },
  [160] = {
    [anon_sym_EQ_EQ] = ACTIONS(457),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(301),
    [anon_sym_CARET] = ACTIONS(301),
    [anon_sym_LT_LT] = ACTIONS(461),
    [anon_sym_AMP_AMP] = ACTIONS(301),
    [anon_sym_GT_GT_GT] = ACTIONS(461),
    [anon_sym_STAR] = ACTIONS(461),
    [anon_sym_GT_EQ] = ACTIONS(457),
    [anon_sym_RBRACK] = ACTIONS(301),
    [anon_sym_PIPE] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(469),
    [anon_sym_GT_GT] = ACTIONS(471),
    [anon_sym_PLUS] = ACTIONS(301),
    [anon_sym_BANG_EQ] = ACTIONS(457),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(303),
    [anon_sym_PIPE_PIPE] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(469),
    [anon_sym_SLASH] = ACTIONS(471),
    [anon_sym_DASH] = ACTIONS(301),
    [anon_sym_LT_EQ] = ACTIONS(457),
  },
  [161] = {
    [anon_sym_EQ_EQ] = ACTIONS(457),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(73),
    [anon_sym_CARET] = ACTIONS(459),
    [anon_sym_LT_LT] = ACTIONS(461),
    [anon_sym_AMP_AMP] = ACTIONS(463),
    [anon_sym_GT_GT_GT] = ACTIONS(461),
    [anon_sym_STAR] = ACTIONS(461),
    [anon_sym_GT_EQ] = ACTIONS(457),
    [anon_sym_RBRACK] = ACTIONS(347),
    [anon_sym_PIPE] = ACTIONS(467),
    [anon_sym_LT] = ACTIONS(469),
    [anon_sym_GT_GT] = ACTIONS(471),
    [anon_sym_PLUS] = ACTIONS(473),
    [anon_sym_BANG_EQ] = ACTIONS(457),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(475),
    [anon_sym_PIPE_PIPE] = ACTIONS(459),
    [anon_sym_GT] = ACTIONS(469),
    [anon_sym_SLASH] = ACTIONS(471),
    [anon_sym_DASH] = ACTIONS(473),
    [anon_sym_LT_EQ] = ACTIONS(457),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = false}, SHIFT(2),
  [7] = {.count = 1, .reusable = false}, SHIFT(3),
  [9] = {.count = 1, .reusable = false}, SHIFT(4),
  [11] = {.count = 1, .reusable = true}, SHIFT(12),
  [13] = {.count = 1, .reusable = true}, SHIFT(5),
  [15] = {.count = 1, .reusable = false}, SHIFT(6),
  [17] = {.count = 1, .reusable = false}, SHIFT(7),
  [19] = {.count = 1, .reusable = true}, SHIFT(8),
  [21] = {.count = 1, .reusable = true}, SHIFT(9),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [25] = {.count = 1, .reusable = false}, SHIFT(10),
  [27] = {.count = 1, .reusable = false}, SHIFT(11),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_true, 1),
  [31] = {.count = 1, .reusable = false}, REDUCE(sym_true, 1),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_predefined_constant, 1),
  [35] = {.count = 1, .reusable = false}, REDUCE(sym_predefined_constant, 1),
  [37] = {.count = 1, .reusable = true}, SHIFT(15),
  [39] = {.count = 1, .reusable = true}, SHIFT(16),
  [41] = {.count = 1, .reusable = true}, SHIFT(17),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_false, 1),
  [45] = {.count = 1, .reusable = false}, REDUCE(sym_false, 1),
  [47] = {.count = 1, .reusable = true}, SHIFT(22),
  [49] = {.count = 1, .reusable = true}, SHIFT(18),
  [51] = {.count = 1, .reusable = false}, SHIFT(19),
  [53] = {.count = 1, .reusable = false}, SHIFT(20),
  [55] = {.count = 1, .reusable = true}, SHIFT(26),
  [57] = {.count = 1, .reusable = true}, SHIFT(23),
  [59] = {.count = 1, .reusable = false}, SHIFT(24),
  [61] = {.count = 1, .reusable = false}, SHIFT(25),
  [63] = {.count = 1, .reusable = true}, SHIFT(27),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym__expression, 1),
  [67] = {.count = 1, .reusable = false}, SHIFT(29),
  [69] = {.count = 1, .reusable = false}, REDUCE(sym__expression, 1),
  [71] = {.count = 1, .reusable = true}, SHIFT(30),
  [73] = {.count = 1, .reusable = true}, SHIFT(31),
  [75] = {.count = 1, .reusable = true}, SHIFT(32),
  [77] = {.count = 1, .reusable = true}, SHIFT(33),
  [79] = {.count = 1, .reusable = true}, SHIFT(34),
  [81] = {.count = 1, .reusable = true}, SHIFT(35),
  [83] = {.count = 1, .reusable = false}, SHIFT(32),
  [85] = {.count = 1, .reusable = false}, SHIFT(30),
  [87] = {.count = 1, .reusable = false}, SHIFT(34),
  [89] = {.count = 1, .reusable = true}, SHIFT(36),
  [91] = {.count = 1, .reusable = true}, SHIFT(37),
  [93] = {.count = 1, .reusable = false}, SHIFT(35),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [97] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [99] = {.count = 1, .reusable = true}, SHIFT(39),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_unary_expression, 2),
  [103] = {.count = 1, .reusable = false}, REDUCE(sym_unary_expression, 2),
  [105] = {.count = 1, .reusable = true}, SHIFT(40),
  [107] = {.count = 1, .reusable = true}, SHIFT(41),
  [109] = {.count = 1, .reusable = false}, SHIFT(42),
  [111] = {.count = 1, .reusable = true}, SHIFT(43),
  [113] = {.count = 1, .reusable = true}, SHIFT(45),
  [115] = {.count = 1, .reusable = true}, SHIFT(46),
  [117] = {.count = 1, .reusable = true}, SHIFT(47),
  [119] = {.count = 1, .reusable = true}, SHIFT(48),
  [121] = {.count = 1, .reusable = true}, SHIFT(49),
  [123] = {.count = 1, .reusable = false}, SHIFT(46),
  [125] = {.count = 1, .reusable = false}, SHIFT(45),
  [127] = {.count = 1, .reusable = false}, SHIFT(47),
  [129] = {.count = 1, .reusable = true}, SHIFT(50),
  [131] = {.count = 1, .reusable = false}, SHIFT(49),
  [133] = {.count = 1, .reusable = true}, SHIFT(51),
  [135] = {.count = 1, .reusable = false}, SHIFT(52),
  [137] = {.count = 1, .reusable = true}, SHIFT(53),
  [139] = {.count = 1, .reusable = true}, SHIFT(54),
  [141] = {.count = 1, .reusable = true}, SHIFT(55),
  [143] = {.count = 1, .reusable = true}, SHIFT(56),
  [145] = {.count = 1, .reusable = true}, SHIFT(57),
  [147] = {.count = 1, .reusable = false}, SHIFT(54),
  [149] = {.count = 1, .reusable = false}, SHIFT(53),
  [151] = {.count = 1, .reusable = false}, SHIFT(55),
  [153] = {.count = 1, .reusable = true}, SHIFT(58),
  [155] = {.count = 1, .reusable = false}, SHIFT(56),
  [157] = {.count = 1, .reusable = true}, SHIFT(59),
  [159] = {.count = 1, .reusable = true}, SHIFT(60),
  [161] = {.count = 1, .reusable = true}, SHIFT(61),
  [163] = {.count = 1, .reusable = true}, SHIFT(63),
  [165] = {.count = 1, .reusable = true}, SHIFT(64),
  [167] = {.count = 1, .reusable = true}, SHIFT(65),
  [169] = {.count = 1, .reusable = true}, SHIFT(66),
  [171] = {.count = 1, .reusable = false}, REDUCE(sym__statement, 2),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym__statement, 2),
  [175] = {.count = 1, .reusable = true}, SHIFT(67),
  [177] = {.count = 1, .reusable = true}, SHIFT(68),
  [179] = {.count = 1, .reusable = true}, SHIFT(69),
  [181] = {.count = 1, .reusable = true}, SHIFT(73),
  [183] = {.count = 1, .reusable = true}, SHIFT(70),
  [185] = {.count = 1, .reusable = false}, SHIFT(71),
  [187] = {.count = 1, .reusable = false}, SHIFT(72),
  [189] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [192] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [195] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [198] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [201] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [204] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [207] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [210] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [213] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [216] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [218] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [221] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [224] = {.count = 1, .reusable = true}, SHIFT(74),
  [226] = {.count = 1, .reusable = true}, SHIFT(77),
  [228] = {.count = 1, .reusable = true}, SHIFT(78),
  [230] = {.count = 1, .reusable = true}, SHIFT(79),
  [232] = {.count = 1, .reusable = true}, REDUCE(sym_mux_expression, 3),
  [234] = {.count = 1, .reusable = false}, REDUCE(sym_mux_expression, 3),
  [236] = {.count = 2, .reusable = false}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(2),
  [239] = {.count = 2, .reusable = false}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(3),
  [242] = {.count = 2, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(22),
  [245] = {.count = 2, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(18),
  [248] = {.count = 2, .reusable = false}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(19),
  [251] = {.count = 2, .reusable = false}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(7),
  [254] = {.count = 2, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(8),
  [257] = {.count = 2, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(9),
  [260] = {.count = 1, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 2),
  [262] = {.count = 2, .reusable = false}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(20),
  [265] = {.count = 1, .reusable = true}, SHIFT(80),
  [267] = {.count = 1, .reusable = true}, SHIFT(81),
  [269] = {.count = 1, .reusable = true}, SHIFT(82),
  [271] = {.count = 1, .reusable = true}, SHIFT(83),
  [273] = {.count = 1, .reusable = true}, SHIFT(84),
  [275] = {.count = 1, .reusable = true}, SHIFT(85),
  [277] = {.count = 1, .reusable = true}, SHIFT(86),
  [279] = {.count = 1, .reusable = true}, SHIFT(87),
  [281] = {.count = 1, .reusable = true}, SHIFT(88),
  [283] = {.count = 1, .reusable = true}, SHIFT(89),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_parenthesized_expression, 3),
  [287] = {.count = 1, .reusable = false}, REDUCE(sym_parenthesized_expression, 3),
  [289] = {.count = 1, .reusable = true}, SHIFT(90),
  [291] = {.count = 1, .reusable = true}, SHIFT(91),
  [293] = {.count = 1, .reusable = false}, REDUCE(sym_wire_declaration, 3),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym_wire_declaration, 3),
  [297] = {.count = 1, .reusable = true}, SHIFT(93),
  [299] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 3),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [303] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3),
  [305] = {.count = 1, .reusable = true}, SHIFT(99),
  [307] = {.count = 1, .reusable = true}, SHIFT(95),
  [309] = {.count = 1, .reusable = false}, SHIFT(96),
  [311] = {.count = 1, .reusable = true}, SHIFT(97),
  [313] = {.count = 1, .reusable = false}, SHIFT(98),
  [315] = {.count = 1, .reusable = true}, SHIFT(100),
  [317] = {.count = 1, .reusable = false}, SHIFT(101),
  [319] = {.count = 1, .reusable = true}, SHIFT(102),
  [321] = {.count = 1, .reusable = true}, SHIFT(103),
  [323] = {.count = 1, .reusable = true}, SHIFT(104),
  [325] = {.count = 1, .reusable = true}, SHIFT(105),
  [327] = {.count = 1, .reusable = false}, SHIFT(103),
  [329] = {.count = 1, .reusable = false}, SHIFT(102),
  [331] = {.count = 1, .reusable = false}, SHIFT(104),
  [333] = {.count = 1, .reusable = true}, SHIFT(106),
  [335] = {.count = 1, .reusable = true}, SHIFT(107),
  [337] = {.count = 1, .reusable = false}, SHIFT(105),
  [339] = {.count = 1, .reusable = false}, REDUCE(sym_register_declaration, 4),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_register_declaration, 4),
  [343] = {.count = 1, .reusable = true}, SHIFT(108),
  [345] = {.count = 1, .reusable = true}, SHIFT(109),
  [347] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 4),
  [349] = {.count = 1, .reusable = true}, SHIFT(111),
  [351] = {.count = 1, .reusable = true}, SHIFT(112),
  [353] = {.count = 1, .reusable = true}, SHIFT(113),
  [355] = {.count = 1, .reusable = true}, REDUCE(sym_variable_declarator, 3),
  [357] = {.count = 1, .reusable = true}, REDUCE(aux_sym_wire_declaration_repeat1, 2),
  [359] = {.count = 1, .reusable = false}, REDUCE(sym_wire_declaration, 4),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym_wire_declaration, 4),
  [363] = {.count = 2, .reusable = true}, REDUCE(aux_sym_wire_declaration_repeat1, 2), SHIFT_REPEAT(61),
  [366] = {.count = 1, .reusable = true}, SHIFT(114),
  [368] = {.count = 1, .reusable = true}, REDUCE(sym_in_expression, 4),
  [370] = {.count = 1, .reusable = false}, REDUCE(sym_in_expression, 4),
  [372] = {.count = 1, .reusable = false}, SHIFT(115),
  [374] = {.count = 1, .reusable = true}, SHIFT(116),
  [376] = {.count = 1, .reusable = true}, SHIFT(117),
  [378] = {.count = 1, .reusable = true}, SHIFT(118),
  [380] = {.count = 1, .reusable = true}, SHIFT(119),
  [382] = {.count = 1, .reusable = false}, SHIFT(117),
  [384] = {.count = 1, .reusable = true}, SHIFT(120),
  [386] = {.count = 1, .reusable = false}, SHIFT(116),
  [388] = {.count = 1, .reusable = false}, SHIFT(118),
  [390] = {.count = 1, .reusable = true}, SHIFT(121),
  [392] = {.count = 1, .reusable = false}, SHIFT(119),
  [394] = {.count = 1, .reusable = true}, SHIFT(122),
  [396] = {.count = 1, .reusable = true}, SHIFT(124),
  [398] = {.count = 1, .reusable = true}, SHIFT(125),
  [400] = {.count = 1, .reusable = true}, SHIFT(126),
  [402] = {.count = 1, .reusable = true}, SHIFT(127),
  [404] = {.count = 1, .reusable = true}, SHIFT(128),
  [406] = {.count = 1, .reusable = true}, SHIFT(129),
  [408] = {.count = 1, .reusable = true}, SHIFT(133),
  [410] = {.count = 1, .reusable = true}, SHIFT(130),
  [412] = {.count = 1, .reusable = false}, SHIFT(131),
  [414] = {.count = 1, .reusable = false}, SHIFT(132),
  [416] = {.count = 1, .reusable = true}, SHIFT(134),
  [418] = {.count = 1, .reusable = false}, REDUCE(sym_register_declaration, 5),
  [420] = {.count = 1, .reusable = true}, REDUCE(sym_register_declaration, 5),
  [422] = {.count = 1, .reusable = true}, REDUCE(aux_sym_register_declaration_repeat1, 2),
  [424] = {.count = 2, .reusable = true}, REDUCE(aux_sym_register_declaration_repeat1, 2), SHIFT_REPEAT(27),
  [427] = {.count = 1, .reusable = false}, REDUCE(aux_sym_mux_expression_repeat1, 4),
  [429] = {.count = 1, .reusable = true}, REDUCE(aux_sym_mux_expression_repeat1, 4),
  [431] = {.count = 1, .reusable = true}, SHIFT(135),
  [433] = {.count = 1, .reusable = true}, SHIFT(136),
  [435] = {.count = 1, .reusable = true}, SHIFT(137),
  [437] = {.count = 1, .reusable = true}, SHIFT(138),
  [439] = {.count = 1, .reusable = true}, SHIFT(139),
  [441] = {.count = 1, .reusable = true}, SHIFT(140),
  [443] = {.count = 1, .reusable = true}, SHIFT(141),
  [445] = {.count = 1, .reusable = true}, REDUCE(sym_in_expression, 5),
  [447] = {.count = 1, .reusable = false}, REDUCE(sym_in_expression, 5),
  [449] = {.count = 1, .reusable = true}, SHIFT(142),
  [451] = {.count = 1, .reusable = true}, SHIFT(144),
  [453] = {.count = 1, .reusable = true}, SHIFT(145),
  [455] = {.count = 1, .reusable = false}, SHIFT(146),
  [457] = {.count = 1, .reusable = true}, SHIFT(147),
  [459] = {.count = 1, .reusable = true}, SHIFT(148),
  [461] = {.count = 1, .reusable = true}, SHIFT(149),
  [463] = {.count = 1, .reusable = true}, SHIFT(150),
  [465] = {.count = 1, .reusable = true}, SHIFT(151),
  [467] = {.count = 1, .reusable = false}, SHIFT(148),
  [469] = {.count = 1, .reusable = false}, SHIFT(147),
  [471] = {.count = 1, .reusable = false}, SHIFT(149),
  [473] = {.count = 1, .reusable = true}, SHIFT(152),
  [475] = {.count = 1, .reusable = false}, SHIFT(150),
  [477] = {.count = 1, .reusable = true}, SHIFT(153),
  [479] = {.count = 1, .reusable = true}, SHIFT(154),
  [481] = {.count = 1, .reusable = true}, REDUCE(aux_sym_in_expression_repeat1, 2),
  [483] = {.count = 1, .reusable = true}, REDUCE(sym_in_expression, 6),
  [485] = {.count = 1, .reusable = false}, REDUCE(sym_in_expression, 6),
  [487] = {.count = 2, .reusable = true}, REDUCE(aux_sym_in_expression_repeat1, 2), SHIFT_REPEAT(120),
  [490] = {.count = 1, .reusable = true}, SHIFT(155),
  [492] = {.count = 1, .reusable = true}, SHIFT(156),
  [494] = {.count = 1, .reusable = true}, SHIFT(157),
  [496] = {.count = 1, .reusable = true}, SHIFT(158),
  [498] = {.count = 1, .reusable = true}, SHIFT(159),
  [500] = {.count = 1, .reusable = true}, REDUCE(sym_slice_expression, 6),
  [502] = {.count = 1, .reusable = false}, REDUCE(sym_slice_expression, 6),
  [504] = {.count = 1, .reusable = true}, SHIFT(160),
  [506] = {.count = 1, .reusable = true}, REDUCE(sym__register_expression_statement, 4),
  [508] = {.count = 1, .reusable = true}, SHIFT(161),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hclrs(void) {
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
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
