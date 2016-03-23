/*
 * Author: Austin W. Smith
 * Reddit: AssailantLF
 * Gitlab: AssailantLF
 * Email: <AssailantLF@gmail.com>
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <errno.h>

void error_msg(void)
{
    printf("\nUsage: Enter positive integers as arguments.\n\n");
    exit(EXIT_FAILURE);
}

int main(int argc, char* argv[])
{
    if (argc == 1) error_msg();

    int i, j, num_of_nums = 0;
    unsigned long input_n, nums[argc];
    char* end;
    bool repeated;

    for (i = 1; i < argc; i++)
    {
        if (argv[i][0] == '-') error_msg();
        input_n = strtoul(argv[i], &end, 10);
        if (end == argv[i]) error_msg();

        repeated = false;
        for (j = 0; j < num_of_nums; j++)
        {
            if (input_n == nums[j])
            {
                repeated = true;
                break;
            }
        }
        if (repeated == false)
            nums[num_of_nums++] = input_n;
    }

    printf("\n");
    for (i = 0; i < num_of_nums; i++)
        printf("%lu ", nums[i]);
    printf("\n\n");
    exit(EXIT_SUCCESS);
}
