#include <bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };


  ListNode* deleteDuplicates(ListNode* head) {
      if(head==NULL||head->next==NULL)            //no node or one node
           return head;
       
       if(head->next->next==NULL&&(head->val==head->next->val))    //two duplicate nodes 
       {
           head->next = NULL;
           return head;
       }
       if(head->next->next==NULL&&(head->val!=head->next->val))    //two non-duplicate nodes 
       {
           return head;
       }
        
        ListNode* curr = head->next;
        ListNode* prev = head;
        
        while(curr!=NULL)
        {
            if(curr->val==prev->val)
            {
                curr = curr->next;
                prev->next = curr;
            }
            else
            {
                curr = curr->next;
                prev = prev->next;
            }
        }
        return head;
    }  


  void printList(struct ListNode* head){
      while(head!=NULL){
          cout<<head->val<<"->";
          head=head->next;
      }
      cout<<endl;
  }


  int main()
  {
      int n,i,j,value;
      cin>>n;
      struct ListNode *head=NULL;
      head=(struct ListNode*)malloc(sizeof(struct ListNode));
      struct ListNode *temp1=NULL;
      temp1=(struct ListNode*)malloc(sizeof(struct ListNode));
      for(i=0;i<n;i++){
          cin>>value;
          if(i==0){
              head->val=value;
              head->next=NULL;
                
              temp1=head;
          }
          else{
              struct ListNode *temp=NULL;
              
              //struct ListNode *temp2=NULL;
              temp=(struct ListNode*)malloc(sizeof(struct ListNode));
              
              temp->val=value;
              temp->next=NULL;
              temp1->next=temp;
              temp1=temp1->next;
          }
      }
      printList(head);
      head=deleteDuplicates(head);
      printList(head);
      return 0;

  }