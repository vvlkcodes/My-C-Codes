//to reverse a given number

#include <stdio.h>

int main()
{
   int n, rev = 0, lastdigit;
   printf("enter the digit: ");
   scanf("%d", &n);
   
   while(n!=0){
       lastdigit = n%10;
       rev = rev*10+lastdigit;
       n/=10;
   }
   printf("%d", rev);
   

    return 0;
}
