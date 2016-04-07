Consider this game: Write 8 blanks on a sheet of paper. Randomly pick a digit 0-9. After seeing the digit, choose one of the 8 blanks to place that digit in. Randomly choose another digit (with replacement) and then choose one of the 7 remaining blanks to place it in. Repeat until you've filled all 8 blanks. You win if the 8 digits written down are in order from smallest to largest.

Write a program that plays this game by itself and determines whether it won or not. Run it 1 million times and post your probability of winning.

Assigning digits to blanks randomly lets you win about 0.02% of the time. Here's a python script that wins about 10.3% of the time. Can you do better?

    import random  
    def trial():
        indices = range(8)  # remaining unassigned indices
        s = [None] * 8      # the digits in their assigned places
        while indices:
             d = random.randint(0,9)    # choose a random digit
             index = indices[int(d*len(indices)/10)]  # assign it an index
             s[index] = str(d)
             indices.remove(index)
        return s == sorted(s)
    print sum(trial() for _ in range(1000000))


* thanks to cosmologicon for the challenge at [/r/dailyprogrammer_ideas](/r/dailyprogrammer_ideas) .. [link](http://www.reddit.com/r/dailyprogrammer_ideas/comments/s30be/intermediate_digitassigning_game/)

