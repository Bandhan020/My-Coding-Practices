#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

// Function to sort the characters in a string
string sortString(const string& str) {
    string sortedStr = str;
    sort(sortedStr.begin(), sortedStr.end());
    return sortedStr;
}

int main() {
    vector<string> inputStrings = {"apple", "banana", "cherry", "papel", "naabna", "mango", "orange", "peach", "rape", "grape", "kiwi", "apple", "fig", "grape", "ikwi", "pear", "banana", "cherry", "banana"};

    unordered_map<string, string> uniqueStrings;

    for (const string& str : inputStrings) {
        string sortedStr = sortString(str);
        if (uniqueStrings.find(sortedStr) == uniqueStrings.end()) {
            uniqueStrings[sortedStr] = str;
        }
    }

    cout << "Unique strings with the same characters but different order:" << endl;
    for (const auto& entry : uniqueStrings) {
        cout << entry.second << endl;
    }

    return 0;
}

