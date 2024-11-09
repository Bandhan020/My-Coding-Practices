#include <iostream>
#include <string>
using namespace std;

bool isIsomorphic(string s, string t) {
	int cs[128] = { 0 }, ct[128] = { 0 };
	for (int i = 0; i < s.size(); i++)
	{
		if (cs[s[i]] != ct[t[i]]) return false;
		else if (!cs[s[i]]) //only record once
		{
			cs[s[i]] = i + 1;
			ct[t[i]] = i + 1;
		}
	}
	return true;
}

int main()
{
	string s, t;
	cin >> s >> t;
	if (isIsomorphic(s, t)) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}
	return 0;
}