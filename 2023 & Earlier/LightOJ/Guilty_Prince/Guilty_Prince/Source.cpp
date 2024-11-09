#include <iostream>
#include <queue>
using namespace std;

queue<pair<int, int>>q;
int cnt;

bool isValid(int x, int y, int visited[20][20], char arr[20][20],int w,int h) {
	if (x < h && y < w && x >= 0 && y >= 0 && visited[x][y] == 0 && arr[x][y] == '.') {
		return true;
	}
	return false;
}

int bfs(int x, int y, char arr[20][20], int visited[20][20],int w,int h) {
	q.push({ x,y });
	while (!q.empty()) {
		pair<int, int>source = q.front();
		int a = source.first;
		int b = source.second;
		q.pop();
		if (isValid(a + 1, b, visited, arr, w, h)) {
			q.push({ a + 1,b });
			visited[a + 1][b]=1;
			cnt++;
		}
		if (isValid(a, b+1, visited, arr, w, h)) {
			q.push({ a ,b+1 });
			visited[a][b+1]=1;
			cnt++;
		}
		if (isValid(a-1, b, visited, arr, w, h)) {
			q.push({ a-1 ,b });
			visited[a - 1][b]=1;
			cnt++;
		}
		if (isValid(a, b - 1, visited, arr, w, h)) {
			q.push({ a ,b - 1 });
			visited[a][b-1]=1;
			cnt++;
		}
	}
	return cnt;
}

int main()
{
	int T;
	cin >> T;
	for (int t = 1; t <= T; t++) {
		int W,H;
		cin >> W>>H;
		cnt = 1;
		char arr[20][20] = { {0} };
		int visited[20][20] = { 0 };
		for (int i = 0; i < H; i++) {
			for(int j=0;j<W;j++)
			{
				cin >> arr[i][j];
			} 
		}

		int flag = 0;
		int count;
		for (int i = 0; i < H; i++)
		{
			for (int j = 0; j < W; j++) {
				if (arr[i][j] == '@') {
					count=bfs(i, j,arr,visited,W,H);
					flag = 1;
					break;
				}
			}
			if (flag == 1) {
				break;
			}
		}

		cout << "Case " << t << ": " << count << endl;
	}
	return 0;
}