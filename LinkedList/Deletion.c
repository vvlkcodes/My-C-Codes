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

void deleteFromBeginning(){
    if(isEmpty()){
        printf("UnderFlow");
        return;
    }
    struct node *temp = head;
    temp =  temp->next;
    head->next = NULL;
    head = temp;
}

void deleteFromEnd(){
    if(isEmpty()){
        printf("UnderFlow");
        return;
    }
    struct node *temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    temp->next = NULL;
}

void deleteAtFromPosition(int pos){
    if(isEmpty()){
        printf("UnderFlow");
        return;
    }
    struct node *temp = head;
    for(int i=0;i<pos-1 && temp->next != NULL;i++){
        temp = temp->next;
    }
    temp->next = temp->next->next;
}

int main(){
    addElement(1);
    addElement(2);
    addElement(3);
    addElement(4);
    addElement(5);
    printf("Total Elements: ");
    display();
    printf("Delete from Beginning:");
    deleteFromBeginning();
    display();
    printf("Delete from End:");
    deleteFromEnd();
    display();
    printf("Delete from Position:");
    deleteAtFromPosition(1);
    display();
    return 0;
}
