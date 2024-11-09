#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
	vector<vector<int>>mat(rows, vector<int>(cols, 0));
	vector<vector<int>>res(rows*cols, vector<int>(2, 0));
	res[0].push_back(rStart);
	res[0].push_back(cStart);
	int u = 0,u1=0, d = rows - 1,d1=0, l = 0,l1=0, r = cols - 1,r1=0;
	for (int i = cStart; i <= r; i++) {
		res[1].push_back(rStart);
		res[1].push_back(i);
	}

	while (1) {

	}

}


int main()
{
	int rows, cols, rStart, cStart;
	cin >> rows >> cols >> rStart >> cStart;
	spiralMatrixIII(rows, cols, rStart, cStart);
	return 0;
}