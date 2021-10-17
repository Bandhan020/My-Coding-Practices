#include<bits/stdc++.h>
using namespace std;

int main(){

    int ar[100];
    int k,n,i,j,c = 0;
    cin>>n>>k;
    for(i=0;i<n;i++){
        cin>>ar[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if((ar[i]+ar[j])%k == 0){
                    c++;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}
