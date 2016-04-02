#Description:

An interesting problem to solve:

Looking at the Base 10 number system it has the digits 0 1 2 3 4 5 6 7 8 9 

If I were given the digits 5 7 and 9 how many unique numbers could be formed that
would use all these digits once?

For example some easy ones would be:

579
975
795

And so on. but also these would work as well.

111579
1120759

These could go on forever as you just add digits. There would be many numbers just padding numbers to the unique numbers.


Some might think that these next three might be valid but they are not because they do not contain all 3 digits:

57
75
95

So to cap off the range let us say numbers that do not go beyond 7 digits (so 7 places in your numbers)

I am also interested in other base number systems. Like how many unique numbers using 5 6 could I find in base 8 (octal) or A E 0 1 in a base 16 (hexidecimal) ?

Your challenge is to be able to take 2 sets of inputs and find out how many unique digits up to 7 places can be found given those 2 inputs.

#Input:

<Base system> <digits>

* Base system is a base counting system. This number can be between 2 to 16.
* Digits will be a list of digits that are ALL shown only once in the number

#Output:

All the unique numbers given up to 7 digits long only using the digits given once. followed by their base 10 value. At the bottom of the listing a "count" of how many numbers you found.

So say I was looking for base 2 and my unique digits were 1 I would see this:

    1 - 1
    10 - 2
    100 - 4
    1000 - 8
    10000 - 16
    100000 - 32
    1000000 - 64
    Count: 7

#challenge inputs:
These are several pairings to run. For the sake of size do not list your outputs - Maybe just the "counts" you found. 
If you wish to share the outputs use like a gist or link the output for people to go look at. 

    2 1
    8 3 5 6
    10 1 3 9
    16 A E 1 0

#challenge input to try:

For all base systems 2 to 16 find the numbers 0 1 in them.

#challenge difficulty

This is an unknown. Not sure if easy, intermediate or hard. Regardless lets give it a try. Could be very easy. Could be very hard. 
