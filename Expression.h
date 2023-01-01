#pragma once

#include "Variable.h"
#include <map>

class SymbolTable;
class Function;

using opSignature = double(*)(double,double);

class Expression {
	private:
		Expression* lvalue;
		Expression* rvalue;
		Function* function;
		Variable* variable;
		std::string op;
		double constantValue;
		static std::map<std::string, opSignature> optable;
		SymbolTable* symbolTable;
	public:
		bool valid;
		Expression(SymbolTable* symbolTable, double constantValue);
		Expression(SymbolTable* symbolTable, Variable* variable);
		Expression(Expression* value);
		Expression(SymbolTable* symbolTable, Expression* lvalue, Expression* rvalue, std::string op);
		void setConstant(double ct);
		void setFunction(Function* function);
		void setVariable(Variable* variable);
		double evaluate();
		void identify();
};
