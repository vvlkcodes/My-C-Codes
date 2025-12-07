// Implementation of circular queue with array

#include <stdio.h>
#define MAX 5

int front = -1;
int rear = -1;
int queue[MAX];

int isEmpty(){
    return front == -1;
}

int isFull(){
    return (rear+1) % MAX == front;
}

void enqueue(int val){
    if(isFull()){
        printf("OverFlow\n");
        return;
    }
    if(front == -1) front = 0;
    rear = (rear+1)%MAX;
    queue[rear] = val;
    printf("%d is enqueued\n", val);
}

void dequeue(){
    if(isEmpty()){
        printf("UnderFlow\n");
        return;
    }
    int deleted = queue[front];
    if(front == rear) front = rear = -1;
    front = (front+1)%MAX;
    printf("%d is dequeued\n", deleted);
}

void peek(){
    if(isEmpty()){
        printf("UnderFlow\n");
        return;
    }
    printf("%d is the peek element of the circular queue\n", queue[front]);
}

void display(){
    if(isEmpty()){
        printf("UnderFlow\n");
        return;
    }
    int i = front;
    printf("The elements of the circular queue are: \n");
    do{
        printf("%d ", queue[i]);
        i = (i+1)%MAX;
    }while(i != (rear+1)%MAX);
    printf("\n");
}

int main()
{
    enqueue(50);
    enqueue(60);
    enqueue(70);
    enqueue(80);
    enqueue(90);
    display();
    peek();
    dequeue();
    dequeue();
    display();
    peek();
    return 0;
}
