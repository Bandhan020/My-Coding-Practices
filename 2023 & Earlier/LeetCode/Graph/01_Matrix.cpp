#include <bits/stdc++.h>
using namespace std;


vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
    int m=mat.size();
    int n=mat[0].size();
    queue<pair<int,int>>q;
    vector<vector<int>>mat2(m,vector<int>(n,-1));

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]==0){
                q.push({i,j});
                mat2[i][j]=0;
            }
        }
    }

    int res=0;
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};
    while(!q.empty()){
        int len=q.size();
        res++;
        while(len--){
            pair<int,int>s=q.front();
            q.pop();
            for(int i=0;i<4;i++){
                int cur_x=s.first+dx[i];
                int cur_y=s.second+dy[i];
                if(cur_x<0 || cur_y<0 || cur_x>=m || cur_y>=n || mat2[cur_x][cur_y]!=-1){
                    continue;
                }
                if(mat[cur_x][cur_y]==1 && mat2[cur_x][cur_y]==-1){
                    mat2[cur_x][cur_y]=res;
                    q.push({cur_x,cur_y});
                }
            }
        }
    }
    return mat2;
}


int main()
{
    vector<vector<int>>mat{
        //{0,0,0},{0,1,0},{0,0,0}
        {0,0,0},{0,1,0},{1,1,1}
    };
    vector<vector<int>>mat2;
    mat2=updateMatrix(mat);
    for(int i=0;i<mat2.size();i++){
        for(int j=0;j<mat2[0].size();j++){
            cout<<mat2[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
