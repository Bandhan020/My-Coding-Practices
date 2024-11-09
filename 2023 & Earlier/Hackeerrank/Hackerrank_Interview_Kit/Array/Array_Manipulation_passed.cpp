#include <bits/stdc++.h>
using namespace std;


int main() {
    long int n,m,a,b,k,i,j,mx=0,x=0;

    cin>>n>>m;
    long int *arr=new long int[n+1]();

    for(i=0;i<m;i++)
    {
        cin>>a>>b>>k;
        arr[a]+=k;
        if((b+1)<=n) arr[b+1]-=k;
    }

    for(i=1;i<=n;i++)
    {
       x=x+arr[i];
       if(mx<x) mx=x;

    }

    cout<<mx;
    return 0;
}
