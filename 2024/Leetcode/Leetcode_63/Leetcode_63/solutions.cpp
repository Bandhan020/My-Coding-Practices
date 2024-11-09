#include <iostream>
#include <vector>
using namespace std;

void findUniquePaths(int x, int y, vector<vector<int>>& obstacleGrid,int m, int n, int &paths) {
	if (x >= m || x < 0 || y >=n  || y < 0 || obstacleGrid[x][y] == 1 || obstacleGrid[x][y] == -1) {
		return;
	}
	if (x == m - 1 && y == n - 1) {
		paths++;
		return;
	}

	obstacleGrid[x][y] = -1;

	findUniquePaths(x + 1, y, obstacleGrid,m, n, paths);
	
	findUniquePaths(x , y+1, obstacleGrid,m, n, paths);

	obstacleGrid[x][y] = 0;
}

int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
	int m = obstacleGrid.size();
	int n = obstacleGrid[0].size();
	int paths = 0;
	//vector<vector<int>>visited(m, vector<int>(n, 0));
	findUniquePaths(0, 0, obstacleGrid, m, n, paths);
	return paths;
}

int main() {
	vector<vector<int>>obstacleGrid = {
		//{0,0,0},{0,1,0},{0,0,0}
		{0, 1},{0, 0} 
	};
	int result = uniquePathsWithObstacles(obstacleGrid);
	cout << result << endl;
	return 0;
}