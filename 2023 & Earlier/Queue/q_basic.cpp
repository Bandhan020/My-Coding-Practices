#include <bits/stdc++.h>
using namespace std;


#define N 5
int Queue[N];
int front = -1;
int rear = -1;

void deQueue(int x){
    if(rear == N-1){
        cout<<"Stack overflow"<<endl;
    }
    else if(front == -1 && rear==-1){
        front = rear = 0;
        Queue[rear] =x;
    }
    else{
        rear++;
        Queue[rear] = x;
    }

}

int main(){
    cout<<"kjjskljskk"<<endl;
    return 0;
}