#Introduction
Anna is a teacher, kids can sit where they want in her classroom every morning. She noticed that they always sit next to their closest firends but she would like to introduce mixity.

Her idea is to create a "lotto" game when she take the morning attendance. Every kid will have a paper with a limited number of names of its classmate. Each kid will claim their name in the sitting order. Every time a kid claim its name, all kids who have its name in their list can check it. The first kid who finish his list is the morning winner.

#Challenge details
You have to create a program to help Anna as she often have a different class configuration. 

##Input
Your program will input 3 elements:
 
* A list of kids in class (separated by ";")
* The number of kids names she want on each output list

##Output

Your program should output the loto name list to give to kids in the morning. 

* Each list sould precise which kid to give the list
* Each kid must have a unique list
* Lists have to be randomised (not in alphabetic order)


#Challenge Example
##input
List of kids:

    Rebbeca Gann;Latosha Caraveo;Jim Bench;Carmelina Biles;Oda Wilhite;Arletha Eason

Number of kids in list: 3

##Example of output:

    Oda Wilhite > Carmelina Biles; Arletha Eason; Jim Bench
    Jim Bench > Arletha Eason;Oda Wilhite; Carmelina Biles
    Latosha Caraveo > Carmelina Biles;Rebbeca Gann; Arletha Eason
    Carmelina Biles > Oda Wilhite; Arletha Eason; Latosha Caraveo
    Arletha Eason > Carmelina Biles;Jim Bench;Oda Wilhite
    Rebbeca Gann > Latosha Caraveo;Jim Bench;Carmelina Biles


#Challenge input
    
    Rebbeca Gann;Latosha Caraveo;Jim Bench;Carmelina Biles;Oda Wilhite;Arletha Eason;Theresa Kaczorowski;Jane Cover;Melissa Wise;Jaime Plascencia;Sacha Pontes;Tarah Mccubbin;Pei Rall;Dixie Rosenblatt;Rosana Tavera;Ethyl Kingsley;Lesia Westray;Vina Goodpasture;Drema Radke;Grace Merritt;Lashay Mendenhall;Magali Samms;Tiffaney Thiry;Rikki Buckelew;Iris Tait;Janette Huskins;Donovan Tabor;Jeremy Montilla;Sena Sapien;Jennell Stiefel

Number of name in each kid list: 15


# Credit

This challenge was suggested by user /u/urbainvi on /r/dailyprogrammer_ideas, many thanks. If you have an idea, please share it there and we might use it!