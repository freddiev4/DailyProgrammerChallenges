/*
 *      Solution by: Ahmed Dhanani 
 *
 *      github: ahmeddhanani
 *
 *      SO: http://stackoverflow.com/users/5538805/mrpycharm
 *
 *
 */
 
#include<iostream>
using namespace std;


// Checking for the order of array.
// If the array is sorted, returns true. Returns false otherwise

bool InOrder(int * arr, int end) {
    int index = 0;
    
    while (index + 1 <= end){
        if (!(arr[index] <= arr[index + 1]))
            return false;
            
        index++;
    } 
    
    return true;
}

      
// Randomly shuffling the array.
// This might take more or less time on different machines, depending on the specs.
     
void Shuffle(int arr[], int start, int end) {
    int deckSize = end;
    int random;
    
    while (deckSize > 0){
        random = rand() % end;
        int temp = arr[deckSize];
        arr[deckSize] = arr[random];
        arr[random] = temp;
        
        deckSize--;
    }

}

    /*  
     *  Implementation of the Stooge sort algorithm.
     *  Algorithm taken from Wikipedia link: https://en.wikipedia.org/wiki/Stooge_sort
     *
     */ 

void StoogeSort (int arr[], int start, int end) {
 
    if ( arr[start] > arr[end] ) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }
    
    if ( (end - start) +  1 > 2 ) {
        
        int breakPoint = ((end - start) + 1) / 3;
        StoogeSort(arr, start, end - breakPoint);
        StoogeSort(arr, start + breakPoint, end);
        StoogeSort(arr, start, end - breakPoint);
    }
    
}

    /*  
     *  Implementation of the Bogo sort algorithm.
     *  Algorithm taken from Wikipedia link: https://en.wikipedia.org/wiki/Bogosort
     *
     */

void BogoSort(int arr[], int start, int end) {
    
    while (!InOrder(arr, end))
        Shuffle(arr, start, end);
    
}

int main (){
    int arr[] = {1, 2, 78, 18, 16, 30, 29, 2, 0, 199};
    StoogeSort(arr, 0, 9);
    
    for (int i = 0; i < 10; i++) {
        /* code */
        cout << arr[i] << " ";
    }
    cout << endl;
    
    int arr2[] = {58, 35, 55, 64, 0, 7, -1};
    BogoSort(arr2, 0, 6);
    
    for (int i = 0; i < 7; i++) {
        /* code */
        cout << arr2[i] << " ";
    }
    cout << endl;
    
    return 0;
}