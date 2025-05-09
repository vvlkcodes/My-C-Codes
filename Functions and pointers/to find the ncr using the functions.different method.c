//to find the ncr using the functions.different method
#include <stdio.h>
#include <math.h>

int factorial(int x){
    int fact =1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int combination(int n, int r){
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main(){
    int n, r;
    scanf("%d %d", &n, &r);
    printf("%d", combination(n,r));
    return 0;
}
