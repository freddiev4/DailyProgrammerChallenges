# [](#EasyIcon) **(Easy)**: A Flagon of Flags

In the command-line world, programs are operated not with graphical user interfaces but with command line flags. These flags are what the operator uses to pass parameters to the program. The standard form of flag starts with a double hyphen `--` and consists of a word in `lower-case-separated-by-hyphens`. For example, to forcefully remove a directory recursively on Unix based systems, the command used may be:

    rm --recursive --force dir/

Here, the `recursive` and `force` flags have been enabled, which the program detects and changes its behaviour accordingly. Alternatively, many programs allow a *short-form* of command-line flag. These flags are one letter long andn start with a single hyphen `-`. For example, the above command can be reduced to:

    rm -r -f dir/

This is much shorter, so commonly used flags are often abbreviated as such. An even shorter form merges several of these flags into one flag. This is still separated by a hyphen but consists of multiple letters. For example, in the `tar` command on Unix based systems, the `-x -z -v` flags can be merged into `-xzv` with the exact same meaning. The above `rm` command looks like this:

    rm -rf dir/

This is even more convenient for a terminal operator to enter. Today, you will write a program which will accept a string of flags in the above formats and output which flags were activated.

# Formal Inputs and Outputs

## Input Description

You will first input a number **N**. You will then accept **N** lines of input in the format:

    f:force

This is a *short-form definition*; this particular example denotes that the flag `-f` is equivalent to the flag `--force`. Lastly you are to accept one further line of input containing the flags and other parameters passed to the program. Remember that programs can accept parameters that are *not* flags. These don't start with a hyphen and there may be several of them. For example,

    -Q -rf --no-preserve-root directory1/ directory2/

In which the flags given are `-Q` `-rf` (same as `-r -f`) and `--no-preserve-root`, and the parameters are `directory1/` and `directory2/`. Remember the `Q`, `r` and `f` flags are defined in the short-form definition format above.

## Output Description

You are to output a list of the *full names* of all of the flags entered (eg. `force` rather than `f`), as well as all of the parameters entered. Alternatively, if a short-form flag is entered that doesn't have a difinition, print an error.

# Sample Inputs and Outputs

## Sample Input

    4
    a:all
    f:force
    n:networking
    N:numerical-list
    -aN 12 --verbose 192.168.0.44

(not all commands need a short-form expression; here, `verbose` only exists as the long-form.)
    
## Sample Output

    flag: all
    flag: numerical-list
    parameter: 12
    flag: verbose
    parameter: 192.168.0.44

# Extension (Intermediate)

Some flags may have a parameter. For example, a flag `output` may take a filename parameter. The long form of this would be:

    --output=log.txt

The short form of this would be:

    -o log.txt
    
The short form has no equals sign, but the long form does. The short form can still be used as a combination, like

    -rxo log.txt

Would activate the `r` and `x` flags, along with setting the value of `o` to `log.txt`. In this case, print the output like so:

    flag: output (value: log.txt)

To denote that a flag can take a parameter, its input short-form definition is prefixed with a star `*`, like so:

    *o:output

## Sample Extension Input

    6
    a:all
    *A:address
    f:force
    n:networking
    N:numerical-list
    *o:output
    -aNo output-dir/file.txt 12 --verbose --address=192.168.0.44

## Sample Extension Output

    flag: all
    flag: numerical-list
    flag: output (value: output-dir/file.txt)
    parameter: 12
    flag: verbose
    flag: address (value: 192.168.0.44)

# Notes and Further Reading

Here is a [StackOverflow post](http://stackoverflow.com/questions/2160083/what-is-the-general-syntax-of-a-unix-shell-command/2160165#2160165) describing the standard in greater detail for command line flags.

# Thanks

The idea for the challenge comes from **jnazario**, **XenophonOfAthens** and **savage884**. Thank you very much! The original post by **jnazario** detailing the solution is [here](http://www.reddit.com/r/dailyprogrammer_ideas/comments/2hwsue/easy_implement_a_command_line_argument_parser/). It has some more reading material if you're interested. Check it out.

# Participate

This subreddit needs *you*, the developer, to survive. Join our IRC channel on `irc.freenode.net` at `#Reddit-DailyProgrammer` and come and have a chat. Don't forget to submit any challenge ideas to /r/DailyProgrammer_Ideas - there's a chance we'll use it! If your challenge is used for a submission you will receive a gold medal for your flair, as the 3 original submitters have done today (well done!)