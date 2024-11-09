#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>>v;

int kthGrammar(int n, int k) {
	int mid = pow(2, n - 1) / 2;
	if (n == 1 && k == 1) {
		return 0;
	}
	if (k <= mid) {
		kthGrammar(n - 1, k);
	}
	else {
		kthGrammar(n-1 , k-mid);
	}
}


int main()
{
	int n, k;
	cin >> n >> k;
	return 0;
}