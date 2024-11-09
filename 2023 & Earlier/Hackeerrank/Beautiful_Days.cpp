#include <bits/stdc++.h>
using namespace std;

int revers(int a){
    int r,inv=0;
    while(a!=0){
        r=a%10;
        a=a/10;
        inv=inv*10+r;
    }
    return inv;
}

int main()
{
    int i,j,k,m,no=0;
    cin>>i>>j>>k;
    for(m=i;m<=j;m++){
        if((m-revers(m))%k==0){
            no++;
        }
    }
    cout<<no<<endl;
}
