#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> solve(vector<int>& input, vector<int>& output, vector<vector<int>>& solution) {
	if (input.size() == 0) {
		solution.push_back(output);
		return solution;
	}
	vector<int>op1 = output;
	vector<int>op2 = output;
	op2.push_back(input[0]);
	input.erase(input.begin() + 0);

	solve(input, op1, solution);
	solve(input, op2, solution);

	return solution;
}

vector<vector<int>> subsets(vector<int>& nums) {
	vector<int>output;
	vector<vector<int>>solution, result;
	result = solve(nums, output, solution);
	return result;
}


int main()
{
	vector<int>nums{
		1,2,3
	};
	int size = pow(2, nums.size());
	vector<vector<int>>result;
	result = subsets(nums);
	for (int i = 0; i < result.size(); i++) {
		for (int j = 0; j < result[i].size(); j++) {
			cout << result[i][j] << endl;
		}
		cout << endl;
	}
	return 0;
}