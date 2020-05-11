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

; a,b,c,d,e,fasinteger

.field private static a I
.field private static b I
.field private static c I
.field private static d I
.field private static e I
.field private static f I

; gasreal

.field private static g F

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

; beta5x=12.0

	ldc	12.0
	putstatic	sample1/beta5x F

; PEPELOOP}i=2+3*j;{TIMEPEPE(i<j+2)

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

; CHECKPEPE(i<=j)}i=j;{

Label_1:
	getstatic	sample1/i I
	getstatic	sample1/j I
	if_icmple Label_2
	goto Label_3
Label_2:

; i=j

	getstatic	sample1/j I
	putstatic	sample1/i I

; 

Label_3:

; PEPEPRINT('i = %d\n',i)

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"i = %d\n"
	ldc	1
	anewarray	java/lang/Object
	dup
	ldc	0
	getstatic	sample1/i I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop

; PEPEPRINT('Test\n')

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"Test\n"
	ldc	0
	anewarray	java/lang/Object
	invokevirtual java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop

; CHECKPEPE(j>i)}i=3*j;{ELSE}alpha=9.0;beta5x=alpha/3.0-alpha*2.0;{

Label_4:
	getstatic	sample1/j I
	getstatic	sample1/i I
	if_icmpgt Label_5
	goto Label_6
Label_5:

; i=3*j

	ldc	3
	getstatic	sample1/j I
	imul
	putstatic	sample1/i I

; 

	goto Label_7
Label_6:

; alpha=9.0

	ldc	9.0
	putstatic	sample1/alpha F

; beta5x=alpha/3.0-alpha*2.0

	getstatic	sample1/alpha F
	ldc	3.0
	fdiv
	getstatic	sample1/alpha F
	ldc	2.0
	fmul
	fsub
	putstatic	sample1/beta5x F

; 

Label_7:

; PEPEPRINT('i = %d\n',i)

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"i = %d\n"
	ldc	1
	anewarray	java/lang/Object
	dup
	ldc	0
	getstatic	sample1/i I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop

; PEPEPRINT('beta5x = %f\n',beta5x)

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"beta5x = %f\n"
	ldc	1
	anewarray	java/lang/Object
	dup
	ldc	0
	getstatic	sample1/beta5x F
	invokestatic	java/lang/Float.valueOf(F)Ljava/lang/Float;
	aastore
	invokevirtual java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop

; a=2

	ldc	2
	putstatic	sample1/a I

; b=4

	ldc	4
	putstatic	sample1/b I

; c=8

	ldc	8
	putstatic	sample1/c I

; d=16

	ldc	16
	putstatic	sample1/d I

; e=32

	ldc	32
	putstatic	sample1/e I

; f=a+c/b+d*e-a

	getstatic	sample1/a I
	getstatic	sample1/c I
	getstatic	sample1/b I
	idiv
	iadd
	getstatic	sample1/d I
	getstatic	sample1/e I
	imul
	iadd
	getstatic	sample1/a I
	isub
	putstatic	sample1/f I

; PEPEPRINT('f = %d\n',f)

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"f = %d\n"
	ldc	1
	anewarray	java/lang/Object
	dup
	ldc	0
	getstatic	sample1/f I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop

; 


	getstatic     sample1/_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 16
.limit stack 16
.end method
