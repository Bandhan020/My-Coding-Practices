#include <bits/stdc++.h>
using namespace std;
#define n 8


int  mat[n][n];
int dx[n]={2, 1, -1, -2, -2, -1, 1, 2};
int dy[n]={1, 2, 2, 1, -1, -2, -2, -1 };

bool is_valid(int x,int y){
    if(x>=0 && x<n && y>=0 && y<n && mat[x][y]==0){
        return true;
    }
    return false;
}

bool go_knight(int x,int y,int step){
    if(step==n*n){
        return true;
    }
    int new_x,new_y;
    for(int i=0;i<n;i++){
        new_x=x+dx[i];
        new_y=y+dy[i];
        if(is_valid(new_x, new_y)){
            mat[new_x][new_y]=step+1;
            /*if(go_knight(new_x,new_y,step+1)){
                return true;
            }*/
            go_knight(new_x,new_y,step+1);
            mat[new_x][new_y]=0;
        }
    }
    return false;
}

int main()
{
    int i,j;
    mat[0][0]=1;
    if(go_knight(0,0,1)){
         for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    else{
        cout<<"Not possible to traverse all"<<endl;
    }
    return 0;

}
