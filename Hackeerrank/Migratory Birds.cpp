#include <bits/stdc++.h>
using namespace std;

int main(){

    int i,j,n,mx=0,temp=0,index;
    cin>>n;
    vector<int>arr(n), arr1(n,0);
    for(i=0;i<n;i++){
        cin>>arr[i];
        arr1[arr[i]]++;
        if(arr[i]>mx){
            mx=arr[i];
        }
    }
    for(i=0;i<=mx;i++){
        if(arr1[i]>temp){
            temp=arr1[i];
            index=i;
        }
    }
    cout<<index<<endl;




return 0;
}
