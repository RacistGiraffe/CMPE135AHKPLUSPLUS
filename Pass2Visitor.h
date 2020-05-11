#ifndef PASS2VISITOR_H_
#define PASS2VISITOR_H_

#include <iostream>
#include <string>

#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"

#include "target/generated-sources/antlr4/MemertonsBaseVisitor.h"
#include "antlr4-runtime.h"
#include "target/generated-sources/antlr4/MemertonsVisitor.h"

using namespace wci;
using namespace wci::intermediate;

class Pass2Visitor : public MemertonsBaseVisitor
{
private:
	string program_name;
	string j_file_name;
	ofstream j_file;

public:
	Pass2Visitor();
    virtual ~Pass2Visitor();

    ostream& get_assembly_file();

    antlrcpp::Any visitProgram(MemertonsParser::ProgramContext *ctx) override;
    antlrcpp::Any visitHeader(MemertonsParser::HeaderContext *ctx) override;
    antlrcpp::Any visitMainBlock(MemertonsParser::MainBlockContext *ctx) override;
    antlrcpp::Any visitDeclarations(MemertonsParser::DeclarationsContext *ctx) override;
    antlrcpp::Any visitDecl(MemertonsParser::DeclContext *ctx) override;
    antlrcpp::Any visitVarId(MemertonsParser::VarIdContext *ctx) override;
    antlrcpp::Any visitStmt(MemertonsParser::StmtContext *ctx) override;
    antlrcpp::Any visitAssignmentStmt(MemertonsParser::AssignmentStmtContext *ctx) override;
    antlrcpp::Any visitAddSubExpr(MemertonsParser::AddSubExprContext *ctx) override;
    antlrcpp::Any visitMulDivExpr(MemertonsParser::MulDivExprContext *ctx) override;
    antlrcpp::Any visitVariableExpr(MemertonsParser::VariableExprContext *ctx) override;
    antlrcpp::Any visitSignedNumber(MemertonsParser::SignedNumberContext *ctx) override;
    antlrcpp::Any visitIntegerConst(MemertonsParser::IntegerConstContext *ctx) override;
    antlrcpp::Any visitFloatConst(MemertonsParser::FloatConstContext *ctx) override;
    antlrcpp::Any visitLoop_while_stmt(MemertonsParser::Loop_while_stmtContext *ctx) override;
    antlrcpp::Any visitIf_stmt(MemertonsParser::If_stmtContext *context) override;
    antlrcpp::Any visitRelOpExpr(MemertonsParser::RelOpExprContext *ctx) override;
    antlrcpp::Any visitPrintStmt(MemertonsParser::PrintStmtContext *ctx) override;

};

#endif /* PASS2VISITOR_H_ */
