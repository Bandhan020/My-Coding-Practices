#include <bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int>>&rooms,vector<int>&visited,int source){
    queue<int>q;
    q.push(source);
    int s1;
    visited[source]=1;
    while(!q.empty()){
        s1=q.front();
        q.pop();
        for(auto it:rooms[s1]){
            if(visited[it]!=1){
                q.push(it);
                visited[it]=1;
            }
        }

    }

}

  bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<int>visited(n,0);
        bfs(rooms,visited,0);
        bool result=true;
        for(int i=0;i<n;i++){
            if(visited[i]!=1){
                result=false;
                break;
            }
        }
        return result;
  }


int main()
{
    vector<vector<int>>rooms{
        {1},{2},{3},{}
    };
    bool sol=canVisitAllRooms(rooms);
    cout<<sol<<endl;
    return 0;
}
