#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i, j, N;
	cin >> N;
	string s;
	cin >> s;
	cout << endl;
	for (i = 0; i < (1<<N); i++) {
		for (j = 0; j < N; j++) {
			if (i &(1 << j)) {
				cout << s[j];
			}
		}
		cout << endl;
	}
	return 0;
}