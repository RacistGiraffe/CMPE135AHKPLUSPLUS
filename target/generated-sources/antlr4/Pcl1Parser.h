
	#include "wci/intermediate/TypeSpec.h"
	using namespace wci::intermediate;


// Generated from Pcl1.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  Pcl1Parser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, MAIN = 10, BO = 11, DY = 12, VAR = 13, DO = 14, 
    WHILE = 15, IF = 16, ELSE = 17, UNTIL = 18, PRINT = 19, LOOP = 20, MUL_OP = 21, 
    DIV_OP = 22, ADD_OP = 23, SUB_OP = 24, EQ_OP = 25, NE_OP = 26, LT_OP = 27, 
    LE_OP = 28, GT_OP = 29, GE_OP = 30, IDENTIFIER = 31, INTEGER = 32, FLOAT = 33, 
    NEWLINE = 34, WS = 35, QUOTE = 36, STRING = 37
  };

  enum {
    RuleProgram = 0, RuleHeader = 1, RuleMainBlock = 2, RuleBlock = 3, RuleDeclarations = 4, 
    RuleDeclList = 5, RuleDecl = 6, RuleVarList = 7, RuleVarId = 8, RuleTypeId = 9, 
    RuleCompoundStmt = 10, RuleStmt = 11, RuleStmtList = 12, RuleAssignmentStmt = 13, 
    RuleLoop_num_stmt = 14, RuleLoop_until_stmt = 15, RuleIf_stmt = 16, 
    RulePrintStmt = 17, RuleFormatString = 18, RulePrintArg = 19, RuleVariable = 20, 
    RuleExpr = 21, RuleMulDivOp = 22, RuleAddSubOp = 23, RuleRelOp = 24, 
    RuleSignedNumber = 25, RuleSign = 26, RuleNumber = 27
  };

  Pcl1Parser(antlr4::TokenStream *input);
  ~Pcl1Parser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgramContext;
  class HeaderContext;
  class MainBlockContext;
  class BlockContext;
  class DeclarationsContext;
  class DeclListContext;
  class DeclContext;
  class VarListContext;
  class VarIdContext;
  class TypeIdContext;
  class CompoundStmtContext;
  class StmtContext;
  class StmtListContext;
  class AssignmentStmtContext;
  class Loop_num_stmtContext;
  class Loop_until_stmtContext;
  class If_stmtContext;
  class PrintStmtContext;
  class FormatStringContext;
  class PrintArgContext;
  class VariableContext;
  class ExprContext;
  class MulDivOpContext;
  class AddSubOpContext;
  class RelOpContext;
  class SignedNumberContext;
  class SignContext;
  class NumberContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HeaderContext *header();
    MainBlockContext *mainBlock();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  HeaderContext : public antlr4::ParserRuleContext {
  public:
    HeaderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MAIN();
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HeaderContext* header();

  class  MainBlockContext : public antlr4::ParserRuleContext {
  public:
    MainBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MainBlockContext* mainBlock();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationsContext *declarations();
    CompoundStmtContext *compoundStmt();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

  class  DeclarationsContext : public antlr4::ParserRuleContext {
  public:
    DeclarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclListContext *declList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationsContext* declarations();

  class  DeclListContext : public antlr4::ParserRuleContext {
  public:
    DeclListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DeclContext *> decl();
    DeclContext* decl(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclListContext* declList();

  class  DeclContext : public antlr4::ParserRuleContext {
  public:
    DeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarListContext *varList();
    TypeIdContext *typeId();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclContext* decl();

  class  VarListContext : public antlr4::ParserRuleContext {
  public:
    VarListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VarIdContext *> varId();
    VarIdContext* varId(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarListContext* varList();

  class  VarIdContext : public antlr4::ParserRuleContext {
  public:
    TypeSpec * type = nullptr;
    VarIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarIdContext* varId();

  class  TypeIdContext : public antlr4::ParserRuleContext {
  public:
    TypeIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeIdContext* typeId();

  class  CompoundStmtContext : public antlr4::ParserRuleContext {
  public:
    CompoundStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BO();
    StmtListContext *stmtList();
    antlr4::tree::TerminalNode *DY();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompoundStmtContext* compoundStmt();

  class  StmtContext : public antlr4::ParserRuleContext {
  public:
    StmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CompoundStmtContext *compoundStmt();
    AssignmentStmtContext *assignmentStmt();
    Loop_num_stmtContext *loop_num_stmt();
    Loop_until_stmtContext *loop_until_stmt();
    If_stmtContext *if_stmt();
    PrintStmtContext *printStmt();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtContext* stmt();

  class  StmtListContext : public antlr4::ParserRuleContext {
  public:
    StmtListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtListContext* stmtList();

  class  AssignmentStmtContext : public antlr4::ParserRuleContext {
  public:
    AssignmentStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    ExprContext *expr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentStmtContext* assignmentStmt();

  class  Loop_num_stmtContext : public antlr4::ParserRuleContext {
  public:
    Loop_num_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOOP();
    ExprContext *expr();
    StmtListContext *stmtList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Loop_num_stmtContext* loop_num_stmt();

  class  Loop_until_stmtContext : public antlr4::ParserRuleContext {
  public:
    Loop_until_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOOP();
    StmtListContext *stmtList();
    antlr4::tree::TerminalNode *WHILE();
    ExprContext *expr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Loop_until_stmtContext* loop_until_stmt();

  class  If_stmtContext : public antlr4::ParserRuleContext {
  public:
    If_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    ExprContext *expr();
    std::vector<StmtListContext *> stmtList();
    StmtListContext* stmtList(size_t i);
    antlr4::tree::TerminalNode *ELSE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_stmtContext* if_stmt();

  class  PrintStmtContext : public antlr4::ParserRuleContext {
  public:
    PrintStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRINT();
    FormatStringContext *formatString();
    std::vector<PrintArgContext *> printArg();
    PrintArgContext* printArg(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrintStmtContext* printStmt();

  class  FormatStringContext : public antlr4::ParserRuleContext {
  public:
    FormatStringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FormatStringContext* formatString();

  class  PrintArgContext : public antlr4::ParserRuleContext {
  public:
    PrintArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrintArgContext* printArg();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    TypeSpec * type = nullptr;
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() = default;
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  VariableExprContext : public ExprContext {
  public:
    VariableExprContext(ExprContext *ctx);

    VariableContext *variable();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AddSubExprContext : public ExprContext {
  public:
    AddSubExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    AddSubOpContext *addSubOp();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RelOpExprContext : public ExprContext {
  public:
    RelOpExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    RelOpContext *relOp();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BracketExprContext : public ExprContext {
  public:
    BracketExprContext(ExprContext *ctx);

    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnsignedNumberExprContext : public ExprContext {
  public:
    UnsignedNumberExprContext(ExprContext *ctx);

    NumberContext *number();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MulDivExprContext : public ExprContext {
  public:
    MulDivExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    MulDivOpContext *mulDivOp();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParenExprContext : public ExprContext {
  public:
    ParenExprContext(ExprContext *ctx);

    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SignedNumberExprContext : public ExprContext {
  public:
    SignedNumberExprContext(ExprContext *ctx);

    SignedNumberContext *signedNumber();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  MulDivOpContext : public antlr4::ParserRuleContext {
  public:
    MulDivOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MUL_OP();
    antlr4::tree::TerminalNode *DIV_OP();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MulDivOpContext* mulDivOp();

  class  AddSubOpContext : public antlr4::ParserRuleContext {
  public:
    AddSubOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD_OP();
    antlr4::tree::TerminalNode *SUB_OP();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AddSubOpContext* addSubOp();

  class  RelOpContext : public antlr4::ParserRuleContext {
  public:
    RelOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQ_OP();
    antlr4::tree::TerminalNode *NE_OP();
    antlr4::tree::TerminalNode *LT_OP();
    antlr4::tree::TerminalNode *LE_OP();
    antlr4::tree::TerminalNode *GT_OP();
    antlr4::tree::TerminalNode *GE_OP();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RelOpContext* relOp();

  class  SignedNumberContext : public antlr4::ParserRuleContext {
  public:
    TypeSpec * type = nullptr;
    SignedNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SignContext *sign();
    NumberContext *number();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignedNumberContext* signedNumber();

  class  SignContext : public antlr4::ParserRuleContext {
  public:
    SignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD_OP();
    antlr4::tree::TerminalNode *SUB_OP();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignContext* sign();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    TypeSpec * type = nullptr;
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    NumberContext() = default;
    void copyFrom(NumberContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  FloatConstContext : public NumberContext {
  public:
    FloatConstContext(NumberContext *ctx);

    antlr4::tree::TerminalNode *FLOAT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntegerConstContext : public NumberContext {
  public:
    IntegerConstContext(NumberContext *ctx);

    antlr4::tree::TerminalNode *INTEGER();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  NumberContext* number();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

