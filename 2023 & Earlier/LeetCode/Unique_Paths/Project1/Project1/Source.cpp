#include <iostream>
#include <vector>
using namespace std;

int uniquePaths(int m, int n) {
	vector<vector<int>>mat(m, vector<int>(n,0));
	for (int i = 0; i < n; i++) {
		mat[0][i] = 1;
	}
	for (int i = 0; i < m; i++) {
		mat[i][0] = 1;
	}

	for (int i = 1; i < m; i++) {
		for (int j = 1; j < n; j++) {
			mat[i][j] = mat[i][j] + mat[i - 1][j] + mat[i][j - 1];
		}
	}
	return mat[m-1][n-1];
}


int main()
{
	int m, n;
	cin >> m >> n;
	cout << uniquePaths(m, n) << endl;
	return 0;
}