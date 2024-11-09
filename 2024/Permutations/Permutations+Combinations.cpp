#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void combination(int pos, int k, vector<int>&v, vector<int> path) {
	if (k == 0) {
		for (auto p : path) {
			cout << p << " ";
		}
		cout << endl;
	}
	if (pos >= v.size()) {
		return;
	}
	for (int i = pos; i < v.size(); i++) {
		path.push_back(v[i]);
		combination(i + 1, k - 1, v, path);
		path.pop_back();
	}
}
void permutation(int pos, int k, vector<int>&v, vector<int> path, vector<bool> &visited) {
	if (k == 0) {
		for (auto p : path) {
			cout << p << " ";
		}
		cout << endl;
	}
	if (pos >= v.size()) {
		return;
	}
	for (int i = 0; i < v.size(); i++) {
		if (visited[i] == false) {
			visited[i] = true;
			path.push_back(v[i]);
			permutation(pos + 1, k - 1, v, path, visited);
			visited[i] = false;
			path.pop_back();
		}
	}
}