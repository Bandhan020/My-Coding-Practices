// C++ program to print all
// permutations with duplicates allowed
#include <bits/stdc++.h>
using namespace std;


// Function to print permutations of string
// This function takes three parameters:
// 1. String
// 2. Starting index of the string
// 3. Ending index of the string.
void permute(string a, int l, int r)
{
	// Base case
	if (l == r){
        cout<<a<<endl;
        cout<<"return"<<endl;
	}

	else
	{
		// Permutations made
		for (int i = l; i <= r; i++)
		{

			// Swapping done
			cout<<"l= "<<l<<"  r="<<r<<endl;
			swap(a[l], a[i]);
			cout<<"swap-1: (a["<<l<<"], "<<"a["<<i<<"])....."<<a[l]<<" is swapped by "<<a[i]<<endl;

			// Recursion called
			cout<<"recursion called : "<<"permute(a,"<<l+1<<", "<<r<<" )..."<<endl<<endl;
			permute(a, l+1, r);

			//backtrack
			swap(a[l], a[i]);
			cout<<"swap-2: (a["<<l<<"], "<<"a["<<i<<"])....."<<a[l]<<" is swapped by "<<a[i]<<endl<<endl<<endl<<endl<<endl<<endl;
		}
	}

}

// Driver Code
int main()
{
	string str = "ABC";
	int n = str.size();
	permute(str, 0, n-1);
	return 0;
}

// This is code is contributed by rathbhupendra
