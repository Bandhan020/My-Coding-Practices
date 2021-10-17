#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* next;
};

struct Node* head=NULL;
 struct Node *insert(struct Node *head,int x)
{
  struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
  temp->data=x;
  temp->next = head;
  head= temp;

  return head;
}
void print(struct Node* head)
{
  struct Node * temp= head;
  printf("List is: ");
  while(temp != NULL)
  {
    printf("%d  ", temp->data);
    temp= temp->next;
  }
  printf("\n");
  }
struct Node *reverse(struct Node* head){
    struct Node* current,*prev, *next;
    current=head;
    prev=NULL;
    while(current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;

    }
    head=prev;
    return head;
}

int main()
{
    struct Node* head=NULL;
    head=insert(head,2);
    head=insert(head,4);
    head=insert(head,6);
    head=insert(head,8);
    print(head);
    head=reverse(head);
    print(head);
    return 0;
}
