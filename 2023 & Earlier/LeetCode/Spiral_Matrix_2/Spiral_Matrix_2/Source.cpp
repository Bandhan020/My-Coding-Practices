#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generateMatrix(int n) {
	int u = 0, d = n-1, l = 0, r = n - 1, p = 0;
	vector<vector<int>>matrix(n, vector<int>(n, 0));
	while (u <= d && l <= r) {
		for (int col = l; col <= r; col++) {
			matrix[u][col]=++p;
		}
		if (++u > d) {
			break;
		}

		for (int row = u; row <= d; row++) {
			matrix[row][r]=++p;
		}
		if (--r < l) {
			break;
		}

		for (int col = r; col >= l; col--) {
			matrix[d][col]=++p;
		}
		if (--d < u) {
			break;
		}

		for (int row = d; row >= u; row--) {
			matrix[row][l]=++p;
		}
		if (++l > r) {
			break;
		}
	}
	return matrix;
}

int main()
{
	int n;
	cin >> n;
	vector<vector<int>>matrix(n, vector<int>(n, 0));
	matrix = generateMatrix(n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}