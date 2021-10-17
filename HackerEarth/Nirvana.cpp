#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,t,r,p=1,m=0;
    cin>>n;
    for(i=0;i<10;i++){
        t=n;
        while(t != 0){
            r=t%10;
            p=p*r;
            t= t/10;
            }

        if(p>m){
            m=p;
        }
        p=1;
        n--;

    }
    cout<<m<<endl;
    return 0;
}
