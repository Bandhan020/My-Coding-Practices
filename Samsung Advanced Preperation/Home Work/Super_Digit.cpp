#include <bits/stdc++.h>
using namespace std;

int super_digit(int n,int s, int i){
    int r;
    if(n>=10){
    i++;
    while(n!=0){
        r=n%10;
        n=n/10;
        s=s+r;
        if(i==1){
            s=s*3;
        }
    }
    super_digit(s,0,i);
    }
    else{
        return n;
    }
}

int main()
{
    int n,i,j,k;
    cin>>n>>k;
    cout<<super_digit(n,0,0);
    return 0;
}
