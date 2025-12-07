// Implementation of stack using the array 

#include <stdio.h>
#define MAX 5

int top = -1;
int stack[MAX];

int isEmpty(){
    return  top == -1;
}

int isFull(){
    return top == MAX -1;
}

void push(int val){
    if(isFull()){
        printf("Stack OverFlow");
        printf("\n");
        return;
    }
    top++;
    stack[top] = val;
    printf("%d is pushed into the stack", stack[top]);
    printf("\n");
}

void pop(){
    if(isEmpty()){
        printf("Stack UnderFlow");
        printf("\n");
        return;
    }
    printf("%d is popped out of the stack", stack[top]);
    printf("\n");
    top--;
}

void peek(){
    if(isEmpty()){
        printf("Stack UnderFlow");
        printf("\n");
        return;
    }
    printf("%d is the peek of the stack", stack[top]);
    printf("\n");
}

void display(){
    if(isEmpty()){
       printf("Stack UnderFlow");
        return;  
    }
    printf("The stack elements are: ");
    for(int i=0;i<=top;i++){
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main()
{
    push(45);
    push(55);
    push(65);
    push(75);
    push(85);
    display();
    peek();
    pop();
    pop();
    display();
    peek();
    return 0;
}
