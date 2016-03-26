/* Solution by https://github.com/Ouss4 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

#define MAX_STR_UI 10

static unsigned numberLen(unsigned number)
{
    char str_ui[MAX_STR_UI] = "";
    sprintf(str_ui, "%d", number);

    return strlen(str_ui);
}

static unsigned eval(unsigned long numberSquared, unsigned len)
{

    unsigned div, rem;

    div = numberSquared / pow(10, len);

    rem = numberSquared - (div * pow(10, len));


    return div + rem;
}

static bool isKaprekar(unsigned number, unsigned sum)
{
    return (number == sum);
}

int main(void)
{
    unsigned number;
    unsigned sum;

    printf("Enter a number : ");
    scanf("%u", &number);

    sum = eval(pow(number,2), numberLen(number));

    printf("Kaprekar sum = %d\n", sum);
    printf("%d Number is %s a Kaprekar number\n",number,  isKaprekar(number,sum) ? "" : "not");

    return 0;
}
