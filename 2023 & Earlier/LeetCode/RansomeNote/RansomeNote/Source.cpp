#include <iostream>
#include <string>
#include<map>
using namespace std;

bool canConstruct(string ransomNote, string magazine) {
	int arr1[200] = { 0 };
	int arr2[200] = { 0 };
	for (int i = 0; i < ransomNote.size(); i++) {
		arr1[ransomNote[i]]++;
	}
	for (int i = 0; i < magazine.size(); i++) {
		arr2[magazine[i]]++;
	}
	for (int i = 0; i < ransomNote.size(); i++) {
		if (arr2[ransomNote[i]] < arr1[ransomNote[i]]) {
			return false;
		}
	}
	return true;
}

int main()
{
	string ransomNote, magazine;
	cin >> ransomNote >> magazine;
	if (canConstruct(ransomNote, magazine)) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}
	return 0;
}