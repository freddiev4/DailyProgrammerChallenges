
# [](#HardIcon) *(Hard)*: Maximum Random Walk
Consider the classic random walk: at each step, you have a 1/2 chance of taking a step to the left and a 1/2 chance of taking a step to the right. Your expected position after a period of time is zero; that is the average over many such random walks is that you end up where you started. A more interesting question is what is the expected rightmost position you will attain during the walk.

*Author: thePersonCSC*
# Formal Inputs & Outputs
## Input Description
The input consists of an integer n, which is the number of steps to take (1 <= n <= 1000). The final two are double precision floating-point values L and R which are the probabilities of taking a step left or right respectively at each step (0 <= L <= 1, 0 <= R <= 1, 0 <= L + R <= 1). Note: the probability of not taking a step would be 1-L-R.
## Output Description
A single double precision floating-point value which is the expected rightmost position you will obtain during the walk (to, at least, four decimal places).

# Sample Inputs & Outputs
## Sample Input
walk(1,.5,.5)
walk(4,.5,.5)
walk(10,.5,.4)
## Sample Output
walk(1,.5,.5) returns 0.5000
walk(4,.5,.5) returns 1.1875
walk(10,.5,.4) returns 1.4965
# Challenge Input
What is walk(1000,.5,.4)?
## Challenge Input Solution
(No solution provided by author)
# Note
* Have your code execute in less that 2 minutes with any input where n <= 1000

* I took this problem from the regional ACM ICPC of Greater New York.
				