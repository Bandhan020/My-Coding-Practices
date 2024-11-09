#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//int dp[1001];
/* Bottom up DP */

int minCostClimbingStairs(vector<int>& cost) {
	int n = cost.size();
	for (int i = n - 3; i >= 0; i--) {
		cost[i] += min(cost[i+1] , cost[i + 2]);
	}
	return min(cost[0], cost[1]);
}


/* Top Down approach

int calc(vector<int>&cost, int i) {
	if (i >= cost.size()) {
		return 0;
	}
	if (dp[i] != -1) {
		return dp[i];
	}
	int op1 = calc(cost,i + 1);
	int op2 = calc(cost,i + 2);
	return dp[i] = min(op1, op2) + cost[i];
}

int minCostClimbingStairs(vector<int>& cost) {
	memset(dp, -1, sizeof dp);
	return min(calc(cost,0), calc(cost,1));
}


*/

/* bottom up with 2 variables



int minCostClimbingStairs(vector<int>& cost) {
	int n = cost.size();
	int dp1 = 0;
	int dp2 = 0;
;	for (int i=n-1; i >= 0; i--) {
		int dpi=cost[i] + min(dp1,dp2);
		dp2 = dp1;
		dp1 = dpi;
	}
	return min(dp1, dp2);
}
*/

int main()
{
	vector<int>cost{
		{10,15,20 }
	};
	cout<<minCostClimbingStairs(cost)<<endl;
	return 0;
}

/*

{10,15,20 }
{1,100,1,1,1,100,1,1,100,1}

*/