.class public sample1
.super java/lang/Object

.field private static _runTimer LRunTimer;
.field private static _standardIn LPascalTextIn;

; i,jasinteger

.field private static i I
.field private static j I

; alpha,beta5xasreal

.field private static alpha F
.field private static beta5x F

.method public <init>()V

	aload_0
	invokenonvirtual java/lang/Object/<init>()V
	return

.limit locals 1
.limit stack 1
.end method

.method public static main([Ljava/lang/String;)V

	new RunTimer
	dup
	invokenonvirtual RunTimer/<init>()V
	putstatic	sample1/_runTimer LRunTimer;
	new PascalTextIn
	dup
	invokenonvirtual PascalTextIn/<init>()V
	putstatic	sample1/_standardIn LPascalTextIn;

; j=32

	ldc	32
	putstatic	sample1/j I

; LOOP}i=2+3*j;{WHILE(i<j+2)

Label_0:

; i=2+3*j

	ldc	2
	ldc	3
	getstatic	sample1/j I
	imul
	iadd
	putstatic	sample1/i I

; 

	getstatic	sample1/i I
	getstatic	sample1/j I
	ldc	2
	iadd
	if_icmplt Label_0

; IF(i<=j)}i=j;{

Label_1:
	getstatic	sample1/i I
	getstatic	sample1/j I
	if_icmple Label_2
Label_2:

; i=j

	getstatic	sample1/j I
	putstatic	sample1/i I

; 


; IF(j>i)}i=3*j;{ELSE}alpha=9.0;beta5x=alpha/3.0;beta5x=beta5x-alpha*2.0;{

Label_4:
	getstatic	sample1/j I
	getstatic	sample1/i I
	if_icmpgt Label_5

; alpha=9.0

	ldc	9.0
	putstatic	sample1/alpha F

; beta5x=alpha/3.0

	getstatic	sample1/alpha F
	ldc	3.0
	fdiv
	putstatic	sample1/beta5x F

; beta5x=beta5x-alpha*2.0

	getstatic	sample1/beta5x F
	getstatic	sample1/alpha F
	ldc	2.0
	fmul
	fsub
	putstatic	sample1/beta5x F

; 

	goto Label_6
Label_5:

; i=3*j

	ldc	3
	getstatic	sample1/j I
	imul
	putstatic	sample1/i I

; 

Label_6:

; 


	getstatic     sample1/_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 16
.limit stack 16
.end method
