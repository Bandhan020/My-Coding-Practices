#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

/*void permute(string s, int l, int r) {
	if (l == r) {
		cout << s << endl;
	}

	for (int i = l; i <= r; i++) {
		swap(s[l], s[i]);
		permute(s, l + 1, r);
		swap(s[l], s[i]);
	}
}*/


//Next permutation


int main()
{
	vector<int>num{ 9,7,8 };
	sort(num.begin(), num.end());
	reverse(num.begin(), num.end());

	cout << "The 3! possible permutations with 3 elements:\n";

	do {
		for (int n:num) {
			cout << n<< " ";
		}
		cout << endl;
	} 
	while (prev_permutation(num.begin(), num.end()));

	return 0;
}