#include <stdio.h>
#include <string.h>

const int INF = 100;
int graph[21][21];
int length[21];
int visit[21];

void dijkstra(int start) {
	for (int i=0; i<21; i++)
		length[i] = INF;
	length[start] = 0;
	memset(visit, 0, sizeof(visit));

	for (int i=1; i<21; i++) {
		int min_lenth = INF, min;
		for (int j=1; j<21; j++) {
			if (!visit[j] && length[j]<min_lenth) {
				min_lenth = length[min=j];
			}
		}
		for (int j=1; j<21; j++) {
			if (graph[min][j]>-1 && (graph[min][j]+length[min])<length[j]) {
				length[j] = graph[min][j]+length[min];
			}
		}
		visit[min] = 1;
	}
}

int main(int argc, char** argv) {
	int turn=1;
	while (1) {
		memset(graph, -1, sizeof(graph));
		int number;
		for (int i=1; i<20; i++) {
			if(scanf("%d", &number) == EOF)
				return 0;
			int target;
			for (int j=0; j<number; j++) {
				scanf("%d", &target);
				graph[i][target] = 1;
				graph[target][i] = 1;
			}
		}
		int cases, start, stop;
		scanf("%d", &cases);
		printf("Test Set #%d\n", turn++);
		for (int i=0; i<cases; i++) {
			scanf("%d%d", &start, &stop);
			dijkstra(start);
			printf("%2d to %2d:%2d\n", start, stop, length[stop]);
		}
		printf("\n");
	}
	return 0;
}

