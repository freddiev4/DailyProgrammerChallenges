/***************************
 * Name: Tyler Nivin
 *
 * Description: A non-bonus solution that just prints it out to stdout. Might be good for a variety of examples.
 * Additionally, avoids structs. This is meant to be a very basic solution.
 *
 * Last Modified: Sat Mar 19, 2016  04:33PM
 **************************/
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
    
    char name[50] = {0}; //will init the whole array with 0.
    unsigned int age;
    char username[50] = {0}; //will init the whole array with 0.

    printf("Tell me your name: ");
    scanf("%s", name);
    
    printf("Tell me your age: ");
    scanf("%u", &age);

    printf("Finally, what's your username: ");
    scanf("%s", username);

    printf("\nHere's what I learned about you!\n"
	    "Name: %s\n"
	    "Age: %u\n"
	    "Username: %s\n",
	    name, age, username);

    return 0;
}

