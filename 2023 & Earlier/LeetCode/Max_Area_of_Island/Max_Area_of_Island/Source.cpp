#include <iostream>
#include <queue>
#include <vector>
using namespace std;

queue<pair<int, int>>q;

int bfs(vector<vector<int>>&grid, int i, int j) {
	int m = grid.size();
	int n = grid[0].size();
	grid[i][j] = 0;
	q.push({ i, j });
	int area = 1;


	while (!q.empty()) {
		pair<int, int>s = q.front();
		q.pop();
		int x = s.first;
		int y = s.second;
		if (x + 1 < m && y < n && x + 1 >= 0 && y>=0) {
			if (grid[x + 1][y] == 1) {
				q.push({ x + 1,y });
				grid[x + 1][y] = 0;
				area++;
			}	
		}
		if (x - 1 < m && y < n && x - 1 >= 0 && y>=0) {
			if (grid[x - 1][y] == 1) {
				q.push({ x - 1,y });
				grid[x - 1][y] = 0;
				area++;
			}
		}
		if (x < m && y+1 < n && x >= 0 && y+1>=0) {
			if (grid[x][y+1] == 1) {
				q.push({ x, y+1 });
				grid[x][y+1] = 0;
				area++;
			}
		}

		if (x < m && y - 1 < n && x >= 0 && y - 1 >=0) {
			if (grid[x][y - 1] == 1) {
				q.push({ x, y - 1 });
				grid[x][y - 1] = 0;
				area++;
			}
		}

	}

	return area;
}

int maxAreaOfIsland(vector<vector<int>>& grid) {
	int m = grid.size();
	int n = grid[0].size();
	int mx = 0;
	int k=0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) {
			if (grid[i][j] == 1) {
				int a = bfs(grid, i, j);
				if (a > mx) {
					mx = a;
				}
			}
		}
	}


	return mx;

}

int main()
{
	vector<vector<int>>grid{
	{1},
	{1}
	};

	//cout << grid.size() << " " << grid[0].size() << endl;
	cout << maxAreaOfIsland(grid) << endl;
	/*
	input

	{0,0,1,0,0,0,0,1,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,1,0,0,0},
	{0,1,1,0,1,0,0,0,0,0,0,0,0},
	{0,1,0,0,1,1,0,0,1,0,1,0,0},
	{0,1,0,0,1,1,0,0,1,1,1,0,0},
	{0,0,0,0,0,0,0,0,0,0,1,0,0},
	{0,0,0,0,0,0,0,1,1,1,0,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0}


	{0,0,0,0,0,0,0,0}

	*/

	return 0;
}