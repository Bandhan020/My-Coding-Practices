#include <iostream>
#include <string>
using namespace std;

void solve(string ip, string op) {
	if (ip.size() == 0) {
		cout << op << endl;
		return;
	}
	string op1 = op;
	string op2 = op;
	op1.push_back(' ');
	op1.push_back(ip[0]);
	op2.push_back(ip[0]);
	ip.erase(0, 1);
	solve(ip, op1);
	solve(ip, op2);
}

void permutations(string ip, string op) {
	op.push_back(ip[0]);
	ip.erase(0,1);
	solve(ip, op);
}

int main()
{
	string ip, op;
	cin >> ip;
	op = "";
	permutations(ip, op);
	return 0;
}