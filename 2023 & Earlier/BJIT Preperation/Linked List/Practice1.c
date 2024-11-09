#include <stdio.h>

struct node{
    int data;
    struct node *next;
};


void display(struct node *head){
    struct node *temp=head;
    printf("List elements are: ");
    while(temp!=NULL){
        printf("%d--->",temp->data);
        temp=temp->next;
    }
}

void insertAtFront(struct node** head,int value){
    struct node *temp=*head;
    struct node *newNode;
    newNode=malloc(sizeof(struct node));
    newNode->data=value;
    newNode->next=temp;
    temp=newNode;
    *head=temp;
}

void deleteFromFront(struct node** headRef){
//    struct node* temp =  *headRef;
    struct node* head =  *headRef;
    head = head->next;
//    free(temp);
    *headRef = head;
}


int main()
{
    struct node *head;
    struct node *one;
    struct node *two;
    struct node *three;
    struct node *four;
    one= malloc(sizeof(struct node));
    two= malloc(sizeof(struct node));
    three= malloc(sizeof(struct node));
    four= malloc(sizeof(struct node));

    one->data=1;
    two->data=2;
    three->data=3;
    four->data=4;

    one->next=two;
    two->next=three;
    three->next=four;
    four->next=NULL;

    head=one;
    display(head);
    printf("/n /n");

    insertAtFront(&head,5);
    display(head);
    printf("/n /n");

    deleteFromFront(&head);
    display(head);
    printf("/n /n");


}
