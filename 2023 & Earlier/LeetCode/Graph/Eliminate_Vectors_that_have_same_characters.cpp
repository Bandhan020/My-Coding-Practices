#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

// Function to sort a 1D vector of integers
vector<int> sortVector(const vector<int>& vec) {
    vector<int> sortedVec = vec;
    sort(sortedVec.begin(), sortedVec.end());
    return sortedVec;
}

int main() {
    vector<vector<int>> inputVectors = {
        {1, 2, 3, 4, 5},
        {3, 5, 1, 2, 4},
        {6, 7, 8, 9},
        {7, 6, 9, 8},
        {10, 11, 12},
        {12, 11, 10},
        {13, 14, 15},
        {13, 15, 14},
        {16, 17, 18},
        {18, 17, 16},
        {19, 20},
        {20, 19},
        {21, 22},
        {23, 24, 25},
        {26, 27},
        {28, 29, 30, 31},
        {31, 28, 30, 29},
        {32},
        {33, 34, 35},
        {35, 33, 34}
    };

    unordered_map<string, vector<int>> uniqueVectors;

    for (const vector<int>& vec : inputVectors) {
        vector<int> sortedVec = sortVector(vec);
        string key;
        for (int num : sortedVec) {
            key += (char)num;
        }
        if (uniqueVectors.find(key) == uniqueVectors.end()) {
            uniqueVectors[key] = vec;
        }
    }

    cout << "Unique 1D vectors with the same integers but different order:" << endl;
    for(auto it=uniqueVectors.begin();it!=uniqueVectors.end();it++){
        vector<int>s=it->second;
        cout<<"{";
        for(auto c:s){
            cout<<c<<",";
        }
        cout<<"}"<<endl;
    }


    return 0;
}
