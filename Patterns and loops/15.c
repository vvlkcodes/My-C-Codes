//to print the pattern.
/*
        A 
       AB 
      ABC 
     ABCD
    ABCDE
    
*/

#include <stdio.h>

int main()
{
int n ;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        int A=65;
        for(int k=1;k<=i;k++){
            printf("%c",A);
            A++;
        }
        printf("\n");
    }
    return 0;
}
