#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void combination(int pos, int k, vector<int>&v, vector<int>&path,vector<vector<int>>&c) {
	if (k == 0) {
		/*for (auto p : path) {
			cout << p << " ";
		}
		cout << endl; */
		c.push_back(path);
	}
	if (pos >= v.size()) {
		return;
	}
	for (int i = pos; i < v.size(); i++) {
		path.push_back(v[i]);
		combination(i + 1, k - 1, v, path,c);
		path.pop_back();
	}
}



void permutation(int k, vector<int>&v, vector<int> path, vector<bool> &visited, vector<vector<int>>&p) {
	if (k == 0) {
		/*for (auto p : path) {
			cout << p << " ";
		}
		cout << endl; */
		p.push_back(path);
	}
	
	for (int i = 0; i < v.size(); i++) {
		if (visited[i] == false) {
			visited[i] = true;
			path.push_back(v[i]);
			permutation(k - 1, v, path, visited,p);
			visited[i] = false;
			path.pop_back();
		}
	}
}


int main()
{
	int N, M;
	cin >> N >> M;
	vector<int>charges(N,0);
	vector<int>holes(M, 0);
	vector<int>position(M, 0);
	int temp;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		charges[i] = temp;
	}
	
	for (int i = 0; i < M; i++) {
		cin >> temp;
		holes[i] = temp;
	}
	
	for (int i = M; i >= 2; i--) {
		vector<vector<int>>cmb;
		vector<int> path;
		combination(0, i, holes, path, cmb);
		for (auto h : cmb) {
			vector<vector<int>>pmt;
			vector<int> p;
			vector<bool> visited(7, false);
			permutation(i, charges, p, visited, pmt);
			
		}
		cmb.clear();
		

	}

	/*
	vector<int>v{ 1,2,3 };
	vector<int> path;
	vector<bool> visited(3, false);
	vector<vector<int>>cmb;
	vector<vector<int>>pmt;
	combination(0, 2, v, path, cmb);
	permutation(2, v, path, visited, pmt);
	cout << "Permutation: " << endl;
	for (auto it : pmt) {
		for (int i = 0; i < it.size(); i++) {
			cout << it[i]<<" ";
		}
		cout << endl;
	}

	cout <<endl<< "Combination: " << endl;
	for (auto it : cmb) {
		for (int i = 0; i < it.size(); i++) {
			cout << it[i] << " ";
		}
		cout << endl;
	}

	*/
	return 0;
}


