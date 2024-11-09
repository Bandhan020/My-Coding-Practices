#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int minimumHP(vector<vector<int>>& dungeon, vector<vector<int>>& dp, int m, int n, int x, int y) {
	if (x >= m || y >= n) {
		return INT_MAX;
	}

	if (x == m - 1 && y == n - 1) {
		if (dungeon[x][y] > 0) {
			dp[x][y] = 1;
		}
		else {
			dp[x][y] = 1 - dungeon[x][y];
		}
		return dp[x][y];
	}

	if (dp[x][y] != -1) {
		return dp[x][y];
	}

	int health = min(minimumHP(dungeon, dp, m, n, x + 1, y), minimumHP(dungeon, dp, m, n, x, y + 1))-dungeon[x][y];
	if (health>0) {
		dp[x][y] = health;
	}
	else {
		dp[x][y] = 1;
	}

	return dp[x][y];
}

int calculateMinimumHP(vector<vector<int>>& dungeon) {
	int m = dungeon.size();
	int n = dungeon[0].size();
	vector<vector<int>>dp(m, vector<int>(n, -1));
	int solution = minimumHP(dungeon, dp, m, n, 0, 0);
	return solution;
}


int main()
{
	vector<vector<int>>dungeon{
		//{-2,-3,3} ,{-5,-10,1},{10,30,-5}
		{0}
	};
	int result = calculateMinimumHP(dungeon);
	cout << result << endl;
	return 0;
}