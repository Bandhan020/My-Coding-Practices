#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int numIslands(vector<vector<char>>& grid) {
	int m = grid.size();
	int n = grid[0].size();
	int n_count = 0;
	int i_count = 0;
	queue<pair<int, int>>q;
	vector<pair<int, int>>nodes(m*n);
	vector<vector<int>>vis(m, vector<int>(n, 0));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) {
			if (grid[i][j] == '1') {
				nodes[n_count++] = { i,j };
			}
		}
	}


	for (int i = 0; i < n_count; i++) {
		if (vis[nodes[i].first][nodes[i].second] == 0) {
			pair<int, int>s = { nodes[i].first,nodes[i].second };
			vis[s.first][s.second] = 1;
			q.push(s);

			while (!q.empty()) {
				pair<int, int>source = q.front();
				int x=source.first;
				int y=source.second;
				q.pop();

				if (x + 1 >= 0 && y >= 0 && x + 1 < m && y < n) {
					if (vis[x+1][y] == 0 && grid[x+1][y] == '1') {
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

				if (x >= 0 && y+1 >= 0 && x < m && y+1 < n) {
					if (vis[x][y+1] == 0 && grid[x][y+1] == '1') {
						q.push({ x,y+1 });
						vis[x][y+1] = 1;
					}
				}

				if (x >= 0 && y - 1 >= 0 && x < m && y - 1 < n) {
					if (vis[x][y - 1] == 0 && grid[x][y - 1] == '1') {
						q.push({ x,y - 1 });
						vis[x][y - 1] = 1;
					}
				}

				if (q.empty()) {
					i_count++;
				}

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