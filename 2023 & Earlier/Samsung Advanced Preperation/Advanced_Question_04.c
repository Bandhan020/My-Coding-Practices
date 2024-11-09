#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,j,k,l;
    cin>>t;
    for(i=0;i<t;i++){
        int count=0;
        cin>>n;
        int b[11],c[11],d[11],temp[11];
        for(j=0;j<n;j++){
            cin>>b[j];
            cin>>c[j];
            cin>>d[j];
        }
        for(k=10000;k<=99999;k++){
            int p,q;
            for(l=0;l<n;l++){
                    q=4;
                while(b[l]!=0){
                    p=b[l]%10;
                    temp[q--]=p;
                    b[l]=b[l]/10;
                }

        }
    }
}
