// to insert an element in the string.int the back of the string.
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

    int length = strlen(str);
    printf("\nEnter the characters you wanted to insert: ");
    for(int i =0; i<n;i++){
        scanf(" %c", &str[i+length]);
    }
    str[length + n] = '\0';
    
    printf("\n%s", str);
    return 0;
}
