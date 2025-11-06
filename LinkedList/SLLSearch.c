// Search in Single Linked List
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

void search(int t){
    if(isEmpty()){
        printf("Cannot Search due to UnderFlow");
        return;
    }
    struct node *temp = head;
    while(temp != NULL){
        if(temp->data == t){
            printf("Element Found!");
            return;
        }
        temp = temp->next;
    }
    printf("Element Not Found!");
}

int main(){
    addElement(1);
    addElement(2);
    addElement(3);
    addElement(4);
    addElement(5);
    printf("Total Elements: ");
    display();
    int t = 5;
    search(5);
    return 0;
}
