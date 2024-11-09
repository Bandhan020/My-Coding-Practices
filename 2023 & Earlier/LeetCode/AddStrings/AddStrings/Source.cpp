#include <iostream>
#include <string>
using namespace std;

string addStrings(string num1, string num2) {
	char c;
	int sum;
	string s = "";
	sum = (num1[num1.size() - 1] + num2[num2.size() - 1])%48;
	c = sum + 48;
	s += c;
	return s;
}

int main()
{
	string num1, num2;
	cin >> num1 >>num2;
	cout << addStrings(num1, num2) << endl;
	return 0;

}

