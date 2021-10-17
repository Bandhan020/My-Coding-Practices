#include <iostream>
#include <map>
#include <queue>
#include <vector>
using namespace std;
//int vis[1000];
int N,T,cnt;
map<int,vector<int>> connect;//Store the value of each point and the value of the point connected to it, the value of map.size() is the number of points connected to the point
void initial()
{
    connect.clear();//Clear the map
}
void read()
{
    int k,j;
    for(int i=0;i<N;i++)
    {
        cin>>k>>j;
        connect[k].push_back(j);
        connect[j].push_back(k);
    }
}
void bfs(int n)
{
    map<int,int> vis;//Record the number of steps to this point
    queue<int> node;
    cnt=connect.size();//Record the number of points that cannot be reached, initialized to the number of all points at the beginning
    //cout<<cnt<<endl;
    int m,k;
    vis[n]=0;//The number of steps at the starting point is recorded as 0
    node.push(n);//Add to the queue
    while(!node.empty())//The queue is not empty
    {
        k=node.front();//Remove the first point
        node.pop();
        cnt--;//If it can be reached, cnt minus 1
        if(vis[k]<T)//The number of steps to this point is less than the specified number of steps
        {
            for(int i=0;i<connect[k].size();i++)//Loop search for each point connected to this point
            {
                m=connect[k][i];
                if(vis.count(m)==0)//Not visited
                {
                    vis[m]=vis[k]+1;//The number of steps increases
                    node.push(m);//Join the queue
                }
            }
        }
    }
}
int main()
{
    int n,c=0;
    while(cin>>N&&N)
    {
        initial();
        read();
        while(cin>>n>>T)
        {
            if(n==0&&T==0)
                break;
            c++;
            bfs(n);
            cout<<"Case "<<c<<": "<<cnt<<" nodes not reachable from node "<<n<<" with TTL = "<<T<<"."<<endl;
        }
    }

    return 0;
}
