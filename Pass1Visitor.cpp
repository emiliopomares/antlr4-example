#include "Pass1Visitor.h"
#include <iostream>
#include <vector>

Pass1Visitor::Pass1Visitor(SymbolTable* symbolTable) : Pass2Visitor(symbolTable)
{
	this->symbolTable = symbolTable;
}

std::any Pass1Visitor::visitEvaluate_expression_stmt(calcWithFunctionsParser::Evaluate_expression_stmtContext *ctx)
{
	return nullptr;
}

std::any Pass1Visitor::visitFunction_definition(calcWithFunctionsParser::Function_definitionContext *ctx) 
{
	std::string functionName = ctx->children[1]->getText();
		
	std::vector<std::string> paramNames = std::any_cast<std::vector<std::string>>(visit(ctx->children[3]));

	symbolTable->startScope(functionName);

	for(auto varname : paramNames) 
	{
		Variable* newVar = new Variable();
		symbolTable->addVariable(varname, functionName, newVar);
	}

	Expression expr = std::any_cast<Expression>(visit(ctx->children[6]));

	Function* newFunction = new Function(functionName, paramNames, new Expression(expr), symbolTable);
	
	symbolTable->addFunction(functionName, newFunction);
	symbolTable->endScope();
	return nullptr; 
}