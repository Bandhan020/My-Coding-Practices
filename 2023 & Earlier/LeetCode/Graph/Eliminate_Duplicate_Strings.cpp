#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    vector<string> inputStrings = {"apple", "banana", "cherry", "apple", "date", "banana", "grape", "fig", "date", "kiwi", "mango", "pear", "grape", "strawberry", "kiwi", "peach", "pear", "pineapple", "cherry"};

    set<string> uniqueStrings;

    for (auto it : inputStrings) {
        uniqueStrings.insert(it);
    }

    cout << "Unique strings in the array are:" << endl;

    for (auto it : uniqueStrings) {
        cout << it << endl;
    }

    return 0;
}

