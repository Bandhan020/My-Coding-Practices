#include <iostream>
#include <stack>
using namespace std;

void remove_middle(stack<int>&s, int length, int mid) {
	if (length == mid) {
		s.pop();
		return;
	}
	int temp = s.top();
	s.pop();
	remove_middle(s, length - 1, mid);
	s.push(temp);
}

int main()
{
	stack<int>s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	int length = s.size();
	cout << length << endl;
	int mid = s.size()/2+1;
	cout<<mid<<endl;
	remove_middle(s, length,mid);

	while (!s.empty()) {
		cout << s.top() << endl;
		s.pop();
	}

	return 0;
}

