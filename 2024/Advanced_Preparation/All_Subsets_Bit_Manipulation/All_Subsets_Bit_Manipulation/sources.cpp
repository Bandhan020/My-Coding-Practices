#include <iostream>
#include <vector>
using namespace std;


vector<vector<int>> make_subsets(vector<int>& v, vector<int>&vec, vector<vector<int>>& result, int N) {
	for (int i = 0; i < (1 << N); i++) {
		for (int j = 0; j < N; j++) {
			if (i & (1 << j)) {
				vec.push_back(v[j]);
			}
		}
		result.push_back(vec);
		vec.clear();
	}
	return result;
}


int main()
{
	vector<vector<int>>result;
	vector<int>v{1,2,3,4};
	vector<int>vec;
	int N;
	cin >> N;

	result = make_subsets(v, vec, result, N);
	for (int i = 0; i < result.size(); i++) {
		for (auto it : result[i]) {
			cout << it << " ";
		}
		cout << endl;
	}
	return 0;
}