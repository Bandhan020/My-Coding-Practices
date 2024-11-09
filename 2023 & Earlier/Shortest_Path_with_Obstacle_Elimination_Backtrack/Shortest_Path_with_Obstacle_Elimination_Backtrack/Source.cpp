#include <iostream>
using namespace std;

int grid[10][10];
int visited[10][10] = { 0 };
int min_dist = INT_MAX;

bool is_safe(int x, int y,int m,int n) {
	if (x >= 0 && x < m && y >= 0 && y < n && visited[x][y]!=-1 && grid[x][y]!=1) {
		return true;
	}
	else {
		return false;
	}
}

int solve(int x,int y,int m,int n,int dist) {

	if (x == m - 1 && y == n - 1) {
		if (dist < min_dist) {
			min_dist = dist;
		}
	}

	if (is_safe(x, y, m, n)) {
		visited[x][y] = -1;
		solve(x + 1, y, m, n, dist + 1);
		solve(x - 1, y, m, n, dist + 1);
		solve(x, y + 1, m, n, dist + 1);
		solve(x, y - 1, m, n, dist + 1);
		visited[x][y] = 0;
	}
	return min_dist;
}


int main()
{
	int m, n;
	int dist = 0;
	cin >> m >> n;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> grid[i][j];
		}
	}
	cout << solve(0, 0, m, n, 0) << endl;
	return 0;
}

/*
4 4
0 0 0 0
0 0 0 0
0 0 0 0
0 0 0 0

5 3
0 0 0
1 1 0
0 0 0
0 1 1
0 0 0


*/