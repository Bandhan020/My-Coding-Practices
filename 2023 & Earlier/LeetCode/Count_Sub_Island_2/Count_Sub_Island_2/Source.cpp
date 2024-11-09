#include <iostream>
#include <vector>
using namespace std;


void dfs(int r, int c, vector<vector<int>>& grid1, vector<vector<int>>& grid2, int &check) {
	int m = grid2.size(), n = grid2[0].size();
	if (r < 0 || r >= m || c < 0 || c >= n || grid2[r][c] == 0) {
		return;
	}

	if (check) {
		if (grid1[r][c] == 0) {
			check = 0;
		}
	}
	/*if (grid1[r][c] == 0 && grid2[r][c] == 1) {
		check = false;
	}*/
	grid2[r][c] = 0;
	dfs(r - 1, c, grid1, grid2, check);
	dfs(r + 1, c, grid1, grid2, check);
	dfs(r, c - 1, grid1, grid2, check);
	dfs(r, c + 1, grid1, grid2, check);
}




int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
	int m = grid2.size(), n = grid2[0].size();
	int result = 0;
	for (int r = 0; r < m; r++) {
		for (int c = 0; c < n; c++) {
			if (grid2[r][c] == 1) {
				int check = 1;
				dfs(r, c, grid1, grid2, check);
				result += check;
			}
		}
	}
	return result;
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