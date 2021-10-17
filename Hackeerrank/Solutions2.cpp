#include <bits/stdc++.h>

using namespace std;

vector <int> climbingLeaderboard(vector <int> scores, vector <int> alice) {
    vector<int> result;
    reverse(alice.begin(), alice.end());
    int lastIndex = 0;
    int lastRank = 1;

    for (int i = 0; i < alice.size(); i++) {

        int rank = lastRank;
        for (int j = lastIndex; j < scores.size(); j++) {
            if (alice[i] >= scores[j]) {
                lastIndex = j;
                break;
            }

            else if (alice[i] < scores[j]) {
                rank++;
            }

            if (scores[j] == scores[j+1] && rank != 1) {
                rank--;
            }
        }
        result.push_back(rank);
        lastRank = rank;
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> scores(n);
    for(int scores_i = 0; scores_i < n; scores_i++){
       cin >> scores[scores_i];
    }
    int m;
    cin >> m;
    vector<int> alice(m);
    for(int alice_i = 0; alice_i < m; alice_i++){
       cin >> alice[alice_i];
    }
    vector <int> result = climbingLeaderboard(scores, alice);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;


    return 0;
}

