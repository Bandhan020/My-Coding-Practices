#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[16],i,j,n,flag=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        for(i=0,j=(n/2)-1;i<(n/2);i++,j++){
            a[i]=a[j];
            a[j]=0;
        }
    }
    for(i=0;a[i]!=0;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}
