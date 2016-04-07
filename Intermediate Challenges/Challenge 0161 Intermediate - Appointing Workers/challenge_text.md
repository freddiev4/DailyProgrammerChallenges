# [](#IntermediateIcon) _(Intermediate)_: Appointing Workers

In the past, we've already tackled the challenge of deciding in which order to do certain jobs. However, now you need to work out which worker gets which job. What if some workers are only qualified to do certain jobs? How do you ensure there are no jobs or workers left out? Your challenge now is (given some jobs that need to be done, and some workers and the jobs they're allowed to do) compute who should be given which job, so no-one is doing a job they are not qualified for.

# Formal Inputs and Outputs

## Input Description

On the console, you will be given numbers N. **N** represents the number of jobs that need to be done, and the number of workers.^(see footnote) To keep this challenge at an Intermediate level, the number of workers and jobs will always be the same.

You will then be given a list of **N** jobs (on separate lines), followed by **N** workers and the jobs they're allowed to do (separated by commas, one worker per line).

Note that there may be more than one possible assignment of workers.

## Output Description

You must print the list of workers, along with the job each worker is assigned to.

# Sample Inputs & Outputs

## Sample Input

	5
	Wiring
	Insulation
	Plumbing
	Decoration
	Finances
	Alice Wiring,Insulation,Plumbing
	Bob Wiring,Decoration
	Charlie Wiring,Plumbing
	David Plumbing
	Erin Insulation,Decoration,Finances

## Sample Output

	Alice Insulation
	Bob Decoration
	Charlie Wiring
	David Plumbing
	Erin Finances

# Challenge

## Challenge Input

	6
	GUI
	Documentation
	Finances
	Frontend
	Backend
	Support
	Alice GUI,Backend,Support
	Bill Finances,Backend
	Cath Documentation,Finances
	Jack Documentation,Frontend,Support
	Michael Frontend
	Steve Documentation,Backend
	
## Challenge Output

Note that this is just one possible solution - there may be more.

	Alice GUI
	Bill Backend
	Cath Finances
	Jack Support
	Michael Frontend
	Steve Documentation
	
# Hint

This problem is called the Matching problem in usual terms.

# Footnote

Someone messaged me a while ago asking why I include this part of the challenge. Specifying how many lines of input follows makes things slightly easier for people writing the solution in languages like C where variable sized arrays are complicated to implement. It's just handy more than anything.