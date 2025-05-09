//write a program to print the sum of digits of a given number.

#include <stdio.h>

int main()
{
 int n;
 scanf("%d", &n);
 int sum = 0;
 int last=0;
 
while(n!=0){
    last=n%10;
    sum=sum+last;
    n=n/10;
}
printf("%d", sum);
    return 0;
}
