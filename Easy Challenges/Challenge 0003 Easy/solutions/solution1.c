// this solution is broken
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define true 0
#define false 1

char* encrypt(int shift, char* string);
char* decrypt(int shift, char* string);

int main(int argc, char **argv) {
	if (argc != 3) {
		printf("usage: ./caesar <shift> <string>\n");
		return 1;
	}
	int shift = atoi(argv[1]);
	char* string = argv[2];
	printf("encrypted: %s\n", encrypt(shift, string));
	printf("decrypted: %s\n", decrypt(shift, string));
}

char* encrypt(int shift, char* string) {
	int length = strlen(string);
	char* result = malloc(sizeof(char*) * length);
	for (int i = 0; i < strlen(string); i++) {
		if (string[i] <= 'Z' && string[i] >= 'A') {
			// if it is uppercase
			result[i] = (((string[i] - 'A') + shift) % 26) + 'A';
		} else if (string[i] <= 'z' && string[i] >= 'a') {
			// if it is lowercase
			result[i] = (((string[i] - 'a') + shift) % 26) + 'a';
		} else {
			// anything else
			result[i] = string[i];
		}
	}
	return result;
}

char* decrypt(int shift, char* string) {
	return encrypt(26 - (shift % 26), string);
}
