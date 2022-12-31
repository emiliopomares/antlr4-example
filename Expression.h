#pragma once

#include "Variable.h"
#include <map>

using opSignature = double(*)(double,double);

class Expression {
	private:
		Expression* lvalue;
		Expression* rvalue;
		Variable* variable;
		std::string op;
		double constantValue;
		static std::map<std::string, opSignature> optable;
	public:
		Expression(double constantValue);
		Expression(Variable* variable);
		Expression(Expression* value);
		Expression(Expression* lvalue, Expression* rvalue, std::string op);
		void setConstant(double ct);
		void setVariable(Variable* variable);
		double evaluate();
};
