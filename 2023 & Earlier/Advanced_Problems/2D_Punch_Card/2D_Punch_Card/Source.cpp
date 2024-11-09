#include <iostream>
using namespace std;

struct dir {
	int x, y;
};

int main()
{
	int T;
	cin >> T;
	int N, W, H,xh,yh,xc,yc;
	for (int t = 0; t < T; t++) {
		cin >> N >> W >> H;
		dir steps[12];
		int grid[22][22] = { 0 };
		for (int i = 0; i < N; i++) {
			cin >> steps[i].x >> steps[i].y;
		}
		cin >> xh >> yh >> xc >> yc;
		
	}

	return 0;
}