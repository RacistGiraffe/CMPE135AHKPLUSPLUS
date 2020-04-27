#include <iostream>
#include <fstream>

#include "antlr4-runtime.h"
#include "target/generated-sources/antlr4/Pcl1Lexer.h"
#include "target/generated-sources/antlr4/Pcl1Parser.h"
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
    Pcl1Lexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    Pcl1Parser parser(&tokens);
    tree::ParseTree *tree = parser.program();

    Pass1Visitor *pass1 = new Pass1Visitor();
    pass1->visit(tree);

    Pass2Visitor *pass2 = new Pass2Visitor();
    pass2->visit(tree);

    return 0;
}
