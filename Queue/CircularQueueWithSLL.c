// Circular Queue Using Linked List

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

int isEmpty() {
    return front == NULL;
}

struct node* createNode(int val) {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = NULL;
    return newnode;
}

void enqueue(int val) {
    struct node *newnode = createNode(val);

    if (isEmpty()) {
        front = rear = newnode;
        newnode->next = front;   // circular link
        return;
    }

    rear->next = newnode;
    rear = newnode;
    rear->next = front;          // maintain circle
}

void dequeue() {
    if (isEmpty()) {
        printf("UnderFlow\n");
        return;
    }

    if (front == rear) {
        printf("Deleted %d\n", front->data);
        free(front);
        front = rear = NULL;
        return;
    }

    struct node *temp = front;
    printf("Deleted %d\n", temp->data);
    front = front->next;
    rear->next = front;          // maintain circle
    free(temp);
}

void peek() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return;
    }
    printf("The peek of the queue is: %d\n", front->data);
}

void display() {
    if (isEmpty()) {
        printf("UnderFlow\n");
        return;
    }

    printf("The elements of the Circular Queue are: ");
    struct node *temp = front;

    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != front);

    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();

    dequeue();
    display();

    peek();

    return 0;
}
