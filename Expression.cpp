#include "Expression.h"
#include "Exceptions.h"
#include "Function.h"
#include "SymbolTable.h"
#include <iostream>

std::map<std::string, opSignature> Expression::optable = 
	{
		{"+", [](double x,double y) { return x+y; } },
		{"-", [](double x,double y) { return x-y; } },
		{"*", [](double x,double y) { return x*y; } },
		{"/", [](double x,double y) { return x/y; } }
	};

Expression::Expression(SymbolTable* symbolTable, double constantValue)
{
	this->symbolTable = symbolTable;
	this->constantValue = constantValue;
	variable = nullptr;
	function = nullptr;
	lvalue = nullptr;
	rvalue = nullptr;
	valid = true;
}

Expression::Expression(SymbolTable* symbolTable, Variable* variable)
{	
	this->symbolTable = symbolTable;
	this->variable = variable;
	function = nullptr;
	lvalue = nullptr;
	rvalue = nullptr;
	valid = true;
}

Expression::Expression(Expression* value)
{
	lvalue = value->lvalue;
	function = value->function;
	rvalue = value->lvalue;
	variable = value->variable;
	op = value->op;
	constantValue = value->constantValue;
	symbolTable = value->symbolTable;
	valid = true;
}

Expression::Expression(SymbolTable* symbolTable, Expression* lvalue, Expression* rvalue, std::string op)
{
	this->symbolTable = symbolTable;
	this->lvalue = new Expression(lvalue);
	this->rvalue = new Expression(rvalue);
	function = nullptr;
	variable = nullptr;
	this->op = op;
	valid = lvalue->valid && rvalue->valid;
}

void Expression::setConstant(double ct)
{
	lvalue = nullptr;
	rvalue = nullptr;
	variable = nullptr;
	function = nullptr;
	constantValue = ct;
}

void Expression::setVariable(Variable* variable)
{
	this->variable = variable;
	lvalue = nullptr;
	function = nullptr;
	rvalue = nullptr;
}

void Expression::setFunction(Function* function)
{
	this->function = function;
	variable = nullptr;
	lvalue = nullptr;
	function = nullptr;
	rvalue = nullptr;
}

void Expression::identify()
{
	if(function != nullptr) {
		std::cout << "   ==============   EXPRESSION IS A FUNCTION "<<function->getName()<<"==================   \n";
	}
	else if(lvalue == nullptr && rvalue == nullptr)
	{
		if(variable != nullptr ) 
		{
			std::cout << "   ==============   EXPRESSION IS  A VARIABLE "<<variable->getValue()<<"==================   \n";
		}
		else
		{
			std::cout << "   ==============   EXPRESSION IS A CONSTANT "<<constantValue<<"==================   \n";
		}
	}
	else
	{
		std::cout << "   ==============   EXPRESSION IS A BINARY " << op << " ==================   \n";
	}
}

double Expression::evaluate()
{
	if(function != nullptr) {
		std::vector<std::string>* param_names = function->getParamNames();
		std::vector<Expression>* params_values = function->getParamValues(symbolTable->getCurrentScope());
		
		for(int i = 0 ; i < (*params_values).size() ; ++i)
		{
			Variable* var = symbolTable->findVariable((*param_names)[i], function->getName());
			if(var == nullptr) {
				throw new VariableNotFoundException((*param_names)[i]);
			}
			var->setValue((*params_values)[i].evaluate());
		}
	
		double result = function->call();
		return result;
	}
	else if(lvalue == nullptr && rvalue == nullptr)
	{
		valid = true;
		return variable != nullptr 
			? variable->getValue()
			: constantValue;
	}
	else if(rvalue == nullptr)
	{
		valid = lvalue->valid;
		return lvalue->evaluate();
	}
	else
	{
		double result = optable[op](lvalue->evaluate(), rvalue->evaluate());
		valid = lvalue->valid && rvalue->valid;
		return result;
	}
}
