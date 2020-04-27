
	#include "wci/intermediate/TypeSpec.h"
	using namespace wci::intermediate;


// Generated from Pcl1.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "Pcl1Visitor.h"


/**
 * This class provides an empty implementation of Pcl1Visitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  Pcl1BaseVisitor : public Pcl1Visitor {
public:

  virtual antlrcpp::Any visitProgram(Pcl1Parser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHeader(Pcl1Parser::HeaderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMainBlock(Pcl1Parser::MainBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(Pcl1Parser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclarations(Pcl1Parser::DeclarationsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclList(Pcl1Parser::DeclListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecl(Pcl1Parser::DeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarList(Pcl1Parser::VarListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarId(Pcl1Parser::VarIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeId(Pcl1Parser::TypeIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompoundStmt(Pcl1Parser::CompoundStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmt(Pcl1Parser::StmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmtList(Pcl1Parser::StmtListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignmentStmt(Pcl1Parser::AssignmentStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLoop_num_stmt(Pcl1Parser::Loop_num_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLoop_until_stmt(Pcl1Parser::Loop_until_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_stmt(Pcl1Parser::If_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrintStmt(Pcl1Parser::PrintStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFormatString(Pcl1Parser::FormatStringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrintArg(Pcl1Parser::PrintArgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable(Pcl1Parser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableExpr(Pcl1Parser::VariableExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddSubExpr(Pcl1Parser::AddSubExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelOpExpr(Pcl1Parser::RelOpExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBracketExpr(Pcl1Parser::BracketExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnsignedNumberExpr(Pcl1Parser::UnsignedNumberExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMulDivExpr(Pcl1Parser::MulDivExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParenExpr(Pcl1Parser::ParenExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSignedNumberExpr(Pcl1Parser::SignedNumberExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMulDivOp(Pcl1Parser::MulDivOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddSubOp(Pcl1Parser::AddSubOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelOp(Pcl1Parser::RelOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSignedNumber(Pcl1Parser::SignedNumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSign(Pcl1Parser::SignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntegerConst(Pcl1Parser::IntegerConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFloatConst(Pcl1Parser::FloatConstContext *ctx) override {
    return visitChildren(ctx);
  }


};

