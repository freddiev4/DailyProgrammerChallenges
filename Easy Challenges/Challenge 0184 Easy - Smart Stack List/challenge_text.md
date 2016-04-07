#Description:

We all know the famous link list. We can use these to hold data in a linear fashion. The link list can be used to implement a stack as well for example.

For this challenge you will need to develop a smart stack list. So what makes this link list so smart? This link list will behave like a stack but also maintain an ascending sorted order of the data as well. So our link list maintains 2 orders (stack and sorted)

In today's world link list data structures are part of many development platforms. For this challenge you will be implementing this and not using already pre-made frameworks/standard link lists code that you call. You have to implement it and all the features. 

The Challenge will have 2 steps. 

* Implement your smart link list
* Test your smart link list

#Data:

The smart link list will hold integer data. 

#Methods:

The smart link list must support these methods or operations. 

* Push - Push a number on top of the stack (our link list is a stack)
* Pop - Pop the number off the top of the stack
* Size - how many numbers are on your stack
* Remove Greater - remove all integers off the stack greater in value then the given number
* Display Stack - shows the stack order of the list (the order they were pushed from recent to oldest)
* Display Ordered - shows the integers sorted from lowest to highest. 

#Smart list:

One could make a stack and when you do the display ordered do a sort. But our smart list must have a way so that it takes O(n) to display the link list in stack order or ascending order. In other words our link list is always in stack and sorted order. How do you make this work? That is the real challenge.

#Test your list:

Develop a quick program that uses your smart stack list.

* Generate a random number between 1-40. Call this number n.
* Generate n random numbers between -1000 to 1000 and push them on your list
* Display stack and sorted order
* Generate a random number between -1000 and 1000 can call it x
* Remove greater X from your list. (all integers greater than x)
* Display stack and sorted order
* pop your list (size of list / 2) times (50% of your list is removed)
* Display stack and sorted order



