# [](#IntermediateIcon) _(Intermediate)_: Prime Factor Trees

Every number can be represented as the product of its [prime factors](http://en.wikipedia.org/wiki/Prime_factor). These are all of the prime numbers which the number is divisible by - if a number has no prime factors except itself, then it is prime (because it cannot be divided by any other number.) Finding the prime factor representation of a number comes in handy in quite a few ways - one of which is being able to easily find the [Greatest Common Divisor](http://en.wikipedia.org/wiki/Greatest_common_divisor).

One of the first techniques schoolchildren learn to find a number's prime factors is a technique known as factor trees. To create a factor tree, write down the number you are factoring first.

    60

Then, find a number that divides this cleanly, and find the answer - 60 can be divided by 4 to get 15, for example. Once we've done that, write those two numbers under 60 on 'branches', like so:

       60
        |
     4--+--15

Then, do the same for each of those numbers, too:

        60
         |
      4--+--15
      |
    2-+-2
      
And finally:

        60
         |
      4--+--15
      |      |
    2-+-2  3-+-5
      
Once a prime number (such as the bottom row) is created, you can't factor any further, so you stop.

Your challenge is, given a number, generate its factor tree.

# Formal Inputs and Outputs

## Input Description

You will be given a number **N** which you are to generate a factor tree for.
    
## Output Description

Print the factor tree in a similar format to the ones above.

# Challenge

## Challenge Input

    1767150

## Sample Challenge Output

There are a lot of different ways to display a factor tree for some numbers. Here are some examples.

               1767150          
                |               
       1309-----+-----1350      
         |             |        
      77-+--17    45---+---30   
      |            |        |   
     7+-11       9-+--5   6-+--5
                 |        |     
                3+-3     2+-3 
                
               1767150          
                   |            
           1350----+-----1309   
            |              |    
       45---+---30      77-+--17
       |         |      |       
     5-+-9     6-+--5  7+-11    
         |     |                
        3+-3  2+-3
        
# Notes

If you're having trouble with the tree printing logic, that's fine - you can skip that if you want. Print it a different way that's easier to format.