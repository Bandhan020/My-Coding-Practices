#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[100001],n,k,i,j;
    cin>>n>>k;
    int b[k];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    memset(b,0,sizeof(b));
    for(i=0;i<n;i++){
        b[a[i]%k]++;
    }
    if(k%2==0){
        b[k/2]=min(b[k/2],1);
    }
    int res=min(b[0],1);
    for(i=1;i<=k/2;i++){
        res=res+max(b[i],b[k-i]);
    }
    cout<<res<<endl;
    return 0;
}
