# Description

In mathematics, a [Kaprekar number](https://en.wikipedia.org/wiki/Kaprekar_number) for a given base is a non-negative integer, the representation of whose square in that base can be split into two parts that add up to the original number again. For instance, 45 is a Kaprekar number, because 45^2 = 2025 and 20+25 = 45. The Kaprekar numbers are named after D. R. Kaprekar. 

I was introduced to this after the recent [Kaprekar constant challenge](https://www.reddit.com/r/dailyprogrammer/comments/56tbds/20161010_challenge_287_easy_kaprekars_routine/). 

For the main challenge we'll only focus on base 10 numbers. For a bonus, see if you can make it work in arbitrary bases.

# Input Description

Your program will receive two integers per line telling you the start and end of the range to scan, inclusively. Example:

	1 50

# Output Description

Your program should emit the Kaprekar numbers in that range. From our example:

	45

# Challenge Input

	2 100
	101 9000

# Challenge Output

*Updated the output as per [this comment](https://www.reddit.com/r/dailyprogrammer/comments/5aemnn/20161031_challenge_290_easy_kaprekar_numbers/d9fx1hf/)*

	9 45 55 99
	297 703 999 2223 2728 4879 5050 5292 7272 7777