# [](#EasyIcon) *(Easy)*: Real-World Merge Sort

Imagine you are an engineer working on some legacy code that has some odd constraints: you're being asked to implement a new function, which basically merges and sorts one list of integers into another list of integers, where you cannot allocate any other structures apart from simple temporary variables (such as an index or counter variable).

You will be given two lists, list A and B, where the elements are positive integers from 1 to 2147483647; the integer '0' is reserved as "buffer space". List A will *not* be pre-sorted, though list B *will* be pre-sorted *and* will start with a series of '0' values. These '0' values are simply reserved space in list B which is the same number of elements that list A has. You cannot modify list A in *any* way, though list B is fair game. **Your goal is to** return a merged and sorted list of elements of list A into list B, where you cannot allocate any extra space other than simple / trivial local variables for your function.

*Author: nint22*

# Formal Inputs & Outputs
## Input Description

You will be given two lists, list A and B, of integers from 1 to 2147483647. List A will be unsorted, while list B will be sorted. List B has extra elements in the start of the list that are all '0' value: this is buffered space for you to work with when merging and sorting list A into B. These two lists will be space-delimited and on separate lines.

## Output Description

Simply print the contents of list B, after it has had the contents of A merged & sorted within it.

# Sample Inputs & Outputs
## Sample Input

    692 1 32
    0 0 0 14 15 123 2431

## Sample Output

    1 14 15 32 123 692 2431

# Note

Please note that the real challenge here is respecting the premise of the challenge: you **must** implement your sort /  merge function inline into list B! If you do not understand the premise, please do ask questions and we will gladly answer. Good luck, and have fun!