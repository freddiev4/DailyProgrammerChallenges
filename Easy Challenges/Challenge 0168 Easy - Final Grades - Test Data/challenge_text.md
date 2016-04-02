#Description:

Last week we had [[6/18/2014] Challenge #167 [Intermediate] Final Grades] (http://www.reddit.com/r/dailyprogrammer/comments/28gq9b/6182014_challenge_167_intermediate_final_grades/) 

For this challenge I generated data using excel. It was a bit time consuming but for the limited data set it was not too bad. But what if we needed 100 students? Or 1000? Or even 10000?


Sometimes it is useful to use programs to generate test data to test programs. For today's challenge your task is to generate the test data for that challenge.


#Input:

* n -- representing how many random student records to generate

Let us assume N will always be a positive number and I will let you decide what upper bound if any you want to set.

I would recommend running your solution on 1, 10, 100, 1000, 10000. Maybe post a sampling of 10 to show what you can generate.

#Output: 

Should be a listing either via console out or a text file or other of your choice that is the test data. To remind you what a record looks like:

* (first name) , (last name) (score 1) (score 2) (score 3) (score 4) (score 5)

For example of a student roster see the [Intermediate] (http://www.reddit.com/r/dailyprogrammer/comments/28gq9b/6182014_challenge_167_intermediate_final_grades/) challenge's input
#Data:

To generate this data you will need to find a way to generate random first and last names and 5 scores (between 0 to 100)

#Optional:

Check your output and look for duplicate first and last names generated and remove the duplicates. It is up to you to decide how to do this.

Example would be if you generated "John , Smith" two times you would want to take action. 

Also keep in mind the larger N values could more likely create duplicates. Consider a "give up" logic where you attempt to be unique but at some point have to accept that there will be some duplicates. 

