/*
 * Author: Austin W. Smith
 * Reddit: AssailantLF
 * Github/lab: AssailantLF
 * Contact: <AssailantLF@gmail.com>
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAXLEN 256          /* buffer size for input */

void read_number(char *message, int *dest)
{
    char input[MAXLEN];
    int result;
    do {
        printf("%s", message);
        fgets(input, MAXLEN, stdin);
        result = sscanf(input, "%d", dest);
        if (result < 1)
            printf("Invalid number!\n");
    } while (result != 1);
}

void generate_password(int len)
{
    char c;
    int i;
    for (i = 0; i < len; ++i)
    {
        do {
            c = rand() % 127;
        } while (!isprint(c));
        putchar(c);
    }
    putchar('\n');
}

int main(void)
{
    int num_of_passwords;
    int password_length;
    int i;

    read_number("Number of passwords to generate? ", &num_of_passwords);
    read_number("Length of each password? ", &password_length);

    srand(time(0));

    for (i = 0; i < num_of_passwords; ++i)
        generate_password(password_length);

    return 0;
}
