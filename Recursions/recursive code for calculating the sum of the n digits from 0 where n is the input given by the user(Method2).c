//recursive code for calculating the sum of the n digits from 0 where n is the input given by the user.
//method 2
#include <stdio.h>

int  sum(int n){
    if(n==1){
     return 1;
    }
    int result =  n+sum(n-1);
    return result;
    
}

int main()
{
    int n, s;
    printf("enter the number: ");
    scanf("%d", &n);
    sum(n);
    printf("%d", sum(n));
    

    return 0;
}
