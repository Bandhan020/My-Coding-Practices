#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,j,k,l,d,e,cnt;
    cin>>t;
    for(i=0;i<t;i++){
        int cont=0;
        cin>>n;
        int b[11],c[11],d[11],temp[5],temp1[5],temp2[5];
        for(e=0;e<5;e++){
            temp2[e]=0;
        }
        for(j=0;j<n;j++){
            cin>>b[j];
            cin>>c[j];
            cin>>d[j];
        }
        for(k=10000;k<=99999;k++){
            int p,q,r,s;
            for(l=0;l<n;l++){
                    q=4,s=4;
                    int k1=k;
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
            cnt=0;
            for(q=0;q<5;q++){
                if(temp[q]==temp1[q]){
                    cnt++;
                    temp2[q]++;
                }
            }
            if(cnt!=c[l]){
                break;
                }
            else{
                cnt=0;
                for(j=0;j<5;j++){
                    if(temp2[j]==0){
                        for(q=0;q<5;q++){
                            if(temp2[q]==0){
                                if(temp[j]==temp1[q]){
                                    cnt++;
                                    temp2[q]++;
                                }
                            }
                        }
                    }
                }
             if(cnt!=d[l]){
                break;
             }
             else{
                cont++;
             }
            }
        }
    }
    cout<<cont<<endl;
}
return 0;
}
