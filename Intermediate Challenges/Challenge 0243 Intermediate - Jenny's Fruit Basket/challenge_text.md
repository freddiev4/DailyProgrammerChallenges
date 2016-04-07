# Description

Little Jenny has been sent to the market with a 5 dollar bill in hand, to buy
fruits for a gift basket for the new neighbors. Since she's a diligent and
literal-minded kid, she intends to spend *exactly* 5 dollars - not one cent more
or less.

The fact that the market sells fruits per piece at non-round prices, does not
make this easy - but Jenny is prepared. She takes out a Netbook from her
backpack, types in the unit prices of some of the fruits she sees, and fires
off a program from her collection - and voil\u00e0, the possible fruit combinations for a $5 purchase appear on the screen.

**Challenge:** Show what Jenny's program might look like in the
programming language of your choice.

* The goal is aways 500 cents (= $5).
* Solutions can include multiple fruits of the same type - assume they're available in unlimited quantities.
* Solutions do *not* need to include all available types of fruit.
* Determine all possible solutions for the given input.

# Input Description

One line per available type of fruit - each stating the fruit's **name** *(a word without
spaces)* and the fruit's **unit price** in cents *(an integer)*.

# Output Description

One line per solution - each a comma-separated set of **quantity**+**name**
pairs, describing how many fruits of which type to buy.

Do not list fruits with a quantity of zero in the output. Inflect the names for plural (adding an `s` is sufficient).

# Sample Input

    banana 32
    kiwi 41
    mango 97
    papaya 254
    pineapple 399

# Sample Output

    6 kiwis, 1 papaya
    7 bananas, 2 kiwis, 2 mangos

# Challenge Input

    apple 59
    banana 32
    coconut 155
    grapefruit 128
    jackfruit 1100
    kiwi 41
    lemon 70
    mango 97
    orange 73
    papaya 254
    pear 37
    pineapple 399
    watermelon 500

Note: For this input there are [180 solutions](http://pastebin.com/raw.php?i=7S7pnUyL).

# Credit

This challenge was submitted by /u/smls. If you have a challenge idea, please share it on /r/dailyprogrammer_ideas and there's a chance we'll use it!