
// Generated from calcWithFunctions.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "calcWithFunctionsParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by calcWithFunctionsParser.
 */
class  calcWithFunctionsVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by calcWithFunctionsParser.
   */
    virtual std::any visitProgram(calcWithFunctionsParser::ProgramContext *context) = 0;

    virtual std::any visitIgnore(calcWithFunctionsParser::IgnoreContext *context) = 0;

    virtual std::any visitEvaluate_expression_stmt(calcWithFunctionsParser::Evaluate_expression_stmtContext *context) = 0;

    virtual std::any visitDefine_function_stmt(calcWithFunctionsParser::Define_function_stmtContext *context) = 0;

    virtual std::any visitExpr_assign_stmt(calcWithFunctionsParser::Expr_assign_stmtContext *context) = 0;

    virtual std::any visitFunction_definition(calcWithFunctionsParser::Function_definitionContext *context) = 0;

    virtual std::any visitConstant(calcWithFunctionsParser::ConstantContext *context) = 0;

    virtual std::any visitVariable(calcWithFunctionsParser::VariableContext *context) = 0;

    virtual std::any visitExpr_variable_eval(calcWithFunctionsParser::Expr_variable_evalContext *context) = 0;

    virtual std::any visitExpr_sub_eval(calcWithFunctionsParser::Expr_sub_evalContext *context) = 0;

    virtual std::any visitExpr_constant_eval(calcWithFunctionsParser::Expr_constant_evalContext *context) = 0;

    virtual std::any visitExpr_function_call_eval(calcWithFunctionsParser::Expr_function_call_evalContext *context) = 0;

    virtual std::any visitExpr_add_eval(calcWithFunctionsParser::Expr_add_evalContext *context) = 0;

    virtual std::any visitExpr_mul_eval(calcWithFunctionsParser::Expr_mul_evalContext *context) = 0;

    virtual std::any visitExpr_div_eval(calcWithFunctionsParser::Expr_div_evalContext *context) = 0;

    virtual std::any visitExpr_parenthesis_eval(calcWithFunctionsParser::Expr_parenthesis_evalContext *context) = 0;

    virtual std::any visitParams_names_single(calcWithFunctionsParser::Params_names_singleContext *context) = 0;

    virtual std::any visitParams_names_multiple(calcWithFunctionsParser::Params_names_multipleContext *context) = 0;

    virtual std::any visitParams_values_single(calcWithFunctionsParser::Params_values_singleContext *context) = 0;

    virtual std::any visitParams_values_multiple(calcWithFunctionsParser::Params_values_multipleContext *context) = 0;


};

