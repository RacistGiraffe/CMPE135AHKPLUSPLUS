grammar Pcl1;

program : header block '{' ';' ;
header  : MAIN IDENTIFIER '}' ;
block   : declarations body ;

declarations : decl_list ';' ;
decl_list    : decl ( ';' decl )* ;
decl         : type_id '}' var_list '{' ;
var_list     : var_id ( ',' var_id )* ;
var_id       : IDENTIFIER ;
type_id      : IDENTIFIER ;

body         : BO stmt_list DY ;

stmt : body
     | assignment_stmt
     | loop_num_stmt
     | loop_until_stmt
     | if_stmt
     | while_stmt
     | print_stmt
     |
     ;

stmt_list       : stmt ( ';' stmt )* ;
assignment_stmt : variable '=' expr ;
loop_num_stmt       : LOOP ',' expr '}' stmt_list '{' ;
loop_until_stmt     : LOOP '}' stmt_list '{' UNTIL '(' expr ')' ;
if_stmt         : IF expr '}' stmt '{' ( ELSE '}' stmt_list '{' )? ;
while_stmt      : WHILE expr '}' stmt_list '{' ; 
print_stmt		: PRINT variable ;

variable : IDENTIFIER ;

expr : expr mul_div_op expr 
     | expr add_sub_op expr
     | expr rel_op expr
     | number
     | IDENTIFIER
     | '(' expr ')'
     | '}' expr '{'
     ;
     
number : sign? INTEGER ;
sign   : '+' | '-' ;

mul_div_op : MUL_OP | DIV_OP ;
add_sub_op : ADD_OP | SUB_OP ;
rel_op     : EQ_OP | NE_OP | LT_OP | LE_OP | GT_OP | GE_OP ;

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

MAIN    : M A I N ;
BO      : B O ;
DY      : D Y ;
VAR     : V A R ;
DO      : D O ;
WHILE   : W H I L E ;
IF      : I F ;
ELSE    : E L S E ;
UNTIL	: U N T I L ;
PRINT	: P R I N T ;
LOOP	: L O O P ;

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
NEWLINE    : '\r'? '\n' -> skip  ;
WS         : [ \t]+ -> skip ; 

