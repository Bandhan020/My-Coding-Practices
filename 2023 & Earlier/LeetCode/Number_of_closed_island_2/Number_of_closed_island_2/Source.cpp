#include <iostream>
#include <vector>
using namespace std;

void dfs(vector<vector<int>>& grid, int i, int j) {
	int m = grid.size();
	int n = grid[0].size();
	if (i<0 || j<0 || i >= m || j>=n || grid[i][j]==1) {
		return;
	}
	grid[i][j] = 1;
	int dx[4] = { 1,-1,0,0 };
	int dy[4] = { 0,0,1,-1 };

	for (int k = 0; k < 4; k++) {
		int x = i + dx[k];
		int y = j + dy[k];
		dfs(grid, x, y);
	}
}


int closedIsland(vector<vector<int>>& grid) {
	int m = grid.size();
	int n = grid[0].size();

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (i*j == 0 || i == m - 1 || j == n - 1) {
				if (grid[i][j] == 0) {
					dfs(grid, i, j);
				}
			}
		}
	}
	dfs(grid, 0, 0);

	int count = 0;

	for (int i = 1; i < m - 1; i++) {
		for (int j = 1; j < n - 1; j++) {
			if (grid[i][j] == 0) {
				dfs(grid, i, j);
				count++;
			}
		}
	}

	return count;
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

	cout << closedIsland(grid) << endl;
	return 0;
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
}