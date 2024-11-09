#include <iostream>
#include <vector>
using namespace std;


//Recursive with DP
int findLength(int n, vector<int>& nums, int curr, int prev, vector<vector<int>>&dp) {
	if (n == curr) {
		return 0;
	}

	if (dp[curr][prev + 1] != -1) {
		return dp[curr][prev + 1];
	}

	int op1 = 0;
	if (prev == -1 || nums[curr] > nums[prev]) {
		op1 = 1 + findLength(n, nums, curr + 1, curr,dp);
	}

	int op2 = 0;
	op2 = 0 + findLength(n, nums, curr + 1, prev,dp);

	return dp[curr][prev+1]=max(op1, op2);

}

int lengthOfLIS(vector<int>& nums) {
	int n = nums.size();
	vector<vector<int>>dp(n, vector<int>(n, -1));
	int sol=findLength(n, nums, 0, -1, dp);
	return sol;
}



int main()
{
	vector<int>nums{
		//10,9,2,5,3,7,101,18
		//0,1,0,3,2,3
		7,7,7,7,7,7,7
	};
	int res = lengthOfLIS(nums);
	cout << res << endl;
	return 0;
}