#ifndef PASS1VISITOR_H_
#define PASS1VISITOR_H_

#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"

#include "target/generated-sources/antlr4/MemertonsBaseVisitor.h"
#include "antlr4-runtime.h"
#include "target/generated-sources/antlr4/MemertonsVisitor.h"

using namespace wci;
using namespace wci::intermediate;

class Pass1Visitor : public MemertonsBaseVisitor
{
private:
    SymTabStack *symtab_stack;
    vector<SymTabEntry *> variable_id_list;
    vector<MemertonsParser::VarIdContext *> variable_ctx_list;

public:
    Pass1Visitor();
    virtual ~Pass1Visitor();

    antlrcpp::Any visitProgram(MemertonsParser::ProgramContext *ctx) override;
    antlrcpp::Any visitHeader(MemertonsParser::HeaderContext *ctx) override;
    antlrcpp::Any visitVarList(MemertonsParser::VarListContext *ctx) override;
    antlrcpp::Any visitVarId(MemertonsParser::VarIdContext *ctx) override;
    antlrcpp::Any visitTypeId(MemertonsParser::TypeIdContext *ctx) override;
    antlrcpp::Any visitAddSubExpr(MemertonsParser::AddSubExprContext *ctx) override;
    antlrcpp::Any visitMulDivExpr(MemertonsParser::MulDivExprContext *ctx) override;
    antlrcpp::Any visitVariableExpr(MemertonsParser::VariableExprContext *ctx) override;
    antlrcpp::Any visitSignedNumberExpr(MemertonsParser::SignedNumberExprContext *ctx) override;
    antlrcpp::Any visitSignedNumber(MemertonsParser::SignedNumberContext *ctx) override;
    antlrcpp::Any visitUnsignedNumberExpr(MemertonsParser::UnsignedNumberExprContext *ctx) override;
    antlrcpp::Any visitIntegerConst(MemertonsParser::IntegerConstContext *ctx) override;
    antlrcpp::Any visitFloatConst(MemertonsParser::FloatConstContext *ctx) override;
    antlrcpp::Any visitParenExpr(MemertonsParser::ParenExprContext *ctx) override;
    antlrcpp::Any visitRelOpExpr(MemertonsParser::RelOpExprContext *ctx) override;

};

#endif /* PASS1VISITOR_H_ */
