#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool hasUniqueCharacters(string str) {
    unordered_set<char> charSet;
    for (char c : str) {
        if (charSet.count(c) > 0) {
            return false; // Character repetition found
        }
        charSet.insert(c);
    }
    return true; // All characters are unique
}

int main() {
    vector<string> inputStrings = {"apple", "banana", "cherry", "date", "kiwi", "mango", "pear", "grape", "strawberry", "peach", "fig", "apple", "grape", "kiwi", "pear", "banana", "cherry", "date", "pineapple"};

    cout << "Strings with unique characters:" << endl;

    for (auto str : inputStrings) {
        if (hasUniqueCharacters(str)) {
            cout << str << endl;
        }
    }

    return 0;
}

