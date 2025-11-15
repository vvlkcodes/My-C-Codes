// Insertion sort
#include <stdio.h>

void insertionSort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int key = arr[i];      // element to be placed at correct position
        int j = i - 1;

        // shift larger elements to the right
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;      // place key in the correct position
    }
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {5, 2, 4, 6, 1, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    printf("Unsorted Array: ");
    printArray(arr, n);

    insertionSort(arr, n);

    printf("Sorted Array:   ");
    printArray(arr, n);

    return 0;
}
