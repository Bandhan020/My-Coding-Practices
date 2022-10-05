#include <stdio.h>

#define N 5
int queue[N];
int front = -1;
int rear = -1;

void dequeue(int x){
    if(rear == N-1){
        printf("overflow");
    }
    else if(front == -1 && rear==-1){
        front = rear = 0;
        queue[rear] =x;
    }
    else{
        rear++;
        queue[rear] = x;
    }

}

void dequeue(){
    if(front==-1 && rear == -1){
        printf("Underflow");
    }
    else if(front == rear){
        front=-1;
        rear=-1;
    }
    else{
        printf("%d is dequeued", queue[front]);
        front++;
    }
}

void display()
{
    int i;
    if(front==-1 && rear==-1){
        printf("queue empty");
    }
    else{
        for(i=front;i<rear+1;i++){
            printf("%d", queue[i]);
        }
    }
}


void peek(){
    if(front==-1){
        printf("queue empty");
    }
    else{
        printf("%d", queue[front]);
    }
}

int main(){
    printf("kjkdskkfsdk");
    return 0;
}
