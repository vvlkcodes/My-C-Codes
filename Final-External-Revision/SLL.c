// Implementation of single linked list

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;

struct node* createNode(int val){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL){
        printf("The memory allocation failed\n");
        return NULL;
    }
    newnode->data = val;
    newnode->next = NULL;
    return newnode;
}

int isEmpty(){
    return head == NULL;
}

void insertAtBegining(int val){
    struct node *newnode = createNode(val);
    if(isEmpty()){
        head = newnode;
        printf("%d Inserted at Begining\n", val);
        return;
    }
    newnode->next = head;
    head = newnode;
    printf("%d Inserted at Begining\n", val);
}

void insertAtEnd(int val){
    struct node *newnode = createNode(val);
    if(isEmpty()){
        head = newnode;
        printf("%d Inserted at End\n", val);
        return;
    }
    struct node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
    printf("%d Inserted at End\n",val);
}

void insertAtPos(int val, int pos){
    struct node *newnode = createNode(val);
    if(isEmpty()){
        head = newnode;
        printf("%d Inserted\n", val);
        return;
    }
    struct node *temp = head;
    for(int i=0;i<=pos-2 && temp != NULL;i++){
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    printf("%d Inserted at the pos %d\n", val, pos);
}

void deleteFromBeginning(){
    if(isEmpty()){
        printf("UnderFlow\n");
        return;
    }
    struct node *temp = head;
    head = head->next;
    printf("%d is Deleted From Beginning\n", temp->data);
    free(temp);
}

void deleteFromEnd(){
    if(isEmpty()){
        printf("UnderFlow\n");
        return;
    }
    if(head->next == NULL){
        head = NULL;
        return;
    }
    struct node *temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    printf("%d is Deleted From End\n", temp->next->data);
    temp->next = NULL;
}

void deleteFromPos(int pos){
    if(isEmpty()){
        printf("UnderFlow\n");
        return;
    }
    if(pos == 0){
        head = head->next;
        return;
    }
    struct node *temp = head;
    for(int i=0;i<=pos-2 && temp->next != NULL;i++){
        temp = temp->next;
    }
    temp->next = temp->next->next;
    printf("Deleted From position\n");
}


void display(){
    if(isEmpty()){
        printf("UnderFlow\n");
        return;
    }
    struct node *temp = head;
    printf("The elements of the single linked list are: \n");
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
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
            printf("The element fount at, %d\n", c); 
            return;
        }
        c++;
        temp = temp->next;
    }
    printf("Element not found\n");
}

int main()
{
    insertAtEnd(10);
    insertAtBegining(20);
    insertAtEnd(30);
    insertAtEnd(40);
    insertAtPos(50, 1);
    display();
    deleteFromEnd();
    deleteFromBeginning();
    display();
    deleteFromPos(0);
    display();
    search(30);
    return 0;
}
