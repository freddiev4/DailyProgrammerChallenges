/*
* @Author:              Tyler Nivin
* @Email:               twn346@mail.missouri.edu
* @Created Date:        Sat Mar 19, 2016 05:18:39 PM
* @Last Modified time:  Sat Mar 19, 2016 05:50:29 PM
*
* @Description: Higher-lower game with computer trying to guess the number.
*   Will use a binary search and handle if the user cheats by changing the number.
*
*/

#include <stdio.h>

int main() {
    printf("Number Guessing Game!\n");
    printf("I'm going to try to guess a number that you have thought of.\n");
    printf("To keep things from getting too hairy, keep the number you think of <= 1000 ok?\n");

    unsigned long high = 1000;
    unsigned long currGuess = 500;
    unsigned long low = 0;

    //Will hold 1,2, or 3 to represent higher, lower, found.
    unsigned short where;
    unsigned short numGuessMade = 0;
    do {

        numGuessMade++;
        printf("My guess number %hu is %lu\n", numGuessMade, currGuess);
        printf("Was I right? 1) higher, 2) lower, 3) yes!\n");
        scanf("%hu", &where);

        if (where == 1) {
            low = currGuess;
            currGuess = (low + high) / 2;
            if (currGuess == low) {
                printf("What you told me is impossible... You cheated!\n");
                return 0;
            }
        }
        else if (where == 2) {
            high = currGuess;
            currGuess = (low + high) / 2;
            if (currGuess == high) {
                printf("What you told me is impossible... You cheated!\n");
                return 0;
            }
        }
    } while(where != 3);

    printf("I guessed your number: %lu in %hu tries!\n", currGuess, numGuessMade);


    return 0;
}
