#include <iostream>
#include <vector>
using namespace std;

int path = 0;

int countPaths(vector<vector<int>>& grid, int m, int n, int x, int y) {
	if (x >= m || y >= n) {
		return 0;
	}

	if (x == m - 1 && y == n - 1) {
		return 1;
	}

	if (grid[x][y] != 0) {
		return grid[x][y];
	}

	grid[x][y] = countPaths(grid, m, n, x + 1, y) + countPaths(grid, m, n, x, y + 1);

	return grid[x][y];
}


int uniquePaths(int m, int n) {
	vector<vector<int>>grid(m, vector<int>(n, 0));
	int solution = countPaths(grid, m, n,0,0);
	return solution;
}


int main()
{
	int m, n;
	cin >> m >> n;
	int solution = uniquePaths(m, n);
	cout << solution << endl;
	return 0;
}