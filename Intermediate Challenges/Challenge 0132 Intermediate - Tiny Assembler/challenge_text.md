# [](#IntermediateIcon) *(Intermediate)*: Tiny Assembler

*Tiny*, a very simple fictional computer architecture, is programmed by an assembly language that has 16 [mnemonics](http://en.wikipedia.org/wiki/Assembly_language#Opcode_mnemonics_and_extended_mnemonics), with 37 unique op-codes. The system is based on [Harvard architecture](http://en.wikipedia.org/wiki/Harvard_architecture), and is very straight-forward: program memory is different from working memory, the machine only executes one instruction at a time, memory is an array of bytes from index 0 to index 255 (inclusive), and doesn't have any relative addressing modes. Instructions are multibyte, much like the X86 architecture. Simple instructions like HALT only take one byte, while complex instructions like JLS (Jump if Less-than) take four bytes.

Your goal will be to write an [assembler](http://en.wikipedia.org/wiki/Assembler_(computing\)#Assembler) for Tiny: though you don't need to simulate the code or machine components, you must take given assembly-language source code and produce a list of hex op-codes. You are essentially writing code that converts the lowest human-readable language to machine-readable language!

The following are all mnemonics and associated op-codes for the Tiny machine. Note that brackets mean "content of address-index" while non-brackets mean literals. For example, the instruction "AND [0] 1" will set the contents of the first element (at index 0) of memory to 1 if, and only if, the original contents at that element are equal to the given literal 1.

**Google Documents of the below [found here](https://docs.google.com/document/d/1lDk_1dLz82iwc-1hESNFSepcz4Swyaf9P1j5hvR2iHw).**

|	Group	|	Instruction	|	Byte Code	|	Description	|
|	:-----------	|	:-----------	|	:-----------	|	:-----------	|
|	1. Logic	|	AND a b	|	2 Ops, 3 bytes:	|	M[a] = M[a] bit-wise and M[b]	|
|		|		|	0x00 [a] [b]	|		|
|		|		|	0x01 [a] b	|		|
|		|	OR a b	|	2 Ops, 3 bytes:	|	M[a] = M[a] bit-wise or M[b]	|
|		|		|	0x02 [a] [b]	|		|
|		|		|	0x03 [a] b	|		|
|		|	XOR a b	|	2 Ops, 3 bytes:	|	M[a] = M[a] bit-wise xor M[b]	|
|		|		|	0x04 [a] [b]	|		|
|		|		|	0x05 [a] b	|		|
|		|	NOT a	|	1 Op, 2 bytes:	|	M[a] = bit-wise not M[a]	|
|		|		|	0x06 [a]	|		|
|	2. Memory	|	MOV a b	|	2 Ops, 3 bytes:	|	M[a] = M[b], or the literal-set M[a] = b	|
|		|		|	0x07 [a] [b]	|		|
|		|		|	0x08 [a] b	|		|
|	3. Math	|	RANDOM a	|	1 Ops, 2 bytes:	|	M[a] = random value (0 to 25; equal probability distribution)	|
|		|		|	0x09 [a]	|		|
|		|	ADD a b	|	2 Ops, 3 bytes:	|	M[a] = M[a] + b; no overflow support	|
|		|		|	0x0a [a] [b]	|		|
|		|		|	0x0b [a] b	|		|
|		|	SUB a b	|	2 Ops, 3 bytes:	|	M[a] = M[a] - b; no underflow support	|
|		|		|	0x0c [a] [b]	|		|
|		|		|	0x0d [a] b	|		|
|	4. Control	|	JMP x	|	2 Ops, 2 bytes:	|	Start executing instructions at index of value M[a] (So given a is zero, and M[0] is 10, we then execute instruction 10) or the literal a-value	|
|		|		|	0x0e [x]	|		|
|		|		|	0x0f x	|		|
|		|	JZ x a	|	4 Ops, 3 bytes:	|	Start executing instructions at index x if M[a] == 0 (This is a nice short-hand version of )	|
|		|		|	0x10 [x] [a]	|		|
|		|		|	0x11 [x] a	|		|
|		|		|	0x12 x [a]	|		|
|		|		|	0x13 x a	|		|
|		|	JEQ x a b	|	4 Ops, 4 bytes:	|	Jump to x or M[x] if M[a] is equal to M[b] or if M[a] is equal to the literal b.	|
|		|		|	0x14 [x] [a] [b]	|		|
|		|		|	0x15 x [a] [b]	|		|
|		|		|	0x16 [x] [a] b	|		|
|		|		|	0x17 x [a] b	|		|
|		|	JLS x a b	|	4 Ops, 4 bytes:	|	Jump to x or M[x] if M[a] is less than M[b] or if M[a] is less than the literal b.	|
|		|		|	0x18 [x] [a] [b]	|		|
|		|		|	0x19 x [a] [b]	|		|
|		|		|	0x1a [x] [a] b	|		|
|		|		|	0x1b x [a] b	|		|
|		|	JGT x a b	|	4 Ops, 4 bytes:	|	Jump to x or M[x] if M[a] is greater than M[b] or if M[a] is greater than the literal b.	|
|		|		|	0x1c [x] [a] [b]	|		|
|		|		|	0x1d x [a] [b]	|		|
|		|		|	0x1e [x] [a] b	|		|
|		|		|	0x1f x [a] b	|		|
|		|	HALT	|	1 Op, 1 byte:	|	Halts the program / freeze flow of execution	|
|		|		|	0xff	|		|
|	5. Utilities	|	APRINT a	|	4 Ops, 2 byte:	|	Print the contents of M[a] in either ASCII (if using APRINT) or as decimal (if using DPRINT). Memory ref or literals are supported in both instructions.	|
|		|	DPRINT a	|	0x20 \[a\] (as ASCII; aprint)	|		|
|		|		|	0x21 a (as ASCII)	|		|
|		|		|	0x22 \[a\] (as Decimal; dprint)	|		|
|		|		|	0x23 a (as Decimal)	|		|


*Original author: /u/nint22*

# Formal Inputs & Outputs
## Input Description

You will be given the contents of a file of Tiny assembly-language source code. This text file will only contain source-code, and no meta-data or comments. The source code is not case-sensitive, so the instruction "and", "And", and "AND" are all the same.

## Output Description

Print the resulting op-codes in hexadecimal value. Formatting does not matter, as long as you print the *correct* hex-code!

# Sample Inputs & Outputs
## Sample Input

*The following Tiny assembly-language code will multiply the numbers at memory-location 0 and 1, putting the result at memory-location 0, while using [2] and [3] as working variables. All of this is done at the lowest 4 bytes of memory.*

    Mov [2] 0
    Mov [3] 0
    Jeq 6 [3] [1]
    Add [3] 1
    Add [2] [0]
    Jmp 2
    Mov [0] [2]
    Halt

## Sample Output

    0x08 0x02 0x00
    0x08 0x03 0x00
    0x15 0x06 0x03 0x01
    0x0B 0x03 0x01
    0x0A 0x02 0x00
    0x0F 0x02
    0x07 0x00 0x02
    0xFF

# Challenge Bonus

If you write an interesting Tiny-language program and successfully run it against your assembler, you'll win a silver medal! If you can formally prove (it won't take much effort) that this language / machine is Turing Complete, you'll win a gold medal!
