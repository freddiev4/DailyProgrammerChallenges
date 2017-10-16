# Author: Lim Yao Jie
# Description: Show placement of doggo
# Github: www.github.com/causztic

def show_placements(x, total=100):
    start = 1
    result = ""

    dictionary = {
        1: "st",
        2: "nd",
        3: "rd",
        11: "th",
        12: "th",
        13: "th"
    }

    while total >= start:
        # if it exists, take the suffix.
        # if the first time it doesn't exist, take the modulus and search again.
        # defaults to th in the end.
        if start != x:
          result += "{}{}\t".format(start, dictionary.get(start, dictionary.get(start % 10, "th")))
        
        start = start + 1

    print(result)

show_placements(5)