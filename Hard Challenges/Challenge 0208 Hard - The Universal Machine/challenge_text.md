# Description
Imagine an infinitely long, one-dimensional list of symbols. The list is infinite in both directions, and each symbol is indexed by a number, where the middle of the list is zero. This is called a **tape**. The symbols on the tape can be any symbol from an **alphabet**, which is just a set of possible symbols. If our example alphabet consists of the symbols `0`, `1` and `#`, then a valid tape would look like:
```
#0110#10101#111#01##
|
```
(The `|` marks the location of the middle of the tape, position zero.) Of course, we can't represent an infinite tape at once. Therefore, we add another possible symbol to our alphabet, `_` (underscore), to denote the lack of a symbol. This `_` symbol fills the rest of the tape, all the way out to infinity, like so (ellipsis denotes repeat):
```
. . . _________________#0110#10101#111#01##_________________ . . .
                       |
```
Now, imagine we have a **machine** that can look at this tape, but it can only see one symbol on the tape at once. To look at this tape, it has a **read head**. In our tape diagrams, the read head is marked with a caret (`^`). For example, here's the read head at position 7:
```
#0110#10101#111#01##
|      ^
```

This read head can move one symbol to the left or right, but it can't skip ahead arbitrarily or jump to a specific location. Besides the read head, the machine also has a **state**. This is just an alphanumeric string, with no spaces, like a variable of the machine. It could be `Red`, it could be `Clockwise`, it could be `Catch22`, it could be `Tgnqovjaxbg`, as long as it's alphanumeric.

Now, this machine is capable of performing a **step**. A step will change the symbol under the read head to another symbol from the alphabet, and then either move the read head left or right. The type of step that happens depends on the current state, and the current symbol under the read head. We can define a rule for our machine which says something like this:

  If the current symbol under the read head is **p**, and the current state is **A**, then change the state to **B**, change the symbol under the read head to **q** and move the read head in direction **d**.
  
**p** and **q** can be the same symbol, and **A** and **B** can be the same state. For example:

  If the current symbol under the read head is `0`, and the current state is `State1`, then change the state to `State1`, change the symbol under the read head to `1` and move the read head left.
  
This rule is called a **transition function**, and the typical notation is:
```
𝛿(A, p) = (B, q, d)
```

So our example rule is:
```
𝛿(State1, 0) = (State1, 1, <)
```

So, if our machine is in the state State1 and our tape looks like this:
```
#0110#10101#111#01##
|      ^
```
Then, after applying our transition function above, we're now in State1 (again) and the tape now looks like this:
```
#0110#11101#111#01##
|     ^
```

You'll typically have quite a few transition functions to cover every possible state/symbol combination. After each step, the machine compares the new state to a special state known as the accepting state. If the current state is the accepting state, then the machine stops, as the computation is complete.

Whew, that's a lot of information! Here's the synopsis of what you need to describe one of these machines:

- The **alphabet**: all possible symbols (along with `_`, which is implicitly part of the alphabet.)
- The **tape** at the start of the computation.
- The **starting position** of the read head on the tape; this is assumed to be zero.
- The **list of possible** states that our machine can be in.
- The **starting state**, and the **accepting state**.
- A list of **transition functions**, that cover every possible symbol/state combination on the given tape.

This type of machine is known as a [Turing machine](https://en.wikipedia.org/wiki/Turing_machine), named after the famous groundbreaking computer scientist and mathematician [Alan Turing](https://en.wikipedia.org/wiki/Alan_Turing). It sounds hopelessly verbose in practice, but a Turing machine is insanely useful as a theoretical model for computation. To gloss over quite a few details: if a machine can simulate any such Turing machine as described above, then it's described as **Turing-complete**. Today, you'll be writing a program to simulate a turing machine given the above required parameters; therefore, you'll need to use a Turing-complete language to solve this challenge. :)

# Formal Inputs and Outputs

## Input Description

First, you will be given the alphabet of a Turing machine (excluding `_`, which is always part of the alphabet) as a sequence of non-whitespace characters, like so:
```
01
```
Next, you will be given a space-separated list of possible states for the machine, like this:
```
Mov B Bi OK
```
You will then be given the initial state, and the accepting state, on two lines:
```
Mov
OK
```
After this, you will be given the initial tape to use. The first character is assumed to be at position 0, with following characters at successive locations (1, 2, 3, etc.), like so:
```
01100100
```
Finally, you're given a list of transition rules. These are in the format `StateBefore SymbolBefore = StateAfter SymbolAfter DirectionToMove`, like this list:
```
Mov 0 = Mov 0 >
Mov 1 = Mov 1 >
Mov _ = B _ <
B 0 = B 0 <
B 1 = Bi 1 <
B _ = OK _ >
Bi 0 = Bi 1 <
Bi 1 = Bi 0 <
Bi _ = OK _ >
```
The direction is either `<` for left, or `>` for right.

## Output Description

You are to output the tape after the computation has finished. You are also to output the symbol `|` (pipe) under the middle of the tape (position zero), and output the symbol `^` (caret) under the position of the read head after the computation has finished. If the `^` and `|` would be in the same place (ie. the read head finishes at the middle of the tape), just print only the `|`.
```
10011100
|
```

# Sample Turing Machines

##Machine 1: Two's Complement

This machine computes the two's complement of the binary number in the input. Notice how the transition functions can use the `_` symbol, even though it's not explicitly part of the alphabet.

### Input
```
01
Mov B Bi OK
Mov
OK
01100100
Mov 0 = Mov 0 >
Mov 1 = Mov 1 >
Mov _ = B _ <
B 0 = B 0 <
B 1 = Bi 1 <
B _ = OK _ >
Bi 0 = Bi 1 <
Bi 1 = Bi 0 <
Bi _ = OK _ >
```

### Output
```
10011100
|
```

## Machine 2: Moving Morse Code

This machine takes input as dots (`.`) and dashes (`/`), including a delimiter symbol, `k`. The dots and dashes are moved to after the `k`.

### Input
```
./k
Init Mdot MDash Ret OK
Init
OK
/././../.../..../k
Init _ = Init _ >
Init . = Mdot _ >
Init / = MDash _ >
Init k = OK k >
Mdot . = Mdot . >
Mdot / = Mdot / >
Mdot k = Mdot k >
Mdot _ = Ret . <
MDash . = MDash . >
MDash / = MDash / >
MDash k = MDash k >
MDash _ = Ret / <
Ret . = Ret . <
Ret / = Ret / <
Ret k = Ret k <
Ret _ = Init _ >
```

###Output
```
_________________k/././../.../..../
|                 ^                
```

Notice all the spaces in the output, as the dots and dashes are now not centered on the middle of the tape.

##Machine 3: Copying

This machine takes a binary input string, including a delimiter symbol at the end. The binary string is copied to after the delimiter symbol.

###Input
```
01xy#
C0 C1 Ret Search OK
Search
OK
0110100#
Search 0 = C0 x >
Search 1 = C1 y >
Search # = OK # >
C0 0 = C0 0 >
C0 1 = C0 1 >
C0 # = C0 # >
C0 _ = Ret 0 <
C1 0 = C1 0 >
C1 1 = C1 1 >
C1 # = C1 # >
C1 _ = Ret 1 <
Ret 0 = Ret 0 <
Ret 1 = Ret 1 <
Ret # = Ret # <
Ret x = Search 0 >
Ret y = Search 1 >
```

###Output
```
0110100#0110100
|       ^      
```

#Notes and Further Reading

The Wolfram MathWorld [page on Turing Machines](http://mathworld.wolfram.com/TuringMachine.html) has some more description of the concept of turing machines. Sometimes cell 'colours' are used rather than 'symbols', but the over-arching concept is always the same.
Got any cool challenge ideas? Submit them to [/r/DailyProgrammer_Ideas](https://www.reddit.com/r/DailyProgrammer_Ideas)!
