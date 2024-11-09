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
	for (int i = 0; i < envelopes.size(); i++) {
		cout << envelopes[i][0] << " " << envelopes[i][1] << endl;
	}
	return 1;
}


int main()
{
	vector<vector<int>>envelops{
		{5, 4}, {6, 4},{6, 7},{2, 3}
	};
	int res = maxEnvelopes(envelops);
	cout << res << endl;
	return 0;
}
