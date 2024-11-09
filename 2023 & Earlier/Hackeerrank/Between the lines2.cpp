#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(a==0){
        return a;
    }
    if(b==0){
        return b;
    }
    if(a>b){
        gcd(a-b,b);
    }
    if(a<b){
        gcd(a, b-a);
    }
    if(a==b){
        return a;
    }
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}
