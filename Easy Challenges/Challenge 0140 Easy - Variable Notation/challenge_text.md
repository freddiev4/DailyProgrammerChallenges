# [](#EasyIcon) *(Easy)*: Variable Notation

When writing code, it can be helpful to have a standard ([Identifier naming convention](http://en.wikipedia.org/wiki/Identifier_naming_convention)) that describes how to define all your variables and object names. This is to keep code easy to read and maintain. Sometimes the standard can help describe the type (such as in [Hungarian notation](http://en.wikipedia.org/wiki/Hungarian_notation)) or make the variables visually easy to read ([CamcelCase notation](http://en.wikipedia.org/wiki/CamelCase) or [snake_case](http://en.wikipedia.org/wiki/Snake_case)).

Your goal is to implement a program that takes an english-language series of words and converts them to a specific variable notation format. Your code must support CamcelCase, snake_case, and capitalized snake_case.

# Formal Inputs & Outputs
## Input Description

On standard console input, you will be given an integer one the first line of input, which describes the notation you want to convert to. If this integer is zero ('0'), then use CamcelCase. If it is one ('1'), use snake_case. If it is two ('2'), use capitalized snake_case. The line after this will be a space-delimited series of words, which will only be lower-case alpha-numeric characters (letters and digits).

## Output Description

Simply print the given string in the appropriate notation.

# Sample Inputs & Outputs
## Sample Input

    0
    hello world

    1
    user id

    2
    map controller delegate manager

## Sample Output

    0
    helloWorld

    1
    user_id

    2
    MAP_CONTROLLER_DELEGATE_MANAGER

## Difficulty++

For an extra challenge, try to convert from one notation to another. Expect the first line to be two integers, the first one being the notation already used, and the second integer being the one you are to convert to. An example of this is:

Input:

    1 0
    user_id

Output:

    userId