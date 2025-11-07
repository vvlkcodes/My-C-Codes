// Implementation of the Stack using LinkedList

#include <stdio.h>
#include <stdlib.h>

struct node{
  int data;
  struct node *next;
};

struct node *top = NULL;
struct node *head = NULL;

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
        printf("UnderFlow!");
        return;
    }
    struct node *temp = top;
    temp = top->next;
    top->next = NULL;
    top = temp;
}

void display(){
    if(isEmpty()){
        printf("UnderFlow");
        return;
    }
    struct node *temp = top;
    printf("The elements of the stack are: ");
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void peek(){
    if(isEmpty()){
        printf("UnderFlow");
        return;
    }
    printf("The peek element of the stack is: ", top->data);
}

int main(){
    printf("Pushing in, 5 elements: \n");
    push(808);
    push(808);
    push(808);
    push(808);
    push(808);
    display();
    printf("Popping out, 3 elements: \n");
    pop();
    pop();
    pop();
    display();
    peek();
    return 0;
}
