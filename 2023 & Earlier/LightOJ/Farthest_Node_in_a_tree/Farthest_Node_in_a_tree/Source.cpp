#include <iostream>
#include <vector>
using namespace std;

vector < vector<pair<int, int>>> graph;
bool vis[30005];
int maxi,start, end;

int explore(int j, int dis) {
	int x, w;
	if (dis > maxi) {
		maxi = dis;
		start = j;
	}

	for (int i = 0; i < graph[j].size(); i++) {
		x = graph[j][i].first;
		w = graph[j][i].second;

		if (vis[x] == 0) {
			vis[x] = 1;
			explore(x, dis + w);
		}
	}

}


int main()
{
	int x, y, w, t, temps, n;

}