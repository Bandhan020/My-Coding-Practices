#include <bits/stdc++.h>
using namespace std;

int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
    int m=grid.size();
    int n=grid[0].size();
    vector<vector<int>>visited(m,vector<int>(n,0));

    pair<int,int>des={m-1,n-1};
    pair<pair<int,int>,int>source={{0,0},1};

    queue<pair<pair<int,int>,int>>q;
    q.push(source);

    int dx[8]={1,-1,0,0,-1,-1,1,1};
    int dy[8]={0,0,1,-1,-1,1,-1,1};

    int dis;
    if(grid[0][0]==1){
        return -1;
    }
    else if(grid.size()==1 && grid[0].size()==1 && grid[0][0]==0){
        return 1;
    }
    else{
         while(!q.empty()){
        pair<pair<int,int>,int>s=q.front();
        q.pop();
        for(int i=0;i<8;i++){
            int x=s.first.first+dx[i];
            int y=s.first.second+dy[i];
            dis=s.second;

            if(x<0 || y<0 || x>=m || y>=n || visited[x][y]!=0 || grid[x][y]==1){
                continue;
            }
            if(x==des.first && y==des.second && grid[x][y]!=1){
                return dis+1;
            }
            visited[x][y]=1;
            q.push({{x,y},dis+1});
        }
    }
    }


    return -1;
}


int main()
{
    vector<vector<int>>mat{
        {0,0,0},{1,1,0},{1,1,0}
        //{0,1},{1,0}
        //{1,0,0},{1,1,0},{1,1,0}
    };
    int s=shortestPathBinaryMatrix(mat);
    cout<<s<<endl;
    return 0;
}
