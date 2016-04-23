/*
 * Author	Subhra S. Sarkar
 * GitHub	https://github.com/rurtle
 * Description	Prints permutations of a given string
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * @brief	Swaps contents of two different memory locations which,
 * 		in this case, are characters
 */
void swap(char *a, char *b)
{
	char tmp = *a;
	*a = *b;
	*b = tmp;
}

/*
 * @brief	Actual logic to print permutations of a given string using
 * 		recursion & backtracking
 */
void print_permutations(char str[], int b, int e)
{
	int i;
	if (b == e)
		printf("%s\n", str);
	else
	{
		for (i = b; i <= e; i++)
		{
			swap((str + b), (str + i));
			print_permutations(str, b + 1, e);
			swap((str + b), (str + i));
		}
	}
}

/*
 * Driver function
 */
int main(int argc, char *argv[])
{
	char str[] = "random";
	int len = strlen(str);
	print_permutations(str, 0, len - 1);
	return 0;
}
