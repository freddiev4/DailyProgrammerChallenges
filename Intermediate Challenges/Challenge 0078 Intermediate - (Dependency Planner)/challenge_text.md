Working on planning a large event (like a wedding or graduation) is often really difficult, and requires a large
number of dependant tasks.  However, doing all the tasks linearly isn't always the most efficient use of your time.
Especially if you have multiple individuals helping, sometimes multiple people could do some tasks in parallel.

We are going to define an input set of tasks as follows.  The input file will contain a number of lines, where each
line has a task name followed by a colon,  followed by any number of dependencies on that task.  A task is an alphanumeric string with underscores and no whitespace

For example, lets say we have to eat dinner.  Eating dinner depends on dinner being made and the table being set.  Dinner being made depends on having milk, meat and veggies.  Having milk depends on going to the fridge, but meat and veggies depend on buying them at the store.
buying them at the store depends on having money, which depends on depositing ones paycheck....  this scenario would be described in the following input file.  Note task definitions can appear in any order and do not have to be defined before they are used.

    eat_dinner: make_dinner set_table
	make_dinner: get_milk get_meat get_veggies
	get_meat: buy_food
	buy_food: get_money
	get_veggies: buy_food
	get_money: deposit_paycheck
	
Write a program that can read an input file in this syntax and output all the tasks you have to do, in an ordering that no task happens before one of its dependencies.