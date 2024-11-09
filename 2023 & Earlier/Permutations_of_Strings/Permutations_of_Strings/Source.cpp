#include <bits/stdc++.h>
using namespace std;


void permutations(string s, int i, int n) {
	if (i == n - 1) {
		cout << s << endl;
		return;
	}

	for (int j = i; j < n; j++) {
		swap(s[i],s[j]);
		permutations(s, i + 1, n);
		swap(s[i],s[j]);
	}
}

int main()
{
	string s;
	cin >> s;
	permutations(s, 0, s.size());
	return 0;
}
