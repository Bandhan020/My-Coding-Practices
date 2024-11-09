// C++ Program to minimize the
// maximum absolute difference
// between adjacent elements
// of the circular array

#include <bits/stdc++.h>
using namespace std;

#define ll long long

// Function to print the reordered array
// which minimizes the maximum absolute
// difference of adjacent elements
void solve(vector<int>& arr, int N)
{
	// Sort the given array
	sort(arr.begin(), arr.end());
	// Reorder the array
	int fl = 1,k=0;
	for(int i=0;i<=N/2;i++)
	{
		if((i%2 && fl) || !fl)
		{
			int x = arr[i];
			cout<<"erased: "<<x<<endl;
			cout<<"Inserted Position: "<<(N - 1 - k)<<endl;
			arr.erase(arr.begin() + i);
			arr.insert(arr.begin() + N - 1 - k, x);
			k++;
			fl = 0;
		}
	}

	cout<<endl<<endl<<endl;
	// Print the new ordering
	for (int i : arr)
		cout << i << " ";
}


// Driver code
int main()
{
	int N = 7;
	vector<int> arr = {1, 3, 10, 2, 0, 9, 6};
	solve(arr, N);

	return 0;
}

// this code is contributed by divyanshu gupta

