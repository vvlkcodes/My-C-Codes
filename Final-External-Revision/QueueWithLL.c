// Implementation of Queue using linked list 

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

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
    return front == NULL;
}

void enqueue(int val){
    struct node *newnode = createNode(val);
    if(isEmpty()){
        rear = front = newnode;
        printf("%d enqueued\n", rear->data);
        return;
    }
    rear->next = newnode;
    rear = newnode;
    printf("%d is enqueued\n", rear->data);
}

void dequeue(){
    if(isEmpty()){
        printf("OverFlow\n");
        return;
    }
    if(rear == front) rear = front = NULL;
    struct node *temp = front;
    front = front->next;
    printf("%d is dequeued\n", temp->data);
    free(temp);
}

void peek(){
    if(isEmpty()){
        printf("OverFlow\n");
        return;
    }
    printf("%d is the peek element\n", front->data);
}

void display(){
    if(isEmpty()){
        printf("OverFlow\n");
        return;
    }
    printf("The elements of the Queue are: ");
    struct node *temp = front;
    while(temp != rear->next){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    enqueue(45);
    enqueue(55);
    enqueue(65);
    enqueue(75);
    enqueue(85);
    display();
    peek();
    dequeue();
    dequeue();
    display();
    peek();
    return 0;
}
