#Description:
For today's challenge you will be generating fractal images from regular expressions. This album describes visually how it works:

* [https://imgur.com/a/QWMGi]

For the challenge you don't need to worry about color, just inclusion in the set selected by the regular expression. Also, don't implicitly wrap the regexp in \^...$. This removes the need to use .* all the time.

#Input:

On standard input you will receive two lines. The first line is an integer n that defines the size of the output image (nxn). This number will be a power of 2 (8, 16, 32, 64, 128, etc.).
The second line will be a regular expression with literals limited to the digits 1-4. That means you don't need to worry about whitespace.

#Output:

Output a binary image of the regexp fractal according to the specification. You could print this out in the terminal with characters or you could produce an image file. Be creative! Feel free to share your outputs along with your submission.

#Example Input & Output:

##Input Example 1:

     256
     [13][24][^1][^2][^3][^4]

##Output Example 1:

* [http://i.imgur.com/zhSr365.png]

## Input Example 2 (Bracktracing) :

     256
     (.)\1..\1

## Output Example 2:

* [http://i.imgur.com/iLu7Pq4.png]

# Extra Challenge:

Add color based on the length of each capture group.

#Challenge Credit:

Huge thanks to /u/skeeto for [his idea posted on our idea subreddit] (http://www.reddit.com/r/dailyprogrammer_ideas/comments/24ykjs/intermediatehard_regexp_fractals/)
