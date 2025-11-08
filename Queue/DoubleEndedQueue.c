// Double Ended Queue Implementation Using The Linked List

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
        front = rear = newnode;
    }
    if(front == NULL && rear == NULL) front = rear = newnode;
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
    printf("The elements in the queue are: ");
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void insertFront(int val){
    struct node *newnode = createNode(val);
    if(isEmpty()){
        front = rear = newnode;
        return;
    }
    newnode->next = front;
    front = newnode;
}

void insertRear(int val){
    struct node *newnode = createNode(val);
    if(isEmpty()){
        front = rear = newnode;
        return;
    }
    rear->next = newnode;
    rear = newnode;
}

void deleteFront(){
    if(isEmpty()){
        printf("UnderFlow");
        return;
    }
    struct node *temp = front;
    front = front->next;
    if(front == NULL) rear = NULL;
    free(temp);
}

void deleteRear(){
    if(isEmpty()){
        printf("UnderFlow");
        return;
    }
    // if only one element is present in the queue
    if(front == rear){
        free(front);
        front = rear = NULL;
        return;
    }
    // if there are more than one node, we need to traverse with the help of front and temp until we reach the rear
    struct node *temp = front;
    while(temp->next != rear){
        temp = temp->next;
    }
    free(rear);
    rear = temp;
    rear->next = NULL;
}

void getFront(){
    if(isEmpty()){
        printf("UnderFlow");
        return;
    }
    printf("\n%d ", front->data);
}

void getRear(){
    if(isEmpty()){
        printf("UnderFlow");
        return;
    }
    printf("\n%d ", rear->data);
}

int main() {
    int choice, val;

    while (1) {
        printf("\n\n===== Queue (Linked List) Operations =====\n");
        printf("1. Enqueue (Insert at Rear)\n");
        printf("2. Dequeue (Delete from Front)\n");
        printf("3. Display Queue\n");
        printf("4. Insert at Front (Deque)\n");
        printf("5. Insert at Rear (Deque)\n");
        printf("6. Delete from Front (Deque)\n");
        printf("7. Delete from Rear (Deque)\n");
        printf("8. Get Front Element\n");
        printf("9. Get Rear Element\n");
        printf("10. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &val);
                enqueue(val);
                printf("✅ %d inserted at rear.\n", val);
                break;

            case 2:
                dequeue();
                printf("✅ Front element deleted.\n");
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Enter value to insert at front: ");
                scanf("%d", &val);
                insertFront(val);
                printf("✅ %d inserted at front.\n", val);
                break;

            case 5:
                printf("Enter value to insert at rear: ");
                scanf("%d", &val);
                insertRear(val);
                printf("✅ %d inserted at rear.\n", val);
                break;

            case 6:
                deleteFront();
                printf("✅ Front element deleted.\n");
                break;

            case 7:
                deleteRear();
                printf("✅ Rear element deleted.\n");
                break;

            case 8:
                printf("Front element: ");
                getFront();
                printf("\n");
                break;

            case 9:
                printf("Rear element: ");
                getRear();
                printf("\n");
                break;

            case 10:
                printf("Exiting program...\n");
                exit(0);

            default:
                printf("❌ Invalid choice! Try again.\n");
        }
    }

    return 0;
}
