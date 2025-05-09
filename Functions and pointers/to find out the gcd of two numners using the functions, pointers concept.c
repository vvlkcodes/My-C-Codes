//to find out the gcd of two numners using the functions, pointers concept.
#include <stdio.h>

int gcd(int *max, int *min){
    int r;
    while(*min!=0){
     r = *max% *min;
    *max=*min;
    *min=r;
    
    }
    return *max;
}

int main()
{
    int n , m, max, min;
    scanf("%d%d", &n, &m);
    max = (n>m)?n:m;
    min = (n>m)?m:n;

    int result = gcd(&max,&min);
    printf("%d", result);
    
    return 0;
}
