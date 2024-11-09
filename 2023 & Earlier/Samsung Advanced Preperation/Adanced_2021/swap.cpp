#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    int i,j,n,temp;
    n=a.size();
    cin>>i>>j;
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    cout<<a<<endl;
    return 0;
}
