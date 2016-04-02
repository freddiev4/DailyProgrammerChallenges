# Description

Let's pursue Monday's [Game of Threes](https://www.reddit.com/r/dailyprogrammer/comments/3r7wxz/20151102_challenge_239_easy_a_game_of_threes/) further!

To make it more fun (and make it a 1-player instead of a [0-player](https://en.wikipedia.org/wiki/Zero-player_game) game), let's change the rules a bit: *You can now add any of [-2, -1, 1, 2] to reach a multiple of 3*. This gives you two options at each step, instead of the original single option. 

With this modified rule, find a Threes sequence to get to 1, with this extra condition: *The sum of all the numbers that were added must equal 0*. If there is no possible correct solution, print `Impossible`.

# Sample Input:

    929

# Sample Output:

    929 1
    310 -1
    103 -1
    34 2
    12 0
    4 -1
    1

Since `1 - 1 - 1 + 2 - 1 == 0`, this is a correct solution. 

# Bonus points

Make your solution work (and run reasonably fast) for numbers up to your operating system's maximum long int value, or its equivalent. For some concrete test cases, try:

* `18446744073709551615`
* `18446744073709551614`