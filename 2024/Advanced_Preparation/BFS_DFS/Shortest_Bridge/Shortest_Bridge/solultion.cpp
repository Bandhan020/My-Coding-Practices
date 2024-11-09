#include <iostream>
#include <vector>
#include <queue>
using namespace std;

queue<pair<int, int>>q;

void dfs(vector<vector<int>>& grid, int i, int j, int m) {
	if (i < 0 || i >= m || j < 0 || j >= m || grid[i][j]!=1) {
		return;
	}
	grid[i][j] = 2;
	q.push({ i,j });
	dfs(grid, i + 1, j, m);
	dfs(grid, i, j + 1, m);
	dfs(grid, i - 1, j, m);
	dfs(grid, i, j - 1, m);
	return;
}

int shortest_bridge(vector<vector<int>>& grid) {
	int m = grid.size();
	int f = 0;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			if (grid[i][j] == 1) {
				dfs(grid, i, j, m);
				f = 1;
				break;
			}
		}
		if (f == 1) {
			break;
		}
	}

	int dx[4] = { 1,-1,0,0 };
	int dy[4] = { 0,0,1,-1 };

	int r = 0;
	while (!q.empty()) {
		int l = q.size();
		r++;
		while (l--) {
			pair<int, int>s;
			s = q.front();
			q.pop();

			for (int i = 0; i < 4; i++) {
				int x = s.first + dx[i];
				int y = s.second + dy[i];
				if (x < 0 || x >= m || y < 0 || y >= m || grid[x][y]==2) {
					continue;
				}
				if (grid[x][y] == 1) {
					return r-1;
				}
				grid[x][y] = 2;
				q.push({ x,y });
			}
		}
	}
	return r;
}

int main()
{
	vector<vector<int>>grid{
		{0,1,0} ,{0,0,0},{0,0,1}
	};

	int res = shortest_bridge(grid);
	cout << res << endl;

	return 0;
}