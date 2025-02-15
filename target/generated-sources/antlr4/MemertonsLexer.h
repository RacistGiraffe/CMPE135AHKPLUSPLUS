
	#include "wci/intermediate/TypeSpec.h"
	using namespace wci::intermediate;


// Generated from Memertons.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  MemertonsLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, MAIN = 10, BO = 11, DY = 12, VAR = 13, DO = 14, 
    WHILE = 15, IF = 16, ELSE = 17, UNTIL = 18, PRINT = 19, LOOP = 20, END = 21, 
    INTEGER_TYPE = 22, FLOAT_TYPE = 23, RETURN = 24, MUL_OP = 25, DIV_OP = 26, 
    ADD_OP = 27, SUB_OP = 28, EQ_OP = 29, NE_OP = 30, LT_OP = 31, LE_OP = 32, 
    GT_OP = 33, GE_OP = 34, IDENTIFIER = 35, INTEGER = 36, FLOAT = 37, NEWLINE = 38, 
    WS = 39, QUOTE = 40, STRING = 41
  };

  MemertonsLexer(antlr4::CharStream *input);
  ~MemertonsLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

