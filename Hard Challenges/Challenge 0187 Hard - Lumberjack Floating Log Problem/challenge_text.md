#Description:

Our lumberjacks have been busy lately. Before winter the lumberjacks must get the logs to the lumber mill. Our lumberjacks use a local river system to float logs down river to the lumber mill. 

One of our lumberjacks was a former software engineer who gave up his keyboard and mouse for an axe. He has suggested to the lumberjack foreman that using a program he can solve a problem they been having.

They want to find out how many logs can float in the river without causing a pile up. If you put too many logs in the river they will get stuck. However if you put just enough in and help them float down paths in the complex river they can optimize how many logs can be sent to the lumbermill.

Your challenge is to solve two problems.

* How many logs can be sent down the river system to maximize the use of the river without causing a pile up.

* The routes must be optimal and the shortest path possible given the logs already sent on the river. Show the optimal path.

#River:

The river is directed from a source down into a large pond by the lumbermill. There are many routes to take. Each route can support so many "log routes". Think of a log route as a route a log takes down the stream. For this log to reach the pond it takes away capacity from the route to hold logs. Once a part of a route has enough logs passing through it - it can no longer support more logs.

The following directed river gives you "nodes". The direction matters as you can only go in 1 direction. And the number represents how many "log paths" can travel over that segment of river before new log  routes can no longer route on that segment (they have to find another segment that is not at full capacity)

A is our Start. All logs enter the river at point A.

* A->B - holds 6 log paths
* A->C - holds 2 log paths
* B->E - holds 3 log paths
* B->D - holds 3 log paths
* D->C - holds 2 log paths
* D->F - holds 1 log path
* C->G - holds 5 log paths
* E->H - holds 1 log paths
* E->I - holds 2 log paths
* F->H - holds 1 log path
* G->H - holds 2 log paths
* G->I - holds 2 log paths
* H->I - holds 4 log paths

I is the lumber mill pond.

So log routes will go from A to I. You want the shortest path to route logs. But as routes get used eventually they hit segment limits and you will have to find a new route to take for the next log to find the shortest path.

#Log Paths

So an optimal path on our river would be A->B->E->I -- 4 segments. However each of those segments will now have 1 less log that can go on it. When we send another log we might A->B->E->I again for the next log. But the third log will not be able to take this path because the E->I segment has 2 logs going on that path so the problem must find another path as the E->I segment is now maxed on what logs can go on it.

#Output:

Send a log and show the optimal path. Your output will show the log #  (the first, 2nd, 3rd log sent down the river) and the shortest path on the river it can take (given all the previous log routes being used)

Eventually hit a point where no new log can be sent because the river cannot handle it. Anymore logs will cause a pile up. At this point we will know how many logs can our river handle.

So your output should show as an example

Log #1 takes A->B->E->I - path of 4

Log #2 takes A->B->E->I - path of 4

Log #3 takes A->C->G->I - path of 4

...

Log #n takes (path) - path of (size of path)


River is now full. Can send n logs.

#Spoiler Warning

This challenge is key to keep your solutions under spoiler protection. Not just your code but any verbal text talking about how you solve it. So if you wish to use "text" to say like "Oh well I solve this by...." please spoiler that or your solution will be removed. Thank you.

#Commentary on difficulty

It sometimes happens solutions have commentary on "Oh this wasn't hard" for [Hard] challenges. Don't do this. I see these comments as an un-needed comment towards the mods. Sometimes [Hard] is easy for you because you solved problems like this. Great. Many people cannot solve [Hard] problems and this kind of comment just hurts the community and also as you can see annoys moderators who spend time to research and develop challenges.

Thank you.

