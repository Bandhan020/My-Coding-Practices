#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
	int n = maze.size();
	int m = maze[0].size();
	pair<pair<int, int>, int>t = { {entrance[0],entrance[1]},0 };
	maze[entrance[0]][entrance[1]] = '+';
	queue < pair<pair<int, int>, int>>q;
	q.push(t);

	int dx[4] = { 1,-1,0,0 };
	int dy[4] = { 0,0,1,-1 };

	while (!q.empty()) {
		pair<pair<int, int>, int>s = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			int x = s.first.first + dx[i];
			int y = s.first.second + dy[i];
			int dis = s.second;

			if (x >= n || x < 0 || y >= m || y < 0) {
				continue;
			}

			if (maze[x][y] == '.') {
				if (x * y == 0 || x == n - 1 || y == m - 1) {
					return dis + 1;
				}
				else{
					q.push({ {x,y},dis + 1 });
					maze[x][y] = '+';
				}
			}
		}
	}
	return -1;
}


int main()
{
	vector<vector<char>>maze = { 
		//{'+', '+', '.', '+'}, {'.', '.', '.', '+'},{'+','+','+','.'} 
		//{'+','+','+'} ,{'.','.','.'},{'+','+','+'}
		{'.','+'}
		};
		
	vector<int>entrance = /*{1, 2} / { 1,0 } */{ 0,0 };

	int result = nearestExit(maze, entrance);

	cout << result << endl;
	return 0;
}