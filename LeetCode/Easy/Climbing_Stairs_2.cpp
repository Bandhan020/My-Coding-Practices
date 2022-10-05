//Fibonacchi Series

#include <bits/stdc++.h>
using namespace std;

 int climbStairs(int n) {
    int a=1,b=1,ans;
    for(int i=2;i<=n;i++){
        ans=a+b;
        a=b;
        b=ans;
    }
    return ans;    
    }

int main()
{
    int n;
    cin>>n;
    cout<<climbStairs(n)<<endl;
    return 0;
}