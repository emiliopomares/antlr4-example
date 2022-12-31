grammar calcWithFunctions;

// Tokens

NEWLINE: '\n';
DIGIT: '0'..'9';
ID: ('a'..'z'|'A'..'Z') ('a'..'z'|'A'..'Z'|'0'..'9'|'_')*;
WS: (' ' | '\t' )+ -> skip;



// Rules

program:
	statement* EOF
	;

statement:
	  expression NEWLINE				# evaluate_expression_stmt
	| function_definition NEWLINE		# define_function_stmt
	;

function_definition:
	'func' ID '(' params_names_list ')' '=>' expression
	;

constant:
	DIGIT+
	;

variable:
	ID
	;

expression:
	constant								# expr_constant_eval
	| variable								# expr_variable_eval
	| expression '*' expression				# expr_mul_eval
	| expression '/' expression				# expr_div_eval
	| expression '+' expression				# expr_add_eval
	| expression '-' expression				# expr_sub_eval
	| '(' expression ')'					# expr_parenthesis_eval
	| ID '(' params_values_list ')'			# expr_function_call_eval
	| variable '=' expression				# expr_assign_eval
	;

params_names_list:
	  ID							# params_names_single
	| params_names_list ',' ID		# params_names_multiple
	;

params_values_list:
	  expression							# params_values_single
	| params_values_list ',' expression		# params_values_multiple
	;
