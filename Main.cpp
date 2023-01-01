#include <iostream>

#include <antlr4-runtime.h>
#include "./antlr/calcWithFunctionsLexer.h"
#include "./antlr/calcWithFunctionsParser.h"
#include "./antlr/calcWithFunctionsBaseVisitor.h"

#include "SymbolTable.h"

#include "Pass1Visitor.h"
#include "Pass2Visitor.h"

using namespace antlr4;

SymbolTable symbolTable;

int main(int argc, char **argv)
{
	std::ifstream stream;
        stream.open(argv[1]);
        ANTLRInputStream input(stream);
        calcWithFunctionsLexer lexer(&input);
        CommonTokenStream tokens(&lexer);
        calcWithFunctionsParser parser(&tokens);

	tree::ParseTree *tree = parser.program();
        Pass1Visitor pass1_visitor(&symbolTable);
	bool passOk = false;
        
        while(!passOk)
        {        
                passOk = std::any_cast<bool>(pass1_visitor.visit(tree));
        }

	Pass2Visitor pass2_visitor(&symbolTable);
        pass2_visitor.visit(tree);

        return 0;
}
