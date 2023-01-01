
// Generated from calcWithFunctions.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "calcWithFunctionsVisitor.h"


/**
 * This class provides an empty implementation of calcWithFunctionsVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  calcWithFunctionsBaseVisitor : public calcWithFunctionsVisitor {
public:

  virtual std::any visitProgram(calcWithFunctionsParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIgnore(calcWithFunctionsParser::IgnoreContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEvaluate_expression_stmt(calcWithFunctionsParser::Evaluate_expression_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefine_function_stmt(calcWithFunctionsParser::Define_function_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr_assign_stmt(calcWithFunctionsParser::Expr_assign_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction_definition(calcWithFunctionsParser::Function_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstant(calcWithFunctionsParser::ConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariable(calcWithFunctionsParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr_variable_eval(calcWithFunctionsParser::Expr_variable_evalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr_sub_eval(calcWithFunctionsParser::Expr_sub_evalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr_constant_eval(calcWithFunctionsParser::Expr_constant_evalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr_function_call_eval(calcWithFunctionsParser::Expr_function_call_evalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr_add_eval(calcWithFunctionsParser::Expr_add_evalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr_mul_eval(calcWithFunctionsParser::Expr_mul_evalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr_div_eval(calcWithFunctionsParser::Expr_div_evalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr_parenthesis_eval(calcWithFunctionsParser::Expr_parenthesis_evalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParams_names_single(calcWithFunctionsParser::Params_names_singleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParams_names_multiple(calcWithFunctionsParser::Params_names_multipleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParams_values_single(calcWithFunctionsParser::Params_values_singleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParams_values_multiple(calcWithFunctionsParser::Params_values_multipleContext *ctx) override {
    return visitChildren(ctx);
  }


};

