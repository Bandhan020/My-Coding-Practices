#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,k,a[200000];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int j=n-1;
    if(a[j]==0){
        while(a[j]!=1){
            j--;
        }
        k=j+1;
    }
    else{
        while(a[j]!=0){
            j--;
        }
        k=j+1;
    }
    cout<<k<<endl;
    return 0;
}
