//factorial of a given number using the recursions.
#include <stdio.h>

int factorial(int n){
    if(n==1||n==0) return 1;
    else return (n)*factorial(n-1);//function calling itself
}

int main()
{
    int n;
    scanf("%d", &n);
    int result = factorial(n);
    printf("%d", result);
    return 0;
}
