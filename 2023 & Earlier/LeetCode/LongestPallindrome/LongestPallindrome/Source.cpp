#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int longestPalindrome(string s) {
	if (s.size() == 1) {
		return 1;
	}
	else {
		unordered_map<char, int>um;
		for (int i = 0; i < s.size(); i++) {
			um[s[i]]++;
		}
		if (s.size() % 2 == 0) {
			for (auto it : um) {
				if ((it.second) % 2 != 0) {
					return 0;
				}
			}

		}
	}
}

int main()
{
	
	return 0;
}