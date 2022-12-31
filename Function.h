#pragma once

#include <string>
#include <vector>
#include <string>
#include "Expression.h"

class SymbolTable;

class Function {
	private:
		std::string name;
		std::vector<std::string> param_names;
		Expression* expression;
		SymbolTable* symbolTable;
	public:
		Function(std::string name, std::vector<std::string> param_names, Expression* expression, SymbolTable* symbolTable);
		double call();
		std::vector<std::string> *getParamNames();
};
