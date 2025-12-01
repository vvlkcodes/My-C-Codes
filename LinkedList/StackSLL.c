// Stack using Single Linked List

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *top = NULL;

int isEmpty(){
    return top == NULL;
}

struct node* createNode(int val){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = NULL;
    return newnode;
}

void push(int val){
    struct node *newnode = createNode(val);
    if(isEmpty()){
        top = newnode;
        return;
    }
    newnode->next = top;
    top = newnode;
}

void pop(){
    if(isEmpty()){
        printf("UnderFlow");
        return;
    }
    struct node *temp = top;
    top = top->next;
    free(temp);
    printf("\n");
}

void peek(){
    if(isEmpty()){
        printf("UnderFlow");
        return;
    }
    printf("Peek of the given linked list is: %d", top->data);
}

void display(){
    if(isEmpty()){
        printf("UnderFlow");
        return;
    }
    struct node *temp = top;
    while(temp!= NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(){
    push(90);
    push(80);
    push(70);
    push(30);
    display();
    peek();
    pop();
    display();
    peek();
    return 0;
}
