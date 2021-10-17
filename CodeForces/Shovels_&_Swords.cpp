#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,a,b,n,r;
    cin>>t;

    for(i=0;i<t;i++){
        cin>>a>>b;
        cout<<a<<b<<endl;

        if(a==0 || b==0){
            cout<<"0"<<endl;
        }
        else if(a>b){
            n=a/2;
            if(b/n==0){
                r=b%n;
                cout<<r<<endl;
            }
            else{
                r=n;
                cout<<r<<endl;
            }
        }

        else{
            n=b/2;
            if(a/n==0){
                r=a%n;
                cout<<r<<endl;
            }
            else{
                r=n;
                cout<<r<<endl;
            }
        }
    }
    return 0;
}
