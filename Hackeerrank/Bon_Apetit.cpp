#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i,j,b,b1,b2,arr[100000],cost=0;
    cin>>n>>k;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>b;
    for(i=0;i<n;i++){
        if(i==k){
            continue;
        }
        cost=cost+arr[i];
    }
    b1=(cost/2);
    if(b1!=b){
        b2=b-b1;
        cout<<b2<<endl;
    }
    else{
        cout<<"Bon Appetit"<<endl;
    }

    return 0;
}
