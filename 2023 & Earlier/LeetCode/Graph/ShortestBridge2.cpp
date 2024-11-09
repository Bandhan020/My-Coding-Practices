#include <bits/stdc++.h>
using namespace std;

queue<pair<int,int>>q;

void dfs(vector<vector<int>>&grid, int i, int j){
    if(i>=0 && j>=0 && i<grid.size() && j<grid.size() && grid[i][j]==1){
        grid[i][j]=2;
        q.push({i,j});
        dfs(grid,i+1,j);
        dfs(grid,i,j+1);
        dfs(grid,i-1,j);
        dfs(grid,i,j-1);
    }
    return;
}


int main()
{
     vector<vector<int>>grid{
        {0,1,0},{0,0,0},{0,0,1}
    };
    dfs(grid,0,1);
    for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid.size();j++){
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
