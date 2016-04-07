# Description

Consider positive integers that are divisible by 7, and are also divisible by 7 when you reverse the digits. For instance, `259` counts, because `952` is also divisible by 7. The list of all such numbers between 0 and 10^3 is:

	7 70 77 161 168 252 259 343 434 525 595 616 686 700 707 770 777 861 868 952 959

The sum of these numbers is 10,787.

Find the sum of all such numbers betwen 0 and 10^(11).

# Notes

I learned this one from an old ITA Software hiring puzzle. The solution appears in a few places online, so if you want to avoid spoilers, take care when searching. You can check that you got the right answer pretty easily by searching for your answer online. Also the sum of the digits in the answer is 85.

The answer has 21 digits, so a big integer library would help here, as would brushing up on your modular arithmetic.

# Optional challenge

Make your program work for an upper limit of 10^N for any N, and be able to efficiently handle N's much larger than 11. Post the sum of the digits in the answer for N = 10,000. (There's no strict speed goal here, but for reference, my Python program handles N = 10,000 in about 30 seconds.)

EDIT: A few people asked about my solution. [I've put it up on github](https://github.com/cosmologicon/problems/tree/master/lucky7s), along with a detailed derivation that's hopefully understandable.