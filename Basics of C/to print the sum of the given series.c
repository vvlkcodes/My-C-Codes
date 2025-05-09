//to print the sum of the given series. 
//1-2+3-4+5-6.....upto n terms.
#include <stdio.h>

int main() {
    int n;
    int i=0;
    int sum =0;
    scanf("%d", &n);
    while(i<n){
        sum=sum+i-(i+1);
        i++;
    }
    printf("\n\n%d", sum/2);
   

    return 0;
}
