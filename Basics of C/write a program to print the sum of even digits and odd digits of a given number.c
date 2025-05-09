//write a program to print the sum of even digits and odd digits of a given number.

#include <stdio.h>

int main()
{
 int n;
 scanf("%d", &n);
 int EvenSum = 0;
 int oddSum = 0;
 int last=0;
 
while(n!=0){
    last=n%10;
    if(last%2==0){
        EvenSum=EvenSum+last;
    }else if(last%2!=0){
        oddSum=oddSum+last;
    }
    n=n/10;
}
printf("some of even numbers is %d", EvenSum);
printf("\nsome of odd numbers is %d", oddSum);

    return 0;
}
