# [](#EasyIcon) *(Easy)*: Quicksort

On a daily basis we take advantage of the power of a language's standard library. One of the common functions within such libraries is for sorting sets of data. This saves you some time so you don't have to write it yourself. But what about the occasions when you don't have a standard library?

You might be tempted to implement a sorting algorithm such as [insertion sort](http://en.wikipedia.org/wiki/Insertion_sort) or [bubble sort](http://en.wikipedia.org/wiki/Bubble_sort). However, while being simple, they are slow and inefficient, with O(n^(2)) running time - meaning on average, doubling the length of the list to be sorted increases the running time by a factor of four. Now this can be useful sometimes, eg. if you need to write a tiny program, like on an Arduino. However, in the vast majority of cases this is bad.

Luckily there are alternate methods of sorting. Today, we will be looking at a method known as [quicksort](http://en.wikipedia.org/wiki/Quicksort). This involves:

1. Start with the whole list.

2. Pick a random value from the list - it does not have to be from the middle. This will be our **pivot**.

3. Reorder the list, moving (in no particular order) everything that is smaller than the pivot to the left of it and everything that's greater than the pivot to the right of it.  
Now, the list to the left of, not including, the pivot is known as list S, and the list to the right of, not including, the pivot is known as list G.  
S and G don't have to be created in order, just so long as they are all smaller or greater than the pivot respectively.
4. Now repeat step 2 onward for lists S and G. If the list only contains zero or one items, you can stop, as it's by default sorted. If either only contains 2 items, it might make it quicker to just compare and swap if necessary instead of doing the whole sorting procedure.

You challenge today is, given an arbitrarily long list of real numbers, sort them using your own, *non-library* version of quicksort.

# Formal Inputs & Outputs

## Input

You will take an integer **N**. This will be the size of our list. You will then take a further **N** real (ie. floating/decimal) numbers on separate lines. This is the content of our list.

## Output

Output the list after sorting with your version of quicksort. This should also be on separate line.

# Notes

If you have not already learned it, this is a golden opportunity to use and learn [recursion](http://en.wikipedia.org/wiki/Recursion_%28computer_science%29). Remember, using your language's built-in sorting implementation defeats the purpose of this exercise, and if you do post such a solution, prepare for a sarcastic response.