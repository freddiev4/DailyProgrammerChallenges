# Description

Every December my friends do a "Secret Santa" - the traditional gift exchange
where everybody is randomly assigned to give a gift to a friend. To make
things exciting, the matching is all random (you cannot pick your gift
recipient) and nobody knows who got assigned to who until the day when the
gifts are exchanged - hence, the "secret" in the name.

Since we're a big group with many couples and families, often a husband gets
his wife as secret santa (or vice-versa), or a father is assigned to one of
his children. This creates a series of issues:

* If you have a younger kid and he/she is assigned to you, you might end up
paying for your own gift and ruining the surprise.
* When your significant other asks "who did you get for Secret Santa", you
have to lie, hide gifts, etc.
* The inevitable "this game is rigged!" commentary on the day of revelation.

To fix this, you must design a program that randomly assigns the Secret Santa
gift exchange, but *prevents people from the same family to be assigned to
each other*.

# Input

A list of all Secret Santa participants. People who belong to the same family
are listed in the same line separated by spaces. Thus, "Jeff Jerry" represents
two people, Jeff and Jerry, who are family and should not be assigned to
eachother.

    Joe
    Jeff Jerry
    Johnson

# Output

The list of Secret Santa assignments. As Secret Santa is a random assignment,
output may vary.

    Joe -> Jeff
    Johnson -> Jerry
    Jerry -> Joe
    Jeff -> Johnson

But **not** `Jeff -> Jerry` or `Jerry -> Jeff`!

# Challenge Input

    Sean
    Winnie
    Brian Amy
    Samir
    Joe Bethany
    Bruno Anna Matthew Lucas
    Gabriel Martha Philip
    Andre
    Danielle
    Leo Cinthia
    Paula
    Mary Jane
    Anderson
    Priscilla
    Regis Julianna Arthur
    Mark Marina
    Alex Andrea

# Bonus

The assignment list must avoid "closed loops" where smaller subgroups get
assigned to each other, breaking the overall loop.

    Joe -> Jeff
    Jeff -> Joe # Closed loop of 2
    Jerry -> Johnson
    Johnson -> Jerry # Closed loop of 2

# Challenge Credit

Thanks to /u/oprimo for his idea in /r/dailyprogrammer_ideas