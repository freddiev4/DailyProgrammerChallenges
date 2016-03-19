Challenge #19 will use [The Adventures of Sherlock Holmes](http://www.gutenberg.org/cache/epub/1661/pg1661.txt) from [Project Gutenberg](http://www.gutenberg.org).

Write a program that will build and output a word index for The Adventures of Sherlock Holmes.  Assume one page contains 40 lines of text as formatted from Project Gutenberg's site.  There are common words like "the", "a", "it" that will probably appear on almost every page, so do not display words that occur more than 100 times.  

Example Output:  the word "abhorrent" appears once on page 1, and the word "medical" appears on multiple pages, so the output for this word would look like:

abhorrent: 1

medical:  34, 97, 98, 130, 160

Exclude the Project Gutenberg header and footer, book title, story titles, and chapters.