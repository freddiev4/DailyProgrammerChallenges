#Description: 

The famous lumberjacks of /r/dailyprogrammer are well known to be weird and interesting. But we always enjoy solving their problems with some code.

For today's challenge the lumberjacks pile their logs from the forest in a grid n x n. Before using us to solve their inventory woes they randomly just put logs in random piles. Currently the pile sizes vary and they want to even them out. So let us help them out.

#Input:

You will be given the size of the storage area. The number of logs we have to put into storage and the log count in each pile currently in storage. You can either read it in from the user or hardcode this data.

##Input Example:

     3
     7
     1 1 1
     2 1 3
     1 4 1

So the size is 3 x 3. We have 7 logs to place and we see the 3 x 3 grid of current size of the log piles.

#Log Placement:

We want to fill the smallest piles first and we want to evenly spread out the logs. So in the above example we have 7 logs. The lowest log count is 1. So starting with the first pile in the upper left
and going left-right on each row we place 1 log in each 1 pile until all the current 1 piles get a log. (or until we run out). After that if we have more logs we then have to add logs to piles with 2 (again moving left-right on each row.)

Keep in mind lumberjacks do not want to move logs already in a pile. To even out the storage they will do it over time by adding new logs to piles. But they are also doing this in an even distribution.

Once we have placed the logs we need to output the new log count for the lumberjacks to tack up on their cork board.

#Output:

Show the new n x n log piles after placing the logs evenly in the storage area.

Using the example input I would generate the following:

##example output:

     3 2 2
     2 2 3
     2 4 2

Notice we had 6 piles of 1s. Each pile got a log. We still have 1 left. So then we had to place logs in piles of size 2. So the first pile gets the last log and becomes a 3 and we run out of logs and we are done. 

#Challenge inputs:

Please solve the challenge using these inputs:

##Input 1:
     4
    200
    15 12 13 11 
    19 14  8 18 
    13 14 17 15 
     7 14 20  7 


##Input 2:

    15
    2048
     5 15 20 19 13 16  5  2 20  5  9 15  7 11 13 
    17 13  7 17  2 17 17 15  4 17  4 14  8  2  1 
    13  8  5  2  9  8  4  2  2 18  8 12  9 10 14 
    18  8 13 13  4  4 12 19  3  4 14 17 15 20  8 
    19  9 15 13  9  9  1 13 14  9 10 20 17 20  3 
    12  7 19 14 16  2  9  5 13  4  1 17  9 14 19 
     6  3  1  7 14  3  8  6  4 18 13 16  1 10  3 
    16  3  4  6  7 17  7  1 10 10 15  8  9 14  6 
    16  2 10 18 19 11 16  6 17  7  9 13 10  5 11 
    12 19 12  6  6  9 13  6 13 12 10  1 13 15 14 
    19 18 17  1 10  3  1  6 14  9 10 17 18 18  7 
     7  2 10 12 10 20 14 13 19 11  7 18 10 11 12 
     5 16  6  8 20 17 19 17 14 10 10  1 14  8 12 
    19 10 15  5 11  6 20  1  5  2  5 10  5 14 14 
    12  7 15  4 18 11  4 10 20  1 16 18  7 13 15 

## Input 3:
     1
     41
     1

## Input 4:

     12
     10000
      9 15 16 18 16  2 20  2 10 12 15 13 
     20  6  4 15 20 16 13  6  7 12 12 18 
     11 11  7 12  5  7  2 14 17 18  7 19 
      7 14  4 19  8  6  4 11 14 13  1  4 
      3  8  3 12  3  6 15  8 15  2 11  9 
     16 13  3  9  8  9  8  9 18 13  4  5 
      6  4 18  1  2 14  8 19 20 11 14  2 
      4  7 12  8  5  2 19  4  1 10 10 14 
      7  8  3 11 15 11  2 11  4 17  6 18 
     19  8 18 18 15 12 20 11 10  9  3 16 
      3 12  3  3  1  2  9  9 13 11 18 13 
      9  2 12 18 11 13 18 15 14 20 18 10 

#Other Lumberjack Problems:


* [Hard - Simulated Ecology - The Forest](http://www.reddit.com/r/dailyprogrammer/comments/27h53e/662014_challenge_165_hard_simulated_ecology_the/)
* [Hard - Lumberjack Floating Log Problem] (http://www.reddit.com/r/dailyprogrammer/comments/2lljyq/11052014_challenge_187_hard_lumberjack_floating/)

