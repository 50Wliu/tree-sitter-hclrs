#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 79
#define LARGE_STATE_COUNT 29
#define SYMBOL_COUNT 115
#define ALIAS_COUNT 0
#define TOKEN_COUNT 92
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
  anon_sym_SLASH_STAR = 91,
  sym_source_file = 92,
  sym__statement = 93,
  sym__declaration = 94,
  sym_wire_declaration = 95,
  sym_variable_declarator = 96,
  sym_register_declaration = 97,
  sym__register_expression_statement = 98,
  sym__expression = 99,
  sym_assignment_expression = 100,
  sym_mux_expression = 101,
  sym_parenthesized_expression = 102,
  sym_in_expression = 103,
  sym_slice_expression = 104,
  sym_unary_expression = 105,
  sym_binary_expression = 106,
  sym_predefined_constant = 107,
  sym_true = 108,
  sym_false = 109,
  aux_sym_source_file_repeat1 = 110,
  aux_sym_wire_declaration_repeat1 = 111,
  aux_sym_register_declaration_repeat1 = 112,
  aux_sym_mux_expression_repeat1 = 113,
  aux_sym_in_expression_repeat1 = 114,
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

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_wire] = anon_sym_wire,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_register] = anon_sym_register,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_register_name] = sym_register_name,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_GT_GT_GT] = anon_sym_GT_GT_GT,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_STAT_BUB] = anon_sym_STAT_BUB,
  [anon_sym_STAT_AOK] = anon_sym_STAT_AOK,
  [anon_sym_STAT_HLT] = anon_sym_STAT_HLT,
  [anon_sym_STAT_ADR] = anon_sym_STAT_ADR,
  [anon_sym_STAT_INS] = anon_sym_STAT_INS,
  [anon_sym_STAT_PIP] = anon_sym_STAT_PIP,
  [anon_sym_REG_RAX] = anon_sym_REG_RAX,
  [anon_sym_REG_RCX] = anon_sym_REG_RCX,
  [anon_sym_REG_RDX] = anon_sym_REG_RDX,
  [anon_sym_REG_RBX] = anon_sym_REG_RBX,
  [anon_sym_REG_RSP] = anon_sym_REG_RSP,
  [anon_sym_REG_RBP] = anon_sym_REG_RBP,
  [anon_sym_REG_RSI] = anon_sym_REG_RSI,
  [anon_sym_REG_RDI] = anon_sym_REG_RDI,
  [anon_sym_REG_R8] = anon_sym_REG_R8,
  [anon_sym_REG_R9] = anon_sym_REG_R9,
  [anon_sym_REG_R10] = anon_sym_REG_R10,
  [anon_sym_REG_R11] = anon_sym_REG_R11,
  [anon_sym_REG_R12] = anon_sym_REG_R12,
  [anon_sym_REG_R13] = anon_sym_REG_R13,
  [anon_sym_REG_R14] = anon_sym_REG_R14,
  [anon_sym_REG_NONE] = anon_sym_REG_NONE,
  [anon_sym_HALT] = anon_sym_HALT,
  [anon_sym_NOP] = anon_sym_NOP,
  [anon_sym_RRMOVQ] = anon_sym_RRMOVQ,
  [anon_sym_IRMOVQ] = anon_sym_IRMOVQ,
  [anon_sym_RMMOVQ] = anon_sym_RMMOVQ,
  [anon_sym_MRMOVQ] = anon_sym_MRMOVQ,
  [anon_sym_OPQ] = anon_sym_OPQ,
  [anon_sym_JXX] = anon_sym_JXX,
  [anon_sym_CALL] = anon_sym_CALL,
  [anon_sym_RET] = anon_sym_RET,
  [anon_sym_PUSHQ] = anon_sym_PUSHQ,
  [anon_sym_POPQ] = anon_sym_POPQ,
  [anon_sym_CMOVXX] = anon_sym_CMOVXX,
  [anon_sym_ALWAYS] = anon_sym_ALWAYS,
  [anon_sym_LE] = anon_sym_LE,
  [anon_sym_LT2] = anon_sym_LT2,
  [anon_sym_EQ2] = anon_sym_EQ2,
  [anon_sym_NE] = anon_sym_NE,
  [anon_sym_GE] = anon_sym_GE,
  [anon_sym_GT2] = anon_sym_GT2,
  [anon_sym_ADDQ] = anon_sym_ADDQ,
  [anon_sym_SUBQ] = anon_sym_SUBQ,
  [anon_sym_ANDQ] = anon_sym_ANDQ,
  [anon_sym_XORQ] = anon_sym_XORQ,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_TRUE] = anon_sym_TRUE,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_FALSE] = anon_sym_FALSE,
  [sym_comment] = sym_comment,
  [sym_pound_comment] = sym_pound_comment,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym__declaration] = sym__declaration,
  [sym_wire_declaration] = sym_wire_declaration,
  [sym_variable_declarator] = sym_variable_declarator,
  [sym_register_declaration] = sym_register_declaration,
  [sym__register_expression_statement] = sym__register_expression_statement,
  [sym__expression] = sym__expression,
  [sym_assignment_expression] = sym_assignment_expression,
  [sym_mux_expression] = sym_mux_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_in_expression] = sym_in_expression,
  [sym_slice_expression] = sym_slice_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_predefined_constant] = sym_predefined_constant,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_wire_declaration_repeat1] = aux_sym_wire_declaration_repeat1,
  [aux_sym_register_declaration_repeat1] = aux_sym_register_declaration_repeat1,
  [aux_sym_mux_expression_repeat1] = aux_sym_mux_expression_repeat1,
  [aux_sym_in_expression_repeat1] = aux_sym_in_expression_repeat1,
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

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < '['
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= '#' || (c < ':'
        ? (c >= '%' && c <= '/')
        : c <= '@')))
    : (c <= '^' || (c < 8203
      ? (c < '{'
        ? c == '`'
        : (c <= '~' || c == 160))
      : (c <= 8203 || (c < 65279
        ? c == 8288
        : c <= 65279)))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < '['
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= '#' || (c < ':'
        ? (c >= '%' && c <= '/')
        : c <= '@')))
    : (c <= '`' || (c < 8203
      ? (c < 160
        ? (c >= '{' && c <= '~')
        : c <= 160)
      : (c <= 8203 || (c < 65279
        ? c == 8288
        : c <= 65279)))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == '&') ADVANCE(55);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '*') ADVANCE(49);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == '0') ADVANCE(221);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == '<') ADVANCE(46);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(45);
      if (lookahead == 'A') ADVANCE(114);
      if (lookahead == 'C') ADVANCE(106);
      if (lookahead == 'E') ADVANCE(156);
      if (lookahead == 'F') ADVANCE(109);
      if (lookahead == 'G') ADVANCE(118);
      if (lookahead == 'H') ADVANCE(111);
      if (lookahead == 'I') ADVANCE(168);
      if (lookahead == 'J') ADVANCE(193);
      if (lookahead == 'L') ADVANCE(119);
      if (lookahead == 'M') ADVANCE(172);
      if (lookahead == 'N') ADVANCE(120);
      if (lookahead == 'O') ADVANCE(154);
      if (lookahead == 'P') ADVANCE(147);
      if (lookahead == 'R') ADVANCE(121);
      if (lookahead == 'S') ADVANCE(179);
      if (lookahead == 'T') ADVANCE(169);
      if (lookahead == 'X') ADVANCE(146);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == ']') ADVANCE(30);
      if (lookahead == '^') ADVANCE(57);
      if (lookahead == 'c') ADVANCE(210);
      if (lookahead == 'f') ADVANCE(198);
      if (lookahead == 'i') ADVANCE(208);
      if (lookahead == 'r') ADVANCE(199);
      if (lookahead == 't') ADVANCE(211);
      if (lookahead == 'w') ADVANCE(205);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '|') ADVANCE(56);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '~') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '%' || '@' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(220);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(221);
      if (lookahead == 'A') ADVANCE(114);
      if (lookahead == 'C') ADVANCE(106);
      if (lookahead == 'E') ADVANCE(156);
      if (lookahead == 'F') ADVANCE(109);
      if (lookahead == 'G') ADVANCE(118);
      if (lookahead == 'H') ADVANCE(111);
      if (lookahead == 'I') ADVANCE(168);
      if (lookahead == 'J') ADVANCE(193);
      if (lookahead == 'L') ADVANCE(119);
      if (lookahead == 'M') ADVANCE(172);
      if (lookahead == 'N') ADVANCE(120);
      if (lookahead == 'O') ADVANCE(154);
      if (lookahead == 'P') ADVANCE(147);
      if (lookahead == 'R') ADVANCE(121);
      if (lookahead == 'S') ADVANCE(179);
      if (lookahead == 'T') ADVANCE(169);
      if (lookahead == 'X') ADVANCE(146);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == ']') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(210);
      if (lookahead == 'f') ADVANCE(198);
      if (lookahead == 't') ADVANCE(211);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '~') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '%' || '@' < lookahead) &&
          (lookahead < '\\' || '^' < lookahead) &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '|') ADVANCE(220);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == '&') ADVANCE(55);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '*') ADVANCE(49);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == '<') ADVANCE(46);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(45);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == ']') ADVANCE(30);
      if (lookahead == '^') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(10);
      if (lookahead == '|') ADVANCE(56);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(3)
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          (lookahead < '%' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(220);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(230);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(231);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(35);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 12:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(223);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(221);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == 'A') ADVANCE(114);
      if (lookahead == 'C') ADVANCE(106);
      if (lookahead == 'E') ADVANCE(156);
      if (lookahead == 'F') ADVANCE(109);
      if (lookahead == 'G') ADVANCE(118);
      if (lookahead == 'H') ADVANCE(111);
      if (lookahead == 'I') ADVANCE(168);
      if (lookahead == 'J') ADVANCE(193);
      if (lookahead == 'L') ADVANCE(119);
      if (lookahead == 'M') ADVANCE(172);
      if (lookahead == 'N') ADVANCE(120);
      if (lookahead == 'O') ADVANCE(154);
      if (lookahead == 'P') ADVANCE(147);
      if (lookahead == 'R') ADVANCE(121);
      if (lookahead == 'S') ADVANCE(179);
      if (lookahead == 'T') ADVANCE(169);
      if (lookahead == 'X') ADVANCE(146);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(210);
      if (lookahead == 'f') ADVANCE(198);
      if (lookahead == 'r') ADVANCE(199);
      if (lookahead == 't') ADVANCE(211);
      if (lookahead == 'w') ADVANCE(205);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '~') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(16)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '%' || '@' < lookahead) &&
          (lookahead < '\\' || '^' < lookahead) &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(220);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_wire);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_register);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_register_name);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(41);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_const);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_in);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '>') ADVANCE(52);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == '=') ADVANCE(44);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(232);
      if (lookahead == '/') ADVANCE(231);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(231);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '>') ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(47);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(48);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_STAT_BUB);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_STAT_AOK);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_STAT_HLT);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_STAT_ADR);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_STAT_INS);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_STAT_PIP);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_REG_RAX);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_REG_RCX);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_REG_RDX);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_REG_RBX);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_REG_RSP);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_REG_RBP);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_REG_RSI);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_REG_RDI);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_REG_R8);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_REG_R9);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_REG_R10);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_REG_R11);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_REG_R12);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_REG_R13);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_REG_R14);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_REG_NONE);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_HALT);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_NOP);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_RRMOVQ);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_IRMOVQ);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_RMMOVQ);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_MRMOVQ);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_OPQ);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_JXX);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_CALL);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_RET);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_PUSHQ);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_POPQ);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_CMOVXX);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_ALWAYS);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LE);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LT2);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_EQ2);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_NE);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_GE);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_GT2);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_ADDQ);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_SUBQ);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_ANDQ);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_XORQ);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(74);
      if (lookahead == '1') ADVANCE(75);
      if (lookahead == '2') ADVANCE(76);
      if (lookahead == '3') ADVANCE(77);
      if (lookahead == '4') ADVANCE(78);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(104);
      if (lookahead == '8') ADVANCE(72);
      if (lookahead == '9') ADVANCE(73);
      if (lookahead == 'A') ADVANCE(191);
      if (lookahead == 'B') ADVANCE(152);
      if (lookahead == 'C') ADVANCE(192);
      if (lookahead == 'D') ADVANCE(127);
      if (lookahead == 'S') ADVANCE(128);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(135);
      if (lookahead == 'M') ADVANCE(143);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(195);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(117);
      if (lookahead == 'B') ADVANCE(182);
      if (lookahead == 'H') ADVANCE(134);
      if (lookahead == 'I') ADVANCE(142);
      if (lookahead == 'P') ADVANCE(129);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(133);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(180);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(131);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(58);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(161);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(115);
      if (lookahead == 'L') ADVANCE(188);
      if (lookahead == 'N') ADVANCE(116);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(158);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(159);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(170);
      if (lookahead == 'O') ADVANCE(130);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(98);
      if (lookahead == 'T') ADVANCE(99);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(94);
      if (lookahead == 'T') ADVANCE(95);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(97);
      if (lookahead == 'O') ADVANCE(151);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(125);
      if (lookahead == 'M') ADVANCE(138);
      if (lookahead == 'R') ADVANCE(139);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(227);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(229);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(79);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(196);
      if (lookahead == 'T') ADVANCE(89);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(163);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(71);
      if (lookahead == 'X') ADVANCE(66);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(70);
      if (lookahead == 'P') ADVANCE(68);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(153);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(59);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(177);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(88);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(176);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(178);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(132);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(145);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(148);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(149);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(150);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(124);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(144);
      if (lookahead == 'R') ADVANCE(105);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(175);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(187);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(140);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(183);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(171);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(155);
      if (lookahead == 'U') ADVANCE(173);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(184);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(185);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(186);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(81);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(69);
      if (lookahead == 'X') ADVANCE(67);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(63);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(157);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(160);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q') ADVANCE(96);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q') ADVANCE(86);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q') ADVANCE(100);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q') ADVANCE(102);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q') ADVANCE(91);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q') ADVANCE(101);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q') ADVANCE(103);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q') ADVANCE(90);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q') ADVANCE(83);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q') ADVANCE(85);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q') ADVANCE(84);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q') ADVANCE(82);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(136);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(181);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(61);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(162);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(137);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(126);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(93);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(62);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(123);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(80);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(60);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(110);
      if (lookahead == 'U') ADVANCE(113);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(197);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(122);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(112);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(164);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(165);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(166);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(167);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(194);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W') ADVANCE(107);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(87);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(92);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(64);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(65);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(189);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(190);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y') ADVANCE(174);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(141);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(108);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(207);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(204);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(226);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(19);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(228);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(212);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(206);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(213);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(215);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(216);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(34);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(214);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(209);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(219);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(22);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(201);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(217);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(218);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(202);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(28);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(203);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(200);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(12);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(14);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_true);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_false);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 16},
  [2] = {.lex_state = 16},
  [3] = {.lex_state = 16},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 16},
  [24] = {.lex_state = 16},
  [25] = {.lex_state = 16},
  [26] = {.lex_state = 16},
  [27] = {.lex_state = 16},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 16},
  [61] = {.lex_state = 16},
  [62] = {.lex_state = 16},
  [63] = {.lex_state = 16},
  [64] = {.lex_state = 16},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 16},
  [71] = {.lex_state = 16},
  [72] = {.lex_state = 16},
  [73] = {.lex_state = 16},
  [74] = {.lex_state = 16},
  [75] = {.lex_state = 16},
  [76] = {.lex_state = 16},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 4},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_wire] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_register] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_GT_GT_GT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_STAT_BUB] = ACTIONS(1),
    [anon_sym_STAT_AOK] = ACTIONS(1),
    [anon_sym_STAT_HLT] = ACTIONS(1),
    [anon_sym_STAT_ADR] = ACTIONS(1),
    [anon_sym_STAT_INS] = ACTIONS(1),
    [anon_sym_STAT_PIP] = ACTIONS(1),
    [anon_sym_REG_RAX] = ACTIONS(1),
    [anon_sym_REG_RCX] = ACTIONS(1),
    [anon_sym_REG_RDX] = ACTIONS(1),
    [anon_sym_REG_RBX] = ACTIONS(1),
    [anon_sym_REG_RSP] = ACTIONS(1),
    [anon_sym_REG_RBP] = ACTIONS(1),
    [anon_sym_REG_RSI] = ACTIONS(1),
    [anon_sym_REG_RDI] = ACTIONS(1),
    [anon_sym_REG_R8] = ACTIONS(1),
    [anon_sym_REG_R9] = ACTIONS(1),
    [anon_sym_REG_R10] = ACTIONS(1),
    [anon_sym_REG_R11] = ACTIONS(1),
    [anon_sym_REG_R12] = ACTIONS(1),
    [anon_sym_REG_R13] = ACTIONS(1),
    [anon_sym_REG_R14] = ACTIONS(1),
    [anon_sym_REG_NONE] = ACTIONS(1),
    [anon_sym_HALT] = ACTIONS(1),
    [anon_sym_NOP] = ACTIONS(1),
    [anon_sym_RRMOVQ] = ACTIONS(1),
    [anon_sym_IRMOVQ] = ACTIONS(1),
    [anon_sym_RMMOVQ] = ACTIONS(1),
    [anon_sym_MRMOVQ] = ACTIONS(1),
    [anon_sym_OPQ] = ACTIONS(1),
    [anon_sym_JXX] = ACTIONS(1),
    [anon_sym_CALL] = ACTIONS(1),
    [anon_sym_RET] = ACTIONS(1),
    [anon_sym_PUSHQ] = ACTIONS(1),
    [anon_sym_POPQ] = ACTIONS(1),
    [anon_sym_CMOVXX] = ACTIONS(1),
    [anon_sym_ALWAYS] = ACTIONS(1),
    [anon_sym_LE] = ACTIONS(1),
    [anon_sym_LT2] = ACTIONS(1),
    [anon_sym_EQ2] = ACTIONS(1),
    [anon_sym_NE] = ACTIONS(1),
    [anon_sym_GE] = ACTIONS(1),
    [anon_sym_GT2] = ACTIONS(1),
    [anon_sym_ADDQ] = ACTIONS(1),
    [anon_sym_SUBQ] = ACTIONS(1),
    [anon_sym_ANDQ] = ACTIONS(1),
    [anon_sym_XORQ] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_TRUE] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_FALSE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_pound_comment] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(76),
    [sym__statement] = STATE(3),
    [sym__declaration] = STATE(3),
    [sym_wire_declaration] = STATE(3),
    [sym_register_declaration] = STATE(3),
    [sym__expression] = STATE(52),
    [sym_assignment_expression] = STATE(52),
    [sym_mux_expression] = STATE(52),
    [sym_parenthesized_expression] = STATE(52),
    [sym_in_expression] = STATE(52),
    [sym_slice_expression] = STATE(52),
    [sym_unary_expression] = STATE(52),
    [sym_binary_expression] = STATE(52),
    [sym_predefined_constant] = STATE(52),
    [sym_true] = STATE(52),
    [sym_false] = STATE(52),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_wire] = ACTIONS(7),
    [anon_sym_register] = ACTIONS(9),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_STAT_BUB] = ACTIONS(21),
    [anon_sym_STAT_AOK] = ACTIONS(21),
    [anon_sym_STAT_HLT] = ACTIONS(21),
    [anon_sym_STAT_ADR] = ACTIONS(21),
    [anon_sym_STAT_INS] = ACTIONS(21),
    [anon_sym_STAT_PIP] = ACTIONS(21),
    [anon_sym_REG_RAX] = ACTIONS(21),
    [anon_sym_REG_RCX] = ACTIONS(21),
    [anon_sym_REG_RDX] = ACTIONS(21),
    [anon_sym_REG_RBX] = ACTIONS(21),
    [anon_sym_REG_RSP] = ACTIONS(21),
    [anon_sym_REG_RBP] = ACTIONS(21),
    [anon_sym_REG_RSI] = ACTIONS(21),
    [anon_sym_REG_RDI] = ACTIONS(21),
    [anon_sym_REG_R8] = ACTIONS(21),
    [anon_sym_REG_R9] = ACTIONS(21),
    [anon_sym_REG_R10] = ACTIONS(21),
    [anon_sym_REG_R11] = ACTIONS(21),
    [anon_sym_REG_R12] = ACTIONS(21),
    [anon_sym_REG_R13] = ACTIONS(21),
    [anon_sym_REG_R14] = ACTIONS(21),
    [anon_sym_REG_NONE] = ACTIONS(21),
    [anon_sym_HALT] = ACTIONS(21),
    [anon_sym_NOP] = ACTIONS(21),
    [anon_sym_RRMOVQ] = ACTIONS(21),
    [anon_sym_IRMOVQ] = ACTIONS(21),
    [anon_sym_RMMOVQ] = ACTIONS(21),
    [anon_sym_MRMOVQ] = ACTIONS(21),
    [anon_sym_OPQ] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(21),
    [anon_sym_CALL] = ACTIONS(21),
    [anon_sym_RET] = ACTIONS(21),
    [anon_sym_PUSHQ] = ACTIONS(21),
    [anon_sym_POPQ] = ACTIONS(21),
    [anon_sym_CMOVXX] = ACTIONS(21),
    [anon_sym_ALWAYS] = ACTIONS(21),
    [anon_sym_LE] = ACTIONS(21),
    [anon_sym_LT2] = ACTIONS(21),
    [anon_sym_EQ2] = ACTIONS(21),
    [anon_sym_NE] = ACTIONS(21),
    [anon_sym_GE] = ACTIONS(21),
    [anon_sym_GT2] = ACTIONS(21),
    [anon_sym_ADDQ] = ACTIONS(21),
    [anon_sym_SUBQ] = ACTIONS(21),
    [anon_sym_ANDQ] = ACTIONS(21),
    [anon_sym_XORQ] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [sym_number] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_TRUE] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_FALSE] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__statement] = STATE(2),
    [sym__declaration] = STATE(2),
    [sym_wire_declaration] = STATE(2),
    [sym_register_declaration] = STATE(2),
    [sym__expression] = STATE(52),
    [sym_assignment_expression] = STATE(52),
    [sym_mux_expression] = STATE(52),
    [sym_parenthesized_expression] = STATE(52),
    [sym_in_expression] = STATE(52),
    [sym_slice_expression] = STATE(52),
    [sym_unary_expression] = STATE(52),
    [sym_binary_expression] = STATE(52),
    [sym_predefined_constant] = STATE(52),
    [sym_true] = STATE(52),
    [sym_false] = STATE(52),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_wire] = ACTIONS(33),
    [anon_sym_register] = ACTIONS(36),
    [anon_sym_const] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_BANG] = ACTIONS(48),
    [anon_sym_TILDE] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [anon_sym_STAT_BUB] = ACTIONS(54),
    [anon_sym_STAT_AOK] = ACTIONS(54),
    [anon_sym_STAT_HLT] = ACTIONS(54),
    [anon_sym_STAT_ADR] = ACTIONS(54),
    [anon_sym_STAT_INS] = ACTIONS(54),
    [anon_sym_STAT_PIP] = ACTIONS(54),
    [anon_sym_REG_RAX] = ACTIONS(54),
    [anon_sym_REG_RCX] = ACTIONS(54),
    [anon_sym_REG_RDX] = ACTIONS(54),
    [anon_sym_REG_RBX] = ACTIONS(54),
    [anon_sym_REG_RSP] = ACTIONS(54),
    [anon_sym_REG_RBP] = ACTIONS(54),
    [anon_sym_REG_RSI] = ACTIONS(54),
    [anon_sym_REG_RDI] = ACTIONS(54),
    [anon_sym_REG_R8] = ACTIONS(54),
    [anon_sym_REG_R9] = ACTIONS(54),
    [anon_sym_REG_R10] = ACTIONS(54),
    [anon_sym_REG_R11] = ACTIONS(54),
    [anon_sym_REG_R12] = ACTIONS(54),
    [anon_sym_REG_R13] = ACTIONS(54),
    [anon_sym_REG_R14] = ACTIONS(54),
    [anon_sym_REG_NONE] = ACTIONS(54),
    [anon_sym_HALT] = ACTIONS(54),
    [anon_sym_NOP] = ACTIONS(54),
    [anon_sym_RRMOVQ] = ACTIONS(54),
    [anon_sym_IRMOVQ] = ACTIONS(54),
    [anon_sym_RMMOVQ] = ACTIONS(54),
    [anon_sym_MRMOVQ] = ACTIONS(54),
    [anon_sym_OPQ] = ACTIONS(54),
    [anon_sym_JXX] = ACTIONS(54),
    [anon_sym_CALL] = ACTIONS(54),
    [anon_sym_RET] = ACTIONS(54),
    [anon_sym_PUSHQ] = ACTIONS(54),
    [anon_sym_POPQ] = ACTIONS(54),
    [anon_sym_CMOVXX] = ACTIONS(54),
    [anon_sym_ALWAYS] = ACTIONS(54),
    [anon_sym_LE] = ACTIONS(54),
    [anon_sym_LT2] = ACTIONS(54),
    [anon_sym_EQ2] = ACTIONS(54),
    [anon_sym_NE] = ACTIONS(54),
    [anon_sym_GE] = ACTIONS(54),
    [anon_sym_GT2] = ACTIONS(54),
    [anon_sym_ADDQ] = ACTIONS(54),
    [anon_sym_SUBQ] = ACTIONS(54),
    [anon_sym_ANDQ] = ACTIONS(54),
    [anon_sym_XORQ] = ACTIONS(54),
    [sym_identifier] = ACTIONS(57),
    [sym_number] = ACTIONS(60),
    [anon_sym_true] = ACTIONS(63),
    [anon_sym_TRUE] = ACTIONS(63),
    [anon_sym_false] = ACTIONS(66),
    [anon_sym_FALSE] = ACTIONS(66),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__statement] = STATE(2),
    [sym__declaration] = STATE(2),
    [sym_wire_declaration] = STATE(2),
    [sym_register_declaration] = STATE(2),
    [sym__expression] = STATE(52),
    [sym_assignment_expression] = STATE(52),
    [sym_mux_expression] = STATE(52),
    [sym_parenthesized_expression] = STATE(52),
    [sym_in_expression] = STATE(52),
    [sym_slice_expression] = STATE(52),
    [sym_unary_expression] = STATE(52),
    [sym_binary_expression] = STATE(52),
    [sym_predefined_constant] = STATE(52),
    [sym_true] = STATE(52),
    [sym_false] = STATE(52),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_wire] = ACTIONS(7),
    [anon_sym_register] = ACTIONS(9),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_STAT_BUB] = ACTIONS(21),
    [anon_sym_STAT_AOK] = ACTIONS(21),
    [anon_sym_STAT_HLT] = ACTIONS(21),
    [anon_sym_STAT_ADR] = ACTIONS(21),
    [anon_sym_STAT_INS] = ACTIONS(21),
    [anon_sym_STAT_PIP] = ACTIONS(21),
    [anon_sym_REG_RAX] = ACTIONS(21),
    [anon_sym_REG_RCX] = ACTIONS(21),
    [anon_sym_REG_RDX] = ACTIONS(21),
    [anon_sym_REG_RBX] = ACTIONS(21),
    [anon_sym_REG_RSP] = ACTIONS(21),
    [anon_sym_REG_RBP] = ACTIONS(21),
    [anon_sym_REG_RSI] = ACTIONS(21),
    [anon_sym_REG_RDI] = ACTIONS(21),
    [anon_sym_REG_R8] = ACTIONS(21),
    [anon_sym_REG_R9] = ACTIONS(21),
    [anon_sym_REG_R10] = ACTIONS(21),
    [anon_sym_REG_R11] = ACTIONS(21),
    [anon_sym_REG_R12] = ACTIONS(21),
    [anon_sym_REG_R13] = ACTIONS(21),
    [anon_sym_REG_R14] = ACTIONS(21),
    [anon_sym_REG_NONE] = ACTIONS(21),
    [anon_sym_HALT] = ACTIONS(21),
    [anon_sym_NOP] = ACTIONS(21),
    [anon_sym_RRMOVQ] = ACTIONS(21),
    [anon_sym_IRMOVQ] = ACTIONS(21),
    [anon_sym_RMMOVQ] = ACTIONS(21),
    [anon_sym_MRMOVQ] = ACTIONS(21),
    [anon_sym_OPQ] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(21),
    [anon_sym_CALL] = ACTIONS(21),
    [anon_sym_RET] = ACTIONS(21),
    [anon_sym_PUSHQ] = ACTIONS(21),
    [anon_sym_POPQ] = ACTIONS(21),
    [anon_sym_CMOVXX] = ACTIONS(21),
    [anon_sym_ALWAYS] = ACTIONS(21),
    [anon_sym_LE] = ACTIONS(21),
    [anon_sym_LT2] = ACTIONS(21),
    [anon_sym_EQ2] = ACTIONS(21),
    [anon_sym_NE] = ACTIONS(21),
    [anon_sym_GE] = ACTIONS(21),
    [anon_sym_GT2] = ACTIONS(21),
    [anon_sym_ADDQ] = ACTIONS(21),
    [anon_sym_SUBQ] = ACTIONS(21),
    [anon_sym_ANDQ] = ACTIONS(21),
    [anon_sym_XORQ] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [sym_number] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_TRUE] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_FALSE] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__expression] = STATE(54),
    [sym_assignment_expression] = STATE(54),
    [sym_mux_expression] = STATE(54),
    [sym_parenthesized_expression] = STATE(54),
    [sym_in_expression] = STATE(54),
    [sym_slice_expression] = STATE(54),
    [sym_unary_expression] = STATE(54),
    [sym_binary_expression] = STATE(54),
    [sym_predefined_constant] = STATE(54),
    [sym_true] = STATE(54),
    [sym_false] = STATE(54),
    [aux_sym_mux_expression_repeat1] = STATE(5),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_STAT_BUB] = ACTIONS(21),
    [anon_sym_STAT_AOK] = ACTIONS(21),
    [anon_sym_STAT_HLT] = ACTIONS(21),
    [anon_sym_STAT_ADR] = ACTIONS(21),
    [anon_sym_STAT_INS] = ACTIONS(21),
    [anon_sym_STAT_PIP] = ACTIONS(21),
    [anon_sym_REG_RAX] = ACTIONS(21),
    [anon_sym_REG_RCX] = ACTIONS(21),
    [anon_sym_REG_RDX] = ACTIONS(21),
    [anon_sym_REG_RBX] = ACTIONS(21),
    [anon_sym_REG_RSP] = ACTIONS(21),
    [anon_sym_REG_RBP] = ACTIONS(21),
    [anon_sym_REG_RSI] = ACTIONS(21),
    [anon_sym_REG_RDI] = ACTIONS(21),
    [anon_sym_REG_R8] = ACTIONS(21),
    [anon_sym_REG_R9] = ACTIONS(21),
    [anon_sym_REG_R10] = ACTIONS(21),
    [anon_sym_REG_R11] = ACTIONS(21),
    [anon_sym_REG_R12] = ACTIONS(21),
    [anon_sym_REG_R13] = ACTIONS(21),
    [anon_sym_REG_R14] = ACTIONS(21),
    [anon_sym_REG_NONE] = ACTIONS(21),
    [anon_sym_HALT] = ACTIONS(21),
    [anon_sym_NOP] = ACTIONS(21),
    [anon_sym_RRMOVQ] = ACTIONS(21),
    [anon_sym_IRMOVQ] = ACTIONS(21),
    [anon_sym_RMMOVQ] = ACTIONS(21),
    [anon_sym_MRMOVQ] = ACTIONS(21),
    [anon_sym_OPQ] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(21),
    [anon_sym_CALL] = ACTIONS(21),
    [anon_sym_RET] = ACTIONS(21),
    [anon_sym_PUSHQ] = ACTIONS(21),
    [anon_sym_POPQ] = ACTIONS(21),
    [anon_sym_CMOVXX] = ACTIONS(21),
    [anon_sym_ALWAYS] = ACTIONS(21),
    [anon_sym_LE] = ACTIONS(21),
    [anon_sym_LT2] = ACTIONS(21),
    [anon_sym_EQ2] = ACTIONS(21),
    [anon_sym_NE] = ACTIONS(21),
    [anon_sym_GE] = ACTIONS(21),
    [anon_sym_GT2] = ACTIONS(21),
    [anon_sym_ADDQ] = ACTIONS(21),
    [anon_sym_SUBQ] = ACTIONS(21),
    [anon_sym_ANDQ] = ACTIONS(21),
    [anon_sym_XORQ] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [sym_number] = ACTIONS(73),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_TRUE] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_FALSE] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__expression] = STATE(54),
    [sym_assignment_expression] = STATE(54),
    [sym_mux_expression] = STATE(54),
    [sym_parenthesized_expression] = STATE(54),
    [sym_in_expression] = STATE(54),
    [sym_slice_expression] = STATE(54),
    [sym_unary_expression] = STATE(54),
    [sym_binary_expression] = STATE(54),
    [sym_predefined_constant] = STATE(54),
    [sym_true] = STATE(54),
    [sym_false] = STATE(54),
    [aux_sym_mux_expression_repeat1] = STATE(5),
    [anon_sym_const] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(78),
    [anon_sym_RBRACK] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(83),
    [anon_sym_BANG] = ACTIONS(86),
    [anon_sym_TILDE] = ACTIONS(86),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_STAT_BUB] = ACTIONS(92),
    [anon_sym_STAT_AOK] = ACTIONS(92),
    [anon_sym_STAT_HLT] = ACTIONS(92),
    [anon_sym_STAT_ADR] = ACTIONS(92),
    [anon_sym_STAT_INS] = ACTIONS(92),
    [anon_sym_STAT_PIP] = ACTIONS(92),
    [anon_sym_REG_RAX] = ACTIONS(92),
    [anon_sym_REG_RCX] = ACTIONS(92),
    [anon_sym_REG_RDX] = ACTIONS(92),
    [anon_sym_REG_RBX] = ACTIONS(92),
    [anon_sym_REG_RSP] = ACTIONS(92),
    [anon_sym_REG_RBP] = ACTIONS(92),
    [anon_sym_REG_RSI] = ACTIONS(92),
    [anon_sym_REG_RDI] = ACTIONS(92),
    [anon_sym_REG_R8] = ACTIONS(92),
    [anon_sym_REG_R9] = ACTIONS(92),
    [anon_sym_REG_R10] = ACTIONS(92),
    [anon_sym_REG_R11] = ACTIONS(92),
    [anon_sym_REG_R12] = ACTIONS(92),
    [anon_sym_REG_R13] = ACTIONS(92),
    [anon_sym_REG_R14] = ACTIONS(92),
    [anon_sym_REG_NONE] = ACTIONS(92),
    [anon_sym_HALT] = ACTIONS(92),
    [anon_sym_NOP] = ACTIONS(92),
    [anon_sym_RRMOVQ] = ACTIONS(92),
    [anon_sym_IRMOVQ] = ACTIONS(92),
    [anon_sym_RMMOVQ] = ACTIONS(92),
    [anon_sym_MRMOVQ] = ACTIONS(92),
    [anon_sym_OPQ] = ACTIONS(92),
    [anon_sym_JXX] = ACTIONS(92),
    [anon_sym_CALL] = ACTIONS(92),
    [anon_sym_RET] = ACTIONS(92),
    [anon_sym_PUSHQ] = ACTIONS(92),
    [anon_sym_POPQ] = ACTIONS(92),
    [anon_sym_CMOVXX] = ACTIONS(92),
    [anon_sym_ALWAYS] = ACTIONS(92),
    [anon_sym_LE] = ACTIONS(92),
    [anon_sym_LT2] = ACTIONS(92),
    [anon_sym_EQ2] = ACTIONS(92),
    [anon_sym_NE] = ACTIONS(92),
    [anon_sym_GE] = ACTIONS(92),
    [anon_sym_GT2] = ACTIONS(92),
    [anon_sym_ADDQ] = ACTIONS(92),
    [anon_sym_SUBQ] = ACTIONS(92),
    [anon_sym_ANDQ] = ACTIONS(92),
    [anon_sym_XORQ] = ACTIONS(92),
    [sym_identifier] = ACTIONS(95),
    [sym_number] = ACTIONS(98),
    [anon_sym_true] = ACTIONS(101),
    [anon_sym_TRUE] = ACTIONS(101),
    [anon_sym_false] = ACTIONS(104),
    [anon_sym_FALSE] = ACTIONS(104),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym__expression] = STATE(48),
    [sym_assignment_expression] = STATE(48),
    [sym_mux_expression] = STATE(48),
    [sym_parenthesized_expression] = STATE(48),
    [sym_in_expression] = STATE(48),
    [sym_slice_expression] = STATE(48),
    [sym_unary_expression] = STATE(48),
    [sym_binary_expression] = STATE(48),
    [sym_predefined_constant] = STATE(48),
    [sym_true] = STATE(48),
    [sym_false] = STATE(48),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_STAT_BUB] = ACTIONS(21),
    [anon_sym_STAT_AOK] = ACTIONS(21),
    [anon_sym_STAT_HLT] = ACTIONS(21),
    [anon_sym_STAT_ADR] = ACTIONS(21),
    [anon_sym_STAT_INS] = ACTIONS(21),
    [anon_sym_STAT_PIP] = ACTIONS(21),
    [anon_sym_REG_RAX] = ACTIONS(21),
    [anon_sym_REG_RCX] = ACTIONS(21),
    [anon_sym_REG_RDX] = ACTIONS(21),
    [anon_sym_REG_RBX] = ACTIONS(21),
    [anon_sym_REG_RSP] = ACTIONS(21),
    [anon_sym_REG_RBP] = ACTIONS(21),
    [anon_sym_REG_RSI] = ACTIONS(21),
    [anon_sym_REG_RDI] = ACTIONS(21),
    [anon_sym_REG_R8] = ACTIONS(21),
    [anon_sym_REG_R9] = ACTIONS(21),
    [anon_sym_REG_R10] = ACTIONS(21),
    [anon_sym_REG_R11] = ACTIONS(21),
    [anon_sym_REG_R12] = ACTIONS(21),
    [anon_sym_REG_R13] = ACTIONS(21),
    [anon_sym_REG_R14] = ACTIONS(21),
    [anon_sym_REG_NONE] = ACTIONS(21),
    [anon_sym_HALT] = ACTIONS(21),
    [anon_sym_NOP] = ACTIONS(21),
    [anon_sym_RRMOVQ] = ACTIONS(21),
    [anon_sym_IRMOVQ] = ACTIONS(21),
    [anon_sym_RMMOVQ] = ACTIONS(21),
    [anon_sym_MRMOVQ] = ACTIONS(21),
    [anon_sym_OPQ] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(21),
    [anon_sym_CALL] = ACTIONS(21),
    [anon_sym_RET] = ACTIONS(21),
    [anon_sym_PUSHQ] = ACTIONS(21),
    [anon_sym_POPQ] = ACTIONS(21),
    [anon_sym_CMOVXX] = ACTIONS(21),
    [anon_sym_ALWAYS] = ACTIONS(21),
    [anon_sym_LE] = ACTIONS(21),
    [anon_sym_LT2] = ACTIONS(21),
    [anon_sym_EQ2] = ACTIONS(21),
    [anon_sym_NE] = ACTIONS(21),
    [anon_sym_GE] = ACTIONS(21),
    [anon_sym_GT2] = ACTIONS(21),
    [anon_sym_ADDQ] = ACTIONS(21),
    [anon_sym_SUBQ] = ACTIONS(21),
    [anon_sym_ANDQ] = ACTIONS(21),
    [anon_sym_XORQ] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [sym_number] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_TRUE] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_FALSE] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym__expression] = STATE(54),
    [sym_assignment_expression] = STATE(54),
    [sym_mux_expression] = STATE(54),
    [sym_parenthesized_expression] = STATE(54),
    [sym_in_expression] = STATE(54),
    [sym_slice_expression] = STATE(54),
    [sym_unary_expression] = STATE(54),
    [sym_binary_expression] = STATE(54),
    [sym_predefined_constant] = STATE(54),
    [sym_true] = STATE(54),
    [sym_false] = STATE(54),
    [aux_sym_mux_expression_repeat1] = STATE(4),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_STAT_BUB] = ACTIONS(21),
    [anon_sym_STAT_AOK] = ACTIONS(21),
    [anon_sym_STAT_HLT] = ACTIONS(21),
    [anon_sym_STAT_ADR] = ACTIONS(21),
    [anon_sym_STAT_INS] = ACTIONS(21),
    [anon_sym_STAT_PIP] = ACTIONS(21),
    [anon_sym_REG_RAX] = ACTIONS(21),
    [anon_sym_REG_RCX] = ACTIONS(21),
    [anon_sym_REG_RDX] = ACTIONS(21),
    [anon_sym_REG_RBX] = ACTIONS(21),
    [anon_sym_REG_RSP] = ACTIONS(21),
    [anon_sym_REG_RBP] = ACTIONS(21),
    [anon_sym_REG_RSI] = ACTIONS(21),
    [anon_sym_REG_RDI] = ACTIONS(21),
    [anon_sym_REG_R8] = ACTIONS(21),
    [anon_sym_REG_R9] = ACTIONS(21),
    [anon_sym_REG_R10] = ACTIONS(21),
    [anon_sym_REG_R11] = ACTIONS(21),
    [anon_sym_REG_R12] = ACTIONS(21),
    [anon_sym_REG_R13] = ACTIONS(21),
    [anon_sym_REG_R14] = ACTIONS(21),
    [anon_sym_REG_NONE] = ACTIONS(21),
    [anon_sym_HALT] = ACTIONS(21),
    [anon_sym_NOP] = ACTIONS(21),
    [anon_sym_RRMOVQ] = ACTIONS(21),
    [anon_sym_IRMOVQ] = ACTIONS(21),
    [anon_sym_RMMOVQ] = ACTIONS(21),
    [anon_sym_MRMOVQ] = ACTIONS(21),
    [anon_sym_OPQ] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(21),
    [anon_sym_CALL] = ACTIONS(21),
    [anon_sym_RET] = ACTIONS(21),
    [anon_sym_PUSHQ] = ACTIONS(21),
    [anon_sym_POPQ] = ACTIONS(21),
    [anon_sym_CMOVXX] = ACTIONS(21),
    [anon_sym_ALWAYS] = ACTIONS(21),
    [anon_sym_LE] = ACTIONS(21),
    [anon_sym_LT2] = ACTIONS(21),
    [anon_sym_EQ2] = ACTIONS(21),
    [anon_sym_NE] = ACTIONS(21),
    [anon_sym_GE] = ACTIONS(21),
    [anon_sym_GT2] = ACTIONS(21),
    [anon_sym_ADDQ] = ACTIONS(21),
    [anon_sym_SUBQ] = ACTIONS(21),
    [anon_sym_ANDQ] = ACTIONS(21),
    [anon_sym_XORQ] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [sym_number] = ACTIONS(73),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_TRUE] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_FALSE] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym__expression] = STATE(34),
    [sym_assignment_expression] = STATE(34),
    [sym_mux_expression] = STATE(34),
    [sym_parenthesized_expression] = STATE(34),
    [sym_in_expression] = STATE(34),
    [sym_slice_expression] = STATE(34),
    [sym_unary_expression] = STATE(34),
    [sym_binary_expression] = STATE(34),
    [sym_predefined_constant] = STATE(34),
    [sym_true] = STATE(34),
    [sym_false] = STATE(34),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_STAT_BUB] = ACTIONS(21),
    [anon_sym_STAT_AOK] = ACTIONS(21),
    [anon_sym_STAT_HLT] = ACTIONS(21),
    [anon_sym_STAT_ADR] = ACTIONS(21),
    [anon_sym_STAT_INS] = ACTIONS(21),
    [anon_sym_STAT_PIP] = ACTIONS(21),
    [anon_sym_REG_RAX] = ACTIONS(21),
    [anon_sym_REG_RCX] = ACTIONS(21),
    [anon_sym_REG_RDX] = ACTIONS(21),
    [anon_sym_REG_RBX] = ACTIONS(21),
    [anon_sym_REG_RSP] = ACTIONS(21),
    [anon_sym_REG_RBP] = ACTIONS(21),
    [anon_sym_REG_RSI] = ACTIONS(21),
    [anon_sym_REG_RDI] = ACTIONS(21),
    [anon_sym_REG_R8] = ACTIONS(21),
    [anon_sym_REG_R9] = ACTIONS(21),
    [anon_sym_REG_R10] = ACTIONS(21),
    [anon_sym_REG_R11] = ACTIONS(21),
    [anon_sym_REG_R12] = ACTIONS(21),
    [anon_sym_REG_R13] = ACTIONS(21),
    [anon_sym_REG_R14] = ACTIONS(21),
    [anon_sym_REG_NONE] = ACTIONS(21),
    [anon_sym_HALT] = ACTIONS(21),
    [anon_sym_NOP] = ACTIONS(21),
    [anon_sym_RRMOVQ] = ACTIONS(21),
    [anon_sym_IRMOVQ] = ACTIONS(21),
    [anon_sym_RMMOVQ] = ACTIONS(21),
    [anon_sym_MRMOVQ] = ACTIONS(21),
    [anon_sym_OPQ] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(21),
    [anon_sym_CALL] = ACTIONS(21),
    [anon_sym_RET] = ACTIONS(21),
    [anon_sym_PUSHQ] = ACTIONS(21),
    [anon_sym_POPQ] = ACTIONS(21),
    [anon_sym_CMOVXX] = ACTIONS(21),
    [anon_sym_ALWAYS] = ACTIONS(21),
    [anon_sym_LE] = ACTIONS(21),
    [anon_sym_LT2] = ACTIONS(21),
    [anon_sym_EQ2] = ACTIONS(21),
    [anon_sym_NE] = ACTIONS(21),
    [anon_sym_GE] = ACTIONS(21),
    [anon_sym_GT2] = ACTIONS(21),
    [anon_sym_ADDQ] = ACTIONS(21),
    [anon_sym_SUBQ] = ACTIONS(21),
    [anon_sym_ANDQ] = ACTIONS(21),
    [anon_sym_XORQ] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [sym_number] = ACTIONS(111),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_TRUE] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_FALSE] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym__expression] = STATE(39),
    [sym_assignment_expression] = STATE(39),
    [sym_mux_expression] = STATE(39),
    [sym_parenthesized_expression] = STATE(39),
    [sym_in_expression] = STATE(39),
    [sym_slice_expression] = STATE(39),
    [sym_unary_expression] = STATE(39),
    [sym_binary_expression] = STATE(39),
    [sym_predefined_constant] = STATE(39),
    [sym_true] = STATE(39),
    [sym_false] = STATE(39),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_STAT_BUB] = ACTIONS(21),
    [anon_sym_STAT_AOK] = ACTIONS(21),
    [anon_sym_STAT_HLT] = ACTIONS(21),
    [anon_sym_STAT_ADR] = ACTIONS(21),
    [anon_sym_STAT_INS] = ACTIONS(21),
    [anon_sym_STAT_PIP] = ACTIONS(21),
    [anon_sym_REG_RAX] = ACTIONS(21),
    [anon_sym_REG_RCX] = ACTIONS(21),
    [anon_sym_REG_RDX] = ACTIONS(21),
    [anon_sym_REG_RBX] = ACTIONS(21),
    [anon_sym_REG_RSP] = ACTIONS(21),
    [anon_sym_REG_RBP] = ACTIONS(21),
    [anon_sym_REG_RSI] = ACTIONS(21),
    [anon_sym_REG_RDI] = ACTIONS(21),
    [anon_sym_REG_R8] = ACTIONS(21),
    [anon_sym_REG_R9] = ACTIONS(21),
    [anon_sym_REG_R10] = ACTIONS(21),
    [anon_sym_REG_R11] = ACTIONS(21),
    [anon_sym_REG_R12] = ACTIONS(21),
    [anon_sym_REG_R13] = ACTIONS(21),
    [anon_sym_REG_R14] = ACTIONS(21),
    [anon_sym_REG_NONE] = ACTIONS(21),
    [anon_sym_HALT] = ACTIONS(21),
    [anon_sym_NOP] = ACTIONS(21),
    [anon_sym_RRMOVQ] = ACTIONS(21),
    [anon_sym_IRMOVQ] = ACTIONS(21),
    [anon_sym_RMMOVQ] = ACTIONS(21),
    [anon_sym_MRMOVQ] = ACTIONS(21),
    [anon_sym_OPQ] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(21),
    [anon_sym_CALL] = ACTIONS(21),
    [anon_sym_RET] = ACTIONS(21),
    [anon_sym_PUSHQ] = ACTIONS(21),
    [anon_sym_POPQ] = ACTIONS(21),
    [anon_sym_CMOVXX] = ACTIONS(21),
    [anon_sym_ALWAYS] = ACTIONS(21),
    [anon_sym_LE] = ACTIONS(21),
    [anon_sym_LT2] = ACTIONS(21),
    [anon_sym_EQ2] = ACTIONS(21),
    [anon_sym_NE] = ACTIONS(21),
    [anon_sym_GE] = ACTIONS(21),
    [anon_sym_GT2] = ACTIONS(21),
    [anon_sym_ADDQ] = ACTIONS(21),
    [anon_sym_SUBQ] = ACTIONS(21),
    [anon_sym_ANDQ] = ACTIONS(21),
    [anon_sym_XORQ] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [sym_number] = ACTIONS(113),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_TRUE] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_FALSE] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym__expression] = STATE(46),
    [sym_assignment_expression] = STATE(46),
    [sym_mux_expression] = STATE(46),
    [sym_parenthesized_expression] = STATE(46),
    [sym_in_expression] = STATE(46),
    [sym_slice_expression] = STATE(46),
    [sym_unary_expression] = STATE(46),
    [sym_binary_expression] = STATE(46),
    [sym_predefined_constant] = STATE(46),
    [sym_true] = STATE(46),
    [sym_false] = STATE(46),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_STAT_BUB] = ACTIONS(21),
    [anon_sym_STAT_AOK] = ACTIONS(21),
    [anon_sym_STAT_HLT] = ACTIONS(21),
    [anon_sym_STAT_ADR] = ACTIONS(21),
    [anon_sym_STAT_INS] = ACTIONS(21),
    [anon_sym_STAT_PIP] = ACTIONS(21),
    [anon_sym_REG_RAX] = ACTIONS(21),
    [anon_sym_REG_RCX] = ACTIONS(21),
    [anon_sym_REG_RDX] = ACTIONS(21),
    [anon_sym_REG_RBX] = ACTIONS(21),
    [anon_sym_REG_RSP] = ACTIONS(21),
    [anon_sym_REG_RBP] = ACTIONS(21),
    [anon_sym_REG_RSI] = ACTIONS(21),
    [anon_sym_REG_RDI] = ACTIONS(21),
    [anon_sym_REG_R8] = ACTIONS(21),
    [anon_sym_REG_R9] = ACTIONS(21),
    [anon_sym_REG_R10] = ACTIONS(21),
    [anon_sym_REG_R11] = ACTIONS(21),
    [anon_sym_REG_R12] = ACTIONS(21),
    [anon_sym_REG_R13] = ACTIONS(21),
    [anon_sym_REG_R14] = ACTIONS(21),
    [anon_sym_REG_NONE] = ACTIONS(21),
    [anon_sym_HALT] = ACTIONS(21),
    [anon_sym_NOP] = ACTIONS(21),
    [anon_sym_RRMOVQ] = ACTIONS(21),
    [anon_sym_IRMOVQ] = ACTIONS(21),
    [anon_sym_RMMOVQ] = ACTIONS(21),
    [anon_sym_MRMOVQ] = ACTIONS(21),
    [anon_sym_OPQ] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(21),
    [anon_sym_CALL] = ACTIONS(21),
    [anon_sym_RET] = ACTIONS(21),
    [anon_sym_PUSHQ] = ACTIONS(21),
    [anon_sym_POPQ] = ACTIONS(21),
    [anon_sym_CMOVXX] = ACTIONS(21),
    [anon_sym_ALWAYS] = ACTIONS(21),
    [anon_sym_LE] = ACTIONS(21),
    [anon_sym_LT2] = ACTIONS(21),
    [anon_sym_EQ2] = ACTIONS(21),
    [anon_sym_NE] = ACTIONS(21),
    [anon_sym_GE] = ACTIONS(21),
    [anon_sym_GT2] = ACTIONS(21),
    [anon_sym_ADDQ] = ACTIONS(21),
    [anon_sym_SUBQ] = ACTIONS(21),
    [anon_sym_ANDQ] = ACTIONS(21),
    [anon_sym_XORQ] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [sym_number] = ACTIONS(115),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_TRUE] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_FALSE] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym__expression] = STATE(41),
    [sym_assignment_expression] = STATE(41),
    [sym_mux_expression] = STATE(41),
    [sym_parenthesized_expression] = STATE(41),
    [sym_in_expression] = STATE(41),
    [sym_slice_expression] = STATE(41),
    [sym_unary_expression] = STATE(41),
    [sym_binary_expression] = STATE(41),
    [sym_predefined_constant] = STATE(41),
    [sym_true] = STATE(41),
    [sym_false] = STATE(41),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_STAT_BUB] = ACTIONS(21),
    [anon_sym_STAT_AOK] = ACTIONS(21),
    [anon_sym_STAT_HLT] = ACTIONS(21),
    [anon_sym_STAT_ADR] = ACTIONS(21),
    [anon_sym_STAT_INS] = ACTIONS(21),
    [anon_sym_STAT_PIP] = ACTIONS(21),
    [anon_sym_REG_RAX] = ACTIONS(21),
    [anon_sym_REG_RCX] = ACTIONS(21),
    [anon_sym_REG_RDX] = ACTIONS(21),
    [anon_sym_REG_RBX] = ACTIONS(21),
    [anon_sym_REG_RSP] = ACTIONS(21),
    [anon_sym_REG_RBP] = ACTIONS(21),
    [anon_sym_REG_RSI] = ACTIONS(21),
    [anon_sym_REG_RDI] = ACTIONS(21),
    [anon_sym_REG_R8] = ACTIONS(21),
    [anon_sym_REG_R9] = ACTIONS(21),
    [anon_sym_REG_R10] = ACTIONS(21),
    [anon_sym_REG_R11] = ACTIONS(21),
    [anon_sym_REG_R12] = ACTIONS(21),
    [anon_sym_REG_R13] = ACTIONS(21),
    [anon_sym_REG_R14] = ACTIONS(21),
    [anon_sym_REG_NONE] = ACTIONS(21),
    [anon_sym_HALT] = ACTIONS(21),
    [anon_sym_NOP] = ACTIONS(21),
    [anon_sym_RRMOVQ] = ACTIONS(21),
    [anon_sym_IRMOVQ] = ACTIONS(21),
    [anon_sym_RMMOVQ] = ACTIONS(21),
    [anon_sym_MRMOVQ] = ACTIONS(21),
    [anon_sym_OPQ] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(21),
    [anon_sym_CALL] = ACTIONS(21),
    [anon_sym_RET] = ACTIONS(21),
    [anon_sym_PUSHQ] = ACTIONS(21),
    [anon_sym_POPQ] = ACTIONS(21),
    [anon_sym_CMOVXX] = ACTIONS(21),
    [anon_sym_ALWAYS] = ACTIONS(21),
    [anon_sym_LE] = ACTIONS(21),
    [anon_sym_LT2] = ACTIONS(21),
    [anon_sym_EQ2] = ACTIONS(21),
    [anon_sym_NE] = ACTIONS(21),
    [anon_sym_GE] = ACTIONS(21),
    [anon_sym_GT2] = ACTIONS(21),
    [anon_sym_ADDQ] = ACTIONS(21),
    [anon_sym_SUBQ] = ACTIONS(21),
    [anon_sym_ANDQ] = ACTIONS(21),
    [anon_sym_XORQ] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [sym_number] = ACTIONS(117),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_TRUE] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_FALSE] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym__expression] = STATE(53),
    [sym_assignment_expression] = STATE(53),
    [sym_mux_expression] = STATE(53),
    [sym_parenthesized_expression] = STATE(53),
    [sym_in_expression] = STATE(53),
    [sym_slice_expression] = STATE(53),
    [sym_unary_expression] = STATE(53),
    [sym_binary_expression] = STATE(53),
    [sym_predefined_constant] = STATE(53),
    [sym_true] = STATE(53),
    [sym_false] = STATE(53),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_STAT_BUB] = ACTIONS(21),
    [anon_sym_STAT_AOK] = ACTIONS(21),
    [anon_sym_STAT_HLT] = ACTIONS(21),
    [anon_sym_STAT_ADR] = ACTIONS(21),
    [anon_sym_STAT_INS] = ACTIONS(21),
    [anon_sym_STAT_PIP] = ACTIONS(21),
    [anon_sym_REG_RAX] = ACTIONS(21),
    [anon_sym_REG_RCX] = ACTIONS(21),
    [anon_sym_REG_RDX] = ACTIONS(21),
    [anon_sym_REG_RBX] = ACTIONS(21),
    [anon_sym_REG_RSP] = ACTIONS(21),
    [anon_sym_REG_RBP] = ACTIONS(21),
    [anon_sym_REG_RSI] = ACTIONS(21),
    [anon_sym_REG_RDI] = ACTIONS(21),
    [anon_sym_REG_R8] = ACTIONS(21),
    [anon_sym_REG_R9] = ACTIONS(21),
    [anon_sym_REG_R10] = ACTIONS(21),
    [anon_sym_REG_R11] = ACTIONS(21),
    [anon_sym_REG_R12] = ACTIONS(21),
    [anon_sym_REG_R13] = ACTIONS(21),
    [anon_sym_REG_R14] = ACTIONS(21),
    [anon_sym_REG_NONE] = ACTIONS(21),
    [anon_sym_HALT] = ACTIONS(21),
    [anon_sym_NOP] = ACTIONS(21),
    [anon_sym_RRMOVQ] = ACTIONS(21),
    [anon_sym_IRMOVQ] = ACTIONS(21),
    [anon_sym_RMMOVQ] = ACTIONS(21),
    [anon_sym_MRMOVQ] = ACTIONS(21),
    [anon_sym_OPQ] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(21),
    [anon_sym_CALL] = ACTIONS(21),
    [anon_sym_RET] = ACTIONS(21),
    [anon_sym_PUSHQ] = ACTIONS(21),
    [anon_sym_POPQ] = ACTIONS(21),
    [anon_sym_CMOVXX] = ACTIONS(21),
    [anon_sym_ALWAYS] = ACTIONS(21),
    [anon_sym_LE] = ACTIONS(21),
    [anon_sym_LT2] = ACTIONS(21),
    [anon_sym_EQ2] = ACTIONS(21),
    [anon_sym_NE] = ACTIONS(21),
    [anon_sym_GE] = ACTIONS(21),
    [anon_sym_GT2] = ACTIONS(21),
    [anon_sym_ADDQ] = ACTIONS(21),
    [anon_sym_SUBQ] = ACTIONS(21),
    [anon_sym_ANDQ] = ACTIONS(21),
    [anon_sym_XORQ] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [sym_number] = ACTIONS(119),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_TRUE] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_FALSE] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym__expression] = STATE(56),
    [sym_assignment_expression] = STATE(56),
    [sym_mux_expression] = STATE(56),
    [sym_parenthesized_expression] = STATE(56),
    [sym_in_expression] = STATE(56),
    [sym_slice_expression] = STATE(56),
    [sym_unary_expression] = STATE(56),
    [sym_binary_expression] = STATE(56),
    [sym_predefined_constant] = STATE(56),
    [sym_true] = STATE(56),
    [sym_false] = STATE(56),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_STAT_BUB] = ACTIONS(21),
    [anon_sym_STAT_AOK] = ACTIONS(21),
    [anon_sym_STAT_HLT] = ACTIONS(21),
    [anon_sym_STAT_ADR] = ACTIONS(21),
    [anon_sym_STAT_INS] = ACTIONS(21),
    [anon_sym_STAT_PIP] = ACTIONS(21),
    [anon_sym_REG_RAX] = ACTIONS(21),
    [anon_sym_REG_RCX] = ACTIONS(21),
    [anon_sym_REG_RDX] = ACTIONS(21),
    [anon_sym_REG_RBX] = ACTIONS(21),
    [anon_sym_REG_RSP] = ACTIONS(21),
    [anon_sym_REG_RBP] = ACTIONS(21),
    [anon_sym_REG_RSI] = ACTIONS(21),
    [anon_sym_REG_RDI] = ACTIONS(21),
    [anon_sym_REG_R8] = ACTIONS(21),
    [anon_sym_REG_R9] = ACTIONS(21),
    [anon_sym_REG_R10] = ACTIONS(21),
    [anon_sym_REG_R11] = ACTIONS(21),
    [anon_sym_REG_R12] = ACTIONS(21),
    [anon_sym_REG_R13] = ACTIONS(21),
    [anon_sym_REG_R14] = ACTIONS(21),
    [anon_sym_REG_NONE] = ACTIONS(21),
    [anon_sym_HALT] = ACTIONS(21),
    [anon_sym_NOP] = ACTIONS(21),
    [anon_sym_RRMOVQ] = ACTIONS(21),
    [anon_sym_IRMOVQ] = ACTIONS(21),
    [anon_sym_RMMOVQ] = ACTIONS(21),
    [anon_sym_MRMOVQ] = ACTIONS(21),
    [anon_sym_OPQ] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(21),
    [anon_sym_CALL] = ACTIONS(21),
    [anon_sym_RET] = ACTIONS(21),
    [anon_sym_PUSHQ] = ACTIONS(21),
    [anon_sym_POPQ] = ACTIONS(21),
    [anon_sym_CMOVXX] = ACTIONS(21),
    [anon_sym_ALWAYS] = ACTIONS(21),
    [anon_sym_LE] = ACTIONS(21),
    [anon_sym_LT2] = ACTIONS(21),
    [anon_sym_EQ2] = ACTIONS(21),
    [anon_sym_NE] = ACTIONS(21),
    [anon_sym_GE] = ACTIONS(21),
    [anon_sym_GT2] = ACTIONS(21),
    [anon_sym_ADDQ] = ACTIONS(21),
    [anon_sym_SUBQ] = ACTIONS(21),
    [anon_sym_ANDQ] = ACTIONS(21),
    [anon_sym_XORQ] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [sym_number] = ACTIONS(121),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_TRUE] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_FALSE] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym__expression] = STATE(32),
    [sym_assignment_expression] = STATE(32),
    [sym_mux_expression] = STATE(32),
    [sym_parenthesized_expression] = STATE(32),
    [sym_in_expression] = STATE(32),
    [sym_slice_expression] = STATE(32),
    [sym_unary_expression] = STATE(32),
    [sym_binary_expression] = STATE(32),
    [sym_predefined_constant] = STATE(32),
    [sym_true] = STATE(32),
    [sym_false] = STATE(32),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_STAT_BUB] = ACTIONS(21),
    [anon_sym_STAT_AOK] = ACTIONS(21),
    [anon_sym_STAT_HLT] = ACTIONS(21),
    [anon_sym_STAT_ADR] = ACTIONS(21),
    [anon_sym_STAT_INS] = ACTIONS(21),
    [anon_sym_STAT_PIP] = ACTIONS(21),
    [anon_sym_REG_RAX] = ACTIONS(21),
    [anon_sym_REG_RCX] = ACTIONS(21),
    [anon_sym_REG_RDX] = ACTIONS(21),
    [anon_sym_REG_RBX] = ACTIONS(21),
    [anon_sym_REG_RSP] = ACTIONS(21),
    [anon_sym_REG_RBP] = ACTIONS(21),
    [anon_sym_REG_RSI] = ACTIONS(21),
    [anon_sym_REG_RDI] = ACTIONS(21),
    [anon_sym_REG_R8] = ACTIONS(21),
    [anon_sym_REG_R9] = ACTIONS(21),
    [anon_sym_REG_R10] = ACTIONS(21),
    [anon_sym_REG_R11] = ACTIONS(21),
    [anon_sym_REG_R12] = ACTIONS(21),
    [anon_sym_REG_R13] = ACTIONS(21),
    [anon_sym_REG_R14] = ACTIONS(21),
    [anon_sym_REG_NONE] = ACTIONS(21),
    [anon_sym_HALT] = ACTIONS(21),
    [anon_sym_NOP] = ACTIONS(21),
    [anon_sym_RRMOVQ] = ACTIONS(21),
    [anon_sym_IRMOVQ] = ACTIONS(21),
    [anon_sym_RMMOVQ] = ACTIONS(21),
    [anon_sym_MRMOVQ] = ACTIONS(21),
    [anon_sym_OPQ] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(21),
    [anon_sym_CALL] = ACTIONS(21),
    [anon_sym_RET] = ACTIONS(21),
    [anon_sym_PUSHQ] = ACTIONS(21),
    [anon_sym_POPQ] = ACTIONS(21),
    [anon_sym_CMOVXX] = ACTIONS(21),
    [anon_sym_ALWAYS] = ACTIONS(21),
    [anon_sym_LE] = ACTIONS(21),
    [anon_sym_LT2] = ACTIONS(21),
    [anon_sym_EQ2] = ACTIONS(21),
    [anon_sym_NE] = ACTIONS(21),
    [anon_sym_GE] = ACTIONS(21),
    [anon_sym_GT2] = ACTIONS(21),
    [anon_sym_ADDQ] = ACTIONS(21),
    [anon_sym_SUBQ] = ACTIONS(21),
    [anon_sym_ANDQ] = ACTIONS(21),
    [anon_sym_XORQ] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [sym_number] = ACTIONS(123),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_TRUE] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_FALSE] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym__expression] = STATE(43),
    [sym_assignment_expression] = STATE(43),
    [sym_mux_expression] = STATE(43),
    [sym_parenthesized_expression] = STATE(43),
    [sym_in_expression] = STATE(43),
    [sym_slice_expression] = STATE(43),
    [sym_unary_expression] = STATE(43),
    [sym_binary_expression] = STATE(43),
    [sym_predefined_constant] = STATE(43),
    [sym_true] = STATE(43),
    [sym_false] = STATE(43),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_STAT_BUB] = ACTIONS(21),
    [anon_sym_STAT_AOK] = ACTIONS(21),
    [anon_sym_STAT_HLT] = ACTIONS(21),
    [anon_sym_STAT_ADR] = ACTIONS(21),
    [anon_sym_STAT_INS] = ACTIONS(21),
    [anon_sym_STAT_PIP] = ACTIONS(21),
    [anon_sym_REG_RAX] = ACTIONS(21),
    [anon_sym_REG_RCX] = ACTIONS(21),
    [anon_sym_REG_RDX] = ACTIONS(21),
    [anon_sym_REG_RBX] = ACTIONS(21),
    [anon_sym_REG_RSP] = ACTIONS(21),
    [anon_sym_REG_RBP] = ACTIONS(21),
    [anon_sym_REG_RSI] = ACTIONS(21),
    [anon_sym_REG_RDI] = ACTIONS(21),
    [anon_sym_REG_R8] = ACTIONS(21),
    [anon_sym_REG_R9] = ACTIONS(21),
    [anon_sym_REG_R10] = ACTIONS(21),
    [anon_sym_REG_R11] = ACTIONS(21),
    [anon_sym_REG_R12] = ACTIONS(21),
    [anon_sym_REG_R13] = ACTIONS(21),
    [anon_sym_REG_R14] = ACTIONS(21),
    [anon_sym_REG_NONE] = ACTIONS(21),
    [anon_sym_HALT] = ACTIONS(21),
    [anon_sym_NOP] = ACTIONS(21),
    [anon_sym_RRMOVQ] = ACTIONS(21),
    [anon_sym_IRMOVQ] = ACTIONS(21),
    [anon_sym_RMMOVQ] = ACTIONS(21),
    [anon_sym_MRMOVQ] = ACTIONS(21),
    [anon_sym_OPQ] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(21),
    [anon_sym_CALL] = ACTIONS(21),
    [anon_sym_RET] = ACTIONS(21),
    [anon_sym_PUSHQ] = ACTIONS(21),
    [anon_sym_POPQ] = ACTIONS(21),
    [anon_sym_CMOVXX] = ACTIONS(21),
    [anon_sym_ALWAYS] = ACTIONS(21),
    [anon_sym_LE] = ACTIONS(21),
    [anon_sym_LT2] = ACTIONS(21),
    [anon_sym_EQ2] = ACTIONS(21),
    [anon_sym_NE] = ACTIONS(21),
    [anon_sym_GE] = ACTIONS(21),
    [anon_sym_GT2] = ACTIONS(21),
    [anon_sym_ADDQ] = ACTIONS(21),
    [anon_sym_SUBQ] = ACTIONS(21),
    [anon_sym_ANDQ] = ACTIONS(21),
    [anon_sym_XORQ] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [sym_number] = ACTIONS(125),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_TRUE] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_FALSE] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym__expression] = STATE(51),
    [sym_assignment_expression] = STATE(51),
    [sym_mux_expression] = STATE(51),
    [sym_parenthesized_expression] = STATE(51),
    [sym_in_expression] = STATE(51),
    [sym_slice_expression] = STATE(51),
    [sym_unary_expression] = STATE(51),
    [sym_binary_expression] = STATE(51),
    [sym_predefined_constant] = STATE(51),
    [sym_true] = STATE(51),
    [sym_false] = STATE(51),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_STAT_BUB] = ACTIONS(21),
    [anon_sym_STAT_AOK] = ACTIONS(21),
    [anon_sym_STAT_HLT] = ACTIONS(21),
    [anon_sym_STAT_ADR] = ACTIONS(21),
    [anon_sym_STAT_INS] = ACTIONS(21),
    [anon_sym_STAT_PIP] = ACTIONS(21),
    [anon_sym_REG_RAX] = ACTIONS(21),
    [anon_sym_REG_RCX] = ACTIONS(21),
    [anon_sym_REG_RDX] = ACTIONS(21),
    [anon_sym_REG_RBX] = ACTIONS(21),
    [anon_sym_REG_RSP] = ACTIONS(21),
    [anon_sym_REG_RBP] = ACTIONS(21),
    [anon_sym_REG_RSI] = ACTIONS(21),
    [anon_sym_REG_RDI] = ACTIONS(21),
    [anon_sym_REG_R8] = ACTIONS(21),
    [anon_sym_REG_R9] = ACTIONS(21),
    [anon_sym_REG_R10] = ACTIONS(21),
    [anon_sym_REG_R11] = ACTIONS(21),
    [anon_sym_REG_R12] = ACTIONS(21),
    [anon_sym_REG_R13] = ACTIONS(21),
    [anon_sym_REG_R14] = ACTIONS(21),
    [anon_sym_REG_NONE] = ACTIONS(21),
    [anon_sym_HALT] = ACTIONS(21),
    [anon_sym_NOP] = ACTIONS(21),
    [anon_sym_RRMOVQ] = ACTIONS(21),
    [anon_sym_IRMOVQ] = ACTIONS(21),
    [anon_sym_RMMOVQ] = ACTIONS(21),
    [anon_sym_MRMOVQ] = ACTIONS(21),
    [anon_sym_OPQ] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(21),
    [anon_sym_CALL] = ACTIONS(21),
    [anon_sym_RET] = ACTIONS(21),
    [anon_sym_PUSHQ] = ACTIONS(21),
    [anon_sym_POPQ] = ACTIONS(21),
    [anon_sym_CMOVXX] = ACTIONS(21),
    [anon_sym_ALWAYS] = ACTIONS(21),
    [anon_sym_LE] = ACTIONS(21),
    [anon_sym_LT2] = ACTIONS(21),
    [anon_sym_EQ2] = ACTIONS(21),
    [anon_sym_NE] = ACTIONS(21),
    [anon_sym_GE] = ACTIONS(21),
    [anon_sym_GT2] = ACTIONS(21),
    [anon_sym_ADDQ] = ACTIONS(21),
    [anon_sym_SUBQ] = ACTIONS(21),
    [anon_sym_ANDQ] = ACTIONS(21),
    [anon_sym_XORQ] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [sym_number] = ACTIONS(127),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_TRUE] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_FALSE] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym__expression] = STATE(49),
    [sym_assignment_expression] = STATE(49),
    [sym_mux_expression] = STATE(49),
    [sym_parenthesized_expression] = STATE(49),
    [sym_in_expression] = STATE(49),
    [sym_slice_expression] = STATE(49),
    [sym_unary_expression] = STATE(49),
    [sym_binary_expression] = STATE(49),
    [sym_predefined_constant] = STATE(49),
    [sym_true] = STATE(49),
    [sym_false] = STATE(49),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_STAT_BUB] = ACTIONS(21),
    [anon_sym_STAT_AOK] = ACTIONS(21),
    [anon_sym_STAT_HLT] = ACTIONS(21),
    [anon_sym_STAT_ADR] = ACTIONS(21),
    [anon_sym_STAT_INS] = ACTIONS(21),
    [anon_sym_STAT_PIP] = ACTIONS(21),
    [anon_sym_REG_RAX] = ACTIONS(21),
    [anon_sym_REG_RCX] = ACTIONS(21),
    [anon_sym_REG_RDX] = ACTIONS(21),
    [anon_sym_REG_RBX] = ACTIONS(21),
    [anon_sym_REG_RSP] = ACTIONS(21),
    [anon_sym_REG_RBP] = ACTIONS(21),
    [anon_sym_REG_RSI] = ACTIONS(21),
    [anon_sym_REG_RDI] = ACTIONS(21),
    [anon_sym_REG_R8] = ACTIONS(21),
    [anon_sym_REG_R9] = ACTIONS(21),
    [anon_sym_REG_R10] = ACTIONS(21),
    [anon_sym_REG_R11] = ACTIONS(21),
    [anon_sym_REG_R12] = ACTIONS(21),
    [anon_sym_REG_R13] = ACTIONS(21),
    [anon_sym_REG_R14] = ACTIONS(21),
    [anon_sym_REG_NONE] = ACTIONS(21),
    [anon_sym_HALT] = ACTIONS(21),
    [anon_sym_NOP] = ACTIONS(21),
    [anon_sym_RRMOVQ] = ACTIONS(21),
    [anon_sym_IRMOVQ] = ACTIONS(21),
    [anon_sym_RMMOVQ] = ACTIONS(21),
    [anon_sym_MRMOVQ] = ACTIONS(21),
    [anon_sym_OPQ] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(21),
    [anon_sym_CALL] = ACTIONS(21),
    [anon_sym_RET] = ACTIONS(21),
    [anon_sym_PUSHQ] = ACTIONS(21),
    [anon_sym_POPQ] = ACTIONS(21),
    [anon_sym_CMOVXX] = ACTIONS(21),
    [anon_sym_ALWAYS] = ACTIONS(21),
    [anon_sym_LE] = ACTIONS(21),
    [anon_sym_LT2] = ACTIONS(21),
    [anon_sym_EQ2] = ACTIONS(21),
    [anon_sym_NE] = ACTIONS(21),
    [anon_sym_GE] = ACTIONS(21),
    [anon_sym_GT2] = ACTIONS(21),
    [anon_sym_ADDQ] = ACTIONS(21),
    [anon_sym_SUBQ] = ACTIONS(21),
    [anon_sym_ANDQ] = ACTIONS(21),
    [anon_sym_XORQ] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [sym_number] = ACTIONS(129),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_TRUE] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_FALSE] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym__expression] = STATE(50),
    [sym_assignment_expression] = STATE(50),
    [sym_mux_expression] = STATE(50),
    [sym_parenthesized_expression] = STATE(50),
    [sym_in_expression] = STATE(50),
    [sym_slice_expression] = STATE(50),
    [sym_unary_expression] = STATE(50),
    [sym_binary_expression] = STATE(50),
    [sym_predefined_constant] = STATE(50),
    [sym_true] = STATE(50),
    [sym_false] = STATE(50),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_STAT_BUB] = ACTIONS(21),
    [anon_sym_STAT_AOK] = ACTIONS(21),
    [anon_sym_STAT_HLT] = ACTIONS(21),
    [anon_sym_STAT_ADR] = ACTIONS(21),
    [anon_sym_STAT_INS] = ACTIONS(21),
    [anon_sym_STAT_PIP] = ACTIONS(21),
    [anon_sym_REG_RAX] = ACTIONS(21),
    [anon_sym_REG_RCX] = ACTIONS(21),
    [anon_sym_REG_RDX] = ACTIONS(21),
    [anon_sym_REG_RBX] = ACTIONS(21),
    [anon_sym_REG_RSP] = ACTIONS(21),
    [anon_sym_REG_RBP] = ACTIONS(21),
    [anon_sym_REG_RSI] = ACTIONS(21),
    [anon_sym_REG_RDI] = ACTIONS(21),
    [anon_sym_REG_R8] = ACTIONS(21),
    [anon_sym_REG_R9] = ACTIONS(21),
    [anon_sym_REG_R10] = ACTIONS(21),
    [anon_sym_REG_R11] = ACTIONS(21),
    [anon_sym_REG_R12] = ACTIONS(21),
    [anon_sym_REG_R13] = ACTIONS(21),
    [anon_sym_REG_R14] = ACTIONS(21),
    [anon_sym_REG_NONE] = ACTIONS(21),
    [anon_sym_HALT] = ACTIONS(21),
    [anon_sym_NOP] = ACTIONS(21),
    [anon_sym_RRMOVQ] = ACTIONS(21),
    [anon_sym_IRMOVQ] = ACTIONS(21),
    [anon_sym_RMMOVQ] = ACTIONS(21),
    [anon_sym_MRMOVQ] = ACTIONS(21),
    [anon_sym_OPQ] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(21),
    [anon_sym_CALL] = ACTIONS(21),
    [anon_sym_RET] = ACTIONS(21),
    [anon_sym_PUSHQ] = ACTIONS(21),
    [anon_sym_POPQ] = ACTIONS(21),
    [anon_sym_CMOVXX] = ACTIONS(21),
    [anon_sym_ALWAYS] = ACTIONS(21),
    [anon_sym_LE] = ACTIONS(21),
    [anon_sym_LT2] = ACTIONS(21),
    [anon_sym_EQ2] = ACTIONS(21),
    [anon_sym_NE] = ACTIONS(21),
    [anon_sym_GE] = ACTIONS(21),
    [anon_sym_GT2] = ACTIONS(21),
    [anon_sym_ADDQ] = ACTIONS(21),
    [anon_sym_SUBQ] = ACTIONS(21),
    [anon_sym_ANDQ] = ACTIONS(21),
    [anon_sym_XORQ] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [sym_number] = ACTIONS(131),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_TRUE] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_FALSE] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym__expression] = STATE(45),
    [sym_assignment_expression] = STATE(45),
    [sym_mux_expression] = STATE(45),
    [sym_parenthesized_expression] = STATE(45),
    [sym_in_expression] = STATE(45),
    [sym_slice_expression] = STATE(45),
    [sym_unary_expression] = STATE(45),
    [sym_binary_expression] = STATE(45),
    [sym_predefined_constant] = STATE(45),
    [sym_true] = STATE(45),
    [sym_false] = STATE(45),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_STAT_BUB] = ACTIONS(21),
    [anon_sym_STAT_AOK] = ACTIONS(21),
    [anon_sym_STAT_HLT] = ACTIONS(21),
    [anon_sym_STAT_ADR] = ACTIONS(21),
    [anon_sym_STAT_INS] = ACTIONS(21),
    [anon_sym_STAT_PIP] = ACTIONS(21),
    [anon_sym_REG_RAX] = ACTIONS(21),
    [anon_sym_REG_RCX] = ACTIONS(21),
    [anon_sym_REG_RDX] = ACTIONS(21),
    [anon_sym_REG_RBX] = ACTIONS(21),
    [anon_sym_REG_RSP] = ACTIONS(21),
    [anon_sym_REG_RBP] = ACTIONS(21),
    [anon_sym_REG_RSI] = ACTIONS(21),
    [anon_sym_REG_RDI] = ACTIONS(21),
    [anon_sym_REG_R8] = ACTIONS(21),
    [anon_sym_REG_R9] = ACTIONS(21),
    [anon_sym_REG_R10] = ACTIONS(21),
    [anon_sym_REG_R11] = ACTIONS(21),
    [anon_sym_REG_R12] = ACTIONS(21),
    [anon_sym_REG_R13] = ACTIONS(21),
    [anon_sym_REG_R14] = ACTIONS(21),
    [anon_sym_REG_NONE] = ACTIONS(21),
    [anon_sym_HALT] = ACTIONS(21),
    [anon_sym_NOP] = ACTIONS(21),
    [anon_sym_RRMOVQ] = ACTIONS(21),
    [anon_sym_IRMOVQ] = ACTIONS(21),
    [anon_sym_RMMOVQ] = ACTIONS(21),
    [anon_sym_MRMOVQ] = ACTIONS(21),
    [anon_sym_OPQ] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(21),
    [anon_sym_CALL] = ACTIONS(21),
    [anon_sym_RET] = ACTIONS(21),
    [anon_sym_PUSHQ] = ACTIONS(21),
    [anon_sym_POPQ] = ACTIONS(21),
    [anon_sym_CMOVXX] = ACTIONS(21),
    [anon_sym_ALWAYS] = ACTIONS(21),
    [anon_sym_LE] = ACTIONS(21),
    [anon_sym_LT2] = ACTIONS(21),
    [anon_sym_EQ2] = ACTIONS(21),
    [anon_sym_NE] = ACTIONS(21),
    [anon_sym_GE] = ACTIONS(21),
    [anon_sym_GT2] = ACTIONS(21),
    [anon_sym_ADDQ] = ACTIONS(21),
    [anon_sym_SUBQ] = ACTIONS(21),
    [anon_sym_ANDQ] = ACTIONS(21),
    [anon_sym_XORQ] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [sym_number] = ACTIONS(133),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_TRUE] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_FALSE] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym__expression] = STATE(33),
    [sym_assignment_expression] = STATE(33),
    [sym_mux_expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(33),
    [sym_in_expression] = STATE(33),
    [sym_slice_expression] = STATE(33),
    [sym_unary_expression] = STATE(33),
    [sym_binary_expression] = STATE(33),
    [sym_predefined_constant] = STATE(33),
    [sym_true] = STATE(33),
    [sym_false] = STATE(33),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_STAT_BUB] = ACTIONS(21),
    [anon_sym_STAT_AOK] = ACTIONS(21),
    [anon_sym_STAT_HLT] = ACTIONS(21),
    [anon_sym_STAT_ADR] = ACTIONS(21),
    [anon_sym_STAT_INS] = ACTIONS(21),
    [anon_sym_STAT_PIP] = ACTIONS(21),
    [anon_sym_REG_RAX] = ACTIONS(21),
    [anon_sym_REG_RCX] = ACTIONS(21),
    [anon_sym_REG_RDX] = ACTIONS(21),
    [anon_sym_REG_RBX] = ACTIONS(21),
    [anon_sym_REG_RSP] = ACTIONS(21),
    [anon_sym_REG_RBP] = ACTIONS(21),
    [anon_sym_REG_RSI] = ACTIONS(21),
    [anon_sym_REG_RDI] = ACTIONS(21),
    [anon_sym_REG_R8] = ACTIONS(21),
    [anon_sym_REG_R9] = ACTIONS(21),
    [anon_sym_REG_R10] = ACTIONS(21),
    [anon_sym_REG_R11] = ACTIONS(21),
    [anon_sym_REG_R12] = ACTIONS(21),
    [anon_sym_REG_R13] = ACTIONS(21),
    [anon_sym_REG_R14] = ACTIONS(21),
    [anon_sym_REG_NONE] = ACTIONS(21),
    [anon_sym_HALT] = ACTIONS(21),
    [anon_sym_NOP] = ACTIONS(21),
    [anon_sym_RRMOVQ] = ACTIONS(21),
    [anon_sym_IRMOVQ] = ACTIONS(21),
    [anon_sym_RMMOVQ] = ACTIONS(21),
    [anon_sym_MRMOVQ] = ACTIONS(21),
    [anon_sym_OPQ] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(21),
    [anon_sym_CALL] = ACTIONS(21),
    [anon_sym_RET] = ACTIONS(21),
    [anon_sym_PUSHQ] = ACTIONS(21),
    [anon_sym_POPQ] = ACTIONS(21),
    [anon_sym_CMOVXX] = ACTIONS(21),
    [anon_sym_ALWAYS] = ACTIONS(21),
    [anon_sym_LE] = ACTIONS(21),
    [anon_sym_LT2] = ACTIONS(21),
    [anon_sym_EQ2] = ACTIONS(21),
    [anon_sym_NE] = ACTIONS(21),
    [anon_sym_GE] = ACTIONS(21),
    [anon_sym_GT2] = ACTIONS(21),
    [anon_sym_ADDQ] = ACTIONS(21),
    [anon_sym_SUBQ] = ACTIONS(21),
    [anon_sym_ANDQ] = ACTIONS(21),
    [anon_sym_XORQ] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [sym_number] = ACTIONS(135),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_TRUE] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_FALSE] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym__expression] = STATE(55),
    [sym_assignment_expression] = STATE(55),
    [sym_mux_expression] = STATE(55),
    [sym_parenthesized_expression] = STATE(55),
    [sym_in_expression] = STATE(55),
    [sym_slice_expression] = STATE(55),
    [sym_unary_expression] = STATE(55),
    [sym_binary_expression] = STATE(55),
    [sym_predefined_constant] = STATE(55),
    [sym_true] = STATE(55),
    [sym_false] = STATE(55),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_STAT_BUB] = ACTIONS(21),
    [anon_sym_STAT_AOK] = ACTIONS(21),
    [anon_sym_STAT_HLT] = ACTIONS(21),
    [anon_sym_STAT_ADR] = ACTIONS(21),
    [anon_sym_STAT_INS] = ACTIONS(21),
    [anon_sym_STAT_PIP] = ACTIONS(21),
    [anon_sym_REG_RAX] = ACTIONS(21),
    [anon_sym_REG_RCX] = ACTIONS(21),
    [anon_sym_REG_RDX] = ACTIONS(21),
    [anon_sym_REG_RBX] = ACTIONS(21),
    [anon_sym_REG_RSP] = ACTIONS(21),
    [anon_sym_REG_RBP] = ACTIONS(21),
    [anon_sym_REG_RSI] = ACTIONS(21),
    [anon_sym_REG_RDI] = ACTIONS(21),
    [anon_sym_REG_R8] = ACTIONS(21),
    [anon_sym_REG_R9] = ACTIONS(21),
    [anon_sym_REG_R10] = ACTIONS(21),
    [anon_sym_REG_R11] = ACTIONS(21),
    [anon_sym_REG_R12] = ACTIONS(21),
    [anon_sym_REG_R13] = ACTIONS(21),
    [anon_sym_REG_R14] = ACTIONS(21),
    [anon_sym_REG_NONE] = ACTIONS(21),
    [anon_sym_HALT] = ACTIONS(21),
    [anon_sym_NOP] = ACTIONS(21),
    [anon_sym_RRMOVQ] = ACTIONS(21),
    [anon_sym_IRMOVQ] = ACTIONS(21),
    [anon_sym_RMMOVQ] = ACTIONS(21),
    [anon_sym_MRMOVQ] = ACTIONS(21),
    [anon_sym_OPQ] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(21),
    [anon_sym_CALL] = ACTIONS(21),
    [anon_sym_RET] = ACTIONS(21),
    [anon_sym_PUSHQ] = ACTIONS(21),
    [anon_sym_POPQ] = ACTIONS(21),
    [anon_sym_CMOVXX] = ACTIONS(21),
    [anon_sym_ALWAYS] = ACTIONS(21),
    [anon_sym_LE] = ACTIONS(21),
    [anon_sym_LT2] = ACTIONS(21),
    [anon_sym_EQ2] = ACTIONS(21),
    [anon_sym_NE] = ACTIONS(21),
    [anon_sym_GE] = ACTIONS(21),
    [anon_sym_GT2] = ACTIONS(21),
    [anon_sym_ADDQ] = ACTIONS(21),
    [anon_sym_SUBQ] = ACTIONS(21),
    [anon_sym_ANDQ] = ACTIONS(21),
    [anon_sym_XORQ] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [sym_number] = ACTIONS(137),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_TRUE] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_FALSE] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym__expression] = STATE(31),
    [sym_assignment_expression] = STATE(31),
    [sym_mux_expression] = STATE(31),
    [sym_parenthesized_expression] = STATE(31),
    [sym_in_expression] = STATE(31),
    [sym_slice_expression] = STATE(31),
    [sym_unary_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_predefined_constant] = STATE(31),
    [sym_true] = STATE(31),
    [sym_false] = STATE(31),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_STAT_BUB] = ACTIONS(21),
    [anon_sym_STAT_AOK] = ACTIONS(21),
    [anon_sym_STAT_HLT] = ACTIONS(21),
    [anon_sym_STAT_ADR] = ACTIONS(21),
    [anon_sym_STAT_INS] = ACTIONS(21),
    [anon_sym_STAT_PIP] = ACTIONS(21),
    [anon_sym_REG_RAX] = ACTIONS(21),
    [anon_sym_REG_RCX] = ACTIONS(21),
    [anon_sym_REG_RDX] = ACTIONS(21),
    [anon_sym_REG_RBX] = ACTIONS(21),
    [anon_sym_REG_RSP] = ACTIONS(21),
    [anon_sym_REG_RBP] = ACTIONS(21),
    [anon_sym_REG_RSI] = ACTIONS(21),
    [anon_sym_REG_RDI] = ACTIONS(21),
    [anon_sym_REG_R8] = ACTIONS(21),
    [anon_sym_REG_R9] = ACTIONS(21),
    [anon_sym_REG_R10] = ACTIONS(21),
    [anon_sym_REG_R11] = ACTIONS(21),
    [anon_sym_REG_R12] = ACTIONS(21),
    [anon_sym_REG_R13] = ACTIONS(21),
    [anon_sym_REG_R14] = ACTIONS(21),
    [anon_sym_REG_NONE] = ACTIONS(21),
    [anon_sym_HALT] = ACTIONS(21),
    [anon_sym_NOP] = ACTIONS(21),
    [anon_sym_RRMOVQ] = ACTIONS(21),
    [anon_sym_IRMOVQ] = ACTIONS(21),
    [anon_sym_RMMOVQ] = ACTIONS(21),
    [anon_sym_MRMOVQ] = ACTIONS(21),
    [anon_sym_OPQ] = ACTIONS(21),
    [anon_sym_JXX] = ACTIONS(21),
    [anon_sym_CALL] = ACTIONS(21),
    [anon_sym_RET] = ACTIONS(21),
    [anon_sym_PUSHQ] = ACTIONS(21),
    [anon_sym_POPQ] = ACTIONS(21),
    [anon_sym_CMOVXX] = ACTIONS(21),
    [anon_sym_ALWAYS] = ACTIONS(21),
    [anon_sym_LE] = ACTIONS(21),
    [anon_sym_LT2] = ACTIONS(21),
    [anon_sym_EQ2] = ACTIONS(21),
    [anon_sym_NE] = ACTIONS(21),
    [anon_sym_GE] = ACTIONS(21),
    [anon_sym_GT2] = ACTIONS(21),
    [anon_sym_ADDQ] = ACTIONS(21),
    [anon_sym_SUBQ] = ACTIONS(21),
    [anon_sym_ANDQ] = ACTIONS(21),
    [anon_sym_XORQ] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [sym_number] = ACTIONS(139),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_TRUE] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_FALSE] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(141),
    [anon_sym_wire] = ACTIONS(143),
    [anon_sym_register] = ACTIONS(143),
    [anon_sym_const] = ACTIONS(143),
    [anon_sym_LBRACK] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_BANG] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(141),
    [anon_sym_DASH] = ACTIONS(141),
    [anon_sym_PLUS] = ACTIONS(141),
    [anon_sym_STAT_BUB] = ACTIONS(143),
    [anon_sym_STAT_AOK] = ACTIONS(143),
    [anon_sym_STAT_HLT] = ACTIONS(143),
    [anon_sym_STAT_ADR] = ACTIONS(143),
    [anon_sym_STAT_INS] = ACTIONS(143),
    [anon_sym_STAT_PIP] = ACTIONS(143),
    [anon_sym_REG_RAX] = ACTIONS(143),
    [anon_sym_REG_RCX] = ACTIONS(143),
    [anon_sym_REG_RDX] = ACTIONS(143),
    [anon_sym_REG_RBX] = ACTIONS(143),
    [anon_sym_REG_RSP] = ACTIONS(143),
    [anon_sym_REG_RBP] = ACTIONS(143),
    [anon_sym_REG_RSI] = ACTIONS(143),
    [anon_sym_REG_RDI] = ACTIONS(143),
    [anon_sym_REG_R8] = ACTIONS(143),
    [anon_sym_REG_R9] = ACTIONS(143),
    [anon_sym_REG_R10] = ACTIONS(143),
    [anon_sym_REG_R11] = ACTIONS(143),
    [anon_sym_REG_R12] = ACTIONS(143),
    [anon_sym_REG_R13] = ACTIONS(143),
    [anon_sym_REG_R14] = ACTIONS(143),
    [anon_sym_REG_NONE] = ACTIONS(143),
    [anon_sym_HALT] = ACTIONS(143),
    [anon_sym_NOP] = ACTIONS(143),
    [anon_sym_RRMOVQ] = ACTIONS(143),
    [anon_sym_IRMOVQ] = ACTIONS(143),
    [anon_sym_RMMOVQ] = ACTIONS(143),
    [anon_sym_MRMOVQ] = ACTIONS(143),
    [anon_sym_OPQ] = ACTIONS(143),
    [anon_sym_JXX] = ACTIONS(143),
    [anon_sym_CALL] = ACTIONS(143),
    [anon_sym_RET] = ACTIONS(143),
    [anon_sym_PUSHQ] = ACTIONS(143),
    [anon_sym_POPQ] = ACTIONS(143),
    [anon_sym_CMOVXX] = ACTIONS(143),
    [anon_sym_ALWAYS] = ACTIONS(143),
    [anon_sym_LE] = ACTIONS(143),
    [anon_sym_LT2] = ACTIONS(143),
    [anon_sym_EQ2] = ACTIONS(143),
    [anon_sym_NE] = ACTIONS(143),
    [anon_sym_GE] = ACTIONS(143),
    [anon_sym_GT2] = ACTIONS(143),
    [anon_sym_ADDQ] = ACTIONS(143),
    [anon_sym_SUBQ] = ACTIONS(143),
    [anon_sym_ANDQ] = ACTIONS(143),
    [anon_sym_XORQ] = ACTIONS(143),
    [sym_identifier] = ACTIONS(143),
    [sym_number] = ACTIONS(141),
    [anon_sym_true] = ACTIONS(143),
    [anon_sym_TRUE] = ACTIONS(143),
    [anon_sym_false] = ACTIONS(143),
    [anon_sym_FALSE] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(145),
    [anon_sym_wire] = ACTIONS(147),
    [anon_sym_register] = ACTIONS(147),
    [anon_sym_const] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_BANG] = ACTIONS(145),
    [anon_sym_TILDE] = ACTIONS(145),
    [anon_sym_DASH] = ACTIONS(145),
    [anon_sym_PLUS] = ACTIONS(145),
    [anon_sym_STAT_BUB] = ACTIONS(147),
    [anon_sym_STAT_AOK] = ACTIONS(147),
    [anon_sym_STAT_HLT] = ACTIONS(147),
    [anon_sym_STAT_ADR] = ACTIONS(147),
    [anon_sym_STAT_INS] = ACTIONS(147),
    [anon_sym_STAT_PIP] = ACTIONS(147),
    [anon_sym_REG_RAX] = ACTIONS(147),
    [anon_sym_REG_RCX] = ACTIONS(147),
    [anon_sym_REG_RDX] = ACTIONS(147),
    [anon_sym_REG_RBX] = ACTIONS(147),
    [anon_sym_REG_RSP] = ACTIONS(147),
    [anon_sym_REG_RBP] = ACTIONS(147),
    [anon_sym_REG_RSI] = ACTIONS(147),
    [anon_sym_REG_RDI] = ACTIONS(147),
    [anon_sym_REG_R8] = ACTIONS(147),
    [anon_sym_REG_R9] = ACTIONS(147),
    [anon_sym_REG_R10] = ACTIONS(147),
    [anon_sym_REG_R11] = ACTIONS(147),
    [anon_sym_REG_R12] = ACTIONS(147),
    [anon_sym_REG_R13] = ACTIONS(147),
    [anon_sym_REG_R14] = ACTIONS(147),
    [anon_sym_REG_NONE] = ACTIONS(147),
    [anon_sym_HALT] = ACTIONS(147),
    [anon_sym_NOP] = ACTIONS(147),
    [anon_sym_RRMOVQ] = ACTIONS(147),
    [anon_sym_IRMOVQ] = ACTIONS(147),
    [anon_sym_RMMOVQ] = ACTIONS(147),
    [anon_sym_MRMOVQ] = ACTIONS(147),
    [anon_sym_OPQ] = ACTIONS(147),
    [anon_sym_JXX] = ACTIONS(147),
    [anon_sym_CALL] = ACTIONS(147),
    [anon_sym_RET] = ACTIONS(147),
    [anon_sym_PUSHQ] = ACTIONS(147),
    [anon_sym_POPQ] = ACTIONS(147),
    [anon_sym_CMOVXX] = ACTIONS(147),
    [anon_sym_ALWAYS] = ACTIONS(147),
    [anon_sym_LE] = ACTIONS(147),
    [anon_sym_LT2] = ACTIONS(147),
    [anon_sym_EQ2] = ACTIONS(147),
    [anon_sym_NE] = ACTIONS(147),
    [anon_sym_GE] = ACTIONS(147),
    [anon_sym_GT2] = ACTIONS(147),
    [anon_sym_ADDQ] = ACTIONS(147),
    [anon_sym_SUBQ] = ACTIONS(147),
    [anon_sym_ANDQ] = ACTIONS(147),
    [anon_sym_XORQ] = ACTIONS(147),
    [sym_identifier] = ACTIONS(147),
    [sym_number] = ACTIONS(145),
    [anon_sym_true] = ACTIONS(147),
    [anon_sym_TRUE] = ACTIONS(147),
    [anon_sym_false] = ACTIONS(147),
    [anon_sym_FALSE] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_wire] = ACTIONS(151),
    [anon_sym_register] = ACTIONS(151),
    [anon_sym_const] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_BANG] = ACTIONS(149),
    [anon_sym_TILDE] = ACTIONS(149),
    [anon_sym_DASH] = ACTIONS(149),
    [anon_sym_PLUS] = ACTIONS(149),
    [anon_sym_STAT_BUB] = ACTIONS(151),
    [anon_sym_STAT_AOK] = ACTIONS(151),
    [anon_sym_STAT_HLT] = ACTIONS(151),
    [anon_sym_STAT_ADR] = ACTIONS(151),
    [anon_sym_STAT_INS] = ACTIONS(151),
    [anon_sym_STAT_PIP] = ACTIONS(151),
    [anon_sym_REG_RAX] = ACTIONS(151),
    [anon_sym_REG_RCX] = ACTIONS(151),
    [anon_sym_REG_RDX] = ACTIONS(151),
    [anon_sym_REG_RBX] = ACTIONS(151),
    [anon_sym_REG_RSP] = ACTIONS(151),
    [anon_sym_REG_RBP] = ACTIONS(151),
    [anon_sym_REG_RSI] = ACTIONS(151),
    [anon_sym_REG_RDI] = ACTIONS(151),
    [anon_sym_REG_R8] = ACTIONS(151),
    [anon_sym_REG_R9] = ACTIONS(151),
    [anon_sym_REG_R10] = ACTIONS(151),
    [anon_sym_REG_R11] = ACTIONS(151),
    [anon_sym_REG_R12] = ACTIONS(151),
    [anon_sym_REG_R13] = ACTIONS(151),
    [anon_sym_REG_R14] = ACTIONS(151),
    [anon_sym_REG_NONE] = ACTIONS(151),
    [anon_sym_HALT] = ACTIONS(151),
    [anon_sym_NOP] = ACTIONS(151),
    [anon_sym_RRMOVQ] = ACTIONS(151),
    [anon_sym_IRMOVQ] = ACTIONS(151),
    [anon_sym_RMMOVQ] = ACTIONS(151),
    [anon_sym_MRMOVQ] = ACTIONS(151),
    [anon_sym_OPQ] = ACTIONS(151),
    [anon_sym_JXX] = ACTIONS(151),
    [anon_sym_CALL] = ACTIONS(151),
    [anon_sym_RET] = ACTIONS(151),
    [anon_sym_PUSHQ] = ACTIONS(151),
    [anon_sym_POPQ] = ACTIONS(151),
    [anon_sym_CMOVXX] = ACTIONS(151),
    [anon_sym_ALWAYS] = ACTIONS(151),
    [anon_sym_LE] = ACTIONS(151),
    [anon_sym_LT2] = ACTIONS(151),
    [anon_sym_EQ2] = ACTIONS(151),
    [anon_sym_NE] = ACTIONS(151),
    [anon_sym_GE] = ACTIONS(151),
    [anon_sym_GT2] = ACTIONS(151),
    [anon_sym_ADDQ] = ACTIONS(151),
    [anon_sym_SUBQ] = ACTIONS(151),
    [anon_sym_ANDQ] = ACTIONS(151),
    [anon_sym_XORQ] = ACTIONS(151),
    [sym_identifier] = ACTIONS(151),
    [sym_number] = ACTIONS(149),
    [anon_sym_true] = ACTIONS(151),
    [anon_sym_TRUE] = ACTIONS(151),
    [anon_sym_false] = ACTIONS(151),
    [anon_sym_FALSE] = ACTIONS(151),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(153),
    [anon_sym_wire] = ACTIONS(155),
    [anon_sym_register] = ACTIONS(155),
    [anon_sym_const] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(153),
    [anon_sym_BANG] = ACTIONS(153),
    [anon_sym_TILDE] = ACTIONS(153),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_STAT_BUB] = ACTIONS(155),
    [anon_sym_STAT_AOK] = ACTIONS(155),
    [anon_sym_STAT_HLT] = ACTIONS(155),
    [anon_sym_STAT_ADR] = ACTIONS(155),
    [anon_sym_STAT_INS] = ACTIONS(155),
    [anon_sym_STAT_PIP] = ACTIONS(155),
    [anon_sym_REG_RAX] = ACTIONS(155),
    [anon_sym_REG_RCX] = ACTIONS(155),
    [anon_sym_REG_RDX] = ACTIONS(155),
    [anon_sym_REG_RBX] = ACTIONS(155),
    [anon_sym_REG_RSP] = ACTIONS(155),
    [anon_sym_REG_RBP] = ACTIONS(155),
    [anon_sym_REG_RSI] = ACTIONS(155),
    [anon_sym_REG_RDI] = ACTIONS(155),
    [anon_sym_REG_R8] = ACTIONS(155),
    [anon_sym_REG_R9] = ACTIONS(155),
    [anon_sym_REG_R10] = ACTIONS(155),
    [anon_sym_REG_R11] = ACTIONS(155),
    [anon_sym_REG_R12] = ACTIONS(155),
    [anon_sym_REG_R13] = ACTIONS(155),
    [anon_sym_REG_R14] = ACTIONS(155),
    [anon_sym_REG_NONE] = ACTIONS(155),
    [anon_sym_HALT] = ACTIONS(155),
    [anon_sym_NOP] = ACTIONS(155),
    [anon_sym_RRMOVQ] = ACTIONS(155),
    [anon_sym_IRMOVQ] = ACTIONS(155),
    [anon_sym_RMMOVQ] = ACTIONS(155),
    [anon_sym_MRMOVQ] = ACTIONS(155),
    [anon_sym_OPQ] = ACTIONS(155),
    [anon_sym_JXX] = ACTIONS(155),
    [anon_sym_CALL] = ACTIONS(155),
    [anon_sym_RET] = ACTIONS(155),
    [anon_sym_PUSHQ] = ACTIONS(155),
    [anon_sym_POPQ] = ACTIONS(155),
    [anon_sym_CMOVXX] = ACTIONS(155),
    [anon_sym_ALWAYS] = ACTIONS(155),
    [anon_sym_LE] = ACTIONS(155),
    [anon_sym_LT2] = ACTIONS(155),
    [anon_sym_EQ2] = ACTIONS(155),
    [anon_sym_NE] = ACTIONS(155),
    [anon_sym_GE] = ACTIONS(155),
    [anon_sym_GT2] = ACTIONS(155),
    [anon_sym_ADDQ] = ACTIONS(155),
    [anon_sym_SUBQ] = ACTIONS(155),
    [anon_sym_ANDQ] = ACTIONS(155),
    [anon_sym_XORQ] = ACTIONS(155),
    [sym_identifier] = ACTIONS(155),
    [sym_number] = ACTIONS(153),
    [anon_sym_true] = ACTIONS(155),
    [anon_sym_TRUE] = ACTIONS(155),
    [anon_sym_false] = ACTIONS(155),
    [anon_sym_FALSE] = ACTIONS(155),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(157),
    [anon_sym_wire] = ACTIONS(159),
    [anon_sym_register] = ACTIONS(159),
    [anon_sym_const] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(157),
    [anon_sym_LPAREN] = ACTIONS(157),
    [anon_sym_BANG] = ACTIONS(157),
    [anon_sym_TILDE] = ACTIONS(157),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_STAT_BUB] = ACTIONS(159),
    [anon_sym_STAT_AOK] = ACTIONS(159),
    [anon_sym_STAT_HLT] = ACTIONS(159),
    [anon_sym_STAT_ADR] = ACTIONS(159),
    [anon_sym_STAT_INS] = ACTIONS(159),
    [anon_sym_STAT_PIP] = ACTIONS(159),
    [anon_sym_REG_RAX] = ACTIONS(159),
    [anon_sym_REG_RCX] = ACTIONS(159),
    [anon_sym_REG_RDX] = ACTIONS(159),
    [anon_sym_REG_RBX] = ACTIONS(159),
    [anon_sym_REG_RSP] = ACTIONS(159),
    [anon_sym_REG_RBP] = ACTIONS(159),
    [anon_sym_REG_RSI] = ACTIONS(159),
    [anon_sym_REG_RDI] = ACTIONS(159),
    [anon_sym_REG_R8] = ACTIONS(159),
    [anon_sym_REG_R9] = ACTIONS(159),
    [anon_sym_REG_R10] = ACTIONS(159),
    [anon_sym_REG_R11] = ACTIONS(159),
    [anon_sym_REG_R12] = ACTIONS(159),
    [anon_sym_REG_R13] = ACTIONS(159),
    [anon_sym_REG_R14] = ACTIONS(159),
    [anon_sym_REG_NONE] = ACTIONS(159),
    [anon_sym_HALT] = ACTIONS(159),
    [anon_sym_NOP] = ACTIONS(159),
    [anon_sym_RRMOVQ] = ACTIONS(159),
    [anon_sym_IRMOVQ] = ACTIONS(159),
    [anon_sym_RMMOVQ] = ACTIONS(159),
    [anon_sym_MRMOVQ] = ACTIONS(159),
    [anon_sym_OPQ] = ACTIONS(159),
    [anon_sym_JXX] = ACTIONS(159),
    [anon_sym_CALL] = ACTIONS(159),
    [anon_sym_RET] = ACTIONS(159),
    [anon_sym_PUSHQ] = ACTIONS(159),
    [anon_sym_POPQ] = ACTIONS(159),
    [anon_sym_CMOVXX] = ACTIONS(159),
    [anon_sym_ALWAYS] = ACTIONS(159),
    [anon_sym_LE] = ACTIONS(159),
    [anon_sym_LT2] = ACTIONS(159),
    [anon_sym_EQ2] = ACTIONS(159),
    [anon_sym_NE] = ACTIONS(159),
    [anon_sym_GE] = ACTIONS(159),
    [anon_sym_GT2] = ACTIONS(159),
    [anon_sym_ADDQ] = ACTIONS(159),
    [anon_sym_SUBQ] = ACTIONS(159),
    [anon_sym_ANDQ] = ACTIONS(159),
    [anon_sym_XORQ] = ACTIONS(159),
    [sym_identifier] = ACTIONS(159),
    [sym_number] = ACTIONS(157),
    [anon_sym_true] = ACTIONS(159),
    [anon_sym_TRUE] = ACTIONS(159),
    [anon_sym_false] = ACTIONS(159),
    [anon_sym_FALSE] = ACTIONS(159),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [anon_sym_const] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_RBRACK] = ACTIONS(163),
    [anon_sym_LPAREN] = ACTIONS(163),
    [anon_sym_BANG] = ACTIONS(163),
    [anon_sym_TILDE] = ACTIONS(163),
    [anon_sym_DASH] = ACTIONS(163),
    [anon_sym_PLUS] = ACTIONS(163),
    [anon_sym_STAT_BUB] = ACTIONS(161),
    [anon_sym_STAT_AOK] = ACTIONS(161),
    [anon_sym_STAT_HLT] = ACTIONS(161),
    [anon_sym_STAT_ADR] = ACTIONS(161),
    [anon_sym_STAT_INS] = ACTIONS(161),
    [anon_sym_STAT_PIP] = ACTIONS(161),
    [anon_sym_REG_RAX] = ACTIONS(161),
    [anon_sym_REG_RCX] = ACTIONS(161),
    [anon_sym_REG_RDX] = ACTIONS(161),
    [anon_sym_REG_RBX] = ACTIONS(161),
    [anon_sym_REG_RSP] = ACTIONS(161),
    [anon_sym_REG_RBP] = ACTIONS(161),
    [anon_sym_REG_RSI] = ACTIONS(161),
    [anon_sym_REG_RDI] = ACTIONS(161),
    [anon_sym_REG_R8] = ACTIONS(161),
    [anon_sym_REG_R9] = ACTIONS(161),
    [anon_sym_REG_R10] = ACTIONS(161),
    [anon_sym_REG_R11] = ACTIONS(161),
    [anon_sym_REG_R12] = ACTIONS(161),
    [anon_sym_REG_R13] = ACTIONS(161),
    [anon_sym_REG_R14] = ACTIONS(161),
    [anon_sym_REG_NONE] = ACTIONS(161),
    [anon_sym_HALT] = ACTIONS(161),
    [anon_sym_NOP] = ACTIONS(161),
    [anon_sym_RRMOVQ] = ACTIONS(161),
    [anon_sym_IRMOVQ] = ACTIONS(161),
    [anon_sym_RMMOVQ] = ACTIONS(161),
    [anon_sym_MRMOVQ] = ACTIONS(161),
    [anon_sym_OPQ] = ACTIONS(161),
    [anon_sym_JXX] = ACTIONS(161),
    [anon_sym_CALL] = ACTIONS(161),
    [anon_sym_RET] = ACTIONS(161),
    [anon_sym_PUSHQ] = ACTIONS(161),
    [anon_sym_POPQ] = ACTIONS(161),
    [anon_sym_CMOVXX] = ACTIONS(161),
    [anon_sym_ALWAYS] = ACTIONS(161),
    [anon_sym_LE] = ACTIONS(161),
    [anon_sym_LT2] = ACTIONS(161),
    [anon_sym_EQ2] = ACTIONS(161),
    [anon_sym_NE] = ACTIONS(161),
    [anon_sym_GE] = ACTIONS(161),
    [anon_sym_GT2] = ACTIONS(161),
    [anon_sym_ADDQ] = ACTIONS(161),
    [anon_sym_SUBQ] = ACTIONS(161),
    [anon_sym_ANDQ] = ACTIONS(161),
    [anon_sym_XORQ] = ACTIONS(161),
    [sym_identifier] = ACTIONS(161),
    [sym_number] = ACTIONS(163),
    [anon_sym_true] = ACTIONS(161),
    [anon_sym_TRUE] = ACTIONS(161),
    [anon_sym_false] = ACTIONS(161),
    [anon_sym_FALSE] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_EQ,
    ACTIONS(169), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(165), 21,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
  [38] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(171), 21,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
  [73] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(179), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(175), 20,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
  [110] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 1,
      anon_sym_in,
    ACTIONS(191), 1,
      anon_sym_AMP_AMP,
    ACTIONS(199), 1,
      anon_sym_AMP,
    ACTIONS(201), 1,
      anon_sym_PIPE,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(189), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(193), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
    ACTIONS(197), 2,
      anon_sym_SLASH,
      anon_sym_GT_GT,
    ACTIONS(195), 3,
      anon_sym_STAR,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(187), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(181), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
  [165] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(203), 20,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
  [202] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(203), 20,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
  [239] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(207), 21,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
  [274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(211), 21,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
  [309] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(215), 21,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
  [344] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(219), 21,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
  [379] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(179), 1,
      anon_sym_PIPE,
    ACTIONS(191), 1,
      anon_sym_AMP_AMP,
    ACTIONS(199), 1,
      anon_sym_AMP,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(189), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(197), 2,
      anon_sym_SLASH,
      anon_sym_GT_GT,
    ACTIONS(195), 3,
      anon_sym_STAR,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(187), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(175), 10,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
  [430] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(223), 21,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
  [465] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(179), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(189), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(197), 2,
      anon_sym_SLASH,
      anon_sym_GT_GT,
    ACTIONS(195), 3,
      anon_sym_STAR,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(187), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(175), 11,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
  [512] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(227), 21,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
  [547] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 2,
      anon_sym_SLASH,
      anon_sym_GT_GT,
    ACTIONS(195), 3,
      anon_sym_STAR,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(179), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(175), 17,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
  [588] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(231), 21,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
  [623] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 1,
      anon_sym_in,
    ACTIONS(191), 1,
      anon_sym_AMP_AMP,
    ACTIONS(199), 1,
      anon_sym_AMP,
    ACTIONS(201), 1,
      anon_sym_PIPE,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(189), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(193), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
    ACTIONS(197), 2,
      anon_sym_SLASH,
      anon_sym_GT_GT,
    ACTIONS(195), 3,
      anon_sym_STAR,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(187), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(235), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
  [678] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(179), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(189), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(197), 2,
      anon_sym_SLASH,
      anon_sym_GT_GT,
    ACTIONS(195), 3,
      anon_sym_STAR,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(187), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(175), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
  [723] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(237), 21,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
  [758] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 1,
      anon_sym_in,
    ACTIONS(191), 1,
      anon_sym_AMP_AMP,
    ACTIONS(199), 1,
      anon_sym_AMP,
    ACTIONS(201), 1,
      anon_sym_PIPE,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      aux_sym_in_expression_repeat1,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(189), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(193), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
    ACTIONS(197), 2,
      anon_sym_SLASH,
      anon_sym_GT_GT,
    ACTIONS(195), 3,
      anon_sym_STAR,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(187), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [813] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 1,
      anon_sym_in,
    ACTIONS(191), 1,
      anon_sym_AMP_AMP,
    ACTIONS(199), 1,
      anon_sym_AMP,
    ACTIONS(201), 1,
      anon_sym_PIPE,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(189), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(193), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
    ACTIONS(197), 2,
      anon_sym_SLASH,
      anon_sym_GT_GT,
    ACTIONS(245), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(195), 3,
      anon_sym_STAR,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(187), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [863] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 1,
      anon_sym_in,
    ACTIONS(191), 1,
      anon_sym_AMP_AMP,
    ACTIONS(199), 1,
      anon_sym_AMP,
    ACTIONS(201), 1,
      anon_sym_PIPE,
    ACTIONS(247), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(189), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(193), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
    ACTIONS(197), 2,
      anon_sym_SLASH,
      anon_sym_GT_GT,
    ACTIONS(195), 3,
      anon_sym_STAR,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(187), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [912] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 1,
      anon_sym_in,
    ACTIONS(191), 1,
      anon_sym_AMP_AMP,
    ACTIONS(199), 1,
      anon_sym_AMP,
    ACTIONS(201), 1,
      anon_sym_PIPE,
    ACTIONS(249), 1,
      anon_sym_SEMI,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(189), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(193), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
    ACTIONS(197), 2,
      anon_sym_SLASH,
      anon_sym_GT_GT,
    ACTIONS(195), 3,
      anon_sym_STAR,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(187), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [961] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 1,
      anon_sym_in,
    ACTIONS(191), 1,
      anon_sym_AMP_AMP,
    ACTIONS(199), 1,
      anon_sym_AMP,
    ACTIONS(201), 1,
      anon_sym_PIPE,
    ACTIONS(251), 1,
      anon_sym_SEMI,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(189), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(193), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
    ACTIONS(197), 2,
      anon_sym_SLASH,
      anon_sym_GT_GT,
    ACTIONS(195), 3,
      anon_sym_STAR,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(187), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1010] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 1,
      anon_sym_in,
    ACTIONS(191), 1,
      anon_sym_AMP_AMP,
    ACTIONS(199), 1,
      anon_sym_AMP,
    ACTIONS(201), 1,
      anon_sym_PIPE,
    ACTIONS(253), 1,
      anon_sym_RBRACK,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(189), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(193), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
    ACTIONS(197), 2,
      anon_sym_SLASH,
      anon_sym_GT_GT,
    ACTIONS(195), 3,
      anon_sym_STAR,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(187), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1059] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 1,
      anon_sym_in,
    ACTIONS(191), 1,
      anon_sym_AMP_AMP,
    ACTIONS(199), 1,
      anon_sym_AMP,
    ACTIONS(201), 1,
      anon_sym_PIPE,
    ACTIONS(255), 1,
      anon_sym_COLON,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(189), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(193), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
    ACTIONS(197), 2,
      anon_sym_SLASH,
      anon_sym_GT_GT,
    ACTIONS(195), 3,
      anon_sym_STAR,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(187), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1108] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 1,
      anon_sym_in,
    ACTIONS(191), 1,
      anon_sym_AMP_AMP,
    ACTIONS(199), 1,
      anon_sym_AMP,
    ACTIONS(201), 1,
      anon_sym_PIPE,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(189), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(193), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
    ACTIONS(197), 2,
      anon_sym_SLASH,
      anon_sym_GT_GT,
    ACTIONS(195), 3,
      anon_sym_STAR,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(187), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1157] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 1,
      anon_sym_in,
    ACTIONS(191), 1,
      anon_sym_AMP_AMP,
    ACTIONS(199), 1,
      anon_sym_AMP,
    ACTIONS(201), 1,
      anon_sym_PIPE,
    ACTIONS(259), 1,
      anon_sym_SEMI,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(189), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(193), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
    ACTIONS(197), 2,
      anon_sym_SLASH,
      anon_sym_GT_GT,
    ACTIONS(195), 3,
      anon_sym_STAR,
      anon_sym_GT_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(187), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1206] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_RBRACE,
    ACTIONS(263), 1,
      sym_identifier,
    STATE(70), 1,
      sym_variable_declarator,
    STATE(58), 2,
      sym__register_expression_statement,
      aux_sym_register_declaration_repeat1,
  [1223] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_variable_declarator,
    STATE(59), 2,
      sym__register_expression_statement,
      aux_sym_register_declaration_repeat1,
  [1240] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_RBRACE,
    ACTIONS(269), 1,
      sym_identifier,
    STATE(70), 1,
      sym_variable_declarator,
    STATE(59), 2,
      sym__register_expression_statement,
      aux_sym_register_declaration_repeat1,
  [1257] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_SEMI,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      aux_sym_wire_declaration_repeat1,
  [1270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [1279] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_SEMI,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      aux_sym_wire_declaration_repeat1,
  [1292] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      anon_sym_SEMI,
    STATE(62), 1,
      aux_sym_wire_declaration_repeat1,
  [1305] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      aux_sym_in_expression_repeat1,
  [1318] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      aux_sym_in_expression_repeat1,
  [1331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1339] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_identifier,
    STATE(63), 1,
      sym_variable_declarator,
  [1349] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_identifier,
    STATE(66), 1,
      sym_variable_declarator,
  [1359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_EQ,
  [1374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_number,
  [1381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LBRACE,
  [1388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_EQ,
  [1395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LBRACE,
  [1402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_COLON,
  [1409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      ts_builtin_sym_end,
  [1416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      sym_identifier,
  [1423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      sym_register_name,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(29)] = 0,
  [SMALL_STATE(30)] = 38,
  [SMALL_STATE(31)] = 73,
  [SMALL_STATE(32)] = 110,
  [SMALL_STATE(33)] = 165,
  [SMALL_STATE(34)] = 202,
  [SMALL_STATE(35)] = 239,
  [SMALL_STATE(36)] = 274,
  [SMALL_STATE(37)] = 309,
  [SMALL_STATE(38)] = 344,
  [SMALL_STATE(39)] = 379,
  [SMALL_STATE(40)] = 430,
  [SMALL_STATE(41)] = 465,
  [SMALL_STATE(42)] = 512,
  [SMALL_STATE(43)] = 547,
  [SMALL_STATE(44)] = 588,
  [SMALL_STATE(45)] = 623,
  [SMALL_STATE(46)] = 678,
  [SMALL_STATE(47)] = 723,
  [SMALL_STATE(48)] = 758,
  [SMALL_STATE(49)] = 813,
  [SMALL_STATE(50)] = 863,
  [SMALL_STATE(51)] = 912,
  [SMALL_STATE(52)] = 961,
  [SMALL_STATE(53)] = 1010,
  [SMALL_STATE(54)] = 1059,
  [SMALL_STATE(55)] = 1108,
  [SMALL_STATE(56)] = 1157,
  [SMALL_STATE(57)] = 1206,
  [SMALL_STATE(58)] = 1223,
  [SMALL_STATE(59)] = 1240,
  [SMALL_STATE(60)] = 1257,
  [SMALL_STATE(61)] = 1270,
  [SMALL_STATE(62)] = 1279,
  [SMALL_STATE(63)] = 1292,
  [SMALL_STATE(64)] = 1305,
  [SMALL_STATE(65)] = 1318,
  [SMALL_STATE(66)] = 1331,
  [SMALL_STATE(67)] = 1339,
  [SMALL_STATE(68)] = 1349,
  [SMALL_STATE(69)] = 1359,
  [SMALL_STATE(70)] = 1367,
  [SMALL_STATE(71)] = 1374,
  [SMALL_STATE(72)] = 1381,
  [SMALL_STATE(73)] = 1388,
  [SMALL_STATE(74)] = 1395,
  [SMALL_STATE(75)] = 1402,
  [SMALL_STATE(76)] = 1409,
  [SMALL_STATE(77)] = 1416,
  [SMALL_STATE(78)] = 1423,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(77),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(7),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mux_expression_repeat1, 2),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(21),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(8),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(20),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(36),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(29),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(54),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(37),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mux_expression_repeat1, 2), SHIFT_REPEAT(47),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register_declaration, 4),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register_declaration, 4),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register_declaration, 5),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register_declaration, 5),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wire_declaration, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wire_declaration, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wire_declaration, 4),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wire_declaration, 4),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mux_expression_repeat1, 4),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mux_expression_repeat1, 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 5),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 5),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_expression, 6),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_expression, 6),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predefined_constant, 1),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predefined_constant, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_true, 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_true, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 6),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 6),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 4),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 4),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mux_expression, 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mux_expression, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_false, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_false, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_in_expression_repeat1, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_register_declaration_repeat1, 2),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_register_declaration_repeat1, 2), SHIFT_REPEAT(75),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_wire_declaration_repeat1, 2),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_wire_declaration_repeat1, 2), SHIFT_REPEAT(68),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declarator, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_in_expression_repeat1, 2), SHIFT_REPEAT(17),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__register_expression_statement, 4),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [304] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hclrs(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .field_count = FIELD_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
