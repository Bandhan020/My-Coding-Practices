#include <iostream>
#include <vector>
#include <queue>
using namespace std;


int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
	
	int n = grid.size();
	int m = grid[0].size();
	if (grid[0][0] == 1 || grid[n - 1][m - 1] == 1) {
		return -1;
	}
	else if (grid.size() == 1 && grid[0][0]==0) {
		return 1;
	}
	else {
		queue < pair<pair<int, int>, int>>q;
		vector<vector<int>>visited(n, vector<int>(m, 0));
		q.push({ {0,0},1 });
		visited[0][0] = 1;

		int dx[8] = { 1,-1,0,0,-1,-1,1,1 };
		int dy[8] = { 0,0,1,-1,-1,1,-1,1 };

		while (!q.empty()) {
			pair<pair<int, int>, int>s = q.front();
			q.pop();

			for (int i = 0; i < 8; i++) {
				int x = s.first.first + dx[i];
				int y = s.first.second + dy[i];
				int dis = s.second;

				if (x < 0 || y < 0 || x >= n || y >= m || visited[x][y] == 1 || grid[x][y] == 1) {
					continue;
				}

				if (x == n - 1 && y == m - 1 && grid[x][y] == 0) {
					return dis + 1;
				}
				visited[x][y] = 1;
				q.push({ {x,y},dis + 1 });
			}

		}
		return -1;
	}
}


int main()
{
	vector<vector<int>>grid = {
		//{0,0,0} ,{1,1,0},{1,1,0}
		//{0,1} ,{1,0}
		{1,0,0} ,{1,1,0}, {1, 1, 0}
	};

	int result=shortestPathBinaryMatrix(grid);
	cout << result << endl;
	return 0;
}