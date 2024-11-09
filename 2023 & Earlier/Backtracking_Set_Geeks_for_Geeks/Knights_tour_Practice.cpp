#include <bits/stdc++.h>
using namespace std;
#define N 8

int mat[N][N];
int row[N]={2, 1, -1, -2, -2, -1, 1, 2 };
int col[N] = {1, 2, 2, 1, -1, -2, -2, -1 };

bool isValid(int r,int c){
    return (r>=0 && c>=0 && r<N && c<N && mat[r][c]==-1);
}

bool KnightTour(int r,int c,int move){
    if(move==N*N){
        return true;
    }
    int move_x,move_y;
    for(int k=0;k<N;k++){
        move_x=r+row[k];
        move_y=c+col[k];
        if(isValid(move_x,move_y)){
            mat[move_x][move_y]=move;
            if(KnightTour(move_x,move_y,move+1)){
                return true;
            }
            mat[move_x][move_y]=-1;
        }
    }
    return false;
}


int main()
{
    memset(mat,-1,sizeof(mat));
    mat[0][0]=1;
    if(KnightTour(0,0,1)){
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){\
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
