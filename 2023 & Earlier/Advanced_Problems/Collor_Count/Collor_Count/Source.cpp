#include <iostream>
using namespace std;


int max_color(int color[],int r) {
	int cnt1 = INT_MIN;
	int cnt2 = INT_MIN;
	int count1 = 0, count2 = 0;
	for (int i = 0, j = r; i <= r; i++, j--) {
		if (color[i] == 1) {
			count1++;
			if (count1 > cnt1) {
				cnt1 = count1;
			}
		}
		else {
			count1 = 0;
		}
		if (color[j] == 2) {
			count2++;
			if (count2 > cnt2) {
				cnt2 = count2;
			}
		}
		else {
			count2 = 0;
		}
	}
	return (cnt1 > cnt2 ? cnt1 : cnt2);
}



int main()
{
	int arr[] = { 1,2,2,2,1,1 };
	cout<<max_color(arr,5)<<endl;
	return 0;
}