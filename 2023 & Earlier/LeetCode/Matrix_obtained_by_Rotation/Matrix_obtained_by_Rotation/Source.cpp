#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<vector<int>>&mat) {
	for (int i = 0; i < mat.size(); i++) {
		for (int j = 0; j < mat[i].size(); j++) {
			if (i > j) {
				swap(mat[i][j], mat[j][i]);
			}
		}
	}

	for (int i = 0; i < mat.size(); i++) {
		reverse(mat[i].begin(), mat[i].end());
	}
}

bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
	if (mat == target) {
		return true;
	}
	for (int i = 0; i < 3; i++) {
		rotate(mat);
		if (mat == target) {
			return true;
		}
	}
	return false;
}


int main()
{
	int n;
	cin >> n;
	vector<vector<int>>mat(n, vector<int>(n, 0));
	vector<vector<int>>target(n, vector<int>(n, 0));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> mat[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> target[i][j];
		}
	}
	
	if (findRotation(mat, target)) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}

	return 0;
}