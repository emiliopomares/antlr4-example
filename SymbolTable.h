#pragma once

#include <string>
#include <vector>
#include <map>
#include "Function.h"
#include "Variable.h"

class SymbolTable
{
	private:
		std::vector<std::string> scope;
		std::map<std::string, std::map<std::string, Variable*> > variables;
		std::map<std::string, Function*> functions;
	public:
		void addFunction(std::string name, Function* function);
		void addVariable(std::string name, std::string scope, Variable* variable);
		Variable* findVariable(std::string name, std::string scope);
		Function* findFunction(std::string name);
		void startScope(std::string scopeName);
		void endScope();
		std::string getCurrentScope();
		std::map<std::string, Function*>* getFunctions();
		std::map<std::string, std::map<std::string, Variable*> >* getVariables();
};
