#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,t,i,j;
    cin>>t;
    for(i=0;i<t;i++){
    int c=0;
    cin>>n>>k;
    int a[n];
    for(j=0;j<n;j++){
        cin>>a[i];
        if(a[i]<=0){
            c++;
        }
    }
    if(c<=k){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    return 0;
}
