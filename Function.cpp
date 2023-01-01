#include "Function.h"
#include "SymbolTable.h"
#include <iostream>

Function::Function(std::string name, std::vector<std::string> param_names, Expression* expression, SymbolTable* symbolTable)
{
	this->name = name;
	for(auto varname : param_names) 
	{
		this->param_names.push_back(varname);
	}
	this->expression = expression;
	this->symbolTable = symbolTable;
}

void Function::setParamValues(std::string scope, std::vector<Expression> param_values)
{
	this->param_values[scope].clear();
	for(auto expr : param_values)
	{
		this->param_values[scope].push_back(expr);
	}
}

std::vector<Expression>* Function::getParamValues(std::string scope)
{
	return &param_values[scope];
}

double Function::call()
{
	symbolTable->startScope(name);
	double result = expression->evaluate();
	symbolTable->endScope();
	return result;
}

std::string Function::getName()
{
	return name;
}

std::vector<std::string>* Function::getParamNames()
{
	return &param_names;
}
