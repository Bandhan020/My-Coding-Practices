#include <bits/stdc++.h>
using namespace std;
int step=0;
bool is_valid(int x, int y,int row,int column, vector<vector<int>>& grid, vector<vector<int>>& visited){
    if(x>=0 && x<row && y>=0 && y<column && grid[x][y]==0 && visited[x][y]==0){
        return true;
    }
    return false;
}

bool move_grid(int x,int y,int row,int column,vector<vector<int>>& grid, vector<vector<int>>& visited){
    if(x==row-1 && y==column-1 && grid[x][y]==0){
        visited[x][y]=1;
        step++;
        return true;
    }

    if(is_valid(x,y,row,column,grid,visited)){
        step++;
        if(move_grid(x+1,y,row,column,grid,visited)){
            return true;
        }
        step--;
        step++;
        if(move_grid(x,y+1,row,column,grid,visited)){
            return true;
        }
        step--;

        step++;
        if(move_grid(x-1,y,row,column,grid,visited)){
            return true;
        }
        step--;

        step++;
        if(move_grid(x,y-1,row,column,grid,visited)){
            return true;
        }
        step--;
        return false;
    }
}

int main()
{
    int row=3,column=3,i,j,temp;
    vector<vector<int>> grid(row); //{{0,0,0},{1,1,0},{0,0,0},{0,1,1},{0,0,0}};


    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            cin>>temp;
            grid[i].push_back(temp);
        }
    }
    for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[i].size();j++){
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
