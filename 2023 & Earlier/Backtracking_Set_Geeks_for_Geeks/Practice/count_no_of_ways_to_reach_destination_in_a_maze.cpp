#include <bits/stdc++.h>
using namespace std;
#define R 4
#define C 4

int main(){
     int maze[R][C] =  {{0,  0, 0, 0},
                                    {0, -1, 0, 0},
                                    {-1, 0, 0, 0},
                                    {0,  0, 0, 0}};

    int i,j;
    for(i=0;i<R;i++){
        if(maze[i][0]==0){
            maze[i][0]=1;
            cout<<"maze ["<<i<<"]"<<endl;
        }else{
            break;
        }
    }

    for(i=1;i<4;i++){
        if(maze[0][i]==0){
            maze[0][i]=1;
        }
        break;
    }

    for(i=1;i<R;i++){
        for(j=1;j<C;j++){
            if(maze[i-1][j]>0){
                maze[i][j]=maze[i][j]+maze[i-1][j];
            }
            if(maze[i][j-1]>0){
                maze[i][j]=maze[i][j]+maze[i][j-1];
            }
        }
    }

    cout<<maze[R-1][C-1]<<endl;
    return 0;
}
