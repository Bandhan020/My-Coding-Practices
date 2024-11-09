#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m,a,b,k,i,j,mx=-11111111;
    cin>>n>>m;
    long long int *arr=(long long int*)malloc(n*sizeof(long long int));
    for(i=0;i<n;i++){
        arr[i]=0;
    }
    for(i=0;i<m;i++){
        cin>>a>>b>>k;
        for(j=a-1;j<b;j++){
            arr[j]=arr[j]+k;
        }
    }
    for(i=0;i<n;i++){
        if(arr[i]>mx){
            mx=arr[i];
        }
    }
    cout<<mx<<endl;
    return 0;
}
