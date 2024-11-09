#include <stdio.h>

struct node{
    int data;
    struct node *leftChild;
    struct node *rightChild;
};

struct node *root=NULL;

void insert(int data){
    struct node *tempNode=(struct node*)malloc(sizeof(struct node));
    struct node *current;
    struct node *parrent;

    tempNode->data=data;
    tempNode->leftChild=NULL;
    tempNode->rightChild=NULL;

    if(root==NULL){
        root=tempNode;
    }
    else{
        current=root;
        parrent=NULL;

        while(1){
            parrent=current;
            if(data<parrent->data){
                current=current->leftChild;
                if(current==NULL){
                =tempNode;
                return;
            }
            }
            else{
                current=current->rightChild;
                if(current==NULL){
                    current=tempNode;
                    return;
                }
            }

        }
    }

}



struct node* search(int data){
    struct node* current=root;
    printf("Visiting Elements: ");

    while(current->data!=data){
        if(current!=NULL){
            printf("%d",current->data);
            if(data<current->data){
                current=current->leftChild;
            }
            else{
                current=current->rightChild;
            }
        }
        else{
            return NULL;
        }
    }
    return current;
}


int main()
{
    int i;
    int array[7]={27,14,35,10,19,31,42};
    for(i=0;i<7;i++){
        insert(array[i]);
    }
    i=31;
    struct node* temp=search(i);

    if(temp!=NULL){
        printf("%d  element found\n", temp->data);
    }
    else{
        printf("Element not found \n");
    }

//    printf("\nPreorder traversal: ");
//    pre_order_traversal(root);
//
//    printf("\nInorder traversal: ");
//    In_order_traversal(root);
//
//    printf("\nPostorder traversal: ");
//    post_order_traversal(root);

    return 0;
}
