#include <iostream>
#include <stack>
using namespace std;

void transfer(stack<int>& s, stack<int>& d, stack<int>& h) {
	if (s.size() == 1) {
		d.push(s.top());
		s.pop();
		return;
	}
	h.push(s.top());
	s.pop();
	transfer(s, d, h);
	d.push(h.top());
	h.pop();
}

int main()
{
	stack<int>s, d, h;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	transfer(s, d, h);
	while (!d.empty()) {
		cout << d.top() << endl;
		d.pop();
	}
	return 0;
}