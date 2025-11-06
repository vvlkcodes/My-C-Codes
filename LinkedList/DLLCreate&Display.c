// Doubly Linked List
// Creation and display

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;

int isEmpty(){
    return head == NULL;
}

struct node* createNode(int val){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = NULL;
    newnode->prev = NULL;
    return newnode;
}

void addElement(int val){
    struct node *newnode = createNode(val);
    if(isEmpty()){
        head = newnode;
        return;
    }
    struct node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp;
}

void displayForward(){
    if(isEmpty()){
        printf("UnderFlow");
        return;
    }
    struct node *temp = head;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void displayBackward(){
    if(isEmpty()){
        printf("UnderFlow");
        return;
    }
    struct node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->prev;
    }
    printf("\n");
}

int main(){
    addElement(1);
    addElement(2);
    addElement(3);
    addElement(4);
    addElement(5);
    addElement(6);
    printf("Displaying forward: ");
    displayForward();
    printf("Displaying Backward: ");
    displayBackward();
    
    
    return 0;
}
