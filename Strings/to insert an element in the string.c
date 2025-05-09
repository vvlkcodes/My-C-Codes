// to insert an element in the string
#include<stdio.h>
#include<string.h>

int main(){
    char str[100] = "hello";
    printf("%s", str);
    printf("how many digits are you gonna add?");
    int n;
    scanf("%d", &n);
    for(int i = 5;i>=0; i--){
        str[i+1] = str[i];
    }
    str[7] = '\0';
    str[0] = 'l';
    printf("\n%s", str);
    return 0;
}
