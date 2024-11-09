#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,q,i,j;
    cin>>n>>k>>q;
    int arr[n],ar1[q],ar2[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<q;i++){
        cin>>ar1[i];
    }

    for(i=0;i<n;i++){
        ar2[(i+k)%n]=arr[i];
    }

    for(i=0;i<q;i++){
        cout<<ar2[ar1[i]]<<endl;
    }

    return 0;
}
