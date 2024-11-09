// C++ program to demonstrate how vectors
// can be passed by reference.
#include<bits/stdc++.h>
using namespace std;

// The vect is passed by reference and changes
// made here reflect in main()
void func(vector<int> &vect)
{
vect.push_back(30);
}

int main()
{
    int n;
	vector<int> vect;
    for(int i=0;i<2;i++){
        cin>>n;
        vect.push_back(n);
    }
	// vect.push_back(10);
	// vect.push_back(20);

	func(vect);

	for (int i=0; i<vect.size(); i++)
	cout << vect[i] << " ";

	return 0;
}
