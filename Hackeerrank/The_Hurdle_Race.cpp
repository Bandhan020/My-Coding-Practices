#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i,j,mx=0,dose;
    cin>>n>>k;
    int height[n];
    for(i=0;i<n;i++){
        cin>>height[i];
        if(height[i]>mx){
            mx=height[i];
        }
    }
    if(mx>k){
       dose=mx-k;
    }
    else{
        dose=0;
    }
    cout<<dose<<endl;
    return 0;
}
