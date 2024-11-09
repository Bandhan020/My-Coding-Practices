#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

static bool comp(vector<int>& a, vector<int>& b) {
	if (a[0] == b[0]) {
		return a[1] > b[1];
	}
	else {
		return a[0] < b[0];
	}
}

int maxEnvelopes(vector<vector<int>>& envelopes) {
	sort(envelopes.begin(), envelopes.end(), comp);

	int n = envelopes.size();
	vector<int>ans;
	for (auto h : envelopes) {
		auto it = lower_bound(ans.begin(), ans.end(), h[1]);
		if(it==ans.end()){
			ans.push_back(h[1]);
		}
		else {
			*it = h[1];
		}
	}
	
	
	return ans.size();
}

int main()
{
	vector<vector<int>>envelopes{
		{1,1} ,{1,1},{1,1}
		//{5,4} ,{6,4},{6,7},{2,3}
	};
	int res = maxEnvelopes(envelopes);
	cout << res << endl;
	return 0;
}
