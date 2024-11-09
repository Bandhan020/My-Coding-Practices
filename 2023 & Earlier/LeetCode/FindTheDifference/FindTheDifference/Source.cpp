#include <iostream>
#include <string>
using namespace std;

char findTheDifference(string s, string t) {
	int arr1[200] = { 0 };
		for (int i = 0; i < t.size(); i++) {
			arr1[t[i]]++;
		}
		for (int i = 0; i < s.size(); i++) {
			arr1[s[i]]--;
		}
		for (int i = 0; i < 200; i++) {
			if (arr1[i]) {
				return char(arr1[i]);
			}
		}
	
}

int main()
{
	string s, t;
	s = "";
	t = "y";
	cout << findTheDifference(s, t);
	return 0;
}