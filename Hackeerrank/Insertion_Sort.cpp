#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[1000];
    int n,i,j,c=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int e=arr[n-1];
    for(i=n-2;i>=0;i--){
        if(arr[i]>e){
            arr[i+1]=arr[i];
        for(int j=0;j<n;j++){
            cout<<arr[j]<<" ";
       }
       cout<<endl;
        }
       else{
        c=1;
        arr[i+1]=e;
        for(int j=0;j<n;j++){
            cout<<arr[j]<<" ";
       }
       cout<<endl;
       break;
       }
    }
    if(c==0){
        arr[0]=e;
        for(int j=0;j<n;j++){
            cout<<arr[j]<<" ";
       }
       cout<<endl;
    }
    return 0;
}
