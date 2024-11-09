#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d,i,t=0,pi=(22/7);
    cin>>d;
    for(i=0;i<d;i++){
    int r,x;
    cin>>r>>x;
    if((2*pi*r)<=(x*100)){
        t++;
    }
    }
    cout<<t<<endl;
    return 0;
}
