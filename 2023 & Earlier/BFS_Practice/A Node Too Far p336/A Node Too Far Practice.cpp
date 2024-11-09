#include<bits/stdc++.h>

using namespace std;
map< int, int > visited;
map< int,vector< int > >N;

void bfs(int source)
{
    int i,u,v;
    queue< int >q;
    q.push(source);
    visited[source] = 0;
    while(!q.empty())
    {
        u = q.front();
        for(i=0; i<N[u].size(); i++)
        {
           v = N[u][i];

           if(!visited.count(v))
           {
               visited[v] = visited[u] + 1;
               q.push(v);
           }
        }
        q.pop();
    }
}



int main()
{
    int n,i, cases=0;
    while(scanf("%d",&n)==1 && n)
    {
        N.clear();
        for(i=0; i<n; i++)
        {
            int x, y;
            scanf("%d %d", &x, &y);
            N[x].push_back(y);
            N[y].push_back(x);
        }
        int ttl, source;
        while(scanf("%d %d", &source, &ttl)==2 && source && ttl)
        {
            //if(source==0 && ttl==0) break;
            map< int, int>::iterator it;
            visited.clear();
            bfs(source);
            int count=0;
            for(it=visited.begin(); it!=visited.end();++it)
            {
                //cout<<(*it).first<<' '<<(*it).second<<endl;
                if((*it).second>ttl){
                    ++count;
                }
            }
            //cout<<G.size()<<' '<<visited.size()<<endl;
            count = count + N.size()-visited.size();
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",++cases,count, source, ttl);
        }
    }
    return 0;
}
