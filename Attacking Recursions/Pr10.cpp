#include <bits/stdc++.h>
using namespace std;

int lcm(int a, int b, int i){
    int x=a*i;
    if(x%a==0 && x%b==0){
        return x;
    }
    lcm(a,b,i+1);
}
int main()
{
    int a,b,n;
    cin>>a>>b;
    cout<<lcm(a,b,1);
    return 0;
}
