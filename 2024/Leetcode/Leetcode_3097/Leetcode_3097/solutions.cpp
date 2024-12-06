#include <iostream>
#include <vector>
using namespace std;


void performOrOperation(int &num, int &orVal, vector<int>&bitCount) {
	orVal = (orVal | num);
	for (int i = 0; i < 32; i++) {
		if (num & (1 << i)) {
			bitCount[i] += 1;
		}
	}
}

void revertOrOperation(int &num, int &orVal, vector<int>& bitCount) {
	for (int i = 0; i < 32; i++) {
		if (num & (1 << i)) {
			bitCount[i] -= 1;
		}

		if (bitCount[i] == 0) {
			orVal = orVal & (~(1 << i));
		}
	}
}

int minimumSubarrayLength(vector<int>& nums, int k) {
	int ans = INT_MAX;
	int orVal = 0;
	vector<int>bitCount(32, 0);

	int l = 0, r = 0;

	while (r < nums.size()) {
		performOrOperation(nums[r], orVal, bitCount);
		while (l <= r && orVal >= k) {
			ans = min(ans, r - l + 1);
			revertOrOperation(nums[l], orVal, bitCount);
			l++;
		}

		r++;
	}
	return (ans == INT_MAX) ? -1 : ans;
}

int main()
{
	vector<int>nums{
		1,2,3
		//2,1,8
		//1,2
	};
	int k;
	cin >> k;
	int ans = minimumSubarrayLength(nums, k);
	cout << ans << endl;
	return 0;
}