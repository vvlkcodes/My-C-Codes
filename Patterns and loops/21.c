
//to print a triangle pattern.type
// *******
// *** ***
// **   **
// *     *

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int nsp =1;
    int nst = n;//left
    for(int i =1;i<=n*2+1;i++){
        printf("*");
    }printf("\n");
    for(int i =1;i<=n;i++){
        for(int j=1;j<=nst ;j++){//left triangle
            printf("*");
        }
        for(int k=1;k<=nsp ;k++){//spaces
            printf(" ");
        }
        for(int j=1;j<=nst ;j++){//left triangle
            printf("*");
        }
       printf("\n");
        nst--;
        nsp+=2;
        
    }

    return 0;
}
