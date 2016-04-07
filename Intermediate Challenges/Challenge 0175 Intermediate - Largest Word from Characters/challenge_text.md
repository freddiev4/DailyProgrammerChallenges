#Description:

Given a string of words and a string of letters. Find the largest string(s) that are in the 1st string of words that can be formed from the letters in the 2nd string.

* Letters can be only used once. So if the string has "a b c" then words like "aaa" and "bbb" do not work because there is only 1 "a" or "b" to be used.
* If you have tie for the longest strings then output all the possible strings.
* If you find no words at all then output "No Words Found"

#input:

    (String of words)
    (String of characters)

##example:

    abc cca aaaaaa bca
    a b c

#output:

List of max size words in the first string of words. If none are found "No Words Found" displayed.

##example (using above input):

    abc bca

#Challenge input 1:

    hello yyyyyyy yzyzyzyzyzyz mellow well yo kellow lellow abcdefhijkl hi is yellow just here to add strings fellow lellow llleow 
    l e l o h m f y z a b w

#Challenge input 2:

    sad das day mad den foot ball down touch pass play
    z a d f o n

#Got an Idea For a Challenge?

Visit /r/dailyprogrammer_ideas and submit your idea. 