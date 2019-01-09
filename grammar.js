const PREC = {
	COMMENT: 1, // Prefer comments over regexes
	STRING: 2,  // In a string, prefer string characters over comments

	COMMA: -1,
	DECLARATION: 1,
	ASSIGN: 0,
	MUX: 1,
	TERNARY: 1,
	OR: 2,
	AND: 3,
	PLUS: 4,
	REL: 5,
	TIMES: 6,
	NOT: 7,
	NEG: 8,
	MEMBER: 9,
};

module.exports = grammar({
	name: 'hcl',

	extras: $ => [
		$.comment,
		/[\s\uFEFF\u2060\u200B\u00A0]/, // whitespace
	],

	rules: {
		source_file: $ => repeat($._statement),

		_statement: $ => choice(
			$._declaration,
			seq($._expression, ';'),
		),

		_declaration: $ => choice(
			$.register_declaration,
			$.wire_declaration,
		),

		wire_declaration: $ => seq(
			'wire',
			repeatWithDelimiter1($.variable_declarator, ','),
			';',
		),

		variable_declarator: $ => seq(
			$.identifier,
			':',
			$.number,
		),

		register_declaration: $ => seq(
			'register',
			$.register_name,
			'{',
			repeat($._register_expression_statement),
			'}',
		),

		register_name: $ => /\w\w/,

		_register_expression_statement: $ => seq(
			$.variable_declarator,
			'=',
			$._expression,
			';',
		),

		_expression: $ => choice(
			$.assignment_expression,
			$.mux_expression,
			$.in_expression,
			$.slice_expression,
			$.unary_expression,
			$.binary_expression,
			$.predefined_constant,
			$.identifier,
			$.number,
			$.true,
			$.false,
		),

		assignment_expression: $ => prec.right(PREC.ASSIGN, seq(
			optional('const'),
			$.identifier,
			'=',
			$._expression,
		)),

		mux_expression: $ => seq(
			'[',
			repeat1(seq(
				$._expression,
				':',
				$._expression,
				';',
			)),
			']',
		),

		in_expression: $ => seq(
			$._expression,
			'in',
			'{',
			repeatWithDelimiter($._expression, ','),
			'}'
		),

		slice_expression: $ => prec.right(PREC.MEMBER, seq(
      $._expression,
      '[',
			$._expression,
			'..',
			$._expression,
			']',
    )),

		unary_expression: $ => choice(...[
			['!', PREC.NOT],
			['~', PREC.NOT],
			['-', PREC.NEG],
			['+', PREC.NEG],
		].map(([operator, precedence]) =>
			prec.left(precedence, seq(operator, $._expression))
		)),

		binary_expression: $ => choice(...[
			['==', PREC.REL],
			['!=', PREC.REL],
			['>=', PREC.REL],
			['<=', PREC.REL],
			['>', PREC.REL],
			['<', PREC.REL],
			['&&', PREC.AND],
			['||', PREC.OR],
			['+', PREC.PLUS],
			['-', PREC.PLUS],
			['*', PREC.TIMES],
			['/', PREC.TIMES],
			['>>', PREC.TIMES],
			['>>>', PREC.TIMES],
			['<<', PREC.TIMES],
			['&', PREC.AND],
			['|', PREC.OR],
			['^', PREC.OR],
		].map(([operator, precedence]) =>
			prec.left(precedence, seq($._expression, operator, $._expression))
		)),

		predefined_constant: $ => choice(
			'STAT_BUB', 'STAT_AOK', 'STAT_HLT', 'STAT_ADR', 'STAT_INS', 'STAT_PIP',
			'REG_RAX', 'REG_RCX', 'REG_RDX', 'REG_RBX', 'REG_RSP', 'REG_RBP', 'REG_RSI', 'REG_RDI',
			'REG_R8', 'REG_R9', 'REG_R10', 'REG_R11', 'REG_R12', 'REG_R13', 'REG_R14', 'REG_NONE',
			'HALT', 'NOP', 'RRMOVQ', 'IRMOVQ', 'RMMOVQ', 'MRMOVQ', 'OPQ', 'JXX', 'CALL', 'RET',
			'PUSHQ', 'POPQ', 'CMOVXX', 'RRMOVQ',
			'ALWAYS', 'LE', 'LT', 'EQ', 'NE', 'GE', 'GT',
			'ADDQ', 'SUBQ', 'ANDQ', 'XORQ',
		),


		identifier: $ => {
      const alpha = /[^\s0-9:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B\u00A0]/
      const alpha_numeric = /[^\s:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B\u00A0]/

      return token(seq(alpha, repeat(alpha_numeric)))
    },

		number: $ => {
			const hex_literal = seq(
				choice('0x', '0X'),
				/[\da-fA-F]+/
			)

			const decimal_digits = /\d+/

			const signed_integer = seq(optional(choice('-','+')), decimal_digits)
			const exponent_part = seq(choice('e', 'E'), signed_integer)

			const binary_literal = seq(choice('0b', '0B'), /[0-1]+/)

			const decimal_integer_literal = choice(
				'0',
				seq(optional('0'), /[1-9]/, optional(decimal_digits))
			)

			const decimal_literal = seq(decimal_integer_literal, optional(exponent_part))

			return token(choice(
				decimal_literal,
				hex_literal,
				binary_literal,
			))
		},

		true: $ => choice('true', 'TRUE'),
		false: $ => choice('false', 'FALSE'),

		comment: $ => token(choice(
			/#.*/, // pound comment
			/\/\/.*/, // slash comment
			// http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
			seq(
				'/*',
				/[^*]*\*+([^/*][^*]*\*+)*/,
				'/',
			),
		)),

		pound_comment: $ => /#.*/,
		slash_comment: $ => /\/\/.*/,
		// http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
		multiline_comment: $ => seq(
			'/*',
			/[^*]*\*+([^/*][^*]*\*+)*/,
			'/'
		)
	}
});

// Taken from tree-sitter-javascript
function repeatWithDelimiter1 (rule, delimiter) {
	return seq(rule, repeat(seq(delimiter, rule)));
}

function repeatWithDelimiter (rule, delimiter) {
	return optional(repeatWithDelimiter1(rule, delimiter));
}
