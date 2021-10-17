#include<bits/stdc++.h>
using namespace std;
int graph[5];

//int main()
//{
//    int x,y,caseno=0;
//    while((scanf("%d", &x)==1))
//    {
//        for(int j=0;j<x;j++){
//                cin>>y;
//        }
//    }
//}

int main()
{
    for(int i=0;i<5;i++){
        cin>>graph[i];
    }
    for(int i=0;i<5;i++){
        cout<<graph[i]<<endl;
    }
    cout<<"***************"<<endl;
        memset(graph,0,5);
     for(int i=0;i<5;i++){
        cout<<graph[i]<<endl;
    }
    return 0;
}
