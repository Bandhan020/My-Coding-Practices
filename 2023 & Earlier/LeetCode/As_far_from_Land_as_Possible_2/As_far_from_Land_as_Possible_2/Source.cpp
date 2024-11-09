#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxDistance(vector<vector<int>>& grid) {
	//DP Approach
	int n = grid.size();
	int maxd = n + n + 1;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (grid[i][j] == 1) {
				grid[i][j] = 1;
			}
			else {
				grid[i][j] = maxd;
				grid[i][j] = min(grid[i][j], min((i > 0 ? grid[i - 1][j] + 1 : maxd), (j > 0 ? grid[i][j - 1] + 1 : maxd)));
			}
		}
	}

	int ans = INT_MIN;

	for (int i = n-1; i >=0; i--) {
		for (int j = n-1; j >= 0; j--) {
			
				grid[i][j] = min(grid[i][j], min((i < n-1 ? grid[i+1][j] + 1 : maxd), (j <n-1 ? grid[i][j + 1] + 1 : maxd)));
				ans = max(ans, grid[i][j]);
		}
	}

	if (ans==1 || ans >= maxd) {
		return -1;
	}
	else {
		return ans - 1;
	}
}

int main()
{
	vector<vector<int>>grid{
		{1,0,0},{0,0,0},{0,0,0}
	};


	cout << maxDistance(grid) << endl;
	/*
	input
	{1,0,1},{0,0,0},{1,0,1}

	{1,0,0},{0,0,0},{0,0,0}
	*/
}