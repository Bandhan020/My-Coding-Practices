#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,f=1,i;
    cin>>N;
    for(i=1;i<=N;i++){
        f=f*i;
    }
    cout<<f;
    return 0;
}
