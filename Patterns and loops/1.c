//to print triangle of numbers.type 1.
#include <stdio.h>

int main()
{
    int n, m;
    printf("enter the number of rows");
    scanf("%d", &n);
    printf("enter the number of columns");
    scanf("%d", &m);
    for(int i =1; i<=n;i++){//outer loop gives no. of rows .
        for(int j=i;j<=m;j++){//inner loop gives no. of columns.
            printf("%d",j);
        }printf("\n");
    }

    return 0;
}
