##Description
Most of the residential buildings have been destroyed by the termites due to a bug in /u/1337C0D3R's code. All of the civilians in our far-future society now live in bunkers of a curious design - the bunkers were poorly designed using the ASCII Architect and are thus not secure. If the bunkers are breached by a hostile force, it is almost certain that all the civilians will die.

The high-tech termites have developed a taste for human flesh. Confident from their victory at the building lines, they are now staging a full attack on the bunkers. The government has hired you to design protective walls against the termite attacks. However, their supplies are limited, so you must form a method to calculate the minimum amount of walls required.

A map of an area under assault by evil termites can be described as a 2d array of length m and width n. There are five types of terrain which make up the land:

* *: A termite nest. Termites can pass through here. The termites begin their assault here. Protective walls cannot be placed here.
* #: Impassible terrain. Termites cannot pass through here. Protective walls cannot be placed here.
* +: Unreliable terrain. Termites can pass through here. Protective walls cannot be placed here.
* -: Reliable terrain. Termites can pass through here. Protective walls can be placed here.
* o: Bunker. Termites can pass through here. If they do, the civilians die a horrible death. Protective walls cannot be placed here.

Termites will begin their attack from the nest. They will then spread orthogonally (at right angles) through terrain they can pass through.

A map will always follow some basic rules:

* There will only be one nest.
* Bunkers will always be in a single filled rectangle (i.e. a contiguous block).
* A bunker will never be next to a nest.
* There will always be a solution (although it may require a lot of walls).

##Formal Inputs And Outputs
##Input Description

Input will be given on STDIN, read from a file map.txt, or supplied as a command line argument. The first line of input will contain 2 space separated integers m and n. Following that line are n lines with m space seperated values per line. Each value will be one of five characters: *, #, +, -, or o.

Input Limits

    1 <= n < 16
    3 <= m < 16

##Output Description

Output will be to STDOUT or written to a file output.txt. Output consists of a single integer which is the number of walls required to protect all the bunkers.
##Sample Inputs and Outputs
##Sample Input 1

6 6

 #++++*

 #-#+++

 #--#++

 #ooo--

 #ooo-#

 ######

##Sample Output 1

2

(The walls in this example are placed as follows, with @ denoting walls:

 #++++* 

 #@#+++

 #--#++

 #ooo@-

 #ooo-#

 ######

##Notes

Thanks again to /u/202halffound

