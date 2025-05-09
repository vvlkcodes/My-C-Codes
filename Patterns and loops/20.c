
//to print a triangle pattern.type
// *****
//  ****
//   ***
//    **
//     *

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int nsp =0;
    int nst = n;
    for(int i =0;i<n;i++){
        for(int j=0;j<nsp;j++){//no. of spaces
            printf(" ");
        }
        for(int k=0;k<nst;k++){//no. of stars
            printf("*");
        }printf("\n");
        if(i<=n){
            nsp++;
            nst--;
        }else{
            nsp--;
            nst++;
        }
    }

    return 0;
}
