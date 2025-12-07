// Binary Search Tree and it's operations

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node * right;
};

struct node* createNode(int val){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL){
        printf("The memory space was'nt allocated\n");
        return NULL;
    }
    newnode->data = val;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

struct node* findmin(struct node *root){
    while(root->left != NULL){
        root = root->left;
    }
    return root;
}

struct node* findmax(struct node *root){
    while(root->right != NULL){
        root = root->right;
    }
    return root;
}

struct node* insertNode(struct node *root, int val){
    struct node *newnode = createNode(val);
    if(root == NULL){
        root = newnode;
        return root;
    }
    if(val < root->data) root->left = insertNode(root->left, val);
    else if(val > root->data) root->right = insertNode(root->right, val);
    return root;
}

struct node* deleteNode(struct node *root, int val){
    if(root == NULL){
        printf("The value not found\n");
        return NULL;
    }
    if(val < root->data) root->left = deleteNode(root->left, val);
    else if(val > root->data) root->right = deleteNode(root->right, val);
    else{
        // No child 
        if(root->left == NULL && root->right == NULL){
            free(root);
            return NULL;
        }
        // One child
        else if(root->left == NULL){
            struct node *temp = root->right;
            free(root);
            return temp;
        }else if(root->right == NULL){
            struct node *temp = root->left;
            free(root);
            return temp;
        }
        else{
            struct node *succ = findmin(root->right);
            root->data = succ->data;
            root->right = deleteNode(root->right, val);
        }
    }
    return root;
}

struct node* preorder(struct node *root){
    if(root != NULL){
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

struct node* inorder(struct node *root){
    if(root != NULL){
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

struct node* postorder(struct node *root){
    if(root != NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

struct node* search(struct node *root, int val){
    if(root->data == val){
        printf("Got the value");
        return NULL;
    }
    else if(val > root->data) root->right = search(root->right, val);
    else search(root->left, val);
    return root;
}

int main(){
    struct node *root = NULL;
    root = insertNode(root, 1);
    root = insertNode(root, 2);
    root = insertNode(root, 3);
    root = insertNode(root, 4);
    root = insertNode(root, 5);
    root = insertNode(root, 6);
    root = insertNode(root, 7);
    root = insertNode(root, 8);
    root = insertNode(root, 9);
    root = insertNode(root, 10);
    printf("\n");
    preorder(root);
    printf("\n");
    inorder(root);
    printf("\n");
    postorder(root);
    printf("\n");
    // int val = findmax(root);
    // int min = findmin(root);
    printf("%d max\n", findmax(root)->data);
    printf("%d min\n", findmin(root)->data);
    root = deleteNode(root, 1);
    root = deleteNode(root, 10);
    preorder(root);
    printf("\n");
    inorder(root);
    printf("\n");
    postorder(root);
    printf("\n");
    search(root, 5);
    return 0;
}
