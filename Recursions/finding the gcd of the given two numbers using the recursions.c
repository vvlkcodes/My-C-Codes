//finding the gcd of the given two numbers using the recursions.
#include <stdio.h>

int gcd(int max,int min){
    int r = max%min;
    if(max%min == 0) return min;
    else return gcd(min, r);
}

int main(){
    int n, m;
    printf("enter two numbers to calculate the gcd:");
    scanf("%d%d", &n,&m);
    int max = (n>m)?n:m;
    int min = (n<m)?n:m;
    printf("the gcd of the given two numbers is %d", gcd(max,min));

    return 0;
}
