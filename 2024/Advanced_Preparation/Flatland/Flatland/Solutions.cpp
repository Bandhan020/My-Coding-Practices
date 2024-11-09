#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int minCostToEqualize(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    int minVal = 9, maxVal = 1;
    int totalSum = 0;

    // Find min, max values and calculate total sum
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            minVal = min(minVal, grid[i][j]);
            maxVal = max(maxVal, grid[i][j]);
            totalSum += grid[i][j];
        }
    }

    int minCost = INT_MAX;

    // Try equalizing to each value from minVal to maxVal
    for (int target = minVal; target <= maxVal; target++) {
        int currentCost = 0;
        int surplus = 0, deficit = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int diff = grid[i][j] - target;
                if (diff > 0) surplus += diff;
                else if (diff < 0) deficit -= diff;
            }
        }

        // Calculate cost using operations 3 and 4
        currentCost = min(surplus, deficit);
        int remainingDiff = abs(surplus - deficit);

        // If there's still a difference, use operations 1 or 2
        currentCost += remainingDiff * 2;

        minCost = min(minCost, currentCost);
    }

    return minCost;
}

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<int>> grid(m, vector<int>(n));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    int result = minCostToEqualize(grid);
    cout << result << endl;

    return 0;
}
/* input

3 3
4 6 6
5 6 7
6 6 8

output: 2

You have a grid of size m*n. The value of each cell can be from 1 to 9. You have to make all cell values equal by following steps:
1. You can increase any cell value by 1, that will cost 2
2. You can decrease any cell value by 1, that will cost 2
3. You can decrease any cell value by 1, and increase another cell value by 1, that will cost 1
4. You can decrease any cell value by 2, and increase another two cell values by 1, that will cost 1

Now what will be the minimum cost to make all cell values equal? Write a cpp program to solve this problem


*/