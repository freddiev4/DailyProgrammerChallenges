#Description

When we computer programmers learn all about how computers sort lists of numbers, we are usually taught about sorting algorithms like Quicksort and Heapsort. There is, however, an entirely different model for how computers can sort numbers called [sorting networks](http://en.wikipedia.org/wiki/Sorting_network). Sorting networks are very useful for implementing sorting in hardware, and they have found a use for designing sorting algorithms in GPUs. Today, we are going to explore these strange and fascinating beasts. 

In a sorting network, a list of numbers travel down idealized "wires" that are connected with so-called "comparators". Each comparator connects two wires and swaps the values between them if they're out of order (the smaller value going to the top wire, and the larger to the bottom wire). [This image shows the principle clearly](http://upload.wikimedia.org/wikipedia/commons/thumb/e/e8/Sorting-network-comparator-demonstration.svg/467px-Sorting-network-comparator-demonstration.svg.png), and [this image](http://upload.wikimedia.org/wikipedia/commons/thumb/9/9b/SimpleSortingNetworkFullOperation.svg/1024px-SimpleSortingNetworkFullOperation.svg.png) demonstrates a full run of a 4-wire sorting network wtih 5 comparators (both images courtesy of wikipedia, which has an excellent article on [sorting networks](http://en.wikipedia.org/wiki/Sorting_network) if you are interested in learning more). Notice that the list on the right is correctly sorted top to bottom. 

It is easy to see why that particular network correctly sorts a list of numbers: the first four comparators "float" the smallest value to the top and "sinks" the largest value to the bottom, and the final comparator sorts out the middle two values. 

In general, however, there's often no easy way to tell whether or not a sorting network will actually correctly sort a list of numbers, and the only way to tell is to actually test it. This seems like a daunting task, since for a sorting network with N wires, there's N! (i.e. ["N factorial"](http://en.wikipedia.org/wiki/Factorial)) possible input permutations. That function grows extremely quickly, and become prohibitively large for even N of 14 or 15. 

##The zero-one principle
Thankfully, there's a better way, thanks to the so-called "zero-one principle", which is as follows: 

> If an N-wire sorting network can correctly sort all 2^N possible sequences of 0's and 1's, it will correctly sort all possible input sequences. 

So, instead of having to try and check all N! possible permutations of the input sequence, we can just check all 2^N sequences consisting of 0's and 1's. While this is still exponential, it is far smaller than N!.

Today, you will be given a sorting network and your challenge will be to check whether or not that network will correctly sort all inputs. 

#Formal inputs &amp; outputs

##Inputs

The input will first consist of a single line with two numbers on it separated by a space. The first number is the number of wires in the sorting network, and the second number is the total number of comparators on the network. 

After that, there will follow a number of lines, each of which describes one comparator. The lines will consist of two numbers separated by a space describing which two wires the comparator connects. The first number will always be smaller than the second number

The "top" wire of the sorting network is wire 0, and the bottom wire is wire N-1. So, for a 16-wire sorting network, the top wire (which will hold the smallest number at the end, hopefully) is wire 0, and the bottom wire is wire 15 (which will hold the highest number at the end, hopefully). 

Note that in most sorting networks, several comparators compare numbers in parallel. For the purposes of this problem, you can ignore that and assume that all comparators work in sequence, following the order provided in the input. 

##Output

The output will consist of a single line which will either be "Valid network" if the network will indeed sort all sequences correctly, or "Invalid network" if it won't. 

#Sample inputs and outputs

##Input 1
This is the example 4-wire, 5-comparator sorting network from the description: 

    4 5
    0 2
    1 3
    0 1
    2 3
    1 2

##Output 1

    Valid network
    
##Input 2

    8 19
    0 2
    1 3
    0 1
    2 3
    1 2
    4 6
    5 7
    4 5
    6 7
    5 6
    0 4
    1 5
    2 6
    3 7
    2 4
    3 5
    1 2
    3 4
    6 7

##Output 2

    Invalid network

#Challenge inputs

##Input 1

[This 16-wire 60-comparator network](https://gist.githubusercontent.com/anonymous/274991a6297f8291716f/raw/ea60f5bcfa2577bdce5f18ffbbaa7d09058f1c7a/challenge1.txt)

##Input 2

[This (slightly different) 16-wire 60-comparator network](https://gist.githubusercontent.com/anonymous/1d74c14d00dff6369db6/raw/58cad39fa8c7980620c24aca681248084e0738c4/challenge2.txt)

#Notes

As always, if you have any challenge idea, head on over to /r/dailyprogrammer_ideas and let us know!