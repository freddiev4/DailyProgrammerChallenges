# [](#HardIcon) _(Hard)_: Novel Compression, pt. 3: Putting it all together

Welcome to the third and final part of this week's Theme Week. Today is not so much a 'hard' challenge as such, but rather a culmination of this week's efforts. You will be putting your code from Monday and Wednesday into one program that can be operated [via the command line or terminal](http://en.wikipedia.org/wiki/Command-line_interface#Arguments), and will deal with files rather than textual input.

# Formal Inputs and Outputs

## Input Description

The program will take 3 arguments on the command line: the first one will be one of the following:

* `-c` Will compress the input.

* `-d` Will decompress the input.

If it is anything other than these, return an error message. The second argument will be a path to a file that the input data will be read from, and the third argument will be a path to a file that output data will be written to. If there are any more or less than three arguments given, return another error message.
    
## Output Description

Using the given operation (compress or decompress), the data in the input file will be processed, and the resulting data written to the output file.

# Example Input

There is a plain text copy of Green Eggs and Ham [available here](http://pastie.org/pastes/9180059/text?key=wmyubynyw72ten8m3gzpfw), edited to work with our compression algorithm, which can be used to test your program.

For example, on Windows:

    compressor -c eggs.txt eggs-c.txt

Or on nearly everything else:

    ./compressor -c eggs.txt eggs-c.txt

# Notes

It may be an idea to submit your code to a site such as [Github Gist](https://gist.github.com/) or another code sharing site, rather than pasting it in the comments, as the combined code may be quite long.

Hopefully by the end of this we'll have ported this program to a wide selection of languages.

Green Eggs and Ham is copyright of Dr Seuss?. I think the usage here is fair use as it is not for profit.