#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a[100000];
    int N,Q,L,R,j,k,r;
    cin>>N>>Q;
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    for(k=0;k<Q;k++){
        cin>>L>>R;
        int m=0;
        for(j=L-1;j<=R-1;j++){
            m=m+a[j];
        }
        r=m/(R-L+1);
        cout<<r<<endl;
    }
    return 0;
}
