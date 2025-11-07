// Stack implementation using arrays

#include <stdio.h>

#define max 5

int stack[max];

int top = -1;

int isEmpty(){
    return top == -1;
}

int isFull(){
    return top == max-1;
}

void push(int val){
    if(isFull()){
        printf("OverFlow");
        return;
    }
    top++;
    stack[top] = val;
}

void pop(){
    if(isEmpty()){
        printf("UnderFLow");
        return;
    }
    top--;
}

void peek(){
    printf("The peek element of the stack is: \n");
    printf("%d ", stack[top]);
}

void display(){
    if(isEmpty()){
        printf("UnderFLow");
        return;
    }
    printf("The elements of the stack are: ");
    for(int i=top;i>=0;i--){
        printf("%d ", stack[top]);
    }
    printf("\n");
}

int main()
{
    printf("Pushing 5 elements inside the stack: \n");
    push(20);
    push(20);
    push(20);
    push(20);
    push(20);
    display();
    printf("Popping 2 elements out of the stack: \n");
    pop();
    pop();
    display();
    return 0;
}
