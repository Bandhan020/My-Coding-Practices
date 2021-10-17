#include <bits/stdc++.h>
using namespace std;

int diagonalSum(vector<vector<int>>& mat) {
        int i,j,sum=0,n=mat.size();
        for(i=0;i<n;i++){
            sum=sum+mat[i][i];
            if(n%2!=0 && i==(n/2)){
               continue;
            }
            sum=sum+mat[i][n-1-i];
        }
        return sum;
    }
