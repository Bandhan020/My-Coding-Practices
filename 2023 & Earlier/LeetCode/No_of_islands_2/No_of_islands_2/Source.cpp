#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void bfs(vector<vector<char>>&grid, int i, int j) {
	grid[i][j] = '0';
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
				bfs(grid, i, j);
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