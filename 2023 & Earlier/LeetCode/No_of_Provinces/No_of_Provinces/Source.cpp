#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void dfs(vector<vector<int>>&adjList, int startVertex) {
	int n = adjList.size();
	vector<bool>visited(n, false);
	stack<int>stk;
	stk.push(startVertex);
	visited[startVertex] = true;

	while (!stk.empty()) {
		int currVertex = stk.top();
		stk.pop();
		cout << currVertex << " ";

		for (int neighbour : adjList[currVertex]) {
			if (!visited[neighbour]) {
				stk.push(neighbour);
				visited[neighbour] = true;
			}
		}
	}
}


void findCircleNum(vector<vector<int>>&isConnected) {
	int n = isConnected.size();
	vector<vector<int>>adjList(n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (isConnected[i][j]) {
				adjList[i].push_back(j);
			}
		}
	}

	cout << "Adjacency List: " << endl;
	for (int i = 0; i < adjList.size(); i++) {
		cout << i << ":";
		for (int neighbour : adjList[i]) {
			cout << neighbour << " ";
		}
		cout << endl;
	}

	cout << "DFS traversal starting from vertex 0: " << endl;
	dfs(adjList, 0);
}

int main()
{
	vector<vector<int>>matrix{
		{0,1,1,0},
		{1,0,0,0},
		{1,0,0,0},
		{0,0,0,0}
	};
	findCircleNum(matrix);
	return 0;
}