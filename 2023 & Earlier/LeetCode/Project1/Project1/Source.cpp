#include <iostream>
#include <string>
using namespace std;

bool repeatedSubstringPattern(string s) {
	int size = s.size(),i,j;
	if (size == 1) {
		return false;
	}
	else if (size % 2 != 0) {
		char temp = s[0];
		for (i = 1; i < size; i++) {
			if (s[i] != temp) {
				return false;
			}
		}
		return true;
	}
	else {
		string temp1 = "", temp2 = "";
		for (i = 0, j = size - 1; i < size / 2; i++, j--) {
			temp1 += s[i];
			temp2 += s[j];
		}
		reverse(temp2.begin(), temp2.end());
		if (temp1 == temp2) {
			return true;
		}
		else {
			int t_size = size / 2;
			while (1) {
				t_size = size / 2;
			}
			return false;
		}
	}
}


int main()
{
	string s;
	cin >> s;
	cout<<repeatedSubstringPattern(s)<<endl;
	return 0;
}
