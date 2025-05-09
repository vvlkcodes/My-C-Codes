//to check if a number is palindrome or not?

#include <stdio.h>

int main()
{
   int n, rev = 0, lastdigit;
   printf("enter the digit: ");
   scanf("%d", &n);
   int temp = n;
   while(n!=0){
       lastdigit = n%10;
       rev = rev*10+lastdigit;
       n/=10;
   }
   printf("%d", rev);
   if(temp==rev) printf("\nthe number is a palindrome");
   else printf("\nthe number is not a palindrome");

    return 0;
}
