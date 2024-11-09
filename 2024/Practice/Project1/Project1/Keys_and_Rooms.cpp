#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void dfs(int source, vector<int>& visited, vector<vector<int>>& rooms) {

}

bool canVisitAllRooms(vector<vector<int>>& rooms) {
	int n = rooms.size();
	int m = rooms[0].size();
	vector<int>visited(n, 0);
	dfs(0, visited, rooms);
}

int main()
{
	vector<vector<int>>rooms = { {1},{2},{3},{} };
	bool result = canVisitAllRooms(rooms);
	cout << (result == 1) ? "True" : "False";
	return 0;
}


