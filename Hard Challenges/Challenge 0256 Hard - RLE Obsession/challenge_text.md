run length encoding is a simple and magical data compression technique that I would like to use as a database.  But we will just be experimenting with querying and updating ranges of rle data without "decompressing" the rle data.

# 1. eazy: run length indexes
run length indexes (RLI) is an array representation of binary data (list of booleans) as a list of indexes (numbers that are not booleans).

2. the last element is the size of the boolean list
1. the first element is the boolean data index of the first 1 
3. every other element is an index where the data changes from 0 or 1 to its opposite.

An rli list of `1000` represents 1000 0s.  
An rli list of `0 1000` represents 1000 1s.  
An rli list of `2 3 7 10` represents `0 0 1 0 0 0 0 1 1 1`. 

RLI is more of an in memory representation rather than a storage format, but can be computed efficiently from this **packed RLE format**

1. first element is number of leading consecutive `0s`
2. next element is number of following `1s` minus 1 (there has to be at least one)
3. next element is number of following `0s` minus 1 (there has to be at least one)
4. repeat step 2.

**challenge**   
create an RLI function, and optionally a packed RLE function

**input**  (one per line)  
0 0 1 0 0 0 0 1 1 1  
0 0 0 0 0 0 0 0 1 0 1 1 1 0 1 1 1 1 0 1 1 0 1 0 1 0 1 1 1 1 1 1   
1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 1

**alternate input: bitsize, number**  
10 135  
32 12311231  
32 2147483713

**Packed RLE output**  
2 0 3 2  
8 0 0 2 0 3 0 1 0 0 0 0 0 5  
0 0 23 0 4 0

**RLI output**  
2 3 7 10  
8 9 10 13 14 18 19 21 22 23 24 25 26 32  
0 1 25 26 31 32

# 2. [Med] range query on RLI data

for 32bit binary 2147483713 the (0 based) indexes from 23 to 30 are: `0 0 1 0 0 0 0 0`

Can you query the RLI data directly to obtain binary substrings?

**input** format is:  start_index, length, RLI data  
0 9 2 3 7 10  
5 14 8 9 10 13 14 18 19 21 22 23 24 25 26 32  
23 4 0 1 25 26 31 32

**output**  
2 3 7 9   
3 4 5 8 9 13 14  
2 3 4

# 3. [Hard] overwrite RLI data with RLI data at an offset

to overwrite the string `1 1 1` starting at index `3` overinto `0 0 1 0 0 0 0 1 1 1` results in the output string `0 0 1 1 1 1 0 1 1 1`

The same problem with RLI data is to overwrite the RLI string `0 3` starting at index `3` overinto `2 3 7 10` results in `2 6 7 10`

**input** format: start_index, RLI_newdata > RLI_intodata  
3 0 3 > 2 3 7 10  
3 1 3 > 2 3 7 10  
3 1 3 > 10  
3 1 3 > 0 10  
3 0 3 7 10 12 15 > 8 9 10 13 14 18 19 21 22 23 24 25 26 32

**output**  
2 6 7 10  
2 3 4 6 7 10  
4 6 10  
0 3 4 10  
3 6 10 13 15 18 19 21 22 23 24 25 26 32

# Note: CHEATING!!!!
For Medium and Hard part, it is cheating to convert RLI to bitstrings, query/overwrite and then convert back to RLI.  These functions are meant to be run on sparse bitstrings, trillions of bits long, but with short RLI sequences.

# bonus
these functions can be used to solve the "Playing with light switches" recent challenge here: https://www.reddit.com/r/dailyprogrammer/comments/46zm8m/20160222_challenge_255_easy_playing_with_light/

though there is also a shortcut to negate a range of bit values in RLI format (hint: add or remove a single index)