#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,i,j=2, ar1[10], ar2[10],c=0,d,e=0;
    cin>>n>>m;
    for(i=0;i<n;i++){
        cin>>ar1[i];
    }
    for(i=0;i<m;i++){
        cin>>ar2[i];
    }
    int f=ar1[n-1];
        for(i=0;i<n;i++){
            if((f%ar1[i])!=0){
                c=1;
            }
        }
        if(c!=0){
            for(i=0;i<n-1;i++){
                f=f*ar1[i];
            }
        }
    while(f<=ar2[0]){
        d=0;
        for(i=0;i<m;i++){
            if(ar2[i]%f!=0){
                d=1;
            }
        }
        if(d==0){
            e++;
        }
        cout<<e<<endl;
        f=f*j;
        j++;
    }
    cout<<e<<endl;
    return 0;
}
