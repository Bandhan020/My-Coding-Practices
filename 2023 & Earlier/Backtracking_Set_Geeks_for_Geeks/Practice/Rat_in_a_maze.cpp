#include <bits/stdc++.h>
using namespace std;
stack<char>str;

bool is_valid(int x,int y,int mat[][5]){
    if(x>=0 && x<5 && y>=0 && y<5 && mat[x][y]==1){
        return true;
    }
    if(y>x && y==x+1)
    return false;
}

bool solve_maze(int x,int y,int mat[][5]){
    if(x==4 && y==4 && mat[4][4]==1){
        return true;
    }
    if(is_valid(x,y,mat)){

        if(solve_maze(x,y+1,mat)){
           return true;
        }
        if(solve_maze(x+1,y,mat)){
            return true;
        }
         if(solve_maze(x-1,y,mat)){
           return true;
        }
        if(solve_maze(x,y-1,mat)){
            return true;
        }
        return false;
    }
}

int main()
{
     int maze[5][5] = { { 1, 0, 0, 0, 0 },
                                    { 1, 1, 1, 1, 1 },
                                    { 1, 1, 1, 0, 1 },
                                    { 0, 0, 0, 0, 1 },
                                    { 0, 0, 0, 0, 1 } };
    if(solve_maze(2,2,maze)){
        cout<<"reachable"<<endl;
    }
    else{
        cout<<"Not reachable"<<endl;
    }

     return 0;
}
