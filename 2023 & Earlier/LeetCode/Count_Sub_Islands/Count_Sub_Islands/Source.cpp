#include <iostream>
#include <vector>
using namespace std;


int dfs(vector<vector<int>>& grid1, vector<vector<int>>& grid2, int i, int j, int flag) {
	int m = grid2.size();
	int n = grid2[0].size();
	if (i < 0 || j < 0 || i >= m || j >= n || grid2[i][j] == 0) {
		return flag;
	}
	grid2[i][j] = 0;
	if (flag != 1) {
		if (grid1[i][j] != 1) {
			flag = 1;
		}
	}
	int dx[4] = { 1,-1,0,0 };
	int dy[4] = { 0,0,1,-1 };
	for (int k = 0; k < 4; k++) {
		int x = i + dx[k];
		int y = j + dy[k];
		flag = dfs(grid1, grid2, x, y, flag);
	}
	return flag;
}




int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
	int m = grid2.size();
	int n = grid2[0].size();

	int count = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (grid2[i][j] == 1) {
				int flag = 0;
				dfs(grid1, grid2, i, j, flag);
				cout << flag << endl << endl;
				if (!flag) {
					count++;
				}
			}
		}
	}
	return count;
}


int main()
{

	vector<vector<int>>grid1{
		{1,1,1,1,0,0},
		{1,1,0,1,0,0},
		{1,0,0,1,1,1},
		{1,1,1,0,0,1},
		{1,1,1,1,1,0},
		{1,0,1,0,1,0},
		{0,1,1,1,0,1},
		{1,0,0,0,1,1},
		{1,0,0,0,1,0},
		{1,1,1,1,1,0}

	};

	vector<vector<int>>grid2{
		{1,1,1,1,0,1},
		{0,0,1,0,1,0},
		{1,1,1,1,1,1},
		{0,1,1,1,1,1},
		{1,1,1,0,1,0},
		{0,1,1,1,1,1},
		{1,1,0,1,1,1},
		{1,0,0,1,0,1},
		{1,1,1,1,1,1},
		{1,0,0,1,0,0}

	};

	cout << countSubIslands(grid1, grid2) << endl;
	return 0;


	//c
	
	/*
	input

	{1,1,1,0,0},
	{0,1,1,1,1},
	{0,0,0,0,0},
	{1,0,0,0,0},
	{1,1,0,1,1}

	{1,1,1,0,0},
	{0,0,1,1,1},
	{0,1,0,0,0},
	{1,0,1,1,0},
	{0,1,0,1,0}

	{1,0,1,0,1},
	{1,1,1,1,1},
	{0,0,0,0,0},
	{1,1,1,1,1},
	{1,0,1,0,1}

	{0,0,0,0,0},
	{1,1,1,1,1},
	{0,1,0,1,0},
	{0,1,0,1,0},
	{1,0,0,0,1}

	{1,1,1,1,0,0},
	{1,1,0,1,0,0},
	{1,0,0,1,1,1},
	{1,1,1,0,0,1},
	{1,1,1,1,1,0},
	{1,0,1,0,1,0},
	{0,1,1,1,0,1},
	{1,0,0,0,1,1},
	{1,0,0,0,1,0},
	{1,1,1,1,1,0}

	{1,1,1,1,0,1},
	{0,0,1,0,1,0},
	{1,1,1,1,1,1},
	{0,1,1,1,1,1},
	{1,1,1,0,1,0},
	{0,1,1,1,1,1},
	{1,1,0,1,1,1},
	{1,0,0,1,0,1},
	{1,1,1,1,1,1},
	{1,0,0,1,0,0}

	*/
}