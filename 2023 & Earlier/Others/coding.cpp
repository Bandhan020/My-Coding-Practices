#include<bits/stdc++.h>
using namespace std;
#define read() freopen("input.txt", "r", stdin);
#define write() freopen("output.txt", "w", stdout);
#define ll long long int

struct Node
{
	int data;
	Node *link;

};

Node *head=new Node();

void Insert(int x)
{
	Node *temp=new Node();

	temp->data=x;
	temp->link=head;  //

	head=temp;   /// vital point this is. eita na korle cakri thakbe na.

}

void Print()
{
	Node *diff_temp=head;
	while(diff_temp->link!=NULL) {

		  cout<<diff_temp->data<<" ";
		  diff_temp=diff_temp->link;
	    /* code */
	}
	cout<<endl;

}
int main()
{
	#ifdef asiuzzaman
	read(); write();
	#endif

    int i,x,n;
     cin>>n;
    for(int i=0;i<n;i++)
    {
    	cin>>x;

    	Insert(x);
    	Print();
    }



 }
