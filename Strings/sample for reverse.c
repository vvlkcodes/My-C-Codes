//sample for reverse
#include<stdio.h>
int length(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }return count;
}
int main(){
    char arr[100];
    gets(arr);
    int lol = length(arr);
    printf("%d\n", lol);
    for(int i=lol;i>=0;i--){
        printf("%c", arr[i]);
    }
    return 0;
}
