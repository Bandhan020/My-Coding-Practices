#include <iostream>
#include <stack>
using namespace std;

void insertStack(stack<int>&s,int temp){
    if(s.size()==0 || s.top()>=temp){
        s.push(temp);
        return;
    }
    int temp2=s.top();
    s.pop();
    insertStack(s,temp);
    s.push(temp2);
}

void sortStack(stack<int>&s){
    if(s.size()==1){
        return;
    }
    int temp=s.top();
    s.pop();
    sortStack(s);
    insertStack(s,temp);

}


int main()
{
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(40);
    s.push(50);
    s.push(30);

    sortStack(s);

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

    return 0;
}


