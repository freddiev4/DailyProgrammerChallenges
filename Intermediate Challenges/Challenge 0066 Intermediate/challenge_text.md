Maxiphobic heaps are a variant of leftist heaps. Like leftist heaps, maxiphobic heaps are represented as binary trees arranged according to the heap property that every element is less than or equal to its two children. Find-min looks at the root of the tree, delete-min discards the root and merges its two children, and insert merges the existing tree with a singleton tree containing the new element.

The key to leftist trees and maxiphobic trees is the merge operation. In leftist trees, the rank of each left child is always less than the rank of its sibling, where the rank of a node is defined as the length of its right spine, and the merge operation enforces this invariant.  

In maxiphobic trees, the merge operation is implemented by comparing the roots of the two trees. The smaller root survives as the root of the merged tree. That leaves three sub-trees: the tree that lost in the comparison of the two roots, and the child sub-trees of the winner. They are merged by first merging the two smaller trees, where the size of a tree is determined as the number of elements it contains, then attaching that merged tree along with the remaining tree as the children of the new root. 

The name maxiphobic, meaning “biggest avoiding,” refers to the merge of the two smaller sub-trees.


Your task is to write functions that implement maxiphobic trees.

source : [programmingpraxis.com](http://programmingpraxis.com/2010/09/28/maxiphobic-heaps/)