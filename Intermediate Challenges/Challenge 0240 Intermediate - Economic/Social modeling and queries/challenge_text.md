This is a task of reading a small database, and querying it and processing results, or building a model from the data.

You have been tasked with saving Humanity from politicized bickering preventing any honest discourse of economic and social policy.  

It is 2040, and ever since the beginning of the 2016 Trump economist beheading regime (yes he is still your ruler), honest economic information became even more suppressive than in the beginning of the millenium.  Good luck.

#the core model

The cornerstone of any society is the "make food available" (farmer/hunter/gatherer/magician/importer from intergalactic worlds) person.

A society is made up of citizens (**P**), **S**laves, **A**nimals, and **M**achines.  Each (of the 4) category consumes $10000 (constant unit-inflation proof) per unit per year to sustain itself.  1 person is 1 unit of citizen.  1 slave-human is 1 unit of slave and its consumption cost includes security.  1 unit of animals is however many (fractional is ok) animals it takes to cost $10000 in resources to maintain.  1 unit of machine is similar to animals but includes the purchase and operating costs (a $50k tractor would be 1/5th of a unit that can be shared).

**sample input:**

Input is a list of records (space delimited fields) each record describes one group in society:    

Group name, population of that group, production($) from each group unit, PSAM (category), tax factor(1 is max, meaning that all of that group's production is taxable (if there is a tax rate).  0 would mean their production value is not taxable)

     farmer 50 30000 P 1  
     spouse 30 15000 S 0.5  
     police 1 0 P 0  
     hippie 4 -3000 S 0.8  

The above numbers suggest that farmers produce $30k worth of stuff.  Their (a farmer's) spouses help them produce another $15k (but the couple consumes $20k together).  A policeman doesn't produce anything, but his presence may limit the number and destruction caused by hippies.  Thieves destroy value in the sense that it discourages production if work will be stolen, or producers attacked.  A hippie is a euphemism for thief,  beggars and scamsters, as viewed by the established society.  The word hippie is chosen because they may be unfairly persecuted, and simply misunderstood. **For every 1 police, 1 hippie is scared away.  1 hippie joins society for every 10 establishment households**.  Taxation (or alternate socialization) must be introduced to afford police.

Spouses, children and hippies are classified as slaves, for unfortunate convenience.  The coding allows the simplification of their production flowing to a household, and to indicate that they do not take spouses of their own.

The other cornerstone of civilization is making children.  A farmer's child might produce along the formula: (age - 6)* 1000 for age <= 18.  It may be easier to model as total cost of $160k less production benefit of $55k, and so net cost of $105K, or $7k per year.

This simplification of the **cost of children being $7k/year for 16 years to farmers** is probably the most useful and easiest to model.  We can make separate entries for non-farmer-spouses production value, and non-farmer-children may cost $10k/year for 16 years (same as all people and production units).

# more complete input 

     farmer 50 30000 P 1  
     clothier 5 22000 P 1
     builder 5 22000 P 1
     miscellaneous 5 10000 P 1
     entertainer 5 5000 P 0.5
     hippie 7 -3000 S 0.8   
     farmer-spouse 0 15000 S 0.5  
     spouse 0 8000 S 0.5  
     farmer-child 0 3000 S 0
     child 0 0 S 0
     police 0 0 P 0  
 

New categories needing explanation: Clothiers and builders production value is what is needed by society for sustainability.  More can be added to provide "premium" value.  Entertainers as a group indicate part of the sustainable need for entertainment, but the sustainabiliy value contributed by each is deemed low to indicate that they are not high need and depend more on audience than audience depends on them.  Miscellaneous covers communication, policy, perhaps basics of transportation, containers for farmer products, special children products...

The tax field represents the percentage of production or destruction that is taxable.  A 50% taxability for entertainers reflects the point that much of their production escapes accountability.  Spouses similarly provide value that is not taxable.  Theives/hippies have a high 80% taxability because their destruction is assumed to be a tax deduction to those that lose value.

The model is meant to adapt to various stages of industrialization.  The input above is meant as a platform for exploring sustainability

# challenge questions 

1 . What is the surplus produced by the above society?

2 . What surplus spending rate (after the $10k to meet their own and other family needs) must exist to allow other professions to exist and survive?  (assuming uniform surplus spending rate in all society, other professions exist only if farmers spend sufficiently.)  You can save this surplus spending rate as a field for each profession (even if they are all initially equal)

These first 2 problems don't directly help with problem 3 and 4.  They are warm up queries (though may be relevant in open problem 5).  Something to notice that is being ignored is that way more food is being produced than there are eaters.

3 . With the constraint that every group member can have only 1 spouse, and that a spouse is needed for a child, how many 1 child famillies can the society support? (spouses are conjured from thin air - like mail order or something)

You will probably note here that the clothier/builder populations can only afford a spouse and a child if hippie/thiefs do not directly harm them.  You may assume the easier charity from mainly farmers compensates for individual losses, or model (harder) random child mortality equal to one gypsy act per year.

4 . A sustainable population requires 2 children per family.  Of the above professions, only farmers can produce enough to self-sustain.  What number of farmers is needed to support the rest of society (with a sustainable population)? (this magic number is if 100% of each family surplus were taxed and distributed according to need)

5 . Taxation has been ignored so far.  Use whatever taxation rate you would like to see, and measure how many fewer families it sustainably generates.  If you have an alternate social policy 

# tips and cheats
Databases and spreadsheets are allowed.  Class or record structures should help too.

An easier challenge than SOLVING for numbers, and one I expect from most solutions, is to create a measuring program. ie. if some numbers are plugged in, a program/function measures the output from those numbers, and you can change plugged in numbers until the input is valid, and creates maximized output.

The challenge is mostly to organize data and code so that you can query and extend it in ways that are asked, and/or could interest you.

If you want to do anything else with this record format, but different inputs, just post your inputs (please put any new columns at the end)

# Bonus challenges: (will perhaps form basis for harder challenge next month)

Analyze effects of a productivity innovation.  

Compare the effects of a taxation system to support bureaucracy vs. one of basic income.


