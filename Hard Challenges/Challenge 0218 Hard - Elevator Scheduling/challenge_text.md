While this one is a hard challenge, it's also open ended - be creative in how you solve the problem. I encourage you to compare notes, think about the challenge before you write code, and explore your algorithms. See the bonus questions below for some additional questions.

# Description

Most of us have seen and ridden elevators - you crazy folks in the UK and commonwealth countries often call them "lifts" - but I'm sure I'm not the only one who has puzzled about the scheduling algorithms. Which riders do you pick up and when? Do you service requests in the order of arrival or do you work on maximal overlap?

For this challenge, you'll have to anwer those questions. You're designing an elevator scheduling algorithm for a building and you have plenty of riders to keep happy. You can have any algorithm you want as long as you stick to the constraints - the cars have a fixed capacity and speed.

Make sure you see the bonus questions after the challenge input.

# Input Description

You'll be given a single integer *N* on a line. The first *N* lines will identify elevator cars and with these fields: Car identifier, capacity, vertical speed in floors per second, and starting floor. Assume instantaneous getting on or off the elevator for the riders once you arrive on the floor. Assume that the elevator *is able to* leave with the rider as soon as it is able, but it *may* linger waiting for more people to arrive - the choice is yours. 

Example:

	C1 12 .1 1

This translates to Car 1, capacity of 12 people, moves at .1 floors per second (ten seconds to traverse a floor up or down), and starting at floor 1.

Then you'll get another integer on a line, *M*. The next *M* lines will show riders, with fields: Rider identification, elevator request time in seconds, source floor and destination floor. Rider identification numbers will be *stable*, meaning the rider will have the same identifier the entire exercise. Examples:

	R1 0 1 4

This translates to Rider 1 who at time point 0 wants to go from floor 1 to floor 4. Riders will not transit floors without an elevator.

# Output Description

The main thing to show in the output is the time point at which all requests have been satisfied. (Yes, this is trying to get you guys to compete for the most efficient algorithm). Optionally show all intermediate steps and journeys, and wait times for riders. 

# Challenge Input

This was randomly generated, and so it has a few "oddities" in it, like riders who get on and off on the same floor, and riders who change their destination in the next second (e.g. in the middle of a ride). You still have to satisfy *every* request. 

	2
	C1 12 .1 1
	C2 12 .2 1
	359
    R3 0 1 9
    R4 1 1 11
    R0 11 1 7
    R2 11 1 9
    R15 13 1 9
    R5 26 1 4
    R16 27 1 2
    R1 28 1 2
    R13 28 1 9
    R10 32 1 3
    R14 35 1 4
    R8 36 1 10
    R17 38 1 12
    R3 49 9 9
    R18 50 1 10
    R7 51 1 3
    R10 53 3 10
    R12 54 1 6
    R0 60 7 1
    R1 62 2 1
    R9 66 1 8
    R19 66 1 6
    R15 71 9 2
    R11 72 1 8
    R16 78 2 4
    R6 82 1 12
    R8 85 10 11
    R10 89 10 12
    R3 90 9 6
    R5 94 4 7
    R2 94 9 10
    R6 95 12 1
    R3 111 6 9
    R14 114 4 5
    R13 115 9 5
    R19 117 6 2
    R12 122 6 12
    R4 123 11 7
    R9 123 8 12
    R6 124 1 5
    R0 124 1 6
    R7 127 3 3
    R11 139 8 9
    R7 141 3 4
    R17 143 12 2
    R14 143 5 5
    R16 151 4 9
    R5 155 7 12
    R1 155 1 11
    R18 159 10 10
    R15 160 2 4
    R19 162 2 3
    R2 164 10 3
    R11 164 9 9
    R3 165 9 4
    R12 167 12 1
    R10 169 12 1
    R0 174 6 9
    R11 181 9 2
    R18 182 10 12
    R9 184 12 4
    R5 185 12 11
    R4 197 7 5
    R2 198 3 3
    R3 198 4 8
    R6 199 5 5
    R8 199 11 6
    R13 201 5 5
    R14 203 5 4
    R1 205 11 12
    R16 211 9 1
    R6 212 5 11
    R7 214 4 8
    R15 216 4 6
    R19 226 3 11
    R1 230 12 12
    R7 232 8 5
    R0 234 9 12
    R3 237 8 2
    R17 238 2 6
    R2 240 3 11
    R12 240 1 3
    R15 246 6 6
    R13 247 5 10
    R5 248 11 5
    R10 249 1 6
    R18 252 12 4
    R9 253 4 8
    R1 256 12 12
    R4 257 5 12
    R16 258 1 2
    R13 258 10 5
    R6 262 11 2
    R11 263 2 7
    R9 269 8 5
    R3 271 2 6
    R14 274 4 9
    R5 282 5 12
    R11 285 7 6
    R16 287 2 8
    R14 290 9 5
    R2 297 11 4
    R18 299 4 6
    R13 300 5 5
    R8 301 6 5
    R0 303 12 3
    R19 305 11 1
    R7 310 5 8
    R2 311 4 4
    R1 315 12 8
    R16 318 8 11
    R8 320 5 8
    R1 324 8 2
    R10 325 6 9
    R17 325 6 2
    R2 330 4 11
    R19 330 1 9
    R9 332 5 5
    R5 335 12 11
    R18 338 6 9
    R11 340 6 8
    R12 342 3 9
    R9 344 5 11
    R12 346 9 12
    R13 346 5 12
    R6 351 2 2
    R0 354 3 10
    R10 358 9 9
    R4 369 12 12
    R15 370 6 8
    R3 372 6 5
    R17 374 2 9
    R14 383 5 4
    R7 389 8 1
    R18 396 9 6
    R12 396 12 7
    R8 411 8 1
    R16 419 11 3
    R2 420 11 1
    R10 420 9 11
    R6 423 2 12
    R1 423 2 8
    R7 425 1 1
    R11 426 8 4
    R13 429 12 11
    R19 430 9 7
    R5 432 11 9
    R15 435 8 3
    R0 438 10 6
    R6 444 12 9
    R17 449 9 9
    R14 452 4 4
    R9 456 11 2
    R18 460 6 7
    R5 463 9 2
    R12 464 7 2
    R4 468 12 5
    R13 468 11 6
    R2 475 1 4
    R19 478 7 4
    R12 491 2 10
    R10 496 11 7
    R0 501 6 3
    R2 501 4 2
    R7 502 1 3
    R3 502 5 7
    R14 505 4 11
    R6 507 9 2
    R1 508 8 12
    R15 510 3 1
    R16 512 3 12
    R11 515 4 10
    R18 515 7 2
    R19 517 4 3
    R15 519 1 5
    R9 521 2 2
    R2 524 2 5
    R14 525 11 2
    R18 526 2 11
    R4 530 5 5
    R6 531 2 5
    R8 536 1 5
    R12 536 10 3
    R16 536 12 7
    R15 538 5 7
    R17 538 9 5
    R13 544 6 7
    R10 546 7 11
    R11 547 10 5
    R7 548 3 1
    R4 554 5 1
    R3 558 7 11
    R10 568 11 7
    R6 570 5 5
    R12 572 3 7
    R7 573 1 4
    R19 574 3 6
    R16 576 7 3
    R0 577 3 8
    R4 586 1 9
    R11 587 5 9
    R14 587 2 4
    R2 590 5 5
    R5 599 2 2
    R10 599 7 7
    R9 601 2 4
    R1 603 12 6
    R3 606 11 1
    R18 606 11 9
    R13 610 7 11
    R10 614 7 4
    R17 615 5 4
    R16 616 3 3
    R12 617 7 10
    R7 621 4 2
    R6 622 5 4
    R19 626 6 12
    R2 628 5 11
    R15 629 7 7
    R14 630 4 4
    R11 632 9 6
    R8 632 5 3
    R0 639 8 6
    R6 649 4 10
    R10 651 4 11
    R9 653 4 6
    R14 653 4 12
    R4 655 9 10
    R0 656 6 4
    R2 660 11 5
    R13 660 11 6
    R3 663 1 6
    R18 664 9 5
    R1 667 6 7
    R5 668 2 11
    R12 668 10 9
    R16 672 3 9
    R15 675 7 4
    R17 680 4 3
    R7 681 2 10
    R9 681 6 9
    R10 686 11 10
    R14 689 12 9
    R4 690 10 3
    R1 698 7 9
    R18 698 5 8
    R0 699 4 12
    R19 705 12 7
    R2 708 5 1
    R8 712 3 8
    R13 718 6 2
    R0 721 12 7
    R14 721 9 5
    R18 722 8 7
    R15 723 4 8
    R14 730 5 11
    R4 733 3 12
    R13 738 2 4
    R6 741 10 1
    R10 741 10 1
    R15 741 8 9
    R19 743 7 2
    R13 751 4 7
    R3 752 6 1
    R14 755 11 9
    R4 758 12 2
    R11 759 6 9
    R5 762 11 9
    R15 765 9 2
    R19 770 2 6
    R9 775 9 9
    R12 777 9 12
    R17 778 3 7
    R0 780 7 3
    R0 781 3 11
    R18 785 7 1
    R8 787 8 11
    R6 788 1 11
    R7 790 10 4
    R19 791 6 7
    R13 791 7 6
    R2 792 1 1
    R9 794 9 5
    R10 800 1 10
    R15 804 2 5
    R12 807 12 1
    R11 808 9 4
    R5 809 9 5
    R14 813 9 2
    R1 819 9 11
    R19 819 7 5
    R16 822 9 4
    R0 823 11 8
    R17 828 7 2
    R11 834 4 4
    R8 834 11 11
    R3 837 1 6
    R5 839 5 4
    R4 842 2 4
    R2 844 1 11
    R18 851 1 1
    R15 854 5 8
    R0 855 8 5
    R6 857 11 11
    R12 857 1 3
    R9 858 5 11
    R8 859 11 3
    R10 863 10 5
    R7 867 4 6
    R5 869 4 6
    R0 878 5 8
    R6 879 11 12
    R7 882 6 12
    R17 883 2 10
    R13 883 6 5
    R8 885 3 11
    R13 887 5 7
    R15 888 8 6
    R3 891 6 6
    R6 898 12 10
    R17 898 10 3
    R3 899 6 5
    R5 900 6 11
    R18 901 1 9
    R15 906 6 10
    R19 907 5 12
    R13 908 7 9
    R11 914 4 5
    R16 917 4 5
    R8 924 11 11
    R14 924 2 2
    R0 926 8 9
    R9 926 11 2
    R2 935 11 7
    R1 937 11 5
    R10 940 5 8
    R18 946 9 11
    R19 946 12 4
    R3 947 5 8
    R8 947 11 4
    R13 947 9 4
    R12 948 3 4
    R4 950 4 2
    R9 951 2 9
    R0 963 9 11
    R17 973 3 3
    R16 975 5 12
    R18 977 11 12
    R9 980 9 6
    R13 980 4 9
    R5 983 11 1
    R3 983 8 11
    R7 985 12 7
    R14 985 2 8
    R10 991 8 12
    R19 991 4 6
    R17 992 3 5
    R0 993 11 6
    R1 997 5 3
# Bonus

Which improves delivery efficiency most?

* Longer linger times?
* More cars?
* Faster cars?