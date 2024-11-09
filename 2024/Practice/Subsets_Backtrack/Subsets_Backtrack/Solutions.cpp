#include <iostream>
#include <vector>
using namespace std;


void createSubset(vector<vector<int>>& res, vector<int>subset, vector<int>& nums, int index) {
	if (index == nums.size()) {
		res.push_back(subset);
		return;
	}

	subset.push_back(nums[index]);
	createSubset(res, subset, nums, index + 1);
	subset.pop_back();
	createSubset(res, subset, nums, index + 1);
}


int main()
{
	vector<int>nums{
		1,2,3
	};
	vector<int>subset;
	vector<vector<int>>res;
	createSubset(res, subset, nums, 0);
	for (int i = 0; i < res.size(); i++) {
		for (auto it : res[i]) {
			cout << it << " ";
		}
		cout << endl;
	}

	return 0;
}