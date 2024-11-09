#include <iostream>
#include <string>
using namespace std;

bool isAnagram(string s, string t) {
	int s_size = s.size();
	int t_size = t.size();
	int i, j;
	int arr1[130];
	int arr2[130];
	for (i = 0; i < 130; i++) {
		arr1[i] = 0;
		arr2[i] = 0;
	}
	if(s_size != t_size) {
		return false;
	}
	else {
		for (i = 0; i < s_size; i++) {
			arr1[s[i]]++;
			arr2[t[i]]++;
		}
		for (i = 0; i < 130; i++) {
			if (arr1[i] != 0) {
				if (arr1[i] != arr2[i]) {
					return false;
				}
			}
		}
		return true;
	}
}

int main() {
	string s, t;
	cin >> s >> t;
	if (isAnagram(s, t)) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}
	return 0;
}