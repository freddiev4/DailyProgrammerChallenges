/*
	Author: Jack Zheng
	Github: jackzheng2496
*/

#include <stdio.h>
#include <stdlib.h>

#define ARR_LENGTH 5

void reverse(int n, int array[]) {
	int i; 

	for (i = 0, n -= 1; i < n; ++i, --n) {
		int temp = array[i]; 
		array[i] = array[n]; 
		array[n] = temp;
	}
}

int main(int argc, char *argv[]) {
	int array[ARR_LENGTH] = {51, 41, 12, 62, 74}; 

	reverse(3, array);

	for (int i = 0; i < ARR_LENGTH; i++) {
		printf("%d ", array[i]);
	}

	printf("\n");

	return EXIT_SUCCESS; 
}
