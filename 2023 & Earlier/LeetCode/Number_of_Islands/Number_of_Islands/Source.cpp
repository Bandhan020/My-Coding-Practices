#include <iostream>
#include <queue>
#include <vector>
using namespace std;


int numIslands(vector<vector<char>>& grid) {
	queue<pair<int, int>>q;
	int m = grid.size();
	int n = grid[0].size();
	vector<vector<int>>visited(m, vector<int>(n, 0));
	vector<pair<int, int>>nodes(m*n);
	int nc = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (grid[i][j] == '1') {
				nodes[nc++] = { i,j };
			}
		}
	}

	int i_count = 0;
	for (int i = 0; i < nc; i++) {
		int x = nodes[i].first;
		int y = nodes[i].second;
		
		if (visited[x][y]==0) {
			cout << x << " " << y << endl;
			q.push({ x,y });
			visited[x][y] = 1;
			while (!q.empty()) {
				pair<int, int>src = q.front();
				q.pop();
				int x1 = src.first;
				int y1 = src.second;
				if (x1 + 1 < m && y1 < n && x1 + 1 >= 0 && y1 >= 0) {
					if (visited[x1 + 1][y1] == 0 && grid[x1 + 1][y1] == 1) {
						visited[x1 + 1][y1] = 1;
						q.push({ x1 + 1,y1 });
					}
				}

				if (x1 - 1 < m && y1 < n && x1 - 1 >= 0 && y1 >= 0) {
					if (visited[x1 - 1][y1] == 0 && grid[x1 - 1][y1] == 1) {
						visited[x1 - 1][y1] = 1;
						q.push({ x1 - 1,y1 });
					}
				}

				if (x1 < m && y1+1 < n && x1 >= 0 && y1+1 >= 0) {
					if (visited[x1][y1+1] == 0 && grid[x1][y1+1] == 1) {
						visited[x1][y1+1] = 1;
						q.push({ x1,y1+1 });
					}
				}

				if (x1 < m && y1 - 1 < n && x1 >= 0 && y1 - 1 >= 0) {
					if (visited[x1][y1 - 1] == 0 && grid[x1][y1 - 1] == 1) {
						visited[x1][y1 - 1] = 1;
						q.push({ x1,y1 - 1 });
					}
				}

			}
		}

		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				cout << visited[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;

	}

	
	return i_count;
}



int main()
{
	vector<vector<char>>grid
	{
		{'1','1','1','1','0'},
		{'1','1','0','1','0'},
		{'1','1','0','0','0'},
		{'0','0','0','0','0'}
	};


	cout << numIslands(grid)<<endl;
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
}