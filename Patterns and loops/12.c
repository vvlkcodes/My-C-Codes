// to print a pattern.
/* 
        &
        &
      &&&&&
        &
        &
*/

#include <stdio.h>


int main()
{
    int n;
    int m;
    scanf("%d %d", &n, &m);//for no. of rows & no. of columns.
    //input only the number 5 to get the exact pattern.
    for(int i =1; i<=n;i++){
        for(int j=1;j<=m;j++){
            if(j==3){
                printf("&");
            }
            if(i==3){
                printf("&");
            }
            else{
                printf(" ");
            }
        }printf("\n");
    }
    return 0;
}
