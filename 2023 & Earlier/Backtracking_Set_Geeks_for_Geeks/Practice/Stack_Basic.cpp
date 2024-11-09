#include <bits/stdc++.h>
using namespace std;
#define MAX 150
#define row 5

int top=0,bottom=0;
int mat[row][row]={ { 1, 0, 0, 0, 0 },
                                            { 1, 1, 1, 1, 1 },
                                            { 1, 1, 1, 0, 1 },
                                            { 0, 0, 0, 0, 1 },
                                            {0, 0, 0, 0, 1 } };

int visited[row][row];

struct node{
    int x,y;
};

node s[20];

node make_node(int x,int y){
    node temp;
    temp.x=x;
    temp.y=y;
    return temp;
}


bool is_s_empty()
{
    if(top==bottom){
        return true;
    }
    return false;
}

bool is_s_full(){
    if(top==MAX){
        return true;
    }
    return false;
}

void push_s(int x,int y){
    if(!is_s_full()){
        s[top++]=make_node(x,y);
    }
    else{
        cout<<"Stack is full"<<endl;
    }
}

node pop_s(){
    if(!is_s_empty()){
        node temp=s[top--];
        return temp;
    }
    else{
        cout<<"Stack is empty"<<endl;
    }
}

void show_s(){
    if(!is_s_empty()){
        for(int i=top-1;i>=bottom;i--){
        cout<<s[i].x<<" "<<s[i].y<<endl;
    }
     cout<<endl;
    }
    else{
        cout<<"Stack is empty"<<endl;
    }
}

bool is_valid(int x,int y){
    if(x>=0 && x<row && y>=0 && y<row && mat[x][y]==1 && visited[x][y]==0){
        return true;
    }
    return false;
}

bool solvemaze(int x,int y){
    if(x==row-1 && y==row-1 && mat[x][y]==1){
        visited[x][y]=1;
        return true;
    }
    if(is_valid(x,y)){
        visited[x][y]=1;
        push_s(x,y);
        while(!is_s_empty()){
            node temp=pop_s();
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
        for(int i=0;i<row;i++){
            for(int j=0;j<row;j++){
                cout<<visited[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"Not possible"<<endl;
    }
    return 0;
}
