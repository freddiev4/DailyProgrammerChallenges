# [](#IntermediateIcon) *(Intermediate)*: Telephone Keypads

[Telephone Keypads](http://en.wikipedia.org/wiki/Telephone_keypad) commonly have both digits and characters on them. This is to help with remembering & typing phone numbers (called a [Phoneword](http://en.wikipedia.org/wiki/Phoneword)), like 1-800-PROGRAM rather than 1-800-776-4726. This keypad layout is also helpful with [T9](http://en.wikipedia.org/wiki/T9_(predictive_text\)), a way to type texts with word prediction.

Your goal is to mimic some of the T9-features: given a series of digits from a telephone keypad, and a list of English words, print the word or set of words that fits the starting pattern. You will be given the number of button-presses and digit, narrowing down the search-space.

# Formal Inputs & Outputs
## Input Description

On standard console input, you will be given an array of digits (0 to 9) and spaces. All digits will be space-delimited, unless the digits represent multiple presses of the same button (for example pressing 2 twice gives you the letter 'B').

Use the modern [Telephone Keypads](http://en.wikipedia.org/wiki/Telephone_keypad) digit-letter layout:

    0 = Not used
    1 = Not used
    2 = ABC
    3 = DEF
    4 = GHI
    5 = JKL
    6 = MNO
    7 = PQRS
    8 = TUV
    9 = WXYZ

You may use any source for looking up English-language words, though this [simple English-language dictionary](http://www.curlewcommunications.co.uk/wordlist.html) is complete enough for the challenge.

## Output Description

Print a list of all best-fitting words, meaning words that start with the word generated using the given input on a telephone keypad. You do not have to only print words of the same length as the input (e.g. even if the input is 4-digits, it's possible there are many long words that start with those 4-digits).

# Sample Inputs & Outputs
## Sample Input

    7777 666 555 3

## Sample Output

    sold
    solder
    soldered
    soldering
    solders
    soldier
    soldiered
    soldiering
    soldierly
    soldiers
    soldiery

## Challenge++

If you want an extra challenge, accomplish the same challenge but without knowing the number of times a digit is pressed. For example "7653" could mean sold, or poke, or even solenoid! You must do this efficiently with regards to [Big-O complexity](http://en.wikipedia.org/wiki/Big_O_notation).
