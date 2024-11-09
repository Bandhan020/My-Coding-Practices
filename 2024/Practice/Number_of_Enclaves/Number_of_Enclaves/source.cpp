#include <iostream>
#include <vector>
using namespace std;

void dfs(vector<vector<int>>& grid, int i, int j,int &c) {
	if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == 0) {
		return;
	}
	grid[i][j] = 0;
	c++;
	dfs(grid, i + 1, j,c);
	dfs(grid, i - 1, j,c);
	dfs(grid, i, j + 1, c);
	dfs(grid, i, j - 1, c);
	return;
}

int numEnclaves(vector<vector<int>>& grid) {
	int n = grid.size();
	int m = grid[0].size();

	int c = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i * j == 0 || i == n - 1 || j == m - 1) {
				if (grid[i][j] == 1) {
					dfs(grid, i, j,c);
				}
			}
		}
	}


	int res=0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (grid[i][j] == 1) {
				dfs(grid, i, j, res);
			}
		}
	}

	return res;

}

int main()
{
	vector<vector<int>>grid{
		{0,1,1,0} ,{0,0,1,0},{0,0,1,0},{0,0,0,0}
		//{0,0,0,0} ,{1,0,1,0},{0,1,1,0},{0,0,0,0}
	};
	int result = numEnclaves(grid);
	cout << result << endl;
	return 0;
}