//recursive code for calculating the sum of the n digits from 0 where n is the input given by the user.

#include <stdio.h>

void sum(int n, int s){
    if(n==0){
     printf("\n%d", s);
        return;
    }
    sum(n-1, s+n);
    
}

int main()
{
    int n, s;
    printf("enter the number: ");
    scanf("%d", &n);
    sum(n,0);
    

    return 0;
}
