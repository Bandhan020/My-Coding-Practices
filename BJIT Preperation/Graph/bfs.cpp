#include<bits/stdc++.h>
using namespace std;
int N=8,E=8;
bool visit[8];
vector<int>Graph[10];
int cost[10];
int path[8];

void BFS(int x){
    queue<int>Q;
    visit[x]=true;
    Q.push(x);
    cost[x]=0;
    while(!Q.empty()){
        int parent=Q.front();
        Q.pop();
        int child_size=Graph[parent].size();
        for(int i=0;i<child_size;i++){
            int child=Graph[parent][i];
            if(visit[child]==false) {
                Q.push(child);
              cost[child]=cost[parent]+1;
              visit[child]=true;
              path[child]=parent;
            }
        }

    }
}
int main(){

 //vector<int>v;

 for(int i=0;i<E;i++){
    int x,y;
        cin>>x>>y;
        Graph[x].push_back(y);
        Graph[y].push_back(x);

 }
// cout<<Graph[7][0]<<" "<<Graph[7][1]<<endl;
//  for(int k=1;k<=N;k++) {
//  int temp=Graph[k].size();
//  cout<<k<<"->";
//  for(int i=0;i<temp;i++){
//    cout<<Graph[k][i]<<" ";
//    }
//    cout<<endl;
//  }

   BFS(1);
   int source=1,dest=8;
   cout<<cost[dest]<<endl;
   for(int i=dest;;){

        cout<<i<<" ->";
         if(i==source){
             break;
          }
        i=path[i];
   }


}
/*
   1 2
   1 3
   2 7
   7 8
   3 4
   3 5
   4 6
   6 8

  */

