
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

Pcl1Parser::BlockContext* Pcl1Parser::ProgramContext::block() {
  return getRuleContext<Pcl1Parser::BlockContext>(0);
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
    setState(50);
    header();
    setState(51);
    block();
    setState(52);
    match(Pcl1Parser::T__0);
    setState(53);
    match(Pcl1Parser::T__1);
   
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
    setState(55);
    match(Pcl1Parser::MAIN);
    setState(56);
    match(Pcl1Parser::IDENTIFIER);
    setState(57);
    match(Pcl1Parser::T__2);
   
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

Pcl1Parser::BodyContext* Pcl1Parser::BlockContext::body() {
  return getRuleContext<Pcl1Parser::BodyContext>(0);
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
  enterRule(_localctx, 4, Pcl1Parser::RuleBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(59);
    declarations();
    setState(60);
    body();
   
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

Pcl1Parser::Decl_listContext* Pcl1Parser::DeclarationsContext::decl_list() {
  return getRuleContext<Pcl1Parser::Decl_listContext>(0);
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
  enterRule(_localctx, 6, Pcl1Parser::RuleDeclarations);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(62);
    decl_list();
    setState(63);
    match(Pcl1Parser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Decl_listContext ------------------------------------------------------------------

Pcl1Parser::Decl_listContext::Decl_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Pcl1Parser::DeclContext *> Pcl1Parser::Decl_listContext::decl() {
  return getRuleContexts<Pcl1Parser::DeclContext>();
}

Pcl1Parser::DeclContext* Pcl1Parser::Decl_listContext::decl(size_t i) {
  return getRuleContext<Pcl1Parser::DeclContext>(i);
}


size_t Pcl1Parser::Decl_listContext::getRuleIndex() const {
  return Pcl1Parser::RuleDecl_list;
}


antlrcpp::Any Pcl1Parser::Decl_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitDecl_list(this);
  else
    return visitor->visitChildren(this);
}

Pcl1Parser::Decl_listContext* Pcl1Parser::decl_list() {
  Decl_listContext *_localctx = _tracker.createInstance<Decl_listContext>(_ctx, getState());
  enterRule(_localctx, 8, Pcl1Parser::RuleDecl_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(65);
    decl();
    setState(70);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(66);
        match(Pcl1Parser::T__1);
        setState(67);
        decl(); 
      }
      setState(72);
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

Pcl1Parser::Type_idContext* Pcl1Parser::DeclContext::type_id() {
  return getRuleContext<Pcl1Parser::Type_idContext>(0);
}

Pcl1Parser::Var_listContext* Pcl1Parser::DeclContext::var_list() {
  return getRuleContext<Pcl1Parser::Var_listContext>(0);
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
  enterRule(_localctx, 10, Pcl1Parser::RuleDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(73);
    type_id();
    setState(74);
    match(Pcl1Parser::T__2);
    setState(75);
    var_list();
    setState(76);
    match(Pcl1Parser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_listContext ------------------------------------------------------------------

Pcl1Parser::Var_listContext::Var_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Pcl1Parser::Var_idContext *> Pcl1Parser::Var_listContext::var_id() {
  return getRuleContexts<Pcl1Parser::Var_idContext>();
}

Pcl1Parser::Var_idContext* Pcl1Parser::Var_listContext::var_id(size_t i) {
  return getRuleContext<Pcl1Parser::Var_idContext>(i);
}


size_t Pcl1Parser::Var_listContext::getRuleIndex() const {
  return Pcl1Parser::RuleVar_list;
}


antlrcpp::Any Pcl1Parser::Var_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitVar_list(this);
  else
    return visitor->visitChildren(this);
}

Pcl1Parser::Var_listContext* Pcl1Parser::var_list() {
  Var_listContext *_localctx = _tracker.createInstance<Var_listContext>(_ctx, getState());
  enterRule(_localctx, 12, Pcl1Parser::RuleVar_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(78);
    var_id();
    setState(83);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Pcl1Parser::T__3) {
      setState(79);
      match(Pcl1Parser::T__3);
      setState(80);
      var_id();
      setState(85);
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

//----------------- Var_idContext ------------------------------------------------------------------

Pcl1Parser::Var_idContext::Var_idContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl1Parser::Var_idContext::IDENTIFIER() {
  return getToken(Pcl1Parser::IDENTIFIER, 0);
}


size_t Pcl1Parser::Var_idContext::getRuleIndex() const {
  return Pcl1Parser::RuleVar_id;
}


antlrcpp::Any Pcl1Parser::Var_idContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitVar_id(this);
  else
    return visitor->visitChildren(this);
}

Pcl1Parser::Var_idContext* Pcl1Parser::var_id() {
  Var_idContext *_localctx = _tracker.createInstance<Var_idContext>(_ctx, getState());
  enterRule(_localctx, 14, Pcl1Parser::RuleVar_id);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(86);
    match(Pcl1Parser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_idContext ------------------------------------------------------------------

Pcl1Parser::Type_idContext::Type_idContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl1Parser::Type_idContext::IDENTIFIER() {
  return getToken(Pcl1Parser::IDENTIFIER, 0);
}


size_t Pcl1Parser::Type_idContext::getRuleIndex() const {
  return Pcl1Parser::RuleType_id;
}


antlrcpp::Any Pcl1Parser::Type_idContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitType_id(this);
  else
    return visitor->visitChildren(this);
}

Pcl1Parser::Type_idContext* Pcl1Parser::type_id() {
  Type_idContext *_localctx = _tracker.createInstance<Type_idContext>(_ctx, getState());
  enterRule(_localctx, 16, Pcl1Parser::RuleType_id);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(88);
    match(Pcl1Parser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BodyContext ------------------------------------------------------------------

Pcl1Parser::BodyContext::BodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl1Parser::BodyContext::BO() {
  return getToken(Pcl1Parser::BO, 0);
}

Pcl1Parser::Stmt_listContext* Pcl1Parser::BodyContext::stmt_list() {
  return getRuleContext<Pcl1Parser::Stmt_listContext>(0);
}

tree::TerminalNode* Pcl1Parser::BodyContext::DY() {
  return getToken(Pcl1Parser::DY, 0);
}


size_t Pcl1Parser::BodyContext::getRuleIndex() const {
  return Pcl1Parser::RuleBody;
}


antlrcpp::Any Pcl1Parser::BodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitBody(this);
  else
    return visitor->visitChildren(this);
}

Pcl1Parser::BodyContext* Pcl1Parser::body() {
  BodyContext *_localctx = _tracker.createInstance<BodyContext>(_ctx, getState());
  enterRule(_localctx, 18, Pcl1Parser::RuleBody);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(90);
    match(Pcl1Parser::BO);
    setState(91);
    stmt_list();
    setState(92);
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

Pcl1Parser::BodyContext* Pcl1Parser::StmtContext::body() {
  return getRuleContext<Pcl1Parser::BodyContext>(0);
}

Pcl1Parser::Assignment_stmtContext* Pcl1Parser::StmtContext::assignment_stmt() {
  return getRuleContext<Pcl1Parser::Assignment_stmtContext>(0);
}

Pcl1Parser::Loop_num_stmtContext* Pcl1Parser::StmtContext::loop_num_stmt() {
  return getRuleContext<Pcl1Parser::Loop_num_stmtContext>(0);
}

Pcl1Parser::Loop_until_stmtContext* Pcl1Parser::StmtContext::loop_until_stmt() {
  return getRuleContext<Pcl1Parser::Loop_until_stmtContext>(0);
}

Pcl1Parser::If_stmtContext* Pcl1Parser::StmtContext::if_stmt() {
  return getRuleContext<Pcl1Parser::If_stmtContext>(0);
}

Pcl1Parser::While_stmtContext* Pcl1Parser::StmtContext::while_stmt() {
  return getRuleContext<Pcl1Parser::While_stmtContext>(0);
}

Pcl1Parser::Print_stmtContext* Pcl1Parser::StmtContext::print_stmt() {
  return getRuleContext<Pcl1Parser::Print_stmtContext>(0);
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
  enterRule(_localctx, 20, Pcl1Parser::RuleStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(102);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(94);
      body();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(95);
      assignment_stmt();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(96);
      loop_num_stmt();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(97);
      loop_until_stmt();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(98);
      if_stmt();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(99);
      while_stmt();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(100);
      print_stmt();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);

      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Stmt_listContext ------------------------------------------------------------------

Pcl1Parser::Stmt_listContext::Stmt_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Pcl1Parser::StmtContext *> Pcl1Parser::Stmt_listContext::stmt() {
  return getRuleContexts<Pcl1Parser::StmtContext>();
}

Pcl1Parser::StmtContext* Pcl1Parser::Stmt_listContext::stmt(size_t i) {
  return getRuleContext<Pcl1Parser::StmtContext>(i);
}


size_t Pcl1Parser::Stmt_listContext::getRuleIndex() const {
  return Pcl1Parser::RuleStmt_list;
}


antlrcpp::Any Pcl1Parser::Stmt_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitStmt_list(this);
  else
    return visitor->visitChildren(this);
}

Pcl1Parser::Stmt_listContext* Pcl1Parser::stmt_list() {
  Stmt_listContext *_localctx = _tracker.createInstance<Stmt_listContext>(_ctx, getState());
  enterRule(_localctx, 22, Pcl1Parser::RuleStmt_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(104);
    stmt();
    setState(109);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Pcl1Parser::T__1) {
      setState(105);
      match(Pcl1Parser::T__1);
      setState(106);
      stmt();
      setState(111);
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

//----------------- Assignment_stmtContext ------------------------------------------------------------------

Pcl1Parser::Assignment_stmtContext::Assignment_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Pcl1Parser::VariableContext* Pcl1Parser::Assignment_stmtContext::variable() {
  return getRuleContext<Pcl1Parser::VariableContext>(0);
}

Pcl1Parser::ExprContext* Pcl1Parser::Assignment_stmtContext::expr() {
  return getRuleContext<Pcl1Parser::ExprContext>(0);
}


size_t Pcl1Parser::Assignment_stmtContext::getRuleIndex() const {
  return Pcl1Parser::RuleAssignment_stmt;
}


antlrcpp::Any Pcl1Parser::Assignment_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitAssignment_stmt(this);
  else
    return visitor->visitChildren(this);
}

Pcl1Parser::Assignment_stmtContext* Pcl1Parser::assignment_stmt() {
  Assignment_stmtContext *_localctx = _tracker.createInstance<Assignment_stmtContext>(_ctx, getState());
  enterRule(_localctx, 24, Pcl1Parser::RuleAssignment_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(112);
    variable();
    setState(113);
    match(Pcl1Parser::T__4);
    setState(114);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Loop_num_stmtContext ------------------------------------------------------------------

Pcl1Parser::Loop_num_stmtContext::Loop_num_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl1Parser::Loop_num_stmtContext::LOOP() {
  return getToken(Pcl1Parser::LOOP, 0);
}

Pcl1Parser::ExprContext* Pcl1Parser::Loop_num_stmtContext::expr() {
  return getRuleContext<Pcl1Parser::ExprContext>(0);
}

Pcl1Parser::Stmt_listContext* Pcl1Parser::Loop_num_stmtContext::stmt_list() {
  return getRuleContext<Pcl1Parser::Stmt_listContext>(0);
}


size_t Pcl1Parser::Loop_num_stmtContext::getRuleIndex() const {
  return Pcl1Parser::RuleLoop_num_stmt;
}


antlrcpp::Any Pcl1Parser::Loop_num_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitLoop_num_stmt(this);
  else
    return visitor->visitChildren(this);
}

Pcl1Parser::Loop_num_stmtContext* Pcl1Parser::loop_num_stmt() {
  Loop_num_stmtContext *_localctx = _tracker.createInstance<Loop_num_stmtContext>(_ctx, getState());
  enterRule(_localctx, 26, Pcl1Parser::RuleLoop_num_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(116);
    match(Pcl1Parser::LOOP);
    setState(117);
    match(Pcl1Parser::T__3);
    setState(118);
    expr(0);
    setState(119);
    match(Pcl1Parser::T__2);
    setState(120);
    stmt_list();
    setState(121);
    match(Pcl1Parser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Loop_until_stmtContext ------------------------------------------------------------------

Pcl1Parser::Loop_until_stmtContext::Loop_until_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl1Parser::Loop_until_stmtContext::LOOP() {
  return getToken(Pcl1Parser::LOOP, 0);
}

Pcl1Parser::Stmt_listContext* Pcl1Parser::Loop_until_stmtContext::stmt_list() {
  return getRuleContext<Pcl1Parser::Stmt_listContext>(0);
}

tree::TerminalNode* Pcl1Parser::Loop_until_stmtContext::UNTIL() {
  return getToken(Pcl1Parser::UNTIL, 0);
}

Pcl1Parser::ExprContext* Pcl1Parser::Loop_until_stmtContext::expr() {
  return getRuleContext<Pcl1Parser::ExprContext>(0);
}


size_t Pcl1Parser::Loop_until_stmtContext::getRuleIndex() const {
  return Pcl1Parser::RuleLoop_until_stmt;
}


antlrcpp::Any Pcl1Parser::Loop_until_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitLoop_until_stmt(this);
  else
    return visitor->visitChildren(this);
}

Pcl1Parser::Loop_until_stmtContext* Pcl1Parser::loop_until_stmt() {
  Loop_until_stmtContext *_localctx = _tracker.createInstance<Loop_until_stmtContext>(_ctx, getState());
  enterRule(_localctx, 28, Pcl1Parser::RuleLoop_until_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(123);
    match(Pcl1Parser::LOOP);
    setState(124);
    match(Pcl1Parser::T__2);
    setState(125);
    stmt_list();
    setState(126);
    match(Pcl1Parser::T__0);
    setState(127);
    match(Pcl1Parser::UNTIL);
    setState(128);
    match(Pcl1Parser::T__5);
    setState(129);
    expr(0);
    setState(130);
    match(Pcl1Parser::T__6);
   
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

Pcl1Parser::StmtContext* Pcl1Parser::If_stmtContext::stmt() {
  return getRuleContext<Pcl1Parser::StmtContext>(0);
}

tree::TerminalNode* Pcl1Parser::If_stmtContext::ELSE() {
  return getToken(Pcl1Parser::ELSE, 0);
}

Pcl1Parser::Stmt_listContext* Pcl1Parser::If_stmtContext::stmt_list() {
  return getRuleContext<Pcl1Parser::Stmt_listContext>(0);
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
    setState(132);
    match(Pcl1Parser::IF);
    setState(133);
    expr(0);
    setState(134);
    match(Pcl1Parser::T__2);
    setState(135);
    stmt();
    setState(136);
    match(Pcl1Parser::T__0);
    setState(142);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Pcl1Parser::ELSE) {
      setState(137);
      match(Pcl1Parser::ELSE);
      setState(138);
      match(Pcl1Parser::T__2);
      setState(139);
      stmt_list();
      setState(140);
      match(Pcl1Parser::T__0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- While_stmtContext ------------------------------------------------------------------

Pcl1Parser::While_stmtContext::While_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl1Parser::While_stmtContext::WHILE() {
  return getToken(Pcl1Parser::WHILE, 0);
}

Pcl1Parser::ExprContext* Pcl1Parser::While_stmtContext::expr() {
  return getRuleContext<Pcl1Parser::ExprContext>(0);
}

Pcl1Parser::Stmt_listContext* Pcl1Parser::While_stmtContext::stmt_list() {
  return getRuleContext<Pcl1Parser::Stmt_listContext>(0);
}


size_t Pcl1Parser::While_stmtContext::getRuleIndex() const {
  return Pcl1Parser::RuleWhile_stmt;
}


antlrcpp::Any Pcl1Parser::While_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitWhile_stmt(this);
  else
    return visitor->visitChildren(this);
}

Pcl1Parser::While_stmtContext* Pcl1Parser::while_stmt() {
  While_stmtContext *_localctx = _tracker.createInstance<While_stmtContext>(_ctx, getState());
  enterRule(_localctx, 32, Pcl1Parser::RuleWhile_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(144);
    match(Pcl1Parser::WHILE);
    setState(145);
    expr(0);
    setState(146);
    match(Pcl1Parser::T__2);
    setState(147);
    stmt_list();
    setState(148);
    match(Pcl1Parser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Print_stmtContext ------------------------------------------------------------------

Pcl1Parser::Print_stmtContext::Print_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl1Parser::Print_stmtContext::PRINT() {
  return getToken(Pcl1Parser::PRINT, 0);
}

Pcl1Parser::VariableContext* Pcl1Parser::Print_stmtContext::variable() {
  return getRuleContext<Pcl1Parser::VariableContext>(0);
}


size_t Pcl1Parser::Print_stmtContext::getRuleIndex() const {
  return Pcl1Parser::RulePrint_stmt;
}


antlrcpp::Any Pcl1Parser::Print_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitPrint_stmt(this);
  else
    return visitor->visitChildren(this);
}

Pcl1Parser::Print_stmtContext* Pcl1Parser::print_stmt() {
  Print_stmtContext *_localctx = _tracker.createInstance<Print_stmtContext>(_ctx, getState());
  enterRule(_localctx, 34, Pcl1Parser::RulePrint_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(150);
    match(Pcl1Parser::PRINT);
    setState(151);
    variable();
   
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
  enterRule(_localctx, 36, Pcl1Parser::RuleVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(153);
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

Pcl1Parser::NumberContext* Pcl1Parser::ExprContext::number() {
  return getRuleContext<Pcl1Parser::NumberContext>(0);
}

tree::TerminalNode* Pcl1Parser::ExprContext::IDENTIFIER() {
  return getToken(Pcl1Parser::IDENTIFIER, 0);
}

std::vector<Pcl1Parser::ExprContext *> Pcl1Parser::ExprContext::expr() {
  return getRuleContexts<Pcl1Parser::ExprContext>();
}

Pcl1Parser::ExprContext* Pcl1Parser::ExprContext::expr(size_t i) {
  return getRuleContext<Pcl1Parser::ExprContext>(i);
}

Pcl1Parser::Mul_div_opContext* Pcl1Parser::ExprContext::mul_div_op() {
  return getRuleContext<Pcl1Parser::Mul_div_opContext>(0);
}

Pcl1Parser::Add_sub_opContext* Pcl1Parser::ExprContext::add_sub_op() {
  return getRuleContext<Pcl1Parser::Add_sub_opContext>(0);
}

Pcl1Parser::Rel_opContext* Pcl1Parser::ExprContext::rel_op() {
  return getRuleContext<Pcl1Parser::Rel_opContext>(0);
}


size_t Pcl1Parser::ExprContext::getRuleIndex() const {
  return Pcl1Parser::RuleExpr;
}


antlrcpp::Any Pcl1Parser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitExpr(this);
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
  size_t startState = 38;
  enterRecursionRule(_localctx, 38, Pcl1Parser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(166);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Pcl1Parser::ADD_OP:
      case Pcl1Parser::SUB_OP:
      case Pcl1Parser::INTEGER: {
        setState(156);
        number();
        break;
      }

      case Pcl1Parser::IDENTIFIER: {
        setState(157);
        match(Pcl1Parser::IDENTIFIER);
        break;
      }

      case Pcl1Parser::T__5: {
        setState(158);
        match(Pcl1Parser::T__5);
        setState(159);
        expr(0);
        setState(160);
        match(Pcl1Parser::T__6);
        break;
      }

      case Pcl1Parser::T__2: {
        setState(162);
        match(Pcl1Parser::T__2);
        setState(163);
        expr(0);
        setState(164);
        match(Pcl1Parser::T__0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(182);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(180);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(168);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(169);
          mul_div_op();
          setState(170);
          expr(8);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(172);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(173);
          add_sub_op();
          setState(174);
          expr(7);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(176);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(177);
          rel_op();
          setState(178);
          expr(6);
          break;
        }

        } 
      }
      setState(184);
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

//----------------- NumberContext ------------------------------------------------------------------

Pcl1Parser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl1Parser::NumberContext::INTEGER() {
  return getToken(Pcl1Parser::INTEGER, 0);
}

Pcl1Parser::SignContext* Pcl1Parser::NumberContext::sign() {
  return getRuleContext<Pcl1Parser::SignContext>(0);
}


size_t Pcl1Parser::NumberContext::getRuleIndex() const {
  return Pcl1Parser::RuleNumber;
}


antlrcpp::Any Pcl1Parser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

Pcl1Parser::NumberContext* Pcl1Parser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 40, Pcl1Parser::RuleNumber);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(186);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Pcl1Parser::ADD_OP

    || _la == Pcl1Parser::SUB_OP) {
      setState(185);
      sign();
    }
    setState(188);
    match(Pcl1Parser::INTEGER);
   
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
  enterRule(_localctx, 42, Pcl1Parser::RuleSign);
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

//----------------- Mul_div_opContext ------------------------------------------------------------------

Pcl1Parser::Mul_div_opContext::Mul_div_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl1Parser::Mul_div_opContext::MUL_OP() {
  return getToken(Pcl1Parser::MUL_OP, 0);
}

tree::TerminalNode* Pcl1Parser::Mul_div_opContext::DIV_OP() {
  return getToken(Pcl1Parser::DIV_OP, 0);
}


size_t Pcl1Parser::Mul_div_opContext::getRuleIndex() const {
  return Pcl1Parser::RuleMul_div_op;
}


antlrcpp::Any Pcl1Parser::Mul_div_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitMul_div_op(this);
  else
    return visitor->visitChildren(this);
}

Pcl1Parser::Mul_div_opContext* Pcl1Parser::mul_div_op() {
  Mul_div_opContext *_localctx = _tracker.createInstance<Mul_div_opContext>(_ctx, getState());
  enterRule(_localctx, 44, Pcl1Parser::RuleMul_div_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(192);
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

//----------------- Add_sub_opContext ------------------------------------------------------------------

Pcl1Parser::Add_sub_opContext::Add_sub_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl1Parser::Add_sub_opContext::ADD_OP() {
  return getToken(Pcl1Parser::ADD_OP, 0);
}

tree::TerminalNode* Pcl1Parser::Add_sub_opContext::SUB_OP() {
  return getToken(Pcl1Parser::SUB_OP, 0);
}


size_t Pcl1Parser::Add_sub_opContext::getRuleIndex() const {
  return Pcl1Parser::RuleAdd_sub_op;
}


antlrcpp::Any Pcl1Parser::Add_sub_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitAdd_sub_op(this);
  else
    return visitor->visitChildren(this);
}

Pcl1Parser::Add_sub_opContext* Pcl1Parser::add_sub_op() {
  Add_sub_opContext *_localctx = _tracker.createInstance<Add_sub_opContext>(_ctx, getState());
  enterRule(_localctx, 46, Pcl1Parser::RuleAdd_sub_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(194);
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

//----------------- Rel_opContext ------------------------------------------------------------------

Pcl1Parser::Rel_opContext::Rel_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl1Parser::Rel_opContext::EQ_OP() {
  return getToken(Pcl1Parser::EQ_OP, 0);
}

tree::TerminalNode* Pcl1Parser::Rel_opContext::NE_OP() {
  return getToken(Pcl1Parser::NE_OP, 0);
}

tree::TerminalNode* Pcl1Parser::Rel_opContext::LT_OP() {
  return getToken(Pcl1Parser::LT_OP, 0);
}

tree::TerminalNode* Pcl1Parser::Rel_opContext::LE_OP() {
  return getToken(Pcl1Parser::LE_OP, 0);
}

tree::TerminalNode* Pcl1Parser::Rel_opContext::GT_OP() {
  return getToken(Pcl1Parser::GT_OP, 0);
}

tree::TerminalNode* Pcl1Parser::Rel_opContext::GE_OP() {
  return getToken(Pcl1Parser::GE_OP, 0);
}


size_t Pcl1Parser::Rel_opContext::getRuleIndex() const {
  return Pcl1Parser::RuleRel_op;
}


antlrcpp::Any Pcl1Parser::Rel_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl1Visitor*>(visitor))
    return parserVisitor->visitRel_op(this);
  else
    return visitor->visitChildren(this);
}

Pcl1Parser::Rel_opContext* Pcl1Parser::rel_op() {
  Rel_opContext *_localctx = _tracker.createInstance<Rel_opContext>(_ctx, getState());
  enterRule(_localctx, 48, Pcl1Parser::RuleRel_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(196);
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

bool Pcl1Parser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 19: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

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
  "program", "header", "block", "declarations", "decl_list", "decl", "var_list", 
  "var_id", "type_id", "body", "stmt", "stmt_list", "assignment_stmt", "loop_num_stmt", 
  "loop_until_stmt", "if_stmt", "while_stmt", "print_stmt", "variable", 
  "expr", "number", "sign", "mul_div_op", "add_sub_op", "rel_op"
};

std::vector<std::string> Pcl1Parser::_literalNames = {
  "", "'{'", "';'", "'}'", "','", "'='", "'('", "')'", "", "", "", "", "", 
  "", "", "", "", "", "", "'*'", "'/'", "'+'", "'-'", "'=='", "'<>'", "'<'", 
  "'<='", "'>'", "'>='"
};

std::vector<std::string> Pcl1Parser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "MAIN", "BO", "DY", "VAR", "DO", "WHILE", 
  "IF", "ELSE", "UNTIL", "PRINT", "LOOP", "MUL_OP", "DIV_OP", "ADD_OP", 
  "SUB_OP", "EQ_OP", "NE_OP", "LT_OP", "LE_OP", "GT_OP", "GE_OP", "IDENTIFIER", 
  "INTEGER", "NEWLINE", "WS"
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
    0x3, 0x22, 0xc9, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 
    0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x7, 0x6, 0x47, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x4a, 0xb, 
    0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x7, 0x8, 0x54, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x57, 0xb, 
    0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x69, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x7, 0xd, 0x6e, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x71, 0xb, 0xd, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x91, 0xa, 0x11, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x5, 0x15, 0xa9, 0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 0xb7, 0xa, 0x15, 0xc, 0x15, 
    0xe, 0x15, 0xba, 0xb, 0x15, 0x3, 0x16, 0x5, 0x16, 0xbd, 0xa, 0x16, 0x3, 
    0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x2, 0x3, 0x28, 0x1b, 0x2, 
    0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 
    0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x2, 
    0x5, 0x3, 0x2, 0x17, 0x18, 0x3, 0x2, 0x15, 0x16, 0x3, 0x2, 0x19, 0x1e, 
    0x2, 0xc1, 0x2, 0x34, 0x3, 0x2, 0x2, 0x2, 0x4, 0x39, 0x3, 0x2, 0x2, 
    0x2, 0x6, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x8, 0x40, 0x3, 0x2, 0x2, 0x2, 0xa, 
    0x43, 0x3, 0x2, 0x2, 0x2, 0xc, 0x4b, 0x3, 0x2, 0x2, 0x2, 0xe, 0x50, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x58, 0x3, 0x2, 0x2, 0x2, 0x12, 0x5a, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x16, 0x68, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x72, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0x76, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x7d, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0x86, 0x3, 0x2, 0x2, 0x2, 0x22, 0x92, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0x98, 0x3, 0x2, 0x2, 0x2, 0x26, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x28, 0xa8, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0xbc, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xc0, 0x3, 
    0x2, 0x2, 0x2, 0x2e, 0xc2, 0x3, 0x2, 0x2, 0x2, 0x30, 0xc4, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0xc6, 0x3, 0x2, 0x2, 0x2, 0x34, 0x35, 0x5, 0x4, 0x3, 
    0x2, 0x35, 0x36, 0x5, 0x6, 0x4, 0x2, 0x36, 0x37, 0x7, 0x3, 0x2, 0x2, 
    0x37, 0x38, 0x7, 0x4, 0x2, 0x2, 0x38, 0x3, 0x3, 0x2, 0x2, 0x2, 0x39, 
    0x3a, 0x7, 0xa, 0x2, 0x2, 0x3a, 0x3b, 0x7, 0x1f, 0x2, 0x2, 0x3b, 0x3c, 
    0x7, 0x5, 0x2, 0x2, 0x3c, 0x5, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3e, 0x5, 
    0x8, 0x5, 0x2, 0x3e, 0x3f, 0x5, 0x14, 0xb, 0x2, 0x3f, 0x7, 0x3, 0x2, 
    0x2, 0x2, 0x40, 0x41, 0x5, 0xa, 0x6, 0x2, 0x41, 0x42, 0x7, 0x4, 0x2, 
    0x2, 0x42, 0x9, 0x3, 0x2, 0x2, 0x2, 0x43, 0x48, 0x5, 0xc, 0x7, 0x2, 
    0x44, 0x45, 0x7, 0x4, 0x2, 0x2, 0x45, 0x47, 0x5, 0xc, 0x7, 0x2, 0x46, 
    0x44, 0x3, 0x2, 0x2, 0x2, 0x47, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x48, 0x46, 
    0x3, 0x2, 0x2, 0x2, 0x48, 0x49, 0x3, 0x2, 0x2, 0x2, 0x49, 0xb, 0x3, 
    0x2, 0x2, 0x2, 0x4a, 0x48, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0x5, 0x12, 
    0xa, 0x2, 0x4c, 0x4d, 0x7, 0x5, 0x2, 0x2, 0x4d, 0x4e, 0x5, 0xe, 0x8, 
    0x2, 0x4e, 0x4f, 0x7, 0x3, 0x2, 0x2, 0x4f, 0xd, 0x3, 0x2, 0x2, 0x2, 
    0x50, 0x55, 0x5, 0x10, 0x9, 0x2, 0x51, 0x52, 0x7, 0x6, 0x2, 0x2, 0x52, 
    0x54, 0x5, 0x10, 0x9, 0x2, 0x53, 0x51, 0x3, 0x2, 0x2, 0x2, 0x54, 0x57, 
    0x3, 0x2, 0x2, 0x2, 0x55, 0x53, 0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 0x3, 
    0x2, 0x2, 0x2, 0x56, 0xf, 0x3, 0x2, 0x2, 0x2, 0x57, 0x55, 0x3, 0x2, 
    0x2, 0x2, 0x58, 0x59, 0x7, 0x1f, 0x2, 0x2, 0x59, 0x11, 0x3, 0x2, 0x2, 
    0x2, 0x5a, 0x5b, 0x7, 0x1f, 0x2, 0x2, 0x5b, 0x13, 0x3, 0x2, 0x2, 0x2, 
    0x5c, 0x5d, 0x7, 0xb, 0x2, 0x2, 0x5d, 0x5e, 0x5, 0x18, 0xd, 0x2, 0x5e, 
    0x5f, 0x7, 0xc, 0x2, 0x2, 0x5f, 0x15, 0x3, 0x2, 0x2, 0x2, 0x60, 0x69, 
    0x5, 0x14, 0xb, 0x2, 0x61, 0x69, 0x5, 0x1a, 0xe, 0x2, 0x62, 0x69, 0x5, 
    0x1c, 0xf, 0x2, 0x63, 0x69, 0x5, 0x1e, 0x10, 0x2, 0x64, 0x69, 0x5, 0x20, 
    0x11, 0x2, 0x65, 0x69, 0x5, 0x22, 0x12, 0x2, 0x66, 0x69, 0x5, 0x24, 
    0x13, 0x2, 0x67, 0x69, 0x3, 0x2, 0x2, 0x2, 0x68, 0x60, 0x3, 0x2, 0x2, 
    0x2, 0x68, 0x61, 0x3, 0x2, 0x2, 0x2, 0x68, 0x62, 0x3, 0x2, 0x2, 0x2, 
    0x68, 0x63, 0x3, 0x2, 0x2, 0x2, 0x68, 0x64, 0x3, 0x2, 0x2, 0x2, 0x68, 
    0x65, 0x3, 0x2, 0x2, 0x2, 0x68, 0x66, 0x3, 0x2, 0x2, 0x2, 0x68, 0x67, 
    0x3, 0x2, 0x2, 0x2, 0x69, 0x17, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6f, 0x5, 
    0x16, 0xc, 0x2, 0x6b, 0x6c, 0x7, 0x4, 0x2, 0x2, 0x6c, 0x6e, 0x5, 0x16, 
    0xc, 0x2, 0x6d, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x71, 0x3, 0x2, 0x2, 
    0x2, 0x6f, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 0x3, 0x2, 0x2, 0x2, 
    0x70, 0x19, 0x3, 0x2, 0x2, 0x2, 0x71, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x72, 
    0x73, 0x5, 0x26, 0x14, 0x2, 0x73, 0x74, 0x7, 0x7, 0x2, 0x2, 0x74, 0x75, 
    0x5, 0x28, 0x15, 0x2, 0x75, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x7, 
    0x14, 0x2, 0x2, 0x77, 0x78, 0x7, 0x6, 0x2, 0x2, 0x78, 0x79, 0x5, 0x28, 
    0x15, 0x2, 0x79, 0x7a, 0x7, 0x5, 0x2, 0x2, 0x7a, 0x7b, 0x5, 0x18, 0xd, 
    0x2, 0x7b, 0x7c, 0x7, 0x3, 0x2, 0x2, 0x7c, 0x1d, 0x3, 0x2, 0x2, 0x2, 
    0x7d, 0x7e, 0x7, 0x14, 0x2, 0x2, 0x7e, 0x7f, 0x7, 0x5, 0x2, 0x2, 0x7f, 
    0x80, 0x5, 0x18, 0xd, 0x2, 0x80, 0x81, 0x7, 0x3, 0x2, 0x2, 0x81, 0x82, 
    0x7, 0x12, 0x2, 0x2, 0x82, 0x83, 0x7, 0x8, 0x2, 0x2, 0x83, 0x84, 0x5, 
    0x28, 0x15, 0x2, 0x84, 0x85, 0x7, 0x9, 0x2, 0x2, 0x85, 0x1f, 0x3, 0x2, 
    0x2, 0x2, 0x86, 0x87, 0x7, 0x10, 0x2, 0x2, 0x87, 0x88, 0x5, 0x28, 0x15, 
    0x2, 0x88, 0x89, 0x7, 0x5, 0x2, 0x2, 0x89, 0x8a, 0x5, 0x16, 0xc, 0x2, 
    0x8a, 0x90, 0x7, 0x3, 0x2, 0x2, 0x8b, 0x8c, 0x7, 0x11, 0x2, 0x2, 0x8c, 
    0x8d, 0x7, 0x5, 0x2, 0x2, 0x8d, 0x8e, 0x5, 0x18, 0xd, 0x2, 0x8e, 0x8f, 
    0x7, 0x3, 0x2, 0x2, 0x8f, 0x91, 0x3, 0x2, 0x2, 0x2, 0x90, 0x8b, 0x3, 
    0x2, 0x2, 0x2, 0x90, 0x91, 0x3, 0x2, 0x2, 0x2, 0x91, 0x21, 0x3, 0x2, 
    0x2, 0x2, 0x92, 0x93, 0x7, 0xf, 0x2, 0x2, 0x93, 0x94, 0x5, 0x28, 0x15, 
    0x2, 0x94, 0x95, 0x7, 0x5, 0x2, 0x2, 0x95, 0x96, 0x5, 0x18, 0xd, 0x2, 
    0x96, 0x97, 0x7, 0x3, 0x2, 0x2, 0x97, 0x23, 0x3, 0x2, 0x2, 0x2, 0x98, 
    0x99, 0x7, 0x13, 0x2, 0x2, 0x99, 0x9a, 0x5, 0x26, 0x14, 0x2, 0x9a, 0x25, 
    0x3, 0x2, 0x2, 0x2, 0x9b, 0x9c, 0x7, 0x1f, 0x2, 0x2, 0x9c, 0x27, 0x3, 
    0x2, 0x2, 0x2, 0x9d, 0x9e, 0x8, 0x15, 0x1, 0x2, 0x9e, 0xa9, 0x5, 0x2a, 
    0x16, 0x2, 0x9f, 0xa9, 0x7, 0x1f, 0x2, 0x2, 0xa0, 0xa1, 0x7, 0x8, 0x2, 
    0x2, 0xa1, 0xa2, 0x5, 0x28, 0x15, 0x2, 0xa2, 0xa3, 0x7, 0x9, 0x2, 0x2, 
    0xa3, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa5, 0x7, 0x5, 0x2, 0x2, 0xa5, 
    0xa6, 0x5, 0x28, 0x15, 0x2, 0xa6, 0xa7, 0x7, 0x3, 0x2, 0x2, 0xa7, 0xa9, 
    0x3, 0x2, 0x2, 0x2, 0xa8, 0x9d, 0x3, 0x2, 0x2, 0x2, 0xa8, 0x9f, 0x3, 
    0x2, 0x2, 0x2, 0xa8, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa4, 0x3, 0x2, 
    0x2, 0x2, 0xa9, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 0xc, 0x9, 0x2, 
    0x2, 0xab, 0xac, 0x5, 0x2e, 0x18, 0x2, 0xac, 0xad, 0x5, 0x28, 0x15, 
    0xa, 0xad, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xae, 0xaf, 0xc, 0x8, 0x2, 0x2, 
    0xaf, 0xb0, 0x5, 0x30, 0x19, 0x2, 0xb0, 0xb1, 0x5, 0x28, 0x15, 0x9, 
    0xb1, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb3, 0xc, 0x7, 0x2, 0x2, 0xb3, 
    0xb4, 0x5, 0x32, 0x1a, 0x2, 0xb4, 0xb5, 0x5, 0x28, 0x15, 0x8, 0xb5, 
    0xb7, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xae, 
    0x3, 0x2, 0x2, 0x2, 0xb6, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xba, 0x3, 
    0x2, 0x2, 0x2, 0xb8, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 0x3, 0x2, 
    0x2, 0x2, 0xb9, 0x29, 0x3, 0x2, 0x2, 0x2, 0xba, 0xb8, 0x3, 0x2, 0x2, 
    0x2, 0xbb, 0xbd, 0x5, 0x2c, 0x17, 0x2, 0xbc, 0xbb, 0x3, 0x2, 0x2, 0x2, 
    0xbc, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xbe, 
    0xbf, 0x7, 0x20, 0x2, 0x2, 0xbf, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc1, 
    0x9, 0x2, 0x2, 0x2, 0xc1, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 0x9, 
    0x3, 0x2, 0x2, 0xc3, 0x2f, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0x9, 0x2, 
    0x2, 0x2, 0xc5, 0x31, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc7, 0x9, 0x4, 0x2, 
    0x2, 0xc7, 0x33, 0x3, 0x2, 0x2, 0x2, 0xb, 0x48, 0x55, 0x68, 0x6f, 0x90, 
    0xa8, 0xb6, 0xb8, 0xbc, 
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
