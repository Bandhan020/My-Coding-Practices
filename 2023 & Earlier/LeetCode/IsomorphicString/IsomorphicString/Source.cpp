#include <iostream>
#include <map>
#include<string>
using namespace std;

bool isIsomorphic(string s, string t) {
	map<char, char>c1;
	map<char, bool>c2;
	int i, j;
	for (i = 0; i < s.size(); i++) {
		if (c1.find(s[i]) != c1.end()) {
			if (c1[s[i]] != t[i]) {
				return false;
			}
		}
		else {
			if (c2.find(t[i]) != c2.end()) {
				return false;
			}
			else {
				c1.insert({ s[i],t[i] });
				c2.insert({ t[i],true });
			}
		}
	}
	return true;
}

int main()
{
	string s, t;
	cin >> s;
	cin >> t;
	if (isIsomorphic(s, t)) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}

	/* c.insert({ 'c', 'c' });
	c.insert({ 'd', 'd' });
	c.insert({ 'e', 'd' });
	c.insert({'f', 'd'});
	for (auto it = c.begin(); it != c.end(); it++) {
		cout << it->first << "   " << it->second << endl;
	}

	char key='d';
	if (c.find(key)!=c.end()) {
		cout << "FOUND" << endl;
	}
	else {
		cout << "Not found" << endl;
	} */

	return 0;
}