//write a program for linear search operation.

#include <stdio.h>
int linear(int arr[], int n, int key){
    for(int i=0; i<n-1;i++){
        if(arr[i]==key) return i;
    
    }return -1;
}

int main()
{
    int arr[] = {11,46,99,88,33};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 99;
    int result = linear(arr, n, key);
    if(result != -1) printf("the position of the key element in the given list is %d", result+1);
    else printf("key element not found\nplease enter a valid key element.");
    

    return 0;
}
