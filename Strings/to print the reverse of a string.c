//to print the reverse of a string.

#include <stdio.h>

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

int main()
{
    char str[100] , rev[100];
    scanf("%s", str);
    reverse(str,  rev);
     printf("%s", rev);
    return 0;
}
