//write a program for bubble sort
#include <stdio.h>
void bubble(int arr[], int n) {
	for(int i=0; i<n-1; i++) {
		for(int j=0; j<n-i; j++) {
			if(arr[j]>arr[j+1]) {
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}
int main()
{
	int arr[] = {11, 46, 99, 88, 33};
	int n = sizeof(arr)/sizeof(arr[0]);
	bubble(arr, n);
	printf("the sorted array or list of numbers is:\n");
	for(int i=0; i<n; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}
