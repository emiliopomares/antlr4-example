#include "Expression.h"
#include <iostream>

std::map<std::string, opSignature> Expression::optable = 
	{
		{"+", [](double x,double y) { return x+y; } },
		{"-", [](double x,double y) { return x-y; } },
		{"*", [](double x,double y) { return x*y; } },
		{"/", [](double x,double y) { return x/y; } }
	};

Expression::Expression(double constantValue)
{
	this->constantValue = constantValue;
	lvalue = nullptr;
	rvalue = nullptr;
}

Expression::Expression(Variable* variable)
{	
	this->variable = variable;
	lvalue = nullptr;
	rvalue = nullptr;
}

Expression::Expression(Expression* value)
{
	lvalue = value->lvalue;
	rvalue = value->lvalue;
	variable = value->variable;
	op = value->op;
	constantValue = value->constantValue;
}

Expression::Expression(Expression* lvalue, Expression* rvalue, std::string op)
{
	this->lvalue = new Expression(lvalue);
	this->rvalue = new Expression(rvalue);
	this->op = op;
}

void Expression::setConstant(double ct)
{
	lvalue = nullptr;
	rvalue = nullptr;
	constantValue = ct;
}

void Expression::setVariable(Variable* variable)
{
	this->variable = variable;
	lvalue = nullptr;
	rvalue = nullptr;
}

double Expression::evaluate()
{
	if(lvalue == nullptr && rvalue == nullptr)
	{
		return variable != nullptr 
			? variable->getValue()
			: constantValue;
	}
	else if(rvalue == nullptr)
	{
		return lvalue->evaluate();
	}
	else
	{
		double result = optable[op](lvalue->evaluate(), rvalue->evaluate());
		return result;
	}
}
