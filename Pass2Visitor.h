#pragma once

#include "./antlr/calcWithFunctionsBaseVisitor.h"
#include "SymbolTable.h"

class Pass2Visitor : public calcWithFunctionsBaseVisitor
{
	protected:
		SymbolTable* symbolTable;
		int resultCounter;
	public:
		Pass2Visitor(SymbolTable* symbolTable);
		std::any visitEvaluate_expression_stmt(calcWithFunctionsParser::Evaluate_expression_stmtContext *context) override;
		std::any visitFunction_definition(calcWithFunctionsParser::Function_definitionContext *ctx) override;
		std::any visitParams_names_single(calcWithFunctionsParser::Params_names_singleContext *ctx) override;
  		std::any visitParams_names_multiple(calcWithFunctionsParser::Params_names_multipleContext *ctx) override;
		std::any visitDefine_function_stmt(calcWithFunctionsParser::Define_function_stmtContext *context) override;
		std::any visitExpr_variable_eval(calcWithFunctionsParser::Expr_variable_evalContext *ctx) override;
  		std::any visitExpr_assign_eval(calcWithFunctionsParser::Expr_assign_evalContext *ctx) override;
		std::any visitExpr_sub_eval(calcWithFunctionsParser::Expr_sub_evalContext *ctx) override;
  		std::any visitExpr_constant_eval(calcWithFunctionsParser::Expr_constant_evalContext *ctx) override;
		std::any visitExpr_function_call_eval(calcWithFunctionsParser::Expr_function_call_evalContext *ctx) override;
		std::any visitExpr_add_eval(calcWithFunctionsParser::Expr_add_evalContext *ctx) override;
		std::any visitExpr_mul_eval(calcWithFunctionsParser::Expr_mul_evalContext *ctx) override;
  		std::any visitExpr_div_eval(calcWithFunctionsParser::Expr_div_evalContext *ctx) override;
  		std::any visitExpr_parenthesis_eval(calcWithFunctionsParser::Expr_parenthesis_evalContext *ctx) override;
		std::any visitParams_values_single(calcWithFunctionsParser::Params_values_singleContext *ctx) override;
		std::any visitParams_values_multiple(calcWithFunctionsParser::Params_values_multipleContext *ctx) override;
};
