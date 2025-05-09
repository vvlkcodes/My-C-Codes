//given 2 numbers a and b , find the power of a to b.
#include <stdio.h>
#include<math.h>
int main(){
    int a, b;
    printf("enter 2 numbers a and b: ");//where a is base and b is the power.
    scanf("%d %d", &a, &b);
    printf("%.0f", pow(a, b));
    return 0;
}
