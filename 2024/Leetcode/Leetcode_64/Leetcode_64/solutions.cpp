#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int m, n;
int dp[201][201];

int pathSum(vector<vector<int>>& grid, int x, int y) {
	if (x >= m || y >= n) {
		return INT_MAX;
	}
	if (x == m - 1 && y == n - 1) {
		return grid[x][y];
	}
	if (dp[x][y] != 0) {
		return dp[x][y];
	}
	dp[x][y] = grid[x][y] + min(pathSum(grid, x + 1, y), pathSum(grid, x, y + 1));
	return dp[x][y];
}

int minPathSum(vector<vector<int>>& grid) {
	m = grid.size();
	n = grid[0].size();
	memset(dp, 0, sizeof(dp));
	int solution = pathSum(grid,0,0);
	return solution;
}


int main()
{
	vector<vector<int>>grid{
		//{1,3,1} ,{1,5,1},{4,2,1}
		{1,2,3} ,{4,5,6}
	};
	int solution = minPathSum(grid);
	cout << solution << endl;
	return 0;
}