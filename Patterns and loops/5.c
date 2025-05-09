//to print triangle of alphabets.type 2.
#include <stdio.h>

int main()
{
    int n, m;
    printf("enter the number of rows");
    scanf("%d", &n);
    // printf("enter the number of columns");
    // scanf("%d", &m);
    for(int i =1; i<=n;i++){//outer loop gives no. of rows .
        int a = 65;
        for(int j=i;j<=n;j++){//inner loop gives no. of columns.
            printf("%c",a);
            a++;
        }printf("\n");
    }

    return 0;
}
