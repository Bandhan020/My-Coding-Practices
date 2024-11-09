#include <bits/stdc++.h>
using namespace std;
int arr[101][101];

int gridtraveller(int m, int n){
    if(arr[m][n]){
        return arr[m][n];
    }
    if(m==1 && n==1){
        return 1;
    }
    if(m==0 || n==0){
        return 0;
    }
    arr[m][n] = gridtraveller(m-1, n) + gridtraveller(m, n-1);
    return arr[m][n];
}

int main()
{
    int m,n,i,paths=0;
    cin>>m>>n;
    paths=gridtraveller(m,n);
    cout<<paths<<endl;
    return 0;
}