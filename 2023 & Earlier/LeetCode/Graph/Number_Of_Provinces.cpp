#include <bits/stdc++.h>
using namespace std;


void bfs(vector<vector<int>>&adj,vector<int>&visited,int i){

    queue<int>q;
    q.push(i);
    visited[i]=1;
    int s1;
    while(!q.empty()){
        s1=q.front();
        q.pop();
        for(auto it:adj[s1]){
            if(visited[it]!=1){
                visited[it]=1;
                q.push(it);
            }
        }
    }




    //dfs part
//    stack<int>s;
//    s.push(i);
//    visited[i]=1;
//    int s1;
//    while(!s.empty()){
//        s1=s.top();
//        s.pop();
//        for(auto it:adj[s1]){
//            if(!visited[it]){
//                s.push(it);
//                visited[it]=1;
//            }
//        }
//    }


}

int findCircleNum(vector<vector<int>>& isConnected) {
    int n=isConnected.size();
    vector<vector<int>>adj(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(isConnected[i][j]==1){
                adj[i].push_back(j);
            }
        }
    }

    vector<int>visited(n,0);

    int c=0;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            bfs(adj,visited,i);
            c++;
        }
    }
    return c;
}


int main()
{

    vector<vector<int>>isConnected{
        //{1,1,0},{1,1,0},{0,0,1}
        {1,0,0},{0,1,0},{0,0,1}
    };
    int solution=findCircleNum(isConnected);
    cout<<solution<<endl;
    return 0;
}
