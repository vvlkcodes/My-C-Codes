// Circular Queue using arrays

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

int isEmpty(){
    return front == -1;
}

int isFull(){
    return (rear+1) % SIZE == front;
}

void enqueue(int val){
    if(isFull()){
        printf("OverFlow");
        return;
    }
    if(isEmpty()){
        front = rear = 0;
    }else{
        rear = (rear+1)%SIZE;
    }
    queue[rear] = val;
}

void dequeue(){
    if(isEmpty()){
        printf("UnderFlow");
        return;
    }
    if(front == rear) front = rear = -1;
    else front = (front+1) % SIZE;
}

void peek(){
    if(isEmpty()){
        printf("UnderFlow");
        return;
    }
    printf("The peek value of the given circular queue is: %d", queue[front]);
}

void display(){
    if(isEmpty()){
        printf("UnderFlow");
        return;
    }
    printf("\nThe elements of the circular queue are: ");
    int i = front;
    while(1){
        printf("%d ", queue[i]);
        if(i == rear) break;
        i = (i+1)%SIZE;
    }
    printf("\n");
}

int main(){
    enqueue(90);
    enqueue(65);
    enqueue(45);
    enqueue(12);
    display();
    peek();
    dequeue();
    display();
    return 0;
}
