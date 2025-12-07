// Implementation of Doubly linked list

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;
struct node *tail = NULL;

struct node* createNode(int val){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL){
        printf("The memory allocation failed\n");
        return NULL;
    }
    newnode->data = val;
    newnode->next = NULL;
    newnode->prev = NULL;
    return newnode;
}

int isEmpty(){
    return head == NULL;
}

void insertAtBegining(int val){
    struct node *newnode = createNode(val);
    if(isEmpty()){
        head = tail = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void insertAtEnd(int val){
    struct node *newnode = createNode(val);
    if(isEmpty()){
        head = tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

void insertAtPos(int val, int pos){
    struct node *newnode = createNode(val);
    if(isEmpty()){
        head = tail = newnode;
        return;
    }
    struct node *temp = head;
    for(int i=0;i<=pos-2 && temp != NULL;i++){
        temp = temp->next;
    }
    newnode->next = temp->next;
    newnode->prev = temp;
    temp->next->prev = newnode;
    temp->next = newnode;
}

void deleteFromBeginning(){
    if(isEmpty()){
        printf("UnderFlow\n");
        return;
    }
    if(head == tail) head = tail = NULL;
    else{
        head = head->next;
        head->prev = NULL;
    }
}

void deleteFromEnd(){
    if(isEmpty()){
        printf("UnderFlow\n");
        return;
    }
    if(head == tail) head = tail = NULL;
    else{
        tail = tail->prev;
        tail->next = NULL;
    }
}

void deleteFromPos(int pos){
    if(isEmpty()){
        printf("UnderFlow\n");
        return;
    }
    if(pos == 0){
        deleteFromBeginning();
        return;
    }
    struct node *temp = head;
    for(int i=0;i<=pos-2 && temp->next != NULL;i++){
        temp = temp->next;
    }
    temp->next = temp->next->next;
    temp->next->next->prev = temp;
    printf("Deleted From position\n");
}


void displayForward(){
    if(isEmpty()){
        printf("UnderFlow\n");
        return;
    }
    struct node *temp = head;
    printf("The elements of the doubly linked list are: \n");
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void displayBackward(){
    if(isEmpty()){
        printf("UnderFlow\n");
        return;
    }
    struct node *temp = tail;
    printf("The elements of the doubly linked list in reverse order: ");
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    printf("\n");
}

void search(int val){
    if(isEmpty()){
        printf("The list is empty\n");
        return;
    }
    struct node *temp = head;
    int c = 0;
    while(temp != NULL){
        if(temp->data == val){
            printf("The element found"); 
            return;
        }
        c++;
        temp = temp->next;
    }
    printf("Element not found\n");
}

int main()
{
    insertAtBegining(10);
    insertAtEnd(20);
    insertAtEnd(30);
    insertAtEnd(40);
    insertAtEnd(60);
    insertAtEnd(70);
    insertAtEnd(80);
    insertAtPos(50, 1);
    displayForward();
    displayBackward();
    deleteFromEnd();
    deleteFromBeginning();
    displayForward();
    deleteFromPos(3);
    displayForward();
    search(30);
    return 0;
}
