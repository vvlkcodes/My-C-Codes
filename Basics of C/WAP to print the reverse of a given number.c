//WAP to print the reverse of a given number.
//using while loop.
#include <stdio.h>
int main(){
    int n;
    int lastdigit;
    int reverse=0;
    scanf("%d", &n);
    int x=0;
    while(n!=0){
        lastdigit=n%10;
       reverse=reverse+lastdigit;
       reverse= reverse*10;
       n=n/10;
        
    }
    reverse = reverse/10;
    printf("%d", reverse);
    
    return 0;
}
