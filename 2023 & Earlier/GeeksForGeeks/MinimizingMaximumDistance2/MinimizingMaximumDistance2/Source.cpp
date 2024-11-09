#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6 };
	//{ 1, 3, 10, 2, 0, 9, 6 }
	int n = sizeof(arr) / sizeof(arr[0]);

	//bubble sort
	int temp;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	//sort(arr, arr+n);
	int ans[100];
	int p = 0, q = n - 1;
	for (int i = 0,j=0,k=n-1; i < n; i++) {
		if (i % 2 == 0) {
			ans[j++] = arr[i];
		}
		else {
			ans[k--] = arr[i];
		}
	}

	for (int a = 0; a < n; a++) {
		cout << ans[a] << " ";
	}
	cout << endl;

	return 0;
}