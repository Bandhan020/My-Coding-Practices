#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
	int m = maze.size();
	int n = maze[0].size();
	pair<pair<int, int>,int>t = { { entrance[0],entrance[1]},0 };
	maze[entrance[0]][entrance[1]] = '+';
	queue<pair<pair<int, int>,int>>q;
	int dx[4] = { 1,-1,0,0 };
	int dy[4] = { 0,0,1,-1 };

	q.push(t);
	while (!q.empty()) {
		pair<pair<int, int>,int>s = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			int x = s.first.first + dx[i];
			int y = s.first.second + dy[i];
			int dis = s.second;
			if (x >= m || y >= n || x < 0 || y < 0) {
				continue;
			}
			if (maze[x][y] == '.') {
				if (x*y == 0 || x == m - 1 || y == n - 1) {
					return dis + 1;
				}
				else {
					maze[x][y] = '+';
					q.push({ {x,y},dis + 1 });
				}
			}
		}
	}
	return -1;
}


int main()
{
	vector<vector<char>>maze{

		{'+','+','.','+'},{'.','.','.','+'},{'+','+','+','.'}

		//{'+','+','+'},{'.','.','.'},{'+','+','+'}
		//{'.','+'}

	};
	vector<int>entrance{
		{1,2}
		//{1,0}
		//{0,0}
	};

	cout << nearestExit(maze,entrance) << endl;
	return 0;
}