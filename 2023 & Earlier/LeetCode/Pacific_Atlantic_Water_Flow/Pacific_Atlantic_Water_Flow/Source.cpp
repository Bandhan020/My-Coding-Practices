#include <iostream>
#include <vector>
using namespace std;


void dfs(vector<vector<int>>&heights, vector<vector<int>>&res, int i, int j, int m, int n, int prev) {
	if (i >= m || j >= n || i < 0 || j < 0) {
		return;
	}
	if (res[i][j] == 1) {
		return;
	}
	if (heights[i][j] < prev) {
		return;
	}

	res[i][j] = 1;
	dfs(heights, res, i + 1, j, m, n, heights[i][j]);
	dfs(heights, res, i - 1, j, m, n, heights[i][j]);
	dfs(heights, res, i, j + 1, m, n, heights[i][j]);
	dfs(heights, res, i, j - 1, m, n, heights[i][j]);
}

vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
	int m = heights.size();
	int n = heights[0].size();

	vector<vector<int>>pacific(m, vector<int>(n, 0));
	vector<vector<int>>atlantic(m, vector<int>(n, 0));
	vector<vector<int>>ans;


	int h=INT_MIN;
	for (int j = 0; j < n; j++) {
		dfs(heights, pacific, 0, j, m, n, h);
		dfs(heights, atlantic, m-1, j, m, n, h);
	}


	for (int i = 0; i < m; i++) {
		dfs(heights, pacific, i, 0, m, n, h);
		dfs(heights, atlantic, i, n-1, m, n, h);
	}


		vector<int>v;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {

				if (pacific[i][j] && atlantic[i][j]) {
					v.clear();
					v.push_back(i);
					v.push_back(j);
					ans.push_back(v);
				}
			}
		}

	return ans;
}

int main()
{
	vector<vector<int>>heights{
		{1,2,2,3,5},{3,2,3,4,4},{2,4,5,3,1},{6,7,1,4,5},{5,1,1,2,4}
		//{1}
	};

	vector<vector<int>>ans;
	ans=pacificAtlantic(heights);
	for (int i = 0; i < ans.size(); i++) {
		for (int j = 0; j < ans[0].size(); j++) {
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}