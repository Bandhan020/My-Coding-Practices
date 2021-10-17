#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,s=5,l,c=0;
    cin>>n;
    for(i=1;i<=n;i++){
        l=floor(s/2);
        c=c+l;
        s=l*3;
    }
    cout<<c<<endl;
    return 0;
}
