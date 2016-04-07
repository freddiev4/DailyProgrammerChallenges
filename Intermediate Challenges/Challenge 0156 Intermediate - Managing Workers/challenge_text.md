# [](#IntermediateIcon) _(Intermediate)_: Managing Workers

After yesterday's April Fools shenanigans, management worldwide must work at full pace to make up for lost productivity from the innumerable ThinkGeek pranks aimed at coworkers. You've been hired by some random company to create a program which lets them organise their workers to do a set of given tasks in a project as efficiently as possible.

Each task is described by its duration (in days). Each worker can only do one task at once, and tasks must be done as a whole - ie. you can't do one half at one point and then another half later on. However any number of tasks can be performed concurrently by different workers. You will also be given the maximum length of time, in days, that the overall project can go on for.

The catch is - some tasks depend on other tasks to be fully completed before they themselves can be started. If Task A needs Task B and C to be completed before it can begin, then Tasks B and C are *dependencies* of Task A.

Your challenge is to try and find a way of scheduling the workers such that the number of workers (and idle time of each worker) is minimised.

# Formal Inputs and Outputs

## Input Description

On the console, you will be given numbers N and T, separated by commas. **N** represents the number of tasks in the project, and **T** represents the maximum time the project may go on for.  Next you will be given a list of tasks, in the format:

    Name, D [, Dependency]
    
Where **Name** is the name of the task, and **D** is its duration. The number of dependencies may be zero or one. There will be no circular dependencies. Dependencies are referenced by name.

## Output Description

You must print the total number of workers assigned. Then the assigned tasks for each worker, and starting on which day, in the format:

    N, Name, S
    
Where **N** is the worker number (starting from 1, eg. Worker 1, Worker 2, Worker 3, etc.), **Name** is the name of the task, and **S** is the starting day (starting from Day 1.)

Finally you must print the total number of idle (not working) worker days, **I**. So if Worker 1 has 3 off days and Worker 2 has 5, then print 8.

# Sample Inputs & Outputs

## Sample Input

	6,12
	Lights,2,Wiring
	Windows,3
	Insulation,4
	Painting,4
	Wiring, 6
	Cleaning,7,Painting

## Sample Output

 	3
	1,Painting,1
	1,Cleaning,5
	2,Windows,1
	2,Wiring,4
	2,Lights,10
	3,Insulation,1
	10

# Challenge

## Challenge Input

	13,17
	Preparation,2,Planning
	Hiring,3
	Legal,3
	Briefing,4,Preparation
	Advertising,4
	Paperwork,5,Legal
	Testing,5,Frontend
	API,6
	Backend,6
	Planning,7
	Frontend,8
	Mobile,8
	Documentation,9,API
	
## Possible Challenge Output

	5
	1,Frontend,1
	1,Paperwork,9
	1,Advertising,14
	2,Hiring,1
	2,Mobile,4
	2,Testing,12
	3,Legal,1
	3,Backend,4
	3,Preparation,10
	3,Briefing,12
	4,API,1
	4,Documentation,7
	5,Planning,1
	15
	
# Hint

This can be partly solved using bin-packing.