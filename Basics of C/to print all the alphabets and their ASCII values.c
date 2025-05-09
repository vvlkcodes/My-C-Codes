//to print all the alphabets and their ASCII values.
#include <stdio.h>
int main(){
    // for the capital letters.
    for(int i = 65; i<=90; i++){
        printf("%c = %d \n", i, i);
    }
    printf("\n");
    //for the small letters.
    for(int i = 97; i<=122; i++){
        printf("%c = %d\n", i, i);
    }
    return 0;
}
