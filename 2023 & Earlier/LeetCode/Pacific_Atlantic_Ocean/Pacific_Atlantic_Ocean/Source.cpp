#include <iostream>
#include <vector>
using namespace std;


void dfs(vector<vector<int>>&heights, vector<vector<int>>&res, int i, int j, int m, int n,int h) {
	if (i >= m || j >= n || i < 0 || j < 0) {
		return;
	}
	if (res[i][j] == 1) {
		return;
	}
	if (heights[i][j] > h) {
		return;
	}

	res[i][j] = 1;
	h = heights[i][j];
	dfs(heights, res, i+1, j, m, n, h);
	dfs(heights, res, i - 1, j, m, n, h);
	dfs(heights, res, i, j + 1, m, n, h);
	dfs(heights, res, i, j - 1, m, n, h);
}

vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
	int m = heights.size();
	int n = heights[0].size();
	
	vector<vector<int>>res(m, vector<int>(n, 0));
	int h; 
	for (int i=0,j = 0; j < n; j++) {
		h = heights[i][j];
		dfs(heights, res, i, j, m, n,h);
	}

	for (int j=0,i = 0; i < n; i++) {
		h = heights[i][j];
		dfs(heights, res, i, j, m, n, h);
	}

	for (int j = n-1, i = 0; i < n; i++) {
		h = heights[i][j];
		dfs(heights, res, i, j, m, n, h);
	}

	for (int i = n - 1, j = 0; j < n; j++) {
		h = heights[i][j];
		dfs(heights, res, i, j, m, n, h);
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << heights[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{
	vector<vector<int>>heights{
		{1,2,2,3,5},{3,2,3,4,4},{2,4,5,3,1},{6,7,1,4,5},{5,1,1,2,4}
	};

	pacificAtlantic(heights);
	return 0;
}