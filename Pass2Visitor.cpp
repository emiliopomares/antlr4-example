#include "Pass2Visitor.h"
#include "Exceptions.h"
#include <iostream>
#include <vector>

Pass2Visitor::Pass2Visitor(SymbolTable* symbolTable) : calcWithFunctionsBaseVisitor()
{
	this->symbolTable = symbolTable;
	resultCounter = 1;
}

std::any Pass2Visitor::visitEvaluate_expression_stmt(calcWithFunctionsParser::Evaluate_expression_stmtContext *ctx)
{
	Expression expression = std::any_cast<Expression>(visit(ctx->children[0]));
	double value = expression.evaluate();
	std::cout << "[" << resultCounter << "] - " << value << " \n";
	++resultCounter;
	return nullptr;
}

std::any Pass2Visitor::visitDefine_function_stmt(calcWithFunctionsParser::Define_function_stmtContext *ctx)
{
	return visitChildren(ctx);
}

std::any Pass2Visitor::visitExpr_assign_stmt(calcWithFunctionsParser::Expr_assign_stmtContext *ctx) 
{
	Expression newExpression(symbolTable, 0.0);
	std::string currentScope = symbolTable->getCurrentScope();
	std::string varName = ctx->children[0]->getText();
	Variable* var = symbolTable->findVariable(varName, symbolTable->getCurrentScope());
	if(var == nullptr)
	{
		var = new Variable();
		symbolTable->addVariable(varName, currentScope, var);
	}
	Expression expression = std::any_cast<Expression>(visit(ctx->children[2]));
	double value = expression.evaluate();
	var->setValue(value);
	std::cout << "[" << resultCounter << "] - " << varName << " <- " << value << " \n";
	resultCounter++;
	return nullptr;
}

std::any Pass2Visitor::visitExpr_variable_eval(calcWithFunctionsParser::Expr_variable_evalContext *ctx)
{
	Expression newExpression(symbolTable, 0.0);
	std::string varName = ctx->getText();
	Variable* var = symbolTable->findVariable(varName, symbolTable->getCurrentScope());
	if(var == nullptr) {
		return newExpression;
	}
	newExpression.setVariable(var);
	return newExpression;
}

std::any Pass2Visitor::visitExpr_sub_eval(calcWithFunctionsParser::Expr_sub_evalContext *ctx)
{
	Expression lvalue = std::any_cast<Expression>(visit(ctx->children[0]));
	Expression rvalue = std::any_cast<Expression>(visit(ctx->children[2]));
	Expression newExpression(symbolTable, &lvalue, &rvalue, "-");
	return newExpression;
}

std::any Pass2Visitor::visitExpr_constant_eval(calcWithFunctionsParser::Expr_constant_evalContext *ctx)
{
	Expression newExpression(symbolTable, atof(ctx->getText().c_str()));
	return newExpression;
}

std::any Pass2Visitor::visitExpr_function_call_eval(calcWithFunctionsParser::Expr_function_call_evalContext *ctx)
{
	Expression newExpression(symbolTable, 0.0);
	
	std::string funcName = ctx->children[0]->getText();
	Function* function = symbolTable->findFunction(funcName);
	if(function==nullptr) {
		newExpression.setConstant(0.0);
		newExpression.valid = false;
		return newExpression;
	}
	
	std::vector<Expression> values = std::any_cast<std::vector<Expression>>(visit(ctx->children[2]));
	function->setParamValues(symbolTable->getCurrentScope(), values);

	newExpression.setFunction(function);
	return newExpression;
}

std::any Pass2Visitor::visitExpr_add_eval(calcWithFunctionsParser::Expr_add_evalContext *ctx)
{
	Expression lvalue = std::any_cast<Expression>(visit(ctx->children[0]));
	Expression rvalue = std::any_cast<Expression>(visit(ctx->children[2]));
	Expression newExpression(symbolTable, &lvalue, &rvalue, "+");
	return newExpression;
}
std::any Pass2Visitor::visitExpr_mul_eval(calcWithFunctionsParser::Expr_mul_evalContext *ctx)
{
	Expression lvalue = std::any_cast<Expression>(visit(ctx->children[0]));
	Expression rvalue = std::any_cast<Expression>(visit(ctx->children[2]));
	Expression newExpression(symbolTable, &lvalue, &rvalue, "*");
	return newExpression;
}
std::any Pass2Visitor::visitExpr_div_eval(calcWithFunctionsParser::Expr_div_evalContext *ctx)
{
	Expression lvalue = std::any_cast<Expression>(visit(ctx->children[0]));
	Expression rvalue = std::any_cast<Expression>(visit(ctx->children[2]));
	Expression newExpression(symbolTable, &lvalue, &rvalue, "/");
	return newExpression;
}
std::any Pass2Visitor::visitExpr_parenthesis_eval(calcWithFunctionsParser::Expr_parenthesis_evalContext *ctx)
{
	Expression expression = std::any_cast<Expression>(visit(ctx->children[1]));
	return expression;
}

std::any Pass2Visitor::visitParams_names_single(calcWithFunctionsParser::Params_names_singleContext *ctx)
{
	std::vector<std::string> values;
	values.push_back(ctx->getText());
	return values;
}
  	
std::any Pass2Visitor::visitParams_names_multiple(calcWithFunctionsParser::Params_names_multipleContext *ctx)
{
	std::vector<std::string> values;
	std::vector<std::string> childrenValues = std::any_cast<std::vector<std::string>>(visit(ctx->children[0]));
	for(auto value : childrenValues)
	{
		values.push_back(value);
	}
	values.push_back(ctx->children[2]->getText());
	return values;
}

std::any Pass2Visitor::visitFunction_definition(calcWithFunctionsParser::Function_definitionContext *ctx) 
{
	return nullptr;
}

std::any Pass2Visitor::visitParams_values_single(calcWithFunctionsParser::Params_values_singleContext *ctx)
{
	Expression expression = std::any_cast<Expression>(visit(ctx->children[0]));
	std::vector<Expression> values;
	values.push_back(expression);
	return values;
}

std::any Pass2Visitor::visitParams_values_multiple(calcWithFunctionsParser::Params_values_multipleContext *ctx)
{
	std::vector<Expression> values;
	std::vector<Expression> childrenValues = std::any_cast<std::vector<Expression>>(visit(ctx->children[0]));
	Expression singleValue = std::any_cast<Expression>(visit(ctx->children[2]));
	for(auto value : childrenValues)
	{
		values.push_back(value);
	}
	values.push_back(singleValue);
	return values;
}

