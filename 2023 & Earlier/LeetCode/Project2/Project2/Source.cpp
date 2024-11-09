#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool isValid(int x, int y, vector<vector<int>>&grid, vector<vector<int>>&visited2) {
	if (x >= 0 && x < grid.size() && y >= 0 && y < grid.size() && visited2[x][y] != 1) {
		return true;
	}
	else {
		return false;
	}
}

int bfs(vector<vector<int>>&grid,int dx,int dy) {
	queue<pair<int, pair<int, int>>>q;
	int dist;
	pair<int, pair<int, int>>temp;
	vector<vector<int>>visited2(grid.size(), vector<int>(grid.size(), 0));
	temp.first = 0;
	temp.second = { 0,1 };
	q.push(temp);
	while (!q.empty()) {
		pair<int, pair<int, int>>curr;
		curr = q.front();
		q.pop();
		dist = curr.first;
		int curr_x = curr.second.first;
		int curr_y = curr.second.second;
		if (curr_x == dx && curr_y == dy) {
			break;
		}
		if (isValid(curr_x+1, curr_y, grid, visited2)) {
			if (grid[curr_x + 1][curr_y] == 1) {
				q.push({ dist,{curr_x+1,curr_y} });
			}
			else {
				q.push({ dist + 1,{curr_x + 1,curr_y} });
			}
		}
		if (isValid(curr_x - 1, curr_y, grid, visited2)) {
			if (grid[curr_x - 1][curr_y] == 1) {
				q.push({ dist,{curr_x - 1,curr_y} });
			}
			else {
				q.push({ dist + 1,{curr_x - 1,curr_y} });
			}
		}
		if (isValid(curr_x, curr_y+1, grid, visited2)) {
			if (grid[curr_x][curr_y+1] == 1) {
				q.push({ dist,{curr_x,curr_y+1} });
			}
			else {
				q.push({ dist + 1,{curr_x,curr_y+1} });
			}
		}
		if (isValid(curr_x, curr_y - 1, grid, visited2)) {
			if (grid[curr_x][curr_y - 1] == 1) {
				q.push({ dist,{curr_x,curr_y - 1} });
			}
			else {
				q.push({ dist + 1,{curr_x,curr_y - 1} });
			}
		}
	}
	return dist;
}


int shortestBridge(vector<vector<int>>& grid) {
	/*vector<vector<int>>visited{
		{1,1,1,1,1},{1,0,0,0,1 }, { 1,0,0,0,1 }, { 1,0,0,0,1 }, { 1,1,1,1,1 }

		{{0,1},{1,0}}
	};*/
	int shortest_path = bfs(grid, 1, 0);
	return shortest_path;
}

int main() {
	vector<vector<int>>grid{
		/* {1,1,1,1,1},{1,0,0,0,1 }, { 1,0,1,0,1 }, { 1,0,0,0,1 }, { 1,1,1,1,1 } 
		{0,1,0},{0,0,0},{0,0,1} */
		{0,1},{1,0}
	};
	cout << shortestBridge(grid) << endl;
	return 0;
}

/*
{1,1,1,1,1},{1,0,0,0,1 }, { 1,0,1,0,1 }, { 1,0,0,0,1 }, { 1,1,1,1,1 }
{{0,1,0},{0,0,0},{0,0,1}}
{{0,1},{1,0}}

*/