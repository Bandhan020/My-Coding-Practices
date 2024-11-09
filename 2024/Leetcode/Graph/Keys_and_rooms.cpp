#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int bfs(vector<vector<int>>&room,vector<int>&visited){
    queue<int>q;
    int cnt=0;
    q.push(0);
    visited[0]=1;
    cnt++;
    while(!q.empty()){
        int s=q.front();
        q.pop();
        for(auto it:room[s]){
            if(!visited[it]){
                q.push(it);
                visited[it]=1;
                cnt++;
            }
        }
    }
    return cnt;
}


 bool canVisitAllRooms(vector<vector<int>>& rooms) {
    int m=rooms.size();
    vector<int>visited(m,0);
    int ans=bfs(rooms,visited);
    if(m!=ans){
        return false;
    }else{
        return true;
    }

}


int main()
{
    vector<vector<int>>rooms{
    //{1},{2},{3},{}
    {1,3},{3,0,1},{2},{0}
    };
    cout<<canVisitAllRooms(rooms);
    return 0;
}
