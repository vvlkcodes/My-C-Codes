//to print the no. pyramid.of palindrome no.s

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a = 1;
    for(int i=1;i<=n;i++){
        for(int h=1; h<=n-i;h++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d", j);
        }
        for(int k=1;k<=i-1;k++){
            printf("%d", k);
        }
        printf("\n");
    }

    return 0;
}
