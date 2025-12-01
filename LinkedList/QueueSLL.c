// Queue Using Single Linked List

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *rear = NULL;
struct node *front = NULL;

int isEmpty(){
    return front == NULL;
}

struct node* createNode(int val){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = NULL;
    return newnode;
}

void enqueue(int val){
    struct node *newnode = createNode(val);
    if(isEmpty()){
        rear = front = newnode;
        return;
    }
    rear->next = newnode;
    rear = newnode;
}

void dequeue(){
    if(isEmpty()){
        printf("UnderFlow");
        return;
    }
    front = front->next;
    if(front == NULL) rear = NULL;
}

void display(){
    if(isEmpty()){
        printf("UnderFlow");
        return;
    }
    struct node *temp = front;
    printf("The elements of the Queue are: ");
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void peek(){
    printf("The peek of the given list is: %d", front->data);
}

int main(){
    enqueue(1);
    enqueue(11);
    enqueue(111);
    display();
    dequeue();
    display();
    peek();
    
    return 0;
}
