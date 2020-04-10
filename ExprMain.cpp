#include <iostream>
#include <fstream>

#include "antlr4-runtime.h"
#include "Pcl1Lexer.h"
#include "Pcl1Parser.h"

using namespace antlrcpp;
using namespace antlr4;
using namespace std;

int main(int argc, const char *args[])
{
    ifstream ins;
    ins.open(args[1]);

    ANTLRInputStream input(ins);
    Pcl1Lexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    tokens.fill();

    cout << "Tokens:" << endl;
    for (Token *token : tokens.getTokens())
    {
        std::cout << token->toString() << std::endl;
    }

    Pcl1Parser parser(&tokens);
    tree::ParseTree *tree = parser.program();

    cout << endl << "Parse tree (Lisp format):" << endl;
    std::cout << tree->toStringTree(&parser) << endl;

    return 0;
}
