#include <iostream>
using namespace std;

struct info {
	int x, y, dir, speed;
};

int main()
{
	int T,N,M,K;
	info index[40];
	cin >> T;
	for (int t = 0; t < T; t++) {
		cin >> N >> M >> K;
		for (int i = 0; i < K; i++) {
			cin >> index[i].y >> index[i].x >> index[i].dir >> index[i].speed;
		}

		for (int i = 0; i < K; i++) {
			cout<< index[i].y<<" " <<index[i].x<<" " << index[i].dir<<" " <<index[i].speed<<endl;
		}

		for (int i = 1; i <= 6; i++) {
			int grid[10][10] = { 0 };
			for (int j = 0; j < K; j++) {
				if (index[j].dir == 3) {
					if (index[j].y == 1) {
						index[j].dir = 1;
						index[j].y++;
					}
					else {
						index[j].y--;
					}
				}

				else if (index[j].dir == 1) {
					if (index[j].y == N) {
						index[j].dir = 3;
						index[j].y++;
					}
					else {
						index[j].y--;
					}
				}

				else if (index[j].dir == 2) {
					if (index[j].x == 1) {
						index[j].dir = 4;
						index[j].x++;
					}
					else {
						index[j].x--;
					}
				}

				else{
					if (index[j].x == N) {
						index[j].dir = 2;
						index[j].x--;
					}
					else {
						index[j].x++;
					}
				}


			}




		}
	}
	return 0;
}