#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,x,i,j,k,sum;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n>>x;
        int a[n];
        for(j=0;j<n;j++){
            cin>>a[j];
        }

        if(n==x){
            sum=0;
            for(j=0;j<n;j++){
                sum=sum+a[j];
            }
            if(sum%2!=0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
        for(j=0;j+x<n;j++){
                sum=a[j];
            for(k=j+1;k<j+x;k++){
                if(a[j]==a[k]){
                    continue;
                }
                else{
                    sum=sum+a[k];
                }
            }
        if(sum%2!=0){
            cout<<"YES"<<endl;
            break;
        }
        }
        }
    }
}
