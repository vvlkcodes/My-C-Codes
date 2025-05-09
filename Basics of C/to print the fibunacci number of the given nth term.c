//to print the fibunacci number of the given nth term.
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int first = 0, second = 1;
    int next;
    if(n==0){
        printf("%d", first);   //the program needs to be modified further.
    }else if(n==1){
        printf("%d", second);
    }
    for(int i = 3; i<=n; i++){
        next = first + second;
       first = second;
       second = next;
    //   printf("\n%d", next);
    }
    printf("\n%d", next);

    return 0;
}
