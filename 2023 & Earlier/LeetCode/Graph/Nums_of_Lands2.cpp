#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<char>>&grid,int i,int j,int m,int n){
    if(i>=0 && j>=0 && i<m && j<n && grid[i][j]=='1'){
        grid[i][j]='2';
        dfs(grid,i+1,j,m,n);
        dfs(grid,i,j+1,m,n);
        dfs(grid,i-1,j,m,n);
        dfs(grid,i,j-1,m,n);
    }
    return;
}


 int numIslands(vector<vector<char>>& grid) {
    int m=grid.size();
    int n=grid[0].size();
    int res=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]=='1'){
                dfs(grid,i,j,m,n);
                res++;
            }
        }
    }
    return res;
}



int main()
{
    vector<vector<char>>grid{
        {'1','1','1','1','0'},
        {'1','1','0','1','0'},
        {'1','1','0','0','0'},
        {'0','0','0','0','0'}
    };

    int result=numIsLands(grid);
    cout<<result<<endl;
    return 0;
}

