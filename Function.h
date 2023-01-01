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
		std::map<std::string, std::vector<Expression> > param_values;
		Expression* expression;
		SymbolTable* symbolTable;
		
	public:
		Function(std::string name, std::vector<std::string> param_names, Expression* expression, SymbolTable* symbolTable);
		double call();
		void setParamValues(std::string scope, std::vector<Expression> param_values);
		std::vector<Expression> *getParamValues(std::string scope);
		std::vector<std::string> *getParamNames();
		std::string getName();
};
