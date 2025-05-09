//to print the factorials of all numbers from one to n.
#include <stdio.h>
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact =fact*i;
    }
    return fact;
}

int main(){
    int n;
    printf("enter the number n: ");
    scanf("%d", &n);
    printf("the facorials of 1 to %d are: \n", n);
    for(int i=1;i<=n;i++){
        printf("%d\n",factorial(i));
        
    }
    
    return 0;
}
