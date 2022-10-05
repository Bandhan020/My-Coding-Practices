#include <bits/stdc++.h>
#define n 8
using namespace std;


int mat[n][n];
bool valid(int nx,int ny){
    if(nx>=0 && nx<n && ny>=0 && ny<n && mat[nx][ny]==-1){
        return true;
    }
    return false;
}

bool go(int mat[][8],int x,int y,int mv,int dx[],int dy[])
{
    if(mv==n*n){
        return 1;
    }
    for(int k=0;k<n;k++){
        int nx=x+dx[k];
        int ny=y+dy[k];
        if(valid(nx,ny)){
            mat[nx][ny]=mv+1;
            if(go(mat,nx,ny,mv+1,dx,dy)){
                return  true;
            }
            mat[nx][ny]=-1;
        }
    }
    return false;
}

int main()
{
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            mat[i][j]=-1;
        }
    }
    mat[0][0]=1;
    int dx[n]={2, 1, -1, -2, -2, -1, 1, 2};
    int dy[n]={1, 2, 2, 1, -1, -2, -2, -1 };
    if(go(mat,0,0,1,dx,dy))
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<mat[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"Not found"<<endl;
    }
    return 0;
}
