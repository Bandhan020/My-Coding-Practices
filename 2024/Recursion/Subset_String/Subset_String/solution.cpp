#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(vector<int>& input, vector<int>& output, vector<vector<int> >& result) {
	if (input.size() == 0) {
		result.push_back(output);
		return;
	}
	vector<int>op1=output;
	vector<int>op2=output;
	op2.push_back(input[0]);
	input.erase(input.begin() + 0);

	solve(input, op1, result);
	solve(input, op2, result);
	return;
}





int main()
{
	vector<int>input{
		1,2,3
	};
	vector<int>output;
	vector<vector<int>>result;
	solve(input, output, result);
	for (int i = 0; i < result.size(); i++) {
		for (auto x : result[i]) {
			cout << x << endl;
		}
	}
	return 0;
}