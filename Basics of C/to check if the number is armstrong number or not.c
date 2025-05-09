//to check if the number is armstrong number or not?

#include <stdio.h>

int main()
{
    int n, rem, sum=0, temp;
    printf("enter the number: ");
    scanf("%d", &n);
    temp = n;
    while(n>0){
        rem = n%10;
        sum = sum+(rem*rem*rem);
        n/=10;
    }
    if(temp==sum) printf("the given number is armstrong");
    else printf("the given number is not armstrong");
    return 0;
}
