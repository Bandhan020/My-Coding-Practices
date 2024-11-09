/*#include <iostream>
using namespace std;

int main()
{
	int n;
	int arr[1000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int arr2[1000];
	int sum, k = 0;
	for (int i = 0; i < n; i++) {
		sum = 1;
		for (int j = 0; j < n; j++) {
			if (i == j) {
				continue;
			}
			else {
				sum = sum * arr[j];
			}
		}
		arr2[k++] = sum;
	}

	for (int i = 0; i < n; i++) {
		cout << arr2[i] << endl;
	}
	return 0;
}
*/


#include <iostream>
#include <vector>

using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
	int n = nums.size();
	vector<int> result(n, 1);

	int left = 1, right = 1;

	for (int i = 0, j = n - 1; i < n; i++, j--) {
		result[i] *= left;
		cout << "Iteration: " << i + 1 << " "<<i<<"-th index of result  "<<result[i]<<endl;
		result[j] *= right;
		cout << "Iteration: " << i + 1 <<" "<<j<<"-th index of result   "<< result[i]<<endl<<endl;

		left *= nums[i];
		cout << "Left = " << left << endl;
		right *= nums[j];
		cout << "Right = " << right << endl;
		cout << i + 1 << " iteration ended" << endl << endl << endl;
	}

	return result;
}

int main() {
	vector<int> nums = { 5, 4, 3 };
	vector<int> result = productExceptSelf(nums);

	for (auto x : result) {
		cout << x << " ";
	}
	cout << endl;

	return 0;
}
