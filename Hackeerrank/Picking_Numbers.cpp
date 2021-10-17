#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    int arr[n],b[101]={0};
    for(i=0;i<n;i++){
        cin>>arr[i];
        b[arr[i]]++;
    }

    int mx=0;
    for(i=0;i<101-1;i++){
        if(b[i]+b[i+1]>mx){
            mx=b[i]+b[i+1];
        }
    }
    cout<<mx<<endl;
}
