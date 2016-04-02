**Description:**

[Truth Tables](http://en.wikipedia.org/wiki/Truth_table) are a simple table that demonstrates all possible results given a Boolean algebra function. An example Boolean algebra function would be "A or B", where there are four possible combinations, one of which is "A:false, B:false, Result: false"

Your goal is to write a Boolean algebra function truth-table generator for statements that are up to 4 variables (always A, B, C, or D) and for only the following operators: [not](http://en.wikipedia.org/wiki/Logical_NOT), [and](http://en.wikipedia.org/wiki/Logical_AND), [or](http://en.wikipedia.org/wiki/Logical_OR), [nand](http://en.wikipedia.org/wiki/Logical_NAND), and [nor](http://en.wikipedia.org/wiki/Logical_NOR).

Note that you must maintain order of operator correctness, though evaluate left-to-right if there are ambiguous statements.

**Formal Inputs & Outputs:**

*Input Description:*

String BoolFunction - A string of one or more variables (always A, B, C, or D) and keyboards (not, and, or, nand, nor). This string is guaranteed to be valid

*Output Description:*

Your application must print all possible combinations of states for all variables, with the last variable being "Result", which should the correct result if the given variables were set to the given values. An example row would be "A:false, B:false, Result: false"

**Sample Inputs & Outputs:**

Given "A and B", your program should print the following:

A:false, B:false, Result: false
A:true, B:false, Result: false
A:false, B:true, Result: false
A:true, B:true, Result: true

**Notes:**

To help with cycling through all boolean combinations, realize that when counting from 0 to 3 in binary, you generate a table of all combinations of 2 variables (00, 01, 10, 11). You can extrapolate this out to itterating through all table rows for a given variable count. [Challenge #105](http://www.reddit.com/r/dailyprogrammer/comments/11shtj/10202012_challenge_105_intermediate_boolean_logic/) has a very similar premise to this challenge.