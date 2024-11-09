#include <bits/stdc++.h>
using namespace std;

int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> matrix(m, vector<int> (n, 0));
        int i,j,r,c,k;
        for(i=0;i<indices.size();i++){
            r=indices[i][0];
            c=indices[i][1];
            k=0;
            while(k!=n){
                matrix[r][k]++;
                k++;
            }
            k=0;
            while(k!=m){
                matrix[k][c]++;
                k++;
            }
        }
        int countt=0;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(matrix[i][j]%2!=0){
                    countt++;
                }
            }
        }
        return countt;
    }
