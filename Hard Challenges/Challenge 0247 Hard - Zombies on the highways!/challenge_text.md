Happy new year everyone!

# Description

Well, the zombie apocalypse finally happened.  Zombies are everywhere, and you need to get from city to city to the last bastion of hope for humanity - [Last Chance, CA](https://www.google.com/maps/place/Last+Chance,+CA/@39.0848839,-120.6641083,7z/data=!4m2!3m1!1s0x809bbbd69ad1f261:0xf9407c77fe97af2).   Some highways are more clogged than others.  You have one secret weapon: the BFZG 3000, which completely clears whichever highway you're on, but you can only use it once!  Get your clunky RV, thankfully solar powered, to Last Chance whilst encountering the fewest number of zombies, with the help of your BFZG 3000.


# Input Description

Input is a list of 3-tuples: The first two numbers indicate an undirected edge between cities, and the third number lists the number of zombies on that road.Example:

    (0, 1, 394), (0, 2, 4), (1, 3, 50), (1, 2, 5), (2, 3, 600)


# Output description

Display the list of cities that you traversed whilst minimizing the number of zombies encountered.  Display when you used your BFZG 3000 and how many zombies you encountered (minus those you obliterated with the BFZG) and the total time in milliseconds.  You start at city 0 and end at city N-1, (AKA Last Chance).  In the example above, it would be prudent to go from 0 to 2 and then blast our BFZG 3000 into 3.

    0 to 2, 2 *BLAST* to 3, Reached Last Chance encountering 4 zombies in 1 milliseconds.

# Notes
[Shortest path algorithms](https://en.wikipedia.org/wiki/Shortest_path_problem) are a good starting place.


# Challenge Inputs

1.

(0, 1, 1024), (1, 3, 1029), (1, 5, 2720), (2, 1, 1065), (3, 0, 635), (4, 1, 811), (4, 2, 1732), (4, 3, 1918), (4, 5, 1016), (6, 5, 939)

2.

(0, 20, 2026), (1, 39, 1801), (2, 4, 2758), (2, 19, 2131), (2, 32, 1480), (2, 42, 1888), (2, 46, 1052), (3, 24, 2138), (4, 24, 8), (4, 30, 60), (4, 36, 1540), (5, 14, 77), (5, 40, 1063), (6, 39, 1016), (6, 42, 2101), (9, 30, 234), (11, 49, 262), (12, 40, 2158), (14, 22, 2498), (15, 6, 423), (16, 5, 1292), (16, 11, 1004), (17, 29, 626), (18, 22, 170), (18, 46, 1878), (19, 8, 1331), (20, 38, 1829), (22, 13, 2500), (23, 6, 1786), (25, 3, 1064), (25, 18, 1142), (25, 27, 299), (26, 19, 1140), (26, 20, 839), (27, 37, 1006), (28, 18, 2435), (28, 30, 1145), (29, 43, 1339), (31, 7, 1768), (31, 11, 785), (31, 21, 1772), (31, 27, 114), (32, 17, 2170), (32, 37, 1236), (33, 39, 2019), (33, 44, 1477), (35, 32, 2966), (35, 38, 2390), (36, 10, 2965), (36, 34, 1330), (37, 36, 1901), (37, 48, 2272), (39, 45, 1088), (40, 9, 370), (42, 46, 2388), (46, 0, 1737), (47, 36, 2140), (48, 36, 1068), (49, 17, 2520), (49, 41, 499)

3.

(0, 4, 2330), (1, 31, 1090), (1, 63, 759), (1, 92, 1204), (1, 97, 2103), (2, 72, 72), (5, 11, 2163), (6, 95, 1234), (7, 36, 1647), (7, 52, 690), (8, 27, 293), (9, 44, 2369), (10, 15, 103), (10, 51, 5), (12, 8, 2705), (14, 82, 2587), (15, 42, 2759), (16, 14, 56), (16, 70, 1264), (17, 78, 22), (18, 10, 2540), (19, 37, 241), (20, 15, 2635), (21, 14, 1381), (21, 17, 2953), (21, 45, 357), (22, 4, 1023), (22, 23, 670), (22, 34, 1664), (23, 46, 1885), (24, 89, 1965), (25, 3, 2497), (25, 40, 2087), (25, 47, 2091), (26, 38, 2008), (27, 33, 2271), (27, 91, 2915), (28, 60, 2349), (29, 89, 2822), (32, 77, 1089), (32, 97, 210), (33, 57, 23), (33, 59, 2752), (33, 87, 2108), (34, 7, 2621), (37, 31, 7), (41, 16, 990), (45, 67, 2632), (45, 90, 456), (46, 80, 901), (47, 99, 437), (49, 97, 1067), (50, 78, 1695), (52, 60, 2519), (52, 98, 2926), (53, 28, 1245), (53, 37, 1628), (55, 36, 1176), (55, 73, 812), (55, 75, 2529), (56, 23, 2635), (56, 78, 1952), (57, 45, 2976), (58, 6, 364), (60, 14, 1610), (61, 31, 733), (61, 39, 2063), (63, 11, 1780), (63, 30, 832), (63, 94, 561), (64, 68, 243), (65, 1, 1572), (67, 81, 517), (67, 87, 375), (69, 30, 995), (69, 37, 1639), (69, 47, 2977), (70, 9, 849), (70, 32, 342), (71, 26, 2132), (71, 75, 2243), (72, 54, 562), (75, 13, 1589), (75, 43, 737), (75, 61, 1090), (75, 89, 289), (76, 37, 1984), (76, 66, 552), (77, 9, 1790), (77, 45, 1642), (79, 20, 798), (79, 26, 619), (80, 57, 2444), (80, 67, 1818), (81, 31, 2119), (82, 35, 1220), (82, 37, 546), (83, 12, 572), (83, 77, 2156), (84, 57, 624), (84, 91, 423), (85, 66, 979), (86, 59, 102), (87, 74, 935), (89, 2, 2412), (89, 36, 889), (90, 95, 544), (91, 72, 1201), (92, 9, 79), (92, 40, 1329), (92, 88, 82), (93, 56, 875), (93, 62, 1425), (93, 64, 2400), (94, 2, 2209), (96, 60, 1116), (97, 37, 2921), (97, 48, 2488), (98, 44, 2609), (98, 56, 1335)

# Bonus
Consider if you could have 3 blasts of your BFZG.. how would that differ?  Bonus bonus: Solve this in a stochastic manner to get around that pesky exponential cost.    
# Credit

This challenge was suggested by /u/captain_breakdance. If you have any challenge ideas please share them on /r/dailyprogrammer_ideas and there's a good chance we'll use them!