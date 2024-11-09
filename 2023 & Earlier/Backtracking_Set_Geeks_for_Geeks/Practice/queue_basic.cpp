#include <bits/stdc++.h>
using namespace std;
#define MAX 5

int q[10];
int f=0,r=0;

bool is_q_empty(){
    if(f==r){
        return true;
    }
    return false;
}

bool is_q_full(){
    if(r==MAX){
        return true;
    }
    return false;
}

void push_q(int x){
    if(!is_q_full()){
        q[r++]=x;
    }else{
        cout<<"Queue is full"<<endl;
    }
}

void pop_q(){
    if(!is_q_empty()){
        for(int i=0;i<r-1;i++){
            q[i]=q[i+1];
        }
        r--;
    }else{
        cout<<"Queue is empty"<<endl;
        f=0;
        r=0;
    }
}
void display_q(){
    if(!is_q_empty()){
          for(int i=f;i<r;i++){
            cout<<q[i]<<endl;
        }
    }else{
        cout<<"Queue is empty"<<endl;
    }

}


int main()
{
    int i,j;
    push_q(1);
    push_q(2);
    push_q(3);
    push_q(4);
    push_q(5);
    pop_q();

    push_q(6);

    display_q();

    pop_q();
    pop_q();
    pop_q();
    pop_q();
    pop_q();

    display_q();

    pop_q();


    return 0;



}

