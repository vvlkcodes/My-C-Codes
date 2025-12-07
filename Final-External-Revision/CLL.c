// Implementation of the circular linked list

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node* createNode(int val){
    struct node *newnode  = (struct node*)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = NULL;
    return newnode;
}

struct node *head = NULL;
struct node *tail = NULL;

void countNodes(){
    if(head == NULL){
        printf("UnderFlow");
        return;
    }
    struct node *temp = head;
    int c = 0;
    do{
        c++;
        temp = temp->next;
    }while(temp != head);
    printf("\nThe total number of nodes in the given circular linked list are: %d", c);
}

// Insert functions
void insertAtBeginning(int val){
    struct node *newnode = createNode(val);
    if(head == NULL){
        head = tail = newnode;
        // newnode->next = head;
        return;
    }
    newnode->next = head;
    head = newnode;
    tail->next = head;
}

void insertAtEnd(int val){
    struct node *newnode = createNode(val);
    if(head == NULL){
        head = tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
    tail->next = head;
}

void insertAtPos(int val, int pos){
    struct node *newnode = createNode(val);
    if(head == NULL){
        head = tail = newnode;
        return;
    }
    struct node *temp = head;
    for(int i=0;i<pos-1;i++){
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

void display(){
    if(head == NULL){
        printf("\nUnderFlow");
        return;
    }
    struct node *temp = head;
    printf("The elements of the circular linked list are: \n");
    do{
        printf("%d ", temp->data);
        temp = temp->next;
    }while(temp != head);
}

// delete functions
void deletefromBeginning(){
    if(head == NULL){
        printf("The list is empty");
        return;
    }
    if(head == tail){
        head = tail = NULL;
        return;
    }
    head = head->next;
    tail->next = head;
}

void deletefromEnd(){
    if(head == NULL){
        printf("The list is empty");
        return;
    }
    if(head == tail){
        head = tail = NULL;
        return;
    }
    struct node *temp = head;
    do{
        temp = temp->next;
    }while(temp->next != tail);
    tail = temp;
    tail->next = head;
}

void deletefromPos(int pos){
    if(head == NULL){
        printf("The list is empty");
        return;
    }
    if(head == tail){
        head = tail = NULL;
        return;
    }
    struct node *temp = head;
    struct node *del = NULL;
    for(int i=0;i<pos-1;i++){
        temp = temp->next;
    }
    del = temp->next;
    temp->next = del->next;
    free(del);
}

// Search
void search(int val){
    if(head == NULL){
        printf("\nThe list is empty");
        return;
    }
    struct node *temp = head;
    do{
        if(temp->data == val) printf("\nFound the val");
        temp = temp->next;
    }while(temp != head);
}

int main()
{
    insertAtBeginning(45);
    insertAtBeginning(55);
    insertAtEnd(90);
    display();
    search(90);
    countNodes();
    deletefromBeginning();
    deletefromEnd();
    deletefromPos(0);
    display();
    return 0;
}
