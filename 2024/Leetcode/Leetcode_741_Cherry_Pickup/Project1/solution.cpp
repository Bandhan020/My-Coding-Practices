#include <iostream>
#include <vector>
using namespace std;
int m, n, cherry_count=0;
int max_count = 0;


// Backtracking solutionn (TLE )
void backupCherry(vector<vector<int>>& grid, int x, int y) {
	if (x < 0 || y < 0 || grid[x][y] == -1) {
		return;
	}

	if (x == 0 && y == 0) {
		if (cherry_count > max_count) {
			max_count = cherry_count;
		}
		return;
	}

	int cherries= grid[x][y];
	cherry_count += cherries;
	grid[x][y] = 0;
	backupCherry(grid, x - 1, y);
	backupCherry(grid, x, y - 1);
	grid[x][y] = cherries;
	cherry_count -= cherries;
	return;
}

void pickupCherry(vector<vector<int>>& grid,int x,int y) {
	if (x >= m || y >= n || grid[x][y] == -1) {
		return;
	}

	if (x == m - 1 && y == n - 1) {
		backupCherry(grid, x, y);
	}

	int cherries = grid[x][y];
	cherry_count += cherries;
	grid[x][y] = 0;
	pickupCherry(grid, x + 1, y);
	pickupCherry(grid, x, y + 1);
	grid[x][y] = cherries;
	cherry_count -= cherries;
	return;

}

int cherryPickup(vector<vector<int>>& grid) {
	m = grid.size();
	n = grid[0].size();
	int res;
	if (m == 1 && n == 1) {
		if (grid[0][0] == 1) {
			res = 1;
		}
		else {
			res = 0;
		}
	}
	else {
		pickupCherry(grid, 0, 0);
		res = max_count;
	}
	return res;
	
}


int main()
{
	vector<vector<int>>grid{
		{0,1,-1},
		{1,0,-1},
		{1,1,1}
		/*{ 1,1,-1 },
		{1,-1,1},
		{-1,1,1} */
	};
	int solution = cherryPickup(grid);
	cout << solution << endl;
	return 0;
}