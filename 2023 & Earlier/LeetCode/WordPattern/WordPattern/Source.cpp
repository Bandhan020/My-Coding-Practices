#include <iostream>
#include<string>
#include<unordered_map>
#include<sstream>
using namespace std;


bool wordPattern(string pattern, string str)
{
	stringstream ss(str); string s;
	unordered_map<char, string> c2s; // char to string
	unordered_map<string, char> s2c; // string to char
	for (char c : pattern)
		if (ss >> s && c2s.count(c) == s2c.count(s)) {
			if (c2s.count(c) && c2s[c] != s) return false;
			else c2s[c] = s, s2c[s] = c;
		}
		else return false;

	return !(ss >> s); // ss is empty
}

int main()
{
	string pattern, str;
	getline(cin, str);
	cin >> pattern;
	if (wordPattern(pattern, str)) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}
	return 0;
}