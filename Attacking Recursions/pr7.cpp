#include <bits/stdc++.h>
using namespace std;

int fibo(int i, int j, int n, int l){

    int k=i+j;
    if(l==n-3){
        return k;
    }

    fibo(j,k,n,l+1);
}
int main()
{
    int i,j,n,l=0;
    cin>>n;
    cout<<fibo(1,1,n,l);
    return 0;
}
