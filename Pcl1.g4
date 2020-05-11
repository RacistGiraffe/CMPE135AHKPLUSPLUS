grammar Pcl1;

@header {
	#include "wci/intermediate/TypeSpec.h"
	using namespace wci::intermediate;
}

program 	: header mainBlock '.' ;
header  	: MAIN IDENTIFIER ';' ;
mainBlock 	: block;
block   	: declarations compoundStmt ;

declarations 	: declList ';' ;
declList    	: decl ( ';' decl )* ;
decl         	: varList 'as' typeId ;
varList     	: varId ( ',' varId )* ;
varId locals [ TypeSpec *type = nullptr ] : IDENTIFIER ; 
typeId      	: IDENTIFIER ;

compoundStmt         : BO stmtList DY ;

stmt : compoundStmt
     | assignmentStmt
     | loop_while_stmt
     | if_stmt
     | printStmt
     |
     ;

stmtList       : stmt ( ';' stmt )* ;
assignmentStmt : variable '=' expr ;
loop_while_stmt     : LOOP '}' stmtList '{' WHILE '(' expr ')' ;
if_stmt         : IF '(' expr ')' '}' (( stmtList ) '{' ( ELSE  '}' stmtList '{'  )?) ;
printStmt		: PRINT '(' formatString printArg* ')';

formatString   : STRING ;
printArg       : ',' expr ;


variable : IDENTIFIER ;

expr locals [ TypeSpec *type = nullptr ]
	 : expr mulDivOp expr  	#mulDivExpr
     | expr addSubOp expr  	#addSubExpr
     | expr relOp expr 		#relOpExpr
     | number				#unsignedNumberExpr
     | signedNumber			#signedNumberExpr
     | variable				#variableExpr
     | '(' expr ')'			#parenExpr
     ;
		
mulDivOp : MUL_OP | DIV_OP ;
addSubOp : ADD_OP | SUB_OP ;
relOp     : EQ_OP | NE_OP | LT_OP | LE_OP | GT_OP | GE_OP ;

signedNumber locals [ TypeSpec *type = nullptr ] 
    : sign number 
    ;
sign   : ADD_OP | SUB_OP ;

number locals [ TypeSpec *type = nullptr ]
    : INTEGER    # integerConst
    | FLOAT      # floatConst
    ;
    
typeID 	: IDENTIFIER
	| INTEGER_TYPE
	| FLOAT_TYPE
	;

fragment A : [Aa];
fragment B : [Bb];
fragment C : [Cc];
fragment D : [Dd];
fragment E : [Ee];
fragment F : [Ff];
fragment G : [Gg];
fragment H : [Hh];
fragment I : [Ii];
fragment J : [Jj];
fragment K : [Kk];
fragment L : [Ll];
fragment M : [Mm];
fragment N : [Nn];
fragment O : [Oo];
fragment P : [Pp];
fragment Q : [Qq];
fragment R : [Rr];
fragment S : [Ss];
fragment T : [Tt];
fragment U : [Uu];
fragment V : [Vv];
fragment W : [Ww];
fragment X : [Xx];
fragment Y : [Yy];
fragment Z : [Zz];

MAIN    : P E P E ;
BO      : B O ;
DY      : D Y ;
VAR     : V A R ;
DO      : D O ;
WHILE   : T I M E P E P E ;
IF      : C H E C K P E P E ;
ELSE    : E L S E ;
UNTIL	: U N T I L ;
PRINT	: P E P E P R I N T ;
LOOP	: P E P E L O O P ;
END		: E N D ;
INTEGER_TYPE : 'int';
FLOAT_TYPE: 'float';
RETURN : R E T U R N ;

MUL_OP :   '*' ;
DIV_OP :   '/' ;
ADD_OP :   '+' ;
SUB_OP :   '-' ;

EQ_OP : '==' ;
NE_OP : '<>' ;
LT_OP : '<' ;
LE_OP : '<=' ;
GT_OP : '>' ;
GE_OP : '>=' ;

IDENTIFIER : [a-zA-Z][a-zA-Z0-9]* ;
INTEGER    : [0-9]+ ;
FLOAT      : [0-9]+ '.' [0-9]+ ;
NEWLINE    : '\r'? '\n' -> skip  ;
WS         : [ \t]+ -> skip ; 

QUOTE  : '\'' ;
STRING : QUOTE STRING_CHAR* QUOTE ;

fragment STRING_CHAR : QUOTE QUOTE  // two consecutive quotes
                     | ~('\'')      // any non-quote character
                     ;