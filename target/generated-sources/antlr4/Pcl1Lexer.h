
// Generated from Pcl1.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  Pcl1Lexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    MAIN = 8, BO = 9, DY = 10, VAR = 11, DO = 12, WHILE = 13, IF = 14, ELSE = 15, 
    UNTIL = 16, PRINT = 17, LOOP = 18, MUL_OP = 19, DIV_OP = 20, ADD_OP = 21, 
    SUB_OP = 22, EQ_OP = 23, NE_OP = 24, LT_OP = 25, LE_OP = 26, GT_OP = 27, 
    GE_OP = 28, IDENTIFIER = 29, INTEGER = 30, NEWLINE = 31, WS = 32
  };

  Pcl1Lexer(antlr4::CharStream *input);
  ~Pcl1Lexer();

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

