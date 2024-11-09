#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,prod,carry,sz,arr[10000];
    cin>>n;
    arr[0]=1;
    sz=1;
    for(i=2;i<=n;i++){
        carry=0;
        for(j=0;j<sz;j++){
            prod=arr[j]*i+carry;
            arr[j]=prod%10;
            carry=prod/10;
        }
        while(carry){
            arr[sz]=carry%10;
            carry=carry/10;
            sz++;
        }

    }
    for(i=sz-1;i>=0;i--){
        cout<<arr[i];
    }
    cout<<endl;
}
