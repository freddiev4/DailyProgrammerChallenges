/*
 * Author	Subhra S. Sarkar
 * GitHub	https://github.com/rurtle
 *
 * Description	Write a program that given an array A and a number N, generates all
 * 		combinations of items in A of length N.
 *
 * Credit	http://bit.ly/1Tvwv1k
 */

#include <stdio.h>
#include <stdlib.h>

#define LEN	5	/* Length of the array */
#define SSET	3	/* Length of the subset of the array */

/*
 * @brief	Prints the state of an array
 */
void print_array(int tmp[], int len)
{
	int i = 0;
	printf("[ ");
	for (; i < len; i++) {
		if (i == (len - 1))
			printf("%d", tmp[i]);
		else
			printf("%d, ", tmp[i]);
	}
	printf("]\n");
}

/*
 * @brief	Recursive call to print the differnt combinations
 *
 * param	arr[IN]		Input array
 * 		data[IN] 	Temp array to store current combination
 * 		n[IN]		Size of input array
 * 		r[IN]		Size of combination to be printed
 * 		index[IN]	Current index in data[]
 *
 * return 	None
 *
 */
void print_combinations(int arr[], int data[], int start,
			int end, int index, int r)
{
	int i;
	if (index == r)
		print_array(data, r);
	/* Replace index with all possible elements. The condition 	*/
	/* "end - i + 1 >= r - index" makes sure that including one	*/
	/* element at index will make a combination with remaining	*/
	/* elements at remaining positions 				*/
	for (i = start; i <= end && end - i + 1 >= r - index; i++)
	{
		data[index] = arr[i];
		print_combinations(arr, data, i + 1, end, index + 1, r);
	}
}

/*
 * @brief	Helper function to delegate the call to printing routine
 */
void find_combinations(int arr[], int n, int r)
{
	/* Temporary array to store all combinations */
	int data[r];
	/* Print all the combinations in the temp array */
	print_combinations(arr, data, 0, n - 1, 0, r);
}

/*
 * Driver function
 */
int main(int argc, char *argv[])
{
	int arr[LEN];
	int i = 0;
	/* Populate the array */
	for (; i < LEN; i++)
		arr[i] = i + 1;
	find_combinations(arr, LEN, SSET);
	return 0;
}
