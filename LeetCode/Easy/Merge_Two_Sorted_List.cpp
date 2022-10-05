#include <bits/stdc++.h>
using namespace std;

//  struct ListNode {
//      int val;
//      ListNode *next;
//      ListNode() : val(0), next(nullptr) {}
//      ListNode(int x) : val(x), next(nullptr) {}
//      ListNode(int x, ListNode *next) : val(x), next(next) {}
//  };

struct ListNode {
     int val;
     ListNode *next;
};

void insertAtEnd(struct ListNode* head, int value){
    struct ListNode *newNode;
    newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = value;
    newNode->next = NULL;

    struct ListNode *temp = head;
    while(temp->next != NULL){
      temp = temp->next;
    }
    temp->next = newNode;
}

void display(struct ListNode* head)
{
      struct ListNode *temp = head;
      printf("\n\nList elements are - \n");
      while(temp != NULL)
      {
        printf("%d --->",temp->val);
        temp = temp->next;
      }
}

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1) return list2;
        if(!list2) return list1;

        ListNode* head=list1;
        if(list1->val > list2->val){
            head=list2;
            list2=list2->next;
        }else{
            list1=list1->next;
        }

        ListNode* curr=head;
        while(list1 && list2){
            if(list1->val < list2->val){
                curr->next=list1;
                list1=list1->next;
            }else{
                curr->next=list2;
                list2=list2->next;
            }
            curr=curr->next;
        }
        if(list1){
            curr->next=list1;
        }
        else{
            curr->next=list2;
        }
        return head;
    }

int main()
{
    ListNode *head;
    struct ListNode *one=NULL;
    struct ListNode *two=NULL;
    struct ListNode *three=NULL;

    one= (struct ListNode*)malloc(sizeof(struct ListNode));
    two= (struct ListNode*)malloc(sizeof(struct ListNode));
    three=(struct ListNode*)malloc(sizeof(struct ListNode));

    int n1,n2,val1,val2,i;
    cin>>n1>>n2;
    for(i=0;i<n1;i++){
        cin>>val1;
        if(i==0){
            one->val=val1;
            one->next=NULL;
            continue;
        }
        insertAtEnd(one,val1);

    }

    for(i=0;i<n2;i++){
        cin>>val2;
        if(i==0){
            two->val=val2;
            two->next=NULL;
            continue;
        }
        insertAtEnd(two,val2);

    }
    display(one);
    cout<<endl;
    display(two);
    three=mergeTwoLists(one,two);
    display(three);
    return 0;    

}