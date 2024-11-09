#include <bits/stdc++.h>
using namespace std;

void o_arr(int a[], int i, int n){
    if(i>(n/2)){
        return;
    }
    cout<<a[i]<<" "<<a[n-i]<<endl;
    o_arr(a,i+1,n);
}
int main()
{
    int a[10],i,n,j=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    o_arr(a,j,n-1);
    return 0;
}
