.class public sample4
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
	putstatic	sample4/_runTimer LRunTimer;
	new PascalTextIn
	dup
	invokenonvirtual PascalTextIn/<init>()V
	putstatic	sample4/_standardIn LPascalTextIn;

; i=0

	ldc	0
	putstatic	sample4/i I

; j=1

	ldc	1
	putstatic	sample4/j I

; PEPEPRINT('Expecting to print true\n')

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"Expecting to print true\n"
	ldc	0
	anewarray	java/lang/Object
	invokevirtual java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop

; CHECKPEPE(i<j)}PEPEPRINT('TRUE\n');{

Label_0:
	getstatic	sample4/i I
	getstatic	sample4/j I
	if_icmplt Label_1
	goto Label_2
Label_1:

; PEPEPRINT('TRUE\n')

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"TRUE\n"
	ldc	0
	anewarray	java/lang/Object
	invokevirtual java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop

; 

Label_2:

; PEPEPRINT('Expecting to print k = j = 1\n')

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"Expecting to print k = j = 1\n"
	ldc	0
	anewarray	java/lang/Object
	invokevirtual java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop

; CHECKPEPE(i>j)}k=i;PEPEPRINT('k = i = %d\n',k);{PEPEOTHER}k=j;PEPEPRINT('k = j = %d\n',k);{

Label_3:
	getstatic	sample4/i I
	getstatic	sample4/j I
	if_icmpgt Label_4
	goto Label_5
Label_4:

; k=i

	getstatic	sample4/i I
	putstatic	sample4/k I

; PEPEPRINT('k = i = %d\n',k)

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"k = i = %d\n"
	ldc	1
	anewarray	java/lang/Object
	dup
	ldc	0
	getstatic	sample4/k I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop

; 

	goto Label_6
Label_5:

; k=j

	getstatic	sample4/j I
	putstatic	sample4/k I

; PEPEPRINT('k = j = %d\n',k)

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"k = j = %d\n"
	ldc	1
	anewarray	java/lang/Object
	dup
	ldc	0
	getstatic	sample4/k I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop

; 

Label_6:

; PEPEPRINT('Expecting to print k = i = 0\n')

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"Expecting to print k = i = 0\n"
	ldc	0
	anewarray	java/lang/Object
	invokevirtual java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop

; CHECKPEPE(i<j)}k=i;PEPEPRINT('k = i = %d\n',k);{PEPEOTHER}k=j;PEPEPRINT('k = j = %d\n',k);{

Label_6:
	getstatic	sample4/i I
	getstatic	sample4/j I
	if_icmplt Label_7
	goto Label_8
Label_7:

; k=i

	getstatic	sample4/i I
	putstatic	sample4/k I

; PEPEPRINT('k = i = %d\n',k)

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"k = i = %d\n"
	ldc	1
	anewarray	java/lang/Object
	dup
	ldc	0
	getstatic	sample4/k I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop

; 

	goto Label_9
Label_8:

; k=j

	getstatic	sample4/j I
	putstatic	sample4/k I

; PEPEPRINT('k = j = %d\n',k)

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"k = j = %d\n"
	ldc	1
	anewarray	java/lang/Object
	dup
	ldc	0
	getstatic	sample4/k I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop

; 

Label_9:

; 


	getstatic     sample4/_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 16
.limit stack 16
.end method
