In [his paper describing the so-called "Dancing Links" algorithm](http://arxiv.org/abs/cs/0011047) for solving exact cover problems (press the PDF link to see the full paper), Donald Knuth describes a rather fascinating data-structure, basically a [sparse binary matrix](http://en.wikipedia.org/wiki/Sparse_matrix) implemented using [doubly linked lists](http://en.wikipedia.org/wiki/Linked_list#Singly.2C_doubly.2C_and_multiply_linked_lists). The linked lists are two-dimensional, so instead of just having "left" and "right" links, it has "up" and "down" links as well). 

In other words, if you are given a matrix of ones and zeroes, like this:
    
    0 0 1 0 1 1 0
    1 0 0 1 0 0 1
    0 1 1 0 0 1 0
    1 0 0 1 0 0 0
    0 1 0 0 0 0 1
    0 0 0 1 1 0 1
    
You create a data-structure that looks something [like this](http://i.imgur.com/RXAvI.png). 

The link that's marked "h" is the head link, indicating the "head" of the data-structure. The links to the right of the head link are the column headers, indicating the columns. The number that's in the column header indicates how many ones there are in that column (and thus how many links there are in that particular column). Storing those numbers is entirely optional.

The rest of the structure is created from the 0s and 1s of the matrix. If there's a 1 in the input matrix, there's a link in the data structure, if there's a 0 in the input matrix, then there's no link. 

As an example, you'll notice in the input matrix that there are 1s in the third, fifth and sixth columns, so in the finished data structure, there are links in the third, fifth and sixth columns. Each link in the matrix has left and right links (to the previous and next items in the same row) and up and down links (to the previous and next items in the same column). If there are no links in the left/right/up/down, the link "wraps around" to the other side of the row or column.

While this data-structure might look huge and daunting at first glance, it turns out that it is actually quite nimble. Once constructed, rows and columns can be removed and put back with surprising ease and elegance. Indeed, when you visualize that happening in your head, it really seems as if the links are dancing.

Your task today is this: given a matrix of ones and zeroes, construct this complicated linked list data-structure. You may assume that no row or column in the original input matrix of 1s and 0s consist entirely of 0s: there's always going to be at least one 1 in every row or column.

As a bonus, you may also implement any number of the following functions that operate on the data structure:

* remove_column(X): If X is a link in the matrix data-structure, completely remove X's column from the matrix, while still maintaining the correct structure (i.e. fix all the links so they're pointing where they should point when the column is removed). Note that X can be any link in a column or a column header.

* remove_row(X): Same thing as the previous function, only this time it removes the row instead of the column

* restore_column(X): If X is a link in a column that was previously removed using remove_column(X), this function restores the column to the matrix. That is, if X is a link in the matrix, first calling "remove_column(X)" and then "restore_column(X)" should leave the matrix as it was originally.

* restore_row(X): Same thing as the previous function, only this time it restores a row that had previously been removed using remove_row(X).

For the last two functions, you may want to check Knuth's paper for a neat trick that restores previously deleted items in linked lists. 

EDIT: For the remove/restore functions, you can assume that if you've removed some number of rows/columns by calling remove_row/remove_column, that the calls to restore_row/restore_column will be called *in the reverse order*. I.e. if you first removed column 1, then column 2, then column 3, you would first restore column 3, then column 2, then column 1.

Also, just to be clear: if you can't get your head around the remove/restore functions, remember that they are just a bonus and totally optional. Constructing the data-structure is the main point of this excercise. 