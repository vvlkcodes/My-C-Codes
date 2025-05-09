//to print a lower triangle with *.

#include <stdio.h>

int main()
{
    int n, m;
    printf("enter the number of rows");
    scanf("%d", &n);
    printf("enter the number of columns");
    scanf("%d", &m);
    for(int i =0; i<n;i++){//outer loop gives no. of rows .
        for(int j=0;j<i;j++){//inner loop gives no. of columns.
            printf("*",j);
        }printf("\n");
    }

    return 0;
}
