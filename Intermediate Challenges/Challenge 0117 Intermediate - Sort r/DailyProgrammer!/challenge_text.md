# [](#IntermediateIcon) *(Intermediate)*: Sort r/DailyProgrammer!
Some users of r/DailyProgrammer want a list of URLs ordered from our very first challenge to the easiest challenge. Your goal is to crawl r/DailyProgrammer, automatically generate two types of these lists, and that's it!

*Author: nint22*
# Formal Inputs & Outputs
## Input Description
No formal input is required
## Output Description
You must print out two lists: one sorted by number, then category, and the other list sorted by category, then number. For each list, there should be N lines where N is the number of total challenges published. For each line, the challenge difficulty, ID, title, and URL must be placed in the following format:

[Easy / Medium / Hard] #<ID>: "<Title>" <URL>

To clarify on the two lists required, the first must be like the following:

    ...
    [Easy] #101: "Some Title" http://www.reddit.com/...
    [Intermediate] #101: "Some Title" http://www.reddit.com/...
    [Hard] #101: "Some Title" http://www.reddit.com/...
    ...

List two:

    ...
    [Easy] #101: "Some Title" http://www.reddit.com/...
    [Easy] #102: "Some Title" http://www.reddit.com/...
    [Easy] #103: "Some Title" http://www.reddit.com/...
    ...

# Sample Inputs & Outputs
## Sample Input
None needed
## Sample Output
None needed
# Challenge Input
None needed
## Challenge Input Solution
None needed
# Note
Google around for the Reddit API documentation and related crawler libraries. It might save you quite a bit of low-level parsing!
				