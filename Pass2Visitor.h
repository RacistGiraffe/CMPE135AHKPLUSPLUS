#ifndef PASS2VISITOR_H_
#define PASS2VISITOR_H_

#include <iostream>
#include <string>

#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"

#include "target/generated-sources/antlr4/Pcl1BaseVisitor.h"
#include "antlr4-runtime.h"
#include "target/generated-sources/antlr4/Pcl1Visitor.h"

using namespace wci;
using namespace wci::intermediate;

class Pass2Visitor : public Pcl1BaseVisitor
{
private:
	string program_name;
	string j_file_name;
	ofstream j_file;

public:
	Pass2Visitor();
    virtual ~Pass2Visitor();

    ostream& get_assembly_file();

    antlrcpp::Any visitProgram(Pcl1Parser::ProgramContext *ctx) override;
    antlrcpp::Any visitHeader(Pcl1Parser::HeaderContext *ctx) override;
    antlrcpp::Any visitMainBlock(Pcl1Parser::MainBlockContext *ctx) override;
    antlrcpp::Any visitDeclarations(Pcl1Parser::DeclarationsContext *ctx) override;
    antlrcpp::Any visitDecl(Pcl1Parser::DeclContext *ctx) override;
    antlrcpp::Any visitVarId(Pcl1Parser::VarIdContext *ctx) override;
    antlrcpp::Any visitStmt(Pcl1Parser::StmtContext *ctx) override;
    antlrcpp::Any visitAssignmentStmt(Pcl1Parser::AssignmentStmtContext *ctx) override;
    antlrcpp::Any visitAddSubExpr(Pcl1Parser::AddSubExprContext *ctx) override;
    antlrcpp::Any visitMulDivExpr(Pcl1Parser::MulDivExprContext *ctx) override;
    antlrcpp::Any visitVariableExpr(Pcl1Parser::VariableExprContext *ctx) override;
    antlrcpp::Any visitSignedNumber(Pcl1Parser::SignedNumberContext *ctx) override;
    antlrcpp::Any visitIntegerConst(Pcl1Parser::IntegerConstContext *ctx) override;
    antlrcpp::Any visitFloatConst(Pcl1Parser::FloatConstContext *ctx) override;
    antlrcpp::Any visitLoop_while_stmt(Pcl1Parser::Loop_while_stmtContext *ctx) override;
    antlrcpp::Any visitIf_stmt(Pcl1Parser::If_stmtContext *context) override;
    antlrcpp::Any visitRelOpExpr(Pcl1Parser::RelOpExprContext *ctx) override;
    antlrcpp::Any visitPrintStmt(Pcl1Parser::PrintStmtContext *ctx) override;
    //antlrcpp::Any visitFunction_defn(Pcl1Parser::Function_defnContext *ctx) override;
    //antlrcpp::Any visitFunction_call(Pcl1Parser::Function_callContext *ctx) override;
    //antlrcpp::Any visitReturn_stmt(Pcl1Parser::Return_stmtContext *ctx) override;

};

#endif /* PASS2VISITOR_H_ */
