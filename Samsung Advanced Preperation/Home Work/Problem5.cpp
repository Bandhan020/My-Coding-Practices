#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,m;
    cin>>t;
    for(m=0;m<t;m++){
    int n,i,j,k=0,l=0;
    cin>>n;
    int arr[n],arr1[n], arr2[2*n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(i=0;i<2*n;i++){
        cin>>arr2[i];
    }
    for(j=0;j<2*n;j++){
        if(arr[k]==arr2[j]){
            k++;
        }
        if(arr1[l]==arr2[j]){
            l++;
        }
    }
    if(k==n && l==n){
        cout<<"#"<<t<<"1"<<endl;
    }
    else{
        cout<<"#"<<t<<"-1"<<endl;
    }

    }
    return 0;
}
