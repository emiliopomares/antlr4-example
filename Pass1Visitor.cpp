#include "Pass1Visitor.h"
#include "Exceptions.h"
#include <iostream>
#include <vector>

Pass1Visitor::Pass1Visitor(SymbolTable* symbolTable) : Pass2Visitor(symbolTable)
{
	this->symbolTable = symbolTable;
	encounteredFunctions.clear();
}

std::any Pass1Visitor::visitProgram(calcWithFunctionsParser::ProgramContext *ctx)
{
	passOk = true;
	visitChildren(ctx);
	return passOk;
}

std::any Pass1Visitor::visitEvaluate_expression_stmt(calcWithFunctionsParser::Evaluate_expression_stmtContext *ctx)
{
	return nullptr;
}

std::any Pass1Visitor::visitExpr_assign_stmt(calcWithFunctionsParser::Expr_assign_stmtContext *ctx)
{
	return nullptr;
}

std::any Pass1Visitor::visitFunction_definition(calcWithFunctionsParser::Function_definitionContext *ctx) 
{
	std::string functionName = ctx->children[1]->getText();
	if(std::find(encounteredFunctions.begin(), encounteredFunctions.end(), functionName) != encounteredFunctions.end())
	{
		throw new FunctionAlreadyDefinedException(functionName);
	}
	encounteredFunctions.push_back(functionName);

	if(symbolTable->findFunction(functionName) != nullptr) 
	{
		return nullptr;
	}
		
	std::vector<std::string> paramNames = std::any_cast<std::vector<std::string>>(visit(ctx->children[3]));

	symbolTable->startScope(functionName);

	for(auto varname : paramNames) 
	{
		Variable* newVar = new Variable();
		symbolTable->addVariable(varname, functionName, newVar);
	}

	
	Expression expr = std::any_cast<Expression>(visit(ctx->children[6]));
	passOk &= expr.valid;

	if(expr.valid) 
	{
		Function* newFunction = new Function(functionName, paramNames, new Expression(expr), symbolTable);
		symbolTable->addFunction(functionName, newFunction);
	}

	symbolTable->endScope();
	
	return nullptr;
	
}