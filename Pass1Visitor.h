#pragma once

#include "Pass2Visitor.h"
#include "SymbolTable.h"

class Pass1Visitor : public Pass2Visitor
{
    private:
      bool passOk;
      std::vector<std::string> encounteredFunctions;
    public:
		Pass1Visitor(SymbolTable* symbolTable);
    std::any visitProgram(calcWithFunctionsParser::ProgramContext *ctx) override;
		std::any visitEvaluate_expression_stmt(calcWithFunctionsParser::Evaluate_expression_stmtContext *context) override;
    std::any visitExpr_assign_stmt(calcWithFunctionsParser::Expr_assign_stmtContext *ctx) override;
    std::any visitFunction_definition(calcWithFunctionsParser::Function_definitionContext *ctx) override;
};