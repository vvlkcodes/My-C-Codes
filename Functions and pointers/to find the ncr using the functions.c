//to find the ncr using the functions.
#include <stdio.h>
#include <math.h>

int factorial(int x){
    int fact =1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n, r;
    scanf("%d %d", &n, &r);
    
    int nfact = factorial(n);
    int rfact = factorial(r);
    int nrfact = factorial(n-r);
    printf("%d", nfact/(rfact*nrfact));
    return 0;
}
