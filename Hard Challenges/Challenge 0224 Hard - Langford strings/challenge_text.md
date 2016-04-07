#Description

A "Langford string of order N" is defined as follows: 

 * The length of the string is equal to 2\*N
 * The string contains the the first N letters of the uppercase English alphabet, with each letter appearing twice
 * Each pair of letters contain X letters between them, with X being that letter's position in the alphabet (that is, there is one letter between the two A's, two letters between the two B's, three letters between the two C's, etc)

An example will make this clearer. These are the only two possible Langford strings of order 3:

    BCABAC
    CABACB    

Notice that for both strings, the A's have 1 letter between them, the B's have two letters between them, and the C's have three letters between them. As another example, this is a Langford string of order 7:

    DFAGADCEFBCGBE
 
It can be shown that Langford strings only exist when the order is a multiple of 4, or one less than a multiple of 4.

Your challenge today is to calculate all Langford strings of a given order.

#Formal inputs &amp; outputs

##Inputs

You will be given a single number, which is the order of the Langford strings you're going to calculate.

##Outputs

The output will be all the Langford strings of the given order, one per line. The ordering of the strings does not matter. 

Note that for the second challenge input, the output will be somewhat lengthy. If you wish to show your output off, I suggest using a service like [gist.github.com](http://gist.github.com) or [hastebin](http://hastebin.com) and provide a link instead of pasting them directly in your comments.

#Sample input &amp; output

##Input 

    3

##Output 

    BCABAC
    CABACB   

#Challenge inputs

##Input 1

    4

##Input 2

    8

#Bonus

For a bit of a stiffer challenge, consider this: there are more than 5 trillion different Langford strings of order 20. If you put all those strings into a big list and sorted it, what would the first 10 strings be?

#Notes

If you have a suggestion for a challenge, head on over to /r/dailyprogrammer_ideas and we might use it in the future!
