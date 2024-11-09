#include <iostream>
#include <vector>
using namespace std;

void dfs(vector<vector<int>>&graph, vector<vector<int>>&ans, vector<int>&path, int curr) {
	path.push_back(curr);
	if (curr == graph.size()) {
		ans.push_back(path);
	}
	else {
		for (auto x:graph[curr]) {
			dfs(graph, ans, path, x);
		}
	}

	path.pop_back();
}

vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
	vector<vector<int>>ans;
	vector<int>path;

	dfs(graph, ans, path, 0);

}

int main()
{
	vector<vector<int>>graph{
		{1,2},{3},{3},{}
	};
	return 0;
}