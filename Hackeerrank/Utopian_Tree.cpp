#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,n,h,k;
    cin>>t;
    for(i=0;i<t;i++){
        h=1;
        cin>>n;
        k=1;
        if(n!=0){
            while(k<=n){
                if(k%2!=0){
                   h=h*2;
                }
                else{
                   h=h+1;
                }
            k++;
            }
            cout<<h<<endl;
        }
        else{
            cout<<h<<endl;
        }
    }
    return 0;

}
