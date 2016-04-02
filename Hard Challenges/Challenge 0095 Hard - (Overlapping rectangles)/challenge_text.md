Let the four values (x, y, w, h) define a rectangle. Let the bottom left corner be located at (x, y) and let (w, h) be the width and height. Then the rectangles (0,0,4,3), (4,3,3,4) and (7,0,3,3) would look something like this:

            * * * 
            * * * 
            * * *
            * * *
    * * * *       * * *
    * * * *       * * *
    * * * *       * * *

The total area of these three rectangles is simple to compute, it's just the sum of the areas of each individual rectangle: 4\*3 + 3\*4 + 3\*3 = 12 + 12 + 9 = 33.

It gets more tricky when the rectangles start overlapping each other. For instance, lets look at the three rectangles (0,0,4,3), (2,1,3,4) and (4,4,3,3):

            * * * 
            * * * 
        * * + * * 
        * * *     
    * * + + *      
    * * + + *      
    * * * *       

You see that the rectangles overlap (the regions where they overlap is marked by a + instead of a \*). So if we just calculate the sum of the areas like we did before, 12 + 12 + 9, we get too high a value, because we're counting the areas with the overlap twice. To get the correct answer, we have to subtract the areas where two rectangles intersect. The righ answer for the total area covered by the rectangles is then (12 + 12 + 9) - (4 + 1) = 28. 

Things get even more hairy when three rectangles intersect. Take a look at (0,0,4,3), (2,1,3,4) and (3,0,3,3):

        * * *
        * * *     
    * * + x + *      
    * * + x + *   
    * * * + * *   
          
Now the three rectangles all overlap at the points marked x (as before, the +'s mark where only two rectangles overlap). We do as before and start by calculating the sum of the areas of all three triangles: 12 + 12 + 9. Then we subtract the sum of all areas where two rectangles intersect, which is now 4 + 3 + 4. This is because rectangle 1 and 2 intersect in a region with the area 4, rectangles 1 and 3 intersect in an region with an area of 3 (this is th 1\*3 "column" that includes the x's and the + right below them), and rectangles 2 and 3 intersect in a region with the area of 4. So far we've got (12 + 12 + 9) - (4 + 3 + 4). 

However, by subtracting out all regions where two rectangles intersect, we've subtracted out the region where three rectangles intersect (i.e. the x's) three times. That is to say, we're not counting it at all. So we have to add that back in to get the right result. So the total area covered by the rectangles is, in fact, 

    A = (12 + 12 + 9) - (4 + 3 + 4) + (2) = 33 - 11 + 2 = 24

If you wish to verify that number, you can count the *'s, +'s and x's and you'll see that they add up to 24. 

This sounds complicated, but the general rule is actually quite simple and elegant. If S1 is the sum of the areas of all rectangles, S2 is the sum of all regions where *two* rectangles intersect, S3 is the sum of all regions where *three* rectangles intersect, S4 is the sum of all regions where *four* rectangles intersect, and so on, the value of the total area covered is:

    A = S1 - S2 + S3 - S4 + S5 - S6 + S7 - S8 + ...

This is known in mathematics as the [inclusion-exclusion principle](http://en.wikipedia.org/wiki/Inclusion_exclusion_principle), because you alternate including and excluding areas. 

The values in my example correspond to:

    S1 = 12 + 12 + 9 
    S2 = 4 + 3 + 4  
    S3 = 2
    S4 = 0
    S5 = 0
    S6 = 0
    ...
    
With all variables above S3 equal to zero, so we don't need to count them.

Define a random number generator as follows: 

    s(0) = 123456789
    s(N) = (22695477 * s(N-1) + 12345) mod 1073741824
    
Then define a function r(N) which returns rectangles (in the (x,y,w,h) for described here) like this:

    r(N) = (s(4*N) mod 2000000, s(4*N + 1) mod 2000000, 1 + (s(4*N + 2) mod 99999), 1 + (s(4*N + 3) mod 99999))
    
That is, 

    r(0) = (s(0) mod 2000000, s(1) mod 2000000, 1 + (s(2) mod 99999), 1 + (s(3) mod 99999)) 
    r(1) = (s(4) mod 2000000, s(5) mod 2000000, 1 + (s(6) mod 99999), 1 + (s(7) mod 99999)) 

In actual numbers, r(0) and r(1) is:

    r(0) = (1456789, 880530, 94008, 74226)
    r(1) = (1429729, 1957326, 87910, 3758)

Generate 2000 of these rectangles (i.e. r(0) through r(1999)) and calculate the total area they cover. 

***

Bonus: Define r(N) like this instead:

    r(N) = (s(4*N) mod 10000000, s(4*N + 1) mod 10000000, 1 + (s(4*N + 2) mod 99999), 1 + (s(4*N + 3) mod 99999))

The only thing that has changed is the modulus on the (x,y) values. Generate 50000 of those rectangles (i.e. r(0) through r(49999)) and calculate the total area that they cover. 

***

EDIT: scaled up numbers to increase difficulty