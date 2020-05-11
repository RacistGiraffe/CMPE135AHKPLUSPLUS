
	#include "wci/intermediate/TypeSpec.h"
	using namespace wci::intermediate;


// Generated from Pcl1.g4 by ANTLR 4.7.2


#include "Pcl1Visitor.h"

#include "Pcl1Parser.h"


using namespace antlrcpp;
using namespace antlr4;

Pcl1Parser::Pcl1Parser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

Pcl1Parser::~Pcl1Parser() {
  delete _interpreter;
}

std::string Pcl1Parser::getGrammarFileName() const {
  return "Pcl1.g4";
}

const std::vector<std::string>& Pcl1Parser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& Pcl1Parser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

Pcl1Parser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Pcl1Parser::HeaderContext* Pcl1Parser::ProgramContext::header() {
  return getRuleContext<Pcl1Parser::HeaderContext>(0);
}

Pcl1Parser::MainBlockContext* Pcl1Parser::ProgramContext::mainBlock() {
  return getRuleContext<Pcl1Parser::MainBlockContext>(0);
}


size_t Pcl1Parser::ProgramContext::getRuleIndex() const {
  return Pcl1Parser::RuleProgram;
}


antlrcpp::Any Pcl1Parser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

Pcl1Parser::ProgramContext* Pcl1Parser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, Pcl1Parser::RuleProgram);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(56);
    header();
    setState(57);
    mainBlock();
    setState(58);
    match(Pcl1Parser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HeaderContext ------------------------------------------------------------------

Pcl1Parser::HeaderContext::HeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl1Parser::HeaderContext::MAIN() {
  return getToken(Pcl1Parser::MAIN, 0);
}

tree::TerminalNode* Pcl1Parser::HeaderContext::IDENTIFIER() {
  return getToken(Pcl1Parser::IDENTIFIER, 0);
}


size_t Pcl1Parser::HeaderContext::getRuleIndex() const {
  return Pcl1Parser::RuleHeader;
}


antlrcpp::Any Pcl1Parser::HeaderContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitHeader(this);
  else
    return visitor->visitChildren(this);
}

Pcl1Parser::HeaderContext* Pcl1Parser::header() {
  HeaderContext *_localctx = _tracker.createInstance<HeaderContext>(_ctx, getState());
  enterRule(_localctx, 2, Pcl1Parser::RuleHeader);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(60);
    match(Pcl1Parser::MAIN);
    setState(61);
    match(Pcl1Parser::IDENTIFIER);
    setState(62);
    match(Pcl1Parser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MainBlockContext ------------------------------------------------------------------

Pcl1Parser::MainBlockContext::MainBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Pcl1Parser::BlockContext* Pcl1Parser::MainBlockContext::block() {
  return getRuleContext<Pcl1Parser::BlockContext>(0);
}


size_t Pcl1Parser::MainBlockContext::getRuleIndex() const {
  return Pcl1Parser::RuleMainBlock;
}


antlrcpp::Any Pcl1Parser::MainBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitMainBlock(this);
  else
    return visitor->visitChildren(this);
}

Pcl1Parser::MainBlockContext* Pcl1Parser::mainBlock() {
  MainBlockContext *_localctx = _tracker.createInstance<MainBlockContext>(_ctx, getState());
  enterRule(_localctx, 4, Pcl1Parser::RuleMainBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(64);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

Pcl1Parser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Pcl1Parser::DeclarationsContext* Pcl1Parser::BlockContext::declarations() {
  return getRuleContext<Pcl1Parser::DeclarationsContext>(0);
}

Pcl1Parser::CompoundStmtContext* Pcl1Parser::BlockContext::compoundStmt() {
  return getRuleContext<Pcl1Parser::CompoundStmtContext>(0);
}


size_t Pcl1Parser::BlockContext::getRuleIndex() const {
  return Pcl1Parser::RuleBlock;
}


antlrcpp::Any Pcl1Parser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

Pcl1Parser::BlockContext* Pcl1Parser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 6, Pcl1Parser::RuleBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(66);
    declarations();
    setState(67);
    compoundStmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationsContext ------------------------------------------------------------------

Pcl1Parser::DeclarationsContext::DeclarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Pcl1Parser::DeclListContext* Pcl1Parser::DeclarationsContext::declList() {
  return getRuleContext<Pcl1Parser::DeclListContext>(0);
}


size_t Pcl1Parser::DeclarationsContext::getRuleIndex() const {
  return Pcl1Parser::RuleDeclarations;
}


antlrcpp::Any Pcl1Parser::DeclarationsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitDeclarations(this);
  else
    return visitor->visitChildren(this);
}

Pcl1Parser::DeclarationsContext* Pcl1Parser::declarations() {
  DeclarationsContext *_localctx = _tracker.createInstance<DeclarationsContext>(_ctx, getState());
  enterRule(_localctx, 8, Pcl1Parser::RuleDeclarations);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(69);
    declList();
    setState(70);
    match(Pcl1Parser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclListContext ------------------------------------------------------------------

Pcl1Parser::DeclListContext::DeclListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Pcl1Parser::DeclContext *> Pcl1Parser::DeclListContext::decl() {
  return getRuleContexts<Pcl1Parser::DeclContext>();
}

Pcl1Parser::DeclContext* Pcl1Parser::DeclListContext::decl(size_t i) {
  return getRuleContext<Pcl1Parser::DeclContext>(i);
}


size_t Pcl1Parser::DeclListContext::getRuleIndex() const {
  return Pcl1Parser::RuleDeclList;
}


antlrcpp::Any Pcl1Parser::DeclListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitDeclList(this);
  else
    return visitor->visitChildren(this);
}

Pcl1Parser::DeclListContext* Pcl1Parser::declList() {
  DeclListContext *_localctx = _tracker.createInstance<DeclListContext>(_ctx, getState());
  enterRule(_localctx, 10, Pcl1Parser::RuleDeclList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(72);
    decl();
    setState(77);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(73);
        match(Pcl1Parser::T__1);
        setState(74);
        decl(); 
      }
      setState(79);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclContext ------------------------------------------------------------------

Pcl1Parser::DeclContext::DeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Pcl1Parser::VarListContext* Pcl1Parser::DeclContext::varList() {
  return getRuleContext<Pcl1Parser::VarListContext>(0);
}

Pcl1Parser::TypeIdContext* Pcl1Parser::DeclContext::typeId() {
  return getRuleContext<Pcl1Parser::TypeIdContext>(0);
}


size_t Pcl1Parser::DeclContext::getRuleIndex() const {
  return Pcl1Parser::RuleDecl;
}


antlrcpp::Any Pcl1Parser::DeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitDecl(this);
  else
    return visitor->visitChildren(this);
}

Pcl1Parser::DeclContext* Pcl1Parser::decl() {
  DeclContext *_localctx = _tracker.createInstance<DeclContext>(_ctx, getState());
  enterRule(_localctx, 12, Pcl1Parser::RuleDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(80);
    varList();
    setState(81);
    match(Pcl1Parser::T__2);
    setState(82);
    typeId();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarListContext ------------------------------------------------------------------

Pcl1Parser::VarListContext::VarListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Pcl1Parser::VarIdContext *> Pcl1Parser::VarListContext::varId() {
  return getRuleContexts<Pcl1Parser::VarIdContext>();
}

Pcl1Parser::VarIdContext* Pcl1Parser::VarListContext::varId(size_t i) {
  return getRuleContext<Pcl1Parser::VarIdContext>(i);
}


size_t Pcl1Parser::VarListContext::getRuleIndex() const {
  return Pcl1Parser::RuleVarList;
}


antlrcpp::Any Pcl1Parser::VarListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitVarList(this);
  else
    return visitor->visitChildren(this);
}

Pcl1Parser::VarListContext* Pcl1Parser::varList() {
  VarListContext *_localctx = _tracker.createInstance<VarListContext>(_ctx, getState());
  enterRule(_localctx, 14, Pcl1Parser::RuleVarList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(84);
    varId();
    setState(89);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Pcl1Parser::T__3) {
      setState(85);
      match(Pcl1Parser::T__3);
      setState(86);
      varId();
      setState(91);
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

//----------------- VarIdContext ------------------------------------------------------------------

Pcl1Parser::VarIdContext::VarIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl1Parser::VarIdContext::IDENTIFIER() {
  return getToken(Pcl1Parser::IDENTIFIER, 0);
}


size_t Pcl1Parser::VarIdContext::getRuleIndex() const {
  return Pcl1Parser::RuleVarId;
}


antlrcpp::Any Pcl1Parser::VarIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitVarId(this);
  else
    return visitor->visitChildren(this);
}

Pcl1Parser::VarIdContext* Pcl1Parser::varId() {
  VarIdContext *_localctx = _tracker.createInstance<VarIdContext>(_ctx, getState());
  enterRule(_localctx, 16, Pcl1Parser::RuleVarId);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(92);
    match(Pcl1Parser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeIdContext ------------------------------------------------------------------

Pcl1Parser::TypeIdContext::TypeIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl1Parser::TypeIdContext::IDENTIFIER() {
  return getToken(Pcl1Parser::IDENTIFIER, 0);
}


size_t Pcl1Parser::TypeIdContext::getRuleIndex() const {
  return Pcl1Parser::RuleTypeId;
}


antlrcpp::Any Pcl1Parser::TypeIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitTypeId(this);
  else
    return visitor->visitChildren(this);
}

Pcl1Parser::TypeIdContext* Pcl1Parser::typeId() {
  TypeIdContext *_localctx = _tracker.createInstance<TypeIdContext>(_ctx, getState());
  enterRule(_localctx, 18, Pcl1Parser::RuleTypeId);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(94);
    match(Pcl1Parser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompoundStmtContext ------------------------------------------------------------------

Pcl1Parser::CompoundStmtContext::CompoundStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl1Parser::CompoundStmtContext::BO() {
  return getToken(Pcl1Parser::BO, 0);
}

Pcl1Parser::StmtListContext* Pcl1Parser::CompoundStmtContext::stmtList() {
  return getRuleContext<Pcl1Parser::StmtListContext>(0);
}

tree::TerminalNode* Pcl1Parser::CompoundStmtContext::DY() {
  return getToken(Pcl1Parser::DY, 0);
}


size_t Pcl1Parser::CompoundStmtContext::getRuleIndex() const {
  return Pcl1Parser::RuleCompoundStmt;
}


antlrcpp::Any Pcl1Parser::CompoundStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitCompoundStmt(this);
  else
    return visitor->visitChildren(this);
}

Pcl1Parser::CompoundStmtContext* Pcl1Parser::compoundStmt() {
  CompoundStmtContext *_localctx = _tracker.createInstance<CompoundStmtContext>(_ctx, getState());
  enterRule(_localctx, 20, Pcl1Parser::RuleCompoundStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(96);
    match(Pcl1Parser::BO);
    setState(97);
    stmtList();
    setState(98);
    match(Pcl1Parser::DY);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

Pcl1Parser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Pcl1Parser::CompoundStmtContext* Pcl1Parser::StmtContext::compoundStmt() {
  return getRuleContext<Pcl1Parser::CompoundStmtContext>(0);
}

Pcl1Parser::AssignmentStmtContext* Pcl1Parser::StmtContext::assignmentStmt() {
  return getRuleContext<Pcl1Parser::AssignmentStmtContext>(0);
}

Pcl1Parser::Loop_while_stmtContext* Pcl1Parser::StmtContext::loop_while_stmt() {
  return getRuleContext<Pcl1Parser::Loop_while_stmtContext>(0);
}

Pcl1Parser::If_stmtContext* Pcl1Parser::StmtContext::if_stmt() {
  return getRuleContext<Pcl1Parser::If_stmtContext>(0);
}

Pcl1Parser::PrintStmtContext* Pcl1Parser::StmtContext::printStmt() {
  return getRuleContext<Pcl1Parser::PrintStmtContext>(0);
}


size_t Pcl1Parser::StmtContext::getRuleIndex() const {
  return Pcl1Parser::RuleStmt;
}


antlrcpp::Any Pcl1Parser::StmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitStmt(this);
  else
    return visitor->visitChildren(this);
}

Pcl1Parser::StmtContext* Pcl1Parser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 22, Pcl1Parser::RuleStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(106);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Pcl1Parser::BO: {
        enterOuterAlt(_localctx, 1);
        setState(100);
        compoundStmt();
        break;
      }

      case Pcl1Parser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(101);
        assignmentStmt();
        break;
      }

      case Pcl1Parser::LOOP: {
        enterOuterAlt(_localctx, 3);
        setState(102);
        loop_while_stmt();
        break;
      }

      case Pcl1Parser::IF: {
        enterOuterAlt(_localctx, 4);
        setState(103);
        if_stmt();
        break;
      }

      case Pcl1Parser::PRINT: {
        enterOuterAlt(_localctx, 5);
        setState(104);
        printStmt();
        break;
      }

      case Pcl1Parser::T__1:
      case Pcl1Parser::T__6:
      case Pcl1Parser::DY: {
        enterOuterAlt(_localctx, 6);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtListContext ------------------------------------------------------------------

Pcl1Parser::StmtListContext::StmtListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Pcl1Parser::StmtContext *> Pcl1Parser::StmtListContext::stmt() {
  return getRuleContexts<Pcl1Parser::StmtContext>();
}

Pcl1Parser::StmtContext* Pcl1Parser::StmtListContext::stmt(size_t i) {
  return getRuleContext<Pcl1Parser::StmtContext>(i);
}


size_t Pcl1Parser::StmtListContext::getRuleIndex() const {
  return Pcl1Parser::RuleStmtList;
}


antlrcpp::Any Pcl1Parser::StmtListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitStmtList(this);
  else
    return visitor->visitChildren(this);
}

Pcl1Parser::StmtListContext* Pcl1Parser::stmtList() {
  StmtListContext *_localctx = _tracker.createInstance<StmtListContext>(_ctx, getState());
  enterRule(_localctx, 24, Pcl1Parser::RuleStmtList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(108);
    stmt();
    setState(113);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Pcl1Parser::T__1) {
      setState(109);
      match(Pcl1Parser::T__1);
      setState(110);
      stmt();
      setState(115);
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

//----------------- AssignmentStmtContext ------------------------------------------------------------------

Pcl1Parser::AssignmentStmtContext::AssignmentStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Pcl1Parser::VariableContext* Pcl1Parser::AssignmentStmtContext::variable() {
  return getRuleContext<Pcl1Parser::VariableContext>(0);
}

Pcl1Parser::ExprContext* Pcl1Parser::AssignmentStmtContext::expr() {
  return getRuleContext<Pcl1Parser::ExprContext>(0);
}


size_t Pcl1Parser::AssignmentStmtContext::getRuleIndex() const {
  return Pcl1Parser::RuleAssignmentStmt;
}


antlrcpp::Any Pcl1Parser::AssignmentStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitAssignmentStmt(this);
  else
    return visitor->visitChildren(this);
}

Pcl1Parser::AssignmentStmtContext* Pcl1Parser::assignmentStmt() {
  AssignmentStmtContext *_localctx = _tracker.createInstance<AssignmentStmtContext>(_ctx, getState());
  enterRule(_localctx, 26, Pcl1Parser::RuleAssignmentStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(116);
    variable();
    setState(117);
    match(Pcl1Parser::T__4);
    setState(118);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Loop_while_stmtContext ------------------------------------------------------------------

Pcl1Parser::Loop_while_stmtContext::Loop_while_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl1Parser::Loop_while_stmtContext::LOOP() {
  return getToken(Pcl1Parser::LOOP, 0);
}

Pcl1Parser::StmtListContext* Pcl1Parser::Loop_while_stmtContext::stmtList() {
  return getRuleContext<Pcl1Parser::StmtListContext>(0);
}

tree::TerminalNode* Pcl1Parser::Loop_while_stmtContext::WHILE() {
  return getToken(Pcl1Parser::WHILE, 0);
}

Pcl1Parser::ExprContext* Pcl1Parser::Loop_while_stmtContext::expr() {
  return getRuleContext<Pcl1Parser::ExprContext>(0);
}


size_t Pcl1Parser::Loop_while_stmtContext::getRuleIndex() const {
  return Pcl1Parser::RuleLoop_while_stmt;
}


antlrcpp::Any Pcl1Parser::Loop_while_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitLoop_while_stmt(this);
  else
    return visitor->visitChildren(this);
}

Pcl1Parser::Loop_while_stmtContext* Pcl1Parser::loop_while_stmt() {
  Loop_while_stmtContext *_localctx = _tracker.createInstance<Loop_while_stmtContext>(_ctx, getState());
  enterRule(_localctx, 28, Pcl1Parser::RuleLoop_while_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(120);
    match(Pcl1Parser::LOOP);
    setState(121);
    match(Pcl1Parser::T__5);
    setState(122);
    stmtList();
    setState(123);
    match(Pcl1Parser::T__6);
    setState(124);
    match(Pcl1Parser::WHILE);
    setState(125);
    match(Pcl1Parser::T__7);
    setState(126);
    expr(0);
    setState(127);
    match(Pcl1Parser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_stmtContext ------------------------------------------------------------------

Pcl1Parser::If_stmtContext::If_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl1Parser::If_stmtContext::IF() {
  return getToken(Pcl1Parser::IF, 0);
}

Pcl1Parser::ExprContext* Pcl1Parser::If_stmtContext::expr() {
  return getRuleContext<Pcl1Parser::ExprContext>(0);
}

std::vector<Pcl1Parser::StmtListContext *> Pcl1Parser::If_stmtContext::stmtList() {
  return getRuleContexts<Pcl1Parser::StmtListContext>();
}

Pcl1Parser::StmtListContext* Pcl1Parser::If_stmtContext::stmtList(size_t i) {
  return getRuleContext<Pcl1Parser::StmtListContext>(i);
}

tree::TerminalNode* Pcl1Parser::If_stmtContext::ELSE() {
  return getToken(Pcl1Parser::ELSE, 0);
}


size_t Pcl1Parser::If_stmtContext::getRuleIndex() const {
  return Pcl1Parser::RuleIf_stmt;
}


antlrcpp::Any Pcl1Parser::If_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitIf_stmt(this);
  else
    return visitor->visitChildren(this);
}

Pcl1Parser::If_stmtContext* Pcl1Parser::if_stmt() {
  If_stmtContext *_localctx = _tracker.createInstance<If_stmtContext>(_ctx, getState());
  enterRule(_localctx, 30, Pcl1Parser::RuleIf_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(129);
    match(Pcl1Parser::IF);
    setState(130);
    match(Pcl1Parser::T__7);
    setState(131);
    expr(0);
    setState(132);
    match(Pcl1Parser::T__8);
    setState(133);
    match(Pcl1Parser::T__5);

    setState(134);
    stmtList();
    setState(135);
    match(Pcl1Parser::T__6);
    setState(141);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Pcl1Parser::ELSE) {
      setState(136);
      match(Pcl1Parser::ELSE);
      setState(137);
      match(Pcl1Parser::T__5);
      setState(138);
      stmtList();
      setState(139);
      match(Pcl1Parser::T__6);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintStmtContext ------------------------------------------------------------------

Pcl1Parser::PrintStmtContext::PrintStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl1Parser::PrintStmtContext::PRINT() {
  return getToken(Pcl1Parser::PRINT, 0);
}

Pcl1Parser::FormatStringContext* Pcl1Parser::PrintStmtContext::formatString() {
  return getRuleContext<Pcl1Parser::FormatStringContext>(0);
}

std::vector<Pcl1Parser::PrintArgContext *> Pcl1Parser::PrintStmtContext::printArg() {
  return getRuleContexts<Pcl1Parser::PrintArgContext>();
}

Pcl1Parser::PrintArgContext* Pcl1Parser::PrintStmtContext::printArg(size_t i) {
  return getRuleContext<Pcl1Parser::PrintArgContext>(i);
}


size_t Pcl1Parser::PrintStmtContext::getRuleIndex() const {
  return Pcl1Parser::RulePrintStmt;
}


antlrcpp::Any Pcl1Parser::PrintStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitPrintStmt(this);
  else
    return visitor->visitChildren(this);
}

Pcl1Parser::PrintStmtContext* Pcl1Parser::printStmt() {
  PrintStmtContext *_localctx = _tracker.createInstance<PrintStmtContext>(_ctx, getState());
  enterRule(_localctx, 32, Pcl1Parser::RulePrintStmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(143);
    match(Pcl1Parser::PRINT);
    setState(144);
    match(Pcl1Parser::T__7);
    setState(145);
    formatString();
    setState(149);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Pcl1Parser::T__3) {
      setState(146);
      printArg();
      setState(151);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(152);
    match(Pcl1Parser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormatStringContext ------------------------------------------------------------------

Pcl1Parser::FormatStringContext::FormatStringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl1Parser::FormatStringContext::STRING() {
  return getToken(Pcl1Parser::STRING, 0);
}


size_t Pcl1Parser::FormatStringContext::getRuleIndex() const {
  return Pcl1Parser::RuleFormatString;
}


antlrcpp::Any Pcl1Parser::FormatStringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitFormatString(this);
  else
    return visitor->visitChildren(this);
}

Pcl1Parser::FormatStringContext* Pcl1Parser::formatString() {
  FormatStringContext *_localctx = _tracker.createInstance<FormatStringContext>(_ctx, getState());
  enterRule(_localctx, 34, Pcl1Parser::RuleFormatString);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(154);
    match(Pcl1Parser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintArgContext ------------------------------------------------------------------

Pcl1Parser::PrintArgContext::PrintArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Pcl1Parser::ExprContext* Pcl1Parser::PrintArgContext::expr() {
  return getRuleContext<Pcl1Parser::ExprContext>(0);
}


size_t Pcl1Parser::PrintArgContext::getRuleIndex() const {
  return Pcl1Parser::RulePrintArg;
}


antlrcpp::Any Pcl1Parser::PrintArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitPrintArg(this);
  else
    return visitor->visitChildren(this);
}

Pcl1Parser::PrintArgContext* Pcl1Parser::printArg() {
  PrintArgContext *_localctx = _tracker.createInstance<PrintArgContext>(_ctx, getState());
  enterRule(_localctx, 36, Pcl1Parser::RulePrintArg);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(156);
    match(Pcl1Parser::T__3);
    setState(157);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

Pcl1Parser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl1Parser::VariableContext::IDENTIFIER() {
  return getToken(Pcl1Parser::IDENTIFIER, 0);
}


size_t Pcl1Parser::VariableContext::getRuleIndex() const {
  return Pcl1Parser::RuleVariable;
}


antlrcpp::Any Pcl1Parser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

Pcl1Parser::VariableContext* Pcl1Parser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 38, Pcl1Parser::RuleVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(159);
    match(Pcl1Parser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

Pcl1Parser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Pcl1Parser::ExprContext::getRuleIndex() const {
  return Pcl1Parser::RuleExpr;
}

void Pcl1Parser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->type = ctx->type;
}

//----------------- VariableExprContext ------------------------------------------------------------------

Pcl1Parser::VariableContext* Pcl1Parser::VariableExprContext::variable() {
  return getRuleContext<Pcl1Parser::VariableContext>(0);
}

Pcl1Parser::VariableExprContext::VariableExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any Pcl1Parser::VariableExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitVariableExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddSubExprContext ------------------------------------------------------------------

std::vector<Pcl1Parser::ExprContext *> Pcl1Parser::AddSubExprContext::expr() {
  return getRuleContexts<Pcl1Parser::ExprContext>();
}

Pcl1Parser::ExprContext* Pcl1Parser::AddSubExprContext::expr(size_t i) {
  return getRuleContext<Pcl1Parser::ExprContext>(i);
}

Pcl1Parser::AddSubOpContext* Pcl1Parser::AddSubExprContext::addSubOp() {
  return getRuleContext<Pcl1Parser::AddSubOpContext>(0);
}

Pcl1Parser::AddSubExprContext::AddSubExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any Pcl1Parser::AddSubExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitAddSubExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RelOpExprContext ------------------------------------------------------------------

std::vector<Pcl1Parser::ExprContext *> Pcl1Parser::RelOpExprContext::expr() {
  return getRuleContexts<Pcl1Parser::ExprContext>();
}

Pcl1Parser::ExprContext* Pcl1Parser::RelOpExprContext::expr(size_t i) {
  return getRuleContext<Pcl1Parser::ExprContext>(i);
}

Pcl1Parser::RelOpContext* Pcl1Parser::RelOpExprContext::relOp() {
  return getRuleContext<Pcl1Parser::RelOpContext>(0);
}

Pcl1Parser::RelOpExprContext::RelOpExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any Pcl1Parser::RelOpExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitRelOpExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnsignedNumberExprContext ------------------------------------------------------------------

Pcl1Parser::NumberContext* Pcl1Parser::UnsignedNumberExprContext::number() {
  return getRuleContext<Pcl1Parser::NumberContext>(0);
}

Pcl1Parser::UnsignedNumberExprContext::UnsignedNumberExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any Pcl1Parser::UnsignedNumberExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitUnsignedNumberExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulDivExprContext ------------------------------------------------------------------

std::vector<Pcl1Parser::ExprContext *> Pcl1Parser::MulDivExprContext::expr() {
  return getRuleContexts<Pcl1Parser::ExprContext>();
}

Pcl1Parser::ExprContext* Pcl1Parser::MulDivExprContext::expr(size_t i) {
  return getRuleContext<Pcl1Parser::ExprContext>(i);
}

Pcl1Parser::MulDivOpContext* Pcl1Parser::MulDivExprContext::mulDivOp() {
  return getRuleContext<Pcl1Parser::MulDivOpContext>(0);
}

Pcl1Parser::MulDivExprContext::MulDivExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any Pcl1Parser::MulDivExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitMulDivExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenExprContext ------------------------------------------------------------------

Pcl1Parser::ExprContext* Pcl1Parser::ParenExprContext::expr() {
  return getRuleContext<Pcl1Parser::ExprContext>(0);
}

Pcl1Parser::ParenExprContext::ParenExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any Pcl1Parser::ParenExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitParenExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SignedNumberExprContext ------------------------------------------------------------------

Pcl1Parser::SignedNumberContext* Pcl1Parser::SignedNumberExprContext::signedNumber() {
  return getRuleContext<Pcl1Parser::SignedNumberContext>(0);
}

Pcl1Parser::SignedNumberExprContext::SignedNumberExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any Pcl1Parser::SignedNumberExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitSignedNumberExpr(this);
  else
    return visitor->visitChildren(this);
}

Pcl1Parser::ExprContext* Pcl1Parser::expr() {
   return expr(0);
}

Pcl1Parser::ExprContext* Pcl1Parser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Pcl1Parser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  Pcl1Parser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 40;
  enterRecursionRule(_localctx, 40, Pcl1Parser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(169);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Pcl1Parser::INTEGER:
      case Pcl1Parser::FLOAT: {
        _localctx = _tracker.createInstance<UnsignedNumberExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(162);
        number();
        break;
      }

      case Pcl1Parser::ADD_OP:
      case Pcl1Parser::SUB_OP: {
        _localctx = _tracker.createInstance<SignedNumberExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(163);
        signedNumber();
        break;
      }

      case Pcl1Parser::IDENTIFIER: {
        _localctx = _tracker.createInstance<VariableExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(164);
        variable();
        break;
      }

      case Pcl1Parser::T__7: {
        _localctx = _tracker.createInstance<ParenExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(165);
        match(Pcl1Parser::T__7);
        setState(166);
        expr(0);
        setState(167);
        match(Pcl1Parser::T__8);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(185);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(183);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(171);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(172);
          mulDivOp();
          setState(173);
          expr(8);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(175);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(176);
          addSubOp();
          setState(177);
          expr(7);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<RelOpExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(179);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(180);
          relOp();
          setState(181);
          expr(6);
          break;
        }

        } 
      }
      setState(187);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- MulDivOpContext ------------------------------------------------------------------

Pcl1Parser::MulDivOpContext::MulDivOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl1Parser::MulDivOpContext::MUL_OP() {
  return getToken(Pcl1Parser::MUL_OP, 0);
}

tree::TerminalNode* Pcl1Parser::MulDivOpContext::DIV_OP() {
  return getToken(Pcl1Parser::DIV_OP, 0);
}


size_t Pcl1Parser::MulDivOpContext::getRuleIndex() const {
  return Pcl1Parser::RuleMulDivOp;
}


antlrcpp::Any Pcl1Parser::MulDivOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitMulDivOp(this);
  else
    return visitor->visitChildren(this);
}

Pcl1Parser::MulDivOpContext* Pcl1Parser::mulDivOp() {
  MulDivOpContext *_localctx = _tracker.createInstance<MulDivOpContext>(_ctx, getState());
  enterRule(_localctx, 42, Pcl1Parser::RuleMulDivOp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(188);
    _la = _input->LA(1);
    if (!(_la == Pcl1Parser::MUL_OP

    || _la == Pcl1Parser::DIV_OP)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddSubOpContext ------------------------------------------------------------------

Pcl1Parser::AddSubOpContext::AddSubOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl1Parser::AddSubOpContext::ADD_OP() {
  return getToken(Pcl1Parser::ADD_OP, 0);
}

tree::TerminalNode* Pcl1Parser::AddSubOpContext::SUB_OP() {
  return getToken(Pcl1Parser::SUB_OP, 0);
}


size_t Pcl1Parser::AddSubOpContext::getRuleIndex() const {
  return Pcl1Parser::RuleAddSubOp;
}


antlrcpp::Any Pcl1Parser::AddSubOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitAddSubOp(this);
  else
    return visitor->visitChildren(this);
}

Pcl1Parser::AddSubOpContext* Pcl1Parser::addSubOp() {
  AddSubOpContext *_localctx = _tracker.createInstance<AddSubOpContext>(_ctx, getState());
  enterRule(_localctx, 44, Pcl1Parser::RuleAddSubOp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(190);
    _la = _input->LA(1);
    if (!(_la == Pcl1Parser::ADD_OP

    || _la == Pcl1Parser::SUB_OP)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelOpContext ------------------------------------------------------------------

Pcl1Parser::RelOpContext::RelOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl1Parser::RelOpContext::EQ_OP() {
  return getToken(Pcl1Parser::EQ_OP, 0);
}

tree::TerminalNode* Pcl1Parser::RelOpContext::NE_OP() {
  return getToken(Pcl1Parser::NE_OP, 0);
}

tree::TerminalNode* Pcl1Parser::RelOpContext::LT_OP() {
  return getToken(Pcl1Parser::LT_OP, 0);
}

tree::TerminalNode* Pcl1Parser::RelOpContext::LE_OP() {
  return getToken(Pcl1Parser::LE_OP, 0);
}

tree::TerminalNode* Pcl1Parser::RelOpContext::GT_OP() {
  return getToken(Pcl1Parser::GT_OP, 0);
}

tree::TerminalNode* Pcl1Parser::RelOpContext::GE_OP() {
  return getToken(Pcl1Parser::GE_OP, 0);
}


size_t Pcl1Parser::RelOpContext::getRuleIndex() const {
  return Pcl1Parser::RuleRelOp;
}


antlrcpp::Any Pcl1Parser::RelOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitRelOp(this);
  else
    return visitor->visitChildren(this);
}

Pcl1Parser::RelOpContext* Pcl1Parser::relOp() {
  RelOpContext *_localctx = _tracker.createInstance<RelOpContext>(_ctx, getState());
  enterRule(_localctx, 46, Pcl1Parser::RuleRelOp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(192);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Pcl1Parser::EQ_OP)
      | (1ULL << Pcl1Parser::NE_OP)
      | (1ULL << Pcl1Parser::LT_OP)
      | (1ULL << Pcl1Parser::LE_OP)
      | (1ULL << Pcl1Parser::GT_OP)
      | (1ULL << Pcl1Parser::GE_OP))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SignedNumberContext ------------------------------------------------------------------

Pcl1Parser::SignedNumberContext::SignedNumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Pcl1Parser::SignContext* Pcl1Parser::SignedNumberContext::sign() {
  return getRuleContext<Pcl1Parser::SignContext>(0);
}

Pcl1Parser::NumberContext* Pcl1Parser::SignedNumberContext::number() {
  return getRuleContext<Pcl1Parser::NumberContext>(0);
}


size_t Pcl1Parser::SignedNumberContext::getRuleIndex() const {
  return Pcl1Parser::RuleSignedNumber;
}


antlrcpp::Any Pcl1Parser::SignedNumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitSignedNumber(this);
  else
    return visitor->visitChildren(this);
}

Pcl1Parser::SignedNumberContext* Pcl1Parser::signedNumber() {
  SignedNumberContext *_localctx = _tracker.createInstance<SignedNumberContext>(_ctx, getState());
  enterRule(_localctx, 48, Pcl1Parser::RuleSignedNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(194);
    sign();
    setState(195);
    number();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SignContext ------------------------------------------------------------------

Pcl1Parser::SignContext::SignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl1Parser::SignContext::ADD_OP() {
  return getToken(Pcl1Parser::ADD_OP, 0);
}

tree::TerminalNode* Pcl1Parser::SignContext::SUB_OP() {
  return getToken(Pcl1Parser::SUB_OP, 0);
}


size_t Pcl1Parser::SignContext::getRuleIndex() const {
  return Pcl1Parser::RuleSign;
}


antlrcpp::Any Pcl1Parser::SignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitSign(this);
  else
    return visitor->visitChildren(this);
}

Pcl1Parser::SignContext* Pcl1Parser::sign() {
  SignContext *_localctx = _tracker.createInstance<SignContext>(_ctx, getState());
  enterRule(_localctx, 50, Pcl1Parser::RuleSign);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(197);
    _la = _input->LA(1);
    if (!(_la == Pcl1Parser::ADD_OP

    || _la == Pcl1Parser::SUB_OP)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

Pcl1Parser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Pcl1Parser::NumberContext::getRuleIndex() const {
  return Pcl1Parser::RuleNumber;
}

void Pcl1Parser::NumberContext::copyFrom(NumberContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->type = ctx->type;
}

//----------------- FloatConstContext ------------------------------------------------------------------

tree::TerminalNode* Pcl1Parser::FloatConstContext::FLOAT() {
  return getToken(Pcl1Parser::FLOAT, 0);
}

Pcl1Parser::FloatConstContext::FloatConstContext(NumberContext *ctx) { copyFrom(ctx); }


antlrcpp::Any Pcl1Parser::FloatConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitFloatConst(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntegerConstContext ------------------------------------------------------------------

tree::TerminalNode* Pcl1Parser::IntegerConstContext::INTEGER() {
  return getToken(Pcl1Parser::INTEGER, 0);
}

Pcl1Parser::IntegerConstContext::IntegerConstContext(NumberContext *ctx) { copyFrom(ctx); }


antlrcpp::Any Pcl1Parser::IntegerConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitIntegerConst(this);
  else
    return visitor->visitChildren(this);
}
Pcl1Parser::NumberContext* Pcl1Parser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 52, Pcl1Parser::RuleNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(201);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Pcl1Parser::INTEGER: {
        _localctx = dynamic_cast<NumberContext *>(_tracker.createInstance<Pcl1Parser::IntegerConstContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(199);
        match(Pcl1Parser::INTEGER);
        break;
      }

      case Pcl1Parser::FLOAT: {
        _localctx = dynamic_cast<NumberContext *>(_tracker.createInstance<Pcl1Parser::FloatConstContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(200);
        match(Pcl1Parser::FLOAT);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeIDContext ------------------------------------------------------------------

Pcl1Parser::TypeIDContext::TypeIDContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl1Parser::TypeIDContext::IDENTIFIER() {
  return getToken(Pcl1Parser::IDENTIFIER, 0);
}

tree::TerminalNode* Pcl1Parser::TypeIDContext::INTEGER_TYPE() {
  return getToken(Pcl1Parser::INTEGER_TYPE, 0);
}

tree::TerminalNode* Pcl1Parser::TypeIDContext::FLOAT_TYPE() {
  return getToken(Pcl1Parser::FLOAT_TYPE, 0);
}


size_t Pcl1Parser::TypeIDContext::getRuleIndex() const {
  return Pcl1Parser::RuleTypeID;
}


antlrcpp::Any Pcl1Parser::TypeIDContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitTypeID(this);
  else
    return visitor->visitChildren(this);
}

Pcl1Parser::TypeIDContext* Pcl1Parser::typeID() {
  TypeIDContext *_localctx = _tracker.createInstance<TypeIDContext>(_ctx, getState());
  enterRule(_localctx, 54, Pcl1Parser::RuleTypeID);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(203);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Pcl1Parser::INTEGER_TYPE)
      | (1ULL << Pcl1Parser::FLOAT_TYPE)
      | (1ULL << Pcl1Parser::IDENTIFIER))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool Pcl1Parser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 20: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool Pcl1Parser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 7);
    case 1: return precpred(_ctx, 6);
    case 2: return precpred(_ctx, 5);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> Pcl1Parser::_decisionToDFA;
atn::PredictionContextCache Pcl1Parser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN Pcl1Parser::_atn;
std::vector<uint16_t> Pcl1Parser::_serializedATN;

std::vector<std::string> Pcl1Parser::_ruleNames = {
  "program", "header", "mainBlock", "block", "declarations", "declList", 
  "decl", "varList", "varId", "typeId", "compoundStmt", "stmt", "stmtList", 
  "assignmentStmt", "loop_while_stmt", "if_stmt", "printStmt", "formatString", 
  "printArg", "variable", "expr", "mulDivOp", "addSubOp", "relOp", "signedNumber", 
  "sign", "number", "typeID"
};

std::vector<std::string> Pcl1Parser::_literalNames = {
  "", "'.'", "';'", "'as'", "','", "'='", "'}'", "'{'", "'('", "')'", "", 
  "", "", "", "", "", "", "", "", "", "", "", "'int'", "'float'", "", "'*'", 
  "'/'", "'+'", "'-'", "'=='", "'<>'", "'<'", "'<='", "'>'", "'>='", "", 
  "", "", "", "", "'''"
};

std::vector<std::string> Pcl1Parser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "MAIN", "BO", "DY", "VAR", "DO", 
  "WHILE", "IF", "ELSE", "UNTIL", "PRINT", "LOOP", "END", "INTEGER_TYPE", 
  "FLOAT_TYPE", "RETURN", "MUL_OP", "DIV_OP", "ADD_OP", "SUB_OP", "EQ_OP", 
  "NE_OP", "LT_OP", "LE_OP", "GT_OP", "GE_OP", "IDENTIFIER", "INTEGER", 
  "FLOAT", "NEWLINE", "WS", "QUOTE", "STRING"
};

dfa::Vocabulary Pcl1Parser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> Pcl1Parser::_tokenNames;

Pcl1Parser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x2b, 0xd0, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 
    0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 
    0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x4e, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x51, 
    0xb, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x7, 0x9, 0x5a, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x5d, 0xb, 0x9, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x5, 0xd, 0x6d, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x72, 
    0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x75, 0xb, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x90, 0xa, 0x11, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0x96, 0xa, 0x12, 0xc, 0x12, 
    0xe, 0x12, 0x99, 0xb, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 
    0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x5, 0x16, 0xac, 0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x16, 0x3, 0x16, 0x7, 0x16, 0xba, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0xbd, 
    0xb, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 
    0x3, 0x1c, 0x5, 0x1c, 0xcc, 0xa, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
    0x2, 0x3, 0x2a, 0x1e, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 
    0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 
    0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x2, 0x6, 0x3, 0x2, 0x1b, 
    0x1c, 0x3, 0x2, 0x1d, 0x1e, 0x3, 0x2, 0x1f, 0x24, 0x4, 0x2, 0x18, 0x19, 
    0x25, 0x25, 0x2, 0xc4, 0x2, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x4, 0x3e, 0x3, 
    0x2, 0x2, 0x2, 0x6, 0x42, 0x3, 0x2, 0x2, 0x2, 0x8, 0x44, 0x3, 0x2, 0x2, 
    0x2, 0xa, 0x47, 0x3, 0x2, 0x2, 0x2, 0xc, 0x4a, 0x3, 0x2, 0x2, 0x2, 0xe, 
    0x52, 0x3, 0x2, 0x2, 0x2, 0x10, 0x56, 0x3, 0x2, 0x2, 0x2, 0x12, 0x5e, 
    0x3, 0x2, 0x2, 0x2, 0x14, 0x60, 0x3, 0x2, 0x2, 0x2, 0x16, 0x62, 0x3, 
    0x2, 0x2, 0x2, 0x18, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x6e, 0x3, 0x2, 
    0x2, 0x2, 0x1c, 0x76, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x7a, 0x3, 0x2, 0x2, 
    0x2, 0x20, 0x83, 0x3, 0x2, 0x2, 0x2, 0x22, 0x91, 0x3, 0x2, 0x2, 0x2, 
    0x24, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x26, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x28, 
    0xa1, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xab, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xbe, 
    0x3, 0x2, 0x2, 0x2, 0x2e, 0xc0, 0x3, 0x2, 0x2, 0x2, 0x30, 0xc2, 0x3, 
    0x2, 0x2, 0x2, 0x32, 0xc4, 0x3, 0x2, 0x2, 0x2, 0x34, 0xc7, 0x3, 0x2, 
    0x2, 0x2, 0x36, 0xcb, 0x3, 0x2, 0x2, 0x2, 0x38, 0xcd, 0x3, 0x2, 0x2, 
    0x2, 0x3a, 0x3b, 0x5, 0x4, 0x3, 0x2, 0x3b, 0x3c, 0x5, 0x6, 0x4, 0x2, 
    0x3c, 0x3d, 0x7, 0x3, 0x2, 0x2, 0x3d, 0x3, 0x3, 0x2, 0x2, 0x2, 0x3e, 
    0x3f, 0x7, 0xc, 0x2, 0x2, 0x3f, 0x40, 0x7, 0x25, 0x2, 0x2, 0x40, 0x41, 
    0x7, 0x4, 0x2, 0x2, 0x41, 0x5, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x5, 
    0x8, 0x5, 0x2, 0x43, 0x7, 0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 0x5, 0xa, 
    0x6, 0x2, 0x45, 0x46, 0x5, 0x16, 0xc, 0x2, 0x46, 0x9, 0x3, 0x2, 0x2, 
    0x2, 0x47, 0x48, 0x5, 0xc, 0x7, 0x2, 0x48, 0x49, 0x7, 0x4, 0x2, 0x2, 
    0x49, 0xb, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4f, 0x5, 0xe, 0x8, 0x2, 0x4b, 
    0x4c, 0x7, 0x4, 0x2, 0x2, 0x4c, 0x4e, 0x5, 0xe, 0x8, 0x2, 0x4d, 0x4b, 
    0x3, 0x2, 0x2, 0x2, 0x4e, 0x51, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x4d, 0x3, 
    0x2, 0x2, 0x2, 0x4f, 0x50, 0x3, 0x2, 0x2, 0x2, 0x50, 0xd, 0x3, 0x2, 
    0x2, 0x2, 0x51, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 0x5, 0x10, 0x9, 
    0x2, 0x53, 0x54, 0x7, 0x5, 0x2, 0x2, 0x54, 0x55, 0x5, 0x14, 0xb, 0x2, 
    0x55, 0xf, 0x3, 0x2, 0x2, 0x2, 0x56, 0x5b, 0x5, 0x12, 0xa, 0x2, 0x57, 
    0x58, 0x7, 0x6, 0x2, 0x2, 0x58, 0x5a, 0x5, 0x12, 0xa, 0x2, 0x59, 0x57, 
    0x3, 0x2, 0x2, 0x2, 0x5a, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x59, 0x3, 
    0x2, 0x2, 0x2, 0x5b, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x11, 0x3, 0x2, 
    0x2, 0x2, 0x5d, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 0x7, 0x25, 0x2, 
    0x2, 0x5f, 0x13, 0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 0x7, 0x25, 0x2, 0x2, 
    0x61, 0x15, 0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0x7, 0xd, 0x2, 0x2, 0x63, 
    0x64, 0x5, 0x1a, 0xe, 0x2, 0x64, 0x65, 0x7, 0xe, 0x2, 0x2, 0x65, 0x17, 
    0x3, 0x2, 0x2, 0x2, 0x66, 0x6d, 0x5, 0x16, 0xc, 0x2, 0x67, 0x6d, 0x5, 
    0x1c, 0xf, 0x2, 0x68, 0x6d, 0x5, 0x1e, 0x10, 0x2, 0x69, 0x6d, 0x5, 0x20, 
    0x11, 0x2, 0x6a, 0x6d, 0x5, 0x22, 0x12, 0x2, 0x6b, 0x6d, 0x3, 0x2, 0x2, 
    0x2, 0x6c, 0x66, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x67, 0x3, 0x2, 0x2, 0x2, 
    0x6c, 0x68, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x69, 0x3, 0x2, 0x2, 0x2, 0x6c, 
    0x6a, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x19, 
    0x3, 0x2, 0x2, 0x2, 0x6e, 0x73, 0x5, 0x18, 0xd, 0x2, 0x6f, 0x70, 0x7, 
    0x4, 0x2, 0x2, 0x70, 0x72, 0x5, 0x18, 0xd, 0x2, 0x71, 0x6f, 0x3, 0x2, 
    0x2, 0x2, 0x72, 0x75, 0x3, 0x2, 0x2, 0x2, 0x73, 0x71, 0x3, 0x2, 0x2, 
    0x2, 0x73, 0x74, 0x3, 0x2, 0x2, 0x2, 0x74, 0x1b, 0x3, 0x2, 0x2, 0x2, 
    0x75, 0x73, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x5, 0x28, 0x15, 0x2, 0x77, 
    0x78, 0x7, 0x7, 0x2, 0x2, 0x78, 0x79, 0x5, 0x2a, 0x16, 0x2, 0x79, 0x1d, 
    0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 0x7, 0x16, 0x2, 0x2, 0x7b, 0x7c, 0x7, 
    0x8, 0x2, 0x2, 0x7c, 0x7d, 0x5, 0x1a, 0xe, 0x2, 0x7d, 0x7e, 0x7, 0x9, 
    0x2, 0x2, 0x7e, 0x7f, 0x7, 0x11, 0x2, 0x2, 0x7f, 0x80, 0x7, 0xa, 0x2, 
    0x2, 0x80, 0x81, 0x5, 0x2a, 0x16, 0x2, 0x81, 0x82, 0x7, 0xb, 0x2, 0x2, 
    0x82, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 0x7, 0x12, 0x2, 0x2, 0x84, 
    0x85, 0x7, 0xa, 0x2, 0x2, 0x85, 0x86, 0x5, 0x2a, 0x16, 0x2, 0x86, 0x87, 
    0x7, 0xb, 0x2, 0x2, 0x87, 0x88, 0x7, 0x8, 0x2, 0x2, 0x88, 0x89, 0x5, 
    0x1a, 0xe, 0x2, 0x89, 0x8f, 0x7, 0x9, 0x2, 0x2, 0x8a, 0x8b, 0x7, 0x13, 
    0x2, 0x2, 0x8b, 0x8c, 0x7, 0x8, 0x2, 0x2, 0x8c, 0x8d, 0x5, 0x1a, 0xe, 
    0x2, 0x8d, 0x8e, 0x7, 0x9, 0x2, 0x2, 0x8e, 0x90, 0x3, 0x2, 0x2, 0x2, 
    0x8f, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x90, 0x3, 0x2, 0x2, 0x2, 0x90, 
    0x21, 0x3, 0x2, 0x2, 0x2, 0x91, 0x92, 0x7, 0x15, 0x2, 0x2, 0x92, 0x93, 
    0x7, 0xa, 0x2, 0x2, 0x93, 0x97, 0x5, 0x24, 0x13, 0x2, 0x94, 0x96, 0x5, 
    0x26, 0x14, 0x2, 0x95, 0x94, 0x3, 0x2, 0x2, 0x2, 0x96, 0x99, 0x3, 0x2, 
    0x2, 0x2, 0x97, 0x95, 0x3, 0x2, 0x2, 0x2, 0x97, 0x98, 0x3, 0x2, 0x2, 
    0x2, 0x98, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x99, 0x97, 0x3, 0x2, 0x2, 0x2, 
    0x9a, 0x9b, 0x7, 0xb, 0x2, 0x2, 0x9b, 0x23, 0x3, 0x2, 0x2, 0x2, 0x9c, 
    0x9d, 0x7, 0x2b, 0x2, 0x2, 0x9d, 0x25, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9f, 
    0x7, 0x6, 0x2, 0x2, 0x9f, 0xa0, 0x5, 0x2a, 0x16, 0x2, 0xa0, 0x27, 0x3, 
    0x2, 0x2, 0x2, 0xa1, 0xa2, 0x7, 0x25, 0x2, 0x2, 0xa2, 0x29, 0x3, 0x2, 
    0x2, 0x2, 0xa3, 0xa4, 0x8, 0x16, 0x1, 0x2, 0xa4, 0xac, 0x5, 0x36, 0x1c, 
    0x2, 0xa5, 0xac, 0x5, 0x32, 0x1a, 0x2, 0xa6, 0xac, 0x5, 0x28, 0x15, 
    0x2, 0xa7, 0xa8, 0x7, 0xa, 0x2, 0x2, 0xa8, 0xa9, 0x5, 0x2a, 0x16, 0x2, 
    0xa9, 0xaa, 0x7, 0xb, 0x2, 0x2, 0xaa, 0xac, 0x3, 0x2, 0x2, 0x2, 0xab, 
    0xa3, 0x3, 0x2, 0x2, 0x2, 0xab, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xab, 0xa6, 
    0x3, 0x2, 0x2, 0x2, 0xab, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xac, 0xbb, 0x3, 
    0x2, 0x2, 0x2, 0xad, 0xae, 0xc, 0x9, 0x2, 0x2, 0xae, 0xaf, 0x5, 0x2c, 
    0x17, 0x2, 0xaf, 0xb0, 0x5, 0x2a, 0x16, 0xa, 0xb0, 0xba, 0x3, 0x2, 0x2, 
    0x2, 0xb1, 0xb2, 0xc, 0x8, 0x2, 0x2, 0xb2, 0xb3, 0x5, 0x2e, 0x18, 0x2, 
    0xb3, 0xb4, 0x5, 0x2a, 0x16, 0x9, 0xb4, 0xba, 0x3, 0x2, 0x2, 0x2, 0xb5, 
    0xb6, 0xc, 0x7, 0x2, 0x2, 0xb6, 0xb7, 0x5, 0x30, 0x19, 0x2, 0xb7, 0xb8, 
    0x5, 0x2a, 0x16, 0x8, 0xb8, 0xba, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xad, 0x3, 
    0x2, 0x2, 0x2, 0xb9, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xb5, 0x3, 0x2, 
    0x2, 0x2, 0xba, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xb9, 0x3, 0x2, 0x2, 
    0x2, 0xbb, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbc, 0x2b, 0x3, 0x2, 0x2, 0x2, 
    0xbd, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbf, 0x9, 0x2, 0x2, 0x2, 0xbf, 
    0x2d, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc1, 0x9, 0x3, 0x2, 0x2, 0xc1, 0x2f, 
    0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 0x9, 0x4, 0x2, 0x2, 0xc3, 0x31, 0x3, 
    0x2, 0x2, 0x2, 0xc4, 0xc5, 0x5, 0x34, 0x1b, 0x2, 0xc5, 0xc6, 0x5, 0x36, 
    0x1c, 0x2, 0xc6, 0x33, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 0x9, 0x3, 0x2, 
    0x2, 0xc8, 0x35, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xcc, 0x7, 0x26, 0x2, 0x2, 
    0xca, 0xcc, 0x7, 0x27, 0x2, 0x2, 0xcb, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xcb, 
    0xca, 0x3, 0x2, 0x2, 0x2, 0xcc, 0x37, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 
    0x9, 0x5, 0x2, 0x2, 0xce, 0x39, 0x3, 0x2, 0x2, 0x2, 0xc, 0x4f, 0x5b, 
    0x6c, 0x73, 0x8f, 0x97, 0xab, 0xb9, 0xbb, 0xcb, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

Pcl1Parser::Initializer Pcl1Parser::_init;
