//to print the reverse of a string & check if the string is a palindrome or not using the functios

#include <stdio.h>
#include <string.h>

void reverse(char str[], char rev[]){
    int length = str_size(str);
     for(int i=0, j=length-1; i<length; i++,j--){
         rev[j] = str[i];
     }
     rev[length]='\0';
    
    return;
}

int str_size(char str[]){
    int count = 0;
    while(str[count]!='\0'){
        count++;
    }
    return count;
}
int palindrome(char str[], char rev[]){
    if(strcmp(str, rev)==0) return 1;
    else return 0;
}

int main()
{
    char str[100] , rev[100];
    scanf("%s", str);
    reverse(str,  rev);
     printf("%s", rev);
     int result = palindrome(str, rev);
     if(result ==1) printf("\npalindrome");
     else printf("\nnot a palindrome");
    return 0;
}
