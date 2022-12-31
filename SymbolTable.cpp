#include "SymbolTable.h"

void SymbolTable::addFunction(std::string name, Function* function)
{
	functions[name] = function;
}

void SymbolTable::addVariable(std::string name, std::string scope, Variable* variable)
{
	variables[scope][name] = variable;
}

Function* SymbolTable::findFunction(std::string name)
{
	return functions[name];
}

Variable* SymbolTable::findVariable(std::string name, std::string scope)
{
	return variables[scope][name];
}

void SymbolTable::startScope(std::string scopeName)
{
	scope.push_back(scopeName);
}

void SymbolTable::endScope()
{
	scope.pop_back();
}

std::string SymbolTable::getCurrentScope()
{
	if(scope.size() == 0) 
	{
		return "";
	}
	return scope.back();
}

std::map<std::string, Function*>* SymbolTable::getFunctions()
{
	return &functions;
}

std::map<std::string, std::map<std::string, Variable*> >* SymbolTable::getVariables()
{
	return &variables;
}