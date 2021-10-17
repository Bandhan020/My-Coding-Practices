#include <bits/stdc++.h>
using namespace std;


void runBFS(int q[],int f,int r,int n, int v[][100]){
    int i,j;
    if(f<=r){
            for(j=1;j<=n;j++){
                if(v[q[f]][j]==1){
                    cout<<j<<"->";
                    q[++r]=j;
                }
            }
            runBFS(q,++f,r,n,v);
    }
    else{
        return;
    }
}
int main()
{
    int n,i,j,edge,s,d,f=0,r=0;
    cin>>n>>edge;
    int v[n][100]={0}, q[n]={0};
    q[0]=1;
    for(i=0;i<edge;i++){
        cin>>s>>d;
        v[s][d]=1;
    }
    cout<<"1"<<"->";
    runBFS(q,f,r,n,v);
    return 0;
}
