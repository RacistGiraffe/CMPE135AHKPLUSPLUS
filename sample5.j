.class public sample5
.super java/lang/Object

.field private static _runTimer LRunTimer;
.field private static _standardIn LPascalTextIn;

; i,j,kasinteger

.field private static i I
.field private static j I
.field private static k I

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
	putstatic	sample5/_runTimer LRunTimer;
	new PascalTextIn
	dup
	invokenonvirtual PascalTextIn/<init>()V
	putstatic	sample5/_standardIn LPascalTextIn;

; i=0

	ldc	0
	putstatic	sample5/i I

; j=-1

	ldc	1
	ineg
	putstatic	sample5/j I

; k=i+j

	getstatic	sample5/i I
	getstatic	sample5/j I
	iadd
	putstatic	sample5/k I

; PEPEPRINT('k = %d\n',k)

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"k = %d\n"
	ldc	1
	anewarray	java/lang/Object
	dup
	ldc	0
	getstatic	sample5/k I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop

; k=k*-1

	getstatic	sample5/k I
	ldc	1
	ineg
	imul
	putstatic	sample5/k I

; PEPEPRINT('k = %d\n',k)

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"k = %d\n"
	ldc	1
	anewarray	java/lang/Object
	dup
	ldc	0
	getstatic	sample5/k I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop

; k=k*2

	getstatic	sample5/k I
	ldc	2
	imul
	putstatic	sample5/k I

; k=k-1

	getstatic	sample5/k I
	ldc	1
	isub
	putstatic	sample5/k I

; k=k--1

	getstatic	sample5/k I
	ldc	1
	ineg
	isub
	putstatic	sample5/k I

; PEPEPRINT('k = %d\n',k)

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"k = %d\n"
	ldc	1
	anewarray	java/lang/Object
	dup
	ldc	0
	getstatic	sample5/k I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop

; 


	getstatic     sample5/_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 16
.limit stack 16
.end method
