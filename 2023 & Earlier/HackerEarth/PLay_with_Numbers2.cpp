#include <bits/stdc++.h>
using namespace std;

long long int a[100000];
int main()
{

    int N,Q,i,r,L,R,result;
    cin>>N>>Q;
    int sum[N];
    for(i=0;i<N;i++){
        cin>>a[i];
    }
    int j=0;
    for(i=0;i<N;i++){
        sum[i]=a[i]+j;
        j=sum[i];
        cout<<sum[i]<<endl;
    }
    for(i=0;i<Q;i++){
    cin>>L>>R;
    r=(sum[R-1]-sum[L-1])/(R-L+1);
    result=floor(r);
    cout<<result<<endl;
    }
    return 0;
}
