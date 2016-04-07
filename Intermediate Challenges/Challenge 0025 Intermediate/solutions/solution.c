// Author: jackzheng2496

#include <stdio.h> 
#define BUFFER_SIZE 17		// Maximum size of binary representation will be 16 bits

/*
	Convert characters into int equivalent
*/
int atoi(char *arg) {
	int i, n; 
	n = 0; 

	for (i = 0; arg[i] != '\0'; ++i) {
		n = n * 10 + (arg[i] - '0');
	}

	return n;
}

/*
	Convert int to hexadecimal (backwards)
*/
char *binary(int arg) {
	char bin[BUFFER_SIZE];
	char *ptr = bin;
	int i = 0;

	if (!arg) {
		*ptr = '0';
		++i;
	}

	while (arg >= 1) {
		*(ptr + i++) = (arg % 2) ? '1' : '0';

		arg /= 2;
	}

	*(ptr + i) = '\0'; 

	return ptr;
}

/*
	Prints out the hexadecimal string backwards 
*/
void print(char *arg, int size) {
	int i; 

	for (i = size; i >= 0; --i) {
		printf("%c", arg[i]);
	}

	printf("\n");
}

int main(int argc, char *argv[]) {
	char *result = binary(atoi(argv[1])); 

	int i = 0; 
	for (i = 0; result[i] != '\0'; ++i);

	print(result, i);

	return 0;
}
