#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int maxDistance(vector<vector<int>>& grid) {
	int m = grid.size();
	int n = grid[0].size();
	queue<pair<int, int>>q;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (grid[i][j] == 1) {
				q.push({ i,j });
			}
		}
	}

	int distance = 0;
	while (!q.empty()) {
		int l = q.size();
		for (int i = 0; i < l; i++) {
			pair<int, int>s = q.front();
			q.pop();
			int x = s.first;
			int y = s.second;
			if (x + 1 < m && y < n && x + 1 >= 0 && y >= 0) {
				if (grid[x + 1][y] == 0) {
					grid[x + 1][y] = 1;
					q.push({ x + 1,y });
				}
			}
			if (x - 1 < m && y < n && x - 1 >= 0 && y >= 0) {
				if (grid[x - 1][y] == 0) {
					grid[x - 1][y] = 1;
					q.push({ x - 1,y });
				}
			}
			
			if (x < m && y+1 < n && x >= 0 && y+1 >= 0) {
				if (grid[x][y+1] == 0) {
					grid[x][y+1] = 1;
					q.push({ x,y+1 });
				}
			}

			if (x < m && y - 1 < n && x >= 0 && y - 1 >= 0) {
				if (grid[x][y - 1] == 0) {
					grid[x][y - 1] = 1;
					q.push({ x,y - 1 });
				}
			}

		}

		distance++;
	}
	
	if (distance == 1) {
		return -1;
	}
	else {
		return distance - 1;
	}

}


int main()
{
	vector<vector<int>>grid{
		{1,0,1},
		{0,0,0},
		{1,0,1}
	};


	cout << maxDistance(grid) << endl;


	/*input

	{1,0,1},
	{0,0,0},
	{1,0,1}

	{1,0,0},
	{0,0,0},
	{0,0,0}


	*/
}