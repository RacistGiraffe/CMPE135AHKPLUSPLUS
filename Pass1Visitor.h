#ifndef PASS1VISITOR_H_
#define PASS1VISITOR_H_

#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"

#include "target/generated-sources/antlr4/Pcl1BaseVisitor.h"
#include "antlr4-runtime.h"
#include "target/generated-sources/antlr4/Pcl1Visitor.h"

using namespace wci;
using namespace wci::intermediate;

class Pass1Visitor : public Pcl1BaseVisitor
{
private:
    SymTabStack *symtab_stack;
    vector<SymTabEntry *> variable_id_list;
    vector<Pcl1Parser::VarIdContext *> variable_ctx_list;

public:
    Pass1Visitor();
    virtual ~Pass1Visitor();

    antlrcpp::Any visitProgram(Pcl1Parser::ProgramContext *ctx) override;
    antlrcpp::Any visitHeader(Pcl1Parser::HeaderContext *ctx) override;
    antlrcpp::Any visitVarList(Pcl1Parser::VarListContext *ctx) override;
    antlrcpp::Any visitVarId(Pcl1Parser::VarIdContext *ctx) override;
    antlrcpp::Any visitTypeId(Pcl1Parser::TypeIdContext *ctx) override;
    antlrcpp::Any visitAddSubExpr(Pcl1Parser::AddSubExprContext *ctx) override;
    antlrcpp::Any visitMulDivExpr(Pcl1Parser::MulDivExprContext *ctx) override;
    antlrcpp::Any visitVariableExpr(Pcl1Parser::VariableExprContext *ctx) override;
    antlrcpp::Any visitSignedNumberExpr(Pcl1Parser::SignedNumberExprContext *ctx) override;
    antlrcpp::Any visitSignedNumber(Pcl1Parser::SignedNumberContext *ctx) override;
    antlrcpp::Any visitUnsignedNumberExpr(Pcl1Parser::UnsignedNumberExprContext *ctx) override;
    antlrcpp::Any visitIntegerConst(Pcl1Parser::IntegerConstContext *ctx) override;
    antlrcpp::Any visitFloatConst(Pcl1Parser::FloatConstContext *ctx) override;
    antlrcpp::Any visitParenExpr(Pcl1Parser::ParenExprContext *ctx) override;
    antlrcpp::Any visitRelOpExpr(Pcl1Parser::RelOpExprContext *ctx) override;
    //antlrcpp::Any visitFuncCallExpr(Pcl1Parser::FuncCallExprContext *ctx) override;
    //antlrcpp::Any visitFuncID(Pcl1Parser::FuncIDContext *ctx) override;
    //antlrcpp::Any visitFunction_defn(Pcl1Parser::Function_defnContext *ctx) override;

};

#endif /* PASS1VISITOR_H_ */
