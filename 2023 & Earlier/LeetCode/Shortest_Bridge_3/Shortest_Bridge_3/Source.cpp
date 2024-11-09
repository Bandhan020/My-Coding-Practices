#include <iostream>
#include <vector>
#include <queue>
using namespace std;

queue<pair<int, int>>q;

void dfs(vector<vector<int>>&grid, int i, int j) {
	if (i >= 0 && j >= 0 && i < grid.size() && j < grid.size() && grid[i][j] == 1) {
		grid[i][j] = 2;
		q.push({ i,j });
		dfs(grid, i + 1, j);
		dfs(grid, i - 1, j);
		dfs(grid, i, j + 1);
		dfs(grid, i, j - 1);
	}
	return;
}

int shortestBridge(vector<vector<int>>& grid) {
	int flag = 0;
	for (int i = 0; i < grid.size(); i++) {
		for (int j = 0; j < grid.size(); j++) {
			if (grid[i][j] == 1) {
				dfs(grid, i, j);
				flag = 1;
				break;
			}
		}
		if (flag == 1) {
			break;
		}
	}
	/*for (int i = 0; i < grid.size(); i++) {
		for (int j = 0; j < grid.size(); j++) {
			cout << grid[i][j] << " ";
		}
		cout << endl;
	}*/
	vector<vector<int>>visited(grid.size(), vector<int>(grid.size(), 0));

	int dx[4] = { 1,-1,0,0 };
	int dy[4] = { 0,0,1,-1 };
	int res = 0;
	while (!q.empty()) {
		res++;
		int len = q.size();
		while (len--) {
			pair<int, int>cur = q.front();
			q.pop();
			for (int i = 0; i < 4; i++) {
				int cur_x = cur.first + dx[i];
				int cur_y = cur.second + dy[i];
				if (!(cur_x >= 0 && cur_y >= 0 && cur_x < grid.size() && cur_y < grid.size() && visited[cur_x][cur_y] == 0 && grid[cur_x][cur_y] != 2)) {
					continue;
				}
				if (grid[cur_x][cur_y] == 1) {
					return res - 1;
				}
				visited[cur_x][cur_y] = 1;
				q.push({ cur_x,cur_y });
			}
		}
	}
	return res;
}

int main()
{
	vector<vector<int>>grid = {
		/*{1,1,1,1,1},{1,0,0,0,1},{1,0,1,0,1},{1,0,0,0,1},{1,1,1,1,1}*/
		{0,1,0},{0,0,0},{0,0,1}
		/*{0,1},{1,0}*/
	};
	cout << shortestBridge(grid) << endl;
	return 0;
}