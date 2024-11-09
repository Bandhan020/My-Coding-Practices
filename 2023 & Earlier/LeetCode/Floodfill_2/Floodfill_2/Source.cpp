#include <iostream>
#include <vector>
#include <stack>
using namespace std;

stack<pair<int, int>>q;

void dfs(vector<vector<char>>&grid, vector<vector<int>>&vis, int x,int y) {
	int m = grid.size();
	int n = grid[0].size();
	vis[x][y] = 1;
	q.push({ x,y });
	while (!q.empty()) {
		pair<int, int>source = q.top();
		int x = source.first;
		int y = source.second;
		q.pop();

		if (x + 1 >= 0 && y >= 0 && x + 1 < m && y < n) {
			if (vis[x + 1][y] == 0 && grid[x + 1][y] == '1') {
				q.push({ x + 1,y });
				vis[x + 1][y] = 1;
			}
		}

		if (x - 1 >= 0 && y >= 0 && x - 1 < m && y < n) {
			if (vis[x - 1][y] == 0 && grid[x - 1][y] == '1') {
				q.push({ x - 1,y });
				vis[x - 1][y] = 1;
			}
		}

		if (x >= 0 && y + 1 >= 0 && x < m && y + 1 < n) {
			if (vis[x][y + 1] == 0 && grid[x][y + 1] == '1') {
				q.push({ x,y + 1 });
				vis[x][y + 1] = 1;
			}
		}

		if (x >= 0 && y - 1 >= 0 && x < m && y - 1 < n) {
			if (vis[x][y - 1] == 0 && grid[x][y - 1] == '1') {
				q.push({ x,y - 1 });
				vis[x][y - 1] = 1;
			}
		}

	}
}


int numIslands(vector<vector<char>>& grid) {
	int m = grid.size();
	int n = grid[0].size();
	int n_count = 0;
	int i_count = 0;

	vector<pair<int, int>>nodes(m*n);
	vector<vector<int>>vis(m, vector<int>(n, 0));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) {
			if (grid[i][j] == '1' && vis[i][j]==0) {
				i_count++;
				dfs(grid,vis,i,j);
			}
		}
	}

	return i_count;

}

int main()
{
	vector<vector<char>>grid{
	{'1','1','1','1','0'},
	{'1','1','0','1','0'},
	{'1','1','0','0','0'},
	{'0','0','0','0','0'}
	};

	cout << numIslands(grid) << endl;
	/*
	input

	{'1','1','1','1','0'},
	{'1','1','0','1','0'},
	{'1','1','0','0','0'},
	{'0','0','0','0','0'}


	{'1','1','0','0','0'},
	{'1','1','0','0','0'},
	{'0','0','1','0','0'},
	{'0','0','0','1','1'}

	*/

	return 0;
}