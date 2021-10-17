#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    int sum;
    if(n==1){
    return 1;
    }
    sum=n*fact(n-1);
    return sum;
}
int main()
{
    int m,factorial;
    cin>>m;
    factorial=fact(m);
    cout<<factorial<<endl;
}
