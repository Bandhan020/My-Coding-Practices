#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i=0,j=1,n,m,s;
    cin>>n;
    cout<<i<<" "<<j<<" ";
    for(m=0;m<n-2;m++){
        s=i+j;
        cout<<s<<" ";
        i=j;
        j=s;
    }
    return 0;
}
