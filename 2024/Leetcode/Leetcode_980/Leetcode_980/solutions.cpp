#include <iostream>
#include <vector>
using namespace std;

//int path_count = 0;

void move_grid(int x, int y, vector<vector<int>>& grid, vector<vector<int>>& visited, int& path_count, int total_cell, int visit_count, int m, int n) {
	if (x >= m || y >= n || x < 0 || y < 0 || grid[x][y] == -1 || visited[x][y] == 1) {
		return;
	}

	if (grid[x][y] == 2) {
		if (visit_count == total_cell) {
			path_count++;
		}
		return;
	}

	visited[x][y] = 1;
	visit_count++;

	move_grid(x, y + 1, grid, visited,path_count, total_cell, visit_count, m, n);
	move_grid(x+1, y, grid, visited,path_count, total_cell, visit_count, m, n);
	move_grid(x, y - 1, grid, visited,path_count, total_cell, visit_count, m, n);
	move_grid(x-1, y, grid, visited,path_count, total_cell, visit_count, m, n);

	visited[x][y] = 0;
	visit_count--;
}

int uniquePathsIII(vector<vector<int>>& grid) {
	int m = grid.size();
	int n = grid[0].size();
	int x=0, y=0,block=0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (grid[i][j] == 1) {
				x = i;
				y = j;
			}
			if (grid[i][j] == -1) {
				block++;
			}
		}
	}

	int total_cell = m * n - block;
	vector<vector<int>>visited(m, vector<int>(n, 0));
	int visit_count = 1;
	int path_count = 0;
	move_grid(x, y, grid, visited,path_count,total_cell, visit_count, m, n);
	return path_count;
}



int main()
{
	vector<vector<int>>grid{
		//{1,0,0,0} ,{0,0,0,0},{0,0,2,-1}
		//{1,0,0,0} ,{0,0,0,0},{0,0,0,2}
		//{0,1} ,{2,0}
	};
	int result = uniquePathsIII(grid);
	cout << result << endl;
	return 0;
}




/* Finding all unique paths 
#include <iostream>
#include <vector>

using namespace std;

// Function to count paths using DFS with backtracking
int countPaths(vector<vector<bool>>& visited, int x, int y) {
	int rows = visited.size();
	int cols = visited[0].size();

	// If out of bounds or already visited
	if (x < 0 || y < 0 || x >= rows || y >= cols || visited[x][y]) {
		return 0;
	}

	// If we have reached the bottom-right corner
	if (x == rows - 1 && y == cols - 1) {
		return 1;
	}

	// Mark the cell as visited
	visited[x][y] = true;

	// Count all paths from the current cell
	int paths = countPaths(visited, x + 1, y) +  // Move Down
		countPaths(visited, x - 1, y) +  // Move Up
		countPaths(visited, x, y + 1) +  // Move Right
		countPaths(visited, x, y - 1);   // Move Left

	// Backtrack: unmark the cell as visited
	visited[x][y] = false;

	return paths;
}

// Function to initialize the grid and start counting paths
int numberOfPaths(int gridSize) {
	vector<vector<bool>> visited(gridSize, vector<bool>(gridSize, false));
	return countPaths(visited, 0, 0);
}

int main() {
	int gridSize = 3;
	cout << "Number of paths: " << numberOfPaths(gridSize) << endl;
	return 0;
}

*/



