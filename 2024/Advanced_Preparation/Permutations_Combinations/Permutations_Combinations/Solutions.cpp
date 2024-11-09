#include <iostream>
#include <vector>
using namespace std;

void combinations(int pos, vector<int>& v, vector<int>& path, int k) {
	if (k == 0) {
		for (auto it : path) {
			cout << it << " ";
		}
		cout << endl;
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

void permutations(vector<int>& v, vector<int>& path, vector<bool>&visited, int k) {
	if (k == 0) {
		for (auto it : path) {
			cout << it << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < v.size(); i++) {
		if (visited[i] != true) {
			visited[i] = true;
			path.push_back(v[i]);
			permutations(v, path, visited, k - 1);
			visited[i] = false;
			path.pop_back();
		}
	}
}


int main()
{
	vector<int>v{
		1,2,3
	};
	vector<int>path;
	vector<bool>visited(v.size(), false);
	int k;
	cin >> k;
	cout << "combinations: " << endl;
	combinations(0, v, path, k);
	cout << "Permutations: " << endl;
	permutations(v, path, visited, k);
	return 0;
}