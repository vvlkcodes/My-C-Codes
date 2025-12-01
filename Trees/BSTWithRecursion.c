// Implementation of all the functions of Binary Search Tree with recursion

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node* createNode(int val){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

struct node* insertNode(struct node *root, int val){
    struct node *newnode = NULL;
    if(root == NULL){
        newnode = createNode(val);
        return newnode;
    }
    if(val < root->data){
        root->left = insertNode(root->left, val);
    }else if(val > root->data){
        root->right = insertNode(root->right, val);
    }
    return root;
}

struct node* findMin(struct node *root){
    while(root != NULL && root->left != NULL){
        root = root->left;
    }
    return root;
}

struct node* deleteNode(struct node *root, int val){
    if(root == NULL) return NULL;
    if(val < root->data){
        root->left = deleteNode(root->left, val);
    }
    else if(val > root->data){
        root->right = deleteNode(root->right, val);
    }
    else{
        // case 1 : left child only
        if(root->left == NULL){
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        // case 2 : right child only
        else if(root->right == NULL){
            struct node *temp = root->left;
            free(root);
            return temp;
        }
        // case 3 ; Two children
        else{
            struct node *temp = findMin(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }
    return root;
}


struct node* search(struct node *root, int val){
    if(root == NULL) return NULL;
    else if(root->data == val) return root;
    else if(val < root->data) return search(root->left, val);
    return search(root->right, val);
}

void inOrder(struct node* root){
    if(root != NULL){
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

void preOrder(struct node* root){
    if(root != NULL){
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct node* root){
    if(root != NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}

int main(){
    struct node *root = NULL;
    root = insertNode(root, 89);
    root = insertNode(root, 12);
    root = insertNode(root, 45);
    root = insertNode(root, 54);
    root = insertNode(root, 98);
    
    inOrder(root);
    printf("\n");
    
    root = deleteNode(root, 89);
    
    inOrder(root);
    printf("\n");
    
    preOrder(root);
    printf("\n");
    
    postOrder(root);
    printf("\n");
    return 0;
}
