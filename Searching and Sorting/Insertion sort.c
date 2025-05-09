//write a program for reverse order of an array using pointer.
#include <stdio.h>
void reverse(int n, int *arr){
    printf("the reverse order of elements is: ");
    for(int i=n-1;i>=0;i--)
    printf("%d ", *(arr+i));
}
int main(){
    int n;
    printf("enter the numner of elements:");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements of the array:");
    for(int i =0;i<n;i++) 
    scanf("%d", &arr[i]);
    reverse(n, arr);
    
    return 0;
}
