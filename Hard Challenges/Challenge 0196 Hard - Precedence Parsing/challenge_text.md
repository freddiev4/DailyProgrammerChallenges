# [](#HardIcon) **(Hard)**: Precedence Parsing

If you have covered algebra then you may have heard of the BEDMAS rule (also known as BIDMAS, PEMDAS and a lot of other acronyms.) The rule says that, when reading a mathematical expression, you are to evaluate in this order:

* **B**rackets, and their contents, should be evaluated first.

* **E**xponents should be evaluated next.

* **D**ivision and **M**ultiplication follow after that.

* **A**ddition and **S**ubtraction are evaluated last.

This disambiguates the evaluation of expressions. These BEDMAS rules are fairly arbitrary and are defined mostly by convention - they are called *precedence* rules, as they dictate which operators have precedence over other operators. For example, the above rules mean that an expression such as `3+7^2/4` is interpreted as `3+((7^2)/4)`, rather than `(3+7)^(2/4)` or any other such way.

For the purposes of this challenge, let's call the fully-bracketed expression the *disambiguated* expression - for example, `1+2*6-7^3*4` is disambiguated as `((1+(2*6))-((7^3)*4))`, giving no room for mistakes. Notice how *every* operation symbol has an associated pair of brackets around it, meaning it's impossible to get it wrong!

There is something that BEDMAS does *not* cover, and that is called *associativity*. Let's look at an expression like `1-2-3-4-5`. This contains only one operator, so our precedence rules don't help us a great deal. Is this to be read as `(1-(2-(3-(4-5))))` or `((((1-2)-3)-4)-5)`? The correct answer depends on the operator in question; in the case of the subtract operator, the correct answer is the latter. The left-most operation (`1-2`) is done first, followed by `-3`, `-4`, `-5`. This is called *left-associativity*, as the left-most operation is done first. However, for the exponent (`^`) operator, the right-most operation is usually done first. For example `2^6^9^10`. The first operation evaluated is `9^10`, followed by `6^`, `2^`. Therefore, this is disambiguated as `(2^(6^(9^10)))`. This is called *right-associativity*.

In this challenge, you won't be dealing with performing the actual calculations, but rather just the disambiguation of expressions into their fully-evaluated form. As a curve-ball, you won't necessarily be dealing with the usual operators `+`, `-`, ... either! You will be given a set of operators, their precedence and associativity rules, and an expression, and then you will disambiguate it. The expression will contain only integers, brackets, and the operations described in the input.

## Disclaimer

These parsing rules are a bit of a simplification. In real life, addition and subtraction have the same precedence, meaning that `1-2+3-4+5` is parsed as `((((1-2)+3)-4)+5)`, rather than `((1-(2+3))-(4+5))`. For the purpose of the challenge, you will not have to handle inputs with equal-precedence operators. Just bear this in mind, that you cannot represent PEMDAS using our challenge input, and you will be fine.

# Input and Output Description

## Input Description

You will input a number **N**. This is how many different operators there are in this expression. You will then input **N** further lines in the format:

    symbol:assoc

Where `symbol` is a single-character symbol like `^`, `#` or `@`, and `assoc` is either *left* or *right*, describing the associativity of the operator. The precedence of the operators is from highest to lowest in the order they are input. For example, the following input describes a subset of our BEDMAS rules above:

    3
    ^:right
    /:left
    -:left

Finally after that you will input an expression containing integers, brackets (where brackets are treated as they normally are, taking precedence over everything else) and the operators described in the input.

## Output Description

You will output the fully disambiguated version if the input. For example, using our rules described above, `3+11/3-3^4-1` will be printed as:

    (((3-(11/3))-(3^4))-1)

If you don't like this style, you could print it with (reverse-)Polish notation instead:

    3 11 3 / - 3 4 ^ - 1 -

Or even as a parse-tree or something. The output format is up to you, as long as it shows the disambiguated order of operations clearly.

# Sample Inputs and Outputs

This input:

    3
    ^:right
    *:left
    +:left
    1+2*(3+4)^5+6+7*8

Should disambiguate to:

    (((1+(2*((3+4)^5)))+6)+(7*8))

This input:

    5
    &:left
    |:left
    ^:left
    <:right
    >:right
    3|2&7<8<9^4|5

Should disambiguate to:

    ((3|(2&7))<(8<(9^(4|5))))

This input:

    3
    <:left
    >:right
    .:left
    1<1<1<1<1.1>1>1>1>1

Should disambiguate to:

    (((((1<1)<1)<1)<1).(1>(1>(1>(1>1)))))

This input:

    2
    *:left
    +:left
    1+1*(1+1*1)

Should disambiguate to:

    (1+(1*(1+(1*1))))