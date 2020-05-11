#include <iostream>
#include <fstream>

#include "antlr4-runtime.h"
#include "target/generated-sources/antlr4/MemertonsLexer.h"
#include "target/generated-sources/antlr4/MemertonsParser.h"
#include "Pass1Visitor.h"
#include "Pass2Visitor.h"

using namespace std;
using namespace antlrcpp;
using namespace antlr4;

int main(int argc, const char *args[])
{
    ifstream ins;
    ins.open(args[1]);

    ANTLRInputStream input(ins);
    MemertonsLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    MemertonsParser parser(&tokens);
    tree::ParseTree *tree = parser.program();

    Pass1Visitor *pass1 = new Pass1Visitor();
    pass1->visit(tree);

    Pass2Visitor *pass2 = new Pass2Visitor();
    pass2->visit(tree);

    return 0;
}
