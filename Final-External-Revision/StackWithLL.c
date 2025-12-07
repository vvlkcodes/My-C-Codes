// Implementation of stack using the linked list 

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *top = NULL;

struct node* createNode(int val){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL){
        printf("The memory allocation failed!");
        return NULL;
    }
    newnode->data = val;
    newnode->next = NULL;
    return newnode;
}

int isEmpty(){
    return top == NULL;
}

void push(int val){
    struct node *newnode = createNode(val);
    newnode->next = top;
    top = newnode;
    printf("Pushed %d\n", newnode->data);
}

void pop(){
    if(isEmpty()){
        printf("Stack UnderFlow\n");
        return;
    }
    printf("Popped %d\n", top->data);
    struct node *temp = top;
    top = top->next;
    free(temp);
}

void peek(){
    if(isEmpty()){
        printf("Stack UnderFlow\n");
        return;
    }
    printf("Peek is: %d\n", top->data);
}

void display(){
    if(isEmpty()){
        printf("Stack UnderFlow\n");
        return;
    }
    struct node *temp = top;
    printf("The stack elements are: ");
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
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
