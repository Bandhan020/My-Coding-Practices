#include <iostream>
#define MAX 150
using namespace std;

int f = 0, r = 0;

struct node {
	int arr[4];
};

node make_node(int x, int y, int dis, int k) {
	node temp;
	temp.arr[0] = x;
	temp.arr[1] = y;
	temp.arr[2] = dis;
	temp.arr[3] = k;
	return temp;
}

node q[150];

bool is_q_empty()
{
	if (f == r) {
		return true;
	}
	return false;
}

bool is_q_full() {
	if (r == MAX) {
		return true;
	}
	return false;
}

void push_q(int x, int y, int dis, int k)
{
	if (!is_q_full()) {
		node temp;
		temp = make_node(x, y, dis, k);
		q[r++] = temp;
	}
	else {
		cout << "Queue is full" << endl;
	}
	
}

node pop_q() {
	if (!is_q_empty()) {
		node temp = q[f];
		for (int i = f; i < r - 1; i++) {
			q[i] = q[i + 1];
		}
		r--;
		return temp;

	}
	else {
		cout << "Queue is empty" << endl;
	}
}

void show_q() {
	if (!is_q_empty()) {
		for (int i = f; i < r; i++) {
			cout << q[i].arr[0] << " " << q[i].arr[1] << " " << q[i].arr[2] << " " << q[i].arr[3] << endl;
		}
		cout << endl;
	}
	else {
		cout << "Queue is empty" << endl;
	}
}


int solve(int grid[][3], int k) {
	int row = 5, col = 3;
	int vis[5][3];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			vis[i][j] = -1;
		}
	}

	push_q(0, 0, 0, k);
	while (!is_q_empty()) {
		node temp = pop_q();
		int x = temp.arr[0], y = temp.arr[1];

		if (x == row - 1 && y == col - 1) {
			return temp.arr[2];
		}

		if (x < 0 || y < 0 || x >= row || y >= col) {
			continue;
		}

		if (grid[x][y] == 1) {
			if (temp.arr[3] > 0) {
				temp.arr[3]--;
			}
			else {
				continue;
			}
		}

		if (vis[x][y] != -1 && vis[x][y] >= temp.arr[3]) {
			continue;
		}
		
		vis[x][y] = temp.arr[3];

		push_q(x + 1, y, temp.arr[2] + 1, temp.arr[3]);
		push_q(x, y + 1, temp.arr[2] + 1, temp.arr[3]);
		push_q(x - 1, y, temp.arr[2] + 1, temp.arr[3]);
		push_q(x, y - 1, temp.arr[2] + 1, temp.arr[3]);

	}

	return -1;
}

int main()
{
	int grid[5][3] = { {0, 0, 0},{1, 1, 0},{0, 0, 0},{0, 1, 1},{0, 0, 0} };
	cout << solve(grid, 1);
	return 0;
}