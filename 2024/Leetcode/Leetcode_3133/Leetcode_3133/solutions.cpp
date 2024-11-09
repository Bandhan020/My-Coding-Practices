#include <iostream>
#include <vector>
using namespace std;

long long minEnd(int n, int x) {
	n = n - 1;
	vector<int>xBit(64, 0);
	vector<int>nBit(64, 0);

	for (int i = 0; i < 32; i++) {
		xBit[i] = (x >> i) & 1;
		nBit[i] = (n >> i) & 1;
	}
	int j = 0;
	for (int i = 0; i < 64; i++) {
		if (xBit[i] == 1) {
			continue;
		}
		xBit[i] = nBit[j++];
	}

	long long ans=0;
	for (int i = 0; i < 64; i++) {
		ans += xBit[i] * (1ll << i);
	}

	return ans;
}

int main()
{
	int n, x;
	cin >> n >> x;
	long long ans = minEnd(n, x);
	cout << ans << endl;
	return 0;
}