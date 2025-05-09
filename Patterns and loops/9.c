// to print a pattern.of lower triangle (odd no.s)
/*
1 
35
7911
13151719
*/


#include <stdio.h>


int main()
{
    int n;
    int a = 1;
    scanf("%d", &n);
    for(int i=1; i<=n;i++){
        for(int j=1;j<i;j++){
            printf("%d", a);
            a+=2;
        }printf("\n");
    }
    return 0;
}
