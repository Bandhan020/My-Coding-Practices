#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* head;
void insert(int data)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next = head;
    head= temp;
}

void print(){
    struct Node* temp=head;
        while(temp!=NULL){
            printf("%d  ", temp->data);
            temp=temp->next;
            }
    printf("\n");}

void delete(int n)
{
    struct Node* temp1=head;
    if(n==1){
        head=temp1->next;
        free(temp1);
        return;
    }
    int i;
    for(i=0;i<n-2;i++){
        temp1=temp1->next;
        struct Node* temp2=temp1->next;
        temp1->next=temp2->next;
        free(temp2);
    }
}
int main()
{
    head=NULL;
    insert(2);
    insert(4);
    insert(6);
    insert(5);
    print();
    int n;
    printf("Enter a position\n");
    scanf("%d", &n);
    delete(n);
    print();
}
