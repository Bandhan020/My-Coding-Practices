#include <iostream>
#include <vector>
#include<queue>
using namespace std;

queue<pair<int, int>>q;

vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
	int m = mat.size();
	int n = mat[0].size();

	vector<vector<int>>m2(m, vector<int>(n, 0));

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (mat[i][j] == 0) {
				mat[i][j] = -1;
				q.push({ i,j });
			}
		}
	}

	int res = 0;
	int dx[4] = { 1,-1,0,0 };
	int dy[4] = { 0,0,1,-1 };

	while (!q.empty()) {
		int l = q.size();
		res++;
		while (l--) {
			pair<int, int>s = q.front();
			q.pop();

			for (int i = 0; i < 4; i++) {
				int x = s.first + dx[i];
				int y = s.second + dy[i];
				
				if (x < 0 || y < 0 || x >= m || y >= n || mat[x][y] == -1) {
					continue;
				}
				m2[x][y] = res;
				mat[x][y] = -1;
				q.push({ x,y });
			}
		}
	}

	return m2;
}


int main()
{
	vector<vector<int>>mat = { 
		//{0, 0, 0} ,{0, 1, 0},{1, 1, 1} 
		{0,0,0} ,{0,1,0},{0,0,0}
		};
	vector<vector<int>>result = updateMatrix(mat);
	for (int i = 0; i < mat.size(); i++) {
		for (int j = 0; j < mat[0].size(); j++) {
			cout << result[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}

