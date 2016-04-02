# [](#EasyIcon) **(Easy)**: Destringification

Most programming languages understand the concept of escaping strings. For example, if you wanted to put a double-quote `"` into a string that is delimited by double quotes, you can't just do this:

    "this string contains " a quote."

That would end the string after the word *contains*, causing a syntax error. To remedy this, you can prefix the quote with a backslash `\` to *escape* the character.

    "this string really does \" contain a quote."

However, what if you wanted to type a backslash instead? For example:

    "the end of this string contains a backslash. \"

The parser would think the string never ends, as that last quote is escaped! The obvious fix is to also escape the back-slashes, like so.

    "lorem ipsum dolor sit amet \\\\"

The same goes for putting newlines in strings. To make a string that spans two lines, you cannot put a line break in the string literal:

    "this string...
    ...spans two lines!"

The parser would reach the end of the first line and panic! This is fixed by replacing the newline with a special escape code, such as `\n`:

    "a new line \n hath begun."

Your task is, given an escaped string, un-escape it to produce what the parser would understand.

## Input Description

You will accept a string literal, surrounded by quotes, like the following:

    "A random\nstring\\\""

If the string is valid, un-escape it. If it's not (like if the string doesn't end), throw an error!

## Output Description

Expand it into its true form, for example:

    A random
    string\"

# Sample Inputs and Outputs

## Sample Input

    "hello,\nworld!"

## Sample Output

    hello,
    world!

## Sample Input

    "\"\\\""

## Sample Output

    "\"

## Sample Input

    "an invalid\nstring\"

## Sample Output

Invalid string! (Doesn't end)

## Sample Input

    "another invalid string \q"

## Sample Output

Invalid string! (Bad escape code, `\q`)

# Extension

Extend your program to support entering multiple string literals:

    "hello\nhello again" "\\\"world!\\\""

The gap between string literals can only be whitespace (ie. new lines, spaces, tabs.) Anything else, throw an error. Output like the following for the above:

    String 1:
    hello
    hello again

    String 2:
    \"world!\"