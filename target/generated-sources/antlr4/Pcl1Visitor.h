
	#include "wci/intermediate/TypeSpec.h"
	using namespace wci::intermediate;


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

    virtual antlrcpp::Any visitMainBlock(Pcl1Parser::MainBlockContext *context) = 0;

    virtual antlrcpp::Any visitBlock(Pcl1Parser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitDeclarations(Pcl1Parser::DeclarationsContext *context) = 0;

    virtual antlrcpp::Any visitDeclList(Pcl1Parser::DeclListContext *context) = 0;

    virtual antlrcpp::Any visitDecl(Pcl1Parser::DeclContext *context) = 0;

    virtual antlrcpp::Any visitVarList(Pcl1Parser::VarListContext *context) = 0;

    virtual antlrcpp::Any visitVarId(Pcl1Parser::VarIdContext *context) = 0;

    virtual antlrcpp::Any visitTypeId(Pcl1Parser::TypeIdContext *context) = 0;

    virtual antlrcpp::Any visitCompoundStmt(Pcl1Parser::CompoundStmtContext *context) = 0;

    virtual antlrcpp::Any visitStmt(Pcl1Parser::StmtContext *context) = 0;

    virtual antlrcpp::Any visitStmtList(Pcl1Parser::StmtListContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentStmt(Pcl1Parser::AssignmentStmtContext *context) = 0;

    virtual antlrcpp::Any visitLoop_num_stmt(Pcl1Parser::Loop_num_stmtContext *context) = 0;

    virtual antlrcpp::Any visitLoop_until_stmt(Pcl1Parser::Loop_until_stmtContext *context) = 0;

    virtual antlrcpp::Any visitIf_stmt(Pcl1Parser::If_stmtContext *context) = 0;

    virtual antlrcpp::Any visitPrintStmt(Pcl1Parser::PrintStmtContext *context) = 0;

    virtual antlrcpp::Any visitFormatString(Pcl1Parser::FormatStringContext *context) = 0;

    virtual antlrcpp::Any visitPrintArg(Pcl1Parser::PrintArgContext *context) = 0;

    virtual antlrcpp::Any visitVariable(Pcl1Parser::VariableContext *context) = 0;

    virtual antlrcpp::Any visitVariableExpr(Pcl1Parser::VariableExprContext *context) = 0;

    virtual antlrcpp::Any visitAddSubExpr(Pcl1Parser::AddSubExprContext *context) = 0;

    virtual antlrcpp::Any visitRelOpExpr(Pcl1Parser::RelOpExprContext *context) = 0;

    virtual antlrcpp::Any visitBracketExpr(Pcl1Parser::BracketExprContext *context) = 0;

    virtual antlrcpp::Any visitUnsignedNumberExpr(Pcl1Parser::UnsignedNumberExprContext *context) = 0;

    virtual antlrcpp::Any visitMulDivExpr(Pcl1Parser::MulDivExprContext *context) = 0;

    virtual antlrcpp::Any visitParenExpr(Pcl1Parser::ParenExprContext *context) = 0;

    virtual antlrcpp::Any visitSignedNumberExpr(Pcl1Parser::SignedNumberExprContext *context) = 0;

    virtual antlrcpp::Any visitMulDivOp(Pcl1Parser::MulDivOpContext *context) = 0;

    virtual antlrcpp::Any visitAddSubOp(Pcl1Parser::AddSubOpContext *context) = 0;

    virtual antlrcpp::Any visitRelOp(Pcl1Parser::RelOpContext *context) = 0;

    virtual antlrcpp::Any visitSignedNumber(Pcl1Parser::SignedNumberContext *context) = 0;

    virtual antlrcpp::Any visitSign(Pcl1Parser::SignContext *context) = 0;

    virtual antlrcpp::Any visitIntegerConst(Pcl1Parser::IntegerConstContext *context) = 0;

    virtual antlrcpp::Any visitFloatConst(Pcl1Parser::FloatConstContext *context) = 0;


};

