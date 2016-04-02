/*
	Author: Jack Zheng
	Github: jackzheng2496
*/

#include <stdio.h> 
#include <stdlib.h>

void even_odd(int array[], int size) {
	int i, j, k, m; 

	i = 0;
	k = m = -1; 
	j = size - 1;

	while (i < j) {
		if (array[i] % 2 == 1)
			k = (k != -1) ? k : i; 

		if (array[j] % 2 == 0)
			m = (m != -1) ? m : j; 

		if (k != -1 && m != -1) {
			int temp = array[k]; 
			array[k] = array[m];
			array[m] = temp; 
			k = m = -1; 
		}

		i = (k == -1) ? ++i : i;
		j = (m == -1) ? --j : j;
	}
}

int main(int argc, char *argv[]) {
	int array[] = {2,1,11,12,4,17,6,12,1,14,10,19,2}; 

	even_odd(array, 13);

	for (int i = 0; i < 13; i++) {
		printf("%d ", array[i]);
	}

	printf("\n");

 	return EXIT_SUCCESS;
}
