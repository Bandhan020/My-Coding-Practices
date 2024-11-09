#include <iostream>
#include <vector>
using namespace std;
#define MAX 20001

int f = 0, r = 0;
int q[MAX];

int visited[20001] = { 0 };
vector<int>v[20001] = {};

bool q_empty() {
	if (r == 0) {
		return true;
	}
	return false;
}

bool q_full() {
	if (r == MAX) {
		return true;
	}
	else {
		return false;
	}
}

void q_push(int n) {
	if (!q_full()) {
		q[r++] = n;
	}
	else {
		cout << "q is full" << endl;
	}
}

void q_pop() {
	if (!q_empty()) {
		for (int i = 0; i < r - 1; i++) {
			q[i] = q[i + 1];
		}
		r--;
	}
	else {
		cout << "q is empty" << endl;
	}
}

void show_q() {
	if (!q_empty()) {
		for (int i = 0; i < r; i++) {
			cout << q[i] << endl;
		}
	}
	else {
		cout << "q is empty" << endl;
	}
}

int q_front() {
	if (!q_empty()) {
		return q[0];
	}
	else {
		cout << "q is empty" << endl;
	}
}

int bfs(int i) {
	q_push(i);
	visited[i] = 1;
	int lykan = 1;
	int vampire = 0;
	while (!q_empty()) {
		int source = q_front();
		q_pop();
		
	}

};

int main() {
	/* Queue testing
	
	
	q_push(1);
	q_push(2);
	q_push(3);
	q_push(4);
	show_q();
	q_pop();
	q_pop();
	show_q();
	q_pop();
	q_pop();
	show_q();
	q_push(4);
	q_push(5);
	show_q();
	cout << q_front() << endl; */

	int T;
	cin >> T;
	for (int t = 0; t < T; t++) {
		int N;
		cin >> N;
		int x, y;
		for (int i = 0; i < N; i++) {
			cin >> x >> y;
			v[x].push_back(y);
			v[y].push_back(x);

		}
		int sum=0;
		for(int i=0;i<20001;i++)
		{
			if (visited[i] == 0 && !v[i].empty()) {
				sum = sum + bfs(i);
			}
		}

	return 0;

}