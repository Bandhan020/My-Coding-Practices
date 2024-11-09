#include <iostream>
#include <queue>
#include <vector>
using namespace std;

queue<pair<int, int>>q;

void bfs(vector<vector<char>>&grid,int x, int y) {
	int m = grid.size();
	int n = grid[0].size();
	grid[x][y] = '0';
	q.push({ x,y });
	while (!q.empty()) {
		pair<int, int>source = q.front();
		int x = source.first;
		int y = source.second;
		q.pop();

		if (x + 1 >= 0 && y >= 0 && x + 1 < m && y < n) {
			if (grid[x + 1][y] == '1') {
				q.push({ x + 1,y });
				grid[x + 1][y] = '0';
			}
		}

		if (x - 1 >= 0 && y >= 0 && x - 1 < m && y < n) {
			if (grid[x - 1][y] == '1') {
				q.push({ x - 1,y });
				grid[x - 1][y] = '0';
			}
		}

		if (x >= 0 && y + 1 >= 0 && x < m && y + 1 < n) {
			if (grid[x][y + 1] == '1') {
				q.push({ x,y + 1 });
				grid[x][y + 1] = '0';
			}
		}

		if (x >= 0 && y - 1 >= 0 && x < m && y - 1 < n) {
			if (grid[x][y - 1] == '1') {
				q.push({ x,y - 1 });
				grid[x][y - 1] = '0';
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
			if (grid[i][j] == '1') {
				i_count++;
				bfs(grid,i, j);
			}
		}
	}

	return i_count;

}

int main()
{
	vector<vector<char>>grid{
	{'1','1','0','0','0'},
	{'1','1','0','0','0'},
	{'0','0','1','0','0'},
	{'0','0','0','1','1'}
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