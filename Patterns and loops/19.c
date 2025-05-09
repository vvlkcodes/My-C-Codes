//to print the no. pyramid.

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        int a=1;
        for(int j=1;j<=2*i-1;j++){
            printf("%d",a);
            a+=1;
            }
        printf("\n");
    }

    return 0;
}
