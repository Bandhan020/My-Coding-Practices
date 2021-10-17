#include<bits/stdc++.h>
using namespace std;
int graph[21][21]={0};

int main()
{
    int x,y,caseno=0;
    while((scanf("%d", &x)==1)){
        for(int j=0;j<x;j++){
                cin>>y;
                graph[1][y]=1;
                graph[y][1]=1;
        }
        for(int i=2;i<=19;i++){
            cin>>x;
            for(int j=0;j<x;j++){
                cin>>y;
                graph[i][y]=1;
                graph[y][i]=1;
            }
        }
    }
    int n, src, dest;
    cin>>n;
    cout<<"Test SET "<<++caseno<<endl;
    for(int i=0;i<n;i++){
        cin>>src>>dest;
        bfs(src,dest);
    }
    for(int i=0;i<21;i++){
            for(int j=0;j<21;j++){
                graph[i][j]=0;
            }
       }
    return 0;
}
