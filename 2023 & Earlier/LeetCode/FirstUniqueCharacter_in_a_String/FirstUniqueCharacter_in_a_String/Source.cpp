#include <iostream>
#include<string>
using namespace std;


int firstUniqChar(string s) {
	int arr[200] = { 0 };
	for (int i = 0; i < s.size(); i++) {
		arr[s[i]]++;
	}
	for (int i = 0; i < s.size(); i++) {
		if (arr[s[i]] == 1) {
			return i;
		}
	}
	return -1;
}


int main()
{
	string s;
	cin >> s;
	cout << firstUniqChar(s)<<endl;
	return 0;
}