# [](#EasyIcon) **(Easy)**: The Column Conundrum
Text formatting is big business. Every day we read information in one of several formats. Scientific publications often have their text split into [two columns, like this](https://isotropic.org/papers/chicken.pdf). Websites are often bearing one major column and a sidebar column, such as Reddit itself. Newspapers very often have three to five columns. You've been commisioned by some bloke you met in Asda to write a program which, given some input text and some numbers, will split the data into the appropriate number of columns.

# Formal Inputs and Outputs

## Input Description

To start, you will be given 3 numbers on one line:

	<number of columns> <column width> <space width>

* *number of columns*: The number of columns to collect the text into.
* *column width*: The width, in characters, of each column.
* *space width*: The width, in spaces, of the space between each column.

After that first line, the rest of the input will be the text to format.

## Output Description

You will print the text formatted into the appropriate style.

**You do not need to account for words and spaces.** If you wish, cut a word into two, so as to keep the column width constant.

# Sample Inputs and Outputs

## Sample Input

Input file [is available here](https://gist.githubusercontent.com/Quackmatic/b19f592be2c0ee9e22d7/raw/45457a757d1f126d94a4736354c78906eeb819a3/c182e-input.txt). *(NB: I promise this input actually works this time, haha.)*

## Sample Output

Outout, according to my solution, [is available here](https://gist.githubusercontent.com/Quackmatic/1ef9af9f3989e48ee1c4/raw/4cbcd546b7bc1dd415b9a804eb93e671d927cb43/c182e-output.txt). I completed the Extension challenge too - you do not have to account for longer words if you don't want to, or don't know how.

# Extension

Split words correctly, like in my sample output.