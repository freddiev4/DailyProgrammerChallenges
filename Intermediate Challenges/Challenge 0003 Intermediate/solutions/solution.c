/*
 * Author: Subhra S. Sarkar
 * GitHub: https://github.com/rurtle
 *
 *
 * Note: This implementation will need slight modification to make it to work
 * 		 for ASCII symbols within ranges 58-64, 91-96 & 122-126. Also, a better
 * 		 implementation would be - reading inputs from a plaintext file and
 * 		 printing/writing the output.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Cryptographic key */
#define KEY	07

/*
 * Driver function
 */

int main(int argc, char *argv[])
{
	int i = 0;                                      /* Loop index */
	int len = 0;                                    /* String length */
	char str[] = "Program written on 03-19-2016";   /* Input string */

	/* Printing the initial state of the string */
	printf("Initial string\t: %s\n", str);

	len = strlen(str);
	for (; i < len; i++) {
		/* Encrypting numbers */
		if (str[i] >= 48 && str[i] <= 57)
			str[i] = 48 + (str[i] - 48 + KEY) % 10;
		/* Encrypting lower case characters */
		else if (str[i] >= 97 && str[i] <= 122)
			str[i] = 97 + (str[i] - 97 + KEY) % 26;
		/* Encrypting upper case characters */
		else if (str[i] >= 65 && str[i] <= 90)
			str[i] = 65 + (str[i] - 65 + KEY) % 26;
		/* Encrypting symbols */
		else if (str[i] >= 32 && str[i] <= 47)
			str[i] = 32 + (str[i] - 32 + KEY) % 16;
		/* All other cases */
		else
			str[i] = '~';
	}

	/* Printing the encrypted string */
	printf("Final string\t: %s\n", str);

	return 0;
}
