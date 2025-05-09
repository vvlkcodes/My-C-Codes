//write a program for binary search.

#include <stdio.h>
int binary(int arr[], int n, int key){
    int low = 0, high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == key) return mid;
        if(arr[mid]>key) high = mid-1;
        else low = mid+1;
    }
    return -1;
}

int main(){
    int arr[] = {10,24,45,63,99};
    int key = 63;
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = binary(arr,n,key);
    if(result != -1) printf("the position of the key element is %d", result+1);
    else printf("element not found, please enter a valid key element!");
    return 0;
}
