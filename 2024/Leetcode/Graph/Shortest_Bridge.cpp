#include <iostream>
#include <vector>
#include <queue>
using namespace std;

queue<pair<int,int>>q;

void dfs(vector<vector<int>>&grid,int i,int j){
    if(i>=0 && j>=0 && i<grid.size()  && j<grid.size() && grid[i][j]==1){
        q.push({i,j});
        grid[i][j]=2;
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
        dfs(grid,i,j+1);
        dfs(grid,i,j-1);
    }
    return;
}

int shortestBridge(vector<vector<int>>& grid) {
    int m=grid.size();
    int f=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==1){
                dfs(grid,i,j);
                f=1;
                break;
            }
        }
        if(f==1){
            break;
        }
    }

    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};

    int r=0;
    while(!q.empty()){
        int l=q.size();
        r++;
        while(l--){
            pair<int,int>s;
            s=q.front();
            q.pop();
            for(int  i=0;i<4;i++){
                int x=s.first+dx[i];
                int y=s.second+dy[i];
                if(x<0 || x>=m || y<0 || y>=m || grid[x][y]==2){
                    continue;
                }
                if(grid[x][y]==1){
                    return r-1;
                }
                grid[x][y]=2;
                q.push({x,y});
                }
            }
        }



    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }

    return r;
}


int main()
{
    vector<vector<int>>grid{
        //{0,1},{1,0}
        //{0,1,0},{0,0,0},{0,0,1}
    {1,1,1,1,1},{1,0,0,0,1},{1,0,1,0,1},{1,0,0,0,1},{1,1,1,1,1}
    };
    cout<<shortestBridge(grid)<<endl;
    return 0;
}
