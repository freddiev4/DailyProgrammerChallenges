# [](#IntermediateIcon) **(Intermediate)**: Syntax Highlighting

*(sorry for the delay, an unexpected situation arose yesterday which meant the challenge could not be written.)*

Nearly every developer has came into contact with syntax highlighting before. Most modern IDEs support it to some degree, and even some text editors such as Notepad++ and gedit support it too. Syntax highlighting is what turns this:

    using System;
    
    public static class Program
    {
        public static void Main(params string[] args)
        {
            Console.WriteLine("hello, world!");
        }
    }

into [something like this](http://i.imgur.com/DhfeU8D.png). It's very useful and can be applied to almost every programming language, and even some markup languages such as HTML. Your challenge today is to pick any programming language you like and write a converter for it, which will convert source code of the language of your choice to a highlighted format. You have some freedom in that regard.

# Formal Inputs and Outputs

## Input Description

The program is to accept a source code file in the language of choice.

## Output Description

You are to output some format which allows formatted text display. Here are some examples for you to choose.

* You could choose to make your program output HTML/CSS to highlight the syntax. For example, a highlighted keyword `static` could be output as `<span class="syntax-keyword">static</span>` where the CSS `.syntax-keyword` selector makes the keyword bold or in a distinctive colour.
* You could output an image with the text in it, coloured and styled however you like.
* You could use a library such as `ncurses` (or another way, such as `Console.ForegroundColor` for .NET developers) to output coloured text to the terminal directly, siimlar to the style of complex editors such as vim and Emacs.

# Sample Inputs and Outputs

The exact input is up to you. If you're feeling meta, you could test your solution using... your solution. If the program can highlight its own source code, that's brilliant! Of course, this assumes that you write your solution to highlight the language it was written in. If you don't, don't worry - you can write a highlighter for Python in C# if you wish, or for C in Ruby, for example.

# Extension (Easy)

Write an extension to your solution which allows you to toggle on and off the printing of comments, so that when it is disabled, comments are omitted from the output of the solution.

# Extension (Hard)

If your method of output supports it, allow the collapsing of code blocks. [Here is an example in Visual Studio](http://gfycat.com/DefensiveLimpDore). You could achieve this using JavaScript if you output to HTML.