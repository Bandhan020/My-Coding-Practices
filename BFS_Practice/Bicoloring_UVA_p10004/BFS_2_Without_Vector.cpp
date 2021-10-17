#include <bits/stdc++.h>
using namespace std;
int arr[10000][10000],q[10000],visited[100000],color[100000],f,r;

void bfs(int src){
    q[++r]=src;
    visited[src]=1;
    color[src]=1;
    while(f<=r){
        int u=q[f];
        for(int i=0;i<200;i++){
            if(arr[u][i]==1)
            {
                int v=i;
                if(!visited[v]){
                    color[v]=color[u]*(-1);
                    visited[v]=1;
                    q[++r]=v;
                }
                else if(color[v]==color[u]){
                    cout<<"NOT BICOLORABLE"<<endl;
                    return;
                }
            }
        }
    }

    cout<<"BICOLORABLE"<<endl;
}


int main()
{
    int vertex, edge, x, y, src;
    while(cin>>vertex){
        if(vertex==0){
            break;
        }
        cin>>edge;
        arr[10000][10000]={0};
        for(int i=0;i<edge;i++){
            cin>>x>>y;
            arr[x][y]=1;
            arr[y][x]=1;
            if(i==0){
                src=x;
            }
        }
        q[10000]={0};
        visited[100000]={0};
        color[100000]={0};
        f=0,r=-1;
        bfs(src);
    }
    return 0;
}
