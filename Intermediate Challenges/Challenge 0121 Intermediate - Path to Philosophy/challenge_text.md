
# [](#IntermediateIcon) *(Intermediate)*: Path to Philosophy
Clicking on the first link in the main text of a Wikipedia article not
in parentheses or italics, and then repeating the process for subsequent
articles, usually eventually gets you to the Philosophy article. As of
May 26, 2011, 94.52% of all articles in Wikipedia lead eventually to
the article Philosophy. The rest lead to an article with no wikilinks
or with links to pages that do not exist, or get stuck in
loops. [Here's a Youtube video demonstrating this phenomenon](http://www.youtube.c\
om/watch?v=vehDe2lSptU).

Your goal is to write a program that will find the path from a given
article to the Philosophy article by following the first link (not in
parentheses, italics or tables) in the main text of the given article. Make
sure you have caching implemented from the start so you only need to
fetch each page once.

You will then extend the program to do a depth-first search in search
of the Philosophy article, backtracking if you get stuck and quitting
only when you know there is no such path. The last thing you
will do is generalise it to do a DFS towards *any* goal article.

Hint: Yes, there is a Wikipedia API. Feel free to use it.

The original formulation of this problem is found in the alternative
text to [XKCD: Extended Mind](http://www.youtube.com/watch?v=vehDe2lSptU).


*Author: nagasgura*
# Formal Inputs & Outputs
## Input Description
Two strings, both which are names of existing Wikipedia articles (in
the Wikipedia language of your choice).
## Output Description
A path of Wikipedia articles, each linked from the previous one, that
leads from the start article to the end article.

* Links in parentheses, italics and tables should not be considered
* Links leading outside the main article namespace should not be considered
* Links are to be considered in the order they appear in an article
* The path should be created in a depth-first fashion
* You must implement article caching early on

You choose the output datastructure yourself, or print to standard-out.
# Sample Inputs & Outputs
## Sample Input
* From: Molecule
* To:   Philosophy

## Sample Output
* Molecule
* Atom
* Matter
* Invariant mass
* Energy
* Kinetic energy
* Physics
* Natural philosophy
* Philosophy
# Challenge Input
* From: Asperger syndrome
* To:   Logic
## Challenge Input Solution
    * Asperger syndrome
    * Autism spectrum
    * Pervasive developmental disorder
    * Mental disorder
    * Psychology
    * Applied science
    * Natural science
    * Science
    * Knowledge
    * Fact
    * Proof (truth)
    * Necessity and sufficiency
    * Logic
# Note
This challenge was originally posted to /r/dailyprogrammer_ideas
Help us out by posting your own ideas!
				