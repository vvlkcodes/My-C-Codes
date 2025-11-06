// Create and display the elements of a simple single linked list
# include <stdio.h>
# include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;

struct node* createNode(int val){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = NULL;
    return newnode;
}

int isEmpty(){
    return head == NULL;
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
}

int main(){
    addElement(5);
    addElement(5);
    addElement(5);
    addElement(5);
    addElement(6);
    display();
    return 0;
}
