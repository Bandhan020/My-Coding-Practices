#include <iostream>
#include <algorithm>
using namespace std;

// Function to print the reordered array
// which minimizes the maximum absolute
// difference of adjacent elements
void solve(int arr[], int N)
{
	// Sort the given array
	sort(arr, arr + N);
	// Reorder the array
	int fl = 1, k = 0;
	for (int i = 0; i <= N / 2; i++)
	{
		if ((i % 2 && fl) || !fl)
		{
			int x = arr[i];
			for (int j = i; j < N - 1 - k; j++)
			{
				arr[j] = arr[j + 1];
			}
			arr[N - 1 - k] = x;
			k++;
			fl = 0;
		}
	}
	// Print the new ordering
	for (int i = 0; i < N; i++)
		cout << arr[i] << " ";
}

// Driver code
int main()
{
	int N = 7;
	int arr[] = { 1, 3, 10, 2, 0, 9, 6 };
	solve(arr, N);

	return 0;
}
