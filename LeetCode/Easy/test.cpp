#include <bits/stdc++.h>
using namespace std;
#define MAX 100
int stac[MAX];
int top=-1;

bool isEmpty(){
    if(top==-1){
        return true;
    }
    else{
        return false;
    }
}

bool is_full(){
    if (top==MAX){
        return true;
    }
    else{
        return false;
    }
}

void push_stack(int n){
    if(is_full()==true){
        cout<<"Stack is full"<<endl;
    }
    else{
        stac[++top]=n;
    }
}

int pop_stack(int n){
    if(isEmpty()==true){
        cout<<"Stack is empty"<<endl;
    }
    else{
        int n=stac[top--];
        return n;
    }
}

void showAll(){
    for(int i=top;i>=0;i--){
        cout<<stac[i]<<endl;
    }
}

int main()
{
    int n,i,temp;
    cin>>n;
    cout<<"top "<<top<<endl;
    for(i=0;i<n;i++){
        cin>>temp;
        push_stack(temp);
        cout<<stac[top]<<endl;
    }
    cout<<"top "<<top<<endl;
    showAll();
    return 0;

}