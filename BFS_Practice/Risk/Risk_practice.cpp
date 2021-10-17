#include <bits/stdc++.h>
using namespace std;

map <int, int>visited;


int bfs(int source, int destination, map<int, vector<int>>N){
    int i, j,u,v;
    queue<int>q;
    u=source;
    visited[source]=0;
    q.push(source);
    q.pop();
    for(i=0;i<N[i].size();i++){

    }




}
int main()
{
     int i, j, k, test = 0;
    int n;
    while(scanf("%d", &n) == 1 && n) {
        map<int,vector<int>>G;
        for(i = 1; i <= 19; i++) {
            if(i != 1)
                scanf("%d", &n);
            while(n--) {
                scanf("%d", &k);
                G[i].push_back(k);
                G[k].push_back(i);
            }
        }
    }
}
