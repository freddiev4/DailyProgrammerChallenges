# Description

Write a program to calculate the Dottie number. This is the number you get when you type any number into a scientific calculator and then repeatedly press the `cos` button, with the calculator set to radians. The number displayed updates, getting closer and closer to a certain number, and eventually stops changing.

`cos` here is the trigonometric function cosine, but you don't need to know any trigonometry, or what cosine means, for this challenge. Just do the same thing you would with a handheld calculator: take cosine over and over again until you get the answer.

# Notes/Hints

Your programming language probably has math functions built in, and `cos` is probably set to radians by default, but you may need to look up how to use it.

The Dottie number is around 0.74. If you get a number around 0.99985, that's because your cosine function is set to degrees, not radians.

One hard part is knowing when to stop, but don't worry about doing it properly. If you want, just take `cos` 100 times. You can also try to keep going until your number stops changing (EDIT: this may or may not work, depending on your floating point library).

# Optional challenges

1. The Dottie number is what's known as the fixed point of the function f(x) = cos(x). Find the fixed point of the function f(x) = x - tan(x), with a starting value of x = 2. Do you recognize this number?
1. Find a fixed point of f(x) = 1 + 1/x (you may need to try more than one starting number). Do you recognize this number?
1. What happens when you try to find the fixed point of f(x) = 4x(1-x), known as the logistic map, with most starting values between 0 and 1?