#pragma once

#include "Pass2Visitor.h"
#include "SymbolTable.h"

class Pass1Visitor : public Pass2Visitor
{
    public:
		Pass1Visitor(SymbolTable* symbolTable);
		std::any visitEvaluate_expression_stmt(calcWithFunctionsParser::Evaluate_expression_stmtContext *context) override;
        std::any visitFunction_definition(calcWithFunctionsParser::Function_definitionContext *ctx) override;
};