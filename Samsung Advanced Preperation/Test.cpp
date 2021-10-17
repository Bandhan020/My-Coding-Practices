#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,t,n,cont;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        int b[11],c[11],d[11],temp[5],temp1[5],temp2[5];
        for(j=0;j<n;j++){
            cin>>b[j];
            cin>>c[j];
            cin>>d[j];
        }
        for(k=10000;k<=10001;k++){
            int p,q,r,s;
            for(l=0;l<n;l++){
                    q=4,s=4;
                    int k1=k;
                    cout<<k<<endl;
                    cout<<b[l]<<" "<<k1<<"  "<<endl;
                while(b[l]!=0){
                    p=b[l]%10;
                    temp[q--]=p;
                    b[l]=b[l]/10;
                }
                while(k1!=0){
                    r=k1%10;
                    temp1[s--]=r;
                    k1=k1/10;
                }
                for(j=0;j<5;j++){
                cout<<temp[j]<<"   ";
                cout<<temp1[j]<<"   ";
                cout<<endl<<endl;
            }

        }
    }
    }
    return 0;
}
