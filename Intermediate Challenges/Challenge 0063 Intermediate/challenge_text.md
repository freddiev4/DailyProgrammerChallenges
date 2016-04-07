You can use the reverse(N, A) procedure defined in [today's easy problem](http://www.reddit.com/r/dailyprogrammer/comments/uw14f/6112012_challenge_63_easy/) to completely sort a list. For instance, if we wanted to sort the list [2,5,4,3,1], you could execute the following series of reversals:

    A = [2, 5, 4, 3, 1]
    
    reverse(2, A)       (A = [5, 2, 4, 3, 1])
    reverse(5, A)       (A = [1, 3, 4, 2, 5])
    reverse(3, A)       (A = [4, 3, 1, 2, 5])
    reverse(4, A)       (A = [2, 1, 3, 4, 5])
    reverse(2, A)       (A = [1, 2, 3, 4, 5])

And the list becomes completely sorted, with five calls to reverse(). You may notice that in this example, the list is being built "from the back", i.e. first 5 is put in the correct place, then 4, then 3 and finally 2 and 1.

Let s(N) be a random number generator defined as follows:

    s(0) = 123456789
    s(N) = (22695477 * s(N-1) + 12345) mod 1073741824
    
Let A be the array of the first 10,000 values of this random number generator. The first three values of A are then 123456789, 752880530 and 826085747, and the last three values are 65237510, 921739127 and 926774748

Completely sort A using only the reverse(N, A) function. 
