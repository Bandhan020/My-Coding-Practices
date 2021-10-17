#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s,t,i,j,a,b,m,n,ap,o,apple=0,orange=0;
    cin>>s>>t>>a>>b>>m>>n;
    for(i=0;i<m;i++){
        cin>>ap;
        if((a+ap>=s)&&(a+ap<=t)){
            apple++;
        }
    }
    for(i=0;i<n;i++){
        cin>>o;
        if((b+o>=s)&&(b+o<=t)){
            orange++;
        }
    }
    cout<<apple<<endl<<orange<<endl;
    return 0;
}
