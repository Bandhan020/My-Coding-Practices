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


int shortestBridge(vector<vector<int>>& grid) {
    int flag=0;
    int n=grid.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]==1){
                dfs(grid,i,j);
                flag=1;
                break;
            }
        }
        if(flag==1){
            break;
        }
    }

    int res=0;
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};

    while(!q.empty()){
        int len=q.size();
        res++;
        while(len--){
            pair<int,int>cur=q.front();
            q.pop();
            for(int i=0;i<4;i++){
                int cur_x= cur.first+dx[i];
                int cur_y=cur.second+dy[i];
                if(cur_x<0 || cur_y<0 || cur_x>=n || cur_y>=n || grid[cur_x][cur_y]==2){
                    continue;
                }
                if(grid[cur_x][cur_y]==1){
                    return res-1;
                }
                grid[cur_x][cur_y]=2;
                q.push({cur_x,cur_y});
            }
        }
    }

    return res;
}

int main()
{
    vector<vector<int>>grid{
        {0,1},{1,0}
    };
    int result=shortestBridge(grid);
    cout<<result<<endl;
    return 0;

}
