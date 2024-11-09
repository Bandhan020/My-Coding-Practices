#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void dfs(int node, vector<vector<int>>&adjList, vector<bool>&visited, stack<int>&sortedOrder) {
	visited[node] = true;

	for (int adjacent : adjList[node]) {
		if (!visited[adjacent]) {
			visited[adjacent] = true;
			dfs(adjacent, adjList, visited, sortedOrder);
		}
	}

	sortedOrder.push(node);
}


vector<int> topologicalSort(vector<vector<int>>&adjList, int numNodes) {
	vector<bool>visited(numNodes, false);
	stack<int>sortedOrder;
	
	for (int i = 0; i < numNodes; ++i) {
		if (!visited[i]) {
			dfs(i, adjList, visited, sortedOrder);
		}
	}

	vector<int>result;
	while (!sortedOrder.empty()) {
		result.push_back(sortedOrder.top());
		sortedOrder.pop();
	}

	return result;
}

int main()
{
	int numNodes = 6;
	vector<vector<int>>adjList(numNodes);

	adjList[2].push_back(3);
	adjList[3].push_back(1);
	adjList[4].push_back(0);
	adjList[4].push_back(1);
	adjList[5].push_back(0);
	adjList[5].push_back(2);

	vector<int>sortedOrder = topologicalSort(adjList, numNodes);

	cout << "Topological Order: ";

	for (int node : sortedOrder) {
		cout << node << " ";
	}

	return 0;
}