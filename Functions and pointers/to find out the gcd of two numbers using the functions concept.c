//to find out the gcd of two numbers using the functions concept.
//using pointers is not required in this code since the gcd funcion returns some value.(pass by value).
//if the funcitons doesnt return any value, then we use the pointers concept(pass by referance).
#include <stdio.h>

int gcd(int max, int min){
    int r;
    while(min!=0){
     r = max% min;
    max=min;
    min=r;
    
    }
    return max;
}

int main()
{
    int n , m, max, min;
    scanf("%d%d", &n, &m);
    max = (n>m)?n:m;
    min = (n>m)?m:n;

    int result = gcd(max,min);
    printf("%d", result);
    
    return 0;
}
