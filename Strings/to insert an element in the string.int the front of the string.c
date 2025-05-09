// to insert an element in the string.int the front of the string.
#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    printf("\nenter the string: ");
    scanf("%s", str);
    printf("%s", str);
    
    printf("\nhow many characters are you gonna add?");
    int n;
    scanf("%d", &n);
    
    
    for(int i = strlen(str);i>=0; i--){
        str[i+n] = str[i];
    }
    // str[strlen(str)+n] = '\0';
    
    
    char ch;
    printf("\nEnter the characters you wanted to insert: ");
    for(int i =0; i<n;i++){
        scanf(" %c", &str[i]);
    }
    
    printf("\n%s", str);
    return 0;
}
