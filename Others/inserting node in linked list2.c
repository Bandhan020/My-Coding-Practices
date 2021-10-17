#include <stdio.h>
#include <stdlib.h>

struct Node{
  int data;
  struct Node *next;
};

Node* Insert(Node *head,int x)
{
  struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
  temp->data=x;
  temp->next = head;
  head= temp
  return head;
}

void Print(Node *head)
{
  printf("List is: ");
  while(head != NULL)
  {
    printf("%d  ", head->data);
    head= head->next;
  }
  printf("\n");
  }

int main()
{
  Node *head =NULL;

  int n, i, x;

  printf("How many Numbers?: \n");
  scanf("%d", &n);

  for(i= 0; i<n; i++)
  {
    printf("Enter the number: ");
    scanf("%d",&x);
    head=Insert(head,x);
    Print(head);
  }
  return 0;
}
