
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

  virtual antlrcpp::Any visitBlock(Pcl1Parser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclarations(Pcl1Parser::DeclarationsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecl_list(Pcl1Parser::Decl_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecl(Pcl1Parser::DeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVar_list(Pcl1Parser::Var_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVar_id(Pcl1Parser::Var_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_id(Pcl1Parser::Type_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBody(Pcl1Parser::BodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmt(Pcl1Parser::StmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmt_list(Pcl1Parser::Stmt_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignment_stmt(Pcl1Parser::Assignment_stmtContext *ctx) override {
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

  virtual antlrcpp::Any visitWhile_stmt(Pcl1Parser::While_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrint_stmt(Pcl1Parser::Print_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable(Pcl1Parser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr(Pcl1Parser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumber(Pcl1Parser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSign(Pcl1Parser::SignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMul_div_op(Pcl1Parser::Mul_div_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdd_sub_op(Pcl1Parser::Add_sub_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRel_op(Pcl1Parser::Rel_opContext *ctx) override {
    return visitChildren(ctx);
  }


};

