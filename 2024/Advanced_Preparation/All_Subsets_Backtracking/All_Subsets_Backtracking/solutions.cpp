#include <iostream>
#include <vector>
using namespace std;

void createSubset(vector<int>& nums, int index, vector<vector<int>>& res, vector<int>& subset) {
	if (index == nums.size()) {
		res.push_back(subset);
		return;
	}

	subset.push_back(nums[index]);
	createSubset(nums, index + 1, res, subset);
	subset.pop_back();
	createSubset(nums, index + 1, res, subset);
}


int main()
{
	vector<int>nums{
		1,2,3
	};
	vector<int>subset;
	vector<vector<int>>res;
	createSubset(nums, 0, res, subset);

	for (int i = 0; i < res.size(); i++) {
		for (auto it : res[i]) {
			cout << it << " ";
		}
		cout << endl;
	}

	return 0;
}