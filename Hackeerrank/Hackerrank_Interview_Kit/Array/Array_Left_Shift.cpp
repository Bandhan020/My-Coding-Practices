#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,d,i,j;
    cin>>n>>d;
    int arr[n],arr2[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        arr2[(n-d+i)%n]=arr[i];
    }
    for(i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    return 0;
}
