#Description

In the far future, demand for pre-manufactured housing, particularly in planets such as Mars, has risen very high. In fact, the demand is so much that traditional building planning techniques are taking too long, when faced with the "I want it now!" mentality of the denizens of the future. You see an opportunity here - if you can cheaply generate building designs, you are sure to turn a huge profit.

You decide to use ASCII to design your buildings. However, as you are lazy and wish to churn out many designs quickly, you decide to simply give the computer a string, and have the computer make the building for you.

#Formal input & output

**Input**

Input will be to STDIN, or read from a file input.txt located in the working directory of the operating system. Input consists of one line between 1 to 231-1 length. The line can be assumed to only contain the lowercase letters from a to j, and numbers from 1 to 9. It can also be assumed that a number will not immediately follow another number in the string (i.e. if the 4th character is a number, the 5th character is guaranteed to be a letter, not a number.) 

**Output**

Output will be to STDOUT, or written to a file output.txt in the working directory. For each non-number character of input, the output will contain a vertical line composed as shown [here](http://i.imgur.com/twPajPG.png):



A letter can also be prefixed by a number n, where n is an integer between 1 and 9. In this case, n whitespaces must be at the bottom of the vertical line. For example, 3b would output

+

+

S

S

S



Where spaces are identified with a capital S (In your actual output, it should be actual spaces).
Sample Inputs and Outputs

#Sample input 1 (Bridge)

j3f3e3e3d3d3c3cee3c3c3d3d3e3e3f3fjij3f3f3e3e3d3d3c3cee3c3c3d3d3e3e3fj

#Sample output

    
    .                 . .                 .
    .*              **...**              *.
    .***          ****...****          ***.
    *-----      ------***------      -----*
    *-------  --------***--------  -------* 
    *+++++++**++++++++***++++++++**+++++++*
    -+++++++--++++++++---++++++++--+++++++-
    -       --        ---        --       -
    +       ++        +++        ++       +
    +       ++        +++        ++       +

#Notes



Try making your own buildings as well instead of just testing the samples. Don't forget to include your favourite ASCII construction with your solution!