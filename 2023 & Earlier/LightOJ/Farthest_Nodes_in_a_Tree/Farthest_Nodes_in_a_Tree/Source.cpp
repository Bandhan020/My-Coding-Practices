#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int n;
		cin >> n;
		int visited[30000];
		int distance[30000];
		
		for(int i=0;i<300000;i++)
		{
			visited[i]=0;
		}

		for (int i = 0; i < 300000; i++)
		{
			cout<<visited[i]<<endl;
		}
	return 0;
}