#include <iostream>
#include <string>
#include<vector>
using namespace std;

string reverseVowels(string s) {
	int i, j, k;
	vector<int>arr;
	for (i = 0, j = 0; i < s.size(); i++) {
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'
			|| s[i]=='A'|| s[i]=='E'|| s[i]=='I'||s[i]=='O' || s[i]=='U') {
			arr.push_back(i);
			j++;
		}
	}
	char temp;
	for (i = 0, k = j - 1; i < j / 2; i++, k--) {
		temp = s[arr[i]];
		s[arr[i]] = s[arr[k]];
		s[arr[k]] = temp;
	}
	
	return s;
}

int main()
{
	string s;
	cin >> s;
	cout << reverseVowels(s);
	return 0;
}