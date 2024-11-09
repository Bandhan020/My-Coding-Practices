#include <iostream>
#include <queue>
#include <vector>
using namespace std;

queue<pair<int, int>>q;

bool bfs(vector<vector<int>>&grid, int i, int j) {
	int m = grid.size();
	int n = grid[0].size();
	q.push({ i, j });

	int dir[4] = { 1,-1,0,0 };
	int dir1[4] = { 0,0,1,-1 };
	int flag = 0;
	grid[i][j] = 1;
	while (!q.empty()) {
		pair<int, int>s = q.front();
		q.pop();
		int x = s.first;
		int y = s.second;
		if (flag != 1) {
			if (x == 0 || y == 0 || x == m - 1 || y == n - 1) {
				flag = 1;
			}
		}
		for (int k = 0; k < 4; k++) {
			int x1 = x + dir[k];
			int y1 = y + dir1[k];

			if (x1 < m && y1 < n && x1 >= 0 && y1 >= 0) {
				if (grid[x1][y1] == 0) {
					grid[x1][y1] = 1;
					q.push({ x1,y1 });
				}
			}
			
		}

	}

	if (flag == 0) {
		return true;
	}
	else {
		return false;
	}
}

int closedIsland(vector<vector<int>>& grid) {
	int m = grid.size();
	int n = grid[0].size();
	int k = 0;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) {
			if (grid[i][j] == 0) {
				if (bfs(grid, i, j)) {
					k++;
				}
			}
		}
	}

	return k;

}

int main()
{
	vector<vector<int>>grid{
		{1,1,1,1,1,1,1},
		{1,0,0,0,0,0,1},
		{1,0,1,1,1,0,1},
		{1,0,1,0,1,0,1},
		{1,0,1,1,1,0,1},
		{1,0,0,0,0,0,1},
		{1,1,1,1,1,1,1}
	};

	//cout << grid.size() << " " << grid[0].size() << endl;
	cout << closedIsland(grid) << endl;
	/*
	input

	{1,1,1,1,1,1,1,0},
	{1,0,0,0,0,1,1,0},
	{1,0,1,0,1,1,1,0},
	{1,0,0,0,0,1,0,1},
	{1,1,1,1,1,1,1,0}

	{0,0,1,0,0},
	{0,1,0,1,0},
	{0,1,1,1,0}


	{1,1,1,1,1,1,1},
    {1,0,0,0,0,0,1},
    {1,0,1,1,1,0,1},
    {1,0,1,0,1,0,1},
    {1,0,1,1,1,0,1},
    {1,0,0,0,0,0,1},
    {1,1,1,1,1,1,1}

	*/

	return 0;
}