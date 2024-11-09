#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
	int m = mat.size();
	int n = mat[0].size();
	queue<pair<int, int>>q;
	vector<vector<int>>ans(m, vector<int>(n, 0));
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (mat[i][j] == 0) {
				q.push({ i,j });
				mat[i][j] = -1;
			}
		}
	}
	int dx[4] = { 1,-1,0,0 };
	int dy[4] = { 0,0,1,-1 };
	int dis = 0;
	while (!q.empty()) {
		int len = q.size();
		dis++;
		while (len--) {
			pair<int, int>s = q.front();
			q.pop();
			for (int k = 0; k < 4; k++) {
				int x = s.first + dx[k];
				int y = s.second + dy[k];
				if (x < m && y < n && x >= 0 && y >= 0) {
					if (mat[x][y] == 1) {
						mat[x][y] = -1;
						ans[x][y] = dis;
						q.push({ x,y });
					}
				}
			}
		}
	}
	return ans;
}

int main()
{
	vector<vector<int>>mat{
		{0,0,0},{0,1,0},{0,0,0}
		//{0,0,0},{0,1,0},{1,1,1}
	};

	vector<vector<int>>ans;
	ans = updateMatrix(mat);
	for (int i = 0; i < ans.size(); i++) {
		for (int j = 0; j < ans[0].size(); j++){
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}