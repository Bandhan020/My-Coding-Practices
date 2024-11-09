#include <iostream>
#include <vector>
using namespace std;

void combinations(int pos, vector<int>& v, vector<int>& path, int k, vector<vector<int>>&res) {
    if (k == 0) {
        res.push_back(path);
        return;
    }

    if (pos == v.size()) {
        return;
    }

    for (int i = pos; i < v.size(); i++) {
        path.push_back(v[i]);
        combinations(i + 1, v, path, k - 1,res);
        path.pop_back();
    }
}


void permutations(vector<int>& v, vector<int>& path, vector<bool>& visited, int k, vector<vector<int>>&res) {
    if (k == 0) {
        res.push_back(path);
        return;
    }

    for (int i = 0; i < v.size(); i++) {
        if (visited[i] == false) {
            path.push_back(v[i]);
            visited[i] = true;
            permutations(v, path, visited, k - 1,res);
            path.pop_back();
            visited[i] = false;
        }
    }
}


int check_charge(vector<int>& marbles, vector<int>& holes, int k) {
    int total_charge,dis,charge,status=1;
    for (int i = 0; i < k; i++) {
        total_charge = 0;
        if (i == 0) {
            for(int j=1;j<k;j++){
                dis = holes[j] - holes[i];
                charge = (marbles[i] * marbles[j]) / dis;
                total_charge = total_charge + charge;
            }
            if (total_charge != 0) {
                status = -1;
                break;
            }
        }
        else if (i == k-1) {
            for (int j = 0; j < i; j++) {
                dis = holes[i] - holes[j];
                charge = (marbles[i] * marbles[j]) / dis;
                total_charge = total_charge + charge;
            }
            if (total_charge != 0) {
                status = -1;
                break;
            }
        }

        else {
            int left = 0, right = 0;
            for (int j = 0; j < i; j++) {
                dis = holes[i] - holes[j];
                charge = (marbles[i] * marbles[j]) / dis;
                left = left + charge;
                //cout << "k=" << k << "    left=" << " " << left << endl;
            }

            for (int j = i + 1; j < k; j++) {
                dis = holes[j] - holes[i];
                charge = (marbles[i] * marbles[j]) / dis;
                right = right + charge;
                //cout << "k=" << k << "    right=" << " " << right << endl;
            }

            if (left != right) {
                status = -1;
                break;
            }
        }
    }
    //cout << "Status = " << status << endl;
    return status;
}


int main()
{
    int t, T;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        int M, N;
        cin >> N >> M;
        vector<int>marbles;
        vector<int>holes;

        int temp;
        for (int i = 0; i < N; i++) {
            cin >> temp;
            marbles.push_back(temp);
        }

        for (int i = 0; i < M; i++) {
            cin >> temp;
            holes.push_back(temp);
        }


        int res = 0;
        vector<vector<int>>holes_combination;
        vector<vector<int>>marbles_permutation;
        vector<int>path;

        int m_size= holes.size();
        int n_size = marbles.size();
        int k;

        if (n_size <= m_size) {
            k = n_size;
        }
        else {
            k = m_size;
        }

        for (int i = k; i >= 1; i--) {
            combinations(0, holes, path, i, holes_combination);
            path.clear();

            vector<bool>visited(marbles.size(), false);
            permutations(marbles, path, visited, i, marbles_permutation);

            int status=0;
            for (int j = 0; j < holes_combination.size(); j++) {
                for (int l = 0; l < marbles_permutation.size(); l++) {
                    status = check_charge(marbles_permutation[l], holes_combination[j], i);
                    //cout << "f Status = " << status << endl;
                    if (status == 1) {
                        res = i;
                        break;
                    }
                }
                if (status==1) {
                    break;
                }
            }

            if (status == 1) {
                break;
            }


            path.clear();
            marbles_permutation.clear();
            holes_combination.clear();
        }

        cout << "#" << t << " " << res << endl;
        
    }
	return 0;
}

/*
Input:
5
5 4
-3 5 -4 7 15
-5 0 3 6
3 4
7 8 9
1 8 -9 0
4 5
9 8 3 2
-2 2 0 6 -6
6 5
3 -1 -2 10 6 5
7 0 -3 -6 -9
7 7
84 -186 62 -147 -196 32768 -93
9999992 -9999990 9999999 9999996 0 -9999996 9999999

Output:
#1 3
#2 1
#3 2
#4 4
#5 7


*/