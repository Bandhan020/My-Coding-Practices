#include <bits/stdc++.h>
using namespace std;
#define MAX 5

int mat[MAX][MAX]={ { 1, 0, 0, 0, 0 },
                                            { 1, 1, 1, 1, 1 },
                                            { 1, 1, 1, 0, 1 },
                                            { 0, 0, 0, 0, 1 },
                                            {0, 0, 0, 0, 1 } };

int visited[MAX][MAX];


struct node{
    int x,y;
};

node make_node(int x,int y){
    node temp;
    temp.x=x;
    temp.y=y;
    return temp;
}

int r=0,f=0;
node q[20];

bool is_q_empty(){
    if(r==f){
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

void push_q(int x,int y){
    if(!is_q_full()){
        q[r++]=make_node(x,y);
    }
    else{
        cout<<"Queue is full"<<endl;
    }
}

node pop_q(){
    if(!is_q_empty()){
        node temp;
        temp=q[f];
        for(int i=f;i<r-1;i++){
            q[i]=q[i+1];
       }
       r--;
       return temp;
    }
    else{
        cout<<"Queue is already empty"<<endl;
    }
}

void show_q(){
    if(!is_q_empty()){
        for(int i=f;i<r;i++){
            cout<<q[i].x<<" "<<q[i].y<<endl;
        }
    }
    else{
        cout<<"Queue is empty"<<endl;
    }
}



bool is_valid(int x,int y){
    if(x>=0 && y>=0 && x<MAX && y<MAX && mat[x][y]==1 && visited[x][y]==0){
        return true;
    }
    return false;
}

bool solvemaze(int x,int y){
    if(x==MAX-1 && y==MAX-1 && mat[x][y]==1){
        visited[x][y]=1;
        return true;
    }

    if(is_valid(x,y)){
        node temp;
        push_q(x,y);
        visited[x][y]=1;
        while(!is_q_empty()){
            temp=pop_q();
            if(solvemaze(temp.x+1,temp.y)){
                return true;
            }
            if(solvemaze(temp.x,temp.y+1)){
                return true;
            }
            if(solvemaze(temp.x-1,temp.y)){
                return true;
            }
            if(solvemaze(temp.x,temp.y-1)){
                return true;
            }
        }
        visited[x][y]=0;
        return false;
    }
}

int main()
{
    if(solvemaze(0,0)){
        cout<<"Possible"<<endl;
    }
    else{
        cout<<"Not Possible"<<endl;
    }

    for(int i=0;i<MAX;i++){
        for(int j=0;j<MAX;j++){
            cout<<visited[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;


}
