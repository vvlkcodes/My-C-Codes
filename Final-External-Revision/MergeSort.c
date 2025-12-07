// Merge sort

#include <stdio.h>

void merge(int arr[], int lb, int m, int ub){
    int i = lb;
    int j = m+1;
    int k = 0;
    int temp[100];
    while(i<=m && j<=ub){
        if(arr[i] < arr[j]) temp[k++] = arr[i++];
        else temp[k++] = arr[j++];
    }
    while(i<=m){
        temp[k++] = arr[i++];
    }
    while(j<=ub){
        temp[k++] = arr[j++];
    }
    k = 0;
    for(int x = lb;x<=ub;x++){
        arr[x] = temp[k++];
    }
    
}

void mergesort(int arr[], int l, int h){
    if(l<h){
        int mid = (l+h)/2;
        mergesort(arr, l, mid);
        mergesort(arr, mid+1, h);
        merge(arr, l, mid, h);
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main(){
    int arr[] = {4, 10, 3, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    mergesort(arr, 0, n-1);

    printf("Sorted array (Merge Sort): ");
    printArray(arr, n);

    return 0;
}
