#include <iostream>
#include <vector>
using namespace std;

void printN(int n) {
	if (n == 1) {
		cout << n<<endl;
		return;
	}
	printN(n - 1);
	cout << n << endl;
}

int main()
{
	int n=7;
	printN(n);
	return 0;
}