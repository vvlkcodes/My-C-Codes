//to print the factorial of a given value.
#include <stdio.h>
int main(){
    int n;
    int product = 1;//this gives the value of the factorial.
    printf("enter the number ");
    scanf("%d", &n);
    while(n!=0){
        product = product*n;
        n--;
    }
    printf("the factorial is : %d", product);
    
    return 0;
}
