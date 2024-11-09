#include <iostream>
#include <vector>
using namespace std;


void combinations(int pos, vector<int>&v, vector<int>& path, int k) {
	if (k == 0) {
		for (auto it : path) {
			cout << it << " ";
		}
		cout << endl;
		return;
	}

	if (pos == v.size()) {
		return;
	}

	for (int i = pos; i < v.size(); i++) {
		path.push_back(v[i]);
		combinations(i + 1, v, path, k - 1);
		path.pop_back();
	}
}

void permutations(vector<int>& v, vector<int>& path, vector<int>& visited, int k) {
	if (k == 0) {
		for (auto it : path) {
			cout << it << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < v.size(); i++) {
		if (visited[i] == 0) {
			path.push_back(v[i]);
			visited[i] = 1;
			permutations(v, path, visited, k - 1);
			path.pop_back();
			visited[i] = 0;
		}
	}
}

int main() {
	vector<int>v{ 1,2,3 };
	vector<int>path;
	vector<int>visited(v.size(), 0);
	combinations(0, v, path, 2);
	cout << endl << endl;
	permutations(v, path, visited, 2);
	return 0;
}