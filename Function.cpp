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

double Function::call()
{
	return expression->evaluate();
}

std::vector<std::string>* Function::getParamNames()
{
	return &param_names;
}
