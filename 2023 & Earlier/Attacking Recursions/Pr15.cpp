#include <bits/stdc++.h>
using namespace std;

int revers_int(int n,int p){
    int r;
    if(n!=0){
        r=n%10;
        n=n/10;
        p=p*10+r;
        revers_int(n,p);
    }
    else{
        return p;
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<revers_int(n,0);
    return 0;
}
