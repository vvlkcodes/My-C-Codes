// Insertion
# include <stdio.h>
# include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;

int isEmpty(){
    return head == NULL;
}

struct node* createNode(int val){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = NULL;
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
}

void display(){
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

void insertAtBeginning(int val){
    struct node *newnode = createNode(val);
    if(isEmpty()){
        head = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}

void insertAtEnd(int val){
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
}

void insertAtPos(int val, int pos){
    struct node *newnode = createNode(val);
    if(isEmpty()){
        head = newnode;
        return;
    }
    struct node *temp = head;
    for(int i=0;i<pos-1 && temp->next != NULL;i++){
        temp = temp->next;
    }
    newnode->next = temp->next->next;
    temp->next = newnode;
}

int main(){
    addElement(5);
    addElement(5);
    addElement(5);
    addElement(5);
    addElement(6);
    printf("Total Elements: ");
    display();
    printf("Insert At Beginning: ");
    insertAtBeginning(6);
    display();
    printf("Insert At End: ");
    insertAtEnd(7);
    display();
    printf("Insert At Postion: ");
    insertAtPos(1, 3); // value, Postion
    display();
    return 0;
}
