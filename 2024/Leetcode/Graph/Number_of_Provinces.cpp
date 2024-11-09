#include <iostream>
#include <queue>
#include <vector>
using namespace std;


void bfs(vector<vector<int>>&adj,vector<int>&visited,int source){
    queue<int>q;
    q.push(source);
    visited[source]=1;
    while(!q.empty()){
        int s=q.front();
        q.pop();
        for(auto it:adj[s]){
                if(visited[it]!=1){
                    q.push(it);
                    visited[it]=1;
                }
        }
    }
}

int findCircleNum(vector<vector<int>>& isConnected) {
    int m=isConnected.size();
    int n=isConnected[0].size();
    vector<vector<int>>adj(m);

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        {
            if(isConnected[i][j]==1){
                adj[i].push_back(j);
            }
        }
    }

    vector<int>visited(m,0);
    int ans=0;
    for(int i=0;i<m;i++){
        if(adj[i].size()!=0 && !visited[i]){
            bfs(adj,visited,i);
            ans++;
        }
    }

    return ans;

}



int main()
{
    vector<vector<int>>isConnected{
        {1,0,0},{0,1,0},{0,0,1}
        //{1,1,0},{1,1,0},{0,0,1}
    };
    int ans=findCircleNum(isConnected);
    cout<<ans<<endl;
    return 0;
}
