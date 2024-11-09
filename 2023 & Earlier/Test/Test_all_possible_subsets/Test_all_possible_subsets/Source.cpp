#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int N = s.size();
	for (int i = 0; i < (1 << N); i++) {
		for(int j=0;j<N;j++)
		{
			if (i&(1 << j)) {
				cout << s[j];
			}
		}
		cout << endl;
	}
	return 0;
}