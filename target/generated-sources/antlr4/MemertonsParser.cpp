
	#include "wci/intermediate/TypeSpec.h"
	using namespace wci::intermediate;


// Generated from Memertons.g4 by ANTLR 4.7.2


#include "MemertonsVisitor.h"

#include "MemertonsParser.h"


using namespace antlrcpp;
using namespace antlr4;

MemertonsParser::MemertonsParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

MemertonsParser::~MemertonsParser() {
  delete _interpreter;
}

std::string MemertonsParser::getGrammarFileName() const {
  return "Memertons.g4";
}

const std::vector<std::string>& MemertonsParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& MemertonsParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

MemertonsParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MemertonsParser::HeaderContext* MemertonsParser::ProgramContext::header() {
  return getRuleContext<MemertonsParser::HeaderContext>(0);
}

MemertonsParser::MainBlockContext* MemertonsParser::ProgramContext::mainBlock() {
  return getRuleContext<MemertonsParser::MainBlockContext>(0);
}


size_t MemertonsParser::ProgramContext::getRuleIndex() const {
  return MemertonsParser::RuleProgram;
}


antlrcpp::Any MemertonsParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MemertonsVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

MemertonsParser::ProgramContext* MemertonsParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, MemertonsParser::RuleProgram);

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
    match(MemertonsParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HeaderContext ------------------------------------------------------------------

MemertonsParser::HeaderContext::HeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MemertonsParser::HeaderContext::MAIN() {
  return getToken(MemertonsParser::MAIN, 0);
}

tree::TerminalNode* MemertonsParser::HeaderContext::IDENTIFIER() {
  return getToken(MemertonsParser::IDENTIFIER, 0);
}


size_t MemertonsParser::HeaderContext::getRuleIndex() const {
  return MemertonsParser::RuleHeader;
}


antlrcpp::Any MemertonsParser::HeaderContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MemertonsVisitor*>(visitor))
    return parserVisitor->visitHeader(this);
  else
    return visitor->visitChildren(this);
}

MemertonsParser::HeaderContext* MemertonsParser::header() {
  HeaderContext *_localctx = _tracker.createInstance<HeaderContext>(_ctx, getState());
  enterRule(_localctx, 2, MemertonsParser::RuleHeader);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(60);
    match(MemertonsParser::MAIN);
    setState(61);
    match(MemertonsParser::IDENTIFIER);
    setState(62);
    match(MemertonsParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MainBlockContext ------------------------------------------------------------------

MemertonsParser::MainBlockContext::MainBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MemertonsParser::BlockContext* MemertonsParser::MainBlockContext::block() {
  return getRuleContext<MemertonsParser::BlockContext>(0);
}


size_t MemertonsParser::MainBlockContext::getRuleIndex() const {
  return MemertonsParser::RuleMainBlock;
}


antlrcpp::Any MemertonsParser::MainBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MemertonsVisitor*>(visitor))
    return parserVisitor->visitMainBlock(this);
  else
    return visitor->visitChildren(this);
}

MemertonsParser::MainBlockContext* MemertonsParser::mainBlock() {
  MainBlockContext *_localctx = _tracker.createInstance<MainBlockContext>(_ctx, getState());
  enterRule(_localctx, 4, MemertonsParser::RuleMainBlock);

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

MemertonsParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MemertonsParser::DeclarationsContext* MemertonsParser::BlockContext::declarations() {
  return getRuleContext<MemertonsParser::DeclarationsContext>(0);
}

MemertonsParser::CompoundStmtContext* MemertonsParser::BlockContext::compoundStmt() {
  return getRuleContext<MemertonsParser::CompoundStmtContext>(0);
}


size_t MemertonsParser::BlockContext::getRuleIndex() const {
  return MemertonsParser::RuleBlock;
}


antlrcpp::Any MemertonsParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MemertonsVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

MemertonsParser::BlockContext* MemertonsParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 6, MemertonsParser::RuleBlock);

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

MemertonsParser::DeclarationsContext::DeclarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MemertonsParser::DeclListContext* MemertonsParser::DeclarationsContext::declList() {
  return getRuleContext<MemertonsParser::DeclListContext>(0);
}


size_t MemertonsParser::DeclarationsContext::getRuleIndex() const {
  return MemertonsParser::RuleDeclarations;
}


antlrcpp::Any MemertonsParser::DeclarationsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MemertonsVisitor*>(visitor))
    return parserVisitor->visitDeclarations(this);
  else
    return visitor->visitChildren(this);
}

MemertonsParser::DeclarationsContext* MemertonsParser::declarations() {
  DeclarationsContext *_localctx = _tracker.createInstance<DeclarationsContext>(_ctx, getState());
  enterRule(_localctx, 8, MemertonsParser::RuleDeclarations);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(69);
    declList();
    setState(70);
    match(MemertonsParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclListContext ------------------------------------------------------------------

MemertonsParser::DeclListContext::DeclListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MemertonsParser::DeclContext *> MemertonsParser::DeclListContext::decl() {
  return getRuleContexts<MemertonsParser::DeclContext>();
}

MemertonsParser::DeclContext* MemertonsParser::DeclListContext::decl(size_t i) {
  return getRuleContext<MemertonsParser::DeclContext>(i);
}


size_t MemertonsParser::DeclListContext::getRuleIndex() const {
  return MemertonsParser::RuleDeclList;
}


antlrcpp::Any MemertonsParser::DeclListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MemertonsVisitor*>(visitor))
    return parserVisitor->visitDeclList(this);
  else
    return visitor->visitChildren(this);
}

MemertonsParser::DeclListContext* MemertonsParser::declList() {
  DeclListContext *_localctx = _tracker.createInstance<DeclListContext>(_ctx, getState());
  enterRule(_localctx, 10, MemertonsParser::RuleDeclList);

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
        match(MemertonsParser::T__1);
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

MemertonsParser::DeclContext::DeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MemertonsParser::VarListContext* MemertonsParser::DeclContext::varList() {
  return getRuleContext<MemertonsParser::VarListContext>(0);
}

MemertonsParser::TypeIdContext* MemertonsParser::DeclContext::typeId() {
  return getRuleContext<MemertonsParser::TypeIdContext>(0);
}


size_t MemertonsParser::DeclContext::getRuleIndex() const {
  return MemertonsParser::RuleDecl;
}


antlrcpp::Any MemertonsParser::DeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MemertonsVisitor*>(visitor))
    return parserVisitor->visitDecl(this);
  else
    return visitor->visitChildren(this);
}

MemertonsParser::DeclContext* MemertonsParser::decl() {
  DeclContext *_localctx = _tracker.createInstance<DeclContext>(_ctx, getState());
  enterRule(_localctx, 12, MemertonsParser::RuleDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(80);
    varList();
    setState(81);
    match(MemertonsParser::T__2);
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

MemertonsParser::VarListContext::VarListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MemertonsParser::VarIdContext *> MemertonsParser::VarListContext::varId() {
  return getRuleContexts<MemertonsParser::VarIdContext>();
}

MemertonsParser::VarIdContext* MemertonsParser::VarListContext::varId(size_t i) {
  return getRuleContext<MemertonsParser::VarIdContext>(i);
}


size_t MemertonsParser::VarListContext::getRuleIndex() const {
  return MemertonsParser::RuleVarList;
}


antlrcpp::Any MemertonsParser::VarListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MemertonsVisitor*>(visitor))
    return parserVisitor->visitVarList(this);
  else
    return visitor->visitChildren(this);
}

MemertonsParser::VarListContext* MemertonsParser::varList() {
  VarListContext *_localctx = _tracker.createInstance<VarListContext>(_ctx, getState());
  enterRule(_localctx, 14, MemertonsParser::RuleVarList);
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
    while (_la == MemertonsParser::T__3) {
      setState(85);
      match(MemertonsParser::T__3);
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

MemertonsParser::VarIdContext::VarIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MemertonsParser::VarIdContext::IDENTIFIER() {
  return getToken(MemertonsParser::IDENTIFIER, 0);
}


size_t MemertonsParser::VarIdContext::getRuleIndex() const {
  return MemertonsParser::RuleVarId;
}


antlrcpp::Any MemertonsParser::VarIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MemertonsVisitor*>(visitor))
    return parserVisitor->visitVarId(this);
  else
    return visitor->visitChildren(this);
}

MemertonsParser::VarIdContext* MemertonsParser::varId() {
  VarIdContext *_localctx = _tracker.createInstance<VarIdContext>(_ctx, getState());
  enterRule(_localctx, 16, MemertonsParser::RuleVarId);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(92);
    match(MemertonsParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeIdContext ------------------------------------------------------------------

MemertonsParser::TypeIdContext::TypeIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MemertonsParser::TypeIdContext::IDENTIFIER() {
  return getToken(MemertonsParser::IDENTIFIER, 0);
}


size_t MemertonsParser::TypeIdContext::getRuleIndex() const {
  return MemertonsParser::RuleTypeId;
}


antlrcpp::Any MemertonsParser::TypeIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MemertonsVisitor*>(visitor))
    return parserVisitor->visitTypeId(this);
  else
    return visitor->visitChildren(this);
}

MemertonsParser::TypeIdContext* MemertonsParser::typeId() {
  TypeIdContext *_localctx = _tracker.createInstance<TypeIdContext>(_ctx, getState());
  enterRule(_localctx, 18, MemertonsParser::RuleTypeId);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(94);
    match(MemertonsParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompoundStmtContext ------------------------------------------------------------------

MemertonsParser::CompoundStmtContext::CompoundStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MemertonsParser::CompoundStmtContext::BO() {
  return getToken(MemertonsParser::BO, 0);
}

MemertonsParser::StmtListContext* MemertonsParser::CompoundStmtContext::stmtList() {
  return getRuleContext<MemertonsParser::StmtListContext>(0);
}

tree::TerminalNode* MemertonsParser::CompoundStmtContext::DY() {
  return getToken(MemertonsParser::DY, 0);
}


size_t MemertonsParser::CompoundStmtContext::getRuleIndex() const {
  return MemertonsParser::RuleCompoundStmt;
}


antlrcpp::Any MemertonsParser::CompoundStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MemertonsVisitor*>(visitor))
    return parserVisitor->visitCompoundStmt(this);
  else
    return visitor->visitChildren(this);
}

MemertonsParser::CompoundStmtContext* MemertonsParser::compoundStmt() {
  CompoundStmtContext *_localctx = _tracker.createInstance<CompoundStmtContext>(_ctx, getState());
  enterRule(_localctx, 20, MemertonsParser::RuleCompoundStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(96);
    match(MemertonsParser::BO);
    setState(97);
    stmtList();
    setState(98);
    match(MemertonsParser::DY);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

MemertonsParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MemertonsParser::CompoundStmtContext* MemertonsParser::StmtContext::compoundStmt() {
  return getRuleContext<MemertonsParser::CompoundStmtContext>(0);
}

MemertonsParser::AssignmentStmtContext* MemertonsParser::StmtContext::assignmentStmt() {
  return getRuleContext<MemertonsParser::AssignmentStmtContext>(0);
}

MemertonsParser::Loop_while_stmtContext* MemertonsParser::StmtContext::loop_while_stmt() {
  return getRuleContext<MemertonsParser::Loop_while_stmtContext>(0);
}

MemertonsParser::If_stmtContext* MemertonsParser::StmtContext::if_stmt() {
  return getRuleContext<MemertonsParser::If_stmtContext>(0);
}

MemertonsParser::PrintStmtContext* MemertonsParser::StmtContext::printStmt() {
  return getRuleContext<MemertonsParser::PrintStmtContext>(0);
}


size_t MemertonsParser::StmtContext::getRuleIndex() const {
  return MemertonsParser::RuleStmt;
}


antlrcpp::Any MemertonsParser::StmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MemertonsVisitor*>(visitor))
    return parserVisitor->visitStmt(this);
  else
    return visitor->visitChildren(this);
}

MemertonsParser::StmtContext* MemertonsParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 22, MemertonsParser::RuleStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(106);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MemertonsParser::BO: {
        enterOuterAlt(_localctx, 1);
        setState(100);
        compoundStmt();
        break;
      }

      case MemertonsParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(101);
        assignmentStmt();
        break;
      }

      case MemertonsParser::LOOP: {
        enterOuterAlt(_localctx, 3);
        setState(102);
        loop_while_stmt();
        break;
      }

      case MemertonsParser::IF: {
        enterOuterAlt(_localctx, 4);
        setState(103);
        if_stmt();
        break;
      }

      case MemertonsParser::PRINT: {
        enterOuterAlt(_localctx, 5);
        setState(104);
        printStmt();
        break;
      }

      case MemertonsParser::T__1:
      case MemertonsParser::T__6:
      case MemertonsParser::DY: {
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

MemertonsParser::StmtListContext::StmtListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MemertonsParser::StmtContext *> MemertonsParser::StmtListContext::stmt() {
  return getRuleContexts<MemertonsParser::StmtContext>();
}

MemertonsParser::StmtContext* MemertonsParser::StmtListContext::stmt(size_t i) {
  return getRuleContext<MemertonsParser::StmtContext>(i);
}


size_t MemertonsParser::StmtListContext::getRuleIndex() const {
  return MemertonsParser::RuleStmtList;
}


antlrcpp::Any MemertonsParser::StmtListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MemertonsVisitor*>(visitor))
    return parserVisitor->visitStmtList(this);
  else
    return visitor->visitChildren(this);
}

MemertonsParser::StmtListContext* MemertonsParser::stmtList() {
  StmtListContext *_localctx = _tracker.createInstance<StmtListContext>(_ctx, getState());
  enterRule(_localctx, 24, MemertonsParser::RuleStmtList);
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
    while (_la == MemertonsParser::T__1) {
      setState(109);
      match(MemertonsParser::T__1);
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

MemertonsParser::AssignmentStmtContext::AssignmentStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MemertonsParser::VariableContext* MemertonsParser::AssignmentStmtContext::variable() {
  return getRuleContext<MemertonsParser::VariableContext>(0);
}

MemertonsParser::ExprContext* MemertonsParser::AssignmentStmtContext::expr() {
  return getRuleContext<MemertonsParser::ExprContext>(0);
}


size_t MemertonsParser::AssignmentStmtContext::getRuleIndex() const {
  return MemertonsParser::RuleAssignmentStmt;
}


antlrcpp::Any MemertonsParser::AssignmentStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MemertonsVisitor*>(visitor))
    return parserVisitor->visitAssignmentStmt(this);
  else
    return visitor->visitChildren(this);
}

MemertonsParser::AssignmentStmtContext* MemertonsParser::assignmentStmt() {
  AssignmentStmtContext *_localctx = _tracker.createInstance<AssignmentStmtContext>(_ctx, getState());
  enterRule(_localctx, 26, MemertonsParser::RuleAssignmentStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(116);
    variable();
    setState(117);
    match(MemertonsParser::T__4);
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

MemertonsParser::Loop_while_stmtContext::Loop_while_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MemertonsParser::Loop_while_stmtContext::LOOP() {
  return getToken(MemertonsParser::LOOP, 0);
}

MemertonsParser::StmtListContext* MemertonsParser::Loop_while_stmtContext::stmtList() {
  return getRuleContext<MemertonsParser::StmtListContext>(0);
}

tree::TerminalNode* MemertonsParser::Loop_while_stmtContext::WHILE() {
  return getToken(MemertonsParser::WHILE, 0);
}

MemertonsParser::ExprContext* MemertonsParser::Loop_while_stmtContext::expr() {
  return getRuleContext<MemertonsParser::ExprContext>(0);
}


size_t MemertonsParser::Loop_while_stmtContext::getRuleIndex() const {
  return MemertonsParser::RuleLoop_while_stmt;
}


antlrcpp::Any MemertonsParser::Loop_while_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MemertonsVisitor*>(visitor))
    return parserVisitor->visitLoop_while_stmt(this);
  else
    return visitor->visitChildren(this);
}

MemertonsParser::Loop_while_stmtContext* MemertonsParser::loop_while_stmt() {
  Loop_while_stmtContext *_localctx = _tracker.createInstance<Loop_while_stmtContext>(_ctx, getState());
  enterRule(_localctx, 28, MemertonsParser::RuleLoop_while_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(120);
    match(MemertonsParser::LOOP);
    setState(121);
    match(MemertonsParser::T__5);
    setState(122);
    stmtList();
    setState(123);
    match(MemertonsParser::T__6);
    setState(124);
    match(MemertonsParser::WHILE);
    setState(125);
    match(MemertonsParser::T__7);
    setState(126);
    expr(0);
    setState(127);
    match(MemertonsParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_stmtContext ------------------------------------------------------------------

MemertonsParser::If_stmtContext::If_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MemertonsParser::If_stmtContext::IF() {
  return getToken(MemertonsParser::IF, 0);
}

MemertonsParser::ExprContext* MemertonsParser::If_stmtContext::expr() {
  return getRuleContext<MemertonsParser::ExprContext>(0);
}

std::vector<MemertonsParser::StmtListContext *> MemertonsParser::If_stmtContext::stmtList() {
  return getRuleContexts<MemertonsParser::StmtListContext>();
}

MemertonsParser::StmtListContext* MemertonsParser::If_stmtContext::stmtList(size_t i) {
  return getRuleContext<MemertonsParser::StmtListContext>(i);
}

tree::TerminalNode* MemertonsParser::If_stmtContext::ELSE() {
  return getToken(MemertonsParser::ELSE, 0);
}


size_t MemertonsParser::If_stmtContext::getRuleIndex() const {
  return MemertonsParser::RuleIf_stmt;
}


antlrcpp::Any MemertonsParser::If_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MemertonsVisitor*>(visitor))
    return parserVisitor->visitIf_stmt(this);
  else
    return visitor->visitChildren(this);
}

MemertonsParser::If_stmtContext* MemertonsParser::if_stmt() {
  If_stmtContext *_localctx = _tracker.createInstance<If_stmtContext>(_ctx, getState());
  enterRule(_localctx, 30, MemertonsParser::RuleIf_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(129);
    match(MemertonsParser::IF);
    setState(130);
    match(MemertonsParser::T__7);
    setState(131);
    expr(0);
    setState(132);
    match(MemertonsParser::T__8);
    setState(133);
    match(MemertonsParser::T__5);

    setState(134);
    stmtList();
    setState(135);
    match(MemertonsParser::T__6);
    setState(141);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MemertonsParser::ELSE) {
      setState(136);
      match(MemertonsParser::ELSE);
      setState(137);
      match(MemertonsParser::T__5);
      setState(138);
      stmtList();
      setState(139);
      match(MemertonsParser::T__6);
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

MemertonsParser::PrintStmtContext::PrintStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MemertonsParser::PrintStmtContext::PRINT() {
  return getToken(MemertonsParser::PRINT, 0);
}

MemertonsParser::FormatStringContext* MemertonsParser::PrintStmtContext::formatString() {
  return getRuleContext<MemertonsParser::FormatStringContext>(0);
}

std::vector<MemertonsParser::PrintArgContext *> MemertonsParser::PrintStmtContext::printArg() {
  return getRuleContexts<MemertonsParser::PrintArgContext>();
}

MemertonsParser::PrintArgContext* MemertonsParser::PrintStmtContext::printArg(size_t i) {
  return getRuleContext<MemertonsParser::PrintArgContext>(i);
}


size_t MemertonsParser::PrintStmtContext::getRuleIndex() const {
  return MemertonsParser::RulePrintStmt;
}


antlrcpp::Any MemertonsParser::PrintStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MemertonsVisitor*>(visitor))
    return parserVisitor->visitPrintStmt(this);
  else
    return visitor->visitChildren(this);
}

MemertonsParser::PrintStmtContext* MemertonsParser::printStmt() {
  PrintStmtContext *_localctx = _tracker.createInstance<PrintStmtContext>(_ctx, getState());
  enterRule(_localctx, 32, MemertonsParser::RulePrintStmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(143);
    match(MemertonsParser::PRINT);
    setState(144);
    match(MemertonsParser::T__7);
    setState(145);
    formatString();
    setState(149);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MemertonsParser::T__3) {
      setState(146);
      printArg();
      setState(151);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(152);
    match(MemertonsParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormatStringContext ------------------------------------------------------------------

MemertonsParser::FormatStringContext::FormatStringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MemertonsParser::FormatStringContext::STRING() {
  return getToken(MemertonsParser::STRING, 0);
}


size_t MemertonsParser::FormatStringContext::getRuleIndex() const {
  return MemertonsParser::RuleFormatString;
}


antlrcpp::Any MemertonsParser::FormatStringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MemertonsVisitor*>(visitor))
    return parserVisitor->visitFormatString(this);
  else
    return visitor->visitChildren(this);
}

MemertonsParser::FormatStringContext* MemertonsParser::formatString() {
  FormatStringContext *_localctx = _tracker.createInstance<FormatStringContext>(_ctx, getState());
  enterRule(_localctx, 34, MemertonsParser::RuleFormatString);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(154);
    match(MemertonsParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintArgContext ------------------------------------------------------------------

MemertonsParser::PrintArgContext::PrintArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MemertonsParser::ExprContext* MemertonsParser::PrintArgContext::expr() {
  return getRuleContext<MemertonsParser::ExprContext>(0);
}


size_t MemertonsParser::PrintArgContext::getRuleIndex() const {
  return MemertonsParser::RulePrintArg;
}


antlrcpp::Any MemertonsParser::PrintArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MemertonsVisitor*>(visitor))
    return parserVisitor->visitPrintArg(this);
  else
    return visitor->visitChildren(this);
}

MemertonsParser::PrintArgContext* MemertonsParser::printArg() {
  PrintArgContext *_localctx = _tracker.createInstance<PrintArgContext>(_ctx, getState());
  enterRule(_localctx, 36, MemertonsParser::RulePrintArg);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(156);
    match(MemertonsParser::T__3);
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

MemertonsParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MemertonsParser::VariableContext::IDENTIFIER() {
  return getToken(MemertonsParser::IDENTIFIER, 0);
}


size_t MemertonsParser::VariableContext::getRuleIndex() const {
  return MemertonsParser::RuleVariable;
}


antlrcpp::Any MemertonsParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MemertonsVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

MemertonsParser::VariableContext* MemertonsParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 38, MemertonsParser::RuleVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(159);
    match(MemertonsParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

MemertonsParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MemertonsParser::ExprContext::getRuleIndex() const {
  return MemertonsParser::RuleExpr;
}

void MemertonsParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->type = ctx->type;
}

//----------------- VariableExprContext ------------------------------------------------------------------

MemertonsParser::VariableContext* MemertonsParser::VariableExprContext::variable() {
  return getRuleContext<MemertonsParser::VariableContext>(0);
}

MemertonsParser::VariableExprContext::VariableExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MemertonsParser::VariableExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MemertonsVisitor*>(visitor))
    return parserVisitor->visitVariableExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddSubExprContext ------------------------------------------------------------------

std::vector<MemertonsParser::ExprContext *> MemertonsParser::AddSubExprContext::expr() {
  return getRuleContexts<MemertonsParser::ExprContext>();
}

MemertonsParser::ExprContext* MemertonsParser::AddSubExprContext::expr(size_t i) {
  return getRuleContext<MemertonsParser::ExprContext>(i);
}

MemertonsParser::AddSubOpContext* MemertonsParser::AddSubExprContext::addSubOp() {
  return getRuleContext<MemertonsParser::AddSubOpContext>(0);
}

MemertonsParser::AddSubExprContext::AddSubExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MemertonsParser::AddSubExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MemertonsVisitor*>(visitor))
    return parserVisitor->visitAddSubExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RelOpExprContext ------------------------------------------------------------------

std::vector<MemertonsParser::ExprContext *> MemertonsParser::RelOpExprContext::expr() {
  return getRuleContexts<MemertonsParser::ExprContext>();
}

MemertonsParser::ExprContext* MemertonsParser::RelOpExprContext::expr(size_t i) {
  return getRuleContext<MemertonsParser::ExprContext>(i);
}

MemertonsParser::RelOpContext* MemertonsParser::RelOpExprContext::relOp() {
  return getRuleContext<MemertonsParser::RelOpContext>(0);
}

MemertonsParser::RelOpExprContext::RelOpExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MemertonsParser::RelOpExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MemertonsVisitor*>(visitor))
    return parserVisitor->visitRelOpExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnsignedNumberExprContext ------------------------------------------------------------------

MemertonsParser::NumberContext* MemertonsParser::UnsignedNumberExprContext::number() {
  return getRuleContext<MemertonsParser::NumberContext>(0);
}

MemertonsParser::UnsignedNumberExprContext::UnsignedNumberExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MemertonsParser::UnsignedNumberExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MemertonsVisitor*>(visitor))
    return parserVisitor->visitUnsignedNumberExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulDivExprContext ------------------------------------------------------------------

std::vector<MemertonsParser::ExprContext *> MemertonsParser::MulDivExprContext::expr() {
  return getRuleContexts<MemertonsParser::ExprContext>();
}

MemertonsParser::ExprContext* MemertonsParser::MulDivExprContext::expr(size_t i) {
  return getRuleContext<MemertonsParser::ExprContext>(i);
}

MemertonsParser::MulDivOpContext* MemertonsParser::MulDivExprContext::mulDivOp() {
  return getRuleContext<MemertonsParser::MulDivOpContext>(0);
}

MemertonsParser::MulDivExprContext::MulDivExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MemertonsParser::MulDivExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MemertonsVisitor*>(visitor))
    return parserVisitor->visitMulDivExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenExprContext ------------------------------------------------------------------

MemertonsParser::ExprContext* MemertonsParser::ParenExprContext::expr() {
  return getRuleContext<MemertonsParser::ExprContext>(0);
}

MemertonsParser::ParenExprContext::ParenExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MemertonsParser::ParenExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MemertonsVisitor*>(visitor))
    return parserVisitor->visitParenExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SignedNumberExprContext ------------------------------------------------------------------

MemertonsParser::SignedNumberContext* MemertonsParser::SignedNumberExprContext::signedNumber() {
  return getRuleContext<MemertonsParser::SignedNumberContext>(0);
}

MemertonsParser::SignedNumberExprContext::SignedNumberExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MemertonsParser::SignedNumberExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MemertonsVisitor*>(visitor))
    return parserVisitor->visitSignedNumberExpr(this);
  else
    return visitor->visitChildren(this);
}

MemertonsParser::ExprContext* MemertonsParser::expr() {
   return expr(0);
}

MemertonsParser::ExprContext* MemertonsParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MemertonsParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  MemertonsParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 40;
  enterRecursionRule(_localctx, 40, MemertonsParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(169);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MemertonsParser::INTEGER:
      case MemertonsParser::FLOAT: {
        _localctx = _tracker.createInstance<UnsignedNumberExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(162);
        number();
        break;
      }

      case MemertonsParser::ADD_OP:
      case MemertonsParser::SUB_OP: {
        _localctx = _tracker.createInstance<SignedNumberExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(163);
        signedNumber();
        break;
      }

      case MemertonsParser::IDENTIFIER: {
        _localctx = _tracker.createInstance<VariableExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(164);
        variable();
        break;
      }

      case MemertonsParser::T__7: {
        _localctx = _tracker.createInstance<ParenExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(165);
        match(MemertonsParser::T__7);
        setState(166);
        expr(0);
        setState(167);
        match(MemertonsParser::T__8);
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

MemertonsParser::MulDivOpContext::MulDivOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MemertonsParser::MulDivOpContext::MUL_OP() {
  return getToken(MemertonsParser::MUL_OP, 0);
}

tree::TerminalNode* MemertonsParser::MulDivOpContext::DIV_OP() {
  return getToken(MemertonsParser::DIV_OP, 0);
}


size_t MemertonsParser::MulDivOpContext::getRuleIndex() const {
  return MemertonsParser::RuleMulDivOp;
}


antlrcpp::Any MemertonsParser::MulDivOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MemertonsVisitor*>(visitor))
    return parserVisitor->visitMulDivOp(this);
  else
    return visitor->visitChildren(this);
}

MemertonsParser::MulDivOpContext* MemertonsParser::mulDivOp() {
  MulDivOpContext *_localctx = _tracker.createInstance<MulDivOpContext>(_ctx, getState());
  enterRule(_localctx, 42, MemertonsParser::RuleMulDivOp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(188);
    _la = _input->LA(1);
    if (!(_la == MemertonsParser::MUL_OP

    || _la == MemertonsParser::DIV_OP)) {
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

MemertonsParser::AddSubOpContext::AddSubOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MemertonsParser::AddSubOpContext::ADD_OP() {
  return getToken(MemertonsParser::ADD_OP, 0);
}

tree::TerminalNode* MemertonsParser::AddSubOpContext::SUB_OP() {
  return getToken(MemertonsParser::SUB_OP, 0);
}


size_t MemertonsParser::AddSubOpContext::getRuleIndex() const {
  return MemertonsParser::RuleAddSubOp;
}


antlrcpp::Any MemertonsParser::AddSubOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MemertonsVisitor*>(visitor))
    return parserVisitor->visitAddSubOp(this);
  else
    return visitor->visitChildren(this);
}

MemertonsParser::AddSubOpContext* MemertonsParser::addSubOp() {
  AddSubOpContext *_localctx = _tracker.createInstance<AddSubOpContext>(_ctx, getState());
  enterRule(_localctx, 44, MemertonsParser::RuleAddSubOp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(190);
    _la = _input->LA(1);
    if (!(_la == MemertonsParser::ADD_OP

    || _la == MemertonsParser::SUB_OP)) {
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

MemertonsParser::RelOpContext::RelOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MemertonsParser::RelOpContext::EQ_OP() {
  return getToken(MemertonsParser::EQ_OP, 0);
}

tree::TerminalNode* MemertonsParser::RelOpContext::NE_OP() {
  return getToken(MemertonsParser::NE_OP, 0);
}

tree::TerminalNode* MemertonsParser::RelOpContext::LT_OP() {
  return getToken(MemertonsParser::LT_OP, 0);
}

tree::TerminalNode* MemertonsParser::RelOpContext::LE_OP() {
  return getToken(MemertonsParser::LE_OP, 0);
}

tree::TerminalNode* MemertonsParser::RelOpContext::GT_OP() {
  return getToken(MemertonsParser::GT_OP, 0);
}

tree::TerminalNode* MemertonsParser::RelOpContext::GE_OP() {
  return getToken(MemertonsParser::GE_OP, 0);
}


size_t MemertonsParser::RelOpContext::getRuleIndex() const {
  return MemertonsParser::RuleRelOp;
}


antlrcpp::Any MemertonsParser::RelOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MemertonsVisitor*>(visitor))
    return parserVisitor->visitRelOp(this);
  else
    return visitor->visitChildren(this);
}

MemertonsParser::RelOpContext* MemertonsParser::relOp() {
  RelOpContext *_localctx = _tracker.createInstance<RelOpContext>(_ctx, getState());
  enterRule(_localctx, 46, MemertonsParser::RuleRelOp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(192);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MemertonsParser::EQ_OP)
      | (1ULL << MemertonsParser::NE_OP)
      | (1ULL << MemertonsParser::LT_OP)
      | (1ULL << MemertonsParser::LE_OP)
      | (1ULL << MemertonsParser::GT_OP)
      | (1ULL << MemertonsParser::GE_OP))) != 0))) {
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

MemertonsParser::SignedNumberContext::SignedNumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MemertonsParser::SignContext* MemertonsParser::SignedNumberContext::sign() {
  return getRuleContext<MemertonsParser::SignContext>(0);
}

MemertonsParser::NumberContext* MemertonsParser::SignedNumberContext::number() {
  return getRuleContext<MemertonsParser::NumberContext>(0);
}


size_t MemertonsParser::SignedNumberContext::getRuleIndex() const {
  return MemertonsParser::RuleSignedNumber;
}


antlrcpp::Any MemertonsParser::SignedNumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MemertonsVisitor*>(visitor))
    return parserVisitor->visitSignedNumber(this);
  else
    return visitor->visitChildren(this);
}

MemertonsParser::SignedNumberContext* MemertonsParser::signedNumber() {
  SignedNumberContext *_localctx = _tracker.createInstance<SignedNumberContext>(_ctx, getState());
  enterRule(_localctx, 48, MemertonsParser::RuleSignedNumber);

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

MemertonsParser::SignContext::SignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MemertonsParser::SignContext::ADD_OP() {
  return getToken(MemertonsParser::ADD_OP, 0);
}

tree::TerminalNode* MemertonsParser::SignContext::SUB_OP() {
  return getToken(MemertonsParser::SUB_OP, 0);
}


size_t MemertonsParser::SignContext::getRuleIndex() const {
  return MemertonsParser::RuleSign;
}


antlrcpp::Any MemertonsParser::SignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MemertonsVisitor*>(visitor))
    return parserVisitor->visitSign(this);
  else
    return visitor->visitChildren(this);
}

MemertonsParser::SignContext* MemertonsParser::sign() {
  SignContext *_localctx = _tracker.createInstance<SignContext>(_ctx, getState());
  enterRule(_localctx, 50, MemertonsParser::RuleSign);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(197);
    _la = _input->LA(1);
    if (!(_la == MemertonsParser::ADD_OP

    || _la == MemertonsParser::SUB_OP)) {
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

MemertonsParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MemertonsParser::NumberContext::getRuleIndex() const {
  return MemertonsParser::RuleNumber;
}

void MemertonsParser::NumberContext::copyFrom(NumberContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->type = ctx->type;
}

//----------------- FloatConstContext ------------------------------------------------------------------

tree::TerminalNode* MemertonsParser::FloatConstContext::FLOAT() {
  return getToken(MemertonsParser::FLOAT, 0);
}

MemertonsParser::FloatConstContext::FloatConstContext(NumberContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MemertonsParser::FloatConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MemertonsVisitor*>(visitor))
    return parserVisitor->visitFloatConst(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntegerConstContext ------------------------------------------------------------------

tree::TerminalNode* MemertonsParser::IntegerConstContext::INTEGER() {
  return getToken(MemertonsParser::INTEGER, 0);
}

MemertonsParser::IntegerConstContext::IntegerConstContext(NumberContext *ctx) { copyFrom(ctx); }


antlrcpp::Any MemertonsParser::IntegerConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MemertonsVisitor*>(visitor))
    return parserVisitor->visitIntegerConst(this);
  else
    return visitor->visitChildren(this);
}
MemertonsParser::NumberContext* MemertonsParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 52, MemertonsParser::RuleNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(201);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MemertonsParser::INTEGER: {
        _localctx = dynamic_cast<NumberContext *>(_tracker.createInstance<MemertonsParser::IntegerConstContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(199);
        match(MemertonsParser::INTEGER);
        break;
      }

      case MemertonsParser::FLOAT: {
        _localctx = dynamic_cast<NumberContext *>(_tracker.createInstance<MemertonsParser::FloatConstContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(200);
        match(MemertonsParser::FLOAT);
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

MemertonsParser::TypeIDContext::TypeIDContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MemertonsParser::TypeIDContext::IDENTIFIER() {
  return getToken(MemertonsParser::IDENTIFIER, 0);
}

tree::TerminalNode* MemertonsParser::TypeIDContext::INTEGER_TYPE() {
  return getToken(MemertonsParser::INTEGER_TYPE, 0);
}

tree::TerminalNode* MemertonsParser::TypeIDContext::FLOAT_TYPE() {
  return getToken(MemertonsParser::FLOAT_TYPE, 0);
}


size_t MemertonsParser::TypeIDContext::getRuleIndex() const {
  return MemertonsParser::RuleTypeID;
}


antlrcpp::Any MemertonsParser::TypeIDContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MemertonsVisitor*>(visitor))
    return parserVisitor->visitTypeID(this);
  else
    return visitor->visitChildren(this);
}

MemertonsParser::TypeIDContext* MemertonsParser::typeID() {
  TypeIDContext *_localctx = _tracker.createInstance<TypeIDContext>(_ctx, getState());
  enterRule(_localctx, 54, MemertonsParser::RuleTypeID);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(203);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MemertonsParser::INTEGER_TYPE)
      | (1ULL << MemertonsParser::FLOAT_TYPE)
      | (1ULL << MemertonsParser::IDENTIFIER))) != 0))) {
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

bool MemertonsParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 20: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool MemertonsParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
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
std::vector<dfa::DFA> MemertonsParser::_decisionToDFA;
atn::PredictionContextCache MemertonsParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN MemertonsParser::_atn;
std::vector<uint16_t> MemertonsParser::_serializedATN;

std::vector<std::string> MemertonsParser::_ruleNames = {
  "program", "header", "mainBlock", "block", "declarations", "declList", 
  "decl", "varList", "varId", "typeId", "compoundStmt", "stmt", "stmtList", 
  "assignmentStmt", "loop_while_stmt", "if_stmt", "printStmt", "formatString", 
  "printArg", "variable", "expr", "mulDivOp", "addSubOp", "relOp", "signedNumber", 
  "sign", "number", "typeID"
};

std::vector<std::string> MemertonsParser::_literalNames = {
  "", "'.'", "';'", "'as'", "','", "'='", "'}'", "'{'", "'('", "')'", "", 
  "", "", "", "", "", "", "", "", "", "", "", "'int'", "'float'", "", "'*'", 
  "'/'", "'+'", "'-'", "'=='", "'!='", "'<'", "'<='", "'>'", "'>='", "", 
  "", "", "", "", "'''"
};

std::vector<std::string> MemertonsParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "MAIN", "BO", "DY", "VAR", "DO", 
  "WHILE", "IF", "ELSE", "UNTIL", "PRINT", "LOOP", "END", "INTEGER_TYPE", 
  "FLOAT_TYPE", "RETURN", "MUL_OP", "DIV_OP", "ADD_OP", "SUB_OP", "EQ_OP", 
  "NE_OP", "LT_OP", "LE_OP", "GT_OP", "GE_OP", "IDENTIFIER", "INTEGER", 
  "FLOAT", "NEWLINE", "WS", "QUOTE", "STRING"
};

dfa::Vocabulary MemertonsParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> MemertonsParser::_tokenNames;

MemertonsParser::Initializer::Initializer() {
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

MemertonsParser::Initializer MemertonsParser::_init;
