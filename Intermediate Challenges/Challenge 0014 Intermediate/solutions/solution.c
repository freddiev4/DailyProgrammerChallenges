#include <stdio.h>

#define MAX_NUMBER 10000

int main(int argc, char **argv){
    int numbers[MAX_NUMBER + 1];

    int i, j;
    for ( i = 1; i <= MAX_NUMBER; i++)
        numbers[i] = 1;

    for ( j = 1; j <= MAX_NUMBER; j++ ) {
        for ( i = 1; i <= j; i++ ) {
            if ( i + j + 2*i*j > MAX_NUMBER )
                break;
            numbers[i + j + 2*i*j] = 0;
        }
    }

    for ( i = 1; i <= MAX_NUMBER; i++ ) {
        if ( numbers[i] )
            printf("%d\n", 2 * i + 1);
    }
    return 0;
}
