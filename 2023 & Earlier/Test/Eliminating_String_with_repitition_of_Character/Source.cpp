#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

// Function to compare two vectors for equality
bool vectorsAreEqual(const vector<int>& v1, const vector<int>& v2) {
    return v1.size() == v2.size() && equal(v1.begin(), v1.end(), v2.begin());
}

int main() {
    vector<vector<int>> inputVectors = {
        {1, 2, 3},
        {4, 5},
        {1, 2, 3},  // Duplicate
        {6, 7, 8},
        {4, 5},    // Duplicate
        {6, 7, 8},
        {9, 10},
        {11, 12},
        {13, 14},
        {13, 14},  // Duplicate
        {15, 16},
        {17, 18},
        {19, 20},
        {21, 22},
        {23, 24},
        {23, 24},  // Duplicate
        {25, 26, 27},
        {28, 29},
        {30, 31},
        {32, 33}
    };

    set<vector<int>> uniqueVectors;

    vector<vector<int>> result;

    for (const vector<int>& vec : inputVectors) {
        if (uniqueVectors.find(vec) == uniqueVectors.end()) {
            uniqueVectors.insert(vec);
            result.push_back(vec);
        }
    }

    cout << "2D vector with duplicate 1D vectors excluded:" << endl;
    for (const vector<int>& vec : result) {
        for (int num : vec) {
            cout << num << ' ';
        }
        cout << endl;
    }

    return 0;
}
