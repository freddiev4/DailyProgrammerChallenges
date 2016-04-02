#include <stdio.h>

static int top = 1000;

int print_numbers(void);

int main(int argc, char **argv){
    print_numbers();

    return 0;
}

int print_numbers(void){
    static int i = 0;
    i++;
    printf("%d\n", i);
    return (i - top) && print_numbers();
}
