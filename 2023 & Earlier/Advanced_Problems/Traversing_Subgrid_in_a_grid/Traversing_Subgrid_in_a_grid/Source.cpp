#include <iostream>
using namespace std;

int main()
{
	int n=2;
	int mx = INT_MIN;
	int cnt=0;
	int grid[5][5] = { {0,1,0,1,1},
	                   {1,1,0,1,0},
	                   {1,0,1,0,1},
	                   {1,1,1,1,0},
	                   {0,1,1,0,1} };

	int k, l;
	for (int i = 0; i <= 5-n; i++) {
		for (int j = 0; j <= 5-n; j++) {
			k = i + n, l = j + n;
			for (int i1 = i; i1 < k; i1++) {
				for (int j1 = j; j1 < l; j1++) {
					cout << grid[i1][j1] << " ";
					if (grid[i1][j1] == 1) {
						cnt++;
					}
				}
				cout <<endl;
			}
			cout << cnt << endl;
			if (cnt > mx) {
				mx = cnt;
			}
			cnt = 0;
			cout << endl << endl;
		}
		cout << "Row break"<<endl<< endl;
	}

	cout << "Maximum is " << mx << endl;


	/*for (int i = 0; i <= 5-n; i++) {
		for (int j = 0; j <= 5 - n; j++) {
			int k = i + n, l = i + n;
			for (int i1 = i; i1 < k; i1++) {
				for (int j1 = j; j1 < l; j1++) {
					if (grid[i1][j1] == 1) {
						cnt++;
					}
				}
			}
			cout << cnt << endl;

			if (cnt > mx) {
				mx = cnt;
			}
			cnt = 0;
		}
	}
	cout << mx << endl; */

	return 0;
}



