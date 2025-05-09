//to print the pattern of numbers.
// 1234567
// 123 567 
// 12   67 
// 1     7
//put n=3;
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int nsp =1;
    int nst = n;//left
    for(int i =1;i<=n*2+1;i++){
        printf("%d", i);
    }printf("\n");
    
    for(int i =1;i<=n;i++){
        int a=1;
        for(int j=1;j<=nst ;j++){//left triangle
            printf("%d", a);
            a++;
        }
        for(int k=1;k<=nsp ;k++){//spaces
            printf(" ");
            a++;
        }
        for(int j=1;j<=nst ;j++){//left triangle
            printf("%d", a);
            a++;
        }
       printf("\n");
        nst--;
        nsp+=2;
        
    }

    return 0;
}
