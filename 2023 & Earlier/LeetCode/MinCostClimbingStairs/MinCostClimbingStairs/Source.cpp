#include <iostream>
#include <vector>
using namespace std;

int minCostClimbingStairs(vector<int>& cost) {
	int dp[1001] = { 0 };
	dp[0] = cost[0];
	dp[1] = cost[1];
	if (cost.size() == 2) {
		return (cost[0] < cost[1]) ? cost[0] : cost[1];
	}
	else {
		for (int i = 2; i <= cost.size(); i++) {
			if (cost[i - 1] < cost[i - 2]) {
				dp[i] = cost[i] + cost[i - 1];
			}
			else {
				dp[i] = cost[i] + cost[i - 2];
			}
		}
	}
	return dp[cost.size()];
}

int main()
{
	vector<int>cost{
		{1,100,1,1,1,100,1,1,100,1}
	};
	cout<<minCostClimbingStairs(cost)<<endl;
	return 0;
}