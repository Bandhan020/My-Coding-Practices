#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
    int m=maze.size();
    int n=maze[0].size();
    int dis=0;
    int found=-1;

    pair<pair<int,int>,int>point,source;
    point.first.first=entrance[0];
    point.first.second=entrance[1];
    point.second=dis;

    //cout<<point.first.first<<" "<<point.first.second<<"  "<<point.second<<endl;
    queue<pair<pair<int,int>,int>>q;
    q.push(point);

    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};
    maze[point.first.first][point.first.second]='+';

    while(!q.empty()){
        source=q.front();
        q.pop();
        //cout<<source.first.first<<" "<<source.first.second<<"  "<<source.second<<endl;

        for(int i=0;i<4;i++){
            int x=source.first.first+dx[i];
            int y=source.first.second+dy[i];
            int dis=source.second;

            if(x>=0 && x<m && y>=0 && y<n && maze[x][y]=='.'){
                if(x==m-1 || y==n-1 || x*y==0){
                    dis++;
                    maze[x][y]='+';
                    found=dis;
                    break;
                }
                q.push({{x,y},dis+1});
                maze[x][y]='+';
            }
        }

        if(found!=-1){
            break;
        }
    }

    return found;
}



int main()
{
    vector<vector<char>>maze{
        //{'+','+','.','+'},{'.','.','.','+'},{'+','+','+','.'}
        {'+','+','+'},{'.','.','.'},{'+','+','+'}
        //{'.','+'}

    };
    vector<int>entrance{1,0};
    cout<<nearestExit(maze,entrance)<<endl;
    return 0;
}

