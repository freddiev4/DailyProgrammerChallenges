# [](#IntermediateIcon) *(Intermediate)*: Halt! It's simulation time!

The [Halting Problem](http://en.wikipedia.org/wiki/Halting_problem), in computational theory, is the challenge of determining if a given program and data, when started, will actually finish. In more simple terms: it is essentially impossible to determine if an arbitrary program will ever complete because of how quickly a program's complexity can grow. One could attempt to partially solve the program by attempting to find logical errors, such as infinite loops or bad iteration conditions, but this cannot verify if complex structures ever halt. Another partial solution is to just simulate the code and see if it halts, though this fails for any program that becomes reasonably large. For this challenge, you will be doing this last approach:

Your goal is to simulate a given program, written in a subset of common assembly instructions listed below, and measure how many instructions were executed before the program halts, or assume the program never halts after executing 100,000 instructions. The fictional computer architecture that runs these instructions does so one instruction at a time, starting with the first and only stopping when the "HALT" instruction is executed or when there is no next instruction. The memory model is simple: it has 32 1-bit registers, indexed like an array. Memory can be treated conceptually like a C-style array named M: M[0], M[1], ..., M[31] are all valid locations. All memory should be initialized to 0. Certain instructions have arguments, which will always be integers between 0 to 31 (inclusive).

The instruction set only has 10 instructions, as follows:

| Instruction   | Description    |
|:-----------|------------:|
| AND a b	| M[a] = M[a] bit-wise and M[b]
| OR a b	| M[a] = M[a] bit-wise or M[b]
| XOR a b	| M[a] = M[a] bit-wise xor M[b]
| NOT a     | M[a] = bit-wise not M[a]
| MOV a b	| M[a] = bit-wise M[b]
| SET a c	| M[a] = c
| RANDOM a	| M[a] = random value (0 or 1; equal probability distribution)
| JMP x	    | Start executing instructions at index x
| JZ x a	| Start executing instructions at index x if M[a] == 0
| HALT	    | Halts the program

Note that memory and code reside in different places! Basically you can modify memory, but cannot modify code.

*Special thanks to the ACM collegiate programming challenges group for giving me the initial idea [here](https://icpcarchive.ecs.baylor.edu/index.php?option=com_onlinejudge&Itemid=8&category=12&page=show_problem&problem=945). Please note that one cannot actually solve the Halting problem, and that this is strictly a mini-simulation challenge.*

# Formal Inputs & Outputs
## Input Description

You will first be given an integer N, which represents the number of instructions, one per line, that follows. Each of these lines will start with an instruction from the table above, with correctly formed arguments: the given program will be guaranteed to **never** crash, but are **not** guaranteed to ever halt (that's what we are testing!).

## Output Description

Simply run the program within your own simulation; if it halts (runs the HALT instruction) or ends (goes past the final instruction), write "Program halts!" and then the number of instructions executed. If the program does not halt or end within 100,000 instruction executions, stop the simulation and write "Unable to determine if application halts".

# Sample Inputs & Outputs
## Sample Input

    5
    SET 0 1
    JZ 4 0
    RANDOM 0
    JMP 1
    HALT

## Sample Output

    "Program halts! 5 instructions executed."
