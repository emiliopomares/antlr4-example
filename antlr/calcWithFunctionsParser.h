
// Generated from calcWithFunctions.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  calcWithFunctionsParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, NEWLINE = 11, DIGIT = 12, ID = 13, WS = 14
  };

  enum {
    RuleProgram = 0, RuleStatement = 1, RuleFunction_definition = 2, RuleConstant = 3, 
    RuleVariable = 4, RuleExpression = 5, RuleParams_names_list = 6, RuleParams_values_list = 7
  };

  explicit calcWithFunctionsParser(antlr4::TokenStream *input);

  calcWithFunctionsParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~calcWithFunctionsParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;
  class StatementContext;
  class Function_definitionContext;
  class ConstantContext;
  class VariableContext;
  class ExpressionContext;
  class Params_names_listContext;
  class Params_values_listContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StatementContext() = default;
    void copyFrom(StatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Expr_assign_stmtContext : public StatementContext {
  public:
    Expr_assign_stmtContext(StatementContext *ctx);

    VariableContext *variable();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *NEWLINE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IgnoreContext : public StatementContext {
  public:
    IgnoreContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *NEWLINE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Define_function_stmtContext : public StatementContext {
  public:
    Define_function_stmtContext(StatementContext *ctx);

    Function_definitionContext *function_definition();
    antlr4::tree::TerminalNode *NEWLINE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Evaluate_expression_stmtContext : public StatementContext {
  public:
    Evaluate_expression_stmtContext(StatementContext *ctx);

    ExpressionContext *expression();
    antlr4::tree::TerminalNode *NEWLINE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StatementContext* statement();

  class  Function_definitionContext : public antlr4::ParserRuleContext {
  public:
    Function_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    Params_names_listContext *params_names_list();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_definitionContext* function_definition();

  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> DIGIT();
    antlr4::tree::TerminalNode* DIGIT(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantContext* constant();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpressionContext() = default;
    void copyFrom(ExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Expr_variable_evalContext : public ExpressionContext {
  public:
    Expr_variable_evalContext(ExpressionContext *ctx);

    VariableContext *variable();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_sub_evalContext : public ExpressionContext {
  public:
    Expr_sub_evalContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_constant_evalContext : public ExpressionContext {
  public:
    Expr_constant_evalContext(ExpressionContext *ctx);

    ConstantContext *constant();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_function_call_evalContext : public ExpressionContext {
  public:
    Expr_function_call_evalContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *ID();
    Params_values_listContext *params_values_list();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_add_evalContext : public ExpressionContext {
  public:
    Expr_add_evalContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_mul_evalContext : public ExpressionContext {
  public:
    Expr_mul_evalContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_div_evalContext : public ExpressionContext {
  public:
    Expr_div_evalContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_parenthesis_evalContext : public ExpressionContext {
  public:
    Expr_parenthesis_evalContext(ExpressionContext *ctx);

    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  Params_names_listContext : public antlr4::ParserRuleContext {
  public:
    Params_names_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Params_names_listContext() = default;
    void copyFrom(Params_names_listContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Params_names_singleContext : public Params_names_listContext {
  public:
    Params_names_singleContext(Params_names_listContext *ctx);

    antlr4::tree::TerminalNode *ID();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Params_names_multipleContext : public Params_names_listContext {
  public:
    Params_names_multipleContext(Params_names_listContext *ctx);

    Params_names_listContext *params_names_list();
    antlr4::tree::TerminalNode *ID();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Params_names_listContext* params_names_list();
  Params_names_listContext* params_names_list(int precedence);
  class  Params_values_listContext : public antlr4::ParserRuleContext {
  public:
    Params_values_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Params_values_listContext() = default;
    void copyFrom(Params_values_listContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Params_values_singleContext : public Params_values_listContext {
  public:
    Params_values_singleContext(Params_values_listContext *ctx);

    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Params_values_multipleContext : public Params_values_listContext {
  public:
    Params_values_multipleContext(Params_values_listContext *ctx);

    Params_values_listContext *params_values_list();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Params_values_listContext* params_values_list();
  Params_values_listContext* params_values_list(int precedence);

  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);
  bool params_names_listSempred(Params_names_listContext *_localctx, size_t predicateIndex);
  bool params_values_listSempred(Params_values_listContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

