.class public sample2
.super java/lang/Object

.field private static _runTimer LRunTimer;
.field private static _standardIn LPascalTextIn;

; i,jasinteger

.field private static i I
.field private static j I

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
	putstatic	sample2/_runTimer LRunTimer;
	new PascalTextIn
	dup
	invokenonvirtual PascalTextIn/<init>()V
	putstatic	sample2/_standardIn LPascalTextIn;

; i=1

	ldc	1
	putstatic	sample2/i I

; j=10

	ldc	10
	putstatic	sample2/j I

; PEPELOOP}i=i+1;PEPEPRINT('i = %d\n',i);{TIMEPEPE(i!=j)

Label_0:

; i=i+1

	getstatic	sample2/i I
	ldc	1
	iadd
	putstatic	sample2/i I

; PEPEPRINT('i = %d\n',i)

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"i = %d\n"
	ldc	1
	anewarray	java/lang/Object
	dup
	ldc	0
	getstatic	sample2/i I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop

; 

	getstatic	sample2/i I
	getstatic	sample2/j I
	if_icmpne Label_0

; 


	getstatic     sample2/_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 16
.limit stack 16
.end method
