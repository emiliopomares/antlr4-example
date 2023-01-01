
// Generated from calcWithFunctions.g4 by ANTLR 4.11.1


#include "calcWithFunctionsVisitor.h"

#include "calcWithFunctionsParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct CalcWithFunctionsParserStaticData final {
  CalcWithFunctionsParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CalcWithFunctionsParserStaticData(const CalcWithFunctionsParserStaticData&) = delete;
  CalcWithFunctionsParserStaticData(CalcWithFunctionsParserStaticData&&) = delete;
  CalcWithFunctionsParserStaticData& operator=(const CalcWithFunctionsParserStaticData&) = delete;
  CalcWithFunctionsParserStaticData& operator=(CalcWithFunctionsParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag calcwithfunctionsParserOnceFlag;
CalcWithFunctionsParserStaticData *calcwithfunctionsParserStaticData = nullptr;

void calcwithfunctionsParserInitialize() {
  assert(calcwithfunctionsParserStaticData == nullptr);
  auto staticData = std::make_unique<CalcWithFunctionsParserStaticData>(
    std::vector<std::string>{
      "program", "statement", "function_definition", "constant", "variable", 
      "expression", "params_names_list", "params_values_list"
    },
    std::vector<std::string>{
      "", "'='", "'func'", "'('", "')'", "'=>'", "'*'", "'/'", "'+'", "'-'", 
      "','", "'\\n'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "NEWLINE", "DIGIT", "ID", 
      "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,14,105,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,1,0,5,0,18,8,0,10,0,12,0,21,9,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,3,1,35,8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,3,4,3,46,
  	8,3,11,3,12,3,47,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,
  	1,5,3,5,64,8,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,5,5,78,
  	8,5,10,5,12,5,81,9,5,1,6,1,6,1,6,1,6,1,6,1,6,5,6,89,8,6,10,6,12,6,92,
  	9,6,1,7,1,7,1,7,1,7,1,7,1,7,5,7,100,8,7,10,7,12,7,103,9,7,1,7,0,3,10,
  	12,14,8,0,2,4,6,8,10,12,14,0,0,110,0,19,1,0,0,0,2,34,1,0,0,0,4,36,1,0,
  	0,0,6,45,1,0,0,0,8,49,1,0,0,0,10,63,1,0,0,0,12,82,1,0,0,0,14,93,1,0,0,
  	0,16,18,3,2,1,0,17,16,1,0,0,0,18,21,1,0,0,0,19,17,1,0,0,0,19,20,1,0,0,
  	0,20,1,1,0,0,0,21,19,1,0,0,0,22,35,5,11,0,0,23,24,3,10,5,0,24,25,5,11,
  	0,0,25,35,1,0,0,0,26,27,3,4,2,0,27,28,5,11,0,0,28,35,1,0,0,0,29,30,3,
  	8,4,0,30,31,5,1,0,0,31,32,3,10,5,0,32,33,5,11,0,0,33,35,1,0,0,0,34,22,
  	1,0,0,0,34,23,1,0,0,0,34,26,1,0,0,0,34,29,1,0,0,0,35,3,1,0,0,0,36,37,
  	5,2,0,0,37,38,5,13,0,0,38,39,5,3,0,0,39,40,3,12,6,0,40,41,5,4,0,0,41,
  	42,5,5,0,0,42,43,3,10,5,0,43,5,1,0,0,0,44,46,5,12,0,0,45,44,1,0,0,0,46,
  	47,1,0,0,0,47,45,1,0,0,0,47,48,1,0,0,0,48,7,1,0,0,0,49,50,5,13,0,0,50,
  	9,1,0,0,0,51,52,6,5,-1,0,52,64,3,6,3,0,53,64,3,8,4,0,54,55,5,3,0,0,55,
  	56,3,10,5,0,56,57,5,4,0,0,57,64,1,0,0,0,58,59,5,13,0,0,59,60,5,3,0,0,
  	60,61,3,14,7,0,61,62,5,4,0,0,62,64,1,0,0,0,63,51,1,0,0,0,63,53,1,0,0,
  	0,63,54,1,0,0,0,63,58,1,0,0,0,64,79,1,0,0,0,65,66,10,6,0,0,66,67,5,6,
  	0,0,67,78,3,10,5,7,68,69,10,5,0,0,69,70,5,7,0,0,70,78,3,10,5,6,71,72,
  	10,4,0,0,72,73,5,8,0,0,73,78,3,10,5,5,74,75,10,3,0,0,75,76,5,9,0,0,76,
  	78,3,10,5,4,77,65,1,0,0,0,77,68,1,0,0,0,77,71,1,0,0,0,77,74,1,0,0,0,78,
  	81,1,0,0,0,79,77,1,0,0,0,79,80,1,0,0,0,80,11,1,0,0,0,81,79,1,0,0,0,82,
  	83,6,6,-1,0,83,84,5,13,0,0,84,90,1,0,0,0,85,86,10,1,0,0,86,87,5,10,0,
  	0,87,89,5,13,0,0,88,85,1,0,0,0,89,92,1,0,0,0,90,88,1,0,0,0,90,91,1,0,
  	0,0,91,13,1,0,0,0,92,90,1,0,0,0,93,94,6,7,-1,0,94,95,3,10,5,0,95,101,
  	1,0,0,0,96,97,10,1,0,0,97,98,5,10,0,0,98,100,3,10,5,0,99,96,1,0,0,0,100,
  	103,1,0,0,0,101,99,1,0,0,0,101,102,1,0,0,0,102,15,1,0,0,0,103,101,1,0,
  	0,0,8,19,34,47,63,77,79,90,101
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  calcwithfunctionsParserStaticData = staticData.release();
}

}

calcWithFunctionsParser::calcWithFunctionsParser(TokenStream *input) : calcWithFunctionsParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

calcWithFunctionsParser::calcWithFunctionsParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  calcWithFunctionsParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *calcwithfunctionsParserStaticData->atn, calcwithfunctionsParserStaticData->decisionToDFA, calcwithfunctionsParserStaticData->sharedContextCache, options);
}

calcWithFunctionsParser::~calcWithFunctionsParser() {
  delete _interpreter;
}

const atn::ATN& calcWithFunctionsParser::getATN() const {
  return *calcwithfunctionsParserStaticData->atn;
}

std::string calcWithFunctionsParser::getGrammarFileName() const {
  return "calcWithFunctions.g4";
}

const std::vector<std::string>& calcWithFunctionsParser::getRuleNames() const {
  return calcwithfunctionsParserStaticData->ruleNames;
}

const dfa::Vocabulary& calcWithFunctionsParser::getVocabulary() const {
  return calcwithfunctionsParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView calcWithFunctionsParser::getSerializedATN() const {
  return calcwithfunctionsParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

calcWithFunctionsParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<calcWithFunctionsParser::StatementContext *> calcWithFunctionsParser::ProgramContext::statement() {
  return getRuleContexts<calcWithFunctionsParser::StatementContext>();
}

calcWithFunctionsParser::StatementContext* calcWithFunctionsParser::ProgramContext::statement(size_t i) {
  return getRuleContext<calcWithFunctionsParser::StatementContext>(i);
}


size_t calcWithFunctionsParser::ProgramContext::getRuleIndex() const {
  return calcWithFunctionsParser::RuleProgram;
}


std::any calcWithFunctionsParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calcWithFunctionsVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

calcWithFunctionsParser::ProgramContext* calcWithFunctionsParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, calcWithFunctionsParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(19);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 14348) != 0) {
      setState(16);
      statement();
      setState(21);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

calcWithFunctionsParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t calcWithFunctionsParser::StatementContext::getRuleIndex() const {
  return calcWithFunctionsParser::RuleStatement;
}

void calcWithFunctionsParser::StatementContext::copyFrom(StatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Expr_assign_stmtContext ------------------------------------------------------------------

calcWithFunctionsParser::VariableContext* calcWithFunctionsParser::Expr_assign_stmtContext::variable() {
  return getRuleContext<calcWithFunctionsParser::VariableContext>(0);
}

calcWithFunctionsParser::ExpressionContext* calcWithFunctionsParser::Expr_assign_stmtContext::expression() {
  return getRuleContext<calcWithFunctionsParser::ExpressionContext>(0);
}

tree::TerminalNode* calcWithFunctionsParser::Expr_assign_stmtContext::NEWLINE() {
  return getToken(calcWithFunctionsParser::NEWLINE, 0);
}

calcWithFunctionsParser::Expr_assign_stmtContext::Expr_assign_stmtContext(StatementContext *ctx) { copyFrom(ctx); }


std::any calcWithFunctionsParser::Expr_assign_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calcWithFunctionsVisitor*>(visitor))
    return parserVisitor->visitExpr_assign_stmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IgnoreContext ------------------------------------------------------------------

tree::TerminalNode* calcWithFunctionsParser::IgnoreContext::NEWLINE() {
  return getToken(calcWithFunctionsParser::NEWLINE, 0);
}

calcWithFunctionsParser::IgnoreContext::IgnoreContext(StatementContext *ctx) { copyFrom(ctx); }


std::any calcWithFunctionsParser::IgnoreContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calcWithFunctionsVisitor*>(visitor))
    return parserVisitor->visitIgnore(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Define_function_stmtContext ------------------------------------------------------------------

calcWithFunctionsParser::Function_definitionContext* calcWithFunctionsParser::Define_function_stmtContext::function_definition() {
  return getRuleContext<calcWithFunctionsParser::Function_definitionContext>(0);
}

tree::TerminalNode* calcWithFunctionsParser::Define_function_stmtContext::NEWLINE() {
  return getToken(calcWithFunctionsParser::NEWLINE, 0);
}

calcWithFunctionsParser::Define_function_stmtContext::Define_function_stmtContext(StatementContext *ctx) { copyFrom(ctx); }


std::any calcWithFunctionsParser::Define_function_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calcWithFunctionsVisitor*>(visitor))
    return parserVisitor->visitDefine_function_stmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Evaluate_expression_stmtContext ------------------------------------------------------------------

calcWithFunctionsParser::ExpressionContext* calcWithFunctionsParser::Evaluate_expression_stmtContext::expression() {
  return getRuleContext<calcWithFunctionsParser::ExpressionContext>(0);
}

tree::TerminalNode* calcWithFunctionsParser::Evaluate_expression_stmtContext::NEWLINE() {
  return getToken(calcWithFunctionsParser::NEWLINE, 0);
}

calcWithFunctionsParser::Evaluate_expression_stmtContext::Evaluate_expression_stmtContext(StatementContext *ctx) { copyFrom(ctx); }


std::any calcWithFunctionsParser::Evaluate_expression_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calcWithFunctionsVisitor*>(visitor))
    return parserVisitor->visitEvaluate_expression_stmt(this);
  else
    return visitor->visitChildren(this);
}
calcWithFunctionsParser::StatementContext* calcWithFunctionsParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, calcWithFunctionsParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(34);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<calcWithFunctionsParser::IgnoreContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(22);
      match(calcWithFunctionsParser::NEWLINE);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<calcWithFunctionsParser::Evaluate_expression_stmtContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(23);
      expression(0);
      setState(24);
      match(calcWithFunctionsParser::NEWLINE);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<calcWithFunctionsParser::Define_function_stmtContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(26);
      function_definition();
      setState(27);
      match(calcWithFunctionsParser::NEWLINE);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<calcWithFunctionsParser::Expr_assign_stmtContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(29);
      variable();
      setState(30);
      match(calcWithFunctionsParser::T__0);
      setState(31);
      expression(0);
      setState(32);
      match(calcWithFunctionsParser::NEWLINE);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_definitionContext ------------------------------------------------------------------

calcWithFunctionsParser::Function_definitionContext::Function_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* calcWithFunctionsParser::Function_definitionContext::ID() {
  return getToken(calcWithFunctionsParser::ID, 0);
}

calcWithFunctionsParser::Params_names_listContext* calcWithFunctionsParser::Function_definitionContext::params_names_list() {
  return getRuleContext<calcWithFunctionsParser::Params_names_listContext>(0);
}

calcWithFunctionsParser::ExpressionContext* calcWithFunctionsParser::Function_definitionContext::expression() {
  return getRuleContext<calcWithFunctionsParser::ExpressionContext>(0);
}


size_t calcWithFunctionsParser::Function_definitionContext::getRuleIndex() const {
  return calcWithFunctionsParser::RuleFunction_definition;
}


std::any calcWithFunctionsParser::Function_definitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calcWithFunctionsVisitor*>(visitor))
    return parserVisitor->visitFunction_definition(this);
  else
    return visitor->visitChildren(this);
}

calcWithFunctionsParser::Function_definitionContext* calcWithFunctionsParser::function_definition() {
  Function_definitionContext *_localctx = _tracker.createInstance<Function_definitionContext>(_ctx, getState());
  enterRule(_localctx, 4, calcWithFunctionsParser::RuleFunction_definition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(36);
    match(calcWithFunctionsParser::T__1);
    setState(37);
    match(calcWithFunctionsParser::ID);
    setState(38);
    match(calcWithFunctionsParser::T__2);
    setState(39);
    params_names_list(0);
    setState(40);
    match(calcWithFunctionsParser::T__3);
    setState(41);
    match(calcWithFunctionsParser::T__4);
    setState(42);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantContext ------------------------------------------------------------------

calcWithFunctionsParser::ConstantContext::ConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> calcWithFunctionsParser::ConstantContext::DIGIT() {
  return getTokens(calcWithFunctionsParser::DIGIT);
}

tree::TerminalNode* calcWithFunctionsParser::ConstantContext::DIGIT(size_t i) {
  return getToken(calcWithFunctionsParser::DIGIT, i);
}


size_t calcWithFunctionsParser::ConstantContext::getRuleIndex() const {
  return calcWithFunctionsParser::RuleConstant;
}


std::any calcWithFunctionsParser::ConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calcWithFunctionsVisitor*>(visitor))
    return parserVisitor->visitConstant(this);
  else
    return visitor->visitChildren(this);
}

calcWithFunctionsParser::ConstantContext* calcWithFunctionsParser::constant() {
  ConstantContext *_localctx = _tracker.createInstance<ConstantContext>(_ctx, getState());
  enterRule(_localctx, 6, calcWithFunctionsParser::RuleConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(45); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(44);
              match(calcWithFunctionsParser::DIGIT);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(47); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

calcWithFunctionsParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* calcWithFunctionsParser::VariableContext::ID() {
  return getToken(calcWithFunctionsParser::ID, 0);
}


size_t calcWithFunctionsParser::VariableContext::getRuleIndex() const {
  return calcWithFunctionsParser::RuleVariable;
}


std::any calcWithFunctionsParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calcWithFunctionsVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

calcWithFunctionsParser::VariableContext* calcWithFunctionsParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 8, calcWithFunctionsParser::RuleVariable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(49);
    match(calcWithFunctionsParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

calcWithFunctionsParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t calcWithFunctionsParser::ExpressionContext::getRuleIndex() const {
  return calcWithFunctionsParser::RuleExpression;
}

void calcWithFunctionsParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Expr_variable_evalContext ------------------------------------------------------------------

calcWithFunctionsParser::VariableContext* calcWithFunctionsParser::Expr_variable_evalContext::variable() {
  return getRuleContext<calcWithFunctionsParser::VariableContext>(0);
}

calcWithFunctionsParser::Expr_variable_evalContext::Expr_variable_evalContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any calcWithFunctionsParser::Expr_variable_evalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calcWithFunctionsVisitor*>(visitor))
    return parserVisitor->visitExpr_variable_eval(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_sub_evalContext ------------------------------------------------------------------

std::vector<calcWithFunctionsParser::ExpressionContext *> calcWithFunctionsParser::Expr_sub_evalContext::expression() {
  return getRuleContexts<calcWithFunctionsParser::ExpressionContext>();
}

calcWithFunctionsParser::ExpressionContext* calcWithFunctionsParser::Expr_sub_evalContext::expression(size_t i) {
  return getRuleContext<calcWithFunctionsParser::ExpressionContext>(i);
}

calcWithFunctionsParser::Expr_sub_evalContext::Expr_sub_evalContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any calcWithFunctionsParser::Expr_sub_evalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calcWithFunctionsVisitor*>(visitor))
    return parserVisitor->visitExpr_sub_eval(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_constant_evalContext ------------------------------------------------------------------

calcWithFunctionsParser::ConstantContext* calcWithFunctionsParser::Expr_constant_evalContext::constant() {
  return getRuleContext<calcWithFunctionsParser::ConstantContext>(0);
}

calcWithFunctionsParser::Expr_constant_evalContext::Expr_constant_evalContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any calcWithFunctionsParser::Expr_constant_evalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calcWithFunctionsVisitor*>(visitor))
    return parserVisitor->visitExpr_constant_eval(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_function_call_evalContext ------------------------------------------------------------------

tree::TerminalNode* calcWithFunctionsParser::Expr_function_call_evalContext::ID() {
  return getToken(calcWithFunctionsParser::ID, 0);
}

calcWithFunctionsParser::Params_values_listContext* calcWithFunctionsParser::Expr_function_call_evalContext::params_values_list() {
  return getRuleContext<calcWithFunctionsParser::Params_values_listContext>(0);
}

calcWithFunctionsParser::Expr_function_call_evalContext::Expr_function_call_evalContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any calcWithFunctionsParser::Expr_function_call_evalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calcWithFunctionsVisitor*>(visitor))
    return parserVisitor->visitExpr_function_call_eval(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_add_evalContext ------------------------------------------------------------------

std::vector<calcWithFunctionsParser::ExpressionContext *> calcWithFunctionsParser::Expr_add_evalContext::expression() {
  return getRuleContexts<calcWithFunctionsParser::ExpressionContext>();
}

calcWithFunctionsParser::ExpressionContext* calcWithFunctionsParser::Expr_add_evalContext::expression(size_t i) {
  return getRuleContext<calcWithFunctionsParser::ExpressionContext>(i);
}

calcWithFunctionsParser::Expr_add_evalContext::Expr_add_evalContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any calcWithFunctionsParser::Expr_add_evalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calcWithFunctionsVisitor*>(visitor))
    return parserVisitor->visitExpr_add_eval(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_mul_evalContext ------------------------------------------------------------------

std::vector<calcWithFunctionsParser::ExpressionContext *> calcWithFunctionsParser::Expr_mul_evalContext::expression() {
  return getRuleContexts<calcWithFunctionsParser::ExpressionContext>();
}

calcWithFunctionsParser::ExpressionContext* calcWithFunctionsParser::Expr_mul_evalContext::expression(size_t i) {
  return getRuleContext<calcWithFunctionsParser::ExpressionContext>(i);
}

calcWithFunctionsParser::Expr_mul_evalContext::Expr_mul_evalContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any calcWithFunctionsParser::Expr_mul_evalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calcWithFunctionsVisitor*>(visitor))
    return parserVisitor->visitExpr_mul_eval(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_div_evalContext ------------------------------------------------------------------

std::vector<calcWithFunctionsParser::ExpressionContext *> calcWithFunctionsParser::Expr_div_evalContext::expression() {
  return getRuleContexts<calcWithFunctionsParser::ExpressionContext>();
}

calcWithFunctionsParser::ExpressionContext* calcWithFunctionsParser::Expr_div_evalContext::expression(size_t i) {
  return getRuleContext<calcWithFunctionsParser::ExpressionContext>(i);
}

calcWithFunctionsParser::Expr_div_evalContext::Expr_div_evalContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any calcWithFunctionsParser::Expr_div_evalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calcWithFunctionsVisitor*>(visitor))
    return parserVisitor->visitExpr_div_eval(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_parenthesis_evalContext ------------------------------------------------------------------

calcWithFunctionsParser::ExpressionContext* calcWithFunctionsParser::Expr_parenthesis_evalContext::expression() {
  return getRuleContext<calcWithFunctionsParser::ExpressionContext>(0);
}

calcWithFunctionsParser::Expr_parenthesis_evalContext::Expr_parenthesis_evalContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any calcWithFunctionsParser::Expr_parenthesis_evalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calcWithFunctionsVisitor*>(visitor))
    return parserVisitor->visitExpr_parenthesis_eval(this);
  else
    return visitor->visitChildren(this);
}

calcWithFunctionsParser::ExpressionContext* calcWithFunctionsParser::expression() {
   return expression(0);
}

calcWithFunctionsParser::ExpressionContext* calcWithFunctionsParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  calcWithFunctionsParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  calcWithFunctionsParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 10;
  enterRecursionRule(_localctx, 10, calcWithFunctionsParser::RuleExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(63);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<Expr_constant_evalContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(52);
      constant();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<Expr_variable_evalContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(53);
      variable();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<Expr_parenthesis_evalContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(54);
      match(calcWithFunctionsParser::T__2);
      setState(55);
      expression(0);
      setState(56);
      match(calcWithFunctionsParser::T__3);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<Expr_function_call_evalContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(58);
      match(calcWithFunctionsParser::ID);
      setState(59);
      match(calcWithFunctionsParser::T__2);
      setState(60);
      params_values_list(0);
      setState(61);
      match(calcWithFunctionsParser::T__3);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(79);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(77);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<Expr_mul_evalContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(65);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(66);
          match(calcWithFunctionsParser::T__5);
          setState(67);
          expression(7);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<Expr_div_evalContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(68);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(69);
          match(calcWithFunctionsParser::T__6);
          setState(70);
          expression(6);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<Expr_add_evalContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(71);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(72);
          match(calcWithFunctionsParser::T__7);
          setState(73);
          expression(5);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<Expr_sub_evalContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(74);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(75);
          match(calcWithFunctionsParser::T__8);
          setState(76);
          expression(4);
          break;
        }

        default:
          break;
        } 
      }
      setState(81);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Params_names_listContext ------------------------------------------------------------------

calcWithFunctionsParser::Params_names_listContext::Params_names_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t calcWithFunctionsParser::Params_names_listContext::getRuleIndex() const {
  return calcWithFunctionsParser::RuleParams_names_list;
}

void calcWithFunctionsParser::Params_names_listContext::copyFrom(Params_names_listContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Params_names_singleContext ------------------------------------------------------------------

tree::TerminalNode* calcWithFunctionsParser::Params_names_singleContext::ID() {
  return getToken(calcWithFunctionsParser::ID, 0);
}

calcWithFunctionsParser::Params_names_singleContext::Params_names_singleContext(Params_names_listContext *ctx) { copyFrom(ctx); }


std::any calcWithFunctionsParser::Params_names_singleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calcWithFunctionsVisitor*>(visitor))
    return parserVisitor->visitParams_names_single(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Params_names_multipleContext ------------------------------------------------------------------

calcWithFunctionsParser::Params_names_listContext* calcWithFunctionsParser::Params_names_multipleContext::params_names_list() {
  return getRuleContext<calcWithFunctionsParser::Params_names_listContext>(0);
}

tree::TerminalNode* calcWithFunctionsParser::Params_names_multipleContext::ID() {
  return getToken(calcWithFunctionsParser::ID, 0);
}

calcWithFunctionsParser::Params_names_multipleContext::Params_names_multipleContext(Params_names_listContext *ctx) { copyFrom(ctx); }


std::any calcWithFunctionsParser::Params_names_multipleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calcWithFunctionsVisitor*>(visitor))
    return parserVisitor->visitParams_names_multiple(this);
  else
    return visitor->visitChildren(this);
}

calcWithFunctionsParser::Params_names_listContext* calcWithFunctionsParser::params_names_list() {
   return params_names_list(0);
}

calcWithFunctionsParser::Params_names_listContext* calcWithFunctionsParser::params_names_list(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  calcWithFunctionsParser::Params_names_listContext *_localctx = _tracker.createInstance<Params_names_listContext>(_ctx, parentState);
  calcWithFunctionsParser::Params_names_listContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 12;
  enterRecursionRule(_localctx, 12, calcWithFunctionsParser::RuleParams_names_list, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<Params_names_singleContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(83);
    match(calcWithFunctionsParser::ID);
    _ctx->stop = _input->LT(-1);
    setState(90);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<Params_names_multipleContext>(_tracker.createInstance<Params_names_listContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleParams_names_list);
        setState(85);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(86);
        match(calcWithFunctionsParser::T__9);
        setState(87);
        match(calcWithFunctionsParser::ID); 
      }
      setState(92);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Params_values_listContext ------------------------------------------------------------------

calcWithFunctionsParser::Params_values_listContext::Params_values_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t calcWithFunctionsParser::Params_values_listContext::getRuleIndex() const {
  return calcWithFunctionsParser::RuleParams_values_list;
}

void calcWithFunctionsParser::Params_values_listContext::copyFrom(Params_values_listContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Params_values_singleContext ------------------------------------------------------------------

calcWithFunctionsParser::ExpressionContext* calcWithFunctionsParser::Params_values_singleContext::expression() {
  return getRuleContext<calcWithFunctionsParser::ExpressionContext>(0);
}

calcWithFunctionsParser::Params_values_singleContext::Params_values_singleContext(Params_values_listContext *ctx) { copyFrom(ctx); }


std::any calcWithFunctionsParser::Params_values_singleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calcWithFunctionsVisitor*>(visitor))
    return parserVisitor->visitParams_values_single(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Params_values_multipleContext ------------------------------------------------------------------

calcWithFunctionsParser::Params_values_listContext* calcWithFunctionsParser::Params_values_multipleContext::params_values_list() {
  return getRuleContext<calcWithFunctionsParser::Params_values_listContext>(0);
}

calcWithFunctionsParser::ExpressionContext* calcWithFunctionsParser::Params_values_multipleContext::expression() {
  return getRuleContext<calcWithFunctionsParser::ExpressionContext>(0);
}

calcWithFunctionsParser::Params_values_multipleContext::Params_values_multipleContext(Params_values_listContext *ctx) { copyFrom(ctx); }


std::any calcWithFunctionsParser::Params_values_multipleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calcWithFunctionsVisitor*>(visitor))
    return parserVisitor->visitParams_values_multiple(this);
  else
    return visitor->visitChildren(this);
}

calcWithFunctionsParser::Params_values_listContext* calcWithFunctionsParser::params_values_list() {
   return params_values_list(0);
}

calcWithFunctionsParser::Params_values_listContext* calcWithFunctionsParser::params_values_list(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  calcWithFunctionsParser::Params_values_listContext *_localctx = _tracker.createInstance<Params_values_listContext>(_ctx, parentState);
  calcWithFunctionsParser::Params_values_listContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 14;
  enterRecursionRule(_localctx, 14, calcWithFunctionsParser::RuleParams_values_list, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<Params_values_singleContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(94);
    expression(0);
    _ctx->stop = _input->LT(-1);
    setState(101);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<Params_values_multipleContext>(_tracker.createInstance<Params_values_listContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleParams_values_list);
        setState(96);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(97);
        match(calcWithFunctionsParser::T__9);
        setState(98);
        expression(0); 
      }
      setState(103);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool calcWithFunctionsParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 5: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);
    case 6: return params_names_listSempred(antlrcpp::downCast<Params_names_listContext *>(context), predicateIndex);
    case 7: return params_values_listSempred(antlrcpp::downCast<Params_values_listContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool calcWithFunctionsParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 6);
    case 1: return precpred(_ctx, 5);
    case 2: return precpred(_ctx, 4);
    case 3: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

bool calcWithFunctionsParser::params_names_listSempred(Params_names_listContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 4: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool calcWithFunctionsParser::params_values_listSempred(Params_values_listContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 5: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void calcWithFunctionsParser::initialize() {
  ::antlr4::internal::call_once(calcwithfunctionsParserOnceFlag, calcwithfunctionsParserInitialize);
}
