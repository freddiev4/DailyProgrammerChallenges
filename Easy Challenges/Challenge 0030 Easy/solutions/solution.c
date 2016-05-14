/*
 * Author	Subhra S. Sarkar
 * GitHub	https://github.com/rurtle
 *
 * Description	Program to check if there exists a pair in a list of integers such
 * 		that sum of pair equals that of a target number.
 *
 * Note		Sorting based solution. Complexity: O(nlog n) + O(n) ~= O(nlog n).
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

#define LEN 13

/*
 * @brief	Prints the current state of the array
 */
void print_arr(int arr[], int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

/*
 * @brief	Swaps the contents of two memory locations
 */
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

/*
 * @brief	Finds the pivot element
 */
int find_pivot(int arr[], int l, int r)
{
	int pivot = arr[l];
	int i, j;
	for (i = l + 1, j = l + 1; j <= r; j++)
	{
		if (arr[j] < pivot)
			swap((arr + j), (arr + i++));
	}
	swap((arr + i - 1), (arr + l));
	return (i - 1);
}

/*
 * @brief	Recursive logic for performing quicksort on the array
 */
void quicksort(int arr[], int l, int r)
{
	int pivot;
	if (l < r)
	{
		pivot = find_pivot(arr, l, r);
		quicksort(arr, l, pivot - 1);
		quicksort(arr, pivot + 1, r);
	}
}

/*
 * @brief	Checks if there exists a pair whose sum equals that
 * 		of the number entered
 */
bool find_target_sum(int arr[], int len, int target)
{
	bool found = false;
	int begin = 0;
	int end = len - 1;
	while (begin <= end)
	{
		if (target == arr[begin] + arr[end])
		{
			printf("Found: %d + %d = %d\n", arr[begin], arr[end], target);
			return true;
		}
		else if (target < arr[begin] + arr[end])
			end--;
		else
			begin++;
	}
	return found;
}

/*
 * Driver function
 */
int main(int argc, char *argv[])
{
	int *arr;		/* Pointer to the array 		*/
	int i;			/* Loop index 				*/
	int num;		/* The target number to be checked 	*/

	/* Allocating memory for the array */
	arr = calloc(LEN, sizeof(int));
	assert(arr != NULL);

	/* Populate the array */
	for (i = 0; i < LEN; i++)
		*(arr + i) = rand() % 1234;

	/* Print the state of the array */
	print_arr(arr, LEN);

	/* Perform quicksort on the array */
	quicksort(arr, 0, LEN - 1);

	/* Print the state of the array */
	print_arr(arr, LEN);

	/* Enter the target number */
	printf("Enter the number: ");
	scanf("%d", &num);

	/* Finally, check if such a pair exists */
	if (!find_target_sum(arr, LEN, num))
		printf("Could NOT find such a pair\n");

	return 0;
}
