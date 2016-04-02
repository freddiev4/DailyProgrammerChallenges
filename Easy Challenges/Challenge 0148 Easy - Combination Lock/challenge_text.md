# [](#EasyIcon) *(Easy)*: Combination Lock

[Combination locks](http://en.wikipedia.org/wiki/Combination_lock) are mechanisms that are locked until a specific number combination is input. Either the input is a single dial that must rotate around in a special procedure, or have three disks set in specific positions. This challenge will ask you to compute how much you have to spin a single-face lock to open it with a given three-digit code.

The procedure for our lock is as follows: (lock-face starts at number 0 and has up to N numbers)

+ Spin the lock a full 2 times clockwise, and continue rotating it to the code's first digit.
+ Spin the lock a single time counter-clockwise, and continue rotating to the code's second digit.
+ Spin the lock clockwise directly to the code's last digit.

# Formal Inputs & Outputs
## Input Description

Input will consist of four space-delimited integers on a single line through console standard input. This integers will range inclusively from 1 to 255. The first integer is N: the number of digits on the lock, starting from 0. A lock where N is 5 means the printed numbers on the dial are 0, 1, 2, 3, and 5, listed counter-clockwise. The next three numbers are the three digits for the opening code. They will always range inclusively between 0 and N-1.

## Output Description

Print the total rotation increments you've had to rotate to open the lock with the given code. See example explanation for details.

# Sample Inputs & Outputs
## Sample Input

    5 1 2 3

## Sample Output

    21

Here's how we got that number:

+ Spin lock 2 times clockwise: +10, at position 0
+ Spin lock to first number clockwise: +1, at position 1
+ Spin lock 1 time counter-clockwise: +5, at position 1
+ Spin lock to second number counter-clockwise: +4, at position 2
+ Spin lock to third number clockwise: +1, at position 3