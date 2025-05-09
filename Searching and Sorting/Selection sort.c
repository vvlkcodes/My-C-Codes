//write a program for selection short
#include <stdio.h>
int main(){
    int mini;
    int arr[] = {45,26,69,63,25};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i =0;i<n-1;i++){
         mini = i;
        for(int j=i+1;j<n;j++){
            if(arr[mini] > arr[j]){
                mini = j;
            }
            int temp = arr[mini];
            arr[mini] = arr[i];
            arr[i] = temp;
            }
    }
    printf("the sorted array is : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}
