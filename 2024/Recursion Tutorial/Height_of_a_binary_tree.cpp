#include <iostream>
using namespace std;

typedef struct Node Node;

struct Node{
    int value;
    Node *left,*right;
};


Node* init_tree(int data){
    Node *root=(Node*)malloc(sizeof(Node));
    root->left=root->right=NULL;
    root->value=data;
    return root;
}

Node* create_node(int data){
    Node *node=(Node*)malloc(sizeof(Node));
    node->value=data;
    node->left=node->right=NULL;
    return node;
}

void free_tree(Node* root)
{
    Node* temp=root;
    if(!temp){
        return;
    }
    free_tree(temp->left);
    free_tree(temp->right);
    if(!temp->left && temp->right){
        free(temp);
        return;
    }
}



