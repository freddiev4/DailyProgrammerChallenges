/****************************
 * Name: Casper Winsnes
 *
 * Description: Implementation of the quick sort algorithm as described on the 
 * quicksort Wikipedia page using the Lomuto partitioning scheme.
 *
 * Last modified: Sun Mar 20, 2016
 ****************************/
#include <stdio.h>
#include <stdlib.h>


/**
 * Swaps the values of items a and b.
 */
void swap(float *a, float *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

/**
 * Chooses the item at array[high] as a pivot and puts every element in array 
 * that is smaller than the pivot to the left of it.
 *
 * @return the index of the pivot element.
 */
int partition(float *array, int low, int high) {
  float pivot = array[high];
  int i = low;

  for(int j=low; j<high; ++j) {
    if(array[j] <= pivot) {
      swap(&array[i], &array[j]);
      i += 1;
    }
  }

  swap(&array[i], &array[high]);
  return i;
}

/**
 * Sorts an array between indexes low and high (inclusive) using the quick sort algorithm.
 */
void quick_sort(float *array, int low, int high) {
  if(low < high) {
    int p = partition(array, low, high);
    quick_sort(array, low, p-1);
    quick_sort(array, p+1, high);
  }
}

int main() {
  int N;
  scanf(" %d", &N);
  float *array = (float*) malloc(sizeof(float)*N);

  for(int i=0; i<N; ++i) {
    scanf("%f", &array[i]);
  }

  quick_sort(array, 0, N-1);

  for(int i=0; i<N; ++i) {
    printf("%f ", array[i]);
  }
  printf("\n");

  free(array);
  return 0;
}
