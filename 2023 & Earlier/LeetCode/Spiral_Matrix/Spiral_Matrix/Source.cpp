#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
	vector<int>mat(matrix.size()*matrix[0].size());
	int u = 0, d = matrix.size()-1,l=0,r=matrix[0].size()-1,p=0;
	while (u <= d && l <= r) {
		for (int col = l; col <= r; col++) {
			mat[p++] = matrix[u][col];
		}
		if (++u > d) {
			break;
		}

		for (int row = u; row <= d; row++) {
			mat[p++] = matrix[row][r];
		}
		if (--r < l) {
			break;
		}

		for (int col = r; col >= l; col--) {
			mat[p++] = matrix[d][col];
		}
		if (--d < u) {
			break;
		}

		for (int row = d; row >= u; row--) {
			mat[p++] = matrix[row][l];
		}
		if (++l > r) {
			break;
		}
	}
	return mat;
}


int main()
{
	/*int n, m;
	cin >> n >> m;
	vector<vector<int>>matrix(n, vector<int>(m, 0));
	vector<int>v;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> matrix[i][j];
		}
	}*/
	vector<vector<int>>matrix{
		{1,2,3},
	    {4,5,6},
	    {7,8,9}
	};
	vector<int>v;
	v=spiralOrder(matrix);
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	return 0;
}