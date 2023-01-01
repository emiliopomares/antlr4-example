
// Generated from calcWithFunctions.g4 by ANTLR 4.11.1


#include "calcWithFunctionsLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct CalcWithFunctionsLexerStaticData final {
  CalcWithFunctionsLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CalcWithFunctionsLexerStaticData(const CalcWithFunctionsLexerStaticData&) = delete;
  CalcWithFunctionsLexerStaticData(CalcWithFunctionsLexerStaticData&&) = delete;
  CalcWithFunctionsLexerStaticData& operator=(const CalcWithFunctionsLexerStaticData&) = delete;
  CalcWithFunctionsLexerStaticData& operator=(CalcWithFunctionsLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag calcwithfunctionslexerLexerOnceFlag;
CalcWithFunctionsLexerStaticData *calcwithfunctionslexerLexerStaticData = nullptr;

void calcwithfunctionslexerLexerInitialize() {
  assert(calcwithfunctionslexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<CalcWithFunctionsLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "NEWLINE", "DIGIT", "ID", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'func'", "'('", "')'", "'=>'", "'*'", "'/'", "'+'", "'-'", "'='", 
      "','", "'\\n'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "NEWLINE", "DIGIT", "ID", 
      "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,14,71,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,1,0,
  	1,0,1,0,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,
  	7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,11,1,12,1,12,5,12,60,8,12,10,12,
  	12,12,63,9,12,1,13,4,13,66,8,13,11,13,12,13,67,1,13,1,13,0,0,14,1,1,3,
  	2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,1,0,3,
  	2,0,65,90,97,122,4,0,48,57,65,90,95,95,97,122,2,0,9,9,32,32,72,0,1,1,
  	0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,
  	13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,
  	0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,1,29,1,0,0,0,3,34,1,0,0,0,5,36,1,0,0,
  	0,7,38,1,0,0,0,9,41,1,0,0,0,11,43,1,0,0,0,13,45,1,0,0,0,15,47,1,0,0,0,
  	17,49,1,0,0,0,19,51,1,0,0,0,21,53,1,0,0,0,23,55,1,0,0,0,25,57,1,0,0,0,
  	27,65,1,0,0,0,29,30,5,102,0,0,30,31,5,117,0,0,31,32,5,110,0,0,32,33,5,
  	99,0,0,33,2,1,0,0,0,34,35,5,40,0,0,35,4,1,0,0,0,36,37,5,41,0,0,37,6,1,
  	0,0,0,38,39,5,61,0,0,39,40,5,62,0,0,40,8,1,0,0,0,41,42,5,42,0,0,42,10,
  	1,0,0,0,43,44,5,47,0,0,44,12,1,0,0,0,45,46,5,43,0,0,46,14,1,0,0,0,47,
  	48,5,45,0,0,48,16,1,0,0,0,49,50,5,61,0,0,50,18,1,0,0,0,51,52,5,44,0,0,
  	52,20,1,0,0,0,53,54,5,10,0,0,54,22,1,0,0,0,55,56,2,48,57,0,56,24,1,0,
  	0,0,57,61,7,0,0,0,58,60,7,1,0,0,59,58,1,0,0,0,60,63,1,0,0,0,61,59,1,0,
  	0,0,61,62,1,0,0,0,62,26,1,0,0,0,63,61,1,0,0,0,64,66,7,2,0,0,65,64,1,0,
  	0,0,66,67,1,0,0,0,67,65,1,0,0,0,67,68,1,0,0,0,68,69,1,0,0,0,69,70,6,13,
  	0,0,70,28,1,0,0,0,3,0,61,67,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  calcwithfunctionslexerLexerStaticData = staticData.release();
}

}

calcWithFunctionsLexer::calcWithFunctionsLexer(CharStream *input) : Lexer(input) {
  calcWithFunctionsLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *calcwithfunctionslexerLexerStaticData->atn, calcwithfunctionslexerLexerStaticData->decisionToDFA, calcwithfunctionslexerLexerStaticData->sharedContextCache);
}

calcWithFunctionsLexer::~calcWithFunctionsLexer() {
  delete _interpreter;
}

std::string calcWithFunctionsLexer::getGrammarFileName() const {
  return "calcWithFunctions.g4";
}

const std::vector<std::string>& calcWithFunctionsLexer::getRuleNames() const {
  return calcwithfunctionslexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& calcWithFunctionsLexer::getChannelNames() const {
  return calcwithfunctionslexerLexerStaticData->channelNames;
}

const std::vector<std::string>& calcWithFunctionsLexer::getModeNames() const {
  return calcwithfunctionslexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& calcWithFunctionsLexer::getVocabulary() const {
  return calcwithfunctionslexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView calcWithFunctionsLexer::getSerializedATN() const {
  return calcwithfunctionslexerLexerStaticData->serializedATN;
}

const atn::ATN& calcWithFunctionsLexer::getATN() const {
  return *calcwithfunctionslexerLexerStaticData->atn;
}




void calcWithFunctionsLexer::initialize() {
  ::antlr4::internal::call_once(calcwithfunctionslexerLexerOnceFlag, calcwithfunctionslexerLexerInitialize);
}
