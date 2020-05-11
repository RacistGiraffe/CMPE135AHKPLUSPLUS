#include <iostream>
#include <string>
#include <vector>

#include "Pass1Visitor.h"
#include "wci/intermediate/SymTabFactory.h"
#include "wci/intermediate/symtabimpl/Predefined.h"
#include "wci/util/CrossReferencer.h"

using namespace std;
using namespace wci;
using namespace wci::intermediate;
using namespace wci::intermediate::symtabimpl;
using namespace wci::util;

const bool DEBUG_1 = false;
static string func_id = "";

Pass1Visitor::Pass1Visitor()
{
    // Create and initialize the symbol table stack.
    symtab_stack = SymTabFactory::create_symtab_stack();
    Predefined::initialize(symtab_stack);

    if (DEBUG_1) cout << "=== Pass 1: Pass1Visitor(): symtab stack initialized." << endl;
}

Pass1Visitor::~Pass1Visitor() {}

antlrcpp::Any Pass1Visitor::visitProgram(Pcl1Parser::ProgramContext *ctx)
{
    auto value = visitChildren(ctx);

    if (DEBUG_1) cout << "=== Pass 1: visitProgram: Printing xref table." << endl;

    // Print the cross-reference table.
    CrossReferencer cross_referencer;
    cross_referencer.print(symtab_stack);

    return value;
}

antlrcpp::Any Pass1Visitor::visitHeader(Pcl1Parser::HeaderContext *ctx)
{
    if (DEBUG_1) cout << "=== Pass 1: visitHeader: " + ctx->getText() << endl;

    string program_name = ctx->IDENTIFIER()->toString();

    SymTabEntry *program_id = symtab_stack->enter_local(program_name);
    program_id->set_definition((Definition)DF_PROGRAM);
    program_id->set_attribute((SymTabKey) ROUTINE_SYMTAB,
                              symtab_stack->push());
    symtab_stack->set_program_id(program_id);

    return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitVarList(Pcl1Parser::VarListContext *ctx)
{
    if (DEBUG_1) cout << "=== Pass 1: visitVarList: " + ctx->getText() << endl;

    variable_id_list.resize(0);
    variable_ctx_list.resize(0);

    return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitVarId(Pcl1Parser::VarIdContext *ctx)
{
    if (DEBUG_1) cout << "=== Pass 1: visitVarId: " + ctx->getText() << endl;

    string variable_name = ctx->IDENTIFIER()->toString();
    SymTabEntry *variable_id = symtab_stack->enter_local(variable_name);
    variable_id->set_definition((Definition) DF_VARIABLE);

    variable_id_list.push_back(variable_id);
    variable_ctx_list.push_back(ctx);

    return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitTypeId(Pcl1Parser::TypeIdContext *ctx)
{
    if (DEBUG_1) cout << "=== Pass 1: visitTypeId: " + ctx->getText() << endl;

    TypeSpec *type;

    string type_name = ctx->IDENTIFIER()->toString();
    type = (type_name == "integer") ? Predefined::integer_type
         : (type_name == "real")    ? Predefined::real_type
         :                            nullptr;

    // Set the type of the symbol table entries.
    for (SymTabEntry *id : variable_id_list)
    {
        id->set_typespec(type);
    }

    // Set the type of the variable parse tree nodes.
    for (Pcl1Parser::VarIdContext *var_ctx : variable_ctx_list)
    {
        var_ctx->type = type;
    }

    return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitAddSubExpr(Pcl1Parser::AddSubExprContext *ctx)
{
    if (DEBUG_1) cout << "=== Pass 1: visitAddSubExpr: " + ctx->getText() << endl;

    auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);
    bool real_mode    =    (type1 == Predefined::real_type)
                        && (type2 == Predefined::real_type);

    TypeSpec *type = integer_mode ? Predefined::integer_type
                   : real_mode    ? Predefined::real_type
                   :                nullptr;
    ctx->type = type;

    return value;
}

antlrcpp::Any Pass1Visitor::visitMulDivExpr(Pcl1Parser::MulDivExprContext *ctx)
{
    if (DEBUG_1) cout << "=== Pass 1: visitMulDivExpr: " + ctx->getText() << endl;

    auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);
    bool real_mode    =    (type1 == Predefined::real_type)
                        && (type2 == Predefined::real_type);

    TypeSpec *type = integer_mode ? Predefined::integer_type
                   : real_mode    ? Predefined::real_type
                   :                nullptr;
    ctx->type = type;

    return value;
}

antlrcpp::Any Pass1Visitor::visitVariableExpr(Pcl1Parser::VariableExprContext *ctx)
{
    if (DEBUG_1) cout << "=== Pass 1: visitVariableExpr: " + ctx->getText() << endl;

    string variable_name = ctx->variable()->IDENTIFIER()->toString();
    SymTabEntry *variable_id = symtab_stack->lookup(variable_name);

    ctx->type = variable_id->get_typespec();
    return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitSignedNumberExpr(Pcl1Parser::SignedNumberExprContext *ctx)
{
    if (DEBUG_1) cout << "=== Pass 1: visitSignedNumberExpr: " + ctx->getText() << endl;

    auto value = visitChildren(ctx);
    ctx->type = ctx->signedNumber()->type;
    return value;
}

antlrcpp::Any Pass1Visitor::visitSignedNumber(Pcl1Parser::SignedNumberContext *ctx)
{
    if (DEBUG_1) cout << "=== Pass 1: visitSignedNumber: " + ctx->getText() << endl;

    auto value = visit(ctx->number());
    ctx->type = ctx->number()->type;
    return value;
}

antlrcpp::Any Pass1Visitor::visitUnsignedNumberExpr(Pcl1Parser::UnsignedNumberExprContext *ctx)
{
    if (DEBUG_1) cout << "=== Pass 1: visitUnsignedNumberExpr: " + ctx->getText() << endl;

    auto value = visit(ctx->number());
    ctx->type = ctx->number()->type;
    return value;
}

antlrcpp::Any Pass1Visitor::visitIntegerConst(Pcl1Parser::IntegerConstContext *ctx)
{
    if (DEBUG_1) cout << "=== Pass 1: visitIntegerConst: " + ctx->getText() << endl;

    ctx->type = Predefined::integer_type;
    return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitFloatConst(Pcl1Parser::FloatConstContext *ctx)
{
    if (DEBUG_1) cout << "=== Pass 1: visitFloatConst: " + ctx->getText() << endl;

    ctx->type = Predefined::real_type;
    return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitParenExpr(Pcl1Parser::ParenExprContext *ctx)
{
    if (DEBUG_1) cout << "=== Pass 1: visitParenExpr: " + ctx->getText() << endl;

    auto value = visitChildren(ctx);
    ctx->type = ctx->expr()->type;
    return value;
}

antlrcpp::Any Pass1Visitor::visitRelOpExpr(Pcl1Parser::RelOpExprContext *ctx)
{
	if (DEBUG_1) cout << "=== Pass 1: visitRelOpExpr: " + ctx->getText() << endl;
	auto value = visitChildren(ctx);

	TypeSpec *type1 = ctx->expr(0)->type;
	TypeSpec *type2 = ctx->expr(1)->type;

	bool integer_mode =    (type1 == Predefined::integer_type)
	                        && (type2 == Predefined::integer_type);
	bool real_mode    =    (type1 == Predefined::real_type)
						&& (type2 == Predefined::real_type);

	TypeSpec *type = integer_mode ? Predefined::integer_type
				   : real_mode    ? Predefined::real_type
				   :                nullptr;

	ctx->type = type;
	return value;
}

/*antlrcpp::Any Pass1Visitor::visitFuncCallExpr(Pcl1Parser::FuncCallExprContext *ctx)
{
    if(DEBUG_1) cout << "=== Pass 1: visitFuncCallExpr: " + ctx->getText() << endl;
    string func_name = ctx->function_call()->funcID()->getText();
    SymTabEntry *function_id = symtab_stack->lookup(func_name);
    ctx->type = function_id->get_typespec();
    return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitFuncID(Pcl1Parser::FuncIDContext *ctx)
{
	if(DEBUG_1) cout << "=== Pass 1:  visitFuncID: " + ctx->getText() << endl;
	string func_name = ctx->IDENTIFIER()->toString();
	SymTabEntry *function_id = symtab_stack->enter_local(func_name);
	function_id->set_definition((Definition) DF_FUNCTION);
	variable_id_list.push_back(function_id);
	return visitChildren(ctx);
}


antlrcpp::Any Pass1Visitor::visitFunction_defn(Pcl1Parser::Function_defnContext *ctx)
{
    if (DEBUG_1) cout << "=== Pass 1: visitFunction_defn: " + ctx->getText() << endl;
    func_id = ctx->funcID()->getText() + "_";

    variable_id_list.resize(0);
    auto value = visit(ctx->funcID());
    visit(ctx->typeID());

    TypeSpec *type;
    string type_indicator;
    string type_name = ctx->typeID()->getText();

    if (type_name == "int")
    {
        type = Predefined::integer_type;
        type_indicator = "I";
    }
    else if (type_name == "float")
    {
        type = Predefined::real_type;
        type_indicator = "F";
    }
    else
    {
        type = nullptr;
        type_indicator = "?";
    }
    for (SymTabEntry *id : variable_id_list)
    {
        id->set_typespec(type);
    }
    for (unsigned int i=0; i<ctx->declaration().size(); i++)
    {
    	visit(ctx->declaration(i));
    }
    visit(ctx->stmtList());
    func_id = "";
    return NULL;
}*/
