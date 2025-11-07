// Implementation of the Queue using LinkedList

#include <stdio.h>
#include <stdlib.h>

struct node{
  int data;
  struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

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
        front = rear = newnode;
        return;
    }
    if(front == NULL && rear == NULL){
        front = rear = newnode;
    }
    rear->next = newnode;
    rear = newnode;
}

void dequeue(){
    if(isEmpty()){
        printf("UnderFlow!\n");
        return;
    }
    front = front->next;
    if(front == NULL) rear = NULL;
}

void display(){
    if(isEmpty()){
        printf("UnderFlow---\n");
        return;
    }
    struct node *temp = front;
    printf("The elements of the queue are: \n");
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void peek(){
    if(isEmpty()){
        printf("UnderFlow\n");
        return;
    }
    printf("The peek element of the stack is: %d", front->data);
}

int main(){
    printf("enqueue , 5 elements: \n");
    enqueue(99);
    enqueue(88);
    enqueue(77);
    enqueue(66);
    enqueue(55);
    display();
    printf("dequeue , 2 elements: \n");
    dequeue();
    dequeue();
    display();
    peek();
    return 0;
}
