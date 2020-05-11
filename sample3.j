.class public sample3
.super java/lang/Object

.field private static _runTimer LRunTimer;
.field private static _standardIn LPascalTextIn;

; a,b,c,d,e,fasinteger

.field private static a I
.field private static b I
.field private static c I
.field private static d I
.field private static e I
.field private static f I

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
	putstatic	sample3/_runTimer LRunTimer;
	new PascalTextIn
	dup
	invokenonvirtual PascalTextIn/<init>()V
	putstatic	sample3/_standardIn LPascalTextIn;

; a=2

	ldc	2
	putstatic	sample3/a I

; b=4

	ldc	4
	putstatic	sample3/b I

; c=8

	ldc	8
	putstatic	sample3/c I

; d=16

	ldc	16
	putstatic	sample3/d I

; e=32

	ldc	32
	putstatic	sample3/e I

; f=a+c/b+d*e-a

	getstatic	sample3/a I
	getstatic	sample3/c I
	getstatic	sample3/b I
	idiv
	iadd
	getstatic	sample3/d I
	getstatic	sample3/e I
	imul
	iadd
	getstatic	sample3/a I
	isub
	putstatic	sample3/f I

; PEPEPRINT('f = %d\n',f)

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"f = %d\n"
	ldc	1
	anewarray	java/lang/Object
	dup
	ldc	0
	getstatic	sample3/f I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop

; 


	getstatic     sample3/_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 16
.limit stack 16
.end method
