#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int solve(vector<vector<int>> &grid, int k) {
	vector<vector<int>>visited(grid.size(), vector<int>(grid[0].size(), -1));
	queue<vector<int>>q;
	q.push({ 0,0,0,k });
	while (!q.empty()) {
		auto t = q.front();
		int x = t[0], y = t[1];
		q.pop();

		if (x < 0 || y < 0 || x >= grid.size() || y >= grid[0].size()) {
			continue;
		}

		if (x == grid.size() - 1 && y == grid[0].size() - 1) {
			return t[2];
		}
		if (grid[x][y] == 1) {
			if (t[3] > 0) {
				t[3]--;
			}
			else {
				continue;
			}
		}

		if (visited[x][y] != -1 && visited[x][y] >= t[3]) {
			continue;
		}
		visited[x][y] = t[3];

		q.push({ x + 1,y,t[2] + 1,t[3] });
		q.push({ x,y + 1,t[2] + 1,t[3] });
		q.push({ x - 1,y,t[2] + 1,t[3] });
		q.push({ x,y - 1,t[2] + 1,t[3] });
	}

	return -1;
}

int shortestPath(vector<vector<int>> &grid, int k) {
	return solve(grid, k);
}

int main() {
	vector<vector<int>> grid
	{
		{0,0,0},
	{1,1,0},
	{0,0,0},
	{0,1,1},
	{0,0,0}
	};

	int k;
	cin >> k;
	cout << shortestPath(grid, k);
	return 0;
}