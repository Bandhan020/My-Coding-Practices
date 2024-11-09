#include <stdio.h>
#include <string.h>

const int INF = 100;
int graph[21][21];

void floyd() {
	for (int i=1; i<21; i++)
		for (int j=1; j<21; j++)
			for (int k=1; k<21; k++) {
				if (graph[j][i]+graph[i][k] < graph[j][k]) {
					graph[j][k] = graph[j][i]+graph[i][k];
				}
			}
}

int main(int argc, char** argv) {
	int turn=1;
	while (1) {
		for (int i=0; i<21; i++)
			for (int j=0; j<21; j++)
				graph[i][j] = i==j ? 0 : INF;
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
			floyd();
			printf("%2d to %2d:%2d\n", start, stop, graph[start][stop]);
		}
		printf("\n");
	}
	return 0;
}
