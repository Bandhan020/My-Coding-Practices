#include <bits/stdc++.h>
using namespace std;
vector<int>v1,v2;

struct node{
    int data;
    struct node *left;
    struct node *right;
};


struct node* newNode(int data){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

// 


struct node* insert(struct node* root, int key)
{
    // Create a new Node containing
    // the new element
    struct node* newnode = newNode(key);
 
    // Pointer to start traversing from root and
    // traverses downward path to search
    // where the new node to be inserted
    struct node* x = root;
 
    // Pointer y maintains the trailing
    // pointer of x
    struct node* y = NULL;
 
    while (x != NULL) {
        y = x;
        if (key < x->data)
            x = x->left;
        else
            x = x->right;
    }
 
    // If the root is NULL i.e the tree is empty
    // The new node is the root node
    if (y == NULL)
        y = newnode;
 
    // If the new key is less then the leaf node key
    // Assign the new node to be its left child
    else if (key < y->data)
        y->left = newnode;
    // else assign the new node its right child
    else
        y->right = newnode;
 
    // Returns the pointer where the
    // new node is inserted
    return y;
}



void inorderTraversal(struct node* root) {
    if (root == NULL)
        return;

    inorderTraversal(root->left);
    cout<<root->data<<endl;
    inorderTraversal(root->right);
    }

int main()
{
    vector<int>v1,v2;
    struct node* root = NULL;
    struct node* root2= NULL;
    int n,n2,i,temp;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>temp;
        if(i==0){
            root=insert(root, temp);
            continue;
        }
        insert(root, temp);
    }
    // cin>>n2;
    // for(i=0;i<n2;i++){
    //     cin>>temp;
    //     if(i==0){
    //         root2=insert(root2, temp);
    //         continue;
    //     }
    //     insert(root2, temp);
    // }
    // Print inorder traversal of the BST
    inorderTraversal(root);
    //inorderTraversal(root2);

    return 0;
    
}