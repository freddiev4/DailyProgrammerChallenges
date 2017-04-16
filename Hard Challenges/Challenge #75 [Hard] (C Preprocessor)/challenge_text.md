First off, I'd like to apologize for posting this 12 hours late, I'm a little new to my mod responsibilities.  However, with your forgiveness, we can go onward!

Everyone on this subreddit is probably somewhat familiar with the C programming language.
Today, all of our challenges are C themed!  Don't worry, that doesn't mean that you have to solve the challenge in C.

For the difficult challenge, we are going to look at the C Pre-Processor.  The C pre-processor is a program (implemented as a compilation pass in gcc, but it used to be a standalone program) that reads in text files that have been annotated with special 'commands'.  It interprets these commands and uses them to output a transformed version of the text file with no annotations or comments.    For some examples, look [here](http://www.cs.utah.edu/dept/old/texinfo/cpp/cpp.html#SEC2) and [here](http://en.wikipedia.org/wiki/C_preprocessor)

Your task is to implement as much of the C preprocessor as you can in as few lines as you can.  Obviously getting an implementation fully-conformant with the full specification is very difficult, so try to get the most useful and obvious stuff as close as possible first.  At least try to implement comments, #ifdef, #ifndef, #else, #elif, #endif, #define for constants, and #include .  Don't kill yourself worrying about studying the spec for strange corner cases, just implement it as close as you can..this is for fun and learning, remember!

More complex stuff like #if and defined() and full macro with arguments support, and other things is a bonus.

As an example, consider this input file:

    #define DOGNAME Brian
    The following phrase is often used in web design:
    #define FRENCH
    #ifdef FRENCH //if french
    Le renard brun saute par-dessus le chien paresseux. Le nom du chien est DOGNAME.
    #else
    The brown fox jumped over the lazy dog.  The dog's name is DOGNAME.
    #endif

should output

    The following phrase is often used in web design:
    Le renard brun saute par-dessus le chien paresseux. Le nom du chien est Brian.
  