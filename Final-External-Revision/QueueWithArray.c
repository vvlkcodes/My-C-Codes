// Implementation of queue using the array 

#include <stdio.h>
#define MAX 5

int front = -1;
int rear = -1;
int queue[MAX];

int isEmpty(){
    return front == -1;
}

int isFull(){
    return rear == MAX-1;
}

void enqueue(int val){
    if(isFull()){
        printf("Queue OverFlow\n");
        return;
    }
    if(front == -1) front = 0;
    printf("%d is enqueued\n", val);
    rear++;
    queue[rear] = val;
}

void dequeue(){
    if(isEmpty()){
        printf("Queue UnderFlow");
        return;
    }
    if(front == rear) front = rear = -1;
    printf("%d is dequeued\n", queue[front]);
    front++;
}

void peek(){
    if(isEmpty()){
        printf("Queue UnderFlow\n");
        return;
    }
    printf("%d is peek of the queue\n", queue[front]);
}

void display(){
    if(isEmpty()){
        printf("Queue UnderFlow\n");
        return;
    }
    printf("The Queue elements are: \n");
    for(int i=front; i<=rear;i++){
        printf("%d ", queue[i]);
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
