#include <iostream>
#include <string>
using namespace std;

int max_diff;


int max_color(int color[],int column[],int r) {
	int cnt1 = INT_MIN;
	int cnt2 = INT_MIN;
	int count1 = 0, count2 = 0;
	for (int i = 0, j = r; i <= r; i++, j--) {
		if (color[column[i]] == 1) {
			count1++;
			if (count1 > cnt1) {
				cnt1 = count1;
			}
		}
		else {
			count1 = 0;
		}
		if (color[column[j]] == 2) {
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

int permute(int depth[],int column[],int color[],int color2[], int l, int  r) {
	int color_count, color_count2;
	if (l == r) {
		int column2[10] = { 0 }; 
		int difference = INT_MIN;
		int diff;
		
		
		

		color_count = max_color(color2, column, r);

		for (int i = 0; i <= r; i++) {
			column2[i] = abs(column[i] - depth[i]);
		}
		for (int i = 0; i <= r; i++) {
			if (i == r) {
				diff = abs(column2[i] - column2[0]);
				if (diff > difference) {
					difference = diff;
				}
			}else{
				diff = abs(column2[i] - column2[i + 1]);
				if (diff > difference) {
					difference = diff;
				}
			}
		}

		if (difference < max_diff) {
			max_diff = difference;
			color_count2 = color_count;
		}
		else if(difference==max_diff){
			if (color_count > color_count2) {
				color_count2 = color_count;
			}
		}
	}
	for (int i = l; i <= r; i++) {
		swap(column[i], column[l]);
		permute(depth,column,color,color2, l + 1, r);
		swap(column[i], column[l]);
	}

	return color_count2;
}


int main()
{
	int T;
	cin >> T;
	
	for (int t = 0; t < T; t++) {
		int color2[100000] = { 0 };
		int column[10] = { 0 };
		int depth[10] = { 0 };
		int color[10] = { 0 };
		int n;
		int max_diff = INT_MAX;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> depth[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> column[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> color[i];
		}
		for (int i = 0; i <n; i++) {
			color2[column[i]] = color[i];
		}
		cout<<permute(depth,column,color,color2, 0, n - 1)<<endl;
	}
	return 0;
}