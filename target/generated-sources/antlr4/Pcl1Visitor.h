
// Generated from Pcl1.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "Pcl1Parser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by Pcl1Parser.
 */
class  Pcl1Visitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by Pcl1Parser.
   */
    virtual antlrcpp::Any visitProgram(Pcl1Parser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitHeader(Pcl1Parser::HeaderContext *context) = 0;

    virtual antlrcpp::Any visitBlock(Pcl1Parser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitDeclarations(Pcl1Parser::DeclarationsContext *context) = 0;

    virtual antlrcpp::Any visitDecl_list(Pcl1Parser::Decl_listContext *context) = 0;

    virtual antlrcpp::Any visitDecl(Pcl1Parser::DeclContext *context) = 0;

    virtual antlrcpp::Any visitVar_list(Pcl1Parser::Var_listContext *context) = 0;

    virtual antlrcpp::Any visitVar_id(Pcl1Parser::Var_idContext *context) = 0;

    virtual antlrcpp::Any visitType_id(Pcl1Parser::Type_idContext *context) = 0;

    virtual antlrcpp::Any visitBody(Pcl1Parser::BodyContext *context) = 0;

    virtual antlrcpp::Any visitStmt(Pcl1Parser::StmtContext *context) = 0;

    virtual antlrcpp::Any visitStmt_list(Pcl1Parser::Stmt_listContext *context) = 0;

    virtual antlrcpp::Any visitAssignment_stmt(Pcl1Parser::Assignment_stmtContext *context) = 0;

    virtual antlrcpp::Any visitLoop_num_stmt(Pcl1Parser::Loop_num_stmtContext *context) = 0;

    virtual antlrcpp::Any visitLoop_until_stmt(Pcl1Parser::Loop_until_stmtContext *context) = 0;

    virtual antlrcpp::Any visitIf_stmt(Pcl1Parser::If_stmtContext *context) = 0;

    virtual antlrcpp::Any visitWhile_stmt(Pcl1Parser::While_stmtContext *context) = 0;

    virtual antlrcpp::Any visitPrint_stmt(Pcl1Parser::Print_stmtContext *context) = 0;

    virtual antlrcpp::Any visitVariable(Pcl1Parser::VariableContext *context) = 0;

    virtual antlrcpp::Any visitExpr(Pcl1Parser::ExprContext *context) = 0;

    virtual antlrcpp::Any visitNumber(Pcl1Parser::NumberContext *context) = 0;

    virtual antlrcpp::Any visitSign(Pcl1Parser::SignContext *context) = 0;

    virtual antlrcpp::Any visitMul_div_op(Pcl1Parser::Mul_div_opContext *context) = 0;

    virtual antlrcpp::Any visitAdd_sub_op(Pcl1Parser::Add_sub_opContext *context) = 0;

    virtual antlrcpp::Any visitRel_op(Pcl1Parser::Rel_opContext *context) = 0;


};

