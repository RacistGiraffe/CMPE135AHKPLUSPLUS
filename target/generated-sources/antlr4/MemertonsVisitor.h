
	#include "wci/intermediate/TypeSpec.h"
	using namespace wci::intermediate;


// Generated from Memertons.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "MemertonsParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by MemertonsParser.
 */
class  MemertonsVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by MemertonsParser.
   */
    virtual antlrcpp::Any visitProgram(MemertonsParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitHeader(MemertonsParser::HeaderContext *context) = 0;

    virtual antlrcpp::Any visitMainBlock(MemertonsParser::MainBlockContext *context) = 0;

    virtual antlrcpp::Any visitBlock(MemertonsParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitDeclarations(MemertonsParser::DeclarationsContext *context) = 0;

    virtual antlrcpp::Any visitDeclList(MemertonsParser::DeclListContext *context) = 0;

    virtual antlrcpp::Any visitDecl(MemertonsParser::DeclContext *context) = 0;

    virtual antlrcpp::Any visitVarList(MemertonsParser::VarListContext *context) = 0;

    virtual antlrcpp::Any visitVarId(MemertonsParser::VarIdContext *context) = 0;

    virtual antlrcpp::Any visitTypeId(MemertonsParser::TypeIdContext *context) = 0;

    virtual antlrcpp::Any visitCompoundStmt(MemertonsParser::CompoundStmtContext *context) = 0;

    virtual antlrcpp::Any visitStmt(MemertonsParser::StmtContext *context) = 0;

    virtual antlrcpp::Any visitStmtList(MemertonsParser::StmtListContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentStmt(MemertonsParser::AssignmentStmtContext *context) = 0;

    virtual antlrcpp::Any visitLoop_while_stmt(MemertonsParser::Loop_while_stmtContext *context) = 0;

    virtual antlrcpp::Any visitIf_stmt(MemertonsParser::If_stmtContext *context) = 0;

    virtual antlrcpp::Any visitPrintStmt(MemertonsParser::PrintStmtContext *context) = 0;

    virtual antlrcpp::Any visitFormatString(MemertonsParser::FormatStringContext *context) = 0;

    virtual antlrcpp::Any visitPrintArg(MemertonsParser::PrintArgContext *context) = 0;

    virtual antlrcpp::Any visitVariable(MemertonsParser::VariableContext *context) = 0;

    virtual antlrcpp::Any visitVariableExpr(MemertonsParser::VariableExprContext *context) = 0;

    virtual antlrcpp::Any visitAddSubExpr(MemertonsParser::AddSubExprContext *context) = 0;

    virtual antlrcpp::Any visitRelOpExpr(MemertonsParser::RelOpExprContext *context) = 0;

    virtual antlrcpp::Any visitUnsignedNumberExpr(MemertonsParser::UnsignedNumberExprContext *context) = 0;

    virtual antlrcpp::Any visitMulDivExpr(MemertonsParser::MulDivExprContext *context) = 0;

    virtual antlrcpp::Any visitParenExpr(MemertonsParser::ParenExprContext *context) = 0;

    virtual antlrcpp::Any visitSignedNumberExpr(MemertonsParser::SignedNumberExprContext *context) = 0;

    virtual antlrcpp::Any visitMulDivOp(MemertonsParser::MulDivOpContext *context) = 0;

    virtual antlrcpp::Any visitAddSubOp(MemertonsParser::AddSubOpContext *context) = 0;

    virtual antlrcpp::Any visitRelOp(MemertonsParser::RelOpContext *context) = 0;

    virtual antlrcpp::Any visitSignedNumber(MemertonsParser::SignedNumberContext *context) = 0;

    virtual antlrcpp::Any visitSign(MemertonsParser::SignContext *context) = 0;

    virtual antlrcpp::Any visitIntegerConst(MemertonsParser::IntegerConstContext *context) = 0;

    virtual antlrcpp::Any visitFloatConst(MemertonsParser::FloatConstContext *context) = 0;

    virtual antlrcpp::Any visitTypeID(MemertonsParser::TypeIDContext *context) = 0;


};

