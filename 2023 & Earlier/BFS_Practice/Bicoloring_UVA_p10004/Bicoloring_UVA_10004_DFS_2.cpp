//This code doesn't work

#include<bits/stdc++.h>

#define black 1
#define red 2
using namespace std;

void add(int u,int v,vector<int> *adj)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void dfs(int x,int *color,bool *vis,vector<int> *adj)
{
    if(vis[x]) return;
    vis[x] = true;
    for(int i=0; i<adj[x].size(); i++)
    {
        int u=adj[x][i];
        if(!vis[u])
        {
            if(color[x]==black)
            {
                color[u]=red;
            }
            else
            {
                color[u]=black;
            }
            }
        dfs(u,color,vis,adj);
    }
}

int main()
{
    int n,m,q,u,v,x,y,flag=0;
    while(1)
        {
        cin>>n;
        if(n==0) return 0;
        cin>>m;
        flag=0;
        vector<int> adj[100006];
        bool vis[100006]={0};
        int color[1000]= {0};
        for(int i=0; i<m; i++)
        {
            cin>>u>>v;
            add(u,v,adj);
        }
    for(int i=0; i<n; i++)
      {
      //int i=0;
            if(!vis[i])
            {
                color[i]=black;
                dfs(i,color,vis,adj);
            }
       }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<adj[i].size(); j++)
            {
                if(color[i]==color[adj[i][j]])
                {
                    //printf("%d %d\n%d %d\n",i,adj[i][j],color[i],color[adj[i][j]]);
                    printf("NOT BICOLORABLE.\n");
                    flag=1;
                    break;
                }
            }
            if(flag) break;
        }
        if(!flag)
        printf("BICOLORABLE.\n");
    }
    return 0;
}
