#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,r,b,y,i,j,k,d,s,m=0,r1,b1,y1;
    cin>>n>>r>>b>>y;
    int arr[n][3];
    for(i=0;i<n;i++){
        for(j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    for(k=0;k<n;k++){
        r1=r;b1=b;y1=y;
        s=0;
        d=0;
        while(d<3 && arr[k][0]<=r1 && arr[k][1]<=b1 && arr[k][2]<=y1){
            d++;
            s=d;
            r1=r1-arr[k][0];
            b1=b1-arr[k][1];
            y1=y1-arr[k][2];
        }

        //cout<<"d ="<<d<<" "<<"s ="<<s<<" "<<"r1 ="<<" "<<r1<<" b1 ="<<" "<<b1<<" y1="<<" "<<y1<<endl;
        for(j=0;j<n;j++){
           d=0;
           if(j!=k){
           while(d<3 && arr[j][0]<=r1 && arr[j][1]<=b1 && arr[j][2]<=y1){
            d++;
            s++;
            r1=r1-arr[j][0];
            b1=b1-arr[j][1];
            y1=y1-arr[j][2];
        }
        }

    }

    if(s>m){
            m=s;
        }
    }
    cout<<m<<endl;
    return 0;
}
