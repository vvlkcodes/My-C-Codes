// queue implementation using arrays

#include <stdio.h>

#define size 5

int front = -1;
int rear = -1;

int queue[size];

int isEmpty(){
    return front == -1;
}

int isFull(){
    return rear == size-1;
}

void enqueue(int val){
    if(isFull()){
        printf("OverFlow");
        return;
    }
    if(front == -1) front = 0;
    queue[++rear] = val;
}

void dequeue(){
    if(isEmpty()){
        printf("UnderFlow");
        return;
    }
    front++;
    if(front > rear) front = rear = -1;
}

void peek(){
    if(isEmpty()){
        printf("UnderFlow");
        return;
    }
    printf("The peek element of the given queue is: %d", queue[front]);
}

void display(){
    if(isEmpty()){
        printf("UnderFlow");
        return;
    }
    printf("The elements of the queue are: \n");
    for(int i=front;i<=rear;i++){
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main()
{
    enqueue(90);
    enqueue(90);
    enqueue(90);
    enqueue(90);
    enqueue(90);
    display();
    dequeue();
    dequeue();
    display();
    peek();
    return 0;
}
