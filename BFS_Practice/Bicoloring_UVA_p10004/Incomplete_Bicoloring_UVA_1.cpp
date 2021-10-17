#include <bits/stdc++.h>
using namespace std;
int n,arr[200][200],q[200],i,j,visited[200],color[200],taken[200],f,r;

int bfs(int e, int s){
    for(i=0;i<e;i++){
        if(arr[s][i] && !visited[i]){
            q[r++]=i;
        }
    }
    if(f<=r){
        visited[q[f]]=1;
        if(taken[q[f]]==0){
            color[q[f]]=!color[s];
            taken[q[f]]=1;
        }
        else if(color[q[f]]==color[s]){
            cout<<"NOT ";
            return 0;
        }
        bfs(e,q[f++]);
    }
    return 0;
}




int main()
{
    int e,a,b;
    while(scanf("%d",&n) && n!=0){
    cin>>e;
    arr[200][200]={0};
    visited[200]={0};
    q[200]={0};
    f=0,r=-1;
    for(i=0;i<e;i++){
        cin>>a>>b;
        arr[a][b]=1;
        arr[b][a]=1;
    }
    visited[0]=1;
    color[0]=1;
    taken[0]=1;
    bfs(e,0);
    cout<<"BICOLORABLE"<<endl;
    }
    return 0;
}




