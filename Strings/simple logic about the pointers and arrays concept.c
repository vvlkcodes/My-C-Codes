//simple logic about the pointers and arrays concept.

#include <stdio.h>

int main()
{   //about the strings changes using the pointers
//the string cant be changed once it is initialized with some line.
    char s[] = "the tiger";
    char *p = &s;
    *p = "the lion";
    printf("%s", s);
        printf("\n%s", p);
//but the regular int values can be changed with the help of pointers.
    int s =0;
    int *p = &s;
    *p = 7;
    printf("%d", s);
        printf("\n%d", *p);

    return 0;
}
